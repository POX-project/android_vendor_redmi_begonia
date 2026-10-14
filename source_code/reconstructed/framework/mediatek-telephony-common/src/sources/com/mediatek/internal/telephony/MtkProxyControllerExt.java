package com.mediatek.internal.telephony;

import android.content.Context;
import android.telephony.Rlog;

/* JADX INFO: loaded from: classes.dex */
public class MtkProxyControllerExt implements IMtkProxyControllerExt {
    static final String TAG = "MtkProxyControllerExt";
    protected Context mContext;

    public MtkProxyControllerExt() {
    }

    public MtkProxyControllerExt(Context context) {
        this.mContext = context;
    }

    @Override // com.mediatek.internal.telephony.IMtkProxyControllerExt
    public boolean isNeedSimSwitch(int i, int i2) {
        log("OMisNeedSimSwitch, majorPhoneId = " + i);
        return !RadioCapabilitySwitchUtil.isSkipCapabilitySwitch(i, i2, this.mContext);
    }

    public void log(String str) {
        Rlog.d(TAG, str);
    }
}
