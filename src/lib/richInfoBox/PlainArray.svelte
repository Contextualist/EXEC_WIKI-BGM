<script lang="ts">
	import 'uno.css';
	import { flip } from 'svelte/animate';
	import { type Snippet } from 'svelte';
	import Cell, { type CellActions, Direction } from './Cell.svelte';

	interface PlainArrayProps {
		value: [string, [string, string][]];
		action: CellActions;
		entryMod: Snippet;
	}
	let { value = $bindable(), action, entryMod }: PlainArrayProps = $props();
	let currContainer: HTMLElement | null = null;

	function focusIth(i: number) {
		const keyEls = currContainer!.querySelectorAll('.rich-infobox-array > div');
		(keyEls[i] as HTMLElement)?.focus();
	}

	function actAs(value: [string, string][], i: number) {
		return {
			insert: (before: boolean) => {
				const newI = before ? i : i + 1;
				value.splice(newI, 0, ['', '']);
				action.update();
				setTimeout(() => focusIth(newI), 0);
			},
			swap: (updown: Direction, el: HTMLElement) => {
				if (updown === Direction.Up) {
					if (i === 0) return;
					value.splice(i - 1, 2, value[i], value[i - 1]);
				} else {
					if (i === value.length - 1) return;
					value.splice(i, 2, value[i + 1], value[i]);
				}
				setTimeout(() => el.focus(), 0);
				action.update();
			}
		};
	}
</script>

<div class="flex relative">
	<Cell bind:value={value[0]} {action} class="rich-infobox-key" />
	<div class="rich-infobox-value" bind:this={currContainer}>
		<div class="text-xs line-height-5 italic">
			({value[1].length ? `列表，${value[1].length} 项` : '空列表'})
			<button
				title="追加列表项"
				class="border-none bg-transparent align-bottom my--0.5 text-bgm-teal/50 cursor-pointer"
				onclick={() => {
					value[1].push(['', '']);
					action.update();
				}}
			>
				{@render appendSVG()}
			</button>
		</div>
		{#each value[1] as val_i, i (val_i)}
			<div animate:flip={{ duration: 200 }} class="rich-infobox-array relative">
				<Cell
					bind:value={value[1][i][1]}
					action={{
						...action,
						...actAs(value[1], i)
					}}
					class="mt-1.5 pl-1 border-l-solid border-bgm-grey/30 border-1 focus:outline-none"
				/>
				<button
					title="删除列表项"
					class="absolute right--1 top-[0.1rem] color-bgm-teal/50 border-none bg-transparent p-0 cursor-pointer"
					tabindex="-1"
					onclick={() => {
						value[1].splice(i, 1);
						action.update();
						setTimeout(() => focusIth(i - 1), 0);
					}}
				>
					{@render delSVG()}
				</button>
			</div>
		{/each}
	</div>
	{@render entryMod()}
</div>

{#snippet appendSVG()}
	<svg
		xmlns="http://www.w3.org/2000/svg"
		width="16"
		height="16"
		viewBox="0 0 24 24"
		fill="none"
		stroke="currentColor"
		stroke-width="2.5"
		stroke-linecap="round"
		stroke-linejoin="round"
	>
		<circle cx="12" cy="12" r="10"></circle>
		<line x1="12" y1="8" x2="12" y2="16"></line>
		<line x1="8" y1="12" x2="16" y2="12"></line>
	</svg>
{/snippet}

{#snippet delSVG()}
	<svg
		xmlns="http://www.w3.org/2000/svg"
		width="16"
		height="16"
		viewBox="0 0 24 24"
		fill="none"
		stroke="currentColor"
		stroke-width="2.5"
		stroke-linecap="round"
		stroke-linejoin="round"
	>
		<line x1="18" y1="6" x2="6" y2="18"></line>
		<line x1="6" y1="6" x2="18" y2="18"></line>
	</svg>
{/snippet}

<style>
	:global(.rich-infobox-array > button) {
		display: none;
	}
	:global(.rich-infobox-array:focus-within > button) {
		display: block;
	}
</style>
