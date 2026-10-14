package com.mediatek.gba;

import android.content.Context;
import android.util.Base64;
import android.util.Log;
import java.net.Authenticator;
import java.net.PasswordAuthentication;

/* JADX INFO: loaded from: classes.dex */
public class GbaHttpUrlCredential extends GbaBaseCredential {
    private static final String TAG = "GbaCredentials";
    private Authenticator mAuthenticator;

    private class GbaAuthenticator extends Authenticator {
        private PasswordAuthentication mPasswordAuthentication;

        private GbaAuthenticator() {
        }

        @Override // java.net.Authenticator
        protected PasswordAuthentication getPasswordAuthentication() {
            Log.i(GbaHttpUrlCredential.TAG, "getPasswordAuthentication");
            Log.i(GbaHttpUrlCredential.TAG, "Run GBA procedure");
            NafSessionKey nafSessionKey = GbaHttpUrlCredential.this.getNafSessionKey();
            if (nafSessionKey == null) {
                return null;
            }
            if (nafSessionKey != null && nafSessionKey.getKey() == null) {
                return null;
            }
            PasswordAuthentication passwordAuthentication = new PasswordAuthentication(nafSessionKey.getBtid(), Base64.encodeToString(nafSessionKey.getKey(), 2).toCharArray());
            this.mPasswordAuthentication = passwordAuthentication;
            return passwordAuthentication;
        }
    }

    public GbaHttpUrlCredential(Context context, String str) {
        this(context, str, -1);
    }

    public GbaHttpUrlCredential(Context context, String str, int i) {
        super(context, str, i);
        this.mAuthenticator = new GbaAuthenticator();
        System.setProperty("http.digest.support", "true");
    }

    public Authenticator getAuthenticator() {
        return this.mAuthenticator;
    }
}
