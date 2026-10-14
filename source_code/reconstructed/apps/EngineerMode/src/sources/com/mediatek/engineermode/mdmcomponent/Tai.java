package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class Tai extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EMM_PLMNSEL_INFO_IND};

    public Tai(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"PLMN", "TAC"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "TAI";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        for (int i = 0; i < 1; i++) {
            int fieldValue = getFieldValue(msg, "selectedPlmn.mcc1");
            int fieldValue2 = getFieldValue(msg, "selectedPlmn.mcc2");
            int fieldValue3 = getFieldValue(msg, "selectedPlmn.mcc3");
            int fieldValue4 = getFieldValue(msg, "selectedPlmn.mnc1");
            int fieldValue5 = getFieldValue(msg, "selectedPlmn.mnc2");
            int fieldValue6 = getFieldValue(msg, "selectedPlmn.mnc3");
            int fieldValue7 = getFieldValue(msg, MDMContent.EM_EMM_L4C_PLMNSEL_PARA__MNC);
            if (fieldValue == 15 && fieldValue2 == 15 && fieldValue3 == 15 && fieldValue4 == 15 && fieldValue5 == 15 && fieldValue6 == 15) {
                addData("-");
            } else {
                StringBuilder sb = new StringBuilder();
                sb.append("");
                sb.append(fieldValue);
                sb.append(fieldValue2);
                sb.append(fieldValue3);
                sb.append(fieldValue4);
                sb.append(fieldValue5);
                sb.append(fieldValue6 != 15 ? Integer.valueOf(fieldValue6) : "");
                addData(sb.toString());
            }
            if (fieldValue7 == 65534 || fieldValue7 == 0) {
                addData("-");
            } else {
                addData(String.format("0x%X", Integer.valueOf(fieldValue7)));
            }
        }
    }
}
