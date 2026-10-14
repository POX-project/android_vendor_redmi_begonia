package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class ErrcFeatureDetection extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_FEATURE_DETECTION_IND};
    StringBuilder mDetectedFeature;
    HashMap<Integer, String> mDisplay;
    HashMap<Integer, String> mMappingFD;

    public ErrcFeatureDetection(Activity activity) {
        super(activity);
        this.mMappingFD = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.ErrcFeatureDetection.1
            {
                put(0, "ERRC_FEAT_MFBI_PRIORITIZATION");
                put(1, "ERRC_FEAT_AC_BAR_SKIP_MMTEL_VOICE");
                put(2, "ERRC_FEAT_AC_BAR_SKIP_MMTEL_VIDEO");
                put(3, "ERRC_FEAT_AC_BAR_SKIP_SMS");
                put(4, "ERRC_FEAT_PLMN_SPECIFIC_AC_BAR");
                put(5, "ERRC_FEAT_PLMN_SPECIFIC_SSAC");
                put(6, "ERRC_FEAT_RRC_CONN_TEMP_FAIL_OFFSET");
                put(7, "ERRC_FEAT_INCMON_EUTRA");
                put(8, "ERRC_FEAT_INCMON_UTRA");
                put(9, "ERRC_FEAT_CELL_SPECIFIC_TTT");
                put(10, "ERRC_FEAT_FAST_RLF_REC_WITH_T312");
                put(11, "ERRC_FEAT_RSRQ_LOWER_VALUE_RANGE_EXT");
                put(12, "ERRC_FEAT_ENH_HARQ_TTI_BUND_FOR_FDD");
                put(13, "ERRC_FEAT_LOG_CH_SR_PROHIBIT_TIMER");
                put(14, "ERRC_FEAT_MOB_HIST_REPORTING");
                put(15, "ERRC_FEAT_SHORTER_MCH_SCHED_PERIOD");
                put(16, "ERRC_FEAT_IDC_ENH_FOR_UL_CA");
                put(17, "ERRC_FEAT_LOGGED_MDT");
                put(18, "ERRC_FEAT_IMMED_MDT");
                put(19, "ERRC_FEAT_EICIC_SF_PATTERN");
                put(20, "ERRC_FEAT_EICIC_DEDICATED_SIB1");
                put(21, "ERRC_FEAT_MBSFN_AREA_DETECTED");
                put(22, "ERRC_FEAT_UL_64QAM_DETECTED");
                put(23, "ERRC_FEAT_EAB_DETECTED");
                put(24, "ERRC_FEAT_DL_256QAM");
                put(25, "ERRC_FEAT_4G_BAND");
                put(26, "ERRC_FEAT_OOS_CAUSE");
                put(27, "ERRC_FEAT_LTE_INTER_FREQ_RESEL");
                put(28, "ERRC_FEAT_LTE_FDD_TDD_RESEL");
                put(29, "ERRC_FEAT_LTE_FDD_TDD_REDIRECT");
                put(30, "ERRC_FEAT_4G3_CSFB_REDIRECT");
                put(31, "ERRC_FEAT_4G2_CSFB_REDIRECT");
                put(32, "ERRC_FEAT_IMS_ECC_SUPPORT");
                put(33, "ERRC_FEAT_FOUR_LAYERS_MIMO_PCELL");
                put(34, "ERRC_FEAT_FOUR_LAYERS_MIMO_SCELL");
                put(35, "ERRC_FEAT_CONN_REL_TRIGGER_A2");
                put(36, "ERRC_FEAT_TM8_DETECTED");
                put(37, "ERRC_FEAT_TM9_DETECTED");
                put(38, "ERRC_FEAT_SRS_TX_ANT_SWITCH_DETECTED");
                put(39, "ERRC_FEAT_SRS_ENHANCEMENT_DETECTED");
                put(40, "ERRC_FEAT_DMRS_ENHANCEMENT_DETECTED");
                put(41, "ERRC_FEAT_EICIC_DETECTED");
                put(42, "ERRC_FEAT_FEICIC_DETECTED");
                put(43, "ERRC_FEAT_DMRS_ENHANCEMENT_DETECTED");
                put(44, "ERRC_FEAT_EICIC_DETECTED");
                put(45, "ERRC_FEAT_FEICIC_DETECTED");
                put(46, "ERRC_FEAT_TRANS_MODE");
                put(47, "ERRC_FEAT_DL_LAYERS");
            }
        };
        this.mDisplay = new HashMap<>();
        this.mDetectedFeature = new StringBuilder("");
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
        return new String[]{"Detected Feature"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "ERRC Feature Detection";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        if (msg == null) {
            clearData();
            StringBuilder sb = this.mDetectedFeature;
            sb.delete(0, sb.toString().length() - 1);
            this.mDisplay.clear();
            return;
        }
        int fieldValue = getFieldValue(msg, MDMContent.DETECTED_FEATURE);
        if (this.mDisplay.get(Integer.valueOf(fieldValue)) == null) {
            clearData();
            this.mDisplay.put(Integer.valueOf(fieldValue), this.mMappingFD.get(Integer.valueOf(fieldValue)));
            this.mDetectedFeature.append(this.mMappingFD.get(Integer.valueOf(fieldValue)));
            addData(this.mDetectedFeature.toString() + "\n");
        }
    }
}
