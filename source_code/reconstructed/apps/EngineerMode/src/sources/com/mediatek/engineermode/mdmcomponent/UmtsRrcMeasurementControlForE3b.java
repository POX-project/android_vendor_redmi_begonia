package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class UmtsRrcMeasurementControlForE3b extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_TDD_EM_MEME_EVENT_TYPE_3_PARAMETER_INFO_IND};
    HashMap<Integer, String> mQtyMapping;
    HashMap<Integer, String> mQtyOtherRatMapping;

    public UmtsRrcMeasurementControlForE3b(Activity activity) {
        super(activity);
        this.mQtyMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.UmtsRrcMeasurementControlForE3b.1
            {
                put(0, "-");
                put(1, "UMTS RSCP");
                put(2, "UMTS ECN0");
                put(3, "UMTS PATHLOSS");
            }
        };
        this.mQtyOtherRatMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.UmtsRrcMeasurementControlForE3b.2
            {
                put(0, "-");
                put(1, "GSM RSSI");
                put(2, "LTE RSRP");
                put(3, "LTE RSRQ");
            }
        };
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
        return new String[]{"e3b meas ID", "UMTS RAT meas quantity", "Other RAT meas quantity", "UMTS RAT threshold", "Other RAT threshold"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "UMTS RRC Measurement control for e3b (UMTS TDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "num_event_info");
        clearData();
        for (int i = 0; i < fieldValue && i < 4; i++) {
            int fieldValue2 = getFieldValue(msg, "em_event_info[" + i + "].MeasId");
            int fieldValue3 = getFieldValue(msg, "em_event_info[" + i + "].EventType");
            int fieldValue4 = getFieldValue(msg, "em_event_info[" + i + "].MeasQty");
            int fieldValue5 = getFieldValue(msg, "em_event_info[" + i + "].MeasQtyOtherRAT");
            int fieldValue6 = getFieldValue(msg, "em_event_info[" + i + "].ThresholdOwnSystem", true);
            int fieldValue7 = getFieldValue(msg, "em_event_info[" + i + "].ThresholdOtherSystem", true);
            if (fieldValue3 == 2) {
                if (fieldValue2 == 0) {
                    addData("-");
                } else {
                    addData(Integer.valueOf(fieldValue2));
                }
                addData(this.mQtyMapping.get(Integer.valueOf(fieldValue4)));
                addData(this.mQtyOtherRatMapping.get(Integer.valueOf(fieldValue5)));
                if (fieldValue6 == 65535) {
                    addData("-");
                } else {
                    addData(Float.valueOf(fieldValue6 / 4.0f));
                }
                if (fieldValue7 == 65535) {
                    addData("-");
                } else {
                    addData(Float.valueOf(fieldValue7 / 4.0f));
                }
            }
        }
        notifyDataSetChanged();
    }
}
