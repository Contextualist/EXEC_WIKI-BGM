import { Parser, TreeCursor } from "web-tree-sitter";
import * as lezer from "@lezer/common";

interface LeafInfo {
    type: string;
    text: string;
    startIndex: number;
    endIndex: number;
}

export interface NodeInfo extends LeafInfo {
    children: NodeInfo[];
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
    semanticTypes: Set<string>;
    onUpdate: (root: NodeInfo) => void;
    /**
     * @param tsp - The Tree-sitter parser to use.
     * @param dataNode - The Lezer node type to use for the root of the Lezer tree.
     * @param field2nodeType - A mapping from Tree-sitter field / node type to Lezer node type.
     * @param semanticTypes - A set of Tree-sitter node types to be passed to the onUpdate callback.
     * @param onUpdate - A callback to be called with a parsed semantic tree.
     */
    constructor(
        tsp: Parser,
        dataNode: lezer.NodeType,
        field2nodeType: { [name: string]: lezer.NodeType },
        semanticTypes: string[],
        onUpdate: (root: NodeInfo) => void = () => { },
    ) {
        super();
        this.tsp = tsp;
        this.dataNode = dataNode;
        this.field2nodeType = field2nodeType;
        this.semanticTypes = new Set(semanticTypes);
        this.onUpdate = onUpdate;
    }

    createParse(
        input: lezer.Input,
        fragments: readonly lezer.TreeFragment[],
        ranges: readonly { from: number, to: number }[],
    ): lezer.PartialParse {
        const text = input.read(0, input.length);
        const tree = this.tsp.parse(text)!;
        let cursor = tree.walk();
        const { root: rootNode, leaves } = this.traverse(cursor);
        this.onUpdate(rootNode);
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

    private traverse(cursor: TreeCursor): { root: NodeInfo, leaves: LeafInfo[] } {
        const self: NodeInfo = { type: cursor.currentFieldName || cursor.nodeType, text: cursor.nodeText, startIndex: cursor.startIndex, endIndex: cursor.endIndex, children: [] };
        const leaves = [];
        if (cursor.gotoFirstChild()) {
            do {
                const { root: child, leaves: childLeaves } = this.traverse(cursor);
                if ((child.children.length > 0 && child.type !== 'ERROR') || this.semanticTypes.has(child.type)) {
                    self.children.push(child);
                }
                leaves.push(...childLeaves);
            } while (cursor.gotoNextSibling());
            cursor.gotoParent();
        } else {
            leaves.push(self);
        }
        return { root: self, leaves };
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
