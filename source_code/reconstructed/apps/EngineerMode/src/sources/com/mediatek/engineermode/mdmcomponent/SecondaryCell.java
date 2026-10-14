package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class SecondaryCell extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_CONN_INFO_IND};

    public SecondaryCell(Activity activity) {
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

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"EARFCN", "PCI", "Band", "Bandwidth", "Belongs to STAG"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Secondary Cell";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        for (int i = 0; i < 3; i++) {
            int fieldValue = getFieldValue(msg, "scell_earfcn[" + i + "]");
            int fieldValue2 = getFieldValue(msg, "scell_pci[" + i + "]");
            int fieldValue3 = getFieldValue(msg, "scell_band[" + i + "]");
            int fieldValue4 = getFieldValue(msg, "scell_bw[" + i + "]");
            int fieldValue5 = getFieldValue(msg, "scell_belongs_to_stag[" + i + "]");
            Object[] objArr = new Object[5];
            objArr[0] = fieldValue == 0 ? "-" : Integer.valueOf(fieldValue);
            Object objValueOf = "";
            objArr[1] = fieldValue2 == 0 ? "" : Integer.valueOf(fieldValue2);
            objArr[2] = fieldValue3 == 0 ? "" : fieldValue3 + "(LTE-U)";
            objArr[3] = fieldValue4 == 0 ? "" : Float.valueOf(fieldValue4 / 10.0f);
            if (fieldValue5 != 0) {
                objValueOf = Integer.valueOf(fieldValue5);
            }
            objArr[4] = objValueOf;
            addData(objArr);
        }
    }
}
