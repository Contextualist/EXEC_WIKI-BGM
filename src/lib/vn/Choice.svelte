<script lang="ts">
	import LinkSvg from '$lib/LinkSvg.svelte';

	interface ChoiceProps {
		action?: () => void;
		href?: string;
		next?: () => void;
		children: () => any;
	}
	let { action, href, next, children }: ChoiceProps = $props();
</script>

<button
	class={'w-[70%] my-2 p-2 bg-bgm-lightgrey border-solid border-2 border-bgm-grey rounded-xl text-[1rem] text-center ' +
		(action || href || next ? 'hover:bg-white hover:opacity-80 cursor-pointer' : '')}
	onclick={() => {
		action?.();
		if (href) window.open(href, '_blank');
		next?.();
	}}
>
	{@render children()}{#if href}<LinkSvg />{/if}
</button>
