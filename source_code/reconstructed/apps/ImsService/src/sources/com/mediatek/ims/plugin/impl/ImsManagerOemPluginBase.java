package com.mediatek.ims.plugin.impl;

import android.content.Context;
import com.android.ims.ImsManager;
import com.mediatek.ims.plugin.ImsManagerOemPlugin;

/* JADX INFO: loaded from: classes.dex */
public class ImsManagerOemPluginBase implements ImsManagerOemPlugin {
    private static final String TAG = "ImsManagerOemPluginBase";

    @Override // com.mediatek.ims.plugin.ImsManagerOemPlugin
    public boolean hasPlugin() {
        return false;
    }

    @Override // com.mediatek.ims.plugin.ImsManagerOemPlugin
    public void updateImsServiceConfig(Context context, int i, boolean z) {
        ImsManager imsManager = ImsManager.getInstance(context, i);
        if (imsManager != null) {
            imsManager.updateImsServiceConfig();
        }
    }
}
