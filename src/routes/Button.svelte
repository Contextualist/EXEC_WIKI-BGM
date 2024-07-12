<script lang="ts">
	import 'uno.css';
	import type { HTMLButtonAttributes } from 'svelte/elements';
	interface ButtonProps extends HTMLButtonAttributes {
		class?: string;
		onclick: () => Promise<any>;
		children: () => any;
	}
	let { class: class_ = '', onclick, children, ...rest }: ButtonProps = $props();
	let promise: Promise<any>;
</script>

<button
	onclick={async () => {
		promise = onclick().catch((err) => {
			console.error(err);
			return err;
		});
	}}
	{...rest}
	class="{class_} bg-bgm-lightgrey text-[#434c5e] hyphens-manual px-2 py-1 drop-shadow-md hover:drop-shadow-sm transition-drop-shadow duration-250 border-0 rounded-md cursor-pointer"
>
	{@render children()}
</button>
