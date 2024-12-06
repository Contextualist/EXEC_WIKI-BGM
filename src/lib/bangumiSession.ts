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

/**
 * Refresh session when it expires in 5 days
 */
export async function refreshSession(session: BGMSession): Promise<BGMSession> {
    if (!session.expiresAt || session.expiresAt > Date.now() + 1000 * 60 * 60 * 24 * 5) { return session; }
    const rsp = await fetch(`${WRITE_GATEWAY_ENDPOINT}/oauth_refresh`, {
        method: 'GET',
        headers: { 'Authorization': `Bearer ${session.token}` },
    });
    if (rsp.status !== 200) { return session; }
    session.expiresAt = (await rsp.json()).expiresAt;
    return session;
}
