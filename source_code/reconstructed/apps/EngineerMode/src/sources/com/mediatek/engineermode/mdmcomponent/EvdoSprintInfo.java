package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;
import java.text.NumberFormat;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class EvdoSprintInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_SPRINT_EVDO_INFO_IND};
    HashMap<Integer, String> AtMapping;

    public EvdoSprintInfo(Activity activity) {
        super(activity);
        this.AtMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EvdoSprintInfo.1
            {
                put(0, "INACTIVE");
                put(1, "ACQUISITION");
                put(2, "SYNC");
                put(3, "IDLE");
                put(4, "ACCESS");
                put(5, "CONNECTED");
                put(6, "STATE NUM");
            }
        };
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
        return new String[]{"DO_state", "Mac_index", "Channel", "Color_Code", "Sector_ID", "PN", "Rx_Pwr", "Rx_PER", MDMContent.PILOT_ENERGY, "DRC", "SINR", "AN_AAA", "IPv4_Address", "IPv6_Address"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EVDO Sprint info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "DO_state");
        int fieldValue2 = getFieldValue(msg, "Mac_index");
        int fieldValue3 = getFieldValue(msg, "Channel");
        int fieldValue4 = getFieldValue(msg, "Color_Code");
        char[] cArr = new char[34];
        for (int i = 0; i < 34; i++) {
            cArr[i] = (char) getFieldValue(msg, "Sector_ID[" + i + "]");
        }
        String str2 = new String(cArr);
        int fieldValue5 = getFieldValue(msg, "bandPNClass");
        int fieldValue6 = getFieldValue(msg, "Rx_Pwr", true) / 128;
        int fieldValue7 = getFieldValue(msg, "Rx_PER");
        NumberFormat percentInstance = NumberFormat.getPercentInstance();
        percentInstance.setMaximumFractionDigits(2);
        String str3 = percentInstance.format(((double) fieldValue7) / 25600.0d);
        int fieldValue8 = getFieldValue(msg, MDMContent.PILOT_ENERGY, true);
        int fieldValue9 = getFieldValue(msg, "DRC");
        int fieldValue10 = getFieldValue(msg, "SINR", true);
        int fieldValue11 = getFieldValue(msg, "AN_AAA");
        char[] cArr2 = new char[16];
        int i2 = 0;
        for (int i3 = 16; i2 < i3; i3 = 16) {
            cArr2[i2] = (char) getFieldValue(msg, "IPv4_Address[" + i2 + "]");
            i2++;
            fieldValue8 = fieldValue8;
        }
        int i4 = fieldValue8;
        String str4 = new String(cArr2);
        char[] cArr3 = new char[64];
        int i5 = 0;
        for (int i6 = 64; i5 < i6; i6 = 64) {
            cArr3[i5] = (char) getFieldValue(msg, "IPv6_Address[" + i5 + "]");
            i5++;
            str4 = str4;
        }
        String str5 = new String(cArr3);
        Elog.d("EmInfo/MDMComponent", "AN_AAA = " + fieldValue11);
        clearData();
        addData(this.AtMapping.get(Integer.valueOf(fieldValue)));
        addData(Integer.valueOf(fieldValue2));
        addData(Integer.valueOf(fieldValue3));
        addData(Integer.valueOf(fieldValue4));
        addData(str2);
        addData(Integer.valueOf(fieldValue5));
        addData(Integer.valueOf(fieldValue6));
        addData(str3);
        addData(Integer.valueOf(i4));
        addData(Integer.valueOf(fieldValue9));
        addData(Integer.valueOf(fieldValue10));
        addData(Integer.valueOf(fieldValue11));
        addData(str4);
        addData(str5);
        notifyDataSetChanged();
    }
}
