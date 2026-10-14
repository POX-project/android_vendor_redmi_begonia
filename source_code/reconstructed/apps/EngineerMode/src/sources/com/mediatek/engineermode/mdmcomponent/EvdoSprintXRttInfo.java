package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class EvdoSprintXRttInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_SPRINT_XRTT_INFO_IND};
    HashMap<Integer, String> AtMapping;

    public EvdoSprintXRttInfo(Activity activity) {
        super(activity);
        this.AtMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EvdoSprintXRttInfo.1
            {
                put(0, "NOSVC");
                put(1, "INIT");
                put(2, "IDLE");
                put(3, "TRAFFICINI");
                put(4, "TRAFFIC");
                put(5, "STATE NUM");
            }
        };
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "7. CDMA EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"State", "serviceOption", "rateReduction", MDMContent.C2K_L4_CHANNEL, "bandClass", "sid", "nid", "baseId", "pilotPNOffset", "mob_p_revp", "baseLat", "baseLong", "rxPower", MDMContent.ECIO, "FER", "txPower"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Sprint XRTT info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "State");
        int fieldValue2 = getFieldValue(msg, "serviceOption");
        int fieldValue3 = getFieldValue(msg, "rateReduction");
        int fieldValue4 = getFieldValue(msg, MDMContent.C2K_L4_CHANNEL);
        int fieldValue5 = getFieldValue(msg, "bandClass");
        int fieldValue6 = getFieldValue(msg, "sid");
        int fieldValue7 = getFieldValue(msg, "nid");
        int fieldValue8 = getFieldValue(msg, "baseId");
        int fieldValue9 = getFieldValue(msg, "pilotPNOffset");
        int fieldValue10 = getFieldValue(msg, "mob_p_revp");
        int fieldValue11 = getFieldValue(msg, "baseLat");
        int fieldValue12 = getFieldValue(msg, "baseLong");
        int fieldValue13 = getFieldValue(msg, "rxPower", true);
        float fieldValue14 = getFieldValue(msg, MDMContent.ECIO, true) / 2.0f;
        int fieldValue15 = getFieldValue(msg, "FER", true);
        int fieldValue16 = getFieldValue(msg, "txPower", true);
        clearData();
        addData(this.AtMapping.get(Integer.valueOf(fieldValue)));
        addData(Integer.valueOf(fieldValue2));
        addData(Integer.valueOf(fieldValue3));
        addData(Integer.valueOf(fieldValue4));
        addData(Integer.valueOf(fieldValue5));
        addData(Integer.valueOf(fieldValue6));
        addData(Integer.valueOf(fieldValue7));
        addData(Integer.valueOf(fieldValue8));
        addData(Integer.valueOf(fieldValue9));
        addData(Integer.valueOf(fieldValue10));
        addData(Integer.valueOf(fieldValue11));
        addData(Integer.valueOf(fieldValue12));
        addData(Integer.valueOf(fieldValue13));
        addData(Float.valueOf(fieldValue14));
        addData(Integer.valueOf(fieldValue15));
        addData(Integer.valueOf(fieldValue16));
        notifyDataSetChanged();
    }
}
