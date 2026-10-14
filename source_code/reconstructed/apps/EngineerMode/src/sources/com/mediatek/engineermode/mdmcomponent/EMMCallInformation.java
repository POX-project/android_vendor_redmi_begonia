package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class EMMCallInformation extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EMM_CALL_INFO_IND};

    public EMMCallInformation(Activity activity) {
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
        return new String[]{"Bearer active", "PS instance", "CS instance", "SMS establishment trigger", "Keep SMS establishment trigger", "Paging trigger", "Re-establishment request", "Call type(SR/EXSR)", "Establishment type(R11)", "RRC Establishment cause(R12)", "RRC Establishment type(R12)", "# of ESM msg's", "# of SMS msg's", "CS MO Trigger", "CS MT Trigger"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EMM Call information";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        addData(Integer.valueOf(getFieldValue(msg, MDMContent.IS_BEARER_ACTIVE)), Integer.valueOf(getFieldValue(msg, MDMContent.IS_PS_MO_MT_INSTANCE)), Integer.valueOf(getFieldValue(msg, MDMContent.IS_CS_MO_MT_INSTANCE)), Integer.valueOf(getFieldValue(msg, MDMContent.IS_SMS_EST_TRIGGER)), Integer.valueOf(getFieldValue(msg, MDMContent.IS_KEEP_SMS_EST)), Integer.valueOf(getFieldValue(msg, MDMContent.PAGE_INDE_FLG)), Integer.valueOf(getFieldValue(msg, MDMContent.REEST_REQ_FLG)), Integer.valueOf(getFieldValue(msg, MDMContent.CALL_TYPE)), Integer.valueOf(getFieldValue(msg, MDMContent.EST_CAUSE)), Integer.valueOf(getFieldValue(msg, MDMContent.ESTABLISHMENT_CAUSE)), Integer.valueOf(getFieldValue(msg, MDMContent.ESTABLISHMENT_TYPE)), Integer.valueOf(getFieldValue(msg, MDMContent.WAIT_SND_ESM_MSG_NUM)), Integer.valueOf(getFieldValue(msg, MDMContent.WAIT_SND_SMS_MSG_NUM)), Integer.valueOf(getFieldValue(msg, MDMContent.CS_MO_TRIGGER)), Integer.valueOf(getFieldValue(msg, MDMContent.CS_MT_TRIGGER)));
    }
}
