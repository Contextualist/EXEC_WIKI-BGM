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
		{ progress = false, alert = false }: { progress?: boolean; alert?: boolean } = {}
	): { tp: ToastItemProps; rfn: () => void } {
		const time = Date.now();
		let tp = $state({ message, time, nDone: 0, nTotal: progress ? 1 : 0, isAlert: alert });
		queue.push(tp);
		const rfn = () => (queue = queue.filter((ti) => ti.time !== time));
		if (!progress) {
			setTimeout(rfn, 3000);
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

<div class="absolute z-3 top-0 right-0 w-70 p-3">
	{#each queue as ti (ti.time)}
		<div
			class="my-3 min-w-60 max-w-80 p-3 {ti.nTotal > 0
				? 'pb-2'
				: ''} rounded-md backdrop-blur-sm shadow-xl {ti.isAlert
				? 'bg-faint-orangish'
				: 'bg-faint-skyish'}"
			in:fly={{ x: 500 }}
			out:fade={{ duration: 200 }}
			animate:flip
		>
			{ti.message + (ti.nTotal > 0 ? ` (${ti.nDone}/${ti.nTotal})` : '')}
			{#if ti.nTotal > 0}
				<span
					class="block h-1 bg-[rgba(107,170,232,0.7)] rounded-md transition-width"
					style="width: {(ti.nDone / ti.nTotal) * 100}%;"
				></span>
			{/if}
		</div>
	{/each}
</div>
