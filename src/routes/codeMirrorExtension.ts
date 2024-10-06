import { type Extension, type EditorState } from "@codemirror/state"
import { EditorView, ViewPlugin, ViewUpdate, Decoration, type DecorationSet, WidgetType, keymap } from "@codemirror/view"
import { syntaxTree } from "@codemirror/language"

import { ctrlOrCmd } from "$lib/utils"

const partsTracksConversionHint = ` ${ctrlOrCmd}+shift+t 切换参与标记`

class TextHintWidget extends WidgetType {
    constructor(readonly text: string) { super() }
    toDOM() {
        let span = document.createElement("span")
        span.style.color = "#d0d0d0"
        span.style.fontStyle = "italic"
        span.textContent = this.text
        return span
    }
}

export function partsTracksConverter(convert: (style: 'parts' | 'tracks') => string): Extension {
    return [textHintHighlighter, partsTracksCoversionKeymap(convert)]
}

/// Display text hint on the first selection.
/// For now it's used for parts-tracks-styled credits conversion hint.
const textHintHighlighter = ViewPlugin.fromClass(class {
    decorations: DecorationSet
    private widgetDecoration: Decoration

    constructor(view: EditorView) {
        this.decorations = this.getDeco(view)
        this.widgetDecoration = Decoration.widget({
            widget: new TextHintWidget(partsTracksConversionHint),
            side: 1
        })
    }

    update(update: ViewUpdate) {
        if (update.docChanged || update.selectionSet) this.decorations = this.getDeco(update.view)
    }

    getDeco(view: EditorView) {
        const range = view.state.selection.ranges[0]
        const lineBlock = view.lineBlockAt(range.head)
        const line = view.state.doc.lineAt(lineBlock.from)
        if (!hasAnnotationInRange(view.state, line.from, line.to)) return Decoration.set([])
        return Decoration.set([this.widgetDecoration.range(lineBlock.to)])
    }
}, {
    decorations: v => v.decorations
})

function partsTracksCoversionKeymap(convert: (style: 'parts' | 'tracks') => string) {
    return keymap.of([
        {
            key: "Mod-Shift-t",
            preventDefault: true,
            run: (view: EditorView): boolean => {
                const style = hasAnnotationInRange(view.state) ? "tracks" : "parts"
                const content = convert(style)
                view.dispatch({
                    changes: { from: 0, to: view.state.doc.length, insert: content }
                })
                return true
            }
        }
    ])
}

function hasAnnotationInRange(state: EditorState, from: number = 0, to: number = state.doc.length) {
    let cursor = syntaxTree(state).cursorAt(from, 1)
    do {
        if (cursor.name === "annotation") {
            return true
        }
    } while (cursor.nextSibling() && cursor.to <= to)
    return false
}