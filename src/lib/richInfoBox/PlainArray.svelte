<script lang="ts">
	import 'uno.css';
	import { flip } from 'svelte/animate';
	import { type Snippet, getContext } from 'svelte';
	import Cell, {
		type CellActions,
		Direction,
		type DirectionKey,
		type CellConfig
	} from './Cell.svelte';
	import { lintActions } from './lintConfig.ts';

	interface PlainArrayProps {
		value: [string, [string, string][]];
		action: CellActions;
		entryMod: Snippet;
	}
	let { value = $bindable(), action, entryMod }: PlainArrayProps = $props();
	let { keyClass } = getContext<() => CellConfig>('cell-config')();
	let actionWithLint = $derived.by(() => ({
		...action,
		...lintActions(value[0])
	}));
	let currContainer: HTMLElement | null = null;

	const canvas = document.createElement('canvas');
	const ctx = canvas.getContext('2d')!;
	ctx.font = '14px sans-serif';
	let maxKeyWidth = $derived.by(() => {
		let max = 0;
		value[1].forEach(([k, _]) => {
			if (!k) return;
			const w = ctx.measureText(k).width;
			if (w > max) max = w;
		});
		return max;
	});

	function focusIth(i: number) {
		const keyEls = currContainer!.querySelectorAll('.rich-infobox-array > div:nth-child(2)');
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
			swap: (updown: DirectionKey, el: HTMLElement) => {
				if (updown === Direction.Up) {
					if (i === 0) return;
					value.splice(i - 1, 2, value[i], value[i - 1]);
				} else {
					if (i === value.length - 1) return;
					value.splice(i, 2, value[i + 1], value[i]);
				}
				setTimeout(() => el.focus(), 0);
				action.update();
			},
			delete: (hard: boolean) => {
				if (!hard) return;
				value.splice(i, 1);
				action.update();
				setTimeout(() => focusIth(Math.min(i, value.length - 1)), 0);
			}
		};
	}
</script>

<div class="flex relative">
	<Cell
		bind:value={value[0]}
		{action}
		class="rich-infobox-key {keyClass} {value[0].includes(':') ? 'bg-#9065ed/10' : ''}"
	/>
	<div class="rich-infobox-value" bind:this={currContainer}>
		<div class="text-xs text-bgm-grey/65 line-height-5">
			{#if value[1].length}
				(列表，{value[1].length} 项)
			{:else}
				(空列表)
				<button
					title="开始编辑列表"
					class="border-none bg-transparent align-bottom my--0.5 text-bgm-teal/50 cursor-pointer"
					onclick={() => {
						value[1].push(['', '']);
						action.update();
						setTimeout(() => focusIth(0), 0);
					}}
				>
					{@render init1SVG()}
				</button>
			{/if}
		</div>
		{#each value[1] as val_i, i (val_i)}
			<div animate:flip={{ duration: 200 }} class="rich-infobox-array flex relative">
				<Cell
					bind:value={value[1][i][0]}
					action={{
						...action,
						...actAs(value[1], i)
					}}
					class="rich-infobox-key p-0 mt-2 pr-1 min-w-[1em] max-w-[5em] focus:outline-none"
					style="width: {maxKeyWidth}px;"
				/>
				<Cell
					bind:value={value[1][i][1]}
					action={{
						...actionWithLint,
						...actAs(value[1], i)
					}}
					class="mt-2 pl-1 border-l-solid border-bgm-grey border-2 focus:outline-none"
				/>
				<button
					title="删除列表项"
					class="absolute left--5 top-[calc(50%-0.25rem)] color-bgm-teal/50 border-none bg-transparent p-0 cursor-pointer"
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

{#snippet init1SVG()}
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
		<polygon points="14 2 18 6 7 17 3 17 3 13 14 2"></polygon>
		<line x1="3" y1="22" x2="21" y2="22"></line>
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
