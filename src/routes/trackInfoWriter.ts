import { type Release } from "$lib/importSource";
import { RE_ROLE_KEYWORD } from "./postprocess";

const RE_SEP = /[ 　\t&＆:：\/・、；,]/;
const RE_LATIN_SPACE = /[A-Za-z] [A-Za-z]/;

export { type Release };

export function writeTrackInfo(info: Release): string {
    const isMulti = info.discs.length > 1;
    function nameEscape(n: string): string {
        return ((RE_SEP.test(n) && !RE_LATIN_SPACE.test(n)) || RE_ROLE_KEYWORD.test(n)) ? `《${n}》` : n;
    }
    function formatCredits(rmap: Record<string, string[]>): string {
        return Object.entries(reverseRecord(rmap))
            .map(([n, rs]) => `${rs.sort().join('、')}：${nameEscape(n)}`)
            .join('\n') + '\n';
    }
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