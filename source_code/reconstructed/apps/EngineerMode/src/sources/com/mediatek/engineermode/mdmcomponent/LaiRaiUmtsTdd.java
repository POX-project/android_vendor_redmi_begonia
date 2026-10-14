package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class LaiRaiUmtsTdd extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_MM_INFO_IND};

    public LaiRaiUmtsTdd(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "4. UMTS TDD EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"PLMN", "LAI", "RAI"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LAI and RAI (UMTS TDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "rac");
        String string = "";
        String string2 = "";
        for (int i = 0; i < 3; i++) {
            StringBuilder sb = new StringBuilder();
            sb.append(string);
            sb.append(getFieldValue(msg, "mcc[" + i + "]"));
            sb.append(" ");
            string = sb.toString();
        }
        for (int i2 = 0; i2 < 3; i2++) {
            StringBuilder sb2 = new StringBuilder();
            sb2.append(string);
            sb2.append(getFieldValue(msg, "mnc[" + i2 + "]"));
            sb2.append(" ");
            string = sb2.toString();
        }
        for (int i3 = 0; i3 < 2; i3++) {
            StringBuilder sb3 = new StringBuilder();
            sb3.append(string2);
            sb3.append(getFieldValue(msg, "loc[" + i3 + "]"));
            sb3.append(" ");
            string2 = sb3.toString();
        }
        clearData();
        addData(string, string2, Integer.valueOf(fieldValue));
    }
}
