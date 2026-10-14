package com.mediatek.engineermode.cxp;

import android.os.SystemProperties;

/* JADX INFO: loaded from: classes2.dex */
public class CarrierExpressUtil {
    public static boolean isCarrierExpressSupported() {
        return ("no".equals(SystemProperties.get("ro.vendor.mtk_carrierexpress_pack", "no")) || SystemProperties.getInt("ro.vendor.mtk_cxp_switch_mode", 0) == 2) ? false : true;
    }
}
