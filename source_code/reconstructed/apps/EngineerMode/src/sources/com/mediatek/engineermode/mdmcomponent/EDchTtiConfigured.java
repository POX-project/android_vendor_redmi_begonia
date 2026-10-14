package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class EDchTtiConfigured extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_RRCE_HSPA_CONFIG_IND};
    HashMap<Integer, String> mMapping;

    public EDchTtiConfigured(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EDchTtiConfigured.1
            {
                put(0, "2 ms");
                put(1, "10 ms");
                put(255, "N/A");
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
        return new String[]{"E-DCH TTI"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "E-DCH TTI Configured";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2 = this.mMapping.get(Integer.valueOf(getFieldValue((Msg) obj, MDMContent.EM_ERRC_HSPA_E_DCH_TTI)));
        clearData();
        addData(str2 == null ? "N/A" : str2);
    }
}
