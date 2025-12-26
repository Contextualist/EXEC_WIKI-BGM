<script lang="ts">
	interface SubmitRegionProps {
		name: string[];
		selected: boolean[];
		enabled: boolean[];
		class?: string;
		children: () => any;
	}

	const {
		name,
		selected = $bindable(),
		enabled,
		class: class_,
		children
	}: SubmitRegionProps = $props();

	let regionEnabled = $derived(enabled.some((e, i) => e && selected[i]));
</script>

<div
	class="relative {class_} bg-white px-1 py-3 rounded-md transition-filter duration-300"
	style={regionEnabled ? '' : 'filter: invert(8%) grayscale(10%) blur(1px);'}
>
	{@render children()}
	<div class="absolute bottom-4 right-4 flex gap-2">
		{#each name as n, i (n)}
			{@const isSelected = selected[i]}
			{@const isEnabled = enabled[i]}
			<button
				class={'rounded-md px-2 py-1 text-sm border-none inline-flex items-center gap-1 backdrop-blur-sm backdrop-brightness-130' +
					(isSelected ? ' bg-bgmc-blue/20 ' : ' bg-bgm-grey/20 ') +
					(isEnabled ? ' cursor-pointer ' : ' cursor-not-allowed ')}
				disabled={!isEnabled}
				onclick={() => {
					if (isEnabled) {
						selected[i] = !isSelected;
					}
				}}
			>
				{n}
				{#if !isEnabled}
					{@render DisabledSvg()}
				{:else if isSelected}
					{@render SelectedSvg()}
				{:else}
					{@render UnselectedSvg()}
				{/if}
			</button>
		{/each}
	</div>
</div>

{#snippet SelectedSvg()}
	<svg width="1.5rem" height="1.5rem" viewBox="0 0 200 200" xmlns="http://www.w3.org/2000/svg">
		<!-- Circle -->
		<path
			d="M177.6,80.43a10,10,0,1,0-19.5,4.5,60.76,60.76,0,0,1-6,44.5 c-16.5,28.5-53.5,38.5-82,22-28.5-16-38.5-53-22-81.5 s53.5-38.5,82-22a9.86,9.86,0,1,0,10-17 c-38.5-22.5-87-9.5-109.5,29 a80.19,80.19,0,1,0,147,20.5Z"
			fill="currentColor"
		/>

		<!-- Check mark -->
		<path
			d="M68.1,91.43 a10.12,10.12,0,0,0-11,17l40,25 a10.08,10.08,0,0,0,5.5,1.5 10.44,10.44,0,0,0,8-4l52.5-67.5 c3.5-4.5,2.5-10.5-2-14 s-10.5-2.5-14,2l-47,60Z"
			fill="#70B941"
		/>
	</svg>
{/snippet}

{#snippet UnselectedSvg()}
	<svg width="1.5rem" height="1.5rem" viewBox="0 0 200 200" xmlns="http://www.w3.org/2000/svg">
		<path
			d="M100,15 a85,85,0,1,0,85,85 A84.93,84.93,0,0,0,100,15 Z m0,150 a65,65,0,1,1,65-65 A64.87,64.87,0,0,1,100,165 Z"
			fill="#666"
		/>
	</svg>
{/snippet}

{#snippet DisabledSvg()}
	<svg width="1.5rem" height="1.5rem" viewBox="0 0 200 200" xmlns="http://www.w3.org/2000/svg">
		<path
			d="M100,15a85,85,0,1,0,85,85A84.93,84.93,0,0,0,100,15Zm0,150a65,65,0,1,1,65-65A64.87,64.87,0,0,1,100,165Z"
			fill="currentColor"
		/>
		<path d="M68 132 L132 68" stroke="#999" stroke-width="20" stroke-linecap="round" fill="none" />
	</svg>
{/snippet}
