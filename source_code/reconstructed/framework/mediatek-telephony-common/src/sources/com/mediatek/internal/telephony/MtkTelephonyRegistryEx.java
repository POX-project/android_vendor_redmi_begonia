package com.mediatek.internal.telephony;

import android.os.ServiceManager;
import android.telephony.Rlog;

/* JADX INFO: loaded from: classes.dex */
public class MtkTelephonyRegistryEx extends IMtkTelephonyRegistryEx.Stub {
    private static final boolean DBG = false;
    private static final boolean DBG_LOC = false;
    private static final String LOG_TAG = "MtkTelephonyRegistryEx";
    private static final boolean VDBG = false;
    private static MtkTelephonyRegistryEx sInstance;

    protected MtkTelephonyRegistryEx() {
        publish();
    }

    private static String dataStateToStringEx(int i) {
        if (i == 0) {
            return "DISCONNECTED";
        }
        if (i == 1) {
            return "CONNECTING";
        }
        if (i == 2) {
            return "CONNECTED";
        }
        if (i == 3) {
            return "SUSPENDED";
        }
        if (i == 4) {
            return "DISCONNECTING";
        }
        return "UNKNOWN(" + i + ")";
    }

    private static boolean idMatchEx(int i, int i2, int i3, int i4, int i5) {
        Rlog.d(LOG_TAG, "idMatchEx: rSubId=" + i + ", subId=" + i2 + ", dSubId=" + i3 + ", rPhoneId=" + i4 + ", phoneId=" + i5);
        if (i2 < 0) {
            return i4 == i5;
        }
        if (i <= -2) {
            return i4 == i5;
        }
        if (i == Integer.MAX_VALUE) {
            return i2 == i3;
        }
        return i == i2;
    }

    static MtkTelephonyRegistryEx init() {
        MtkTelephonyRegistryEx mtkTelephonyRegistryEx;
        synchronized (MtkTelephonyRegistryEx.class) {
            if (sInstance == null) {
                sInstance = new MtkTelephonyRegistryEx();
            } else {
                Rlog.e(LOG_TAG, "init() called multiple times!  sInstance = " + sInstance);
            }
            mtkTelephonyRegistryEx = sInstance;
        }
        return mtkTelephonyRegistryEx;
    }

    private void publish() {
        Rlog.d(LOG_TAG, "publish: " + this);
        ServiceManager.addService("telephony.mtkregistry", this);
    }
}
