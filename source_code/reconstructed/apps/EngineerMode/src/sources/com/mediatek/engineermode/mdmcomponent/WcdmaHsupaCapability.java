package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class WcdmaHsupaCapability extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_USIME_CAPABILITY_INFO_IND};
    HashMap<Integer, String> mMapping;

    public WcdmaHsupaCapability(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.WcdmaHsupaCapability.1
            {
                put(0, "ON");
                put(1, "OFF");
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
        return new String[]{"HSUPA Support"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "WCDMA HSUPA Capability";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        clearData();
        addData(this.mMapping.get(Integer.valueOf(getFieldValue((Msg) obj, MDMContent.FDD_EM_USIME_CAPABILITY_HSUPA_ENABLE))));
    }
}
