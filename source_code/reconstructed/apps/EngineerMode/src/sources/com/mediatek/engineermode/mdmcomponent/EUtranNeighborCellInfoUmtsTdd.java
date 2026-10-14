package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class EUtranNeighborCellInfoUmtsTdd extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_TDD_EM_MEME_DCH_LTE_CELL_INFO_IND, MDMContent.MSG_ID_TDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND};

    public EUtranNeighborCellInfoUmtsTdd(Activity activity) {
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
        return new String[]{"EARFCN", "PCI", "RSRP", "RSRQ"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "E-UTRAN Neighbor Cell Info (UMTS TDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int i = 4;
        if (str.equals(MDMContent.MSG_ID_TDD_EM_MEME_DCH_LTE_CELL_INFO_IND)) {
            int fieldValue = getFieldValue(msg, "num_cells");
            clearData();
            for (int i2 = 0; i2 < fieldValue && i2 < 32; i2++) {
                addData(Integer.valueOf(getFieldValue(msg, "lte_cell_list[" + i2 + "].EARFCN")), Integer.valueOf(getFieldValue(msg, "lte_cell_list[" + i2 + "].PCI")), Integer.valueOf(getFieldValue(msg, "lte_cell_list[" + i2 + "].RSRP", true)), Integer.valueOf(getFieldValue(msg, "lte_cell_list[" + i2 + "].RSRQ", true)));
            }
            return;
        }
        if (str.equals(MDMContent.MSG_ID_TDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND)) {
            int fieldValue2 = getFieldValue(msg, "neigh_cell_count");
            if (getFieldValue(msg, "RAT_type") == 2) {
                clearData();
                int i3 = 0;
                while (i3 < fieldValue2 && i3 < 16) {
                    int fieldValue3 = getFieldValue(msg, "choice.LTE_neigh_cells[" + i3 + "].earfcn");
                    int fieldValue4 = getFieldValue(msg, "choice.LTE_neigh_cells[" + i3 + "].pci");
                    int fieldValue5 = getFieldValue(msg, "choice.LTE_neigh_cells[" + i3 + "].rsrp", true);
                    int fieldValue6 = getFieldValue(msg, "choice.LTE_neigh_cells[" + i3 + "].rsrq", true);
                    Object[] objArr = new Object[i];
                    objArr[0] = Integer.valueOf(fieldValue3);
                    objArr[1] = Integer.valueOf(fieldValue4);
                    objArr[2] = Float.valueOf(((float) fieldValue5) / 4.0f);
                    objArr[3] = Float.valueOf(((float) fieldValue6) / 4.0f);
                    addData(objArr);
                    i3++;
                    i = 4;
                }
            }
        }
    }
}
