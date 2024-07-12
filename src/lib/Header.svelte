<script lang="ts">
	import 'uno.css';
	interface HeaderProps {
		children?: () => any;
	}
	let { children }: HeaderProps = $props();
</script>

<header class="m-0 p-4 bg-bgm-lightergrey flex flex-justify-between">
	<div class="">
		<a href="/" class="hover:decoration-none">
			<h1 class="text-bgm-pink my--1">EXEC_WIKI=BGM/.</h1>
		</a>
		<h1 class="font-hymmnos font-size-4xl font-light text-bgm-pink mx-1 my-0">EXEC_WIKI=BGM/.</h1>
		<p class="text-bgm-grey italic mx-1">维基音乐条目可视化编辑套件</p>
	</div>
	{#if children}
		{@render children()}
	{:else}
		<div></div>
	{/if}
</header>
