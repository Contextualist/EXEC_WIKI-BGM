<script lang="ts">
	import 'uno.css';
	import { type Snippet } from 'svelte';
	import Cell, { type CellActions } from './Cell.svelte';

	interface PlainProps {
		value: [string, string];
		action: CellActions;
		entryMod: Snippet;
	}
	let { value = $bindable(), action, entryMod }: PlainProps = $props();
</script>

<div class="flex relative">
	<Cell bind:value={value[0]} {action} class="rich-infobox-key" />
	<Cell bind:value={value[1]} {action} class="rich-infobox-value" />
	{@render entryMod()}
</div>
