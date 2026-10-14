package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class TddServingCellInfo extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_TDD_EM_CSCE_SERV_CELL_S_STATUS_IND, MDMContent.MSG_ID_TDD_EM_MEME_DCH_UMTS_CELL_INFO_IND};

    public TddServingCellInfo(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "4. UMTS TDD EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"UARFCN", "CellParamId", "RSCP"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "TD-SCDMA Serving Cell Info (UMTS TDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        if (str.equals(MDMContent.MSG_ID_TDD_EM_CSCE_SERV_CELL_S_STATUS_IND)) {
            addData(Integer.valueOf(getFieldValue(msg, "serv_cell.uarfcn_DL")), Integer.valueOf(getFieldValue(msg, "serv_cell.psc")), Float.valueOf(getFieldValue(msg, "serv_cell.rscp", true) / 4096.0f));
            return;
        }
        if (str.equals(MDMContent.MSG_ID_TDD_EM_MEME_DCH_UMTS_CELL_INFO_IND)) {
            for (int i = 0; i < 64; i++) {
                String str2 = "umts_cell_list[" + i + "].";
                int fieldValue = getFieldValue(msg, str2 + "UARFCN");
                int fieldValue2 = getFieldValue(msg, str2 + MDMContent.EM_MEME_DCH_UMTS_CELL_LIST_CELLPARAID);
                int fieldValue3 = getFieldValue(msg, str2 + "RSCP", true);
                if (getFieldValue(msg, str2 + MDMContent.EM_MEME_DCH_UMTS_CELL_LIST_IS_SERVING_CELL) != 0 && fieldValue3 > -120) {
                    addData(Integer.valueOf(fieldValue), Integer.valueOf(fieldValue2), Integer.valueOf(fieldValue3));
                }
            }
        }
    }
}
