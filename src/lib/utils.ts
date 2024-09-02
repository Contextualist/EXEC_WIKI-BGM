export const isMac = /mac/i.test(navigator.userAgentData?.platform ?? navigator.platform);
export const ctrlOrCmd = isMac ? '⌘' : 'Ctrl';
export const altOrOpt = isMac ? '⌥' : 'Alt';