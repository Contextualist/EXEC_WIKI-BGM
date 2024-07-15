<script lang="ts">
	import 'uno.css';
	import { fly } from 'svelte/transition';

	interface PanelProps {
		buttonId: string;
		shown: boolean;
		children: () => any;
	}
	let { buttonId, shown = $bindable(), children }: PanelProps = $props();
	let node: HTMLElement | undefined = $state();

	function handleClick(event: MouseEvent) {
		if (
			node &&
			!node.contains(event.target as Node) &&
			!event.defaultPrevented &&
			(event.target as HTMLElement).id !== buttonId
		) {
			shown = false;
		}
	}
</script>

<svelte:document onclick={handleClick} />
<div class="flex items-center justify-center">
	{#if shown}
		<div
			id="menu"
			class="fixed z-2 top-0 right-0 w-100 h-svh bg-bgm-beige border border-gray-200 shadow-xl overflow-y-auto"
			transition:fly={{ x: 500, opacity: 1 }}
			bind:this={node}
		>
			{@render children()}
		</div>
	{/if}
</div>
