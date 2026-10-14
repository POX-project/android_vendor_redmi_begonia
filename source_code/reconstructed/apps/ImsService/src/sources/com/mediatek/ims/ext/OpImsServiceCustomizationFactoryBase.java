package com.mediatek.ims.ext;

import android.content.Context;
import android.telephony.Rlog;
import com.mediatek.ims.internal.ImsVTProvider;
import com.mediatek.ims.internal.ImsVTUsageManager;

/* JADX INFO: loaded from: classes.dex */
public class OpImsServiceCustomizationFactoryBase {
    public DigitsUtil makeDigitsUtil() {
        return new DigitsUtilBase();
    }

    public IImsServiceExt makeImsServiceExt(Context context) {
        return new ImsServiceExt(context);
    }

    public ImsVTUsageManager makeImsVTUsageManager() {
        return new ImsVTUsageManager();
    }

    public ImsVTProvider makeImsVtProvider() {
        return new ImsVTProvider();
    }

    public OpImsCallSessionProxy makeOpImsCallSessionProxy() {
        Rlog.d("OpFactory", "makeOpImsCallSessionProxy: default");
        return new OpImsCallSessionProxyBase();
    }
}
