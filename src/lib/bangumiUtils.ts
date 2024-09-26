

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