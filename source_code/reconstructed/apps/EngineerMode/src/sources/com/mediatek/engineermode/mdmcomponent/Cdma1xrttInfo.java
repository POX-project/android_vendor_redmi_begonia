package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.support.v4.app.NotificationManagerCompat;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class Cdma1xrttInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_RTT_INFO_IND};
    HashMap<Integer, String> CPMapping;
    HashMap<Integer, String> StateMapping;
    HashMap<Integer, String> ValueMapping;

    public Cdma1xrttInfo(Activity activity) {
        super(activity);
        this.StateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.Cdma1xrttInfo.1
            {
                put(0, "CALIBRATED");
                put(1, "NOT_CALIBRATED");
                put(2, "FILE_NOT_EXIST");
            }
        };
        this.ValueMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.Cdma1xrttInfo.2
            {
                put(0, "FALSE");
                put(1, "TRUE");
            }
        };
        this.CPMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.Cdma1xrttInfo.3
            {
                put(0, "CP_DISABLED");
                put(1, "CP_SYS_DETERMINATION");
                put(2, "CP_PILOT_ACQUISITION");
                put(3, "CP_SYNC_ACQUISITION");
                put(4, "CP_TIMING_CHANGE");
                put(5, "CP_IDLE");
                put(6, "CP_UPDATE_OHD_INFO");
                put(7, "CP_ORD_MSG_RESP");
                put(8, "CP_ORIGINATION");
                put(9, "CP_REGISTRATION");
                put(10, "CP_MSG_TRANSMISSION");
                put(11, "CP_TC_INIT");
                put(12, "CP_TC_WAIT_ORDER");
                put(13, "CP_TC_WAIT_ANSWER");
                put(14, "CP_TC_CONVERSATION");
                put(15, "CP_TC_RELEASE");
                put(16, "CP_NST");
                put(17, "CP_FROZEN");
                put(18, "CP_TC_FROZEN");
            }
        };
    }

    private String decodeMcc(int i) {
        int i2 = i + 111;
        if (i2 % 10 == 0) {
            i2 -= 10;
        }
        if ((i2 / 10) % 10 == 0) {
            i2 -= 100;
        }
        if ((i2 / 100) % 10 == 0) {
            i2 += NotificationManagerCompat.IMPORTANCE_UNSPECIFIED;
        }
        return ("000" + i2).substring(String.valueOf(i2).length());
    }

    private String decodeMnc(int i) {
        int i2 = i + 11;
        if (i2 % 10 == 0) {
            i2 -= 10;
        }
        if ((i2 / 10) % 10 == 0) {
            i2 -= 100;
        }
        return ("00" + i2).substring(String.valueOf(i2).length());
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
        return new String[]{"cp_state", "rf_file_cal_state", "RfFileMajorVersion", "RfFileMinorVersion", "RfFileValueVersion", "RfFileCustVersion", "sid", "nid", "sys_det_ind", "reg_zone", "base_lat", "base_long", "nwk_pref_sci", "qpch_mode", "mcc", "imsi_11_12", "pkt_zone_id", "service_option", "t_add", "t_drop", "t_comp", "t_tdrop"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "1xRTT info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "cp_state");
        int fieldValue2 = getFieldValue(msg, "rf_file_cal_state");
        int fieldValue3 = getFieldValue(msg, "rf_file_ver.major_ver");
        int fieldValue4 = getFieldValue(msg, "rf_file_ver.minor_ver");
        int fieldValue5 = getFieldValue(msg, "rf_file_ver.value_ver");
        int fieldValue6 = getFieldValue(msg, "rf_file_ver.cust_ver");
        int fieldValue7 = getFieldValue(msg, "sid");
        int fieldValue8 = getFieldValue(msg, "nid");
        int fieldValue9 = getFieldValue(msg, "sys_det_ind");
        int fieldValue10 = getFieldValue(msg, "reg_zone");
        int fieldValue11 = getFieldValue(msg, "base_lat");
        int fieldValue12 = getFieldValue(msg, "base_long");
        int fieldValue13 = getFieldValue(msg, "nwk_pref_sci");
        int fieldValue14 = getFieldValue(msg, "qpch_mode");
        int fieldValue15 = getFieldValue(msg, "mcc");
        int fieldValue16 = getFieldValue(msg, "imsi_11_12");
        int fieldValue17 = getFieldValue(msg, "pkt_zone_id");
        int fieldValue18 = getFieldValue(msg, "service_option");
        int fieldValue19 = getFieldValue(msg, "t_add");
        int fieldValue20 = getFieldValue(msg, "t_drop");
        int fieldValue21 = getFieldValue(msg, "t_comp");
        int fieldValue22 = getFieldValue(msg, "t_tdrop");
        Elog.d("EmInfo/MDMComponent", "t_tdrop = " + fieldValue22);
        clearData();
        addData(this.CPMapping.get(Integer.valueOf(fieldValue)));
        addData(this.StateMapping.get(Integer.valueOf(fieldValue2)));
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
        addData(this.ValueMapping.get(Integer.valueOf(fieldValue14)));
        addData(decodeMcc(fieldValue15));
        addData(decodeMnc(fieldValue16));
        addData(Integer.valueOf(fieldValue17));
        addData(Integer.valueOf(fieldValue18));
        addData(Float.valueOf(fieldValue19 / (-2.0f)));
        addData(Float.valueOf(fieldValue20 / (-2.0f)));
        addData(Integer.valueOf(fieldValue21));
        addData(Integer.valueOf(fieldValue22));
        notifyDataSetChanged();
    }
}
