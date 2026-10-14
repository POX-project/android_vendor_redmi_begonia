package com.mediatek.ims.ext;

import android.content.Context;
import android.os.Handler;
import android.os.Message;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class ImsServiceExt implements IImsServiceExt {
    private static final String TAG = "ImsServiceExt";

    public ImsServiceExt(Context context) {
    }

    @Override // com.mediatek.ims.ext.IImsServiceExt
    public boolean isWfcRegErrorCauseSupported() {
        Log.d(TAG, "isWfcRegErrorCauseSupported return false");
        return false;
    }

    @Override // com.mediatek.ims.ext.IImsServiceExt
    public void notifyImsServiceEvent(int i, Context context, Message message) {
    }

    @Override // com.mediatek.ims.ext.IImsServiceExt
    public void notifyRegistrationStateChange(int i, Handler handler, Object obj) {
    }
}
