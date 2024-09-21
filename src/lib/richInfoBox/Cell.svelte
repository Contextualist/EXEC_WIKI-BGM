<script lang="ts" module>
	export const Direction = {
		Up: 'up',
		Down: 'down',
		Left: 'left',
		Right: 'right'
	} as const;
	export type DirectionKey = (typeof Direction)[keyof typeof Direction];
	export interface CellActions {
		/** Submit content or structure changes for persistence */
		update: () => void;
		/** Insert a new entry before/after this one */
		insert: (before: boolean) => void;
		/** Swap this entry with the previous or next one */
		swap: (updown: DirectionKey, el: HTMLElement) => void;
		/** Navigate to the previous or next entry */
		navigate: (direction: DirectionKey, el: HTMLElement, offset: number) => void;
		/** Convert array entry to string entry and vice versa */
		arraySwitch: () => void;
		/** Structural deletion, if applicable */
		delete?: (hard: boolean) => void;
		/** Autofix on focusout */
		autofix?: (value: string) => string | void;
	}
	export interface CellConfig {
		keyClass: string;
	}
</script>

<script lang="ts">
	import 'uno.css';
	import { onMount } from 'svelte';
	import { isMac, isFirefox } from '../utils.ts';

	interface CellProps {
		value: string;
		action: CellActions;
		class: string;
		this_?: HTMLElement;
	}
	let { value = $bindable(), action, class: class_, this_ = $bindable() }: CellProps = $props();
	onMount(() => {
		if (isFirefox && this_) {
			this_.contentEditable = 'true';
		}
	});

	function getOffset() {
		return window.getSelection()?.anchorOffset ?? 0;
	}
</script>

<div
	bind:this={this_}
	contenteditable="plaintext-only"
	bind:innerText={value}
	oninput={() => action.update()}
	onkeydown={(e) => {
		if (e.isComposing) return;
		function alt(fn: () => void) {
			e.preventDefault();
			fn();
		}
		if (e.key === 'ArrowUp') {
			if (e.metaKey || e.ctrlKey || e.shiftKey) return;
			if (e.altKey) return alt(() => action.swap(Direction.Up, e.target as HTMLElement));
			const offset = getOffset();
			setTimeout(() => {
				if (getOffset() === 0)
					return alt(() => action.navigate(Direction.Up, e.target as HTMLElement, offset));
			}, 0);
		}
		if (e.key === 'ArrowDown') {
			if (e.metaKey || e.ctrlKey || e.shiftKey) return;
			if (e.altKey) return alt(() => action.swap(Direction.Down, e.target as HTMLElement));
			const offset = getOffset();
			setTimeout(() => {
				if (getOffset() === value.length)
					return alt(() => action.navigate(Direction.Down, e.target as HTMLElement, offset));
			}, 0);
		}
		if (e.key === 'ArrowLeft') {
			if (e.metaKey || e.ctrlKey || e.shiftKey) return;
			if (getOffset() === 0)
				return alt(() =>
					action.navigate(Direction.Left, e.target as HTMLElement, Number.MAX_SAFE_INTEGER)
				);
		}
		if (e.key === 'ArrowRight') {
			if (e.metaKey || e.ctrlKey || e.shiftKey) return;
			if (getOffset() === value.length)
				return alt(() => action.navigate(Direction.Right, e.target as HTMLElement, 0));
		}
		if (e.key === 'Enter') {
			return alt(() => action.insert(e.shiftKey));
		}
		if (e.key === '[' && (isMac ? e.metaKey : e.ctrlKey)) {
			return alt(action.arraySwitch);
		}
		if (e.key === 'Backspace') {
			setTimeout(() => {
				// workaround for Safari & Firefox
				if (value === '\n') {
					value = '';
					action.update();
				}
			}, 0);
			if (action.delete && value === '') {
				return alt(() => action.delete?.(false));
			}
		}
		if (e.code === 'KeyK' && e.shiftKey && (isMac ? e.metaKey : e.ctrlKey)) {
			return alt(() => action.delete?.(true));
		}
	}}
	onfocusout={() => {
		if (!action.autofix) return;
		const fixed = action.autofix(value);
		if (fixed) {
			value = fixed;
			action.update();
		}
	}}
	role="textbox"
	tabindex="0"
	spellcheck="false"
	class={class_}
></div>
