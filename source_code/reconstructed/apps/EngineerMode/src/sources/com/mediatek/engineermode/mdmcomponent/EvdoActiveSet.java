package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.text.DecimalFormat;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class EvdoActiveSet extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_EVDO_ACTIVE_SET_INFO_IND};

    public EvdoActiveSet(Activity activity) {
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
        return new String[]{"pilotPN", "pilotEclo", "DRC Cover"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EVDO Acitve Set";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        int fieldValue = getFieldValue(msg, "num_evdo_active_set");
        addData("num_evdo_active_set(" + fieldValue + ")");
        for (int i = 0; i < fieldValue; i++) {
            int fieldValue2 = getFieldValue(msg, "evdo_active_set[" + i + "].activePilotPN");
            addData(Integer.valueOf(fieldValue2), new DecimalFormat("#0.00").format(getFieldValue(msg, "evdo_active_set[" + i + "].activepilotEclo", true) / 8.0f), Integer.valueOf(getFieldValue(msg, "evdo_active_set[" + i + "].activeDrcCover")));
        }
    }
}
