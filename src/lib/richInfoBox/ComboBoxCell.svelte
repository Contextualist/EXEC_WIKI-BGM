<script lang="ts" generics="V">
	import 'uno.css';

	import Cell, { type CellActions } from './Cell.svelte';
	import { moveCursorTo } from '$lib/utils';
	import { type ComboConfig } from './comboConfig.ts';

	interface ComboBoxCellProps {
		value: V;
		config: ComboConfig<V>;
		action: CellActions;
		class: string;
	}
	let { value = $bindable(), config, action, class: class_ }: ComboBoxCellProps = $props();

	//            ┌----> rawValueView
	// (edit) > value <--rawValue < (edit)
	let rawValue: [string, string][] = $state(config.toRaw(value));
	let rawValueView: [string, string][] = $derived(config.toRaw(value));
	$effect(() => {
		value = config.fromRaw(rawValue);
		action.update();
	});

	let inputValue = $state('');
	let showDropdown = $state(false);
	let inputEl: HTMLElement | undefined = $state(undefined);

	function optionText(v: string | { text: string }) {
		return typeof v === 'string' ? v : v.text;
	}

	let optionsFiltered = $derived.by(() => {
		const selected = new Set(rawValue.map((v) => v[1]));
		let opts = config.options.filter((v) => !selected.has(optionText(v)));
		if (inputValue !== '') {
			const sp = inputValue.toLowerCase();
			opts = opts.filter((v) => optionText(v).toLowerCase().includes(sp));
		}
		return opts;
	});

	const actionOverride = {
		update: () => {},
		insert: (before: boolean) => {
			if (inputValue === '') return action.insert(before);
			if (optionsFiltered.length === 1) {
				inputValue = optionText(optionsFiltered[0]);
			}
			const i = rawValue.map((v) => v[1]).findIndex((v) => v === inputValue);
			if (i !== -1) {
				return;
			}
			const [, v, k] = /([^\s]+?)\s*[（(](.+)[）)]/.exec(inputValue) ?? ['', inputValue, ''];
			rawValue.push([k, v]);
			inputValue = '';
		},
		delete: (hard: boolean) => {
			if (hard) action.delete?.(hard);
			else rawValue.pop();
		}
	};
	let innerAction = $derived({
		...action,
		...actionOverride
	});

	function inputFocus() {
		if (!inputEl) return;
		inputEl.focus();
		moveCursorTo(inputEl, inputValue.length);
	}
</script>

<!-- svelte-ignore a11y_click_events_have_key_events -->
<div
	class="{class_} py-1 relative cursor-text"
	onfocusin={() => (showDropdown = true)}
	onfocusout={() => (showDropdown = false)}
	onclick={() => inputFocus()}
	role="textbox"
	tabindex="-1"
>
	{#each rawValueView as v, i}
		{@render Tag(v, i)}
	{/each}
	<Cell
		bind:this_={inputEl}
		bind:value={inputValue}
		action={innerAction}
		class="inline-block mx--1 px-1 py-2 focus:outline-none"
	/>
	{#if showDropdown}
		<div
			class="absolute z-10 top-full left-0 w-full max-h-[10.4rem] bg-bgm-lightgrey shadow-lg rounded-b-lg overflow-scroll"
		>
			{#if optionsFiltered.length === 0 && inputValue !== ''}
				<div class="bg-bgm-grey/10 border-none px-3 py-2 w-full text-sm text-align-start">
					回车添加 {@render Tag(['', inputValue], rawValue.length)}
				</div>
			{:else}
				{#each optionsFiltered as v, i}
					{@const { text, note } = typeof v === 'string' ? { text: v, note: '' } : v}
					<button
						class="bg-bgm-lightgrey hover:bg-bgm-grey/10 focus:bg-bgm-grey/10 focus:outline-none border-none px-3 py-2 w-full text-sm text-align-start cursor-pointer"
						tabindex="0"
						onmousedown={() => {
							rawValue.push(['', text]);
							inputValue = '';
							setTimeout(inputFocus, 0);
						}}
						onkeydown={(e) => {
							if (e.key === 'Enter') {
								rawValue.push(['', text]);
								inputValue = '';
								setTimeout(inputFocus, 0);
							} else if (e.key === 'ArrowDown') {
								e.preventDefault();
								((e.target as HTMLElement).nextElementSibling as HTMLElement)?.focus();
							} else if (e.key === 'ArrowUp') {
								e.preventDefault();
								if (i === 0) {
									inputFocus();
								} else {
									((e.target as HTMLElement).previousElementSibling as HTMLElement)?.focus();
								}
							} else {
								inputFocus();
							}
						}}
					>
						{text}
						{#if note}
							<span class="color-bgm-grey font-size-[0.7em]">{note}</span>
						{/if}
					</button>
				{/each}
			{/if}
		</div>
	{/if}
</div>

{#snippet Tag(text: [string, string], i: number)}
	{@const rep = text[0] === '' ? text[1] : `${text[1]} (${text[0]})`}
	<span class="inline-block px-1.5 py-1 bg-bgm-lightgrey rounded-lg mr-1 my-1.0 align-center">
		{rep}
		<button
			title="删除标签"
			aria-label="删除标签「{rep}」"
			class="color-bgm-grey border-none bg-transparent p-0 cursor-pointer"
			tabindex="-1"
			onclick={() => {
				rawValue.splice(i, 1);
			}}
		>
			<svg
				style="vertical-align: -20%"
				xmlns="http://www.w3.org/2000/svg"
				width="16"
				height="16"
				viewBox="0 0 24 24"
				stroke="currentColor"
				stroke-width="3"
				stroke-linecap="round"
				stroke-linejoin="round"
			>
				<line x1="16" y1="8" x2="8" y2="16"></line>
				<line x1="8" y1="8" x2="16" y2="16"></line>
			</svg>
		</button>
	</span>
{/snippet}
