<script lang="ts" module>
	import { META_TAG } from '$lib/bangumiConstant/metaTag.ts';

	const MAX_RECENT_COMBO_HISTORY = 5;
	export function storeRecentCombo(
		combo: string,
		recentCombos: string[][],
		subjectType: string
	): string[][] {
		const options = META_TAG[subjectType];
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
	import Dialog from '../Dialog.svelte';

	interface MetaTagProps {
		value: string;
		subjectType: string;
		recentCombos: string[][];
		class?: string;
	}
	let {
		value = $bindable(),
		subjectType,
		recentCombos,
		class: class_ = ''
	}: MetaTagProps = $props();
	let tagSet = $derived(new Set(value.split(/\s+/).filter((tagName) => tagName !== '')));

	let showDialog = $state(false);

	function toggleTags(selected: boolean, ...tagNames: string[]) {
		const ts = new Set(tagNames);
		if (selected) {
			value = Array.from(tagSet)
				.filter((tag) => !ts.has(tag))
				.join(' ');
		} else {
			value = Array.from(tagSet.union(ts)).join(' ');
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
			{@render TagReadonly('添加标签')}
		{/if}
	</div>
	<Dialog bind:show={showDialog} class="w-[40rem] flex flex-row gap-col-sm">
		<div class="flex-basis-[15rem] border-r-solid border-r-2 border-bgm-grey/50">
			<div class="text-bgm-grey text-xs mt-3">最近使用标签组合</div>
			{#each recentCombos as combo}
				{@const selected =
					combo.length === tagSet.size && combo.every((tagName) => tagSet.has(tagName))}
				<!-- svelte-ignore a11y_click_events_have_key_events a11y_no_static_element_interactions -->
				<div
					aria-label="点击增删标签组合"
					role="button"
					tabindex="-1"
					class={'inline-block bg-bgm-lightgrey rounded-md mt-2 mr-4 pl-2 pr-1 py-1 w-[max-content] cursor-pointer border-solid border-1 ' +
						(selected ? 'border-color-bgm-teal' : 'border-transparent')}
					onclick={() => {
						const selected =
							combo.length === tagSet.size && combo.every((tagName) => tagSet.has(tagName));
						if (!selected) value = '';
						toggleTags(selected, ...combo);
					}}
				>
					{#each combo as tagName}
						{@render TagReadonly(tagName)}
					{/each}
				</div>
			{/each}
		</div>
		<div class="">
			{#each Object.entries(META_TAG[subjectType]) as [kind, tags]}
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
		class={'inline-block px-1.5 py-0.5 text-sm bg-white rounded-lg mr-1 my-1 ' +
			(tagName.startsWith('添加') ? 'text-bgm-grey' : '')}
	>
		{tagName}
	</div>
{/snippet}

{#snippet Tag(tagName: string, selected: boolean)}
	<button
		aria-label={selected ? `取消标签「${tagName}」` : `添加标签「${tagName}」`}
		tabindex="-1"
		class={'inline-block px-1.5 py-0.5 h-[1.6rem] text-sm bg-bgm-lightgrey rounded-lg ml-1 my-1 cursor-pointer border-solid border-1 ' +
			(selected ? 'border-color-bgm-teal' : 'border-transparent')}
		onclick={() => {
			toggleTags(selected, tagName);
		}}
	>
		{tagName}
	</button>
{/snippet}
