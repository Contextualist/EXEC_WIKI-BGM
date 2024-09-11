import { untrack } from "svelte";

export function debounce(fn: Function, delay: number) {
    let timer: NodeJS.Timeout;
    return function (...args: any[]) {
        clearTimeout(timer);
        timer = setTimeout(() => {
            fn(...args);
        }, delay);
    };
}

export function throttle(fn: Function, delay: number) {
    let last = 0;
    return function (...args: any[]) {
        const now = Date.now();
        if (now - last < delay) return;
        last = now;
        fn(...args);
    };
}

export function localStorage$state<T>(key: string, initialValue: T): { val: T, evolve: (fn: (v: T) => T) => void } {
    key = `execwb-${key}`
    let _value = initialValue;
    const item = window.localStorage.getItem(key);
    if (item) {
        _value = JSON.parse(item);
        if (typeof _value === 'object' && !Array.isArray(_value) && _value !== null) {
            _value = { ...initialValue, ..._value };
        }
    }
    let value = $state(_value)

    const store = debounce((newValue: T) => {
        window.localStorage.setItem(key, JSON.stringify(newValue));
    }, 600);

    return {
        get val() {
            return value;
        },
        set val(newValue: T) {
            value = newValue;
            store(value);
        },
        // evolve the value while avoiding reactivity
        evolve: (fn: (v: T) => T) => {
            value = fn(untrack(() => value));
            store(untrack(() => value));
        }
    };
}