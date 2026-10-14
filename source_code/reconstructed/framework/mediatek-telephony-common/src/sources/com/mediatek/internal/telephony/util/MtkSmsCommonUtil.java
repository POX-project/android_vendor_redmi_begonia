package com.mediatek.internal.telephony.util;

import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.os.SystemProperties;
import android.telephony.Rlog;
import com.android.internal.telephony.SMSDispatcher;
import com.mediatek.internal.telephony.ppl.IPplSmsFilter;
import com.mediatek.internal.telephony.ppl.PplSmsFilterExtension;

/* JADX INFO: loaded from: classes.dex */
public final class MtkSmsCommonUtil {
    public static final String IS_EMERGENCY_CB_PRIMARY = "isPrimary";
    public static final String SELECT_BY_REFERENCE = "address=? AND reference_number=? AND count=? AND deleted=0 AND sim_id=?";
    public static final String SQL_3GPP2_SMS = " AND (destination_port & 262144=262144)";
    public static final String SQL_3GPP_SMS = " AND (destination_port & 131072=131072)";
    private static final String TAG = "MtkSmsCommonUtil";
    private static final boolean ENG = "eng".equals(Build.TYPE);
    public static PplSmsFilterExtension sPplSmsFilter = null;
    private static final boolean IS_PRIVACY_PROTECTION_LOCK_SUPPORT = SystemProperties.get("ro.vendor.mtk_privacy_protection_lock").equals("1");
    private static final boolean IS_WAPPUSH_SUPPORT = SystemProperties.get("ro.vendor.mtk_wappush_support").equals("1");

    private MtkSmsCommonUtil() {
    }

    public static void filterOutByPpl(Context context, SMSDispatcher.SmsTracker smsTracker) {
        if (isPrivacyLockSupport()) {
            if (sPplSmsFilter == null) {
                sPplSmsFilter = new PplSmsFilterExtension(context);
            }
            if (ENG) {
                Rlog.d(TAG, "[PPL] Phone privacy check start");
            }
            Bundle bundle = new Bundle();
            bundle.putString(IPplSmsFilter.KEY_MSG_CONTENT, smsTracker.mFullMessageText);
            bundle.putString(IPplSmsFilter.KEY_DST_ADDR, smsTracker.mDestAddress);
            bundle.putString(IPplSmsFilter.KEY_FORMAT, smsTracker.mFormat);
            bundle.putInt(IPplSmsFilter.KEY_SUB_ID, smsTracker.mSubId);
            bundle.putInt(IPplSmsFilter.KEY_SMS_TYPE, 1);
            boolean zPplFilter = sPplSmsFilter.pplFilter(bundle);
            if (zPplFilter) {
                smsTracker.mPersistMessage = false;
            }
            if (ENG) {
                Rlog.d(TAG, "[PPL] Phone privacy check end, Need to filter(result) = " + zPplFilter);
            }
        }
    }

    public static boolean isPrivacyLockSupport() {
        return IS_PRIVACY_PROTECTION_LOCK_SUPPORT;
    }

    public static boolean isWapPushSupport() {
        return IS_WAPPUSH_SUPPORT;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static int phonePrivacyLockCheck(byte[][] bArr, String str, Context context, int i) {
        if (!isPrivacyLockSupport() || 0 != 0) {
            return 0;
        }
        if (sPplSmsFilter == null) {
            sPplSmsFilter = new PplSmsFilterExtension(context);
        }
        Bundle bundle = new Bundle();
        bundle.putSerializable(IPplSmsFilter.KEY_PDUS, bArr);
        bundle.putString(IPplSmsFilter.KEY_FORMAT, str);
        bundle.putInt(IPplSmsFilter.KEY_SUB_ID, i);
        bundle.putInt(IPplSmsFilter.KEY_SMS_TYPE, 0);
        boolean zPplFilter = sPplSmsFilter.pplFilter(bundle);
        if (ENG) {
            Rlog.d(TAG, "[Ppl] Phone privacy check end, Need to filter(result) = " + zPplFilter);
        }
        return zPplFilter ? -1 : 0;
    }
}
