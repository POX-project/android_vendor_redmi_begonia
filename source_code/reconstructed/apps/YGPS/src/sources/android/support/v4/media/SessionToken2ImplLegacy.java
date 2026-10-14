package android.support.v4.media;

import android.os.Bundle;
import android.support.v4.media.session.MediaSessionCompat$Token;

/* JADX INFO: loaded from: classes.dex */
final class SessionToken2ImplLegacy implements SessionToken2.SupportLibraryImpl {
    private final MediaSessionCompat$Token mLegacyToken;

    SessionToken2ImplLegacy(MediaSessionCompat$Token mediaSessionCompat$Token) {
        this.mLegacyToken = mediaSessionCompat$Token;
    }

    public static SessionToken2ImplLegacy fromBundle(Bundle bundle) {
        return new SessionToken2ImplLegacy(MediaSessionCompat$Token.fromBundle(bundle.getBundle("android.media.token.LEGACY")));
    }

    public boolean equals(Object obj) {
        if (obj instanceof SessionToken2ImplLegacy) {
            return this.mLegacyToken.equals(((SessionToken2ImplLegacy) obj).mLegacyToken);
        }
        return false;
    }

    public int hashCode() {
        return this.mLegacyToken.hashCode();
    }

    public String toString() {
        return "SessionToken2 {legacyToken=" + this.mLegacyToken + "}";
    }
}
