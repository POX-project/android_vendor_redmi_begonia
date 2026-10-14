package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class GeranNeighborCellInfoUmtsTdd extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_TDD_EM_MEME_DCH_GSM_CELL_INFO_IND, MDMContent.MSG_ID_TDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND};
    HashMap<Integer, String> mMapping;

    public GeranNeighborCellInfoUmtsTdd(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.GeranNeighborCellInfoUmtsTdd.1
            {
                put(0, "dcs1800");
                put(1, "pcs1900");
            }
        };
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "4. UMTS TDD EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"BSIC", "Frequency band", "BCCH ARFCN"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "GERAN Neighbor Cell Info (UMTS TDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        String str2 = "";
        if (!str.equals(MDMContent.MSG_ID_TDD_EM_MEME_DCH_GSM_CELL_INFO_IND)) {
            if (str.equals(MDMContent.MSG_ID_TDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND)) {
                String str3 = "choice.GSM_neigh_cells";
                int fieldValue = getFieldValue(msg, "neigh_cell_count");
                clearData();
                int i = 0;
                while (i < fieldValue && i < 16) {
                    int fieldValue2 = getFieldValue(msg, str3 + "[" + i + "].arfcn");
                    int fieldValue3 = getFieldValue(msg, str3 + "[" + i + "].bsic");
                    Msg msg2 = msg;
                    String str4 = str3;
                    String str5 = this.mMapping.get(Integer.valueOf(getFieldValue(msg, str3 + "[" + i + "]." + MDMContent.EM_CSCE_NEIGH_CELL_CHOICE_GSM_NEIGH_CELLS_FREQ_BAND)));
                    int i2 = fieldValue;
                    Object[] objArr = new Object[3];
                    objArr[0] = "bcc: " + (fieldValue3 & 7) + " ncc: " + ((fieldValue3 >> 3) & 7);
                    objArr[1] = str5 == null ? "" : str5;
                    objArr[2] = String.valueOf(fieldValue2);
                    addData(objArr);
                    i++;
                    fieldValue = i2;
                    msg = msg2;
                    str3 = str4;
                }
                return;
            }
            return;
        }
        String str6 = "gsm_cell_list";
        int fieldValue4 = getFieldValue(msg, "num_cells");
        clearData();
        int i3 = 0;
        while (i3 < fieldValue4 && i3 < 6) {
            int fieldValue5 = getFieldValue(msg, str6 + "[" + i3 + "]." + MDMContent.EM_MEME_DCH_GSM_CELL_LIST_FREQUENCY_BAND);
            int fieldValue6 = getFieldValue(msg, str6 + "[" + i3 + "].arfcn");
            int fieldValue7 = getFieldValue(msg, str6 + "[" + i3 + "].bsic");
            String str7 = str6;
            int i4 = fieldValue7 & 7;
            String str8 = str2;
            int i5 = (fieldValue7 >> 3) & 7;
            int i6 = fieldValue4;
            String str9 = this.mMapping.get(Integer.valueOf(fieldValue5));
            Object[] objArr2 = new Object[3];
            objArr2[0] = "bcc: " + i4 + " ncc: " + i5;
            objArr2[1] = str9 == null ? str8 : str9;
            objArr2[2] = String.valueOf(fieldValue6);
            addData(objArr2);
            i3++;
            str6 = str7;
            str2 = str8;
            fieldValue4 = i6;
        }
    }
}
