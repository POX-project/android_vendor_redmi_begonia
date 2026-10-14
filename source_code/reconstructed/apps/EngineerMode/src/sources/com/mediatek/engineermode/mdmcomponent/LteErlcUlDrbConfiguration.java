package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class LteErlcUlDrbConfiguration extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EL2_PUB_STATUS_IND};

    public LteErlcUlDrbConfiguration(Activity activity) {
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

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"DRB ID", "RB ID", "EPS bearer ID", "Logical channel ID", "RLC mode", "LI length 15 bits"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE eRLC UL DRB Congiguration";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        for (int i = 0; i < 8; i++) {
            addData(Integer.valueOf(i), Integer.valueOf(getFieldValue(msg, "erlc_stats.ul_rb_cfg[" + (i + 2) + "]." + MDMContent.RB_ID)), Integer.valueOf(getFieldValue(msg, "erlc_stats.ul_rb_cfg[" + (i + 2) + "]." + MDMContent.EPSB_ID)), Integer.valueOf(getFieldValue(msg, "erlc_stats.ul_rb_cfg[" + (i + 2) + "]." + MDMContent.LGCH_ID)), Integer.valueOf(getFieldValue(msg, "erlc_stats.ul_rb_cfg[" + (i + 2) + "]." + MDMContent.RLC_MODE)), Integer.valueOf(getFieldValue(msg, "erlc_stats.ul_rb_cfg[" + (i + 2) + "]." + MDMContent.LI_LEN_15_BIT)));
        }
    }
}
