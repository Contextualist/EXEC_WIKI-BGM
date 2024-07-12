package tree_sitter_rkgk_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-rkgk"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_rkgk.Language())
	if language == nil {
		t.Errorf("Error loading Rkgk grammar")
	}
}
