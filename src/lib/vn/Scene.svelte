<script lang="ts" module>
	export interface VNSettings {
		mute: boolean;
	}
</script>

<script lang="ts">
	import { type Snippet, onMount, getContext } from 'svelte';
	import { fade, slide } from 'svelte/transition';
	import { linear } from 'svelte/easing';

	interface SceneProps {
		speaker?: string;
		text?: Snippet;
		voice?: string;
		next?: () => void;
		children?: () => any;
	}
	let { speaker = '？？？', text, voice, next = () => {}, children }: SceneProps = $props();

	let show = $state(false); // hack to get initial transition
	let showChildren = $state(false); // we'll use this until Svelte 5 fixes their transition delay bug
	onMount(() => {
		show = true;
		setTimeout(() => {
			showChildren = true;
		}, 1500);
		if (voice && !settings.mute) new Audio(voice).play();
	});
	let introDone = $state(false);
	let settings = getContext<VNSettings>('vn-settings');
</script>

{#if show}
	<!-- svelte-ignore a11y_autofocus -->
	<div
		id="the-scene-bg"
		onclick={next}
		onkeypress={(event) => {
			if (event.key === 'Enter' || event.key === ' ') next();
		}}
		role="button"
		tabindex="0"
		autofocus={true}
		class="w-180 m-5 h-115 bg-white border-rd-3 shadow-xl focus:outline-none"
	>
		<div id="the-scene-fg" class="w-full h-full border-rd-3 flex flex-col">
			<div class="flex-basis-3/4">
				{#if showChildren}
					<div
						in:fade={{ duration: 400 }}
						class="h-full flex flex-col flex-justify-center flex-items-center"
					>
						{#if children}
							{@render children()}
						{/if}
					</div>
				{/if}
			</div>
			<div
				class={'flex-basis-1/4 relative border-rd-b-3 border-t-solid border-t-2 border-bgm-pink ' +
					'bg-[linear-gradient(-3deg,_#FFFFFF33_0%,_#F09199ee_100%)]'}
			>
				<span
					class="relative top-[-1rem] left-[1rem] text-white bg-bgm-pink px-4 py-0.5 border-rd-1"
				>
					{speaker}
				</span>
				<div class="px-5">
					<div
						transition:slide={{ duration: 1800, axis: 'x', easing: linear }}
						onintroend={() => (introDone = true)}
						class={'w-[95%] ' + (introDone ? '' : 'h-[1.5rem] overflow-clip')}
					>
						{#if text}
							{@render text()}
						{/if}
						<span
							class="inline-block text-bgm-pink animate-name-bounce-vertical animate-duration-[1.5s] animate-iteration-infinite"
						>
							▼&#xfe0e;
						</span>
					</div>
				</div>
				<span
					title="3分钟的剧情，求不要c"
					class="absolute top-0.5 right-2 text-[#444] text-xs p-1 cursor-default"
				>
					&#62;&#x3000;&#62;‖&#x3000;<span class="italic">save&#x3000;load</span>
				</span>
				<button
					class="absolute top-[1.5rem] right-2 p-1 bg-transparent border-none text-[#444] hover:text-bgm-teal cursor-pointer"
					onclick={(e) => {
						settings.mute = !settings.mute;
						e.stopPropagation();
					}}
				>
					{#if settings.mute}
						{@render mute()}
					{:else}
						{@render unmute()}
					{/if}
				</button>
			</div>
		</div>
	</div>
{/if}

{#snippet mute()}
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
		<path d="M11 5L6 9H2v6h4l5 4zM22 9l-6 6M16 9l6 6" />
	</svg>
{/snippet}
{#snippet unmute()}
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
		<polygon points="11 5 6 9 2 9 2 15 6 15 11 19 11 5"></polygon>
		<path d="M19.07 4.93a10 10 0 0 1 0 14.14M15.54 8.46a5 5 0 0 1 0 7.07"></path>
	</svg>
{/snippet}

<style>
	#the-scene-fg {
		background: url(/vn/Momose_hiyori.webp);
		background-repeat: no-repeat;
		background-size: 155px auto;
		background-position: center 5rem;
		backdrop-filter: blur(1.5px);
		-webkit-backdrop-filter: blur(1.5px);
	}
	#the-scene-bg {
		background: linear-gradient(0deg, #ffffffff 0%, #ffffff00 40%, #ffffff00 100%), url(/vn/bg.webp);
		background-repeat: no-repeat, no-repeat;
		background-size: cover, cover;
		background-position: center, center;
	}
</style>
