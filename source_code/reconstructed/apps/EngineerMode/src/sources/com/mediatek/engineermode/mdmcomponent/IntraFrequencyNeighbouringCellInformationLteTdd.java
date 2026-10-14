package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class IntraFrequencyNeighbouringCellInformationLteTdd extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND};

    public IntraFrequencyNeighbouringCellInformationLteTdd(Activity activity) {
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
        return new String[]{"PCI", "RSCP", MDMContent.FDD_EM_MEME_DCH_UMTS_ECN0};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Intra-frequency neighbouring cell information (LTE TDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        int fieldValue = getFieldValue(msg, "intra_info.cell_num");
        for (int i = 0; i < fieldValue && i < 16; i++) {
            String str2 = "intra_info." + MDMContent.EM_ERRC_MOB_MEAS_INTRARAT_INTRA_INFO_INTRA_CELL + "[" + i + "].";
            int fieldValue2 = getFieldValue(msg, str2 + "valid");
            int fieldValue3 = getFieldValue(msg, str2 + "pci");
            int fieldValue4 = getFieldValue(msg, str2 + "rsrp", true);
            int fieldValue5 = getFieldValue(msg, str2 + "rsrq", true);
            Object[] objArr = new Object[3];
            Object objValueOf = "";
            objArr[0] = fieldValue2 > 0 ? Integer.valueOf(fieldValue3) : "";
            objArr[1] = (fieldValue2 <= 0 || fieldValue4 == -1) ? "" : Float.valueOf(fieldValue4 / 4.0f);
            if (fieldValue2 > 0 && fieldValue5 != -1) {
                objValueOf = Float.valueOf(fieldValue5 / 4.0f);
            }
            objArr[2] = objValueOf;
            addData(objArr);
        }
    }
}
