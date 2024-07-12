import Parser from "web-tree-sitter";
import * as lezer from "@lezer/common";

export interface LeafInfo {
    type: string;
    text: string;
    startIndex: number;
    endIndex: number;
}

/**
 * A brute-force adapter for using a tree-sitter parser as a lezer parser.
 * Not sure if this creates any issue with incremental parsing,
 * but, hey, it works for now.
*/
export class TreeSitterParser extends lezer.Parser {
    tsp: Parser;
    dataNode: lezer.NodeType;
    field2nodeType: { [name: string]: lezer.NodeType };
    onUpdate: (leaves: LeafInfo[]) => void;
    constructor(
        tsp: Parser,
        dataNode: lezer.NodeType,
        field2nodeType: { [name: string]: lezer.NodeType },
        onUpdate: (leaves: LeafInfo[]) => void = () => { },
    ) {
        super();
        this.tsp = tsp;
        this.dataNode = dataNode;
        this.field2nodeType = field2nodeType;
        this.onUpdate = onUpdate;
    }

    createParse(
        input: lezer.Input,
        fragments: readonly lezer.TreeFragment[],
        ranges: readonly { from: number, to: number }[],
    ): lezer.PartialParse {
        const text = input.read(0, input.length);
        const tree = this.tsp.parse(text);
        let cursor = tree.walk();
        let leaves = [...this.getLeaves(cursor)];
        this.onUpdate(leaves);
        let lNodes = [];
        let lStarts = [];
        for (const leaf of leaves) {
            lNodes.push(new lezer.Tree(
                this.field2nodeType[leaf.type] || this.field2nodeType[""],
                [],
                [],
                leaf.endIndex - leaf.startIndex,
            ));
            lStarts.push(leaf.startIndex);
        }
        const root = new lezer.Tree(
            this.dataNode,
            lNodes,
            lStarts,
            input.length,
        );
        return new TreeSitterPartialParse(root, input.length);
    }

    private *getLeaves(cursor: Parser.TreeCursor): Generator<LeafInfo> {
        if (cursor.gotoFirstChild()) {
            do {
                yield* this.getLeaves(cursor);
            } while (cursor.gotoNextSibling());
            cursor.gotoParent();
        } else {
            yield { type: cursor.currentFieldName || cursor.nodeType, text: cursor.nodeText, startIndex: cursor.startIndex, endIndex: cursor.endIndex };
        }
    }
}

/**
 * A dummy partial parse that just returns the parsed full tree.
 */
class TreeSitterPartialParse implements lezer.PartialParse {
    tree: lezer.Tree;
    constructor(tree: lezer.Tree, eof: number) {
        this.tree = tree;
        this.parsedPos = eof;
    }
    advance(): lezer.Tree | null {
        return this.tree;
    }
    parsedPos: number;
    stopAt(pos: number): void {
        this.stoppedAt = pos;
    }
    stoppedAt: number | null = null;
}
