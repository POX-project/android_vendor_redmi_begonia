package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class LTENeighborCellInfoGSM extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_RRM_IR_4G_NEIGHBOR_MEAS_STATUS_IND};
    HashMap<Integer, String> mBandTypeMapping;
    HashMap<Integer, String> mCellTypeMapping;
    HashMap<Integer, String> mFailTypeMapping;

    public LTENeighborCellInfoGSM(Activity activity) {
        super(activity);
        this.mCellTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.LTENeighborCellInfoGSM.1
            {
                put(0, "Normal");
                put(1, "CSG");
                put(2, "Hybrid");
            }
        };
        this.mBandTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.LTENeighborCellInfoGSM.2
            {
                put(0, "-");
                put(1, "FDD");
                put(2, "TDD");
            }
        };
        this.mFailTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.LTENeighborCellInfoGSM.3
            {
                put(0, "None");
                put(1, "Never");
                put(2, "PLMN");
                put(3, "LA");
                put(4, "C_BAR");
                put(5, "TEMP");
                put(6, "CRI3");
                put(7, "TA");
                put(8, "FREQ");
                put(9, "RES_OP");
                put(10, "RES_OP_FRE");
                put(11, "CSG");
                put(12, "GEMINI");
                put(13, "NAS");
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
        return new String[]{"cell_type", "earfcn", "pci", MDMContent.EM_RRM_IR_4G_NEIGHBOR_MEAS_BAND_TYPE, "rsrp", "rsrq", "rep_value", "non_rep_value", "fail_type"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE Neighbor Cell Info (GSM)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        String str2 = "ir_4g_neighbor_meas_status[";
        clearData();
        int i = 0;
        while (i < 6) {
            int fieldValue = getFieldValue(msg, str2 + i + "].is_valid");
            int fieldValue2 = getFieldValue(msg, str2 + i + "].cell_type");
            long fieldValue3 = getFieldValue(msg, str2 + i + "].earfcn");
            int fieldValue4 = getFieldValue(msg, str2 + i + "].pci");
            int fieldValue5 = getFieldValue(msg, str2 + i + "]." + MDMContent.EM_RRM_IR_4G_NEIGHBOR_MEAS_BAND_TYPE);
            int fieldValue6 = getFieldValue(msg, str2 + i + "].rsrp", true);
            int fieldValue7 = getFieldValue(msg, str2 + i + "].rsrq", true);
            int fieldValue8 = getFieldValue(msg, str2 + i + "].rep_value");
            int fieldValue9 = getFieldValue(msg, str2 + i + "].non_rep_value");
            int fieldValue10 = getFieldValue(msg, str2 + i + "].fail_type");
            if (fieldValue > 0) {
                String str3 = this.mCellTypeMapping.get(Integer.valueOf(fieldValue2));
                String str4 = this.mBandTypeMapping.get(Integer.valueOf(fieldValue5));
                String str5 = this.mFailTypeMapping.get(Integer.valueOf(fieldValue10));
                addData(str3);
                addData(Long.valueOf(fieldValue3));
                addData(Integer.valueOf(fieldValue4));
                addData(str4);
                addData(Integer.valueOf(fieldValue6));
                addData(Integer.valueOf(fieldValue7));
                addData(Integer.valueOf(fieldValue8));
                addData(Integer.valueOf(fieldValue9));
                addData(str5);
            }
            i++;
            msg = msg;
            str2 = str2;
        }
        notifyDataSetChanged();
    }
}
