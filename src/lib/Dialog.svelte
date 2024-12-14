<script lang="ts">
	import 'uno.css';
	import { fade, fly } from 'svelte/transition';

	interface DialogProps {
		show: boolean;
		transitionType?: 'fly' | 'fade';
		class?: string;
		children: () => any;
	}
	let {
		show = $bindable(),
		transitionType = 'fly',
		class: class_ = '',
		children
	}: DialogProps = $props();
	const [transitionFn, transitionOpts] =
		transitionType === 'fly'
			? [fly, { duration: 400, y: -100, opacity: 1 }]
			: [fade, { duration: 50, delay: 150 }];
</script>

{#if show}
	<!-- svelte-ignore a11y_click_events_have_key_events a11y_no_static_element_interactions -->
	<!-- svelte-ignore a11y_no_static_element_interactions -->
	<div
		onclick={() => (show = false)}
		transition:fade={{ duration: 300 }}
		class="fixed z-2 top-0 left-0 w-full h-full bg-[#DDDDDDAA]"
	>
		<div
			onclick={(e) => e.stopPropagation()}
			transition:transitionFn={transitionOpts}
			class="fixed top-1/2 left-1/2 transform -translate-x-1/2 -translate-y-1/2 bg-white border-rd-3 shadow-xl focus:outline-none p-7 {class_}"
		>
			{@render children()}
		</div>
	</div>
{/if}
