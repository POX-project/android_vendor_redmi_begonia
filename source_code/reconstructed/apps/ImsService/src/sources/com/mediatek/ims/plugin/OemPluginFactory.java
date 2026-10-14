package com.mediatek.ims.plugin;

import android.content.Context;

/* JADX INFO: loaded from: classes.dex */
public interface OemPluginFactory {
    ImsCallOemPlugin makeImsCallPlugin(Context context);

    ImsManagerOemPlugin makeImsManagerPlugin(Context context);

    ImsRegistrationOemPlugin makeImsRegistrationPlugin(Context context);

    ImsSSOemPlugin makeImsSSOemPlugin(Context context);
}
