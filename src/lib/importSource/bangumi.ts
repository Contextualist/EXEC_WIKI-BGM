import type { ImportSource, AutoEditor, Track } from "./common";
import { getSubjectInfo, getSubjectEpInfo, getSubjectRelaPerson, type SubjectInfo } from "$lib/client";

export class Bangumi implements ImportSource {
    name = "Bangumi";
    match = /^https:\/\/bgm.tv\/subject\/(\d+)$/;
    warning = "最近新增的可关联职位还在等班古米的API支持，暂时会显示为UNKNOWN。";
    options = [
        { id: "trackListCredits", text: "曲目列表与制作人员", default: true },
        { id: "titleIntro", text: "标题与简介", default: true },
        //{ id: "importRela", text: "导入关联的人物", default: true },
        { id: "infobox", text: "Infobox", default: true },
        //{ id: "infoboxKeepRelaField", text: "保留 infobox 可关联字段的内容", default: false },
    ];

    private sid: number = 0;
    private subjectInfo: SubjectInfo | null = null;

    async load(url: string): Promise<string> {
        this.sid = parseInt(this.match.exec(url)![1]);
        this.subjectInfo = await getSubjectInfo(this.sid);
        return this.subjectInfo.typeID === 3 ? this.subjectInfo.name : "……不对，这不是音乐条目。";
    }

    async apply(opts: { [key: string]: any }, editor: AutoEditor): Promise<void> {
        if (this.subjectInfo!.typeID !== 3) {
            editor.pushWarning(Math.random() < 0.9 ? "这不是音乐条目啦！" : "什么都导入只会害了你");
            return;
        }

        if (opts.trackListCredits) {
            const subjectEpInfo = getSubjectEpInfo(this.sid);
            const rela = await getSubjectRelaPerson(this.sid);
            const relaMap0 = DefaultDict(() => [] as string[]); // relation -> names
            const relaMap = DefaultDict(() => DefaultDict(() => DefaultDict(() => [] as string[]))); // disc -> track -> relation -> names
            rela.forEach(({ name, relation, eps }) => {
                const kw = ROLE2KEYWORD[relation] || relation;
                // TODO: simple alias extraction from infobox
                if (eps === "") {
                    relaMap0[kw].push(name);
                    return;
                }
                const dts = parsePart(eps);
                dts.forEach(([disc, track]) => {
                    relaMap[disc][track][kw].push(name);
                });
            });
            // TODO: extract unassociated credits from infobox

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
                        return { tracks: Array.from({ length: Object.keys(trm).length }, (_, j) => trm[j + 1]) }
                    },
                ),
            };
            editor.setTrackInfo(release);
        }

        if (opts.titleIntro) {
            const { name, summary } = this.subjectInfo!;
            editor.editTitleIntro(name, summary);
        }

        if (opts.infobox) {
            editor.setInfoBox(this.subjectInfo!.infobox);
        }

        editor.done();
    }
}

const ROLE2KEYWORD: Record<string, string> = {
    '艺术家': 'Performer',
    'unknown': 'UNKNOWN',
}

type DefaultDictType<K extends PropertyKey, V> = { [P in K]: V; } & { [key: PropertyKey]: V; };
function DefaultDict<K extends PropertyKey, V>(defaultInit: () => V): DefaultDictType<K, V> {
    return new Proxy({} as DefaultDictType<K, V>, {
        get: (target, name: PropertyKey) => name in target ? target[name] : ((target as any)[name] = defaultInit())
    })
}

/// Parse track number list in single disc (e.g. `1,3-5,7`) or multiple discs (e.g. `1.1, 1.3-5, 2.7`) format
function parsePart(part: string): [number, number][] {
    if (!part.includes('.')) {
        // single disc
        return part.split(',').flatMap(_parseMaybeRange).map(track => [1, track]);
    }
    return part.split(',').flatMap(x => {
        const [_disc, _tracks] = x.split('.');
        const [disc, tracks] = [parseInt(_disc), _parseMaybeRange(_tracks)];
        return tracks.map(track => [disc, track]) as [number, number][];
    });
}

/// e.g. `3-5` => [3, 4, 5]; `5` => [5]
function _parseMaybeRange(s: string) {
    const [start, end] = s.split('-').map(x => parseInt(x));
    return Array.from({ length: (end || start) - start + 1 }, (_, i) => start + i);
}