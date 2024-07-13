import { TreeSitterParser, type LeafInfo } from "./treeSitterParser";

import Parser from "web-tree-sitter";
import { LanguageSupport, Language, defineLanguageFacet, languageDataProp } from "@codemirror/language";
import { completeFromList, insertCompletionText, type Completion } from "@codemirror/autocomplete";
import { EditorView } from "@codemirror/view";
import { Facet } from "@codemirror/state";
import * as lezer from "@lezer/common";
import { tags as highlightTags, styleTags } from "@lezer/highlight";

const TYPE_COMPLETIONS = [
    { label: "Music" },
    { label: "Compose" },
    { label: "Lyrics" },
    { label: "Arrangement" },
    { label: "Vocal" },
    { label: "Illustration" },
    { label: "Label" },
    { label: "Producer" },
    { label: "Recording" },
    { displayLabel: "作詞作編曲", label: "zuocizuobianqu" },
    { displayLabel: "作詞作曲", label: "zuocizuoqu" },
    { displayLabel: "作編曲", label: "zuobianqu" },
    { displayLabel: "作曲", label: "zuoqu" },
    { displayLabel: "編曲", label: "bianqu" },
    { displayLabel: "作詞", label: "zuoci" },
    { displayLabel: "厂牌", label: "changpai" },
    { displayLabel: "脚本", label: "jiaoben" },
    { displayLabel: "插图", label: "chatu" },
    { displayLabel: "制作人", label: "zhizuoren" },
    { displayLabel: "出版方", label: "chubanfang" },
    { displayLabel: "录音", label: "luyin" },
    { displayLabel: "原作", label: "yuanzuo" }
];

function applyTypeCompletion(view: EditorView, completion: Completion, from: number, to: number) {
    const comp = `${completion.displayLabel || completion.label}・`;
    view.dispatch(insertCompletionText(view.state, comp, from, to));
}

// Create a set of node types from lezer's default highlight tags
const NODE_TYPES = Object.fromEntries(
    ["", ...Object.keys(highlightTags)].map((name, i) => [name,
        lezer.NodeType.define({
            id: i,
            name,
            props: [styleTags({ [name]: (highlightTags as any)[name] })],
        })])
);

const FIELD2NODETYPE: { [name: string]: lezer.NodeType } = {
    "": NODE_TYPES[""],
    "role": NODE_TYPES.typeName,
    "feat": NODE_TYPES.typeName,
    "creator": NODE_TYPES.literal,
    "《": NODE_TYPES.keyword,
    "》": NODE_TYPES.keyword,
    "title": NODE_TYPES.heading,
    "ERROR": NODE_TYPES.invalid,
}


export interface CreditField {
    type: "role" | "creator" | "creatorSeparator";
    value: string;
}

export interface RawTrack {
    title: string;
    credits: CreditField[];
}

export interface RawDisc {
    tracks: RawTrack[];
}

function intoRawDisc(leaves: LeafInfo[]): RawDisc {
    let disc: RawDisc = { tracks: [{ title: "", credits: [] }] };
    let currentTrack = disc.tracks[0];
    for (let i = 0; i < leaves.length; i++) {
        let leaf = leaves[i];
        if (leaf.type === "title") {
            currentTrack = { title: leaf.text, credits: [] };
            disc.tracks.push(currentTrack);
        } else if (leaf.type === "role" || leaf.type === "creator" || leaf.type === "creatorSeparator") {
            currentTrack.credits.push({ type: leaf.type, value: leaf.text });
        } else if (leaf.type === "feat") { // dirty hack to match feat. fragments
            currentTrack.title += leaf.text;
            currentTrack.credits.push({ type: "role", value: "vocal" });
            while (true) {
                leaf = leaves[++i];
                if (!leaf || (leaf.type !== "creator" && leaf.type !== "creatorSeparator")) {
                    i--;
                    break;
                }
                currentTrack.title += leaf.text;
                currentTrack.credits.push({ type: leaf.type, value: leaf.text.replace(/[)）]$/, "") });
            }
        }
    }
    return disc;
}

async function initTreeSitterParser() {
    await Parser.init();
    const parser = new Parser();
    const rkgk = await Parser.Language.load("tree-sitter-rkgk.wasm");
    parser.setLanguage(rkgk);
    return parser;
}

export async function rkgk(onUpdate?: (disc: RawDisc) => void) {
    const tsp = await initTreeSitterParser();
    const langData = defineLanguageFacet({
        autocomplete: completeFromList([
            ...TYPE_COMPLETIONS.map(tp => ({ ...tp, type: "type", apply: applyTypeCompletion })),
        ]),
    });
    const _onUpdate = onUpdate ? (leaves: LeafInfo[]) => onUpdate(intoRawDisc(leaves)) : undefined;
    const parser = new TreeSitterParser(tsp, docID(langData), FIELD2NODETYPE, _onUpdate);
    const lang = new Language(langData, parser, [], "rkgk");
    return { lang: new LanguageSupport(lang) };
}

function docID(data: Facet<{ [name: string]: any }>) {
    return lezer.NodeType.define({ id: Object.keys(NODE_TYPES).length, name: "Document", props: [languageDataProp.add(() => data)], top: true })
}