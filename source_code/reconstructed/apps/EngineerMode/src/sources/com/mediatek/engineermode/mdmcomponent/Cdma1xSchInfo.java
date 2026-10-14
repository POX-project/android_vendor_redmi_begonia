package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class Cdma1xSchInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_RTT_SCH_INFO_IND};

    public Cdma1xSchInfo(Activity activity) {
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

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"for_sch_mux", "for_sch_rc", "for_sch_status", "for_sch_duration", "for_sch_rate", "rev_sch_mux", "rev_sch_rc", "rev_sch_status", "rev_sch_duration", "rev_sch_rate"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "1xRTT SCH info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "for_sch_mux");
        int fieldValue2 = getFieldValue(msg, "for_sch_rc");
        int fieldValue3 = getFieldValue(msg, "for_sch_status");
        int fieldValue4 = getFieldValue(msg, "for_sch_duration");
        int fieldValue5 = getFieldValue(msg, "for_sch_rate");
        int fieldValue6 = getFieldValue(msg, "rev_sch_mux");
        int fieldValue7 = getFieldValue(msg, "rev_sch_rc");
        int fieldValue8 = getFieldValue(msg, "rev_sch_status");
        int fieldValue9 = getFieldValue(msg, "rev_sch_duration");
        int fieldValue10 = getFieldValue(msg, "rev_sch_rate");
        Elog.d("EmInfo/MDMComponent", "rev_sch_rate = " + fieldValue10);
        clearData();
        addData(Integer.valueOf(fieldValue));
        addData(Integer.valueOf(fieldValue2));
        addData(Integer.valueOf(fieldValue3));
        addData(Integer.valueOf(fieldValue4));
        addData(Integer.valueOf(fieldValue5));
        addData(Integer.valueOf(fieldValue6));
        addData(Integer.valueOf(fieldValue7));
        addData(Integer.valueOf(fieldValue8));
        addData(Integer.valueOf(fieldValue9));
        addData(Integer.valueOf(fieldValue10));
        notifyDataSetChanged();
    }
}
