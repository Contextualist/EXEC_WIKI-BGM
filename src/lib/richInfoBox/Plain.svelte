<script lang="ts">
	import 'uno.css';

	interface PlainProps {
		value: [string, string];
		update: () => void;
	}
	let { value = $bindable(), update }: PlainProps = $props();
</script>

<div class="flex">
	<div
		contenteditable
		bind:innerText={value[0]}
		oninput={() => update()}
		class="rich-infobox-key"
	></div>
	<div
		contenteditable
		bind:innerText={value[1]}
		oninput={() => update()}
		class="rich-infobox-value"
	></div>
</div>
