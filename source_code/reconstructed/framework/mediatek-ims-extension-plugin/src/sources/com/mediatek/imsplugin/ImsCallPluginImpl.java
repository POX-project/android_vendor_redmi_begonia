package com.mediatek.imsplugin;

import android.content.Context;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.util.Log;
import com.mediatek.ims.internal.MtkImsManager;
import com.mediatek.ims.plugin.impl.ImsCallPluginBase;
import com.mediatek.internal.telephony.IMtkTelephonyEx;
import com.mediatek.internal.telephony.RadioCapabilitySwitchUtil;
import com.mediatek.telephony.MtkTelephonyManagerEx;

/* JADX INFO: loaded from: classes.dex */
public class ImsCallPluginImpl extends ImsCallPluginBase {
    private static final String MULTI_IMS_SUPPORT = "persist.vendor.mims_support";
    private static final String TAG = "ImsCallPluginImpl";
    private Context mContext;

    public ImsCallPluginImpl(Context context) {
        super(context);
        this.mContext = context;
    }

    public int getMainCapabilityPhoneId() {
        return RadioCapabilitySwitchUtil.getMainCapabilityPhoneId();
    }

    public int getRealRequest(int i) {
        return (-32769) & i;
    }

    public int getSimApplicationState(int i) {
        return MtkTelephonyManagerEx.getDefault().getSimApplicationState(i);
    }

    public int getSimCardState(int i) {
        return MtkTelephonyManagerEx.getDefault().getSimCardState(i);
    }

    public int getUpgradeCancelFlag() {
        return 65536;
    }

    public int getUpgradeCancelTimeoutFlag() {
        return 131072;
    }

    public boolean isCapabilitySwitching() {
        IMtkTelephonyEx iMtkTelephonyExAsInterface = IMtkTelephonyEx.Stub.asInterface(ServiceManager.getService("phoneEx"));
        if (iMtkTelephonyExAsInterface == null) {
            return false;
        }
        try {
            return iMtkTelephonyExAsInterface.isCapabilitySwitching();
        } catch (RemoteException e) {
            Log.d(TAG, "Exception:" + e);
            return false;
        }
    }

    public boolean isImsFwkRequest(int i) {
        return (i & 32768) == 32768;
    }

    public boolean isSupportMims() {
        return MtkImsManager.isSupportMims();
    }

    public int setImsFwkRequest(int i) {
        return 32768 | i;
    }
}
