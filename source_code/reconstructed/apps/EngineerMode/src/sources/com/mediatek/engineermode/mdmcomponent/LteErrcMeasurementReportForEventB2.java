package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class LteErrcMeasurementReportForEventB2 extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_REPORT_INFO_IND};

    public LteErrcMeasurementReportForEventB2(Activity activity) {
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
        return new String[]{"Event B2 meas ID"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE ERRC Measurement report for event B2";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        if (getFieldValue(msg, "em_report_info.EventType") == 2) {
            int fieldValue = getFieldValue(msg, "em_report_info.MeasId");
            Object[] objArr = new Object[1];
            objArr[0] = fieldValue == 0 ? "-" : Integer.valueOf(fieldValue);
            addData(objArr);
        }
    }
}
