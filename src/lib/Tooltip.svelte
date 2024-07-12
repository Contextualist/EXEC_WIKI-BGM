<script lang="ts" context="module">
	interface TooltipOptions {
		title: string;
		widthUnbound?: boolean;
	}

	export function tooltip(element: HTMLElement, options: TooltipOptions): { destroy: () => void } {
		let div: HTMLDivElement;
		options.widthUnbound = options.widthUnbound ?? true;
		const fontSize = window.getComputedStyle(element).fontSize;
		function mouseEnter(event: MouseEvent) {
			if (event.target !== element) return;
			div = document.createElement('div');
			div.textContent = options.title;
			document.body.appendChild(div);
			Object.assign(div.style, {
				'font-size': fontSize,
				border: '1px solid #ddd',
				'box-shadow': '1px 1px 1px #ddd',
				background: 'white',
				'border-radius': '4px',
				padding: '4px',
				position: 'absolute',
				'z-index': '100',
				left: `${event.pageX - 3}px`,
				top: `${event.pageY - 35}px`,
				...(options.widthUnbound ? { width: 'max-content' } : {})
			});
		}
		function mouseMove(event: MouseEvent) {
			if (event.target !== element) return;
			div.style.left = `${event.pageX - 3}px`;
			div.style.top = `${event.pageY - 35}px`;
		}
		function mouseLeave(event: MouseEvent) {
			if (event.target !== element) return;
			document.body.removeChild(div);
		}

		element.addEventListener('mouseenter', mouseEnter);
		element.addEventListener('mouseleave', mouseLeave);
		element.addEventListener('mousemove', mouseMove);

		return {
			destroy() {
				element.removeEventListener('mouseenter', mouseEnter);
				element.removeEventListener('mouseleave', mouseLeave);
				element.removeEventListener('mousemove', mouseMove);
			}
		};
	}
</script>

<script lang="ts">
	import 'uno.css';

	interface TooltipProps {
		title: string;
		class?: string;
	}
	let { title, class: class_ = '' }: TooltipProps = $props();
</script>

<span
	class="{class_} inline-block w-[18px] h-[18px] vertical-middle cursor-help"
	use:tooltip={{ title, widthUnbound: false }}
>
	<svg
		class="cursor-help"
		xmlns="http://www.w3.org/2000/svg"
		width="18"
		height="18"
		viewBox="0 0 24 24"
		fill="none"
		stroke="currentColor"
		stroke-width="1.5"
		stroke-linecap="round"
		stroke-linejoin="round"
	>
		<circle cx="12" cy="12" r="10"></circle>
		<path d="M9.09 9a3 3 0 0 1 5.83 1c0 2-3 3-3 3"></path>
		<line x1="12" y1="17" x2="12.01" y2="17"></line>
	</svg>
</span>
