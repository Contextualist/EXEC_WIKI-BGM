
export interface ImportSource {
    name: string;
    match: RegExp;
    warning: string;
    options: ImportSourceOption[];
    load: (url: string) => Promise<string>;
    apply: (opts: { [key: string]: any }, editor: AutoEditor) => Promise<void>;
}

export interface ImportSourceOption {
    id: string;
    text: string;
    default: any;
}

export interface AutoEditor {
    editTitleIntro: (title: string, intro: string) => void;
    setTrackInfo: (info: Release) => void;
    setInfoBox: (content: string) => void;
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