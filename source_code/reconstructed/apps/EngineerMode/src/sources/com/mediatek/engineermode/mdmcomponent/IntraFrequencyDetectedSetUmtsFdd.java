package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class IntraFrequencyDetectedSetUmtsFdd extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND};

    public IntraFrequencyDetectedSetUmtsFdd(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "3. UMTS FDD EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"UARFCN", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "RSCP", MDMContent.FDD_EM_MEME_DCH_UMTS_ECN0};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Intra-frequency detected set (UMTS FDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "num_cells");
        clearData();
        for (int i = 0; i < fieldValue && i < 32; i++) {
            if (getFieldValue(msg, "umts_cell_list[" + i + "].cell_type") == 2) {
                addData(Integer.valueOf(getFieldValue(msg, "umts_cell_list[" + i + "].UARFCN")), Integer.valueOf(getFieldValue(msg, "umts_cell_list[" + i + "]." + MDMContent.FDD_EM_MEME_DCH_UMTS_PSC)), Long.valueOf(getFieldValue(msg, "umts_cell_list[" + i + "].RSCP", true)), Long.valueOf(getFieldValue(msg, "umts_cell_list[" + i + "]." + MDMContent.FDD_EM_MEME_DCH_UMTS_ECN0, true)));
            }
        }
    }
}
