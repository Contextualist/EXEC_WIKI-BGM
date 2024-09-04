
export interface ComboConfig<V> {
    options: (string | { text: string, note: string })[]
    toRaw: (value: V) => string[]
    fromRaw: (rawValue: string[]) => V
}

export const COMBO_CONFIG: {
    版本特性: ComboConfig<string>,
    平台: ComboConfig<[string, string][]>,
} = {
    版本特性: {
        options: [
            "CD",
            "Digital",
            { text: "Album", note: "专辑、アルバム、フルアルバム" },
            { text: "Single", note: "单曲、シングル" },
            { text: "EP", note: "迷你专辑、Mini-Album、ミニアルバム" },
            { text: "Mini-Album", note: "迷你专辑、ミニアルバム、EP" },
            { text: "Soundtrack", note: "原声带、サウンドトラック" },
            "Compilation",
            "DL Card",
            "Maxi",
        ],
        toRaw(value: string): string[] {
            return value ? value.split(',').map((v) => v.trim()) : [];
        },
        fromRaw(rawValue: string[]): string {
            return rawValue.join(', ');
        },
    },
    平台: {
        options: [
            "3DS",
            "Android",
            "iOS",
            "Mac OS",
            "Nintendo Switch",
            "PC",
            "PS Vita",
            "PS3",
            "PS4",
            "PS5",
            "Web",
            "Wii",
            "Wii U",
            "Xbox360",
            "Xbox One",
            "Xbox Series X/S",
        ],
        toRaw(value: [string, string][]): string[] {
            return value.map((v) => v[1]);
        },
        fromRaw(rawValue: string[]): [string, string][] {
            return rawValue.map((v) => ['', v]);
        },
    },
}