package com.mediatek.internal.telephony;

import android.os.RemoteException;
import android.os.ServiceManager;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;

/* JADX INFO: loaded from: classes.dex */
public class MtkSubscriptionManager {
    private static final boolean DBG = false;
    public static final int EXTRA_VALUE_NEW_SIM = 1;
    public static final int EXTRA_VALUE_NOCHANGE = 4;
    public static final int EXTRA_VALUE_REMOVE_SIM = 2;
    public static final int EXTRA_VALUE_REPOSITION_SIM = 3;
    public static final String INTENT_KEY_DETECT_STATUS = "simDetectStatus";
    public static final String INTENT_KEY_PROP_KEY = "simPropKey";
    public static final String INTENT_KEY_SIM_COUNT = "simCount";
    private static final String LOG_TAG = "MtkSubscriptionManager";
    private static final boolean VDBG = false;

    public static int getSubIdUsingPhoneId(int i) {
        try {
            IMtkSub iMtkSubAsInterface = IMtkSub.Stub.asInterface(ServiceManager.getService("isubstub"));
            if (iMtkSubAsInterface != null) {
                return iMtkSubAsInterface.getSubIdUsingPhoneId(i);
            }
            return -1;
        } catch (RemoteException e) {
            return -1;
        }
    }

    public static MtkSubscriptionInfo getSubInfo(String str, int i) {
        return getSubInfo(str, i, null);
    }

    public static MtkSubscriptionInfo getSubInfo(String str, int i, String str2) {
        if (SubscriptionManager.isValidSubscriptionId(i)) {
            try {
                IMtkSub iMtkSubAsInterface = IMtkSub.Stub.asInterface(ServiceManager.getService("isubstub"));
                if (iMtkSubAsInterface != null) {
                    return iMtkSubAsInterface.getSubInfo(str, i, str2);
                }
                return null;
            } catch (RemoteException e) {
                return null;
            }
        }
        Rlog.d(LOG_TAG, "[getSubInfo]- invalid subId, subId = " + i);
        return null;
    }

    public static MtkSubscriptionInfo getSubInfoForIccId(String str, String str2) {
        return getSubInfoForIccId(str, str2, null);
    }

    public static MtkSubscriptionInfo getSubInfoForIccId(String str, String str2, String str3) {
        if (str2 == null) {
            Rlog.d(LOG_TAG, "[getSubInfoForIccId]- null iccid");
            return null;
        }
        try {
            IMtkSub iMtkSubAsInterface = IMtkSub.Stub.asInterface(ServiceManager.getService("isubstub"));
            if (iMtkSubAsInterface != null) {
                return iMtkSubAsInterface.getSubInfoForIccId(str, str2, str3);
            }
            return null;
        } catch (RemoteException e) {
            return null;
        }
    }

    private static void printStackTrace(String str) {
        RuntimeException runtimeException = new RuntimeException();
        Rlog.d(LOG_TAG, "StackTrace - " + str);
        for (StackTraceElement stackTraceElement : runtimeException.getStackTrace()) {
            Rlog.d(LOG_TAG, stackTraceElement.toString());
        }
    }

    public static void setDefaultDataSubIdWithoutCapabilitySwitch(int i) {
        if (i <= 0) {
            printStackTrace("setDefaultDataSubIdWithoutCapabilitySwitch subId 0");
        }
        try {
            IMtkSub iMtkSubAsInterface = IMtkSub.Stub.asInterface(ServiceManager.getService("isubstub"));
            if (iMtkSubAsInterface != null) {
                iMtkSubAsInterface.setDefaultDataSubIdWithoutCapabilitySwitch(i);
            }
        } catch (RemoteException e) {
        }
    }

    public static void setDefaultSubId(int i) {
        if (i <= 0) {
            printStackTrace("setDefaultSubId subId 0");
        }
        try {
            IMtkSub iMtkSubAsInterface = IMtkSub.Stub.asInterface(ServiceManager.getService("isubstub"));
            if (iMtkSubAsInterface != null) {
                iMtkSubAsInterface.setDefaultFallbackSubId(i, 0);
            }
        } catch (RemoteException e) {
        }
    }
}
