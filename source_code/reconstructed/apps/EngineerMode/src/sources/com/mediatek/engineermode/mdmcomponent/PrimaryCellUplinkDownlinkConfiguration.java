package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class PrimaryCellUplinkDownlinkConfiguration extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EL1_STATUS_IND};

    public PrimaryCellUplinkDownlinkConfiguration(Activity activity) {
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
        return new String[]{"UDC"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Primary Cell Uplink-Downlink Configuration";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        int fieldValue = getFieldValue((Msg) obj, "cell_info[0]." + MDMContent.EM_EL1_STATUS_CELL_INFO_TDD_CFG);
        clearData();
        addData(Integer.valueOf(fieldValue));
    }
}
