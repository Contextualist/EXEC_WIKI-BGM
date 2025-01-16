<script lang="ts" generics="T">
	import 'uno.css';

	interface MultiSwitchProps {
		choices: { [label: string]: T };
		chosen: T;
		class?: string;
	}
	let { choices, chosen = $bindable(), class: class_ = '' }: MultiSwitchProps = $props();

	function cls_chosen(cond: boolean) {
		return cond ? 'bg-bgm-grey/30' : 'bg-transparent ';
	}
</script>

<div class={`bg-bgm-lightgrey rounded-md flex lt-sm:flex-col justify-evenly ${class_}`}>
	{#each Object.entries(choices) as [label, value]}
		<button
			class={`m-0 h-[2.2rem] w-[4rem] border-0 rounded-md p-2 transition-colors-250 cursor-pointer ${cls_chosen(value == chosen)}`}
			onclick={(e) => {
				e.stopPropagation();
				chosen = value;
			}}
		>
			{label}
		</button>
	{/each}
</div>
