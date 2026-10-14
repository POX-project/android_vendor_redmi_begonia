package com.mediatek.ims.plugin.impl;

import android.content.Context;
import android.os.Handler;
import android.util.Log;
import com.mediatek.ims.ImsCallSessionProxy;
import com.mediatek.ims.ImsService;
import com.mediatek.ims.plugin.ExtensionPluginFactory;
import com.mediatek.ims.ril.ImsCommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class ExtensionPluginFactoryBase implements ExtensionPluginFactory {
    @Override // com.mediatek.ims.plugin.ExtensionPluginFactory
    public ImsCallPluginBase makeImsCallPlugin(Context context) {
        Log.d("ExtensionPluginFactoryBase", "makeImsCallPlugin()");
        return new ImsCallPluginBase(context);
    }

    @Override // com.mediatek.ims.plugin.ExtensionPluginFactory
    public ImsSSExtPluginBase makeImsSSExtPlugin(Context context) {
        Log.d("ExtensionPluginFactoryBase", "makeImsSSExtPlugin()");
        return new ImsSSExtPluginBase(context);
    }

    @Override // com.mediatek.ims.plugin.ExtensionPluginFactory
    public ImsSelfActivatorBase makeImsSelfActivator(Context context, Handler handler, ImsCallSessionProxy imsCallSessionProxy, ImsCommandsInterface imsCommandsInterface, ImsService imsService, int i) {
        Log.d("ExtensionPluginFactoryBase", "makeImsSelfActivator()");
        return new ImsSelfActivatorBase(context, handler, imsCallSessionProxy, imsCommandsInterface, imsService, i);
    }
}
