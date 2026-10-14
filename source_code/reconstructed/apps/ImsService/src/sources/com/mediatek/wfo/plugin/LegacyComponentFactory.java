package com.mediatek.wfo.plugin;

import android.content.Context;
import com.mediatek.wfo.IWifiOffloadService;

/* JADX INFO: loaded from: classes.dex */
public interface LegacyComponentFactory {
    IWifiOffloadService.Stub makeWifiOffloadService(Context context);
}
