package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class LteErrcMeasurementConfigForEventB1 extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_CONFIG_INFO_IND};
    HashMap<Integer, String> mMapping;

    public LteErrcMeasurementConfigForEventB1(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.LteErrcMeasurementConfigForEventB1.1
            {
                put(0, "-");
                put(1, "GSM RSSI");
                put(2, "UMTS RSCP");
                put(3, "UMTS ECN0");
            }
        };
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
        return new String[]{"Event B1 meas ID", "Other RAT meas quantity", "Other RAT threshold"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE ERRC Measurement config for event B1";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "num_event_info");
        clearData();
        for (int i = 0; i < fieldValue && i < 2; i++) {
            if (getFieldValue(msg, "em_event_info[" + i + "].EventType") == 1) {
                int fieldValue2 = getFieldValue(msg, "em_event_info[" + i + "].MeasId");
                int fieldValue3 = getFieldValue(msg, "em_event_info[" + i + "].MeasQtyOtherRAT");
                int fieldValue4 = getFieldValue(msg, "em_event_info[" + i + "].ThresholdOtherSystem", true);
                Object[] objArr = new Object[3];
                objArr[0] = fieldValue2 == 0 ? "-" : Integer.valueOf(fieldValue2);
                objArr[1] = this.mMapping.get(Integer.valueOf(fieldValue3));
                objArr[2] = fieldValue4 != 0 ? Float.valueOf(fieldValue4 / 4.0f) : "-";
                addData(objArr);
            }
        }
    }
}
