package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class SecondHsDschServingCell extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_UL1_HSPA_INFO_GROUP_IND};

    public SecondHsDschServingCell(Activity activity) {
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

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"Dual Cell", "Freq", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "64 QAM"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "2nd HS-DSCH Serving Cell";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "secondary_hs_dsch_configuration_status." + MDMContent.FDD_EM_UL1_HSPA_PRIMARY_SEC_HS_DSCH_CONFIG_STATUS_DC_ON);
        int fieldValue2 = getFieldValue(msg, "secondary_hs_dsch_configuration_status." + MDMContent.FDD_EM_UL1_HSPA_PRIMARY_SEC_HS_DSCH_CONFIG_STATUS_DL_FREQ);
        int fieldValue3 = getFieldValue(msg, "secondary_hs_dsch_configuration_status.psc");
        int fieldValue4 = getFieldValue(msg, "secondary_hs_dsch_configuration_status." + MDMContent.FDD_EM_UL1_HSPA_PRIMARY_SEC_HS_DSCH_CONFIG_STATUS_DL_64QAM_ON);
        clearData();
        Object[] objArr = new Object[1];
        objArr[0] = Integer.valueOf(fieldValue > 0 ? 1 : 0);
        addData(objArr);
        addData(Integer.valueOf(fieldValue2));
        addData(Integer.valueOf(fieldValue3));
        Object[] objArr2 = new Object[1];
        objArr2[0] = Integer.valueOf(fieldValue4 <= 0 ? 0 : 1);
        addData(objArr2);
    }
}
