package com.mediatek.internal.telephony.phb;

import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import com.android.internal.telephony.uicc.CsimFileHandler;
import com.android.internal.telephony.uicc.IccFileHandler;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class CsimPhbUtil extends Handler {
    private static final String LOG_TAG = "CsimPhbUtil";
    private static final int MAX_NAME_LENGTH = 14;
    private static final int MAX_NUMBER_LENGTH = 20;
    private static final int MAX_SIM_CNT = 4;
    private static int[] sAdnRecordSize = {-1, -1, -1, -1};
    private static final String[] PROPERTY_RIL_FULL_UICC_TYPE = {"vendor.gsm.ril.fulluicctype", "vendor.gsm.ril.fulluicctype.2", "vendor.gsm.ril.fulluicctype.3", "vendor.gsm.ril.fulluicctype.4"};

    public static void clearAdnRecordSize() {
        Rlog.d(LOG_TAG, "[clearAdnRecordSize]");
        if (sAdnRecordSize == null) {
            return;
        }
        int i = 0;
        while (true) {
            int[] iArr = sAdnRecordSize;
            if (i >= iArr.length) {
                return;
            }
            iArr[i] = -1;
            i++;
        }
    }

    public static void getPhbRecordInfo(Message message) {
        int[] iArr = sAdnRecordSize;
        iArr[2] = 20;
        iArr[3] = 14;
        Rlog.d(LOG_TAG, "[getPhbRecordInfo] sAdnRecordSize[] {" + sAdnRecordSize[0] + ", " + sAdnRecordSize[1] + ", " + sAdnRecordSize[2] + ", " + sAdnRecordSize[3] + "}");
        if (message != null) {
            AsyncResult.forMessage(message).result = sAdnRecordSize;
            message.sendToTarget();
        }
    }

    public static boolean hasModemPhbEnhanceCapability(IccFileHandler iccFileHandler) {
        if (SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild") || iccFileHandler == null || !(iccFileHandler instanceof CsimFileHandler)) {
            return true;
        }
        for (int i = 0; i < 4; i++) {
            String str = SystemProperties.get(PROPERTY_RIL_FULL_UICC_TYPE[i]);
            if (str.indexOf("CSIM") >= 0 && str.indexOf("USIM") >= 0) {
                return true;
            }
        }
        return false;
    }

    public static void initPhbStorage(ArrayList<MtkAdnRecord> arrayList) {
        if (arrayList != null) {
            int size = arrayList.size();
            int i = 0;
            for (int i2 = 0; i2 < size; i2++) {
                if (!arrayList.get(i2).isEmpty()) {
                    i++;
                }
            }
            Rlog.d(LOG_TAG, "[initPhbStorage] Current total: " + sAdnRecordSize[1] + ", used:" + sAdnRecordSize[0] + ", update total: " + size + ", used: " + i);
            int[] iArr = sAdnRecordSize;
            if (iArr[1] <= -1) {
                setPhbRecordStorageInfo(size, i);
            } else {
                setPhbRecordStorageInfo(iArr[1] + size, iArr[0] + i);
            }
        }
    }

    public static boolean isUsingGsmPhbReady(IccFileHandler iccFileHandler) {
        if (SystemProperties.get("ro.vendor.mtk_ril_mode").equals("c6m_1rild")) {
            return true;
        }
        if (iccFileHandler == null || !(iccFileHandler instanceof CsimFileHandler)) {
            return false;
        }
        for (int i = 0; i < 4; i++) {
            String str = SystemProperties.get(PROPERTY_RIL_FULL_UICC_TYPE[i]);
            if (str.indexOf("CSIM") >= 0 && str.indexOf("USIM") >= 0) {
                return true;
            }
        }
        return false;
    }

    private static void setPhbRecordStorageInfo(int i, int i2) {
        int[] iArr = sAdnRecordSize;
        iArr[0] = i2;
        iArr[1] = i;
        Rlog.d(LOG_TAG, "[setPhbRecordStorageInfo] usedRecord: " + i2 + ", totalSize: " + i);
    }

    public static boolean updatePhbStorageInfo(int i) {
        int[] iArr = sAdnRecordSize;
        int i2 = iArr[0];
        int i3 = iArr[1];
        Rlog.d(LOG_TAG, "[updatePhbStorageInfo] used: " + i2 + ", total: " + i3 + ", update: " + i);
        if (i2 > -1) {
            setPhbRecordStorageInfo(i3, i2 + i);
            return true;
        }
        Rlog.d(LOG_TAG, "[updatePhbStorageInfo] Storage info is not ready!");
        return false;
    }
}
