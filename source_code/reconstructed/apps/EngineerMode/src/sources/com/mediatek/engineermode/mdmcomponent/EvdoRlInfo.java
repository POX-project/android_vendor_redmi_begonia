package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.text.DecimalFormat;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class EvdoRlInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_EVDO_RL_INFO_IND};

    public EvdoRlInfo(Activity activity) {
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
        return new String[]{"averageTbsize", "rtcRetransmitCount", "rtcTransmitTotalCount", "txPower", "pilotPower", "rab_1_ratio"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EVDO RL info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "averageTbsize");
        int fieldValue2 = getFieldValue(msg, "rtcRetransmitCount");
        int fieldValue3 = getFieldValue(msg, "rtcTransmitTotalCount");
        int fieldValue4 = getFieldValue(msg, "txPower", true);
        int fieldValue5 = getFieldValue(msg, "pilotPower", true);
        int fieldValue6 = getFieldValue(msg, "rab_1_ratio");
        DecimalFormat decimalFormat = new DecimalFormat("#0.00");
        String str2 = decimalFormat.format(fieldValue4 / 128.0f);
        String str3 = decimalFormat.format(fieldValue5 / 128.0f);
        clearData();
        addData(Integer.valueOf(fieldValue));
        addData(Integer.valueOf(fieldValue2));
        addData(Integer.valueOf(fieldValue3));
        addData(str2);
        addData(str3);
        addData(Integer.valueOf(fieldValue6));
        notifyDataSetChanged();
    }
}
