package com.mediatek.ims.common;

import android.telephony.SubscriptionManager;

/* JADX INFO: loaded from: classes.dex */
public class SubscriptionManagerHelper {
    private SubscriptionManagerHelper() {
    }

    public static int getSubIdUsingPhoneId(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId == null || subId.length <= 0) {
            return -1;
        }
        return subId[0];
    }
}
