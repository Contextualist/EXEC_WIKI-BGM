export const isMac = /mac/i.test(navigator.userAgentData?.platform ?? navigator.platform);
export const ctrlOrCmd = isMac ? '⌘' : 'Ctrl';
export const altOrOpt = isMac ? '⌥' : 'Alt';

export function moveCursorTo(el: HTMLElement, offset: number) {
    let len = el.textContent?.length ?? 0;
    if (!len) return;
    offset = Math.min(len, offset);
    const sel = document.getSelection();
    sel?.removeAllRanges();
    const range = document.createRange();
    range.setStart(el.childNodes[0], offset);
    range.setEnd(el.childNodes[0], offset);
    sel?.addRange(range);
}