<script lang="ts">
	import History, { type ContentState } from './History.svelte';

	interface TitleProps {
		value: string;
		setState: (state: ContentState) => void;
		class?: string;
	}
	let { value = $bindable(), setState, class: class_ }: TitleProps = $props();

	let inputEl: HTMLInputElement | undefined = $state(undefined);
	let showHistory = $state(false);
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
			}
		}}
	/>
</div>
