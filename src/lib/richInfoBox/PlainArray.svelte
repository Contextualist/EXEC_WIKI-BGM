<script lang="ts">
	import 'uno.css';

	interface PlainArrayProps {
		value: [string, [string, string][]];
		update: () => void;
	}
	let { value = $bindable(), update }: PlainArrayProps = $props();
</script>

<div class="flex">
	<div
		contenteditable
		bind:innerText={value[0]}
		oninput={() => update()}
		class="rich-infobox-key"
	></div>
	<div class="rich-infobox-value">
		<div class="text-xs line-height-5 italic">
			({value[1].length ? `列表，${value[1].length} 项` : '空列表'})
		</div>
		{#each value[1] as _, i}
			<div
				contenteditable
				bind:innerHTML={value[1][i][1]}
				oninput={() => update()}
				class="p-1 border-t-solid border-bgm-grey/30 border-1 focus:outline-none"
			></div>
		{/each}
	</div>
</div>
