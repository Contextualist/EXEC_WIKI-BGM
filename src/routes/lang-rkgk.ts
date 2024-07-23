import { TreeSitterParser, type NodeInfo } from "./treeSitterParser";

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
    "//": NODE_TYPES.comment,
    "comment": NODE_TYPES.comment,
    "@": NODE_TYPES.keyword,
    "ERROR": NODE_TYPES.invalid,
}

const SEMANTIC_TYPES = [
    "role",
    "feat",
    "creator",
    "creatorSeparator",
    "title",
    "comment",
];

export interface CreditField {
    type: "role" | "creator" | "creatorSeparator";
    value: string;
}

export interface RawTrack {
    title: string;
    comment: string;
    credits: CreditField[];
}

export interface RawDisc {
    tracks: RawTrack[];
}

function intoRawDisc(root: NodeInfo): RawDisc {
    let disc: RawDisc = { tracks: [{ title: "", comment: "", credits: [] }] };
    if (root.children.length > 0 && root.children[0].type === "credit_block") {
        disc.tracks[0].credits = intoCredits(root.children.shift()!.children);
    }
    for (let child of root.children) {
        if (child.type !== "song") {
            console.warn(`Unknown node type at ${root.type} level: ${child.type}`);
            continue;
        }
        disc.tracks.push(intoRawTrack(child));
    }
    return disc;
}

function intoRawTrack(node: NodeInfo): RawTrack {
    const track: RawTrack = { title: "", comment: "", credits: [] };
    if (node.children.length > 0 && node.children[0].type === "title") {
        track.title = node.children.shift()!.text;
    } else {
        console.warn(`Track node does not start with title: ${node.text} type: ${node.type}`);
    }
    if (node.children.length > 0 && node.children[0].type === "title") { // not so dirty hack to match feat. fragments
        const feat = node.children.shift()!;
        track.title += feat.children.map(child => child.text).join("");
        feat.children[feat.children.length - 1].text = feat.children[feat.children.length - 1].text.replace(/[)）]$/, "");
        Object.assign(feat.children[0], { type: "role", text: "vocal" });
        track.credits.push(...intoCredits([feat]));
    }
    if (node.children.length > 0 && node.children[0].type === "comment") {
        track.comment = node.children.shift()!.text.trim();
    }
    if (node.children.length > 0 && node.children[0].type === "credit_block") {
        track.credits.push(...intoCredits(node.children.shift()!.children));
    }
    if (node.children.length > 0) {
        const unk = node.children.shift()!;
        if (unk.type !== "@") {
            console.warn(`Track node has unknown children: ${unk.type} ${unk.text}`);
        }
    }
    return track;
}

function intoCredits(nodes: NodeInfo[]): CreditField[] {
    return nodes.flatMap(node => node.children.map(child => { return { type: child.type as CreditField["type"], value: child.text } }));
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
        closeBrackets: { brackets: ["《",] }
    });
    const _onUpdate = onUpdate ? (root: NodeInfo) => onUpdate(intoRawDisc(root)) : undefined;
    const parser = new TreeSitterParser(tsp, docID(langData), FIELD2NODETYPE, SEMANTIC_TYPES, _onUpdate);
    const lang = new Language(langData, parser, [], "rkgk");
    return { lang: new LanguageSupport(lang) };
}

function docID(data: Facet<{ [name: string]: any }>) {
    return lezer.NodeType.define({ id: Object.keys(NODE_TYPES).length, name: "Document", props: [languageDataProp.add(() => data)], top: true })
}