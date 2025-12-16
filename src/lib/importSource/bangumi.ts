import type { ImportSource, AutoEditor } from "./common";
import { DefaultDict } from "./common";
import { getSubjectInfo, getSubjectEpInfo, getSubjectRelaPerson, type SubjectInfo, type SubjectRelaPerson } from "$lib/client";
import { assembleRelease } from "$lib/bangumiUtils";

export class Bangumi implements ImportSource {
    name = "Bangumi";
    match = /^https:\/\/(?:bangumi\.tv|bgm\.tv)\/subject\/(\d+)$/;
    warning = "";
    options = [
        { id: "trackListCredits", text: "曲目列表与制作人员", default: true },
        { id: "importRela", text: "导入关联的人物", default: true },
        { id: "titleIntro", text: "标题与简介", default: true },
        { id: "infobox", text: "Infobox 与公共标签", default: true },
        { id: "infoboxKeepRelaField", text: "保留「艺术家」字段的内容", default: false },
        { id: "infoboxOverride", text: "完全覆写现有的 Infobox", default: false },
    ];

    private sid: number = 0;
    private subjectInfo: Promise<SubjectInfo> | null = null;

    async load(url: string): Promise<string> {
        this.sid = parseInt(this.match.exec(url)![1]);
        this.subjectInfo = getSubjectInfo(this.sid);
        const si = await this.subjectInfo;
        return si.typeID === 3 ? si.name : "……不对，这不是音乐条目。";
    }

    async apply(opts: { [key: string]: any }, editor: AutoEditor): Promise<void> {
        if ((await this.subjectInfo!).typeID !== 3) {
            editor.pushWarning(Math.random() < 0.9 ? "这不是音乐条目啦！" : "什么都导入只会害了你");
            return;
        }

        if (opts.trackListCredits || opts.titleIntro || opts.infobox) {
            editor.setSID(this.sid);
        }

        let rela: SubjectRelaPerson[] | null = null;
        if (opts.trackListCredits) {
            const subjectEpInfo = getSubjectEpInfo(this.sid);
            rela = await getSubjectRelaPerson(this.sid);
            const [aliasTable, unassociated, instTable] = resolveAlias((await this.subjectInfo!).infobox, rela, editor.associableFields);
            function formatRole(role: string, name: string): string {
                let kw = ROLE2KEYWORD[role] || role;
                if (kw === '乐器' && instTable[name]) {
                    kw = `乐器-${instTable[name]}`;
                }
                return kw;
            }
            rela = rela.map(({ name, relation, ...rest }) => {
                let kw = formatRole(relation, name);
                name = aliasTable[relation]?.[name] ?? name; // try using alias
                return { name, relation: kw, ...rest };
            });

            const release = assembleRelease(await subjectEpInfo, rela);

            const relaMap0 = release.credits;
            Object.entries(unassociated).forEach(([role, names]) => {
                if (names.length === 0) return;
                names.forEach(name => {
                    relaMap0[formatRole(role, name)].push(name);
                });
            });

            editor.setTrackInfo(release);
        }

        if (opts.titleIntro) {
            const { name, summary } = await this.subjectInfo!;
            editor.editTitleIntro(name, summary);
        }

        if (opts.infobox) {
            const { infobox, metaTags } = await this.subjectInfo!;
            editor.setInfoBox(infobox, opts.infoboxOverride);
            editor.setMetaTags(metaTags);
        }

        if (opts.infoboxKeepRelaField) {
            editor.unlinkInfoBoxField('艺术家');
        }

        if (opts.importRela) {
            if (rela === null) {
                rela = await getSubjectRelaPerson(this.sid);
            }
            editor.importRela(Array.from(new Set(rela.map(x => x.id))));
        }

        editor.done();
    }
}

const ROLE2KEYWORD: Record<string, string> = {
    'unknown': 'UNKNOWN',
}

const RE_SIMPLE_NAME = /^[^（(\[]+$/; // no brackets
const RE_ALIAS_NAME = /^([^（(\[]+)(\([^（(\[]+\)|（[^（(\[、]+）)$/; // `alias(name)`
const RE_CHAR_CV = /^([^（(\[]+)\(CV([.:：])(.+)\)$/; // `charactor(CV:...)`
/// The grief of not having an alias system crystalized...
function resolveAlias(
    infobox: string,
    rela: SubjectRelaPerson[],
    associableFields: Set<string>
): [Record<string, Record<string, string>>, Record<string, string[]>, Record<string, string>] {
    const plain = infobox.split('\n').filter(x => x.startsWith('|')).map(x => x.slice(1).split('='));
    const associable = plain.filter(([k, _]) => associableFields.has(k)) as [string, string][];
    const relaNames = DefaultDict(() => new Set<string>());
    rela.forEach(({ name, relation }) => relaNames[relation].add(name));

    const aliasTable: Record<string, Record<string, string>> = {}; // role -> name -> alias
    const unassociated: Record<string, string[]> = {}; // role -> name[]
    const instTable = instrumentalPreprocess(associable, relaNames);
    associable.forEach(([role, raw]) => {
        if (!(raw.trim())) return;
        const amap: Record<string, string> = {};
        const uarr: string[] = [];
        parseCreatorGroup(raw).forEach((rep) => {
            rep = rep.trim();
            // extract character and cv marker
            let character: string | undefined;
            let cvMarker: string | undefined;
            if (role === '艺术家') {
                const cv_match = rep.match(RE_CHAR_CV);
                if (cv_match) {
                    [, character, cvMarker, rep] = cv_match;
                    rep = rep.trim();
                }
            }
            function cvRep(name: string): string {
                if (!character) return name;
                return `${character}(CV${cvMarker}${name})`;
            }
            // case 1: just name
            if (RE_SIMPLE_NAME.test(rep)) {
                if (!relaNames[role].has(rep)) uarr.push(cvRep(rep));
                else if (character) amap[rep] = cvRep(rep);
                return;
            }
            // case 2: alias(name)
            const alias_match = rep.match(RE_ALIAS_NAME);
            if (alias_match) {
                let [_, alias, name] = alias_match;
                name = name.slice(1, -1);
                alias = alias.trim();
                // putting alias, as unassociated name won't get substituted
                if (!relaNames[role].has(name)) uarr.push(cvRep(alias));
                else amap[name] = cvRep(alias);
            }
        });
        aliasTable[role] = amap;
        unassociated[role] = uarr;
    });
    return [aliasTable, unassociated, instTable];
}

const RE_NAME_INST = /^(.*) \(([^(\[]+)\)$/; // `name (inst)`, expected to be machine-formatted
/// Extract name-instrument mapping and strip instrument from the original string
function instrumentalPreprocess(associable: [string, string][], relaNames: Record<string, Set<string>>): Record<string, string> {
    const instEntry = associable.find(([k, _]) => k === '乐器');
    if (!instEntry || !instEntry[1]) return {};
    const instPersonNames = relaNames['乐器'];
    const frags = instEntry[1].split('、').map(x => x.trim());
    const fragMatches = frags.map(x => x.match(RE_NAME_INST));
    const name2inst: Record<string, string> = {};
    const despined: string[] = [];
    fragMatches.forEach((match, i) => {
        if (!match) return despined.push(frags[i]); // just name
        const [_, name, inst] = match;
        if (instPersonNames.has(inst)) return despined.push(frags[i]); // alias(name)
        // alias(name) (inst)  or  name (inst)
        name2inst[(name.match(RE_ALIAS_NAME)?.[1] ?? name).trim()] = inst;
        despined.push(name);
    });
    instEntry[1] = despined.join('、');
    return name2inst;
}

const bracketMap: Record<string, string> = {
    '（': '）',
    '(': ')',
    '[': ']',
};
/// e.g. 'A (B、C)、D、E [F (G)、H]' => ['B', 'C', 'A (B、C)', 'D', 'F (G)', 'H', 'E [F (G)、H]']
function parseCreatorGroup(s: string): string[] {
    let frag = [];
    let stack: [string, number][] = [['', 0]];
    for (let i = 0; i < s.length; i++) {
        const stackTop = stack[stack.length - 1];
        if (s[i] in bracketMap) {
            stack.push([s[i], i + 1]);
        } else if (s[i] === bracketMap[stackTop[0]]) {
            if (s[stackTop[1] - 1] !== stackTop[0]) { // skip one-entity group
                frag.push(s.slice(stackTop[1], i));
            }
            stack.pop();
        } else if (s[i] === '、') {
            frag.push(s.slice(stackTop[1], i));
            stackTop[1] = i + 1;
        }
    }
    frag.push(s.slice(stack[0][1]));
    return frag;
}
