package com.mediatek.ims.plugin.impl;

import android.content.Context;
import android.os.SystemProperties;
import android.telephony.TelephonyManager;
import android.util.Log;
import com.mediatek.ims.plugin.ImsCallPlugin;

/* JADX INFO: loaded from: classes.dex */
public class ImsCallPluginBase implements ImsCallPlugin {
    private static final String MULTI_IMS_SUPPORT = "persist.vendor.mims_support";
    private static final String PROPERTY_CAPABILITY_SWITCH = "persist.vendor.radio.simswitch";
    private static final String TAG = "ImsConfigPluginBase";
    private Context mContext;

    public ImsCallPluginBase(Context context) {
        this.mContext = context;
    }

    @Override // com.mediatek.ims.plugin.ImsCallPlugin
    public int getMainCapabilityPhoneId() {
        int i = SystemProperties.getInt("persist.vendor.radio.simswitch", 1) - 1;
        Log.d(TAG, "getMainCapabilityPhoneId " + i);
        return i;
    }

    @Override // com.mediatek.ims.plugin.ImsCallPlugin
    public int getRealRequest(int i) {
        return i;
    }

    @Override // com.mediatek.ims.plugin.ImsCallPlugin
    public int getSimApplicationState(int i) {
        return TelephonyManager.getDefault().getSimApplicationState();
    }

    @Override // com.mediatek.ims.plugin.ImsCallPlugin
    public int getSimCardState(int i) {
        return TelephonyManager.getDefault().getSimCardState();
    }

    @Override // com.mediatek.ims.plugin.ImsCallPlugin
    public int getUpgradeCancelFlag() {
        return 65536;
    }

    @Override // com.mediatek.ims.plugin.ImsCallPlugin
    public int getUpgradeCancelTimeoutFlag() {
        return 0;
    }

    @Override // com.mediatek.ims.plugin.ImsCallPlugin
    public boolean isCapabilitySwitching() {
        return false;
    }

    @Override // com.mediatek.ims.plugin.ImsCallPlugin
    public boolean isImsFwkRequest(int i) {
        return false;
    }

    @Override // com.mediatek.ims.plugin.ImsCallPlugin
    public boolean isSupportMims() {
        return SystemProperties.getInt(MULTI_IMS_SUPPORT, 1) > 1;
    }

    @Override // com.mediatek.ims.plugin.ImsCallPlugin
    public int setImsFwkRequest(int i) {
        return i;
    }
}
