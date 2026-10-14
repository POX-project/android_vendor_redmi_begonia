package com.mediatek.engineermode.networkinfo;

import android.support.v4.media.subtitle.Cea708CCParser;
import com.mediatek.engineermode.ChipSupport;
import com.mediatek.engineermode.ModemCategory;

/* JADX INFO: loaded from: classes2.dex */
public class Content {
    public static final int ADM_POOL_STATUS_SIZE = 64;
    public static final int BLK_INDEX = 11;
    public static final int BLK_INFO_SIZE = 80;
    public static final int CAL_LIST_SIZE = 260;
    public static final int CA_INDEX = 7;
    public static final int CDMA_1XRTT_INFO_INDEX = 301;
    public static final int CDMA_1XRTT_RADIO_INDEX = 300;
    public static final int CDMA_1XRTT_SCH_INFO_INDEX = 302;
    public static final int CDMA_1XRTT_SERVING_INDEX = 304;
    public static final int CDMA_1XRTT_STATISTICS_INDEX = 303;
    public static final int CDMA_EVDO_ACTIVE_SET_INDEX = 306;
    public static final int CDMA_EVDO_CANDICATE_SET_INDEX = 307;
    public static final int CDMA_EVDO_FL_INDEX = 309;
    public static final int CDMA_EVDO_FORCE_TX_ANT = 299;
    public static final int CDMA_EVDO_NEIGHBOR_SET_INDEX = 308;
    public static final int CDMA_EVDO_RL_INDEX = 310;
    public static final int CDMA_EVDO_SERVING_INFO_INDEX = 305;
    public static final int CDMA_EVDO_STATE_INDEX = 311;
    public static final int CDMA_INDEX_BASE = 300;
    public static final int CELL_INDEX = 0;
    public static final int CELL_SEL_SIZE = 6;
    public static final int CHANNEL_INDEX = 1;
    public static final int CH_DSCR_SIZE = 340;
    public static final int CONTROL_INDEX = 8;
    public static final int CONTROL_MSG_SIZE = 4;
    public static final int CSCE_MULTIPLMN_INDEX;
    public static final int CSCE_MULTI_PLMN_SIZE = 74;
    public static final int CSCE_NEIGH_CELL_STATUS_INDEX;
    public static final int CSCE_SERV_CELL_STATUS_INDEX;
    public static final int CSCE_SERV_CELL_STATUS_SIZE = 104;
    public static final int CTRL_CHAN_SIZE = 14;
    public static final int CTRL_INDEX = 2;
    public static final int EL1TX_EM_TX_INFO_INDEX = 249;
    public static final int EMM_L4C_EMM_INFO_INDEX = 244;
    public static final int ERRC_EM_ERRC_STATE_INDEX = 222;
    public static final int ERRC_EM_SEC_PARAM_INDEX = 217;
    public static final int GMM_EM_INFO_SIZE = 40;
    public static final int GMM_INFO_INDEX = 56;
    public static final int GPRS_GEN_SIZE = 32;
    public static final int GPRS_INDEX = 13;
    public static final int HANDOVER_SEQUENCE_INDEX;
    public static final int HANDOVER_SEQUENCE_SIZE = 32;
    public static final int HSERV_CELL_INDEX;
    public static final boolean IS_MOLY;
    public static final int LAI_INDEX = 4;
    public static final int LAI_INFO_SIZE = 28;
    public static final int LLC_EM_INFO_INDEX = 57;
    public static final int M3G_MM_EMINFO_SIZE = 60;
    public static final int MEAS_INDEX = 6;
    public static final int MEAS_REP_SIZE = 1384;
    public static final int MEME_HSERV_CELL_SIZE = 16;
    public static final int MI_INDEX = 10;
    public static final int MI_INFO_SIZE = 8;
    public static final int MM_INFO_INDEX;
    public static final int M_3G_TCMMMI_INFO_SIZE = 14;
    public static final boolean NEW_VALUE;
    public static final int PERIOD_IC_BLER_REPORT_INDEX;
    public static final int PERIOD_IC_BLER_REPORT_SIZE = 200;
    public static final int PSDATA_RATE_STATUS_INDEX;
    public static final int RACH_CTRL_SIZE = 14;
    public static final int RACH_INDEX = 3;
    public static final int RADIO_INDEX = 5;
    public static final int RADIO_LINK_SIZE = 16;
    public static final int SECURITY_CONFIGURATION_INDEX;
    public static final int SECURITY_CONFIGURATION_SIZE = 4;
    public static final int SI2Q_INDEX = 9;
    public static final int SI2Q_INFO_SIZE = 10;
    public static final int SLCE_PS_DATA_RATE_STATUS_SIZE = 200;
    public static final int SLCE_VOICE_INDEX;
    public static final int SLCE_VOICE_SIZE = 2;
    public static final int SM_EM_INFO_SIZE = 4408;
    public static final int SM_INFO_INDEX;
    public static final int TBF_INDEX = 12;
    public static final int TBF_INFO_SIZE = 56;
    public static final int TCM_MMI_INDEX;
    public static final int UL1_EM_PRX_DRX_MEASURE_INFO_INDEX = 177;
    public static final int UL2_PSDATA_RATE_STATUS_SIZE = 16;
    public static final int UL_ADM_POOL_STATUS_INDEX;
    public static final int UL_HSDSCH_RECONFIG_STATUS_INDEX;
    public static final int UL_HSDSCH_RECONFIG_STATUS_SIZE = 16;
    public static final int UL_PERIOD_IC_BLER_REPORT_INDEX;
    public static final int UL_PERIOD_IC_BLER_REPORT_SIZE = 200;
    public static final int UL_PSDATA_RATE_STATUS_INDEX;
    public static final int UL_URLC_EVENT_STATUS_INDEX;
    public static final int UMTS_CELL_STATUS_INDEX;
    public static final int UMTS_CELL_STATUS_SIZE = 1544;
    public static final int URLC_EVENT_STATUS_SIZE = 36;
    public static final int URR_3G_GENERAL_INDEX = 70;
    public static final int URR_3G_GENERAL_SIZE = 12;
    public static final int URR_UMTS_SRNC_INDEX;
    public static final int URR_UMTS_SRNC_SIZE = 4;
    public static final int XGCSCE_NEIGH_CELL_STATUS_SIZE = 1040;

    static {
        int i;
        int i2;
        int i3;
        NEW_VALUE = ChipSupport.getChip() >= 1;
        boolean zIsLteSupport = ModemCategory.isLteSupport();
        IS_MOLY = zIsLteSupport;
        SM_INFO_INDEX = zIsLteSupport ? 58 : 63;
        MM_INFO_INDEX = NEW_VALUE ? 53 : 21;
        TCM_MMI_INDEX = NEW_VALUE ? 59 : 27;
        CSCE_SERV_CELL_STATUS_INDEX = NEW_VALUE ? 75 : 47;
        CSCE_NEIGH_CELL_STATUS_INDEX = NEW_VALUE ? 76 : 48;
        int i4 = 81;
        CSCE_MULTIPLMN_INDEX = NEW_VALUE ? 81 : 52;
        UMTS_CELL_STATUS_INDEX = NEW_VALUE ? 90 : 53;
        if (NEW_VALUE) {
            i = IS_MOLY ? 97 : 99;
        } else {
            i = 62;
        }
        PERIOD_IC_BLER_REPORT_INDEX = i;
        URR_UMTS_SRNC_INDEX = NEW_VALUE ? 111 : 64;
        PSDATA_RATE_STATUS_INDEX = NEW_VALUE ? Cea708CCParser.Const.CODE_C1_DLW : 65;
        if (NEW_VALUE) {
            i2 = IS_MOLY ? 96 : 98;
        } else {
            i2 = 61;
        }
        HSERV_CELL_INDEX = i2;
        HANDOVER_SEQUENCE_INDEX = NEW_VALUE ? 130 : 65;
        UL_ADM_POOL_STATUS_INDEX = NEW_VALUE ? 185 : 67;
        UL_PSDATA_RATE_STATUS_INDEX = NEW_VALUE ? 186 : 68;
        UL_HSDSCH_RECONFIG_STATUS_INDEX = NEW_VALUE ? 187 : 69;
        UL_URLC_EVENT_STATUS_INDEX = NEW_VALUE ? 188 : 70;
        UL_PERIOD_IC_BLER_REPORT_INDEX = NEW_VALUE ? 189 : 71;
        if (NEW_VALUE) {
            i3 = IS_MOLY ? 250 : Cea708CCParser.Const.CODE_C1_DLY;
        } else {
            i3 = 80;
        }
        SLCE_VOICE_INDEX = i3;
        if (NEW_VALUE) {
            i4 = IS_MOLY ? Cea708CCParser.Const.CODE_C1_DF6 : Cea708CCParser.Const.CODE_C1_DF5;
        }
        SECURITY_CONFIGURATION_INDEX = i4;
    }
}
