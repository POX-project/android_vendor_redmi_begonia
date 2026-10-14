package com.mediatek.internal.telephony;

import android.content.Context;
import com.android.internal.telephony.RadioConfig;

/* JADX INFO: loaded from: classes.dex */
public class MtkRadioConfig extends RadioConfig {
    private static final String TAG = "MtkRadioConfig";

    public MtkRadioConfig(Context context) {
        super(context);
    }

    protected boolean isGetHidlServiceSync() {
        return false;
    }
}
