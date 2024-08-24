
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
    pushWarning: (warning: string) => void;
    done: () => void;
}