/**
 * The ugly: the part of parsing that needs to be resolved at semantic level.
 */
import type { RawRelease, CreditField } from "./lang-rkgk";
import { queryNameOrAliasBulk, type Staff } from "$lib/db";
import { type ResolvedRelaMap } from "./disambiguation";

export enum Role {
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
    FV = "声乐",
    IT = "乐器",
    MX = "混音",
    MA = "母带制作",
}

// NOTE: This should be kept in sync with `grammar.js` in the tree-sitter-rkgk repo.
export const ROLE_MAP: { [name: string]: Role[] } = {
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
    'performer': [Role.V],
    'illustration': [Role.I],
    'illust': [Role.I],
    'label': [Role.RL],
    'circle': [Role.RL],
    'producer': [Role.PD],
    'recording': [Role.RC],
    'guest vocal': [Role.FV],
    'chorus': [Role.FV],
    'mixing': [Role.MX],
    'mastering': [Role.MA],
    'ボーカル': [Role.V],
    'アレンジ': [Role.A],
    'イラスト': [Role.I],
    'レーベル': [Role.RL],
    'マスタリング': [Role.MA],
    '艺术家': [Role.V],
    '歌唱': [Role.V],
    '作詞作編曲': [Role.L, Role.C, Role.A],
    '作词作编曲': [Role.L, Role.C, Role.A],
    '作詞作曲': [Role.L, Role.C],
    '作词作曲': [Role.L, Role.C],
    '作詞曲': [Role.L, Role.C],
    '作词曲': [Role.L, Role.C],
    '作編曲': [Role.C, Role.A],
    '作编曲': [Role.C, Role.A],
    '作曲': [Role.C],
    '編曲': [Role.A],
    '编曲': [Role.A],
    '作詞': [Role.L],
    '作词': [Role.L],
    '厂牌': [Role.RL],
    '脚本': [Role.S],
    '插图': [Role.I],
    '制作人': [Role.PD],
    '出版方': [Role.PL],
    '录音': [Role.RC],
    '原作': [Role.O],
    '声乐': [Role.FV],
    '乐器': [Role.IT],
    '混音': [Role.MX],
    '母带制作': [Role.MA],
};

export const RE_ROLE_KEYWORD = new RegExp(Object.keys(ROLE_MAP).join("|"), "i");

export interface PostProcessOptions {
    shouldCleanCircleParentheses: boolean;
    allowAllSpaceInCreatorName: boolean;
    shouldAutofillArrangment: boolean;
}

interface Credits { [roleID: string]: string[] }

export interface Track {
    title: string;
    comment: string;
    credits: Credits;
}

export class Release {
    credits: Credits;
    tracks: Track[][];
    relaMap: Map<string, Staff[]> = new Map();
    constructor(credits?: { [roleID: string]: string[] }, tracks?: Track[][]) {
        this.credits = credits || {};
        this.tracks = tracks || []
    }
    static async fromRawRelease(raw: RawRelease, options: PostProcessOptions): Promise<Release> {
        function _parseSongCredit(cfs: CreditField[]) {
            return parseSongCredit(cfs,
                options.shouldCleanCircleParentheses,
                options.allowAllSpaceInCreatorName,
                options.shouldAutofillArrangment
            );
        }

        const credits = _parseSongCredit(raw.credits);
        const all_tracks = raw.discs.map(disc => {
            const tracks = disc.tracks.map(rt => ({
                title: rt.title,
                comment: rt.comment,
                credits: _parseSongCredit(rt.credits),
            }))
            if (tracks.length > 1) {
                normalizeTitles(tracks.map(t => t.title))
                    .forEach((title, i) => tracks[i].title = title);
            }
            return tracks.filter(t => t.title); // remove empty lines from normalization
        });
        const release = new Release(credits, all_tracks);
        await release.assignRelaMap();
        return release;
    }
    private async assignRelaMap() {
        const allCreators = Array.from(new Set<string>([
            ...Object.values(this.credits).flat(),
            ...this.tracks.flatMap(d => d.flatMap(t => Object.values(t.credits).flat())),
        ]));
        const qr = await queryNameOrAliasBulk(allCreators);
        this.relaMap = new Map(allCreators.map((creator, i) => [creator, qr[i]]));
    }

    /**
     * Group creators by roles.
     * e.g. [["作曲", ["A", "B"]], ["作词", ["A", ...
     */
    intoRoleSummary(name2staff: ResolvedRelaMap): [string, string[]][] {
        const r = new Map<string, Set<string>>(Object.values(Role).map(k => [k, new Set()]));
        function setCredits(credits: Credits) {
            Object.entries(credits).forEach(([roleID, creators]) => {
                const rx = r.get(roleID) || r.set(roleID, new Set<string>()).get(roleID)!;
                creators.forEach(creator => rx.add(creator));
            });
        }
        setCredits(this.credits);
        this.tracks.forEach(d => d.forEach(t => setCredits(t.credits)));
        r.delete(Role.undef);
        const rs: [string, string[]][] = Array.from(r.entries())
            .map(([roleID, creators]) => [roleID, Array.from(creators).map((c) => this.formatCreator(c, name2staff.get(c)![0]?.name))]);
        return this.coalesceInstrumentalRoles(rs);
    }

    private formatCreator(name: string, primaryName: string | undefined): string {
        if (primaryName && name !== primaryName) {
            return `${name} (${primaryName})`;
        }
        return name;
    }

    private coalesceInstrumentalRoles(rs: [string, string[]][]): [string, string[]][] {
        if (rs.every(([roleID, _]) => !roleID.startsWith("乐器-"))) {
            return rs;
        }
        let insEntry = rs.find(([roleID, _]) => roleID === "乐器");
        if (!insEntry) rs.push(insEntry = ["乐器", []]);
        return rs.flatMap(([roleID, creators]) => {
            if (!roleID.startsWith("乐器-")) return [[roleID, creators]];
            const insName = roleID.slice(3);
            insEntry![1].push(...creators.map(c => `${c} (${insName})`));
            return [];
        });
    }

    /**
     * List creators (bgm_id) along with their role-track info.
     * e.g. [[10042, ["作曲#1,3", "作词#2"]], ...
     */
    intoCreatorSummary(name2staff: ResolvedRelaMap): [number, string[]][] {
        const nTracks = this.tracks.length;
        let r = new Map<number, Map<string, number[][]>>();  // staff_id -> { role -> tracks }
        function setCredits(credits: Credits, fn: (roleID: string, rtm: Map<string, number[][]>) => void) {
            Object.entries(credits).forEach(([roleID, creators]) => {
                if (roleID.startsWith("乐器-")) roleID = "乐器";
                creators.forEach(creator => {
                    const staff = name2staff.get(creator)![0];
                    if (!staff) { return; }
                    const rtm = r.get(staff.id) ?? new Map<string, number[][]>();
                    fn(roleID, rtm);
                    r.set(staff.id, rtm);
                });
            });
        }
        setCredits(this.credits, (roleID, rtm) => rtm.set(roleID, []));
        this.tracks.forEach((d, i) =>
            d.forEach((t, j) => {
                setCredits(t.credits, (roleID, rtm) => {
                    let rt = rtm.get(roleID)
                    rt = !rt || rt.length === 0 ? Array.from({ length: nTracks }, () => []) : rt;
                    const rti = rt[i];
                    if (rti.length === 0 || rti[rti.length - 1] !== j + 1) {
                        rti.push(j + 1);
                    }
                    rtm.set(roleID, rt);
                });
            })
        );
        const isMultiDisc = nTracks > 1;
        return Array.from(r.entries())
            .map(([staffID, rtm]) => {
                const rts = Array.from(rtm.entries())
                    .map(([roleID, tr]) => {
                        if (tr.length === 0) return roleID;
                        return isMultiDisc ? `${roleID}#${multiDiscPageNoJoin(tr)}` : `${roleID}#${pagenoJoin(tr[0])}`;
                    });
                return [staffID, rts];
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
        const roleIDs = roleTags.flatMap(roleTag => {
            const roleName = roleTag.value.trim();
            if (roleName.startsWith("乐器-")) {
                return [roleName];
            }
            const roleIDs = ROLE_MAP[roleName.toLowerCase()];
            if (!roleIDs) { console.warn(`Unknown role tag: ${roleTag.value}`); return []; }
            return roleIDs;
        });
        const creatorNames = creators.flatMap(creator => {
            let name = creator.value;
            if (trimCircle) {
                name = name.replace(/[(（].+[）)]$/, "");
                if (!name) { return []; }  // don't include "trimmed circle"
            }
            return [name];
        });
        Array.from(new Set(roleIDs)).forEach(roleID => {
            credits[roleID] = credits[roleID] || [];
            credits[roleID].push(...creatorNames);
        });
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
    if (titles.every((title, i) => i % 2 == 1 || RE_TR.test(title))) {
        titles = titles.map(title => title.replace(RE_TR, ""));
    }
    return titles;
}

function _pagenoJoin(arr: number[]): string[] {
    let a = [...arr, Infinity];
    let r = [];
    let start = a[0];
    for (let i = 1; i < a.length; i++) {
        if (a[i] - a[i - 1] === 1) { continue; }
        const rlen = a[i - 1] - start + 1;
        r.push(...(rlen === 1 ? [`${start}`] : rlen === 2 ? [`${start}`, `${a[i - 1]}`] : [`${start}-${a[i - 1]}`]));
        start = a[i];
    }
    return r;
}

/// e.g. [1, 2, 3, 5, 6, 7, 9, 10] => "1-3,5-7,9,10"
function pagenoJoin(arr: number[]): string {
    return _pagenoJoin(arr).join(",");
}

function multiDiscPageNoJoin(arr: number[][]): string {
    const r = [];
    for (const [i, a] of arr.entries()) {
        if (a.length === 0) { continue; }
        r.push(_pagenoJoin(a).map(s => `${i + 1}.${s}`).join(", "));
    }
    return r.join(", ");
}