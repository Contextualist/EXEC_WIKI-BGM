/**
 * The ugly: the part of parsing that needs to be resolved at semantic level.
 */
import { type RawRelease, RawTrack, type CreditField } from "./lang-rkgk";
import { queryNameOrAliasBulk, type Staff } from "$lib/db";
import { type ResolvedRelaMap } from "./disambiguation";
import { parsePart } from "$lib/bangumiUtils";

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
    'vocalist': [Role.V],
    'vocal': [Role.V],
    'performer': [Role.V],
    'illustration': [Role.I],
    'illustrator': [Role.I],
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
    '歌': [Role.V],
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

class PersonData {
    parts: number[][] = [];
}

interface Credits {
    [roleID: string]: {
        [name: string]: PersonData;
    }
}

interface CreditsText { [roleID: string]: string[]; } // { roleID: [name, ...] }

export interface Track {
    title: string;
    comment: string;
}

export class Release {
    credits: Credits;
    tracks: Track[][];
    name2character: Map<string, [string, string]>;
    relaMap: Map<string, Staff[]> = new Map();
    constructor(credits?: Credits, tracks?: Track[][], name2character?: Map<string, [string, string]>) {
        this.credits = credits || {};
        this.tracks = tracks || [];
        this.name2character = name2character || new Map();
    }
    static async fromRawRelease(raw: RawRelease, options: PostProcessOptions): Promise<Release> {
        function _parseSongCredit(cfs: CreditField[], name2character: Map<string, [string, string]>) {
            return parseSongCredit(cfs,
                name2character,
                options.shouldCleanCircleParentheses,
                options.allowAllSpaceInCreatorName,
            );
        }

        const name2character = new Map<string, [string, string]>();
        const credits = _parseSongCredit(raw.credits, name2character);
        const all_tracks = raw.discs.map((disc, i) => {
            // normalize track titles, then coalesce empty titles
            let trackTitles = disc.tracks.map(t => t.title);
            if (trackTitles.length > 1) {
                trackTitles = normalizeTitles(trackTitles);
            }
            let ct = new RawTrack();
            const compactTracks = [ct];
            disc.tracks.forEach((track, j) => {
                ct.title = trackTitles[j];
                ct.comment = track.comment;
                ct.credits.push(...track.credits);
                if (ct.title) {
                    compactTracks.push(ct = new RawTrack());
                }
            });
            if (compactTracks[compactTracks.length - 1].title === "") {
                compactTracks.pop();
            }
            // extract credits
            return compactTracks.map((rt, j) => {
                const trackCredits = _parseSongCredit(rt.credits, name2character);
                Object.entries(trackCredits).forEach(([roleID, creators]) => {
                    const rs = credits[roleID] = credits[roleID] || {};
                    Object.entries(creators).forEach(([name, pd]) => {
                        const pd0 = rs[name] = rs[name] || new PersonData();
                        pd0.parts.push([i + 1, j + 1]);
                    });
                });
                return {
                    title: rt.title,
                    comment: rt.comment,
                }
            });
        });

        if (options.shouldAutofillArrangment && Role.C in credits) {
            const gather = (role: Role): string[][][] => {  // plist[disc-1][track-1][]
                const plist: string[][][] = all_tracks.map(disc => Array.from({ length: disc.length }, () => []));
                Object.entries(credits[role] ?? {}).forEach(([name, pd]) => {
                    pd.parts.forEach(([d, t]) => plist[d - 1]?.[t - 1]?.push(name));
                });
                return plist;
            }
            const composers = gather(Role.C);
            const arrangers = gather(Role.A);
            const creditA = credits[Role.A] = credits[Role.A] ?? {};
            arrangers.forEach((disc, i) => disc.forEach((names, j) => {
                if (names.length > 0) return;
                composers[i][j].forEach(name => {
                    creditA[name] = creditA[name] ?? new PersonData();
                    creditA[name].parts.push([i + 1, j + 1]);
                });
            }));
        }

        // convert parts from [disc, track][] to (track[])[disc-1]
        Object.values(credits).forEach(creatorData => Object.values(creatorData).forEach(pd => {
            if (pd.parts.length === 0) return; // empty parts means participation in all tracks
            const p = Array.from({ length: all_tracks.length }, () => new Set<number>());
            pd.parts.forEach(([d, t]) => p[d - 1]?.add(t));
            pd.parts = p.map(s => Array.from(s).sort((a, b) => a - b));
        }));

        const release = new Release(credits, all_tracks, name2character);
        await release.assignRelaMap();
        return release;
    }
    private async assignRelaMap() {
        const allCreators = Array.from(new Set<string>([
            ...Object.values(this.credits).flatMap(Object.keys),
        ]));
        const qr = await queryNameOrAliasBulk(allCreators);
        this.relaMap = new Map(allCreators.map((creator, i) => [creator, qr[i]]));
    }

    /**
     * Group creators by roles.
     * e.g. [["作曲", ["A", "B"]], ["作词", ["A", ...
     */
    intoRoleSummary(name2staff: ResolvedRelaMap): [string, string[]][] {
        function firstAppear(p: number[][]): number {
            if (p.length === 0) return -1;
            const disc = p.findIndex(x => x.length > 0);
            return 1000 * disc + p[disc][0];
        }
        const rs = Object.entries(this.credits).map(([roleID, creators]) =>
            [
                roleID,
                Object.entries(creators)
                    .sort(([_, da], [__, db]) => firstAppear(da.parts) - firstAppear(db.parts))
                    .map(([c, _]) => this.formatCreator(c, name2staff.get(c)![0]?.name))
            ] as [string, string[]]
        );
        const rsc = this.coalesceInstrumentalRoles(rs);
        const emptyRoles = new Set<string>(Object.values(Role).slice(1))
        rsc.forEach(([roleID, _]) => emptyRoles.delete(roleID));
        return rsc.concat(Array.from(emptyRoles).map(roleID => [roleID, []]));
    }

    formatCreator(name: string, primaryName: string | undefined): string {
        let r = name;
        if (primaryName && name !== primaryName) {
            r = `${name} (${primaryName})`;
        }
        const character = this.name2character.get(name);
        if (character) {
            const [cvMarker, char] = character;
            r = `${char}(CV${cvMarker}${r})`;
        }
        return r;
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
        let r = new Map<number, Map<string, number[][]>>();  // staff_id -> { role -> tracks }
        Object.entries(this.credits).forEach(([roleID, creators]) => {
            if (roleID.startsWith("乐器-")) roleID = "乐器";
            Object.entries(creators).forEach(([creator, pd]) => {
                const staff = name2staff.get(creator)![0];
                if (!staff) return;
                const rtm = r.get(staff.id) ?? new Map<string, number[][]>();
                rtm.set(roleID, pd.parts);
                r.set(staff.id, rtm);
            });
        });
        const isMultiDisc = this.tracks.length > 1;
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

    /**
     * List per-track creator info.
     */
    intoTrackSummary(): [CreditsText, CreditsText[][]] {
        const r0: CreditsText = {};
        const r = this.tracks.map((disc) => Array.from({ length: disc.length }, () => ({} as CreditsText)));
        Object.entries(this.credits).forEach(([roleID, creators]) => {
            Object.entries(creators).forEach(([creator, pd]) => {
                if (pd.parts.length === 0) {
                    r0[roleID] = r0[roleID] || [];
                    r0[roleID].push(creator);
                    return;
                }
                pd.parts.forEach((p, i) => p.forEach(j => {
                    const rij = r[i]?.[j - 1];
                    if (!rij) return;
                    rij[roleID] = rij[roleID] || [];
                    rij[roleID].push(creator);
                }));
            });
        });
        return [r0, r];
    }
}


function parseSongCredit(
    cfs: CreditField[],
    name2character: Map<string, [string, string]>,
    trimCircle: boolean = true,
    preserveAllSpace: boolean = false,
): Credits {
    function testEdge(c0: CreditField, c2: CreditField): boolean {
        if (c0.type !== "creator" || c2.type !== "creator") return false;
        if (preserveAllSpace) return true;
        return /[a-zA-Z]$/.test(c0.value) && /^[a-zA-Z]/.test(c2.value);
    }
    let cfs_ = [...cfs];
    // merge creator fragments; remove creatorSeperator
    for (let i = 0; i < cfs_.length; i++) {
        if (cfs_[i].type !== "creatorSeparator") { continue; }
        if (i === 0) { cfs_.splice(0, 0, { type: "creator", value: "" }); i++; }
        else if (i === cfs_.length - 1) { cfs_.push({ type: "creator", value: "" }); }
        if (/^\s+$/.test(cfs_[i].value) && testEdge(cfs_[i - 1], cfs_[i + 1])) {
            cfs_.splice(i - 1, 3, { type: "creator", value: `${cfs_[i - 1].value} ${cfs_[i + 1].value}`.trim() });
            i--;
        } else {
            cfs_.splice(i, 1);
        }
    }
    // extract characters from "character (CV: name)"
    for (let i = 0; i < cfs_.length; i++) {
        if (cfs_[i].type !== "cv_conj") continue;
        const cfv = cfs_[i].value;
        if ([')', '）'].includes(cfv)) {
            cfs_.splice(i, 1);
            continue;
        }
        let cvMarker = ['|', '｜'].includes(cfv) ? ':' : cfv.trim().slice(-1);
        if (cvMarker === '：') cvMarker = ':';
        const [c0, c2] = [cfs_[i - 1], cfs_[i + 1]];
        if (c0?.type !== "creator" || c2?.type !== "creator") {
            cfs_.splice(i, 1);
            continue;
        }
        name2character.set(c2.value, [cvMarker, c0.value]);
        cfs_.splice(i - 1, 2);
        i--;
    }
    // assign creators to roles (and mental gymnastics for parts & CVs)
    let credits: Credits = {};
    let roleIDs = new Set<string>();
    let lastPersonData: PersonData[] | null = null; // role: creator(parts), ...
    let lastRoleParts: [number, number][] | null = null; // role(parts): creator
    cfs_.forEach(cf => {
        switch (cf.type) {
            case "role":
                if (lastPersonData) {
                    roleIDs.clear();
                    lastPersonData = null;
                }
                lastRoleParts = null;
                const roleName = cf.value.trim();
                if (roleName.startsWith("乐器-")) {
                    roleIDs.add(roleName);
                    break;
                }
                const rids = ROLE_MAP[roleName.toLowerCase()];
                if (!rids) { console.warn(`Unknown role tag: ${cf.value}`); break; }
                rids.forEach(rid => roleIDs.add(rid));
                break;
            case "creator":
                let name = cf.value;
                if (trimCircle) {
                    name = name.replace(/[(（].+[）)]$/, "").trim();
                    if (!name) break; // don't include "trimmed circle"
                }
                lastPersonData = Array.from(roleIDs).map(rid => {
                    const rs = credits[rid] = credits[rid] || {};
                    return rs[name] = rs[name] || new PersonData();
                });
                if (lastRoleParts) {
                    lastPersonData.forEach(p => p.parts.push(...lastRoleParts!));
                }
                break;
            case "parts":
                const partsString = cf.value.trim().slice(1, -1).replace(/^(Tr|tr|M|m)\.?\s*/, "");
                const parts = parsePart(partsString); // for now it's [disc, track][]; will be converted number[disc-1][track]
                if (!lastPersonData) {
                    lastRoleParts = parts;
                    break;
                }
                lastPersonData.forEach(p => p.parts.push(...parts));
                break;
        }
    });
    return credits;
}

const RE_TR = /^(Tr|tr)?[.．]?\d+[.．]?\s*/;
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
export function pagenoJoin(arr: number[]): string {
    return _pagenoJoin(arr).join(",");
}

export function multiDiscPageNoJoin(arr: number[][]): string {
    const r = [];
    for (const [i, a] of arr.entries()) {
        if (a.length === 0) { continue; }
        r.push(_pagenoJoin(a).map(s => `${i + 1}.${s}`).join(", "));
    }
    return r.join(", ");
}