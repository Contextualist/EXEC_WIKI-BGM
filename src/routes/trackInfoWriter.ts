import { type Release } from "$lib/importSource";
import { RE_ROLE_KEYWORD, pagenoJoin, multiDiscPageNoJoin } from "./postprocess";

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
            let t = `${String(i + 1).padStart(2, '0')} ${tr.title}`;
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
    trackInfo += Object.entries(pt).map(([role, names]) => {
        return `${role}：${Object.entries(names).map(([name, ps]) => {
            return `${name}(${isMulti ? multiDiscPageNoJoin(ps) : pagenoJoin(ps.flat())})`;
        }).join('、')}\n`;
    }).join('') + '\n';

    trackInfo += info.discs.map((disc) => {
        let s = isMulti ? "\nDISC\n" : "";
        s += disc.tracks.map((tr, i) => {
            let t = `${String(i + 1).padStart(2, '0')} ${tr.title}`;
            t = RE_ROLE_KEYWORD.test(t) ? `《${t}》` : t;
            if (tr.comment) t += ` // ${tr.comment}`;
            t += '\n';
            return t;
        }).join('\n');
        return s;
    }).join('\n');
    return trackInfo;
}


function nameEscape(n: string): string {
    return ((RE_SEP.test(n) && !RE_LATIN_SPACE.test(n)) || RE_ROLE_KEYWORD.test(n)) ? `《${n}》` : n;
}

function formatCredits(rmap: Record<string, string[]>): string {
    return Object.entries(reverseRecord(rmap))
        .map(([n, rs]) => `${rs.sort().join('、')}：${nameEscape(n)}`)
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