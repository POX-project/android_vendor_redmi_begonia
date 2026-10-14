package com.mediatek.wfo.op;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
public class OpWosCustomizationFactoryBase {
    public IWosExt makeWosExt(Context context) {
        return new DefaultWosExt(context);
    }
}
