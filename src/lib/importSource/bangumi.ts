import type { ImportSource, AutoEditor, Track } from "./common";
import { DefaultDict } from "./common";
import { getSubjectInfo, getSubjectEpInfo, getSubjectRelaPerson, type SubjectInfo, type SubjectRelaPerson } from "$lib/client";
import { parsePart } from "$lib/bangumiUtils";

export class Bangumi implements ImportSource {
    name = "Bangumi";
    match = /^https:\/\/(?:bangumi\.tv|bgm\.tv)\/subject\/(\d+)$/;
    warning = "";
    options = [
        { id: "trackListCredits", text: "曲目列表与制作人员", default: true },
        { id: "importRela", text: "导入关联的人物", default: true },
        { id: "titleIntro", text: "标题与简介", default: true },
        { id: "infobox", text: "Infobox", default: true },
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

        let rela: SubjectRelaPerson[] | null = null;
        if (opts.trackListCredits) {
            const subjectEpInfo = getSubjectEpInfo(this.sid);
            rela = await getSubjectRelaPerson(this.sid);
            const [aliasTable, unassociated] = resolveAlias((await this.subjectInfo!).infobox, rela, editor.associableFields);
            const relaMap0 = DefaultDict(() => [] as string[]); // relation -> names
            const relaMap = DefaultDict(() => DefaultDict(() => DefaultDict(() => [] as string[]))); // disc -> track -> relation -> names
            rela.forEach(({ name, relation, eps }) => {
                const kw = ROLE2KEYWORD[relation] || relation;
                name = aliasTable[relation]?.[name] ?? name; // try using alias
                if (eps === "") {
                    relaMap0[kw].push(name);
                    return;
                }
                const dts = parsePart(eps);
                dts.forEach(([disc, track]) => {
                    relaMap[disc][track][kw].push(name);
                });
            });
            Object.entries(unassociated).forEach(([role, names]) => {
                if (names.length === 0) return;
                relaMap0[ROLE2KEYWORD[role] || role].push(...names);
            });

            const discs = DefaultDict(() => ({} as Record<number, Track>));
            (await subjectEpInfo).forEach((tr) => {
                const d = tr.disc === 0 ? 1 : tr.disc;
                discs[d][tr.ep] = {
                    title: tr.name,
                    comment: tr.name_cn,
                    credits: relaMap[d][tr.ep],
                };
            });
            const release = {
                credits: relaMap0,
                discs: Array.from(
                    { length: Object.keys(discs).length },
                    (_, i) => {
                        const trm = discs[i + 1];
                        return {
                            tracks: Array.from(
                                { length: Math.max(...Object.keys(trm).map(x => parseInt(x))) },
                                (_, j) => trm[j + 1]
                            ).filter(x => x)
                        };
                    },
                ),
            };
            editor.setTrackInfo(release);
        }

        if (opts.titleIntro) {
            const { name, summary } = (await this.subjectInfo!);
            editor.editTitleIntro(name, summary);
        }

        if (opts.infobox) {
            editor.setInfoBox((await this.subjectInfo!).infobox, opts.infoboxOverride);
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
): [Record<string, Record<string, string>>, Record<string, string[]>] {
    const plain = infobox.split('\n').filter(x => x.startsWith('|')).map(x => x.slice(1).split('='));
    const associable = plain.filter(([k, _]) => associableFields.has(k)) as [string, string][];
    const relaNames = DefaultDict(() => new Set<string>());
    rela.forEach(({ name, relation }) => relaNames[relation].add(name));

    const aliasTable: Record<string, Record<string, string>> = {}; // role -> name -> alias
    const unassociated: Record<string, string[]> = {}; // role -> name[]
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
    return [aliasTable, unassociated];
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
