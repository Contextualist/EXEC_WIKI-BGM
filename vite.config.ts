import { defineConfig } from 'vite';
import UnoCSS from 'unocss/vite'
import { sveltekit } from '@sveltejs/kit/vite';

export default defineConfig({
	build: {
		target: 'es2023',
	},
	plugins: [
		UnoCSS(),
		sveltekit(),
	]
});
