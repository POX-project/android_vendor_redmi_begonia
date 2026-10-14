package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class Cdma1xStatisticsInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_RTT_STAT_INFO_IND};

    public Cdma1xStatisticsInfo(Activity activity) {
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
        return new String[]{"total_msg", "error_msg", "acc_1", "acc_2", "acc_8", "dpchLoss_count", "dtchLoss_count", "idleHO_count", "hardHO_count", "interFreqldleHO_count", "silentryRetryTimeout_count", "T40_count", "T41_count"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "1xRTT statistics info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "total_msg");
        int fieldValue2 = getFieldValue(msg, "error_msg");
        int fieldValue3 = getFieldValue(msg, "acc_1");
        int fieldValue4 = getFieldValue(msg, "acc_2");
        int fieldValue5 = getFieldValue(msg, "acc_8");
        int fieldValue6 = getFieldValue(msg, "dpchLoss_count");
        int fieldValue7 = getFieldValue(msg, "dtchLoss_count");
        int fieldValue8 = getFieldValue(msg, "idleHO_count");
        int fieldValue9 = getFieldValue(msg, "hardHO_count");
        int fieldValue10 = getFieldValue(msg, "interFreqldleHO_count");
        int fieldValue11 = getFieldValue(msg, "silentryRetryTimeout_count", true);
        int fieldValue12 = getFieldValue(msg, "T40_count");
        int fieldValue13 = getFieldValue(msg, "T41_count");
        Elog.d("EmInfo/MDMComponent", "T41_count = " + fieldValue13);
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
        addData(Integer.valueOf(fieldValue11));
        addData(Integer.valueOf(fieldValue12));
        addData(Integer.valueOf(fieldValue13));
        notifyDataSetChanged();
    }
}
