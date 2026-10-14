package com.mediatek.internal.telephony;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
public class DefaultTelephonyExt implements IDefaultTelephonyExt {
    private static final String TAG = "DefaultTelephonyExt";
    protected Context mContext;

    public DefaultTelephonyExt(Context context) {
        this.mContext = context;
    }

    @Override // com.mediatek.internal.telephony.IDefaultTelephonyExt
    public String getOperatorNumericFromImpi(String str, int i) {
        return str;
    }

    @Override // com.mediatek.internal.telephony.IDefaultTelephonyExt
    public void init(Context context) {
        this.mContext = context;
    }

    @Override // com.mediatek.internal.telephony.IDefaultTelephonyExt
    public boolean isRatMenuControlledBySIM() {
        return false;
    }

    @Override // com.mediatek.internal.telephony.IDefaultTelephonyExt
    public boolean isSetLanguageBySIM() {
        return false;
    }
}
