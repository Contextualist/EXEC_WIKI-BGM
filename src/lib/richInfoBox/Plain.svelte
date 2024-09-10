<script lang="ts">
	import 'uno.css';
	import { type Snippet, getContext } from 'svelte';
	import Cell, { type CellActions, type CellConfig } from './Cell.svelte';

	interface PlainProps {
		value: [string, string];
		action: CellActions;
		entryMod: Snippet;
	}
	let { value = $bindable(), action, entryMod }: PlainProps = $props();
	let { keyClass } = getContext<CellConfig>('cell-config');
</script>

<div class="flex relative">
	<Cell bind:value={value[0]} {action} class="rich-infobox-key {keyClass}" />
	<Cell bind:value={value[1]} {action} class="rich-infobox-value" />
	{@render entryMod()}
</div>
