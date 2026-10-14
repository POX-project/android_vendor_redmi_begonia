package com.mediatek.imsplugin;

import android.content.Context;
import android.os.Handler;
import android.util.Log;
import com.mediatek.ims.ImsCallSessionProxy;
import com.mediatek.ims.ImsService;
import com.mediatek.ims.plugin.impl.ExtensionPluginFactoryBase;
import com.mediatek.ims.plugin.impl.ImsCallPluginBase;
import com.mediatek.ims.plugin.impl.ImsSSExtPluginBase;
import com.mediatek.ims.plugin.impl.ImsSelfActivatorBase;
import com.mediatek.ims.ril.ImsCommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class ExtensionPluginFactoryImpl extends ExtensionPluginFactoryBase {
    public ImsCallPluginBase makeImsCallPlugin(Context context) {
        Log.d("ExtensionPluginFactoryImpl", "makeImsCallPlugin()");
        return new ImsCallPluginImpl(context);
    }

    public ImsSSExtPluginBase makeImsSSExtPlugin(Context context) {
        Log.d("ExtensionPluginFactoryImpl", "makeImsSSExtPlugin()");
        return new ImsSSExtPluginImpl(context);
    }

    public ImsSelfActivatorBase makeImsSelfActivator(Context context, Handler handler, ImsCallSessionProxy imsCallSessionProxy, ImsCommandsInterface imsCommandsInterface, ImsService imsService, int i) {
        Log.d("ExtensionPluginFactoryImpl", "makeImsSelfActivator()");
        return new ImsSelfActivatorImpl(context, handler, imsCallSessionProxy, imsCommandsInterface, imsService, i);
    }
}
