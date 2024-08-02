<script lang="ts" context="module">
	export function edit(text: string, roleSummary: [string, string[]][]): string {
		let lines = text.split('\n');
		roleSummary.forEach(([roleID, creators]) => {
			const i = lines.findIndex((line) => line.startsWith(`|${roleID}=`));
			if (creators.length === 0) {
				if (i === -1) return;
				// TODO: Remove the line if creators is empty when packing
				//lines.splice(i, 1);
				//return;
			}
			const roleLine = `|${roleID}= ${creators.join('、')}`;
			if (i === -1) {
				lines.splice(lines.length - 1, 0, roleLine);
			} else {
				lines[i] = roleLine;
			}
		});
		return lines.join('\n');
	}
</script>

<script lang="ts">
	import 'uno.css';

	interface TrackInfoProps {
		value: string;
		defaultValue: string;
		class?: string;
	}
	let { value = $bindable(), defaultValue, class: class_ = '', ...rest }: TrackInfoProps = $props();
</script>

<div {...rest} class="relative {class_}">
	<!--
	<button
		class={'absolute z-1 top-2 right-2 text-bgm-grey hover:text-bgm-darkgrey cursor-pointer ' +
			'border-none bg-transparent h-[24px] w-[24px] p-0'}
		title="重置 Infobox"
		onclick={() => (value = defaultValue)}
	>
		<svg
			xmlns="http://www.w3.org/2000/svg"
			width="18"
			height="18"
			viewBox="0 0 24 24"
			fill="none"
			stroke="currentColor"
			stroke-width="2"
			stroke-linecap="round"
			stroke-linejoin="round"
		>
			<path d="M2.5 2v6h6M2.66 15.57a10 10 0 1 0 .57-8.38" />
		</svg>
	</button>
	-->
	<textarea
		class="input-bgm w-[94%] h-[calc(100%-1.2rem)] p-[0.5rem] text-sm break-all"
		spellcheck="false"
		bind:value
	>
	</textarea>
</div>
