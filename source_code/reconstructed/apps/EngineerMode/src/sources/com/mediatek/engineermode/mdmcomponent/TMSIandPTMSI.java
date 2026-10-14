package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class TMSIandPTMSI extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_MM_INFO_IND, MDMContent.MSG_ID_EM_GMM_INFO_IND};
    String ptmsi;
    String tmsi;

    public TMSIandPTMSI(Activity activity) {
        super(activity);
        this.tmsi = "-";
        this.ptmsi = "-";
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
        return new String[]{"TMSI", "P-TMSI"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "TMSI and P-TMSI";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        if (str.equals(MDMContent.MSG_ID_EM_MM_INFO_IND)) {
            this.tmsi = "";
            for (int i = 0; i < 4; i++) {
                this.tmsi += Integer.toHexString(getFieldValue(msg, "tmsi[" + i + "]")) + " ";
            }
        } else if (str.equals(MDMContent.MSG_ID_EM_GMM_INFO_IND)) {
            this.ptmsi = "";
            for (int i2 = 0; i2 < 4; i2++) {
                this.ptmsi += Integer.toHexString(getFieldValue(msg, "ptmsi[" + i2 + "]")) + " ";
            }
        }
        addData(this.tmsi, this.ptmsi);
    }
}
