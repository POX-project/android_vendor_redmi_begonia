package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class UmtsRrcMeasurementReportForE3c extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_TDD_EM_MEME_REPORT_INFO_IND};

    public UmtsRrcMeasurementReportForE3c(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "4. UMTS TDD EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"e3c meas ID"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "UMTS RRC Measurement report for e3c (UMTS TDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "em_report_info.MeasId");
        int fieldValue2 = getFieldValue(msg, "em_report_info.EventType");
        clearData();
        if (fieldValue2 == 3) {
            if (fieldValue == 0) {
                addData("-");
            } else {
                addData(Integer.valueOf(fieldValue));
            }
        }
        notifyDataSetChanged();
    }
}
