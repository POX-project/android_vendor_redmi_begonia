package com.mediatek.internal.telephony.datasub;

import android.content.Context;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import com.android.internal.telephony.uicc.UiccController;
import com.mediatek.internal.telephony.uicc.MtkUiccController;

/* JADX INFO: loaded from: classes.dex */
public class DataSubSelectorUtil {
    private static boolean DBG = true;
    private static final String LOG_TAG = "DSSelectorUtil";
    private static final int NO_SIM_STRING_LENGTH = 3;

    public static boolean isActiveSub(Context context, int i) {
        int i2 = -1;
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId != null && subId.length > 0) {
            i2 = subId[0];
        }
        return SubscriptionManager.from(context).isActiveSubId(i2);
    }

    public static boolean isAnySimNotReady(Context context, int i) {
        int i2 = 0;
        int activeModemCount = ((TelephonyManager) context.getSystemService("phone")).getActiveModemCount();
        for (int i3 = 0; i3 < activeModemCount; i3++) {
            if (isActiveSub(context, i3)) {
                MtkUiccController mtkUiccController = (MtkUiccController) UiccController.getInstance();
                String iccid = mtkUiccController != null ? mtkUiccController.getIccid(i3) : "";
                if (iccid.equals("")) {
                    log("Not ready sim exist:" + i3 + ", max:" + activeModemCount);
                    return true;
                }
                if (iccid.length() > 3) {
                    i2++;
                }
            } else {
                log("slot " + i3 + " has no active sub, ignore it.");
            }
        }
        log("simCount:" + i2);
        return i != i2;
    }

    private static void log(String str) {
        if (DBG) {
            Rlog.d(LOG_TAG, str);
        }
    }

    private static void loge(String str) {
        if (DBG) {
            Rlog.e(LOG_TAG, str);
        }
    }
}
