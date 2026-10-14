package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class UmtsNeighborCellInfoGsmTdd extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_RRM_IR_3G_NEIGHBOR_MEAS_STATUS_IND};
    HashMap<Integer, String> mCellTypeMapping;
    HashMap<Integer, String> mFailTypeMapping;

    public UmtsNeighborCellInfoGsmTdd(Activity activity) {
        super(activity);
        this.mCellTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.UmtsNeighborCellInfoGsmTdd.1
            {
                put(0, "NORMAL");
                put(1, "CSG");
                put(2, "HYBRID");
            }
        };
        this.mFailTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.UmtsNeighborCellInfoGsmTdd.2
            {
                put(0, "IR_INITIAL_VALUE");
                put(1, "NEVER_ALLOWED");
                put(2, "PLMN_ID_MISMATCHED");
                put(3, "LA_NOT_ALLOWED");
                put(4, "CELL_BARRED");
                put(5, "TEMP_FAILURE");
                put(6, "CRITERIA3_NOT_SATISFIED");
                put(7, "TA_NOT_ALLOWED");
                put(8, "CELL_BARRED_FREQ");
                put(9, "CELL_BARRED_RESV_OPERATOR");
                put(10, "CELL_BARRED_RESV_OPERATOR_FREQ");
                put(11, "CSG_NOT_ALLOWED");
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
        return new String[]{"cell_type", "uarfcn", MDMContent.RRM_IR_3G_NEIGHBOR_MEAS_STATUS_PHY_ID, MDMContent.RRM_IR_3G_NEIGHBOR_MEAS_STATUS_STRENGTH, MDMContent.RRM_IR_3G_NEIGHBOR_MEAS_STATUS_QUALITY, "rep_value", "non_rep_value", "fail_type"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "UMTS Neighbor Cell Info (GSM TDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        for (int i = 0; i < 6; i++) {
            if (getFieldValue(msg, "ir_3g_neighbor_meas_status[" + i + "].is_valid") > 0) {
                int fieldValue = getFieldValue(msg, "ir_3g_neighbor_meas_status[" + i + "].cell_type");
                int fieldValue2 = getFieldValue(msg, "ir_3g_neighbor_meas_status[" + i + "].fail_type");
                String str2 = this.mCellTypeMapping.get(Integer.valueOf(fieldValue));
                String str3 = this.mFailTypeMapping.get(Integer.valueOf(fieldValue2));
                addData(str2);
                addData(Integer.valueOf(getFieldValue(msg, "ir_3g_neighbor_meas_status[" + i + "].uarfcn")));
                addData(Integer.valueOf(getFieldValue(msg, "ir_3g_neighbor_meas_status[" + i + "]." + MDMContent.RRM_IR_3G_NEIGHBOR_MEAS_STATUS_PHY_ID)));
                addData(Integer.valueOf(getFieldValue(msg, "ir_3g_neighbor_meas_status[" + i + "]." + MDMContent.RRM_IR_3G_NEIGHBOR_MEAS_STATUS_STRENGTH, true)));
                addData(Integer.valueOf(getFieldValue(msg, "ir_3g_neighbor_meas_status[" + i + "]." + MDMContent.RRM_IR_3G_NEIGHBOR_MEAS_STATUS_QUALITY, true)));
                addData(Integer.valueOf(getFieldValue(msg, "ir_3g_neighbor_meas_status[" + i + "].rep_value")));
                addData(Integer.valueOf(getFieldValue(msg, "ir_3g_neighbor_meas_status[" + i + "].non_rep_value")));
                addData(str3);
            }
        }
        notifyDataSetChanged();
    }
}
