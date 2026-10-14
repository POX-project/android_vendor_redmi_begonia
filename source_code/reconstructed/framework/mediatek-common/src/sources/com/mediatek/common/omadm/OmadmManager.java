package com.mediatek.common.omadm;

import android.content.Context;
import android.os.ParcelFileDescriptor;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public final class OmadmManager {
    public static final String OMADM_DELIMITER = "<omadm>";
    private static final String TAG = "OmadmManager";
    final IOmadmManager mService = null;

    public OmadmManager(Context context) {
    }

    public ParcelFileDescriptor inputStream(String str) {
        try {
            return this.mService.inputStream(str);
        } catch (Exception e) {
            Log.e(TAG, "Error on inputStream");
            return null;
        }
    }
}
