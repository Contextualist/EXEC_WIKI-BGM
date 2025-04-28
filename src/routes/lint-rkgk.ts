import { Role, ROLE_MAP } from "./postprocess";

import { syntaxTree } from "@codemirror/language";
import { type Extension } from "@codemirror/state";
import { EditorView } from "@codemirror/view";
import { linter, type Action, type Diagnostic } from "@codemirror/lint";
import * as lezer from "@lezer/common";

const PAN_VOCAL = new Set(Object.entries(ROLE_MAP).filter(([_, v]) => v[0] === Role.V || v[0] === Role.FV).map(([k, _]) => k));

export function getLinter(): Extension {
    return linter((view: EditorView): readonly Diagnostic[] => {
        function getText(node: lezer.SyntaxNodeRef) {
            return view.state.sliceDoc(node.from, node.to);
        }
        interface LintTrack {
            node: lezer.SyntaxNode;
            featStart: number;
            lineEnd: number;
            hasVocal: boolean;
            startsWith歌: boolean;
        }
        let trs: LintTrack[] = [];
        syntaxTree(view.state).cursor().iterate((node) => {
            switch (node.name) {
                case "heading": // title
                    trs.push({
                        node: node.node, featStart: getText(node).indexOf("feat."),
                        lineEnd: node.to, hasVocal: false,
                        startsWith歌: /^歌[：:・ ]/.test(getText(node)),
                    });
                    return;
                case "comment":
                    trs[trs.length - 1].lineEnd = node.to;
                    return;
                case "typeName": // role
                    if (!trs.length || trs[trs.length - 1].featStart === -1) return;
                    const role = getText(node);
                    if (PAN_VOCAL.has(role.toLowerCase())) {
                        trs[trs.length - 1].hasVocal = true;
                    }
                    return;
            }
        });

        let diagnostics: Diagnostic[] = [];
        let featEdits: { from: number, insert: string }[] = [];
        const featActions: Action[] = [
            {
                name: "声乐", apply(view) {
                    const c = featEdits.map(({ from, insert }) => ({ from, insert: `\nGuest Vocal: ${insert}` }));
                    view.dispatch({ changes: c });
                }
            },
            {
                name: "艺术家", apply(view) {
                    const c = featEdits.map(({ from, insert }) => ({ from, insert: `\nVocal: ${insert}` }));
                    view.dispatch({ changes: c });
                }
            }
        ];
        let 歌Edits: { from: number, to: number }[] = [];
        const 歌Actions: Action[] = [
            {
                name: "替换“歌”为“歌唱”", apply(view) {
                    const c = 歌Edits.map(({ from, to }) => ({ from, to, insert: "歌唱" }));
                    view.dispatch({ changes: c });
                }
            }
        ];
        trs.forEach(({ node, featStart, lineEnd, hasVocal, startsWith歌 }) => {
            if (featStart !== -1 && !hasVocal) {
                const feat = view.state.sliceDoc(node.from + featStart + 5, node.to).trim().replace(/[\)）]$/, "");
                featEdits.push({ from: lineEnd, insert: feat });
                diagnostics.push({
                    from: node.from + featStart,
                    to: node.to,
                    message: "提取所有 feat. 为…",
                    severity: "warning",
                    actions: featActions,
                });
            } else if (startsWith歌) {
                歌Edits.push({ from: node.from, to: node.from + 1 });
                diagnostics.push({
                    from: node.from,
                    to: node.to,
                    message: "这位是不是「艺术家」？",
                    severity: "warning",
                    actions: 歌Actions,
                });
            }
        });
        return diagnostics;
    });
}