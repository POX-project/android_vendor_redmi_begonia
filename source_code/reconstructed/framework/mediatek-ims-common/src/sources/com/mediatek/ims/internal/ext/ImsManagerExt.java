package com.mediatek.ims.internal.ext;

import android.content.Context;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class ImsManagerExt implements IImsManagerExt {
    private static final String TAG = "ImsManagerExt";

    @Override // com.mediatek.ims.internal.ext.IImsManagerExt
    public int getImsPhoneId(Context context, int i) {
        Log.d(TAG, "phoneId = " + i);
        return i;
    }

    @Override // com.mediatek.ims.internal.ext.IImsManagerExt
    public boolean isFeatureEnabledByPlatform(Context context, int i, int i2) {
        return true;
    }
}
