package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class PeriodicLocationUpdateValue extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_MM_INFO_IND};

    public PeriodicLocationUpdateValue(Activity activity) {
        super(activity);
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
        return new String[]{"Periodic Location Update Value"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Periodic Location Update Value";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        addData(Integer.valueOf(str.equals(MDMContent.MSG_ID_EM_MM_INFO_IND) ? getFieldValue(msg, MDMContent.EM_MM_T3212VAL) : 0));
    }
}
