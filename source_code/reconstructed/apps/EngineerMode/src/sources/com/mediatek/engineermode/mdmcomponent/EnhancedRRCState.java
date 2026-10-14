package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class EnhancedRRCState extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_URR_3G_GENERAL_STATUS_IND};
    private final HashMap<Integer, String> mStateMapping;

    public EnhancedRRCState(Activity activity) {
        super(activity);
        this.mStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EnhancedRRCState.1
            {
                put(0, "N/A");
                put(1, "N/A");
                put(2, "N/A");
                put(3, "N/A");
                put(4, "N/A");
                put(5, "N/A");
                put(6, "");
                put(7, "HSDPA in Cell FACH");
                put(8, "HSDPA in Cell PCH:Receive Data");
                put(9, "HSDPA in Cell PCH:Receive Paging");
                put(10, "HSDPA in URA PCH:Receive Paging");
                put(11, "HSUPA in Cell FACH");
                put(12, "HSUPA in Cell PCH:Receive Data");
                put(13, "READY for HSPA in Cell PCH");
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
        return new String[]{"Enhanced RRC State"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Enhanced RRC State";
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
