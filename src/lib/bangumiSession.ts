import { WRITE_GATEWAY_ENDPOINT } from './client';
import { dev } from '$app/environment';

const APP_ID = 'bgm325066c003d0b20ab';
const URL_OAUTH_CALLBACK = `${WRITE_GATEWAY_ENDPOINT}/oauth_callback${dev ? '_dev' : ''}`;
export const URL_OAUTH = encodeURI(
    `https://bgm.tv/oauth/authorize?client_id=${APP_ID}&redirect_uri=${URL_OAUTH_CALLBACK}&response_type=code`
);

export interface BGMSession {
    token: string;
    expiresAt: number;
}

export function sessionValid(session: BGMSession): boolean {
    return session.token !== '' && session.expiresAt > Date.now() / 1000;
}
