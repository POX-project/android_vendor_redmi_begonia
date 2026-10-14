package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class CarrierRSSIServing extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_RRM_MEASUREMENT_REPORT_INFO_IND};

    public CarrierRSSIServing(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "2. GSM EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"BCCH RLA(Dedicated)", "RLA", "Reported", "RX level full", "RX quality sub", "RX quality full"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Cell measurement (Serving)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        char c;
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_RR_STATE);
        int fieldValue2 = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERV_RLA_IN_QUARTER_DBM, true);
        int fieldValue3 = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERV_RLA_REPORTED_VALUE);
        int fieldValue4 = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERV_BCCH_RLA_VALID);
        int fieldValue5 = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERV_BCCH_RLA_IN_DEDI_STATE, true);
        int fieldValue6 = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERV_RLA_FULL_VALUE_IN_QUATER_DBM, true);
        int fieldValue7 = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERV_RXQUAL_SUB);
        int fieldValue8 = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERV_RXQUAL_FULL);
        clearData();
        if (fieldValue >= 3 && fieldValue <= 7) {
            if (fieldValue4 <= 0 || fieldValue5 == -1000) {
                addData("-");
            } else {
                addData(String.format("%.2f", Float.valueOf(fieldValue5 / 4.0f)));
            }
            if (fieldValue2 == -1000) {
                addData("-");
            } else {
                addData(String.format("%.2f", Float.valueOf(fieldValue2 / 4.0f)));
            }
            if (fieldValue2 == -1000) {
                addData("-");
            } else {
                addData(Integer.valueOf(fieldValue3));
            }
            if (fieldValue != 6) {
                addData("-");
            } else {
                addData(String.format("%.2f", Float.valueOf(fieldValue6 / 4.0f)));
            }
            if (fieldValue7 == 255) {
                addData("-");
                c = 0;
            } else {
                c = 0;
                addData(Integer.valueOf(fieldValue7));
            }
            if (fieldValue8 == 255) {
                addData("-");
            } else {
                Object[] objArr = new Object[1];
                objArr[c] = Integer.valueOf(fieldValue8);
                addData(objArr);
            }
        }
        notifyDataSetChanged();
    }
}
