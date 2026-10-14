package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class InterFrequencyNeighbouringCellInformationLteTdd extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND};

    public InterFrequencyNeighbouringCellInformationLteTdd(Activity activity) {
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
        return new String[]{"EARFCN", "PCI", "RSCP", MDMContent.FDD_EM_MEME_DCH_UMTS_ECN0};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Inter-frequency neighbouring cell information (LTE TDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        String str2 = "inter_info.";
        int fieldValue = getFieldValue(msg, "inter_info.freq_num");
        int i = 0;
        while (i < fieldValue && i < 4) {
            String str3 = str2 + "inter_freq[" + i + "].";
            int fieldValue2 = getFieldValue(msg, str3 + "valid");
            int fieldValue3 = getFieldValue(msg, str3 + "earfcn");
            int fieldValue4 = getFieldValue(msg, str3 + "cell_num");
            int i2 = 0;
            while (i2 < fieldValue4 && i2 < 6) {
                String str4 = str3 + MDMContent.EM_ERRC_MOB_MEAS_INTRARAT_INTER_INFO_INTER_CELL + "[" + i2 + "].";
                int fieldValue5 = getFieldValue(msg, str4 + "pci");
                int fieldValue6 = getFieldValue(msg, str4 + "rsrp", true);
                StringBuilder sb = new StringBuilder();
                sb.append(str4);
                String str5 = str2;
                sb.append("rsrq");
                int fieldValue7 = getFieldValue(msg, sb.toString(), true);
                Msg msg2 = msg;
                Object[] objArr = new Object[4];
                Object objValueOf = "";
                objArr[0] = fieldValue2 > 0 ? Integer.valueOf(fieldValue3) : "";
                objArr[1] = fieldValue2 > 0 ? Integer.valueOf(fieldValue5) : "";
                objArr[2] = (fieldValue2 <= 0 || fieldValue6 == -1) ? "" : Float.valueOf(fieldValue6 / 4.0f);
                if (fieldValue2 > 0 && fieldValue7 != -1) {
                    objValueOf = Float.valueOf(fieldValue7 / 4.0f);
                }
                objArr[3] = objValueOf;
                addData(objArr);
                i2++;
                msg = msg2;
                str2 = str5;
            }
            i++;
            msg = msg;
            str2 = str2;
        }
    }
}
