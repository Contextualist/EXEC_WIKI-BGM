import { type Release, type Track, DefaultDict } from "./importSource/common";
import { type SubjectEpInfo, type SubjectRelaPerson } from "./client";

/// Assemble Bangumi API data into a Release
export function assembleRelease(subjectEpInfo: SubjectEpInfo[], subjectRelaPerson: SubjectRelaPerson[]): Release {
    const relaMap0 = DefaultDict(() => [] as string[]); // relation -> names
    const relaMap = DefaultDict(() => DefaultDict(() => DefaultDict(() => [] as string[]))); // disc -> track -> relation -> names
    subjectRelaPerson.forEach(({ name, relation, eps }) => {
        if (eps === "") {
            relaMap0[relation].push(name);
            return;
        }
        const dts = parsePart(eps);
        dts.forEach(([disc, track]) => {
            relaMap[disc][track][relation].push(name);
        });
    });

    const discs = DefaultDict(() => ({} as Record<number, Track>));
    subjectEpInfo.forEach((tr) => {
        const d = tr.disc === 0 ? 1 : tr.disc;
        discs[d][tr.ep] = {
            title: tr.name,
            comment: tr.name_cn,
            credits: relaMap[d][tr.ep],
        };
    });
    return {
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
}

/// Parse track number list in single disc (e.g. `1,3-5,7`) or multiple discs (e.g. `1.1, 1.3-5, 2.7`) format
export function parsePart(part: string): [number, number][] {
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

const defaultRoleOrder = [
    '制作人', '艺术家', '作词', '作曲', '编曲', '脚本', '声乐', '乐器', '混音', '母带制作',
    '插图', '原作', '出版方', '厂牌',
];

export function orderedEntries<T>(d: Record<string, T>): [string, T][] {
    return defaultRoleOrder.filter(x => d[x]).map(x => [x, d[x]]);
}
