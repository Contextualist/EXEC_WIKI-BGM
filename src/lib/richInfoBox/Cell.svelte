<script lang="ts" context="module">
	export enum Direction {
		Up,
		Down,
		Left,
		Right
	}
	export interface CellActions {
		/** Submit content or structure changes for persistence */
		update: () => void;
		/** Insert a new entry before/after this one */
		insert: (before: boolean) => void;
		/** Swap this entry with the previous or next one */
		swap: (updown: Direction, el: HTMLElement) => void;
		/** Navigate to the previous or next entry */
		navigate: (direction: Direction, el: HTMLElement, offset: number) => void;
		/** Convert array entry to string entry and vice versa */
		arraySwitch: () => void;
	}
</script>

<script lang="ts">
	import 'uno.css';
	import { isMac } from '../utils.ts';

	interface CellProps {
		value: string;
		action: CellActions;
		class: string;
	}
	let { value = $bindable(), action, class: class_ }: CellProps = $props();

	function getOffset() {
		return window.getSelection()?.anchorOffset ?? 0;
	}
</script>

<div
	contenteditable="plaintext-only"
	bind:innerText={value}
	oninput={() => action.update()}
	onkeydown={(e) => {
		function alt(fn: () => void) {
			e.preventDefault();
			fn();
		}
		if (e.key === 'ArrowUp') {
			if (e.metaKey || e.ctrlKey || e.altKey) return;
			if (e.shiftKey) return alt(() => action.swap(Direction.Up, e.target as HTMLElement));
			const offset = getOffset();
			setTimeout(() => {
				if (getOffset() === 0)
					return alt(() => action.navigate(Direction.Up, e.target as HTMLElement, offset));
			}, 0);
		}
		if (e.key === 'ArrowDown') {
			if (e.metaKey || e.ctrlKey || e.altKey) return;
			if (e.shiftKey) return alt(() => action.swap(Direction.Down, e.target as HTMLElement));
			const offset = getOffset();
			setTimeout(() => {
				if (getOffset() === value.length)
					return alt(() => action.navigate(Direction.Down, e.target as HTMLElement, offset));
			}, 0);
		}
		if (e.key === 'ArrowLeft') {
			if (e.metaKey || e.ctrlKey || e.altKey) return;
			if (getOffset() === 0)
				return alt(() =>
					action.navigate(Direction.Left, e.target as HTMLElement, Number.MAX_SAFE_INTEGER)
				);
		}
		if (e.key === 'ArrowRight') {
			if (e.metaKey || e.ctrlKey || e.altKey) return;
			if (getOffset() === value.length)
				return alt(() => action.navigate(Direction.Right, e.target as HTMLElement, 0));
		}
		if (e.key === 'Enter') {
			return alt(() => action.insert(e.shiftKey));
		}
		if (e.key === '[' && (isMac ? e.metaKey : e.ctrlKey)) {
			return alt(action.arraySwitch);
		}
	}}
	role="textbox"
	tabindex="0"
	class={class_}
></div>
