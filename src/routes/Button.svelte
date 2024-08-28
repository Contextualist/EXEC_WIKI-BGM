<script lang="ts">
	import 'uno.css';
	import type { HTMLButtonAttributes } from 'svelte/elements';
	interface ButtonProps extends HTMLButtonAttributes {
		class?: string;
		onclick: () => Promise<any>;
		spinner?: boolean;
		children: () => any;
	}
	let { class: class_ = '', onclick, spinner = false, children, ...rest }: ButtonProps = $props();
	let promise: Promise<any> = $state(Promise.resolve());
</script>

<button
	onclick={() => {
		const p = onclick().catch((err) => {
			console.error(err);
			return err;
		});
		if (spinner) promise = p;
	}}
	{...rest}
	class={class_ +
		' bg-bgm-lightgrey text-[#434c5e] hyphens-manual px-2 py-1 drop-shadow-md hover:drop-shadow-sm transition-drop-shadow duration-250 border-0 rounded-md cursor-pointer' +
		' disabled:drop-shadow-none disabled:text-bgm-grey disabled:cursor-not-allowed'}
>
	{#await promise}
		<svg
			xmlns="http://www.w3.org/2000/svg"
			width="24"
			height="24"
			class="align-middle"
			viewBox="0 0 24 24"
			fill="none"
			stroke="currentColor"
			stroke-width="2"
			stroke-linecap="round"
			stroke-linejoin="round"
		>
			<line x1="12" y1="2" x2="12" y2="6"></line>
			<line x1="12" y1="18" x2="12" y2="22"> </line>
			<line x1="4.93" y1="4.93" x2="7.76" y2="7.76"></line>
			<line x1="16.24" y1="16.24" x2="19.07" y2="19.07"></line>
			<line x1="2" y1="12" x2="6" y2="12"></line>
			<line x1="18" y1="12" x2="22" y2="12"></line>
			<line x1="4.93" y1="19.07" x2="7.76" y2="16.24"></line>
			<line x1="16.24" y1="7.76" x2="19.07" y2="4.93"></line>
		</svg>
	{:then _}
		{@render children()}
	{:catch _}
		<svg
			xmlns="http://www.w3.org/2000/svg"
			width="24"
			height="24"
			class="align-middle text-bgm-pink"
			viewBox="0 0 24 24"
			fill="none"
			stroke="currentColor"
			stroke-width="2"
			stroke-linecap="round"
			stroke-linejoin="round"
		>
			<circle cx="12" cy="12" r="10"></circle>
			<line x1="12" y1="8" x2="12" y2="12"></line><line x1="12" y1="16" x2="12.01" y2="16"></line>
		</svg>
	{/await}
</button>
