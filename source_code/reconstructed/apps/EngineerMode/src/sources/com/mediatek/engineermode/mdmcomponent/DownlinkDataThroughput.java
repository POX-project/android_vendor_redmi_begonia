package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class DownlinkDataThroughput extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_UPCM_PS_TPUT_INFO_IND};

    public DownlinkDataThroughput(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "1. General EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"IP Rate DL (bytes/s)"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Downlink Data Throughput";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        long fieldValue = getFieldValue((Msg) obj, MDMContent.EM_UPCM_PS_TPUT_TOTAL_RX_BYTE_PER_SECOND);
        clearData();
        addData(Long.valueOf(fieldValue));
    }
}
