package com.mediatek.ims.plugin.impl;

import android.content.Context;
import com.mediatek.ims.plugin.ImsCallOemPlugin;
import com.mediatek.ims.plugin.ImsManagerOemPlugin;
import com.mediatek.ims.plugin.ImsRegistrationOemPlugin;
import com.mediatek.ims.plugin.ImsSSOemPlugin;
import com.mediatek.ims.plugin.OemPluginFactory;

/* JADX INFO: loaded from: classes.dex */
public class OemPluginFactoryBase implements OemPluginFactory {
    @Override // com.mediatek.ims.plugin.OemPluginFactory
    public ImsCallOemPlugin makeImsCallPlugin(Context context) {
        return new ImsCallOemPluginBase(context);
    }

    @Override // com.mediatek.ims.plugin.OemPluginFactory
    public ImsManagerOemPlugin makeImsManagerPlugin(Context context) {
        return new ImsManagerOemPluginBase();
    }

    @Override // com.mediatek.ims.plugin.OemPluginFactory
    public ImsRegistrationOemPlugin makeImsRegistrationPlugin(Context context) {
        return new ImsRegistrationOemPluginBase();
    }

    @Override // com.mediatek.ims.plugin.OemPluginFactory
    public ImsSSOemPlugin makeImsSSOemPlugin(Context context) {
        return new ImsSSOemPluginBase(context);
    }
}
