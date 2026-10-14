package com.mediatek.wfo.op;

import android.content.Context;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class DefaultWosExt implements IWosExt {
    static final String TAG = "DefaultWosExt";

    public DefaultWosExt(Context context) {
        Log.d(TAG, "DefaultWosExt constructor");
    }

    @Override // com.mediatek.wfo.op.IWosExt
    public void clearPDNErrorMessages() {
        Log.d(TAG, "clearPDNErrorMessages is empty");
    }

    @Override // com.mediatek.wfo.op.IWosExt
    public void dispose() {
        Log.d(TAG, "dispose is empty");
    }

    @Override // com.mediatek.wfo.op.IWosExt
    public void factoryReset() {
        Log.d(TAG, "factoryReset is empty");
    }

    @Override // com.mediatek.wfo.op.IWosExt
    public void initialize(Context context) {
        Log.d(TAG, "initialize is empty");
    }

    @Override // com.mediatek.wfo.op.IWosExt
    public void showLocationTimeoutMessage() {
        Log.d(TAG, "showLocationTimeoutMessage is empty");
    }

    @Override // com.mediatek.wfo.op.IWosExt
    public void showPDNErrorMessages(int i) {
        Log.d(TAG, "showPDNErrorMessages is empty");
    }
}
