<script lang="ts">
	import History, { type ContentState } from './History.svelte';
	import Arranger, { search } from './Arranger.svelte';
	import { type AutoEditor } from '$lib/importSource/common.ts';

	interface TitleProps {
		value: string;
		setState: (state?: ContentState) => void;
		editor: AutoEditor;
		class?: string;
	}
	let { value = $bindable(), setState, editor, class: class_ }: TitleProps = $props();

	let inputEl: HTMLInputElement | undefined = $state(undefined);
	let showHistory = $state(false);
	let showArranger = $state(false);
</script>

<div
	class="{class_} relative"
	onfocusin={() => (showHistory = true)}
	onfocusout={() => (showHistory = false)}
>
	{#if showHistory}
		<History
			{setState}
			query={value}
			class="absolute bottom-[2.4rem] left-0 w-full rounded-md overflow-hidden"
			inputFocus={() => inputEl?.focus()}
		/>
	{/if}
	<input
		bind:value
		type="text"
		placeholder="唱片名"
		spellcheck="false"
		class="input-bgm text-sm w-[94%] p-[0.5rem]"
		bind:this={inputEl}
		onkeydown={(e) => {
			if (e.key === 'ArrowUp') {
				e.preventDefault();
				// welp, kinda hacky
				const historyEl = (e.target as HTMLElement).previousElementSibling;
				const history1stEntryEl = historyEl?.querySelector('button');
				history1stEntryEl?.focus();
			} else if (e.key === 'Enter' && (e.ctrlKey || e.metaKey)) {
				e.preventDefault();
				showArranger = true;
				search(value);
			}
		}}
	/>
	{#if showArranger}
		<Arranger
			{setState}
			{editor}
			bind:show={showArranger}
			class="absolute z-2 top-[2.4rem] left-0 w-full rounded-md overflow-hidden"
		/>
	{/if}
</div>
