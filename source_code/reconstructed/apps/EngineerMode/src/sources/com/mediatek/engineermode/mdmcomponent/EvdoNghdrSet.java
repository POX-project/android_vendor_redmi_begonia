package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.text.DecimalFormat;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class EvdoNghdrSet extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_EVDO_NGHDR_SET_INFO_IND};

    public EvdoNghdrSet(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "7. CDMA EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"Band", "Channel", "PilotPN", "PilotEclo"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EVDO Nghdr Set";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        int fieldValue = getFieldValue(msg, "num_evdo_nghdr_set");
        addData("num_evdo_nghdr_set(" + fieldValue + ")");
        for (int i = 0; i < fieldValue; i++) {
            addData(Integer.valueOf(getFieldValue(msg, "evdo_nghdr_set[" + i + "].Band")), Integer.valueOf(getFieldValue(msg, "evdo_nghdr_set[" + i + "].Channel")), Integer.valueOf(getFieldValue(msg, "evdo_nghdr_set[" + i + "].PilotPN")), new DecimalFormat("#0.00").format(getFieldValue(msg, "evdo_nghdr_set[" + i + "].PilotEclo", true) / 8.0f));
        }
    }
}
