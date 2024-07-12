<script lang="ts">
	import 'uno.css';
	import { setContext } from 'svelte';
	import { fade } from 'svelte/transition';
	import Scene, { type VNSettings } from './Scene.svelte';
	import Choice from './Choice.svelte';

	interface SnippetProps {
		show: boolean;
		fn: {
			toSettings: () => void;
			trySetBGMUID: (url: string) => Promise<string>;
			startImport: () => void;
			exit: () => void;
		};
	}
	let { show: _show = $bindable(), fn }: SnippetProps = $props();

	let show = $state(false); // hack to get initial transition
	$effect(() => {
		show = _show;
		if (!show) fadeOutBGM();
	});
	let stage = $state('greet');
	let bgmDisplayName = $state('……');

	let settings: VNSettings = $state({ mute: true });
	setContext('vn-settings', settings);
	let bgAudio: HTMLAudioElement | null = null;
	$effect(() => {
		if (settings.mute) {
			if (bgAudio) bgAudio.pause();
			return;
		}
		if (!bgAudio) {
			bgAudio = new Audio('/vn/ontama_piano1_lemonica.mp3');
			bgAudio.loop = true;
			bgAudio.volume = 0.35;
		}
		bgAudio.play();
	});
	function fadeOutBGM() {
		if (!bgAudio) return;
		let fadeAudio = setInterval(() => {
			if (bgAudio!.volume > 0.01) {
				bgAudio!.volume -= 0.01;
			} else {
				clearInterval(fadeAudio);
				bgAudio!.pause();
			}
		}, 120);
	}
</script>

{#if show}
	<div
		transition:fade={{ duration: 400 }}
		class="fixed z-2 top-0 left-0 right-0 bottom-0 bg-[#DDDDDDAA] flex items-center justify-center"
	>
		{#if stage === 'greet'}
			<Scene>
				<Choice next={() => (stage = 'getUsername')}>（一周目）你好……你是？</Choice>
				<Choice action={fn.toSettings} next={fn.exit}>
					（N 周目）啊↘，你不记得我了吗？呜呜呜……重载，引导记忆注入
				</Choice>
				<Choice href="/docs#intro">我就一路过的，你这个是什么？</Choice>
				{#snippet text()}（澄澈而中立的微笑）你好，维基人……{/snippet}
			</Scene>
		{:else if stage === 'getUsername'}
			<Scene voice="/vn/うふん.wav">
				<Choice>
					<div class="flex items-center flex-justify-around">
						<input
							type="text"
							id="vn-bgm-uid"
							placeholder="https://bgm.tv/user/..."
							spellcheck="false"
							onkeypress={(event) => {
								if (event.key === 'Enter') {
									(document.getElementById('vn-bgm-uid-submit') as HTMLButtonElement).click();
								}
							}}
							class="flex-basis-3/4 input-bgm text-md p-2 border-rd-1"
						/>
						<button
							id="vn-bgm-uid-submit"
							onclick={() => {
								const inputEl = document.getElementById('vn-bgm-uid') as HTMLInputElement;
								const url = inputEl.value;
								fn.trySetBGMUID(url).then((name) => {
									if (name) {
										bgmDisplayName = name;
										stage = 'import1';
									} else {
										inputEl.value = '';
									}
								});
							}}
							class="bg-bgm-pink text-white px-2 py-1 border-rd-1 border-bgm-pink cursor-pointer"
						>
							OK
						</button>
					</div>
				</Choice>
				{#snippet text()}
					うふん～在了解我之前，我想，先了解一下你呢……嘻嘻，可以给我你<b class="text-[#9D77C7]"
						>班古米个人页面的链接</b
					>吗？
				{/snippet}
			</Scene>
		{:else if stage === 'import1'}
			<Scene voice="/vn/うんうん.wav" next={() => (stage = 'import2')}>
				{#snippet text()}
					いいこ、いいこ。接下来呢，我会把你最近的音乐维基人物创建和关联记录导入到我的关联数据库里，这样我就可以帮你自动关联音乐制作人员了。
				{/snippet}
			</Scene>
		{:else if stage === 'import2'}
			<Scene voice="/vn/う、うん.wav" next={() => (stage = 'import3')}>
				{#snippet text()}
					唔，我<s>味太冲了</s>话太多了？
					别这样嘛，这是新手引导的最后一步了，后面就是你自己按照图文教程自由探索了。
				{/snippet}
			</Scene>
		{:else if stage === 'import3'}
			<Scene>
				<Choice action={fn.startImport} next={() => (stage = 'farewell')}>
					从 {bgmDisplayName} 最近的音乐维基人物创建和关联记录导入
				</Choice>
				{#snippet text()}
					导入会在后台进行，不影响你探索。你准备好的话我们就开始吧。
				{/snippet}
			</Scene>
		{:else if stage === 'farewell'}
			<Scene voice="/vn/うん.wav">
				<Choice href="/docs#tutorial">带我去教程页面</Choice>
				<Choice next={fn.exit}>嗯，我自己四周转转</Choice>
				{#snippet text()}
					好的，一会儿见啦&#x3000;&#x3000;heart
				{/snippet}
			</Scene>
		{/if}
	</div>
{/if}
