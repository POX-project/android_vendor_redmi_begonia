package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class HsDschModulationPrimaryCell extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_UL1_HSPA_INFO_GROUP_IND};
    HashMap<Integer, String> mMapping;

    public HsDschModulationPrimaryCell(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.HsDschModulationPrimaryCell.1
            {
                put(0, "QPSK (0)");
                put(1, "16QAM (1)");
                put(2, "64QAM (2)");
            }
        };
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "3. UMTS FDD EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"Modulation (Pri)"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "HS-DSCH Modulation (Primary Cell)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        int fieldValue = getFieldValue((Msg) obj, "primary_hs_dsch_bler." + MDMContent.FDD_EM_UL1_HSPA_DSCH_CURR_MOD);
        clearData();
        addData(this.mMapping.get(Integer.valueOf(fieldValue)));
    }
}
