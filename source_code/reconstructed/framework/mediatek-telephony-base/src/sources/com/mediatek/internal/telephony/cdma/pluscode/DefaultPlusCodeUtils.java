package com.mediatek.internal.telephony.cdma.pluscode;

import android.os.Build;
import android.telephony.Rlog;

/* JADX INFO: loaded from: classes.dex */
public class DefaultPlusCodeUtils implements IPlusCodeUtils {
    public static final boolean DBG = "eng".equals(Build.TYPE);
    private static final String LOG_TAG = "DefaultPlusCodeUtils";

    private static void log(String str) {
        if (DBG) {
            Rlog.d(LOG_TAG, str);
        }
    }

    @Override // com.mediatek.internal.telephony.cdma.pluscode.IPlusCodeUtils
    public boolean canFormatPlusCodeForSms() {
        log("canFormatPlusCodeForSms");
        return false;
    }

    @Override // com.mediatek.internal.telephony.cdma.pluscode.IPlusCodeUtils
    public boolean canFormatPlusToIddNdd() {
        log("canFormatPlusToIddNdd");
        return false;
    }

    @Override // com.mediatek.internal.telephony.cdma.pluscode.IPlusCodeUtils
    public String checkMccBySidLtmOff(String str) {
        log("checkMccBySidLtmOff mccMnc=" + str);
        return str;
    }

    @Override // com.mediatek.internal.telephony.cdma.pluscode.IPlusCodeUtils
    public String removeIddNddAddPlusCode(String str) {
        log("removeIddNddAddPlusCode number=" + Rlog.pii(LOG_TAG, str));
        return str;
    }

    @Override // com.mediatek.internal.telephony.cdma.pluscode.IPlusCodeUtils
    public String removeIddNddAddPlusCodeForSms(String str) {
        log("removeIddNddAddPlusCodeForSms number=" + Rlog.pii(LOG_TAG, str));
        return str;
    }

    @Override // com.mediatek.internal.telephony.cdma.pluscode.IPlusCodeUtils
    public String replacePlusCodeForSms(String str) {
        log("replacePlusCodeForSms number=" + Rlog.pii(LOG_TAG, str));
        return str;
    }

    @Override // com.mediatek.internal.telephony.cdma.pluscode.IPlusCodeUtils
    public String replacePlusCodeWithIddNdd(String str) {
        log("replacePlusCodeWithIddNdd number=" + Rlog.pii(LOG_TAG, str));
        return str;
    }
}
