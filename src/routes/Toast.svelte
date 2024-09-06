<script lang="ts" context="module">
	export interface ToastItemProps {
		message: string;
		time: number;
		nDone: number;
		nTotal: number;
		isAlert: boolean;
	}
	export function toast(
		message: string,
		{
			progress = false,
			alert = false,
			duration = 3000
		}: { progress?: boolean; alert?: boolean; duration?: number } = {}
	): { tp: ToastItemProps; rfn: () => void } {
		const time = Date.now();
		let tp = $state({ message, time, nDone: 0, nTotal: progress ? 1 : 0, isAlert: alert });
		queue.push(tp);
		const rfn = () => (queue = queue.filter((ti) => ti.time !== time));
		if (!progress) {
			setTimeout(rfn, duration);
		}
		return { tp, rfn };
	}
	let queue: ToastItemProps[] = $state([]);
</script>

<script lang="ts">
	import 'uno.css';
	import { fly, fade } from 'svelte/transition';
	import { flip } from 'svelte/animate';

	interface ToastProps {}
	let {}: ToastProps = $props();
</script>

<div class="fixed z-3 top-0 right-0 w-70 p-3">
	{#each queue as ti (ti.time)}
		<div
			class="my-3 min-w-60 max-w-80 p-4 {ti.nTotal > 0
				? 'pb-3'
				: ''} rounded-md backdrop-blur-sm shadow-xl overflow-hidden {ti.isAlert
				? 'bg-faint-orangish'
				: 'bg-faint-skyish'}"
			in:fly={{ x: 500 }}
			out:fade={{ duration: 200 }}
			animate:flip
		>
			{@html ti.message + (ti.nTotal > 0 ? ` (${ti.nDone}/${ti.nTotal})` : '')}
			{#if ti.nTotal > 0}
				<span
					class="block h-1 bg-[rgba(107,170,232,0.7)] rounded-md transition-width"
					style="width: {(ti.nDone / ti.nTotal) * 100}%;"
				></span>
			{:else}
				<div
					class="absolute bottom-0 right-0 w-0 h-0 border-[transparent_transparent_#ffffff88_transparent] border-solid border-width-[0_0_3rem_3rem] bg-transparent"
				></div>
				<button
					class="absolute bottom-0 right-0 border-none bg-transparent color-bgm-grey hover:color-bgm-darkgrey cursor-pointer"
					onclick={() => (queue = queue.filter((t) => t.time !== ti.time))}
				>
					{@render checkmarkSVG()}
				</button>
			{/if}
		</div>
	{/each}
</div>

{#snippet checkmarkSVG()}
	<svg
		xmlns="http://www.w3.org/2000/svg"
		width="20"
		height="20"
		viewBox="0 0 24 24"
		fill="none"
		stroke="currentColor"
		stroke-width="3.5"
		stroke-linecap="round"
		stroke-linejoin="round"
	>
		<polyline points="20 6 9 17 4 12"></polyline>
	</svg>
{/snippet}
