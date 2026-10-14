package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class EvdoServingInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_EVDO_SERVING_INFO_IND};

    public EvdoServingInfo(Activity activity) {
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
        return new String[]{"bandClass", "Channel", "pilotPN", "PhySubtype", "rssi_dbm", "div_rssi", "tx_Ant", "SectorID", "SubnetMask", "ColorCode", "UATI", "PilotInc", "ActiveSetWindow", "NeighborSetWindow", "RemainSetWindow", "sameFreq_T_ADD", "sameFreq_T_DROP", "sameFreq_T_tDROP", "diffFreq_T_ADD", "diffFreq_T_DROP", "diffFreq_T_tDROP"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EVDO Serving Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, MDMContent.C2K_L4_BAND_CLASS);
        int fieldValue2 = getFieldValue(msg, MDMContent.C2K_L4_CHANNEL);
        int fieldValue3 = getFieldValue(msg, "pilotPN");
        int fieldValue4 = getFieldValue(msg, "phy_subtype", true);
        int fieldValue5 = getFieldValue(msg, "rssi_dbm", true) / 128;
        int fieldValue6 = getFieldValue(msg, "div_rssi", true) / 128;
        int fieldValue7 = getFieldValue(msg, "tx_ant_id", true);
        char[] cArr = new char[34];
        for (int i = 0; i < 34; i++) {
            cArr[i] = (char) getFieldValue(msg, "sectorlD[" + i + "]");
        }
        String str2 = new String(cArr);
        int fieldValue8 = getFieldValue(msg, "subnetMask");
        int fieldValue9 = getFieldValue(msg, "colorCode", true);
        char[] cArr2 = new char[34];
        int i2 = 0;
        for (int i3 = 34; i2 < i3; i3 = 34) {
            cArr2[i2] = (char) getFieldValue(msg, "uati[" + i2 + "]");
            i2++;
            fieldValue9 = fieldValue9;
        }
        int i4 = fieldValue9;
        String str3 = new String(cArr2);
        int fieldValue10 = getFieldValue(msg, "pilotlnc", true);
        int fieldValue11 = getFieldValue(msg, "activeSetSchWin", true);
        int fieldValue12 = getFieldValue(msg, "neighborSetSchWin", true);
        int fieldValue13 = getFieldValue(msg, "remainSetSchWin");
        int fieldValue14 = getFieldValue(msg, "sameFreq_T_ADD", true);
        int fieldValue15 = getFieldValue(msg, "sameFreq_T_DROP", true);
        int fieldValue16 = getFieldValue(msg, "sameFreq_T_tDROP", true);
        int fieldValue17 = getFieldValue(msg, "diffFreq_T_ADD", true);
        int fieldValue18 = getFieldValue(msg, "diffFreq_T_DROP", true);
        int fieldValue19 = getFieldValue(msg, "diffFreq_T_tDROP", true);
        Elog.d("EmInfo/MDMComponent", "band_class = " + fieldValue);
        clearData();
        addData(Integer.valueOf(fieldValue));
        addData(Integer.valueOf(fieldValue2));
        addData(Integer.valueOf(fieldValue3));
        addData(Integer.valueOf(fieldValue4));
        addData(Integer.valueOf(fieldValue5));
        addData(Integer.valueOf(fieldValue6));
        addData(Integer.valueOf(fieldValue7));
        addData(str2);
        addData(Integer.valueOf(fieldValue8));
        addData(Integer.valueOf(i4));
        addData(str3);
        addData(Integer.valueOf(fieldValue10));
        addData(Integer.valueOf(fieldValue11));
        addData(Integer.valueOf(fieldValue12));
        addData(Integer.valueOf(fieldValue13));
        addData(Float.valueOf(fieldValue14 / (-2.0f)));
        addData(Float.valueOf(fieldValue15 / (-2.0f)));
        addData(Integer.valueOf(fieldValue16));
        addData(Float.valueOf(fieldValue17 / (-2.0f)));
        addData(Float.valueOf(fieldValue18 / (-2.0f)));
        addData(Integer.valueOf(fieldValue19));
        notifyDataSetChanged();
    }
}
