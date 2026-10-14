package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class UtraTddNeighbouringCellInformation extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTERRAT_UTRAN_INFO_IND};

    public UtraTddNeighbouringCellInformation(Activity activity) {
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
        return new String[]{"UARFCN", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "RSCP", "EcN0"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "UTRA-TDD neighbouring cell information";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        int fieldValue = getFieldValue(msg, "freq_num");
        Elog.d("EmInfo/MDMComponent", " freqNum: " + fieldValue);
        int i = 0;
        while (i < fieldValue && i < 16) {
            int fieldValue2 = getFieldValue(msg, "inter_freq[" + i + "].valid");
            int fieldValue3 = getFieldValue(msg, "inter_freq[" + i + "].uarfcn");
            int fieldValue4 = getFieldValue(msg, "inter_freq[" + i + "]." + MDMContent.ERRC_MOB_MEAS_INTERRAT_UTRAN_UCELL_NUM);
            String str2 = "inter_freq[" + i + "]." + MDMContent.ERRC_MOB_MEAS_INTERRAT_UTRAN_UCELL + "[";
            int i2 = 0;
            while (i2 < fieldValue4 && i2 < 6) {
                int fieldValue5 = getFieldValue(msg, str2 + i2 + "].valid");
                int fieldValue6 = getFieldValue(msg, str2 + i2 + "].psc");
                int fieldValue7 = getFieldValue(msg, str2 + i2 + "].rscp");
                StringBuilder sb = new StringBuilder();
                sb.append(str2);
                sb.append(i2);
                sb.append("].");
                int i3 = fieldValue;
                sb.append(MDMContent.ERRC_MOB_MEAS_INTERRAT_UTRAN_UCELL_EC_N0);
                int fieldValue8 = getFieldValue(msg, sb.toString());
                Object[] objArr = new Object[4];
                Object objValueOf = "";
                objArr[0] = fieldValue2 > 0 ? Integer.valueOf(fieldValue3) : "";
                objArr[1] = fieldValue5 > 0 ? Integer.valueOf(fieldValue6) : "";
                Msg msg2 = msg;
                objArr[2] = (fieldValue5 <= 0 || fieldValue7 == -1) ? "" : Float.valueOf(fieldValue7 / 4.0f);
                if (fieldValue5 > 0 && fieldValue8 != -1) {
                    objValueOf = Float.valueOf(fieldValue8 / 4.0f);
                }
                objArr[3] = objValueOf;
                addData(objArr);
                i2++;
                fieldValue = i3;
                msg = msg2;
            }
            i++;
            fieldValue = fieldValue;
            msg = msg;
        }
    }
}
