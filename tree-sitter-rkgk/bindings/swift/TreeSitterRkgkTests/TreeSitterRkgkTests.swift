import XCTest
import SwiftTreeSitter
import TreeSitterRkgk

final class TreeSitterRkgkTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_rkgk())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Rkgk grammar")
    }
}
