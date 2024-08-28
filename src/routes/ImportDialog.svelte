<script lang="ts">
	import 'uno.css';
	import Dialog from './Dialog.svelte';
	import type { ImportSource, AutoEditor } from '$lib/importSource';
	import { Bangumi } from '$lib/importSource/bangumi';
	import Button from './Button.svelte';
	import { tooltip } from '$lib/Tooltip.svelte';

	interface ImportDialogProps {
		show: boolean;
		editor: AutoEditor;
	}
	let { show = $bindable(), editor }: ImportDialogProps = $props();

	let importURL = $state('');
	let currentSourceOptions: Record<string, any> = $state({});
	let currentResolvedTitle: Promise<string> | null = $state(null);

	const sourceList: ImportSource[] = [new Bangumi()];
	let currentSource: ImportSource | null | undefined = $derived.by(() => {
		if (!importURL) return null;
		for (const source of sourceList) {
			if (source.match.test(importURL)) return source;
		}
		return undefined;
	});
	$effect(() => {
		if (currentSource === null || currentSource === undefined) return;
		currentSourceOptions = Object.fromEntries(
			currentSource.options.map((opt) => [opt.id, opt.default])
		);
		currentResolvedTitle = currentSource.load(importURL);
	});
</script>

<Dialog bind:show class="w-96 min-h-100">
	<div class="flex flex-row align-start items-center gap-2">
		<h2 class="text-bgm-pink">导入</h2>
		{#if currentSource?.warning}
			<div use:tooltip={{ title: currentSource.warning, widthUnbound: false }} class="cursor-help">
				⚠️
			</div>
		{/if}
	</div>
	<p class="text-xs color-bgm-darkgrey mt-0">
		目前支持的源：{sourceList.map((source) => source.name).join('、')}
	</p>
	<div class="flex flex-row gap-2">
		<input
			type="text"
			bind:value={importURL}
			onkeypress={(e) =>
				e.key === 'Enter' && document.getElementById('btn-external-import')?.click()}
			class="flex-grow-1 input-bgm text-sm p-2"
			placeholder="https://..."
		/>
		<Button
			id="btn-external-import"
			class="flex-basis-[4rem] text-sm"
			disabled={currentSource === null || currentSource === undefined}
			spinner={true}
			onclick={async () => await currentSource!.apply(currentSourceOptions, editor)}
		>
			来吧
		</Button>
	</div>
	{#if currentSource === undefined}
		<p class="text-sm">未识别到导入源</p>
	{:else if currentSource}
		{#if currentResolvedTitle !== null}
			{#await currentResolvedTitle}
				<p class="text-sm">从 {currentSource.name} 导入...</p>
			{:then title}
				<p class="text-sm">从 {currentSource.name} 导入 {title}</p>
			{/await}
		{:else}
			<p class="text-sm"></p>
		{/if}
		<details class="text-sm ml-0.5">
			<summary class="text-bgm-teal cursor-pointer pb-1">“你在教我做事啊？”</summary>
			{#each currentSource.options as opt}
				{@render Checkbox(opt.id, opt.text)}
			{/each}
		</details>
	{/if}
	<div class="absolute inset-0 flex items-end justify-end pointer-events-none">
		{@render blushSVG()}
	</div>
</Dialog>

{#snippet Checkbox(id: string, text: string)}
	<div>
		<input {id} type="checkbox" class="my-2 vertical-mid" bind:checked={currentSourceOptions[id]} />
		<label class="text-bgm-darkgrey text-sm my-2 vertical-mid" for={id}>
			{text}
		</label>
	</div>
{/snippet}

{#snippet blushSVG()}
	<svg
		width="145"
		height="145"
		viewBox="0 0 145 145"
		fill="none"
		xmlns="http://www.w3.org/2000/svg"
	>
		<mask
			id="mask0_2_2"
			style="mask-type:alpha"
			maskUnits="userSpaceOnUse"
			x="0"
			y="0"
			width="145"
			height="145"
		>
			<path
				d="M137 0L8 0C3.58172 0 0 3.58172 0 8L0 137C0 141.418 3.58172 145 8 145H137C141.418 145 145 141.418 145 137V8C145 3.58172 141.418 0 137 0Z"
				fill="#C4C4C4"
			/>
		</mask>
		<g mask="url(#mask0_2_2)" fill="#fce9eb">
			<path
				fill-rule="evenodd"
				clip-rule="evenodd"
				d="M87 58.5C87 58.5 71.303 52.5 51.5 61.5C51.5 61.5 58.5 61.5 62.9545 66.3463C60 60.5 29.0606 61.3995 15 52.5C17.5 81 50.879 69.3166 53.38 70.2338L45 72C39 79 37.4697 83.2791 30 152.25L55.9242 152.096C55.9242 152.096 55.9242 128.666 68.2272 128.666V123.772C68.2272 123.772 54.0909 123.772 49.2575 111.312L49.7234 139.791C47.9394 128.666 48.5 108.052 48.5 108.052C48.5 107.77 48.5029 107.417 48.5 107C49.0606 96.854 51.5 90.5 55.9296 83.2553C52 90.3108 49.5 103.279 49.5 103.279C50.5985 105.949 54.3863 106.616 54.3863 106.616C54.3863 106.616 55.2651 103.057 57.6818 100.164C57.6818 100.164 57.0227 109.954 71.7424 109.954C71.7424 109.954 70.4242 106.839 71.303 103.724C71.303 103.724 73.9394 108.619 81.4091 108.174C81.4091 108.174 82.9469 105.504 82.7272 103.279C82.7272 103.279 85.5833 106.616 90.6363 106.839C90.6363 106.839 91.0757 104.391 91.0757 102.389C93.974 106.802 92.8463 108.5 95.6732 105C98.5 101.5 92.9403 86.822 91.0757 83.2553C95.8093 91.6486 98.061 98.5115 98.061 108.198C98.061 108.198 98.061 128.666 96.303 139.791L96.7424 111.312C91.909 123.772 78.7727 123.772 78.7727 123.772V128.666C91.0757 128.666 91.0757 152.25 91.0757 152.25H116.5C109.03 83.2791 106.5 73 100 66.3463L91.0757 71C93.5 69 110.5 63 112 33C97.9393 41.8995 84.6211 61.6537 82.7272 67.5C84.6211 61.6537 87 58.5 87 58.5ZM91.0757 71C89.0301 71.1949 89.2526 71.1737 91.0757 71ZM53.7273 70.351L53.38 70.2338C53.6048 70.3162 53.7273 70.351 53.7273 70.351Z"
			/>
			<rect
				width="16.8627"
				height="3.34713"
				transform="matrix(0.465397 -0.885102 0.929465 0.368911 48 114.925)"
			/>
			<rect
				width="16.8627"
				height="3.34713"
				transform="matrix(0.465397 -0.885102 0.929465 0.368911 54.6834 115.765)"
			/>
			<rect
				width="16.8627"
				height="3.34713"
				transform="matrix(0.465397 -0.885102 0.929465 0.368911 62.0411 115.765)"
			/>
			<rect
				width="16.8627"
				height="3.34713"
				transform="matrix(0.465397 -0.885102 0.929465 0.368911 75 114.925)"
			/>
			<rect
				width="16.8627"
				height="3.34713"
				transform="matrix(0.465397 -0.885102 0.929465 0.368911 81.6834 115.765)"
			/>
			<rect
				width="16.8627"
				height="3.34713"
				transform="matrix(0.465397 -0.885102 0.929465 0.368911 89.0411 115.765)"
			/>
		</g>
	</svg>
{/snippet}
