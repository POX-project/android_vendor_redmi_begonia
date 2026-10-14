package com.mediatek.internal.telephony.dataconnection;

import android.os.Bundle;
import android.telephony.Rlog;
import android.telephony.data.ApnSetting;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.dataconnection.ApnSettingUtils;
import com.android.internal.telephony.uicc.IccRecords;
import com.mediatek.internal.telephony.OpTelephonyCustomizationUtils;

/* JADX INFO: loaded from: classes.dex */
public class MtkApnSettingUtils extends ApnSettingUtils {
    private static final boolean DBG = true;
    private static final String LOG_TAG = "MtkApnSettingUtils";
    private static IDataConnectionExt sDataConnectionExt = null;

    private static Bundle isMeteredApnTypeEx(int i, Phone phone) {
        boolean dataRoaming = phone.getServiceState().getDataRoaming();
        boolean z = false;
        boolean zIsMeteredApnType = false;
        if (sDataConnectionExt == null) {
            try {
                sDataConnectionExt = OpTelephonyCustomizationUtils.getOpFactory(phone.getContext()).makeDataConnectionExt(phone.getContext());
            } catch (Exception e) {
                Rlog.e(LOG_TAG, "sDataConnectionExt init fail. e: " + e);
                sDataConnectionExt = null;
            }
        }
        IDataConnectionExt iDataConnectionExt = sDataConnectionExt;
        if (iDataConnectionExt != null && iDataConnectionExt.isMeteredApnTypeByLoad()) {
            z = true;
            zIsMeteredApnType = sDataConnectionExt.isMeteredApnType(ApnSetting.getApnTypeString(i), dataRoaming);
        }
        Bundle bundle = new Bundle();
        bundle.putBoolean("useEx", z);
        bundle.putBoolean("result", zIsMeteredApnType);
        return bundle;
    }

    private static boolean mvnoMatchesEx(IccRecords iccRecords, int i, String str) {
        return i == 4 && iccRecords.isOperatorMvnoForEfPnn() != null && iccRecords.isOperatorMvnoForEfPnn().equalsIgnoreCase(str);
    }
}
