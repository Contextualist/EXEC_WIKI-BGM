
export function debounce(fn: Function, delay: number) {
    let timer: number;
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

export function localStorage$state<T>(key: string, initialValue: T, watch: boolean = false): { val: T } {
    return new LocalStorageState<T>(key, initialValue, watch);
}

class LocalStorageState<T> {
    val = $state<T>() as T;

    constructor(key: string, initialValue: T, watch: boolean = false) {
        const store = debounce((newValue: T) => {
            window.localStorage.setItem(key, JSON.stringify(newValue));
        }, 600);
        $effect.root(() => {
            $effect(() => {
                store(this.val);
            });
        });

        key = `execwb-${key}`
        let _value = initialValue;
        const item = window.localStorage.getItem(key);
        if (item) {
            _value = JSON.parse(item);
            if (typeof _value === 'object' && !Array.isArray(_value) && _value !== null) {
                _value = { ...initialValue, ..._value };
            }
        }
        this.val = _value;

        if (watch) {
            window.addEventListener('storage', (event) => {
                if (event.key === key && event.newValue) {
                    this.val = JSON.parse(event.newValue);
                }
            });
        }
    }
}
