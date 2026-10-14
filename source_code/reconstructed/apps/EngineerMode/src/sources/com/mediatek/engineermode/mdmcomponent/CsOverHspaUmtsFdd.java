package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class CsOverHspaUmtsFdd extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_RRCE_CS_OVER_HSPA_STATUS_IND};
    HashMap<Boolean, String> mMapping;

    public CsOverHspaUmtsFdd(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Boolean, String>() { // from class: com.mediatek.engineermode.mdmcomponent.CsOverHspaUmtsFdd.1
            {
                put(false, "OFF");
                put(true, "ON");
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
        return new String[]{"CS over HSPA"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "CS over HSPA (UMTS FDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2 = this.mMapping.get(Integer.valueOf(getFieldValue((Msg) obj, MDMContent.EM_RRCE_CS_OVER_HSPA_CS_OVER_HSPA_STATUS)));
        clearData();
        addData(str2 == null ? "FALSE" : str2);
    }
}
