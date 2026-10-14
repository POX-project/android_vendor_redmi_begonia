package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class RRCState extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_URR_3G_GENERAL_STATUS_IND};
    private final HashMap<Integer, String> mStateMapping;

    public RRCState(Activity activity) {
        super(activity);
        this.mStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.RRCState.1
            {
                put(0, "Idle");
                put(1, "Cell FACH");
                put(2, "Cell PCH");
                put(3, "URA PCH");
                put(4, "Cell DCH");
                put(5, "");
                put(6, "NO_CHANGE");
                put(7, "Cell FACH");
                put(8, "Cell PCH");
                put(9, "Cell PCH");
                put(10, "URA PCH");
                put(11, "Cell FACH");
                put(12, "Cell PCH");
                put(13, "Cell PCH");
            }
        };
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
        return new String[]{"RRC State"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "RRC State";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        clearData();
        int fieldValue = getFieldValue((Msg) obj, "uas_3g_general_status.umts_rrc_state");
        if (fieldValue != 6) {
            String str2 = this.mStateMapping.get(Integer.valueOf(fieldValue));
            clearData();
            addData(str2);
        }
    }
}
