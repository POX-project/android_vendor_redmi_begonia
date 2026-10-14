package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.SystemProperties;
import android.telephony.SubscriptionInfo;
import android.telephony.SubscriptionManager;
import android.util.Log;
import java.util.Iterator;
import java.util.List;
import mediatek.telephony.MtkSignalStrength;

/* JADX INFO: loaded from: classes.dex */
public class MtkDefaultSmsSimSettings {
    public static final int ASK_USER_SUB_ID = -2;
    private static final String TAG = "MTKDefaultSmsSimSettings";

    private static int getMainCapabilityPhoneId() {
        int i = SystemProperties.getInt(MtkPhoneConstants.PROPERTY_CAPABILITY_SWITCH, 1) - 1;
        Log.d(TAG, "getMainCapabilityPhoneId " + i);
        return i;
    }

    private static boolean isoldDefaultSMSSubIdActive(List<SubscriptionInfo> list) {
        int defaultSmsSubscriptionId = SubscriptionManager.getDefaultSmsSubscriptionId();
        Iterator<SubscriptionInfo> it = list.iterator();
        while (it.hasNext()) {
            if (it.next().getSubscriptionId() == defaultSmsSubscriptionId) {
                return true;
            }
        }
        return "OP01".equals(SystemProperties.get(MtkSignalStrength.PROPERTY_OPERATOR_OPTR)) && defaultSmsSubscriptionId == -2;
    }

    public static void setSmsTalkDefaultSim(List<SubscriptionInfo> list, Context context) {
        int defaultSmsSubscriptionId = SubscriptionManager.getDefaultSmsSubscriptionId();
        Log.i(TAG, "oldSmsDefaultSIM" + defaultSmsSubscriptionId);
        if (list == null) {
            Log.i(TAG, "subInfos == null, return");
            SubscriptionManager.from(context).setDefaultSmsSubId(-1);
            return;
        }
        Log.i(TAG, "subInfos size = " + list.size());
        if (list.size() <= 1) {
            if (list.size() != 1) {
                Log.i(TAG, "setSmsTalkDefaultSim SIM not insert");
                SubscriptionManager.from(context).setDefaultSmsSubId(-1);
                return;
            }
            Log.i(TAG, "sub size = 1,segment = " + SystemProperties.get("persist.vendor.operator.seg"));
            if ("OP09".equals(SystemProperties.get(MtkSignalStrength.PROPERTY_OPERATOR_OPTR)) && "SEGDEFAULT".equals(SystemProperties.get("persist.vendor.operator.seg"))) {
                int subscriptionId = list.get(0).getSubscriptionId();
                SubscriptionManager.from(context).setDefaultSmsSubId(subscriptionId);
                Log.i(TAG, "subInfos size = 1, set to " + subscriptionId);
            } else if ("OP01".equals(SystemProperties.get(MtkSignalStrength.PROPERTY_OPERATOR_OPTR))) {
                int subscriptionId2 = list.get(0).getSubscriptionId();
                SubscriptionManager.from(context).setDefaultSmsSubId(subscriptionId2);
                Log.i(TAG, "subInfos size = 1, set to " + subscriptionId2);
            }
            SubscriptionManager.from(context).setDefaultSmsSubId(list.get(0).getSubscriptionId());
            return;
        }
        if (isoldDefaultSMSSubIdActive(list)) {
            Log.i(TAG, "subInfos size > 1 & old available, set to :" + defaultSmsSubscriptionId);
            SubscriptionManager.from(context).setDefaultSmsSubId(defaultSmsSubscriptionId);
            return;
        }
        String str = SystemProperties.get(MtkSignalStrength.PROPERTY_OPERATOR_OPTR);
        Log.d(TAG, "optr = " + str);
        if ("OP01".equals(str)) {
            Log.i(TAG, "subInfos size > 1, set to : ASK_USER_SUB_ID");
            SubscriptionManager.from(context).setDefaultSmsSubId(-2);
        } else if ("OP09".equals(str) && "SEGDEFAULT".equals(SystemProperties.get("persist.vendor.operator.seg"))) {
            SubscriptionInfo activeSubscriptionInfoForSimSlotIndex = SubscriptionManager.from(context).getActiveSubscriptionInfoForSimSlotIndex(0);
            int subscriptionId3 = activeSubscriptionInfoForSimSlotIndex != null ? activeSubscriptionInfoForSimSlotIndex.getSubscriptionId() : -1;
            SubscriptionManager.from(context).setDefaultSmsSubId(subscriptionId3);
            Log.i(TAG, "subInfos size > 1, set to " + subscriptionId3);
        } else if ("OP07".equals(str)) {
            int mainCapabilityPhoneId = getMainCapabilityPhoneId();
            Log.d(TAG, "Main slot = " + mainCapabilityPhoneId);
            SubscriptionInfo activeSubscriptionInfoForSimSlotIndex2 = SubscriptionManager.from(context).getActiveSubscriptionInfoForSimSlotIndex(mainCapabilityPhoneId);
            int subscriptionId4 = -1;
            if (activeSubscriptionInfoForSimSlotIndex2 != null) {
                subscriptionId4 = activeSubscriptionInfoForSimSlotIndex2.getSubscriptionId();
                Log.d(TAG, "Get subId from subInfo = " + subscriptionId4);
            }
            Log.d(TAG, "subInfos size > 1, set to " + subscriptionId4);
            SubscriptionManager.from(context).setDefaultSmsSubId(subscriptionId4);
        } else {
            Log.i(TAG, "subInfos size > 1, set to : ASK_USER_SUB_ID");
        }
        SubscriptionManager.from(context).setDefaultSmsSubId(SubscriptionManager.from(context).getActiveSubscriptionInfoForSimSlotIndex(0).getSubscriptionId());
    }
}
