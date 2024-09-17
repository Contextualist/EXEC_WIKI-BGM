<script lang="ts" context="module">
	export interface Settings extends Record<string, any> {
		bgmUID: string;
		newInfoBox: string;
		shouldCleanCircleParentheses: boolean;
		allowAllSpaceInCreatorName: boolean;
		shouldAutofillArrangment: boolean;
		defaultOpenBGMNewAfterPack: boolean;
	}
	export const defaultSettings: Settings = {
		bgmUID: '',
		newInfoBox: `
{{Infobox Album
|中文名= 
|别名={
}
|版本特性= 
|发售日期= 
|作曲= 
|编曲= 
|作词= 
|价格= 
|播放时长= 
|录音= 
|碟片数量= 
}}
	`.trim(),
		shouldCleanCircleParentheses: true,
		allowAllSpaceInCreatorName: false,
		shouldAutofillArrangment: true,
		defaultOpenBGMNewAfterPack: false
	};
</script>

<script lang="ts">
	import 'uno.css';
	import RelaDb, * as relaDb from './RelaDB.svelte';
	import Panel from './Panel.svelte';
	import Button from './Button.svelte';
	import LinkSvg from '$lib/LinkSvg.svelte';
	import { toast } from './Toast.svelte';
	import Tooltip from '$lib/Tooltip.svelte';

	interface SettingsProps {
		settings: Settings;
		showSettings: boolean;
		showRelaDB: boolean;
	}
	let {
		settings: __settings = $bindable(),
		showSettings = $bindable(),
		showRelaDB = $bindable()
	}: SettingsProps = $props();
	// 啊，最后还是得上元编程么……
	// The settings (__settings) object pass-in is a normal object, but the settings object within the component is a Proxy.
	// It will trigger a reassignment of the __settings object when any of its properties are (reactively) changed,
	// which ensures the outside getter is called.
	const settingsHandler = {
		get: (target: Settings, prop: string) => {
			return __settings[prop];
		},
		set: (target: Settings, prop: string, value: any) => {
			__settings = { ...$state.snapshot(__settings), [prop]: value };
			return true;
		}
	};
	let settings = new Proxy(__settings, settingsHandler);

	const panelElClass = 'w-[85%] mx-auto my-4';
	const labelClass = 'text-bgm-darkgrey my-1';
	const parserSettings = [
		{
			id: 'shouldCleanCircleParentheses',
			text: '去除人名后括号内的社团名'
		},
		{
			id: 'allowAllSpaceInCreatorName',
			text: '将所有空格视为人名的一部分',
			hint: '默认情况下只会把英文名中的空格视为名字的一部分'
		},
		{
			id: 'shouldAutofillArrangment',
			text: '将作曲者视作未指定的编曲'
		}
	];
	const uiSettings = [
		{
			id: 'defaultOpenBGMNewAfterPack',
			text: '默认将打包升级为二连击',
			hint: '也可按住 Shift 键来切换成非默认行为'
		}
	];

	async function importBackup() {
		let el = document.createElement('input');
		el.type = 'file';
		el.accept = 'text/plain';
		el.style.display = 'none';
		el.onchange = async () => {
			const files = el.files;
			if (!files) return;
			const text = await files[0].text();
			const [settings_line, ...lines] = text.trim().split('\n');
			await relaDb.importBulk(lines);
			__settings = { ...defaultSettings, ...JSON.parse(settings_line) }; // This will also trigger a reparsing
			toast('已导入设置与关联数据库');
		};
		el.click();
	}
	async function exportBackup() {
		const data = JSON.stringify(__settings) + '\n' + (await relaDb.exportBulk());
		let el = document.createElement('a');
		el.href = 'data:text/plain;charset=utf-8,' + encodeURIComponent(data);
		el.download = 'execwb-settings.txt';
		el.style.display = 'none';
		document.body.appendChild(el);
		el.click();
		document.body.removeChild(el);
	}

	function closeRelaDB() {
		showRelaDB = false;
	}
</script>

<div class="fixed bottom-0 right-[3rem]">
	<a href="/docs" target="_blank">
		<Button class="p-1.5 bg-bgm-lightergrey text-[1rem]" onclick={async () => {}}>
			指南<LinkSvg />
		</Button>
	</a>
	{@render SettingsToggle(async () => (showRelaDB = !showRelaDB), '关联数据库', 'execwb-reladb')}
	{@render SettingsToggle(async () => (showSettings = !showSettings), '设置', 'execwb-settings')}
</div>

{#snippet SettingsToggle(tfn: () => Promise<any>, text: string, id: string)}
	<Button class="p-2.5 bg-bgm-lightergrey text-[1rem]" onclick={tfn} {id}>
		{text}
	</Button>
{/snippet}

<Panel buttonId="execwb-settings" bind:shown={showSettings}>
	<div class={panelElClass}>
		<h2 class="text-bgm-pink">设置</h2>
	</div>
	<div class={panelElClass}>
		<label class={labelClass} for="bgmUID">BGM 用户名</label>
		<input
			id="bgmUID"
			spellcheck="false"
			class="input-bgm w-[95%] p-1.5 text-sm"
			bind:value={settings.bgmUID}
		/>
	</div>
	<div class={panelElClass}>
		<label class={labelClass} for="newInfoBox">Infobox 模板</label>
		<textarea
			id="newInfoBox"
			spellcheck="false"
			class="input-bgm w-[95%] h-[19.5rem] p-1.5 text-sm"
			bind:value={settings.newInfoBox}
		></textarea>
	</div>
	<div class={panelElClass}>
		<div class={labelClass}>解析器</div>
		{#each parserSettings as { id, text, hint }}
			{@render Checkbox(id, text, hint)}
		{/each}
	</div>
	<div class={panelElClass}>
		<div class={labelClass}>界面</div>
		{#each uiSettings as { id, text, hint }}
			{@render Checkbox(id, text, hint)}
		{/each}
	</div>
	<div class={panelElClass}>
		<div class="{labelClass} block">设置与关联库备份</div>
		<Button onclick={importBackup} id="settings-import-backup">导入文件</Button>
		<Button onclick={exportBackup} id="settings-export-backup">导出文件</Button>
	</div>
</Panel>

{#snippet Checkbox(id: string, text: string, hint: string | undefined)}
	<div>
		<input {id} type="checkbox" class="my-2 vertical-mid" bind:checked={settings[id]} />
		<label class="text-bgm-darkgrey text-xs my-2 vertical-mid" for={id}>
			{text}
			{#if hint}
				<Tooltip title={hint} class="text-xs" />
			{/if}
		</label>
	</div>
{/snippet}

<Panel buttonId="execwb-reladb" bind:shown={showRelaDB}>
	<div class={panelElClass}>
		<h2 class="text-bgm-pink">关联数据库</h2>
	</div>
	<RelaDb class={panelElClass} bind:bgmUID={settings.bgmUID} {closeRelaDB} />
</Panel>
