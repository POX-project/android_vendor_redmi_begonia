package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class RejectCauseCode extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_MM_INFO_IND, MDMContent.MSG_ID_EM_GMM_INFO_IND};
    int attach_rej_cause;
    int mm_cause;
    int rau_rej_cause;

    public RejectCauseCode(Activity activity) {
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
        return new String[]{"MM Reject Cause Code", "GMM Attach Rejec Cause Code", "GMM RAU Reject Cause"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Reject Cause Code";
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
            this.mm_cause = getFieldValue(msg, MDMContent.EM_MM_CAUSE);
        } else if (str.equals(MDMContent.MSG_ID_EM_GMM_INFO_IND)) {
            this.attach_rej_cause = getFieldValue(msg, MDMContent.EM_MM_ATTACH_REJ_CAUSE);
            this.rau_rej_cause = getFieldValue(msg, MDMContent.EM_MM_RAU_REJ_CAUSE);
        }
        addData(Integer.valueOf(this.mm_cause), Integer.valueOf(this.attach_rej_cause), Integer.valueOf(this.rau_rej_cause));
    }
}
