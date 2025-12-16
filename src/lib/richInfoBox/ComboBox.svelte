<script lang="ts" generics="V">
	import 'uno.css';
	import { type Snippet, getContext } from 'svelte';
	import Cell, { type CellActions, type CellConfig } from './Cell.svelte';
	import ComboBoxCell from './ComboBoxCell.svelte';
	import { COMBO_CONFIG, type ComboConfig } from './comboConfig.ts';

	interface ComboBoxProps {
		value: [string, V];
		action: CellActions;
		entryMod: Snippet;
	}
	let { value = $bindable(), action, entryMod }: ComboBoxProps = $props();
	/* @ts-ignore */
	let config: ComboConfig<V> = $derived(COMBO_CONFIG[value[0]]);
	let { keyClass } = getContext<() => CellConfig>('cell-config')();
</script>

<div class="flex relative">
	<Cell bind:value={value[0]} {action} class="rich-infobox-key {keyClass} line-height-[1.8rem]" />
	<ComboBoxCell bind:value={value[1]} {action} {config} class="rich-infobox-value" />
	{@render entryMod()}
</div>
