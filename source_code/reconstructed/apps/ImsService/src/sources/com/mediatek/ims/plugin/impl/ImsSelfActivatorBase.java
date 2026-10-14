package com.mediatek.ims.plugin.impl;

import android.content.Context;
import android.os.Handler;
import android.telephony.ims.ImsCallProfile;
import com.mediatek.ims.ImsCallSessionProxy;
import com.mediatek.ims.ImsService;
import com.mediatek.ims.plugin.ImsSelfActivator;
import com.mediatek.ims.ril.ImsCommandsInterface;

/* JADX INFO: loaded from: classes.dex */
public class ImsSelfActivatorBase implements ImsSelfActivator {
    private static final String TAG = "ImsSelfActivatorBase";
    private Context mContext;

    public ImsSelfActivatorBase(Context context, Handler handler, ImsCallSessionProxy imsCallSessionProxy, ImsCommandsInterface imsCommandsInterface, ImsService imsService, int i) {
        this.mContext = context;
    }

    @Override // com.mediatek.ims.plugin.ImsSelfActivator
    public void close() {
    }

    @Override // com.mediatek.ims.plugin.ImsSelfActivator
    public void doSelfActivationDial(String str, ImsCallProfile imsCallProfile, boolean z) {
    }

    @Override // com.mediatek.ims.plugin.ImsSelfActivator
    public boolean shouldProcessSelfActivation(int i) {
        return false;
    }
}
