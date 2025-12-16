<script lang="ts">
	import 'uno.css';
	import { type Snippet, getContext } from 'svelte';
	import Cell, { type CellActions, type CellConfig } from './Cell.svelte';

	interface ReactiveProps {
		unlinked: boolean;
		value: [string, string];
		action: CellActions;
		entryMod: Snippet;
	}
	let { unlinked = $bindable(), value = $bindable(), action, entryMod }: ReactiveProps = $props();
	let { keyClass } = getContext<() => CellConfig>('cell-config')();
	function valueUpdate() {
		// manual editting removes the reactivity of current field
		unlinked = true;
		action.update();
	}
</script>

<div class="flex relative">
	{#if unlinked}
		<button
			title="恢复同步"
			class="absolute left-[3.9rem] top-[1.1rem] color-bgm-teal border-none bg-transparent p-0 cursor-pointer"
			tabindex="-1"
			onclick={() => (unlinked = false)}
		>
			{@render lockSVG()}
		</button>
	{/if}
	<Cell
		bind:value={value[0]}
		{action}
		class="rich-infobox-key {keyClass} {unlinked ? 'bg-bgm-lightgrey' : 'bg-faint-skyish/60'}"
	/>
	<Cell
		bind:value={value[1]}
		action={{ ...action, update: valueUpdate, arraySwitch: () => {} }}
		class="rich-infobox-value"
	/>
	{@render entryMod()}
</div>

{#snippet lockSVG()}
	<svg
		xmlns="http://www.w3.org/2000/svg"
		width="16"
		height="16"
		viewBox="0 0 24 24"
		fill="none"
		stroke="currentColor"
		stroke-width="2"
		stroke-linecap="round"
		stroke-linejoin="round"
	>
		<rect fill="currentColor" x="4" y="11" width="16" height="12" rx="2" ry="2"></rect>
		<path d="M7 11V7a5 5 0 0 1 10 0v4"></path>
	</svg>
{/snippet}
