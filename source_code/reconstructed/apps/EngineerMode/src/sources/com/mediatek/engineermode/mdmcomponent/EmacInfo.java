package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class EmacInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EL2_OV_STATUS_IND, MDMContent.MSG_ID_EM_EMAC_CONFIG_REPORT_IND};
    int cellId;
    int dl_sps_configured;
    int drx_long_cycle;
    int drx_short_cycle;
    int earfcn;
    HashMap<Integer, String> mMappingInfo;
    int sr_periodicity;
    int tti_bundling;
    String tti_bundling_s;
    int ul_sps_configured;

    public EmacInfo(Activity activity) {
        super(activity);
        this.drx_long_cycle = 0;
        this.drx_short_cycle = 0;
        this.tti_bundling = 0;
        this.tti_bundling_s = "";
        this.dl_sps_configured = 0;
        this.ul_sps_configured = 0;
        this.sr_periodicity = 0;
        this.earfcn = 0;
        this.cellId = 0;
        this.mMappingInfo = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.EmacInfo.1
            {
                put(0, "DISABLED");
                put(1, "NORMAL");
                put(2, "ENHANCED_FDD");
                put(3, " ");
            }
        };
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
        return new String[]{"DRX Long Cycle", "DRX Short Cycle", "TTI Bundling", "DL SPS Configured", "UL SPS Configured", "SR Periodicity", "EARFCN", "Cell ID"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EMAC Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        if (str.equals(MDMContent.MSG_ID_EM_EMAC_CONFIG_REPORT_IND)) {
            int fieldValue = getFieldValue(msg, "tti_bundling");
            this.tti_bundling = fieldValue;
            if (fieldValue < 0 || fieldValue > 2) {
                this.tti_bundling_s = this.mMappingInfo.get(3);
            } else {
                this.tti_bundling_s = this.mMappingInfo.get(Integer.valueOf(fieldValue));
            }
            this.dl_sps_configured = getFieldValue(msg, "dl_sps_configured");
            this.ul_sps_configured = getFieldValue(msg, "ul_sps_configured");
        } else if (str.equals(MDMContent.MSG_ID_EM_EL2_OV_STATUS_IND)) {
            this.drx_long_cycle = getFieldValue(msg, "emac_stats.drx_long_cycle");
            this.drx_short_cycle = getFieldValue(msg, "emac_stats.drx_short_cycle");
            this.sr_periodicity = getFieldValue(msg, "emac_stats.sr_periodicity");
            this.earfcn = getFieldValue(msg, "emac_stats.earfcn");
            this.cellId = getFieldValue(msg, "emac_stats.phys_cell_id");
        }
        clearData();
        addData(Integer.valueOf(this.drx_long_cycle), Integer.valueOf(this.drx_short_cycle), this.tti_bundling_s, Integer.valueOf(this.dl_sps_configured), Integer.valueOf(this.ul_sps_configured), Integer.valueOf(this.sr_periodicity), Integer.valueOf(this.earfcn), Integer.valueOf(this.cellId));
    }
}
