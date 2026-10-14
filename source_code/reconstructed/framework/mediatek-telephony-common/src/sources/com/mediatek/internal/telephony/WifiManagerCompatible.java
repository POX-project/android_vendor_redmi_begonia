package com.mediatek.internal.telephony;

import android.content.Context;
import android.net.wifi.MiuiWifiManager;
import miui.os.Build;

/* JADX INFO: loaded from: classes.dex */
public class WifiManagerCompatible {
    public static boolean isNeeded() {
        return Build.IS_GLOBAL_BUILD;
    }

    public static void setSARLimit(Context context, int i) {
        MiuiWifiManager miuiWifiManager = (MiuiWifiManager) context.getSystemService("MiuiWifiService");
        if (miuiWifiManager != null) {
            miuiWifiManager.setSARLimit(i);
        }
    }
}
