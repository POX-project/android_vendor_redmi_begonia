package com.mediatek.internal.telephony;

import android.content.ComponentName;
import android.content.Context;
import android.os.Build;
import android.telephony.Rlog;
import com.android.internal.telephony.SmsApplication;

/* JADX INFO: loaded from: classes.dex */
public final class MtkSmsApplication {
    private static final boolean DBG = "eng".equals(Build.TYPE);
    private static final String LOG_TAG = "MtkSmsApplication";

    public static ComponentName getDefaultSmsApplication(Context context, boolean z, int i) {
        try {
            SmsApplication.SmsApplicationData application = SmsApplication.getApplication(context, z, i);
            return application != null ? new ComponentName(application.mPackageName, application.mSmsReceiverClass) : null;
        } finally {
            if (DBG) {
                Rlog.d(LOG_TAG, "getDefaultSmsApplication for userId " + i + " default component= " + ((Object) null));
            }
        }
    }

    private static String getDefaultSmsApplicationPackageName(Context context, int i) {
        ComponentName defaultSmsApplication = getDefaultSmsApplication(context, false, i);
        if (defaultSmsApplication != null) {
            return defaultSmsApplication.getPackageName();
        }
        return null;
    }

    public static boolean isDefaultSmsApplication(Context context, String str, int i) {
        if (str == null) {
            return false;
        }
        String defaultSmsApplicationPackageName = getDefaultSmsApplicationPackageName(context, i);
        return (defaultSmsApplicationPackageName != null && defaultSmsApplicationPackageName.equals(str)) || "com.android.bluetooth".equals(str);
    }

    public static boolean shouldWriteMessageForPackage(String str, Context context, int i) {
        boolean z = !isDefaultSmsApplication(context, str, i);
        if (DBG) {
            Rlog.d(LOG_TAG, "shouldWriteMessageForPackage for userId " + i + ", shouldWrite=" + z);
        }
        return z;
    }
}
