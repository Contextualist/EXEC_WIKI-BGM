<script lang="ts" module>
	import type { ImportSource, SearchResultEntry } from '$lib/importSource/common';
	import { MusicBrainz } from '$lib/importSource/musicbrainz';

	interface SearchResultEntryWithSource extends SearchResultEntry {
		source: ImportSource;
	}

	let searchResultPromise = $state<Promise<SearchResultEntryWithSource[]>>(Promise.resolve([]));
	const sourceList: ImportSource[] = [new MusicBrainz()];

	export async function search(query: string) {
		searchResultPromise = Promise.all(
			sourceList.map(async (source) => {
				const result = await source.search!(query);
				return result.map((r) => ({ ...r, source }));
			})
		).then((results) => results.flat());
	}
</script>

<script lang="ts">
	import { fade } from 'svelte/transition';
	import type { AutoEditor } from '$lib/importSource/common.ts';
	import type { ContentState } from './History.svelte';

	interface ArrangerProps {
		setState: (state?: ContentState) => void;
		editor: AutoEditor;
		show: boolean;
		class?: string;
	}

	let { setState, editor, show = $bindable(), class: class_ }: ArrangerProps = $props();
</script>

<div class={class_}>
	<div
		class="h-[25rem] rounded-md bg-bgm-lightergrey flex flex-col"
		transition:fade|global={{ duration: 200, delay: 0 }}
	>
		{#await searchResultPromise}
			<img src="/loading.gif" alt="loading" class="w-15 p-2 opacity-60" />
		{:then searchResult}
			{#each searchResult as entry, i (entry.url)}
				<button
					onclick={async () => {
						const source = entry.source;
						setState();
						await source.load(entry.url);
						const opts = Object.fromEntries(source.options.map((opt) => [opt.id, opt.default]));
						await source.apply(opts, editor);
						show = false;
					}}
					class="p-2 flex flex-row items-center gap-2 hover:bg-bgm-grey/10 cursor-pointer bg-transparent border-none text-left"
				>
					{#if entry.imgThumbnail}
						<img src={entry.imgThumbnail} alt={entry.title} class="w-15 h-15 rounded-md" />
					{:else}
						<img src="/no_img.gif" alt={entry.title} class="w-15 h-15 rounded-md" />
					{/if}
					<div class="flex flex-col">
						<div class="flex flex-row items-center gap-1">
							<img src="logo/{entry.source.name}.svg" alt={entry.source.name} class="w-5 h-5" />
							<a
								href={entry.url}
								target="_blank"
								rel="noopener noreferrer"
								onclick={(e) => e.stopPropagation()}
								class="text-sm w-[fit-content]"
							>
								{entry.title}
							</a>
						</div>
						<div class="text-xs text-bgm-grey">{entry.date} / {entry.subtitle}</div>
					</div>
				</button>
			{/each}
		{/await}
	</div>
</div>
