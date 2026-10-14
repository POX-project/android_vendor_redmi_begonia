package com.mediatek.internal.telephony.uicc;

import android.telephony.Rlog;

/* JADX INFO: loaded from: classes.dex */
public abstract class IMtkRsuSmlCallback {
    private static final String TAG = "IMtkRsuSmlCallback";

    private void loge(String str) {
        Rlog.e(TAG, "[RSU-SIMLOCK] " + str);
    }

    public void remoteSimlockGenerateRequestResponse(int i, int i2, byte[] bArr) {
        loge("default remoteSimlockGenerateRequestResponse, user should override this API");
    }

    public void remoteSimlockGetSimlockStatusResponse(int i, int i2, int i3, long j) {
        loge("default remoteSimlockGetSimlockStatusResponse, user should override this API");
    }

    public void remoteSimlockGetVersionResponse(int i, int i2, int i3, int i4) {
        loge("default remoteSimlockGetVersionResponse, user should override this API");
    }

    public void remoteSimlockProcessSimlockDataResponse(int i, int i2, byte[] bArr) {
        loge("default remoteSimlockProcessSimlockDataResponse, user should override this API");
    }

    public void remoteSimlockUnlockTimerResponse(int i, int i2, int i3) {
        loge("default remoteSimlockUnlockTimerResponse, user should override this API");
    }
}
