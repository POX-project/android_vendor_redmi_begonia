package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class RsrpLteCandidateCellUmtsFddArray extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND};

    public RsrpLteCandidateCellUmtsFddArray(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"RSRP (LTE)", "Earfcn", "PCI", "RSRP"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "RSRP (LTE candidate cell)(UMTS FDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        if (getFieldValue(msg, "RAT_type") == 2) {
            int fieldValue = getFieldValue(msg, "neigh_cell_count");
            for (int i = 0; i < fieldValue && i < 16; i++) {
                addData(Integer.valueOf(getFieldValue(msg, "choice.LTE_neigh_cells[" + i + "].earfcn")), Integer.valueOf(getFieldValue(msg, "choice.LTE_neigh_cells[" + i + "].pci")), Float.valueOf(getFieldValue(msg, "choice.LTE_neigh_cells[" + i + "].rsrp", true) / 4096.0f));
            }
        }
    }
}
