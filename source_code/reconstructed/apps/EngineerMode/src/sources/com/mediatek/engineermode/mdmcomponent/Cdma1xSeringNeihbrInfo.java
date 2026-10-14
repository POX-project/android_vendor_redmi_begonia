package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class Cdma1xSeringNeihbrInfo extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_RTT_SERVING_NEIGHBR_SET_INFO_IND};

    public Cdma1xSeringNeihbrInfo(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "7. CDMA EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"pn", "ecio", "phase"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "1xRTT Serving/Neighbr info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        float f;
        Msg msg = (Msg) obj;
        int[] iArr = new int[3];
        clearData();
        int fieldValue = getFieldValue(msg, "num_in_active_set");
        int fieldValue2 = getFieldValue(msg, "num_candidate_set");
        int fieldValue3 = getFieldValue(msg, "num_neighbor_set");
        addData("in_active_set(" + fieldValue + ")");
        int i = 0;
        while (true) {
            f = 2.0f;
            if (i >= fieldValue) {
                break;
            }
            iArr[0] = getFieldValue(msg, "in_active_set[" + i + "].pilot_pn");
            iArr[1] = getFieldValue(msg, "in_active_set[" + i + "].pilot_ecio");
            float f2 = -(((float) iArr[1]) / 2.0f);
            iArr[2] = getFieldValue(msg, "in_active_set[" + i + "].pilot_phase");
            addData(Integer.valueOf(iArr[0]), Float.valueOf(f2), Integer.valueOf(iArr[2]));
            i++;
        }
        addData("candidate_set(" + fieldValue2 + ")");
        int i2 = 0;
        while (i2 < fieldValue2) {
            iArr[0] = getFieldValue(msg, "candidate_set[" + i2 + "].pilot_pn");
            iArr[1] = getFieldValue(msg, "candidate_set[" + i2 + "].pilot_ecio");
            float f3 = -(((float) iArr[1]) / f);
            iArr[2] = getFieldValue(msg, "candidate_set[" + i2 + "].pilot_phase");
            addData(Integer.valueOf(iArr[0]), Float.valueOf(f3), Integer.valueOf(iArr[2]));
            i2++;
            f = 2.0f;
        }
        addData("neighbor_set(" + fieldValue3 + ")");
        for (int i3 = 0; i3 < fieldValue3; i3++) {
            iArr[0] = getFieldValue(msg, "neighbor_set[" + i3 + "].pilot_pn");
            iArr[1] = getFieldValue(msg, "neighbor_set[" + i3 + "].pilot_ecio");
            float f4 = -(((float) iArr[1]) / 2.0f);
            iArr[2] = getFieldValue(msg, "neighbor_set[" + i3 + "].pilot_phase");
            addData(Integer.valueOf(iArr[0]), Float.valueOf(f4), Integer.valueOf(iArr[2]));
        }
        Elog.d("EmInfo/MDMComponent", "num_neighbor_set = " + fieldValue3);
    }
}
