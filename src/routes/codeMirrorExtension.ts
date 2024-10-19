import { type Extension, type EditorState } from "@codemirror/state"
import { EditorView, ViewPlugin, ViewUpdate, Decoration, type DecorationSet, WidgetType, keymap } from "@codemirror/view"
import { syntaxTree } from "@codemirror/language"
import { highlightSpecialChars, MatchDecorator } from "@codemirror/view"

import { ctrlOrCmd } from "$lib/utils"

const partsTracksConversionHint = ` ${ctrlOrCmd}+shift+y 切换参与标记`

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
        this.widgetDecoration = Decoration.widget({
            widget: new TextHintWidget(partsTracksConversionHint),
            side: 1
        })
        this.decorations = this.getDeco(view)
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
            key: "Mod-Shift-y",
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

export function getHighlightSpecialChars(): Extension {
    return highlightSpecialChars({
        // Add all zero-width characters
        addSpecialChars: /[\u200B-\u200D\u2060\uFEFF\u00AD]/,
        render(code, description, placeholder) {
            const element = document.createElement('span');
            element.style.backgroundColor = '#e2e2e2';
            element.style.color = '#ff2222';
            element.style.fontSize = '75%';
            element.textContent = `<${description?.slice(18)}>`;
            return element;
        },
    })
}

export function getFullWidthMarker(): Extension {
    return ViewPlugin.fromClass(class {
        decorations: DecorationSet
        decorator: MatchDecorator

        constructor(view: EditorView) {
            this.decorator = new MatchDecorator({
                // Match full-width characters
                regexp: /[\uFF10-\uFF19\uFF21-\uFF3A\uFF41-\uFF5A]/g,
                decoration: Decoration.mark({
                    attributes: { style: 'border: 1px solid #ff9999;' }
                })
            });
            this.decorations = this.decorator.createDeco(view);
        }

        update(update: ViewUpdate) {
            if (update.docChanged || update.viewportChanged)
                this.decorations = this.decorator.createDeco(update.view);
        }
    }, {
        decorations: v => v.decorations
    })
}