package com.mediatek.ims.plugin.impl;

import android.content.Context;
import com.mediatek.ims.plugin.ImsCallOemPlugin;

/* JADX INFO: loaded from: classes.dex */
public class ImsCallOemPluginBase implements ImsCallOemPlugin {
    private static final String TAG = "ImsCallOemPluginBase";
    private Context mContext;

    public ImsCallOemPluginBase(Context context) {
        this.mContext = context;
    }

    @Override // com.mediatek.ims.plugin.ImsCallOemPlugin
    public boolean alwaysSetPreviewSurface() {
        return true;
    }

    @Override // com.mediatek.ims.plugin.ImsCallOemPlugin
    public String getVTUsageAction() {
        return "com.mediatek.ims.ACTION_VT_DATA_USAGE";
    }

    @Override // com.mediatek.ims.plugin.ImsCallOemPlugin
    public String getVTUsagePermission() {
        return "android.permission.READ_NETWORK_USAGE_HISTORY";
    }

    @Override // com.mediatek.ims.plugin.ImsCallOemPlugin
    public boolean isUpdateViwifiFeatureValueAsViLTE() {
        return false;
    }

    @Override // com.mediatek.ims.plugin.ImsCallOemPlugin
    public boolean needHangupOtherCallWhenEccDialing() {
        return false;
    }

    @Override // com.mediatek.ims.plugin.ImsCallOemPlugin
    public boolean needNotifyBadBitRate() {
        return true;
    }

    @Override // com.mediatek.ims.plugin.ImsCallOemPlugin
    public boolean needReportCallTerminatedForFdn() {
        return false;
    }

    @Override // com.mediatek.ims.plugin.ImsCallOemPlugin
    public boolean useNormalDialForEmergencyCall() {
        return false;
    }
}
