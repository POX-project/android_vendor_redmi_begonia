package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class EPSBearerThroughput extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_UPCM_STATUS_IND};

    public EPSBearerThroughput(Activity activity) {
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
        String[] strArr = new String[38];
        for (int i = 0; i <= 36; i += 2) {
            strArr[i] = "EPSB[" + ((i / 2) + 5) + "] UL throughput";
            strArr[i + 1] = "EPSB[" + ((i / 2) + 5) + "] DL throughput";
        }
        return strArr;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EPS Bearer Throughput";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        for (int i = 5; i <= 23; i++) {
            addData(Integer.valueOf(getFieldValue(msg, "upcm.epsb[" + i + "].ul_bytes") + getFieldValue(msg, "upcm.epsb[" + i + "].ul_bytes_pri")));
            addData(Integer.valueOf(getFieldValue(msg, "upcm.epsb[" + i + "].dl_bytes")));
        }
    }
}
