<script lang="ts" module>
	const MAX_RECENT_COMBO_HISTORY = 5;
	export function storeRecentCombo(
		combo: string,
		recentCombos: string[][],
		options: MetaTagKind
	): string[][] {
		let tags = combo.split(/\s+/).filter((tagName) => tagName !== '');
		const tagsWithSortIndex = tags.map((tagName) => {
			const kind = Object.keys(options).find((kind) => options[kind].tags.includes(tagName));
			if (!kind) return { tagName, sortIndex: Infinity };
			const index = options[kind].tags.indexOf(tagName);
			return { tagName, sortIndex: options[kind].index * 10000 + index };
		});
		tags = tagsWithSortIndex
			.sort((a, b) => a.sortIndex - b.sortIndex)
			.map(({ tagName }) => tagName);
		const prevPos = recentCombos.findIndex(
			(combo) => combo.length === tags.length && combo.every((tagName, i) => tagName === tags[i])
		);
		if (prevPos !== -1) recentCombos.splice(prevPos, 1);
		recentCombos.unshift(tags);
		if (recentCombos.length > MAX_RECENT_COMBO_HISTORY) recentCombos.pop();
		return recentCombos;
	}
</script>

<script lang="ts">
	import 'uno.css';
	import { type MetaTagKind } from '$lib/bangumiConstant/metaTag.ts';
	import Dialog from '../Dialog.svelte';

	interface MetaTagProps {
		value: string;
		options: MetaTagKind;
		recentCombos: string[][];
		class?: string;
	}
	let { value = $bindable(), options, recentCombos, class: class_ = '' }: MetaTagProps = $props();
	let tagSet = $derived(new Set(value.split(/\s+/).filter((tagName) => tagName !== '')));

	let showDialog = $state(false);

	function toggleTag(tagName: string, selected: boolean) {
		if (selected) {
			value = Array.from(tagSet)
				.filter((tag) => tag !== tagName)
				.join(' ');
		} else if (!tagSet.has(tagName)) {
			value = [...tagSet, tagName].join(' ');
		}
	}
</script>

<div class="{class_} py-1 mb-2 bg-bgm-lightgrey rounded-md">
	<!-- svelte-ignore a11y_click_events_have_key_events a11y_no_static_element_interactions -->
	<div
		aria-label="点击编辑标签"
		role="button"
		tabindex="-1"
		class="flex flex-wrap mx-2 cursor-pointer"
		onclick={() => (showDialog = true)}
	>
		{#if tagSet.size > 0}
			{#each tagSet as tagName}
				{@render TagReadonly(tagName)}
			{/each}
		{:else}
			{@render TagReadonly('+标签')}
		{/if}
	</div>
	<Dialog bind:show={showDialog} class="w-[40rem] flex flex-row gap-col-sm">
		<div class="flex-basis-[15rem] border-r-solid border-r-2 border-bgm-grey/50">
			<span class="inline-block text-bgm-grey text-xs mt-3">最近使用标签组合</span>
			{#each recentCombos as combo}
				<!-- svelte-ignore a11y_click_events_have_key_events a11y_no_static_element_interactions -->
				<div
					aria-label="点击增删标签组合"
					role="button"
					tabindex="-1"
					class="inline-block bg-bgm-lightgrey rounded-md mt-2 mr-4 pl-2 pr-1 py-1 w-[max-content] cursor-pointer"
					onclick={() => {
						const selected = combo.every((tagName) => tagSet.has(tagName));
						combo.forEach((tagName) => {
							toggleTag(tagName, selected);
						});
					}}
				>
					{#each combo as tagName}
						{@render TagReadonly(tagName)}
					{/each}
				</div>
			{/each}
		</div>
		<div class="">
			{#each Object.entries(options) as [kind, tags]}
				<div class="flex">
					<div class="flex-[0_0_2rem] text-bgm-grey text-xs mr-1 mt-[0.55rem]">{kind}</div>
					<div class="flex flex-wrap">
						{#each tags.tags as tagName}
							{@render Tag(tagName, tagSet.has(tagName))}
						{/each}
					</div>
				</div>
			{/each}
		</div>
	</Dialog>
</div>

{#snippet TagReadonly(tagName: string)}
	<div
		class={'inline-block px-1.5 py-0.5 bg-white rounded-lg mr-1 my-1 ' +
			(tagName.startsWith('+') ? 'text-bgm-grey' : '')}
	>
		{tagName}
	</div>
{/snippet}

{#snippet Tag(tagName: string, selected: boolean)}
	<button
		title={selected ? '取消标签' : '添加标签'}
		aria-label={selected ? `取消标签「${tagName}」` : `添加标签「${tagName}」`}
		tabindex="-1"
		class={'inline-block px-1.5 py-0.5 h-[1.6rem] bg-bgm-lightgrey rounded-lg ml-1 my-1 cursor-pointer border-solid border-1 ' +
			(selected ? 'border-color-bgm-teal' : 'border-transparent')}
		onclick={() => {
			toggleTag(tagName, selected);
		}}
	>
		{tagName}
	</button>
{/snippet}
