package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class FastDormancyConfiguration extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_RRCE_FD_CONFIGURATION_STATUS_IND};
    HashMap<Boolean, String> mMapping;

    public FastDormancyConfiguration(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Boolean, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FastDormancyConfiguration.1
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
        return new String[]{"Fast Dormancy configured"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Fast Dormancy Configuration";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2 = this.mMapping.get(Integer.valueOf(getFieldValue((Msg) obj, MDMContent.EM_RRCE_FD_CONFIGURATION_FDCFGSTATUS)));
        clearData();
        addData(str2 == null ? "OFF" : str2);
    }
}
