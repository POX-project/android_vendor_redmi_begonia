package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class RRState extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_RRM_MEASUREMENT_REPORT_INFO_IND};
    private static final String[] LABELS = {"RR State"};
    private final Map<Integer, String> mRrStateMapping;

    public RRState(Activity activity) {
        super(activity);
        this.mRrStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.RRState.1
            {
                put(3, "Idle");
                put(5, "Packet Transfer");
                put(6, "Dedicated");
            }
        };
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
        return LABELS;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "RR State";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2 = this.mRrStateMapping.get(Integer.valueOf(getFieldValue((Msg) obj, "rr_em_measurement_report_info.rr_state")));
        clearData();
        addData(str2);
    }
}
