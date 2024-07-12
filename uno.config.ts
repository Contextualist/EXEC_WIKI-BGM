import { defineConfig } from 'unocss'
import presetUno from '@unocss/preset-uno'
import extractorSvelte from '@unocss/extractor-svelte'

export default defineConfig({
    presets: [
        presetUno(),
    ],
    extractors: [extractorSvelte()],
    theme: {
        fontFamily: {
            hymmnos: 'Hymmnos',
        },
        colors: {
            bgm: {
                pink: '#F09199',  // primary accent
                beige: '#F9F9F5',  // primary background
                lightergrey: '#FBFBFB',  // decorative strips
                lightgrey: '#F8F8F8',  // general background
                grey: '#999',  // secondary tip
                darkgrey: '#666',  // primary tip
                teal: '#0084B4',  // links
            },
            faint: {
                orangish: "rgba(247,234,222,0.93)",
                skyish: "rgba(222,243,247,0.93)",
            },
        },
    },
    shortcuts: {
        'input-bgm': 'border-solid border-1 border-light-9 border-rd-md focus:outline-none focus:drop-shadow-sm focus:drop-shadow-color-bgm-pink',
    },
    preflights: [
        {
            getCSS() {
                return `
                    @font-face {
                        font-family: 'Hymmnos';
                        font-style: normal;
                        src: url('/hymmnos.ttf') format('truetype');
                    }
                    
                    a {
                        color: #0084B4;
                        cursor: pointer;
                        text-decoration: none;
                    }
                    a:hover {
                        color: #02A3FB;
                        text-decoration: underline;
                    }
                    
                    @keyframes bounce-vertical {
                        0%, 100% {
                            transform: translateY(-2px);
                        }
                        50% {
                            transform: translateY(3px);
                        }
                    }
                `
            },
        },
    ],
})