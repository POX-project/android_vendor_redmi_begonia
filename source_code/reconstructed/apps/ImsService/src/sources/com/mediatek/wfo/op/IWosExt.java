package com.mediatek.wfo.op;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
public interface IWosExt {
    void clearPDNErrorMessages();

    void dispose();

    void factoryReset();

    void initialize(Context context);

    void showLocationTimeoutMessage();

    void showPDNErrorMessages(int i);
}
