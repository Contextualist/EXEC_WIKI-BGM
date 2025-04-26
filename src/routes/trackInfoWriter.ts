import { type Release, type Credits } from "$lib/importSource";
import { RE_ROLE_KEYWORD, pagenoJoin, multiDiscPageNoJoin, Release as FormalRelease } from "./postprocess";
import type { ResolvedRelaMap } from "./disambiguation";
import { orderedEntries } from "$lib/bangumiUtils";

const RE_SEP = /[ 　\t&＆:：\/・、；,]/;
const RE_LATIN_SPACE = /[A-Za-z] [A-Za-z]/;

export { type Release };

export function writeTrackInfo(info: Release, style: 'parts' | 'tracks' | 'default' = 'default'): string {
    switch (style) {
        case 'parts': return writeTrackInfoCreditParts(info);
        case 'tracks': return writeTrackInfoCreditTracks(info);
    }
    // Use the parts-style credits only for simple cases; otherwise use the tracks-style credits.
    if (info.discs.length > 1) return writeTrackInfoCreditTracks(info);
    const trackCreators = new Set<string>();
    info.discs.forEach((disc) => {
        disc.tracks.forEach((tr) => {
            Object.values(tr.credits).forEach((names) => {
                names.forEach((name) => trackCreators.add(name));
            });
        });
    });
    if (trackCreators.size >= 5) return writeTrackInfoCreditTracks(info);
    return writeTrackInfoCreditParts(info);
}

function writeTrackInfoCreditTracks(info: Release): string {
    const isMulti = info.discs.length > 1;
    let trackInfo = Object.keys(info.credits).length > 0 ? formatCredits(info.credits) + '\n' : '';
    trackInfo += info.discs.map((disc) => {
        let s = isMulti ? "\nDISC\n" : "";
        s += disc.tracks.map((tr, i) => {
            let t = disc.tracks.length > 1 ? `${String(i + 1).padStart(2, '0')} ${tr.title}` : tr.title;
            t = RE_ROLE_KEYWORD.test(t) ? `《${t}》` : t;
            if (tr.comment) t += ` // ${tr.comment}`;
            t += '\n';
            if (Object.keys(tr.credits).length > 0) {
                t += formatCredits(tr.credits);
            }
            return t;
        }).join('\n');
        return s;
    }).join('\n');
    return trackInfo;
}

function writeTrackInfoCreditParts(info: Release): string {
    const isMulti = info.discs.length > 1;
    let trackInfo = Object.keys(info.credits).length > 0 ? formatCredits(info.credits) + '\n' : '';

    const pt = {} as Record<string, Record<string, number[][]>>;
    info.discs.forEach((disc, i) => {
        disc.tracks.forEach((tr, j) => {
            Object.entries(tr.credits).forEach(([role, names]) => {
                pt[role] = pt[role] ?? {};
                names.forEach((name) => {
                    pt[role][name] = pt[role][name] ?? Array(info.discs.length).fill(null).map(() => []);
                    pt[role][name][i].push(j + 1);
                });
            });
        });
    });
    trackInfo += orderedEntries(pt).map(([role, names]) => {
        return `${role}：${Object.entries(names).map(([name, ps]) => {
            return `${nameEscape(name)}(${isMulti ? multiDiscPageNoJoin(ps) : pagenoJoin(ps.flat())})`;
        }).join('、')}\n`;
    }).join('') + '\n';

    trackInfo += info.discs.map((disc) => {
        let s = isMulti ? "\nDISC\n" : "";
        s += disc.tracks.map((tr, i) => {
            let t = disc.tracks.length > 1 ? `${String(i + 1).padStart(2, '0')} ${tr.title}` : tr.title;
            t = RE_ROLE_KEYWORD.test(t) ? `《${t}》` : t;
            if (tr.comment) t += ` // ${tr.comment}`;
            t += '\n';
            return t;
        }).join('\n');
        return s;
    }).join('\n');
    return trackInfo;
}

export function fromFormalRelease(rf: Readonly<FormalRelease>, name2staff?: ResolvedRelaMap): Release {
    const r: Release = {
        credits: {},
        discs: rf.tracks.map((d) => ({
            tracks: d.map((t) => ({ title: t.title, comment: t.comment, credits: {} }))
        }))
    }
    let pushCredit: (credit: Credits, role: string, name: string) => void;
    if (name2staff) { // only include matched credits
        pushCredit = (credit: Credits, role: string, name: string) => {
            credit[role] = credit[role] ?? [];
            const staff = name2staff.get(name)![0];
            if (!staff) return;
            credit[role].push(staff.name);
        }
    } else {
        pushCredit = (credit: Credits, role: string, name: string) => {
            credit[role] = credit[role] ?? [];
            credit[role].push(rf.formatCreator(name, undefined));
        }
    }
    Object.entries(rf.credits).forEach(([role, nameData]) => {
        if (name2staff) { // remove role annotation
            role = role.split('-')[0];
        }
        Object.entries(nameData).forEach(([name, pd]) => {
            if (pd.parts.length === 0) {
                pushCredit(r.credits, role, name);
                return;
            }
            pd.parts.forEach((discParts, i) => {
                discParts.forEach((j) => {
                    const trij = r.discs[i].tracks[j - 1].credits;
                    pushCredit(trij, role, name);
                });
            });
        });
    });
    return r
}


function nameEscape(n: string): string {
    if (n.includes('(CV')) {
        const [name, cv] = n.split('(CV', 2);
        return `${nameEscape(name)}(CV${cv.slice(0, 1)}${nameEscape(cv.slice(1, -1))})`;
    }
    return ((RE_SEP.test(n) && !RE_LATIN_SPACE.test(n)) || RE_ROLE_KEYWORD.test(n)) ? `《${n}》` : n;
}

function formatCredits(rmap: Record<string, string[]>): string {
    return Object.entries(reverseRecord(rmap))
        .map(([n, rs]) => `${rs.sort().join('、')}：${nameEscape(n)}`).sort()
        .join('\n') + '\n';
}

function reverseRecord<K extends string | number, V extends string | number>(obj: Record<K, V[]>): Record<V, K[]> {
    const d = {} as Record<V, K[]>;
    Object.entries(obj).forEach(([k, vs]) => {
        (vs as V[]).forEach((v) => {
            d[v] = d[v] ?? [];
            d[v].push(k as K);
        });
    });
    return d;
}