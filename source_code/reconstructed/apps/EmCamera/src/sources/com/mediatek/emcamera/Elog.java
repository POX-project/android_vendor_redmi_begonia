package com.mediatek.emcamera;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class Elog {
    private static final String PREFIX = "@M_EmC/";

    public static final void d(String str, String str2) {
        Log.d(PREFIX + str, str2);
    }

    public static final void e(String str, String str2) {
        Log.e(PREFIX + str, str2);
    }

    public static final void i(String str, String str2) {
        Log.i(PREFIX + str, str2);
    }

    public static final void v(String str, String str2) {
        Log.v(PREFIX + str, str2);
    }

    public static final void w(String str, String str2) {
        Log.w(PREFIX + str, str2);
    }
}
