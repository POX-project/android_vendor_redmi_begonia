package com.mediatek.wfo.impl;

import android.app.Application;
import android.os.UserHandle;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class WfoApp extends Application {
    private static final String TAG = "WfoApp";
    private static final String VOWIFI_SERVIVE = "vowifi";

    @Override // android.app.Application
    public void onCreate() {
        if (UserHandle.myUserId() == 0) {
            super.onCreate();
            Log.d(TAG, "onCreate()");
        }
    }

    @Override // android.app.Application
    public void onTerminate() {
        Log.d(TAG, "WfoApp onTerminate");
    }
}
