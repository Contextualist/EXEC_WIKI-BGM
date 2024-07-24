/**
 * The ugly: the part of parsing that needs to be resolved at semantic level.
 */
import type { RawDisc, CreditField } from "./lang-rkgk";
import { queryNameOrAliasBulk, type Staff } from "$lib/db";
import { type ResolvedRelaMap } from "./disambiguation";

enum Role {
    undef = "",
    V = "艺术家",
    L = "作词",
    C = "作曲",
    A = "编曲",
    I = "插图",
    RL = "厂牌",
    S = "脚本",
    PD = "制作人",
    PL = "出版方",
    RC = "录音",
    O = "原作",
}

// NOTE: This should be kept in sync with `grammar.js` in the tree-sitter-rkgk repo.
const ROLE_MAP: { [name: string]: Role[] } = {
    'music': [Role.C, Role.A],
    'composition': [Role.C],
    'composer': [Role.C],
    'compose': [Role.C],
    'lyrics': [Role.L],
    'lyricist': [Role.L],
    'lyric': [Role.L],
    'arrangement': [Role.A],
    'arranger': [Role.A],
    'arrange': [Role.A],
    'vocal': [Role.V],
    'vo': [Role.V],
    'performer': [Role.V],
    'illustration': [Role.I],
    'illust': [Role.I],
    'label': [Role.RL],
    'circle': [Role.RL],
    'producer': [Role.PD],
    'recording': [Role.RC],
    'ボーカル': [Role.V],
    'アレンジ': [Role.A],
    'イラスト': [Role.I],
    'レーベル': [Role.RL],
    '歌唱': [Role.V],
    '作詞作編曲': [Role.L, Role.C, Role.A],
    '作詞作曲': [Role.L, Role.C],
    '作詞曲': [Role.L, Role.C],
    '作編曲': [Role.C, Role.A],
    '作曲': [Role.C],
    '編曲': [Role.A],
    '作詞': [Role.L],
    '厂牌': [Role.RL],
    '脚本': [Role.S],
    '插图': [Role.I],
    '制作人': [Role.PD],
    '出版方': [Role.PL],
    '录音': [Role.RC],
    '原作': [Role.O],
};

export interface PostProcessOptions {
    shouldCleanCircleParentheses: boolean;
    allowAllSpaceInCreatorName: boolean;
    shouldAutofillArrangment: boolean;
    enableFeatVocal: boolean;
}

export interface Track {
    title: string;
    comment: string;
    credits: { [roleID: string]: string[] }
}

export class Disc {
    tracks: Track[];
    relaMap: Map<string, Staff[]> = new Map();
    constructor(tracks?: Track[]) {
        this.tracks = tracks || []
    }
    static async fromRawDisc(raw: RawDisc, options: PostProcessOptions): Promise<Disc> {
        let tracks = raw.tracks.map(rt => ({
            title: rt.title,
            comment: rt.comment,
            credits: parseSongCredit(
                [...(options.enableFeatVocal ? rt.feat : []), ...rt.credits],
                options.shouldCleanCircleParentheses,
                options.allowAllSpaceInCreatorName,
                options.shouldAutofillArrangment
            ),
        }));
        if (tracks.length === 2 && Object.keys(tracks[1].credits).length === 0) {
            // "Every creator participates in every track" mode
            // Split the titles by newline
            const trs = tracks[1].title.split("\n").map(title => ({ title, comment: "", credits: {} }));
            tracks.splice(1, 1, ...trs);
        }
        if (tracks.length > 1) {
            normalizeTitles(tracks.slice(1).map(t => t.title))
                .forEach((title, i) => tracks[i + 1].title = title);
        }
        let disc = new Disc(tracks);
        await disc.assignRelaMap();
        return disc;
    }
    private async assignRelaMap() {
        const allCreators = Array.from(new Set<string>(this.tracks.flatMap(t => Object.values(t.credits).flat())));
        const qr = await queryNameOrAliasBulk(allCreators);
        this.relaMap = new Map(allCreators.map((creator, i) => [creator, qr[i]]));
    }

    /**
     * Group creators by roles.
     * e.g. [["作曲", ["A", "B"]], ["作词", ["A", ...
     */
    intoRoleSummary(name2staff: ResolvedRelaMap): [string, string[]][] {
        let r = new Map<string, Set<string>>(Object.values(Role).map(k => [k, new Set()]));
        this.tracks.forEach(t => {
            Object.entries(t.credits).forEach(([roleID, creators]) => {
                creators.forEach(creator => r.get(roleID)?.add(creator));
            });
        });
        r.delete(Role.undef);
        return Array.from(r.entries())
            .map(([roleID, creators]) => [roleID, Array.from(creators).map((c) => this.formatCreator(c, name2staff.get(c)![0]?.name))]);
    }

    private formatCreator(name: string, primaryName: string | undefined): string {
        if (primaryName && name !== primaryName) {
            return `${name} (${primaryName})`;
        }
        return name;
    }

    /**
     * List creators (bgm_id) along with their role-track info.
     * e.g. [[10042, ["作曲#1,3", "作词#2"]], ...
     */
    intoCreatorSummary(name2staff: ResolvedRelaMap): [number, string[]][] {
        let r = new Map<string, Map<string, number[]>>();  // creator -> { role -> tracks }
        this.tracks.forEach((t, i) => {
            Object.entries(t.credits).forEach(([roleID, creators]) => {
                creators.forEach(creator => {
                    let rtm = r.get(creator) || new Map<string, number[]>();
                    let rt = rtm.get(roleID) || [];
                    if (i > 0) rt.push(i);
                    rtm.set(roleID, rt);
                    r.set(creator, rtm);
                });
            });
        });
        return Array.from(r.entries())
            .map(([creator, rtm]): [Staff | undefined, Map<string, number[]>] => [name2staff.get(creator)![0], rtm])
            .filter(([staff, _1]) => staff)
            .map(([staff, rtm]) => {
                let rts = Array.from(rtm.entries())
                    .map(([roleID, tr]) => tr.length > 0 ? `${roleID}#${pagenoJoin(tr)}` : roleID);
                return [staff!.id, rts];
            });
    }
}


function parseSongCredit(
    cfs: CreditField[],
    trimCircle: boolean = true,
    preserveAllSpace: boolean = false,
    autofillArrangement: boolean = true,
): { [roleID: string]: string[] } {
    const testEdge: (c0: string, c2: string) => boolean
        = preserveAllSpace ? (_) => true : (c0, c2) => /[a-zA-Z]$/.test(c0) && /^[a-zA-Z]/.test(c2);
    let cfs_ = [...cfs];
    // merge creator fragments; remove creatorSeperator
    for (let i = 0; i < cfs_.length; i++) {
        if (cfs_[i].type !== "creatorSeparator") { continue; }
        if (i === 0) { cfs_.splice(0, 0, { type: "creator", value: "" }); i++; }
        else if (i === cfs_.length - 1) { cfs_.push({ type: "creator", value: "" }); }
        if (/^\s+$/.test(cfs_[i].value) && testEdge(cfs_[i - 1].value, cfs_[i + 1].value)) {
            cfs_.splice(i - 1, 3, { type: "creator", value: `${cfs_[i - 1].value} ${cfs_[i + 1].value}`.trim() });
            i--;
        } else {
            cfs_.splice(i, 1);
        }
    }
    // group cfs by type
    const chunks = cfs_.reduce((ch, cf) => {
        if (ch.length === 0 || ch[ch.length - 1][0].type !== cf.type) {
            ch.push([cf]);
        } else {
            ch[ch.length - 1].push(cf);
        }
        return ch;
    }, [] as CreditField[][]);
    // assign creators to roles
    let credits: { [roleID: string]: string[] } = {};
    for (let i = 0; i < chunks.length / 2; i++) {
        const [roleTags, creators] = [chunks[i * 2], chunks[i * 2 + 1]];
        if (!roleTags || !creators) { continue; }
        creators.forEach(creator =>
            roleTags.forEach(roleTag => {
                const roleIDs = ROLE_MAP[roleTag.value.trim().toLowerCase()];
                if (!roleIDs) { console.warn(`Unknown role tag: ${roleTag.value}`); return; }
                roleIDs.forEach(roleID => {
                    const v = trimCircle ? creator.value.replace(/[(（].+[）)]$/, "") : creator.value;
                    if (!v) { return; }  // don't include "trimmed circle"
                    credits[roleID] = credits[roleID] || [];
                    credits[roleID].push(v);
                })
            })
        )
    }
    if (autofillArrangement && !credits[Role.A] && credits[Role.C]) {
        credits[Role.A] = credits[Role.C];
    }
    return credits;
}

const RE_TR = /^(Tr|tr)?\.?\d+\.?\s*/;
function normalizeTitles(titles: string[]): string[] {
    titles = titles.map(title => title.trim());
    if (titles.length < 2) { return titles; }
    // remove Tr.01 prefix
    if (titles.every(title => RE_TR.test(title))) {
        titles = titles.map(title => title.replace(RE_TR, ""));
    }
    return titles;
    // TODO: add back this with a switch
    // remove common suffix
    const minLen = Math.min(...titles.map(title => title.length));
    let lcf = 0;
    while (titles.every(title => title.slice(-lcf - 1) === titles[0].slice(-lcf - 1))) {
        lcf += 1;
        if (lcf >= minLen) { break; }
    }
    if (0 < lcf && lcf < minLen) {
        titles = titles.map(title => title.slice(0, -lcf));
    }
    return titles;
}

/// e.g. [1, 2, 3, 5, 6, 7, 9, 10] => "1-3,5-7,9,10"
function pagenoJoin(arr: number[]): string {
    let a = [...arr, Infinity];
    let r = [];
    let start = a[0];
    for (let i = 1; i < a.length; i++) {
        if (a[i] - a[i - 1] === 1) { continue; }
        const rlen = a[i - 1] - start + 1;
        r.push(rlen === 1 ? start : rlen === 2 ? `${start},${a[i - 1]}` : `${start}-${a[i - 1]}`);
        start = a[i];
    }
    return r.join(",");
}