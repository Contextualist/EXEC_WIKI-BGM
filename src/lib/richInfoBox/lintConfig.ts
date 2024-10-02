
export function lintActions(key: string) {
    return {
        ...(key in AUTOFIX_CONFIG ? { autofix: AUTOFIX_CONFIG[key] } : {}),
    }
}

export const AUTOFIX_CONFIG = ([
    [autofixDate, ['发售日期', '发行日期', '连载开始', '放送开始', '开始', '播放结束', '结束']],
] as [any, string[]][]).reduce((obj, [fn, keys]) => {
    keys.forEach((key) => obj[key] = fn);
    return obj;
}, {} as { [key: string]: (value: string) => string | void });


const RE_DATE = /(\d{4})\D+(\d+)\D+(\d+)/u;
const RE_EVENT = /[\(（](.*?)[\)）]\s*$/u;
function autofixDate(value: string): string | void {
    const date = RE_DATE.exec(value);
    if (!date) return;
    const event = RE_EVENT.exec(value);

    let [y, m, d] = date.slice(1).map((v) => parseInt(v));
    const eventName = event ? ` (${event[1].trim()})` : '';

    if (value.includes('年')) return `${y}年${m}月${d}日${eventName}`;
    return `${y}-${String(m).padStart(2, '0')}-${String(d).padStart(2, '0')}${eventName}`;
}