<script lang="ts" context="module">
	/**
    Adapted from https://github.com/touchifyapp/svelte-codemirror-editor
    */
	export type ThemeSpec = Record<string, StyleSpec>;
	export type StyleSpec = {
		[propOrSelector: string]: string | number | StyleSpec | null;
	};
</script>

<script lang="ts">
	import { onDestroy, onMount } from 'svelte';
	import { EditorView, placeholder as placeholderExt } from '@codemirror/view';
	import { EditorSelection, EditorState, StateEffect, type Extension } from '@codemirror/state';
	import { HighlightStyle, type LanguageSupport } from '@codemirror/language';
	import { tags } from '@lezer/highlight';

	import {
		crosshairCursor,
		drawSelection,
		dropCursor,
		keymap,
		highlightActiveLine,
		highlightActiveLineGutter,
		highlightSpecialChars,
		rectangularSelection
	} from '@codemirror/view';
	import {
		syntaxHighlighting,
		indentOnInput,
		indentUnit,
		bracketMatching,
		foldGutter,
		foldKeymap
	} from '@codemirror/language';
	import { defaultKeymap, history, historyKeymap, indentWithTab } from '@codemirror/commands';
	import { searchKeymap, highlightSelectionMatches } from '@codemirror/search';
	import {
		autocompletion,
		completionKeymap,
		closeBrackets,
		closeBracketsKeymap
	} from '@codemirror/autocomplete';
	import { lintKeymap } from '@codemirror/lint';

	const defaultHighlightStyle = HighlightStyle.define([
		{ tag: tags.typeName, color: '#f09199' },
		{ tag: tags.literal, color: '#69c' },
		{ tag: tags.keyword, color: '#9065ed' },
		{ tag: tags.invalid, color: '#f00' },
		{ tag: tags.heading, color: '#333', fontWeight: 'bold' }
	]);

	type CodeMirrorProps = {
		value?: string;
		class?: string;
		lang: LanguageSupport;
		theme?: Extension;
		styles?: ThemeSpec;
		extensions?: Extension[];
		useTab?: boolean;
		tabSize?: number;
		lineWrapping?: boolean;
		editable?: boolean;
		readonly?: boolean;
		placeholder?: string | HTMLElement;
		onchange?: (value: string) => void;
		filterPaste?: (text: string) => string;
	};
	let {
		value = $bindable(),
		class: class_,
		lang,
		theme,
		styles,
		extensions,
		useTab = true,
		tabSize = 2,
		lineWrapping = false,
		editable = true,
		readonly = false,
		placeholder,
		onchange,
		filterPaste
	}: CodeMirrorProps = $props();

	let element: HTMLDivElement | undefined = $state();
	let view: EditorView;

	let update_from_prop = false;
	let update_from_state = false;
	let first_config = true;
	let first_update = true;

	let state_extensions = $derived([
		...get_base_extensions(useTab, tabSize, lineWrapping, placeholder, editable, readonly, lang),
		...get_theme(theme, styles),
		...(extensions ?? [])
	]);

	$effect(() => {
		update(value);
	});
	$effect(() => {
		view && state_extensions && reconfigure();
	});

	onMount(() => {
		view = create_editor_view();
	});
	onDestroy(() => view?.destroy());

	function create_editor_view(): EditorView {
		return new EditorView({
			parent: element,
			state: create_editor_state(value),
			dispatch(transaction) {
				view.update([transaction]);

				if (!update_from_prop && transaction.docChanged) {
					handle_change();
				}
			}
		});
	}

	function reconfigure(): void {
		if (first_config) {
			first_config = false;
			return;
		}
		view.dispatch({
			effects: StateEffect.reconfigure.of(state_extensions)
		});
	}

	function update(value: string | undefined): void {
		if (!view) return;
		if (first_update) {
			first_update = false;
			//return; // XXX: this is currently blocking the first update after page reload
		}
		if (update_from_state) {
			update_from_state = false;
			return;
		}

		update_from_prop = true;
		view.setState(create_editor_state(value));
		update_from_prop = false;
	}

	function handle_change(): void {
		const new_value = view.state.doc.toString();
		if (new_value === value) return;

		update_from_state = true;

		value = new_value;
		onchange?.(value);
	}

	function create_editor_state(value: string | undefined): EditorState {
		return EditorState.create({
			doc: value ?? undefined,
			extensions: state_extensions
		});
	}

	function get_base_extensions(
		useTab: boolean,
		tabSize: number,
		lineWrapping: boolean,
		placeholder: string | HTMLElement | undefined,
		editable: boolean,
		readonly: boolean,
		lang: LanguageSupport
	): Extension[] {
		const extensions: Extension[] = [
			highlightActiveLineGutter(),
			highlightSpecialChars(),
			history(),
			foldGutter(),
			drawSelection(),
			dropCursor(),
			EditorState.allowMultipleSelections.of(true),
			indentOnInput(),
			syntaxHighlighting(defaultHighlightStyle, { fallback: true }),
			bracketMatching(),
			closeBrackets(),
			autocompletion(),
			rectangularSelection(),
			crosshairCursor(),
			highlightActiveLine(),
			highlightSelectionMatches(),
			keymap.of([
				...closeBracketsKeymap,
				...defaultKeymap,
				...searchKeymap,
				...historyKeymap,
				...foldKeymap,
				...completionKeymap,
				...lintKeymap
			]),
			indentUnit.of(' '.repeat(tabSize)),
			EditorView.editable.of(editable),
			EditorState.readOnly.of(readonly)
		];

		if (useTab) extensions.push(keymap.of([indentWithTab]));
		if (placeholder) extensions.push(placeholderExt(placeholder));
		if (lang) extensions.push(lang);
		if (lineWrapping) extensions.push(EditorView.lineWrapping);
		if (filterPaste)
			extensions.push(
				EditorState.transactionFilter.of((tr) => {
					if (tr.isUserEvent('input.paste')) {
						const ranges = tr.startState.selection.ranges[0];
						let text = '';
						tr.changes.iterChanges((fromA, toA, fromB, toB, inserted) => {
							text += inserted;
						});
						text = filterPaste(text);
						let selection = tr.selection;
						if (selection) {
							selection = EditorSelection.create([
								EditorSelection.range(ranges.from + text.length, ranges.from + text.length)
							]);
						}
						return [
							{
								changes: { from: ranges.from, to: ranges.to, insert: text },
								scrollIntoView: true,
								selection: selection
							}
						];
					}
					return tr;
				})
			);

		return extensions;
	}

	function get_theme(theme: Extension | undefined, styles: ThemeSpec | undefined): Extension[] {
		const extensions: Extension[] = [];
		if (styles) extensions.push(EditorView.theme(styles));
		if (theme) extensions.push(theme);
		return extensions;
	}
</script>

<div class="codemirror-wrapper {class_}" bind:this={element}></div>

<style>
	.codemirror-wrapper :global(.cm-focused) {
		outline: none;
	}
</style>
