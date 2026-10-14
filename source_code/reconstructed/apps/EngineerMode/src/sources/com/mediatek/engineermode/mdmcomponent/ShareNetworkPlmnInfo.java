package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class ShareNetworkPlmnInfo extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_NWSEL_PLMN_INFO_IND};
    HashMap<Integer, String> mMapping;

    public ShareNetworkPlmnInfo(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.ShareNetworkPlmnInfo.1
            {
                put(0, "CELL_TYPE_SUITABLE");
                put(1, "CELL_TYPE_ACCEPTABLE");
                put(2, "CELL_TYPE_CAMPED_NOT_ALLOWED");
                put(3, "CELL_TYPE_NOT_APPLICABLE");
            }
        };
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "1. General EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"", "MCC1", "MCC2", "MCC3", "MNC1", "MNC2", "MNC3", "CELL TYPE"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Share Network PLMN Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "multi_plmn_count");
        clearData();
        for (int i = 0; i < fieldValue && i < 6; i++) {
            addData("PLMN" + (i + 1), String.format("%X", Integer.valueOf(getFieldValue(msg, "multi_plmn_id[" + i + "].mcc1"))), String.format("%X", Integer.valueOf(getFieldValue(msg, "multi_plmn_id[" + i + "].mcc2"))), String.format("%X", Integer.valueOf(getFieldValue(msg, "multi_plmn_id[" + i + "].mcc3"))), String.format("%X", Integer.valueOf(getFieldValue(msg, "multi_plmn_id[" + i + "].mnc1"))), String.format("%X", Integer.valueOf(getFieldValue(msg, "multi_plmn_id[" + i + "].mnc2"))), String.format("%X", Integer.valueOf(getFieldValue(msg, "multi_plmn_id[" + i + "].mnc3"))), this.mMapping.get(Integer.valueOf(getFieldValue(msg, "multi_plmn_id[" + i + "].cell_type"))));
        }
    }
}
