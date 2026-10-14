package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class EvdoStatueInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_EVDO_STATE_INFO_IND};
    HashMap<Integer, String> ALMPMapping;
    HashMap<Integer, String> AtMapping;
    HashMap<Integer, String> CspMapping;
    HashMap<Integer, String> IdpMapping;
    HashMap<Integer, String> InspMapping;
    HashMap<Integer, String> OmpMapping;
    HashMap<Integer, String> RupMapping;
    HashMap<Integer, String> SessionMapping;

    public EvdoStatueInfo(Activity activity) {
        super(activity);
        this.SessionMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EvdoStatueInfo.1
            {
                put(0, "NEW_SESSION");
                put(1, "ALIVE_SESSION");
                put(2, "PRIOR_SESSION");
                put(3, "OPENED_SESSION");
            }
        };
        this.AtMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EvdoStatueInfo.2
            {
                put(0, "AT_PWROFF");
                put(1, "AT_INACTIVE");
                put(2, "AT_PILOTACQ");
                put(3, "AT_SYNC");
                put(4, "AT_IDLE");
                put(5, "AT_ACCESS");
                put(6, "AT_CONNECTED");
            }
        };
        this.ALMPMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EvdoStatueInfo.3
            {
                put(0, "ALMP_INIT_STATE");
                put(1, "ALMP_IDLE_STATE");
                put(2, "ALMP_CONN_SETUP_STATE");
                put(3, "ALMP_CONNECTED_STATE");
            }
        };
        this.InspMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EvdoStatueInfo.4
            {
                put(0, "INSP_INACTIVE_STATE");
                put(1, "INSP_NETWORK_DET_STATE");
                put(2, "INSP_PILOT_ACQ_STATE");
                put(3, "INSP_SYNC_STATE");
                put(4, "INSP_TIMING_CHANGE_STATE");
                put(5, "INSP_WFR_1XASSTST_STATE");
            }
        };
        this.IdpMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EvdoStatueInfo.5
            {
                put(0, "IDP_INACTIVE_ST");
                put(1, "IDP_MONITOR_ST");
                put(2, "IDP_SLEEP_ST");
                put(3, "IDP_CONN_SETUP_ST");
                put(4, "IDP_FREEZE_PENDING_ST");
                put(5, "IDP_FREEZE_ST");
                put(6, "IDP_CONN_FROZEN_ST");
                put(7, "IDP_STATE_MAX");
            }
        };
        this.OmpMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EvdoStatueInfo.6
            {
                put(0, "OMP_INACTIVE_ST");
                put(1, "OMP_ACTIVE_ST");
                put(2, "OMP_STATE_MAX");
            }
        };
        this.CspMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EvdoStatueInfo.7
            {
                put(0, "CSP_INACTIVE_STATE");
                put(1, "CSP_CLOSING_STATE");
                put(2, "CSP_OPEN_STATE");
            }
        };
        this.RupMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EvdoStatueInfo.8
            {
                put(0, "RUP_INACTIVE");
                put(1, "RUP_IDLE");
                put(2, "RUP_CONNECTED");
                put(3, "RUP_IRAT_MEASUREMENT");
                put(4, "RUP_INVALID");
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
        return new String[]{"sessionState", "atState", "almpState", "inspState", "idpState", "ompState", "cspState", "rupState"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EVDO Status info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "sessionState");
        int fieldValue2 = getFieldValue(msg, "atState");
        int fieldValue3 = getFieldValue(msg, "almpState");
        int fieldValue4 = getFieldValue(msg, "inspState");
        int fieldValue5 = getFieldValue(msg, "idpState");
        int fieldValue6 = getFieldValue(msg, "ompState");
        int fieldValue7 = getFieldValue(msg, "cspState");
        int fieldValue8 = getFieldValue(msg, "rupState");
        Elog.d("EmInfo/MDMComponent", "rupState = " + fieldValue8);
        clearData();
        addData(this.SessionMapping.get(Integer.valueOf(fieldValue)));
        addData(this.AtMapping.get(Integer.valueOf(fieldValue2)));
        addData(this.ALMPMapping.get(Integer.valueOf(fieldValue3)));
        addData(this.InspMapping.get(Integer.valueOf(fieldValue4)));
        addData(this.IdpMapping.get(Integer.valueOf(fieldValue5)));
        addData(this.OmpMapping.get(Integer.valueOf(fieldValue6)));
        addData(this.CspMapping.get(Integer.valueOf(fieldValue7)));
        addData(this.RupMapping.get(Integer.valueOf(fieldValue8)));
        notifyDataSetChanged();
    }
}
