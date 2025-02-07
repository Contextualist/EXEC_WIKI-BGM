// Make Vite dev server aware of the tree-sitter.wasm file
import type { Plugin } from 'vite';
import fs from 'node:fs';
import path from 'node:path';

export default function wasmLoader(): Plugin {
    return {
        name: 'wasm-loader',
        configureServer(server) {
            server.middlewares.use(async (req, res, next) => {
                if (req.url?.endsWith('tree-sitter.wasm')) {
                    const wasmPath = path.resolve('./node_modules/web-tree-sitter/tree-sitter.wasm');
                    if (fs.existsSync(wasmPath)) {
                        const wasmBuffer = fs.readFileSync(wasmPath);
                        res.setHeader('Content-Type', 'application/wasm');
                        res.end(wasmBuffer);
                        return;
                    }
                }
                next();
            });
        }
    };
}