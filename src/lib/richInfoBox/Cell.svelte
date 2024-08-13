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
		/** Insert a new entry after this one */
		insert: () => void;
		/** Swap this entry with the previous or next one */
		swap: (updown: Direction, el: HTMLElement) => void;
		/** Navigate to the previous or next entry */
		navigate: (direction: Direction, el: HTMLElement) => void;
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
			if (e.shiftKey) return alt(() => action.swap(Direction.Up, e.target as HTMLElement));
			setTimeout(() => {
				if (window.getSelection()?.anchorOffset === 0)
					return alt(() => action.navigate(Direction.Up, e.target as HTMLElement));
			}, 0);
		}
		if (e.key === 'ArrowDown') {
			if (e.shiftKey) return alt(() => action.swap(Direction.Down, e.target as HTMLElement));
			setTimeout(() => {
				if (window.getSelection()?.anchorOffset === value.length)
					return alt(() => action.navigate(Direction.Down, e.target as HTMLElement));
			}, 0);
		}
		if (e.key === 'ArrowLeft') {
			if (window.getSelection()?.anchorOffset === 0)
				return alt(() => action.navigate(Direction.Left, e.target as HTMLElement));
		}
		if (e.key === 'ArrowRight') {
			if (window.getSelection()?.anchorOffset === value.length)
				return alt(() => action.navigate(Direction.Right, e.target as HTMLElement));
		}
		if (e.key === 'Enter') {
			return alt(action.insert);
		}
		if (e.key === '[' && (isMac ? e.metaKey : e.ctrlKey)) {
			return alt(action.arraySwitch);
		}
	}}
	role="textbox"
	tabindex="0"
	class={class_}
></div>
