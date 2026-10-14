package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class ERRCState extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_STATE_IND};
    HashMap<Integer, String> mMapping;

    public ERRCState(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.ERRCState.1
            {
                put(1, "-");
                put(2, "Idle");
                put(3, "Connected");
                put(4, "-");
                put(5, "Idle");
                put(6, "Connected");
            }
        };
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
        return new String[]{"RRC State"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "ERRC State";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2 = this.mMapping.get(Integer.valueOf(getFieldValue((Msg) obj, MDMContent.EM_ERRC_STATE_ERRC_STS)));
        clearData();
        addData(str2);
    }
}
