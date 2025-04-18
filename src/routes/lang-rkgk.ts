import { TreeSitterParser, type NodeInfo } from "./treeSitterParser";

import { Parser, Language as TreeSitterLanguage } from "web-tree-sitter";
import { LanguageSupport, Language, defineLanguageFacet, languageDataProp } from "@codemirror/language";
import { completeFromList, insertCompletionText, type Completion } from "@codemirror/autocomplete";
import { EditorView } from "@codemirror/view";
import { type Facet } from "@codemirror/state";
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
    { label: "Guest vocal" },
    { label: "Mixing" },
    { label: "Mastering" },
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
    { displayLabel: "原作", label: "yuanzuo" },
    { displayLabel: "声乐", label: "shengyue" },
    { displayLabel: "乐器", label: "yueqi" },
    { displayLabel: "混音", label: "hunyin" },
    { displayLabel: "母带制作", label: "mudaizhizuo" },
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
    "creator": NODE_TYPES.literal,
    "cv_conj": NODE_TYPES.modifier,
    "parts": NODE_TYPES.annotation,
    "《": NODE_TYPES.keyword,
    "》": NODE_TYPES.keyword,
    "title": NODE_TYPES.heading,
    "//": NODE_TYPES.comment,
    "comment": NODE_TYPES.comment,
    "DISC": NODE_TYPES.keyword,
    "ERROR": NODE_TYPES.invalid,
}

const SEMANTIC_TYPES = [
    "role",
    "creator",
    "creatorSeparator",
    "cv_conj",
    "parts",
    "title",
    "comment",
];

export interface CreditField {
    type: "role" | "creator" | "creatorSeparator" | "cv_conj" | "parts";
    value: string;
}

export class RawTrack {
    title: string = "";
    comment: string = "";
    credits: CreditField[] = [];
}

interface RawDisc {
    tracks: RawTrack[];
}

export interface RawRelease {
    credits: CreditField[];
    discs: RawDisc[];
}

function intoRawRelease(root: NodeInfo): RawRelease {
    const release: RawRelease = { credits: [], discs: [] };
    if (root.children.length > 0 && root.children[0].type === "credit_block") {
        release.credits = intoCredits(root.children.shift()!.children);
    }
    if (root.children.length > 0 && root.children[0].type === "disc") {
        for (let child of root.children) {
            if (child.type !== "disc") {
                console.warn(`Unknown node type at ${root.type} level: ${child.type}`);
                continue;
            }
            release.discs.push(intoRawDisc(child));
        }
    } else {
        release.discs.push(intoRawDisc(root));
    }
    return release;
}

function intoRawDisc(root: NodeInfo): RawDisc {
    const disc: RawDisc = { tracks: [] };
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
    const track: RawTrack = new RawTrack();
    if (node.children.length > 0 && node.children[0].type === "title") {
        track.title = node.children.shift()!.text;
    } else {
        console.warn(`Track node does not start with title: ${node.text} type: ${node.type}`);
    }
    if (node.children.length > 0 && node.children[0].type === "comment") {
        track.comment = node.children.shift()!.text.trim();
    }
    if (node.children.length > 0 && node.children[0].type === "credit_block") {
        track.credits.push(...intoCredits(node.children.shift()!.children));
    }
    if (node.children.length > 0) {
        const unk = node.children.shift()!;
        console.warn(`Track node has unknown children: ${unk.type} ${unk.text}`);
    }
    return track;
}

function intoCredits(nodes: NodeInfo[]): CreditField[] {
    return nodes.flatMap(node => node.children.map(child => { return { type: child.type as CreditField["type"], value: child.text } }));
}

async function initTreeSitterParser() {
    await Parser.init();
    const parser = new Parser();
    const rkgk = await TreeSitterLanguage.load("tree-sitter-rkgk.wasm");
    parser.setLanguage(rkgk);
    return parser;
}

export async function rkgk(onUpdate: (disc: RawRelease) => void) {
    const tsp = await initTreeSitterParser();
    const langData = defineLanguageFacet({
        autocomplete: completeFromList([
            ...TYPE_COMPLETIONS.map(tp => ({ ...tp, type: "type", apply: applyTypeCompletion })),
        ]),
        closeBrackets: { brackets: ["《", "("] },
    });
    const _onUpdate = (root: NodeInfo) => onUpdate(intoRawRelease(root));
    const parser = new TreeSitterParser(tsp, docID(langData), FIELD2NODETYPE, SEMANTIC_TYPES, _onUpdate);
    const lang = new Language(langData, parser, [], "rkgk");
    return { lang: new LanguageSupport(lang) };
}

function docID(data: Facet<{ [name: string]: any }>) {
    return lezer.NodeType.define({ id: Object.keys(NODE_TYPES).length, name: "Document", props: [languageDataProp.add(() => data)], top: true })
}