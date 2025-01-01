
export interface ImportSource {
    name: string;
    match: RegExp;
    warning: string;
    options: ImportSourceOption[];
    load: (url: string) => Promise<string>;
    apply: (opts: { [key: string]: any }, editor: AutoEditor) => Promise<void>;
    search?: (query: string) => Promise<SearchResultEntry[]>;
}

export interface ImportSourceOption {
    id: string;
    text: string;
    default: any;
}

export interface AutoEditor {
    associableFields: Set<string>;
    editTitleIntro: (title: string, intro: string) => void;
    setTrackInfo: (info: Release, style?: 'parts' | 'tracks') => void;
    setInfoBox: (content: string, override: boolean) => void;
    setInfoBoxField: (field: string, value: string | [string, string][], options?: { editOnly?: boolean }) => boolean;
    unlinkInfoBoxField: (field: string) => void;
    setMetaTags: (tags: string[]) => void;
    importRela: (pids: number[]) => void;
    setSID: (sid: number) => void;
    pushWarning: (warning: string) => void;
    done: () => void;
}

export interface Release {
    credits: Credits;
    discs: Disc[];
}

export interface Disc {
    tracks: Track[];
}

export interface Track {
    title: string;
    comment: string;
    credits: Credits;
}

export type Credits = Record<string, string[]>;

export interface SearchResultEntry {
    title: string;
    subtitle: string;
    url: string;
    date: string;
    imgThumbnail: string;
    imgOriginal: string;
}

export function warningTemplate3rdPartyWiki(name: string): string {
    return `
类似班古米，${name} 是由爱好者们维护的第三方维基站，信息可能有错漏。
建议优先采用官方信息。如需使用 ${name} 的信息，请先核对。

建议仅在满足下列任一情况时使用：
<ol><li>已比对自己买到的小册子/维基站上提供的小册子扫图</li>
<li>已比对作者的官方网站或官方指定贩售渠道上的信息</li>
<li>网上能找到的信息实在太少，连用 Wayback Machine 都翻不出任何信息</li></ol>
`.trim().split("\n").join("<br />");
}

type DefaultDictType<K extends PropertyKey, V> = { [P in K]: V; } & { [key: PropertyKey]: V; };
export function DefaultDict<K extends PropertyKey, V>(defaultInit: () => V): DefaultDictType<K, V> {
    return new Proxy({} as DefaultDictType<K, V>, {
        get: (target, name: PropertyKey) => name in target ? target[name] : ((target as any)[name] = defaultInit())
    })
}

export function formatDuration(seconds: number): string {
    return new Date(seconds * 1000).toISOString().slice(11, 19);
}