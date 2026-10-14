package com.mediatek.internal.telephony.uicc;

import android.os.Message;
import android.telephony.Rlog;

/* JADX INFO: loaded from: classes.dex */
public abstract class IMtkRsuSml {
    protected static final int REMOTE_SIM_UNLOCK_ERROR = 1;
    protected static final int REMOTE_SIM_UNLOCK_SUCCESS = 0;
    private static final String TAG = "IMtkRsuSml";

    private void loge(String str) {
        Rlog.e(TAG, "[RSU-SIMLOCK] " + str);
    }

    public int deregisterCallback(Object obj) {
        loge("default deregisterCallback, user should override this API");
        return 1;
    }

    public int getAllowedSimLockData(int i, int i2) {
        loge("default getAllowedSimLockData, user should override this API");
        return 1;
    }

    public int getExcludedSimLockData(int i, int i2) {
        loge("default getExcludedSimLockData, user should override this API");
        return 1;
    }

    public int registerCallback(Object obj) {
        loge("default registerCallback, user should override this API");
        return 1;
    }

    public int remoteSimlockGenerateRequest(int i, int i2) {
        loge("default remoteSimlockGenerateRequest, user should override this API");
        return 1;
    }

    public int remoteSimlockGetSimlockStatus(int i) {
        loge("default remoteSimlockGetSimlockStatus, user should override this API");
        return 1;
    }

    public int remoteSimlockGetSimlockStatusEx(Object obj) {
        loge("default remoteSimlockGetSimlockStatusEx, user should override this API");
        return 1;
    }

    public int remoteSimlockGetVersion(int i) {
        loge("default remoteSimlockGetVersion, user should override this API");
        return 1;
    }

    public int remoteSimlockProcessSimlockData(int i, byte[] bArr) {
        loge("default remoteSimlockProcessSimlockData, user should override this API");
        return 1;
    }

    public int remoteSimlockUnlockTimer(int i, int i2) {
        loge("default remoteSimlockUnlockTimer, user should override this API");
        return 1;
    }

    public int setSimLockPolicyData(int i, byte[] bArr, int i2) {
        loge("default setSimLockPolicyData, user should override this API");
        return 1;
    }

    public void sleCreateUnlockRequest(byte[] bArr, Message message) {
        loge("default sleCreateUnlockRequest, user should override this API");
    }

    public void sleGetAdapterConfig(byte[] bArr, Message message) {
        loge("default sleGetAdapterConfig, user should override this API");
    }

    public void sleGetRegisterRequest(byte[] bArr, Message message) {
        loge("default sleGetRegisterRequest, user should override this API");
    }

    public void sleGetSimlockStatus(byte[] bArr, Message message) {
        loge("default sleGetSimlockStatus, user should override this API");
    }

    public void sleProcessMessage(byte[] bArr, byte[] bArr2, Message message) {
        loge("default sleProcessMessage, user should override this API");
    }
}
