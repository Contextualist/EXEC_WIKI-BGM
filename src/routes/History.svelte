<script lang="ts" module>
	import createFuzzySearch from '@nozbe/microfuzz';

	import { localStorage$state } from './utils.svelte.ts';

	const MAX_HISTORY_LENGTH = 100;

	export interface ContentState {
		sid: number;
		title: string;
		metaTags: string;
		infoBox: string;
		trackInfo: string;
		desc: string;
	}

	interface ContentEntry extends ContentState {
		timestamp: number;
	}

	export function pushState(state: ContentState) {
		historyState.val = [
			...historyState.val.slice(Math.max(0, historyState.val.length - MAX_HISTORY_LENGTH + 1)),
			{ ...state, timestamp: Date.now() }
		];
	}

	let historyState = localStorage$state('history', [] as ContentEntry[], { raw: true });
	let fuzzySearch = $derived(
		createFuzzySearch(historyState.val, {
			getText: (v) => [v.title.toLowerCase()]
		})
	);
</script>

<script lang="ts">
	import { fade } from 'svelte/transition';
	import { confirm } from '$lib/ConfirmationDialog.svelte';

	interface HistoryProps {
		setState: (state: ContentState) => void;
		query: string;
		class?: string;
		inputFocus: () => void;
	}

	let { setState, query, class: class_, inputFocus }: HistoryProps = $props();
	let displayHistory = $derived.by(() => {
		let history = historyState.val.toReversed();
		if (query !== '') {
			history = fuzzySearch(query.toLowerCase()).map((v) => v.item);
		}
		return history.slice(0, 30);
	});
</script>

<div class="{class_} {displayHistory.length === 0 ? 'hidden' : ''}">
	<div
		class="relative rounded-md h-[25rem] bg-white"
		transition:fade|global={{ duration: 200, delay: 0 }}
	>
		<div
			class="sticky top-[14rem] left-0 w-full h-[14rem] bg-[linear-gradient(to_top,_transparent_30%,_#FBFBFB_80%)] pointer-events-none"
		></div>
		<div class="flex flex-col-reverse h-[11rem] overflow-y-scroll" style="scrollbar-width: none">
			{#each displayHistory as ce, i (ce.timestamp)}
				<button
					onmousedown={() =>
						confirm({
							title: `确定要载入历史记录吗？`,
							message: `载入「${ce.title}」可就直接覆盖当前填写的信息了哦`,
							onConfirm: () => setState(ce)
						})}
					class="bg-transparent hover:bg-bgm-grey/10 focus:bg-bgm-grey/10 focus:outline-none border-none px-2 py-2 w-full text-sm text-align-start cursor-pointer"
					onkeydown={(e) => {
						if (e.key === 'Enter') {
							setState(ce);
						} else if (e.key === 'ArrowUp') {
							e.preventDefault();
							((e.target as HTMLElement).nextElementSibling as HTMLElement)?.focus();
						} else if (e.key === 'ArrowDown') {
							e.preventDefault();
							if (i === 0) {
								inputFocus();
							} else {
								((e.target as HTMLElement).previousElementSibling as HTMLElement)?.focus();
							}
						}
					}}
				>
					<span
						title={ce.title}
						class="inline-block text-sm w-[65%] h-[1rem] overflow-hidden text-ellipsis whitespace-nowrap"
					>
						{ce.title}
					</span>
					<span
						class="inline-block h-[1rem] line-height-[1.3rem] text-xs text-bgm-grey/50 float-right"
					>
						{new Date(ce.timestamp).toLocaleString(undefined, {
							year: 'numeric',
							month: '2-digit',
							day: '2-digit',
							hour: '2-digit',
							minute: '2-digit'
						})}
					</span>
				</button>
			{/each}
			<div class="h-[0.5rem] text-sm w-full rounded-t-lg bg-white">&nbsp;</div>
		</div>
	</div>
</div>
