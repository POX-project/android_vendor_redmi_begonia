package com.mediatek.internal.telephony.devreg;

import android.content.Context;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class DefaultDeviceRegisterExt implements IDeviceRegisterExt {
    private static final String TAG = "DefaultDeviceRegisterExt";
    protected Context mContext;
    protected DeviceRegisterController mDeviceRegisterController;

    public DefaultDeviceRegisterExt(Context context, DeviceRegisterController deviceRegisterController) {
        this.mContext = context;
        this.mDeviceRegisterController = deviceRegisterController;
    }

    @Override // com.mediatek.internal.telephony.devreg.IDeviceRegisterExt
    public void handleAutoRegMessage(int i, String str, byte[] bArr) {
        Log.i(TAG, "handleAutoRegMessage sub " + i + ", format " + str);
    }

    @Override // com.mediatek.internal.telephony.devreg.IDeviceRegisterExt
    public void handleAutoRegMessage(byte[] bArr) {
        Log.i(TAG, "handleAutoRegMessage");
    }

    @Override // com.mediatek.internal.telephony.devreg.IDeviceRegisterExt
    public void setCdmaCardEsnOrMeid(String str) {
        Log.i(TAG, "setCdmaCardEsnOrMeid " + str);
    }
}
