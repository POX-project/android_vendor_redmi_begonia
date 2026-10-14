package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class PlmnSearchStatusUmtsFdd extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_URR_3G_GENERAL_STATUS_IND};
    HashMap<Integer, String> mMapping;

    public PlmnSearchStatusUmtsFdd(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.PlmnSearchStatusUmtsFdd.1
            {
                put(0, "");
                put(1, "Search any PLMN");
                put(2, "Search given PLMN");
                put(3, "Search any PLMN success");
                put(4, "Search any PLMN failure");
                put(5, "Search given PLMN success");
                put(6, "Search given PLMN failure");
                put(7, "Search PLMN abort");
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
        return new String[]{"PLMN search status"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "PLMN Search status (UMTS FDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        clearData();
        addData(this.mMapping.get(Integer.valueOf(getFieldValue((Msg) obj, "uas_3g_general_status." + MDMContent.FDD_EM_URR_3G_GENERAL_PLMN_SEARCH_STATUS))));
    }
}
