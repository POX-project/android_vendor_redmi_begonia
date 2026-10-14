package com.mediatek.internal.telephony.worldphone;

import android.os.SystemProperties;
import android.telephony.Rlog;
import com.mediatek.internal.telephony.datasub.DataSubConstants;

/* JADX INFO: loaded from: classes.dex */
public class WorldPhoneWrapper implements IWorldPhone {
    private static int sOperatorSpec = -1;
    private static IWorldPhone sWorldPhoneInstance = null;
    private static WorldPhoneUtil sWorldPhoneUtil = null;

    public static IWorldPhone getWorldPhoneInstance() {
        if (sWorldPhoneInstance == null) {
            String str = SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR);
            if (str == null || !str.equals(DataSubConstants.OPERATOR_OP01)) {
                sOperatorSpec = 0;
            } else {
                sOperatorSpec = 1;
            }
            sWorldPhoneUtil = new WorldPhoneUtil();
            int i = sOperatorSpec;
            if (i == 1) {
                sWorldPhoneInstance = new WorldPhoneOp01();
            } else if (i == 0) {
                sWorldPhoneInstance = new WorldPhoneOm();
            }
        }
        logd("sOperatorSpec: " + sOperatorSpec + ", isLteSupport: " + WorldPhoneUtil.isLteSupport());
        return sWorldPhoneInstance;
    }

    private static void logd(String str) {
        Rlog.d(IWorldPhone.LOG_TAG, "[WPO_WRAPPER]" + str);
    }

    @Override // com.mediatek.internal.telephony.worldphone.IWorldPhone
    public void notifyRadioCapabilityChange(int i) {
    }

    @Override // com.mediatek.internal.telephony.worldphone.IWorldPhone
    public void setModemSelectionMode(int i, int i2) {
        int i3 = sOperatorSpec;
        if (i3 == 1 || i3 == 0) {
            sWorldPhoneInstance.setModemSelectionMode(i, i2);
        } else {
            logd("Unknown World Phone Spec");
        }
    }
}
