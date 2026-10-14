package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;
import android.os.AsyncTask;
import android.os.Bundle;
import android.support.v4.media.subtitle.Cea708CCParser;
import android.support.v4.view.MotionEventCompat;
import android.telephony.TelephonyManager;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.WorldModeUtil;
import com.mediatek.engineermode.channellock.ChannelLockReceiver;
import com.mediatek.engineermode.networkinfo.Content;
import com.mediatek.mdml.Msg;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* JADX INFO: compiled from: MDMComponentFT.java */
/* JADX INFO: loaded from: classes.dex */
class FTNetworkInfo extends CombinationViewComponent {
    private static final String ACTION_SIM_STATE_CHANGED = "android.intent.action.SIM_STATE_CHANGED";
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EMM_PLMNSEL_INFO_IND, MDMContent.MSG_ID_EM_EL2_OV_STATUS_IND, MDMContent.MSG_ID_EM_ERRC_SERVING_INFO_IND, MDMContent.MSG_ID_EM_EL1_STATUS_IND, MDMContent.MSG_ID_EM_ERRC_STATE_IND, MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND, MDMContent.MSG_ID_EM_RRM_MEASUREMENT_REPORT_INFO_IND, MDMContent.MSG_ID_EM_GSM_TAS_INFO_IND, MDMContent.MSG_ID_EM_C2K_L4_EVDO_SERVING_INFO_IND, MDMContent.MSG_ID_EM_C2K_L4_RTT_RADIO_INFO_IND, MDMContent.MSG_ID_EM_MM_INFO_IND, MDMContent.MSG_ID_TDD_EM_CSCE_SERV_CELL_S_STATUS_IND, MDMContent.MSG_ID_EM_TDD_TAS_INFO_IND, MDMContent.MSG_ID_FDD_EM_CSCE_SERV_CELL_S_STATUS_IND, MDMContent.MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND, MDMContent.MSG_ID_FDD_EM_URR_3G_GENERAL_STATUS_IND, MDMContent.MSG_ID_FDD_EM_UL1_TAS_INFO_IND, MDMContent.MSG_ID_TDD_EM_URR_3G_GENERAL_STATUS_IND, MDMContent.MSG_ID_EM_RRM_LAI_INFO_IND, MDMContent.MSG_ID_EM_C2K_L4_SPRINT_EVDO_INFO_IND, MDMContent.MSG_ID_EM_C2K_L4_SPRINT_XRTT_INFO_IND, MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTERRAT_UTRAN_INFO_IND, MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_IND, MDMContent.MSG_ID_TDD_EM_MEME_DCH_LTE_CELL_INFO_IND, MDMContent.MSG_ID_TDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND, MDMContent.MSG_ID_TDD_EM_MEME_DCH_UMTS_CELL_INFO_IND, MDMContent.MSG_ID_TDD_EM_MEME_DCH_GSM_CELL_INFO_IND, MDMContent.MSG_ID_EM_RRM_IR_4G_NEIGHBOR_MEAS_STATUS_IND, MDMContent.MSG_ID_EM_RRM_IR_3G_NEIGHBOR_MEAS_STATUS_IND, MDMContent.MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND, MDMContent.MSG_ID_FDD_EM_MEME_DCH_LTE_CELL_INFO_IND, MDMContent.MSG_ID_FDD_EM_MEME_DCH_GSM_CELL_INFO_IND, MDMContent.MSG_ID_FDD_EM_UL1_HSPA_INFO_GROUP_IND, MDMContent.MSG_ID_EM_CSR_STATUS_IND, MDMContent.MSG_ID_EM_GMM_INFO_IND, MDMContent.MSG_ID_EM_MM_LU_INFO_IND, MDMContent.MSG_ID_EM_SM_NSAPI5_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI6_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI7_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI8_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI9_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI10_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI11_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI12_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI13_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI14_STATUS_IND, MDMContent.MSG_ID_EM_SM_NSAPI15_STATUS_IND, MDMContent.MSG_ID_EM_SPEECH_INFO_SPH_CODEC_IND, MDMContent.MSG_ID_EM_EMM_REG_ATTACH_INFO_IND, MDMContent.MSG_ID_EM_EMM_REG_TAU_INFO_IND, MDMContent.MSG_ID_EM_ESM_ESM_INFO_IND, MDMContent.MSG_ID_EM_TCM_INFO_IND};
    private static final String INTENT_KEY_ICC_STATE = "ss";
    public static final int NETWORK_TYPE_1xRTT = 7;
    public static final int NETWORK_TYPE_CDMA = 4;
    public static final int NETWORK_TYPE_EDGE = 2;
    public static final int NETWORK_TYPE_EHRPD = 14;
    public static final int NETWORK_TYPE_EVDO_0 = 5;
    public static final int NETWORK_TYPE_EVDO_A = 6;
    public static final int NETWORK_TYPE_EVDO_B = 12;
    public static final int NETWORK_TYPE_GPRS = 1;
    public static final int NETWORK_TYPE_GSM = 16;
    public static final int NETWORK_TYPE_HSDPA = 8;
    public static final int NETWORK_TYPE_HSPA = 10;
    public static final int NETWORK_TYPE_HSPAP = 15;
    public static final int NETWORK_TYPE_HSUPA = 9;
    public static final int NETWORK_TYPE_LTE = 13;
    public static final int NETWORK_TYPE_LTE_CA = 19;
    public static final int NETWORK_TYPE_TD_SCDMA = 17;
    public static final int NETWORK_TYPE_UMTS = 3;
    public static final int NETWORK_TYPE_UNKNOWN = 0;
    private static final int SIM_STATE_ABSENT = 1;
    private static final int SIM_STATE_UNKNOWN = 0;
    HashMap<Integer, String> AntennaMapping;
    HashMap<Integer, String> ERRCStateMapping;
    private String[] Labels;
    HashMap<Integer, String> ServingBandMapping;
    private BroadcastReceiver SimCardChangedReceiver;
    HashMap<Integer, String> TasEnableMapping;
    int TasVersion;
    HashMap<Integer, String> attachTypeMapping;
    HashMap<Integer, String> bandMapping;
    private String[] cids;
    private ExecutorService executorService;
    HashMap<Integer, String> gmmStateMapping;
    HashMap<Integer, String> gsmBandMapping;
    private String[] linkedCids;
    private LocationManager locationManager;
    HashMap<Integer, String> lteAttachTypeMapping;
    HashMap<Integer, String> lteTAUTypeMapping;
    private String[] lte_ebi_s;
    private String[] lte_index_s;
    private String[] lte_pdpapn_s;
    private String[] lte_ptebi_s;
    private String[] lte_ptlinkebi_s;
    HashMap<Integer, String> luTypeMapping;
    private boolean mFirstBroadcast;
    private final HashMap<String, String[]> mKeyWordMapping;
    public LocationListener mLocListener;
    HashMap<Integer, String> mLteMappingQam;
    HashMap<Integer, String> mMappingBW;
    HashMap<Integer, String> mMappingQam;
    HashMap<Integer, String> mMappingSpeechCodec;
    private final Map<Integer, String> mRrStateMapping;
    private final HashMap<Integer, String> mStateMapping;
    private String[] networkInfo;
    private int oldDlMod0Pcell;
    private int oldDlMod1Pcell;
    private int oldUlMode;
    private String[] pdpIndex;
    private String[] pdpStatus;
    HashMap<Integer, String> pdpStatusMapping;
    private String[] pdpapn_s;
    Set<String> repeateMsgArray;
    HashMap<Integer, String> speechCodecMapping;
    private boolean[] status;

    /* JADX INFO: compiled from: MDMComponentFT.java */
    private class UpdateViewTask extends AsyncTask<CombinationViewComponent.Task, Object[], Void> {
        private UpdateViewTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Void doInBackground(CombinationViewComponent.Task... taskArr) {
            char c;
            int i;
            int i2;
            char c2;
            String extraName = taskArr[0].getExtraName();
            Object extraMsg = taskArr[0].getExtraMsg();
            int extraSimID = taskArr[0].getExtraSimID();
            FTNetworkInfo fTNetworkInfo = FTNetworkInfo.this;
            HashMap<String, Boolean> updateMap = fTNetworkInfo.getUpdateMap(fTNetworkInfo.Labels, extraSimID, extraName, extraMsg);
            String[] surpportedLabel = FTNetworkInfo.this.getSurpportedLabel(extraSimID);
            Set supportedLabelsByKeyWord = FTNetworkInfo.this.getSupportedLabelsByKeyWord(extraSimID);
            HashSet<String> hashSet = new HashSet();
            boolean z = false;
            String[] strArr = FTNetworkInfo.this.Labels;
            int length = strArr.length;
            int i3 = 0;
            while (i3 < length) {
                String str = strArr[i3];
                String str2 = extraName;
                if (FTNetworkInfo.this.mUpdateTaskDriven.isDriverDead()) {
                    cancel(true);
                    Elog.e("EmInfo/MDMComponent", "Exit doInBackground, Driver dead");
                    FTNetworkInfo.this.taskDone();
                    return null;
                }
                Object obj = extraMsg;
                if (surpportedLabel[0].equals("Unknown") && surpportedLabel[1].equals("Unknown")) {
                    if (!updateMap.keySet().contains(str)) {
                        i = 1;
                        i2 = 3;
                        c2 = 0;
                    } else if (supportedLabelsByKeyWord.contains(str) || supportedLabelsByKeyWord.contains(str.split("-")[0])) {
                        publishProgress(new Object[]{Integer.valueOf(extraSimID), str, true, true});
                        z = true;
                    } else {
                        i = 1;
                        i2 = 3;
                        c2 = 0;
                    }
                    Object[][] objArr = new Object[i][];
                    Object[] objArr2 = new Object[i2];
                    objArr2[c2] = Integer.valueOf(extraSimID);
                    objArr2[i] = str;
                    objArr2[2] = false;
                    objArr[c2] = objArr2;
                    publishProgress(objArr);
                    hashSet.add(str);
                } else {
                    char c3 = 0;
                    if (str.indexOf(surpportedLabel[c3]) >= 0 || str.indexOf(surpportedLabel[1]) >= 0) {
                        if (!supportedLabelsByKeyWord.contains(str)) {
                            c = 0;
                            if (supportedLabelsByKeyWord.contains(str.split("-")[0])) {
                            }
                        }
                        if (updateMap.keySet().contains(str) && updateMap.get(str).booleanValue()) {
                            publishProgress(new Object[]{Integer.valueOf(extraSimID), str, true, true});
                        } else {
                            publishProgress(new Object[]{Integer.valueOf(extraSimID), str, true, false});
                        }
                        z = true;
                    } else {
                        c = 0;
                    }
                    Object[][] objArr3 = new Object[1][];
                    Object[] objArr4 = new Object[3];
                    objArr4[c] = Integer.valueOf(extraSimID);
                    objArr4[1] = str;
                    objArr4[2] = false;
                    objArr3[c] = objArr4;
                    publishProgress(objArr3);
                    hashSet.add(str);
                }
                i3++;
                extraName = str2;
                extraMsg = obj;
            }
            if (z) {
                return null;
            }
            for (String str3 : hashSet) {
                if (str3.indexOf(surpportedLabel[0]) >= 0 || str3.indexOf(surpportedLabel[1]) >= 0 || (surpportedLabel[0].equals("Unknown") && surpportedLabel[1].equals("Unknown"))) {
                    publishProgress(new Object[]{Integer.valueOf(extraSimID), str3, false});
                    Elog.d("EmInfo/MDMComponent", "[showView] Sim" + extraSimID + " has no valid labels, show label:" + str3);
                }
            }
            return null;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Void r2) {
            super.onPostExecute(r2);
            FTNetworkInfo.this.taskDone();
        }

        @Override // android.os.AsyncTask
        protected void onPreExecute() {
            super.onPreExecute();
            if (FTNetworkInfo.this.Labels == null) {
                FTNetworkInfo fTNetworkInfo = FTNetworkInfo.this;
                fTNetworkInfo.Labels = fTNetworkInfo.initLabels();
            }
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onProgressUpdate(Object[]... objArr) {
            super.onProgressUpdate((Object[]) objArr);
            if (FTNetworkInfo.this.mUpdateTaskDriven.isDriverDead()) {
                cancel(true);
                FTNetworkInfo.this.taskDone();
                return;
            }
            int iIntValue = Integer.valueOf(objArr[0][0].toString()).intValue();
            String string = objArr[0][1].toString();
            boolean zBooleanValue = ((Boolean) objArr[0][2]).booleanValue();
            if (zBooleanValue && ((Boolean) objArr[0][3]).booleanValue()) {
                FTNetworkInfo.this.clearData(string, iIntValue);
                FTNetworkInfo.this.addData(string, iIntValue);
            }
            FTNetworkInfo.this.displayView(string, iIntValue, zBooleanValue);
        }
    }

    public FTNetworkInfo(Activity activity, int i) {
        super(activity, i);
        this.mFirstBroadcast = true;
        this.locationManager = null;
        this.SimCardChangedReceiver = null;
        this.networkInfo = new String[]{"UnKnown", "UnKnown"};
        this.executorService = Executors.newFixedThreadPool(10);
        this.TasVersion = 1;
        this.oldDlMod0Pcell = 0;
        this.oldDlMod1Pcell = 0;
        this.oldUlMode = 0;
        this.pdpIndex = new String[11];
        this.pdpapn_s = new String[11];
        this.pdpStatus = new String[11];
        this.cids = new String[11];
        this.linkedCids = new String[11];
        this.status = new boolean[11];
        this.lte_index_s = new String[15];
        this.lte_ebi_s = new String[11];
        this.lte_pdpapn_s = new String[11];
        this.lte_ptebi_s = new String[15];
        this.lte_ptlinkebi_s = new String[15];
        this.repeateMsgArray = new HashSet<String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.1
            {
                add(MDMContent.MSG_ID_FDD_EM_URR_3G_GENERAL_STATUS_IND);
                add(MDMContent.MSG_ID_TDD_EM_URR_3G_GENERAL_STATUS_IND);
            }
        };
        this.AntennaMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.2
            {
                put(0, "LANT");
                put(1, "UANT");
                put(2, "LANT(')");
                put(3, "UANT");
                put(4, "-");
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.3
            {
                put(0, "DISABLE");
                put(1, "ENABLE");
                put(2, "-");
            }
        };
        this.ERRCStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.4
            {
                put(0, "Initial");
                put(1, "Standby");
                put(2, "Idle");
                put(3, "Connected");
                put(4, "Flight");
                put(5, "Idle");
                put(6, "Connected");
            }
        };
        this.ServingBandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.5
            {
                put(0, "Band 34");
                put(1, "Band 39");
                put(2, "-");
            }
        };
        this.mRrStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.6
            {
                put(3, "Idle");
                put(5, "Packet Transfer");
                put(6, "Dedicated");
            }
        };
        this.bandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.7
            {
                put(0, "PGSM");
                put(1, "EGSM");
                put(2, "RGSM");
                put(3, "DCS1800");
                put(4, "PCS1900");
                put(5, "GSM450");
                put(6, "GSM480");
                put(7, "GSM850");
            }
        };
        this.mStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.8
            {
                put(0, "Idle");
                put(1, "Cell FACH");
                put(2, "Cell PCH");
                put(3, "URA PCH");
                put(4, "Cell DCH");
                put(5, "INACTIVE");
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
        this.mMappingQam = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.9
            {
                put(1, "QPSK");
                put(2, "16QAM");
                put(3, "64QAM");
                put(4, "128QAM");
                put(5, "256QAM");
            }
        };
        this.mMappingBW = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.10
            {
                put(14, "1.4");
                put(30, "3");
                put(50, "5");
                put(100, "10");
                put(150, "15");
                put(200, "20");
                put(255, "");
            }
        };
        this.gsmBandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.11
            {
                put(0, "DCS1800");
                put(1, "PCS1900");
                put(2, "-");
            }
        };
        this.speechCodecMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.12
            {
                put(0, "AMR_4_75");
                put(1, "AMR_5_15");
                put(2, "AMR_5_90");
                put(3, "AMR_6_70");
                put(4, "AMR_7_40");
                put(5, "AMR_7_95");
                put(6, "AMR_10_20");
                put(7, "AMR_12_20");
                put(8, "AMR_SID");
                put(9, "GSM_EFR_SID");
                put(10, "TDMA_EFR_SID");
                put(11, "PDC_EFR_SID");
                put(12, "RESERVE_1");
                put(13, "RESERVE_2");
                put(14, "RESERVE_3");
                put(15, "AMR_NODATA");
                put(16, "AMRWB_6_60");
                put(17, "AMRWB_8_85");
                put(18, "AMRWB_12_65");
                put(19, "AMRWB_14_25");
                put(20, "AMRWB_15_85");
                put(21, "AMRWB_18_25");
                put(22, "AMRWB_19_85");
                put(23, "AMRWB_23_05");
                put(24, "AMRWB_23_85");
                put(25, "AMRWB_SID");
                put(255, "CODEC_NONE");
            }
        };
        this.pdpStatusMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.13
            {
                put(0, "INACTIVE");
                put(1, "ACTIVE_PENDING");
                put(2, "INACTIVE_PENDING");
                put(3, "ACTIVE");
                put(4, "MODIFY_PENDING");
            }
        };
        this.attachTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.14
            {
                put(1, "GPRS_ATTACH");
                put(2, "GPRS_ATTACH_WHILE_IMSI_ATTACH");
                put(3, "COMBINED_ATTACH");
                put(4, "EMERGENCY_ATTACH");
                put(5, "INVALID");
            }
        };
        this.luTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.15
            {
                put(0, "MM_NORMAL_LU");
                put(1, "MM_PERIODIC_LU");
                put(2, "MM_IMSI_ATTACH_LU");
                put(3, "MM_NONE_ATTEMPTED");
            }
        };
        this.gmmStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.16
            {
                put(0, "NULL");
                put(1, "DEREG_NORMAL_SERVICE");
                put(2, "DEREG_SUSPEND");
                put(3, "DEREG_LTD_SERVICE");
                put(4, "DEREG_ATTACH_NEEDED");
                put(5, "DEREG_ATTEMPT_TO_ATTACH");
                put(6, "DEREG_NO_IMSI");
                put(7, "DEREG_NO_CELL");
                put(8, "DEREG_PLMN_SEARCH");
                put(9, "REG_INIT");
                put(10, "REG_NORMAL_SERVICE");
                put(11, "REG_SUSPEND");
                put(12, "REG_UPDATE_NEEDED");
                put(13, "REG_ATTEMPT_TO_UPDATE");
                put(14, "REG_ATTEMPT_TO_UPDATE_MM");
                put(15, "REG_NO_CELL");
                put(16, "REG_LTD_SERVICE");
                put(17, "DEREG_INIT");
                put(18, "RAU_INIT");
                put(19, "REG_IMSI_DETACH_INIT");
                put(20, "SERVICE_REQ_INIT");
                put(21, "REG_PLMN_SEARCH");
            }
        };
        this.mMappingSpeechCodec = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.17
            {
                put(0, "FR");
                put(1, "HR");
                put(2, "EFR");
                put(3, "AMR_12_20");
                put(4, "AMR_10_20");
                put(5, "AMR_7_95");
                put(6, "AMR_7_40");
                put(7, "AMR_6_70");
                put(8, "AMR_5_90");
                put(9, "AMR_5_15");
                put(10, "AMR_4_75");
                put(11, "AMR_SID");
                put(12, "AMR_NODATA");
                put(32, "AMRWB_6_60");
                put(33, "AMRWB_8_85");
                put(34, "AMRWB_12_65");
                put(35, "AMRWB_14_25");
                put(36, "AMRWB_15_85");
                put(37, "AMRWB_18_25");
                put(38, "AMRWB_19_85");
                put(39, "AMRWB_23_05");
                put(40, "AMRWB_23_85");
                put(41, "AMRWB_SID");
                put(42, "SLOST_FRAME");
                put(48, "SC2K_SO1");
                put(49, "SC2K_SO3");
                put(50, "SC2K_SO17");
                put(51, "SC2K_SO68");
                put(52, "SC2K_SO73");
                put(53, "SC2K_SO73WB");
                put(96, "SG711");
                put(97, "SG722");
                put(98, "SG723_1");
                put(99, "SG726");
                put(100, "G729");
                put(128, "EVS_08K_005_9/SPH_CODEC_EVS_08K_002_8");
                put(129, "EVS_08K_007_2");
                put(130, "EVS_08K_008_0");
                put(131, "EVS_08K_009_6");
                put(132, "EVS_08K_013_2");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_CW5), "EVS_08K_016_4");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_CW6), "EVS_08K_024_4");
                put(135, "EVS_08K_032_0");
                put(136, "EVS_08K_048_0");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DSW), "EVS_08K_064_0");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_HDW), "EVS_08K_096_0");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_TGW), "EVS_08K_128_0");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DLW), "EVS_08K_002_4_SID");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DLY), "EVS_08K_000_0_REV");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DLC), "EVS_08K_000_0_LOST");
                put(143, "EVS_08K_000_0_NODATA");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_SPA), "EVS_16K_005_9/SPH_CODEC_EVS_16K_002_8");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_SPC), "EVS_16K_007_2");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_SPL), "EVS_16K_008_0");
                put(147, "EVS_16K_009_6");
                put(148, "EVS_16K_013_2");
                put(149, "EVS_16K_016_4");
                put(150, "EVS_16K_024_4");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_SWA), "EVS_16K_032_0");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DF0), "EVS_16K_048_0");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DF1), "EVS_16K_064_0");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DF2), "EVS_16K_096_0");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DF3), "EVS_16K_128_0");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DF4), "EVS_16K_002_4_SID");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DF5), "EVS_16K_000_0_REV");
                put(Integer.valueOf(Cea708CCParser.Const.CODE_C1_DF6), "EVS_16K_000_0_LOST");
                put(159, "EVS_16K_000_0_NODATA");
                put(160, "EVS_32K_005_9/SPH_CODEC_EVS_32K_002_8");
                put(161, "EVS_32K_007_2");
                put(162, "EVS_32K_008_0");
                put(163, "EVS_32K_009_6");
                put(164, "EVS_32K_013_2");
                put(165, "EVS_32K_016_4");
                put(166, "EVS_32K_024_4");
                put(167, "EVS_32K_032_0");
                put(168, "EVS_32K_048_0");
                put(169, "EVS_32K_064_0");
                put(170, "EVS_32K_096_0");
                put(171, "EVS_32K_128_0");
                put(172, "EVS_32K_002_4_SID");
                put(173, "EVS_32K_000_0_REV");
                put(174, "EVS_32K_000_0_LOST");
                put(175, "EVS_32K_000_0_NODATA");
                put(176, "EVS_48K_005_9/SPH_CODEC_EVS_48K_002_8");
                put(Integer.valueOf(Content.UL1_EM_PRX_DRX_MEASURE_INFO_INDEX), "EVS_48K_007_2");
                put(178, "EVS_48K_008_0");
                put(179, "EVS_48K_009_6");
                put(180, "EVS_48K_013_2");
                put(181, "EVS_48K_016_4");
                put(182, "EVS_48K_024_4");
                put(183, "EVS_48K_032_0");
                put(184, "EVS_48K_048_0");
                put(185, "EVS_48K_064_0");
                put(186, "EVS_48K_096_0");
                put(187, "EVS_48K_128_0");
                put(188, "EVS_48K_002_4_SID");
                put(189, "EVS_48K_000_0_REV");
                put(190, "EVS_48K_000_0_LOST");
                put(191, "EVS_48K_000_0_NODATA");
                put(208, "EVS_AWB_06_60");
                put(209, "EVS_AWB_08_85");
                put(210, "EVS_AWB_12_65");
                put(211, "EVS_AWB_14_25");
                put(212, "EVS_AWB_15_85");
                put(213, "EVS_AWB_18_25");
                put(214, "EVS_AWB_19_85");
                put(215, "EVS_AWB_23_05");
                put(216, "EVS_AWB_23_85");
                put(Integer.valueOf(Content.ERRC_EM_SEC_PARAM_INDEX), "EVS_AWB_02_00_SID");
                put(218, "EVS_AWB_00_00_REV0");
                put(219, "EVS_AWB_00_00_REV1");
                put(220, "EVS_AWB_00_00_REV2");
                put(221, "EVS_AWB_00_00_REV3");
                put(Integer.valueOf(Content.ERRC_EM_ERRC_STATE_INDEX), "EVS_AWB_00_00_LOST");
                put(223, "EVS_AWB_00_00_NODATA");
                put(255, "CODEC_NONE");
            }
        };
        this.lteAttachTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.18
            {
                put(0, "NONE");
                put(1, "EPS_ATTACH");
                put(2, "COMBINED_ATTACH");
                put(3, "EMERGENCY_ATTACH");
            }
        };
        this.lteTAUTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.19
            {
                put(0, "TAU");
                put(1, "COMBINED_TAU");
                put(2, "COMBINED_TAU_IMSI_ATTACH");
                put(3, "PERIODIC_TAU");
                put(4, "INVALID");
            }
        };
        this.mLteMappingQam = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.20
            {
                put(1, "QPSK");
                put(2, "16QAM");
                put(3, "64QAM");
                put(4, "256QAM");
            }
        };
        this.mKeyWordMapping = new HashMap<String, String[]>() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.21
            {
                put("UMTS FDD", new String[]{"Cell ID", "UARFCN", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC});
                put("UMTS TDD", new String[]{"Cell ID", "UARFCN", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC});
            }
        };
        this.mLocListener = new LocationListener() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.22
            @Override // android.location.LocationListener
            public void onLocationChanged(Location location) {
                double latitude = location.getLatitude();
                double longitude = location.getLongitude();
                FTNetworkInfo.this.location = latitude + ":" + longitude;
            }

            @Override // android.location.LocationListener
            public void onProviderDisabled(String str) {
                Elog.v("EmInfo/MDMComponent", "Enter onProviderDisabled function");
            }

            @Override // android.location.LocationListener
            public void onProviderEnabled(String str) {
                Elog.v("EmInfo/MDMComponent", "Enter onProviderEnabled function");
            }

            @Override // android.location.LocationListener
            public void onStatusChanged(String str, int i2, Bundle bundle) {
                Elog.v("EmInfo/MDMComponent", "Enter onStatusChanged function");
            }
        };
    }

    private int[] getNetworkType(int i) {
        Activity activity = this.mActivity;
        Activity activity2 = this.mActivity;
        TelephonyManager telephonyManager = (TelephonyManager) activity.getSystemService("phone");
        if (telephonyManager == null) {
            Elog.e("EmInfo/MDMComponent", "[getNetworkType] telephonyManager == null");
            return new int[]{0, 0};
        }
        int dataNetworkType = telephonyManager.getDataNetworkType(i);
        int voiceNetworkType = telephonyManager.getVoiceNetworkType(i);
        Elog.d("EmInfo/MDMComponent", "[getNetworkType] SIM" + i + ", getDataNetworkType " + dataNetworkType + ", getVoiceNetworkType " + voiceNetworkType);
        return new int[]{dataNetworkType, voiceNetworkType};
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:31:0x00c3  */
    /* JADX WARN: Code duplicated, block: B:33:0x00d1  */
    /* JADX WARN: Code duplicated, block: B:34:0x00d8  */
    /* JADX WARN: Code duplicated, block: B:41:0x00dc A[SYNTHETIC] */
    public Set<String> getSupportedLabelsByKeyWord(int i) {
        String str;
        HashSet hashSet = new HashSet();
        if (isValidSimID(i)) {
            for (String str2 : initLabels()) {
                boolean z = true;
                if (this.mKeyWordMapping.containsKey(str2) || this.mKeyWordMapping.containsKey(str2.split("-")[0])) {
                    String[] strArr = this.mKeyWordMapping.get(str2) != null ? this.mKeyWordMapping.get(str2) : this.mKeyWordMapping.get(str2.split("-")[0]);
                    if (!isLabelArrayType(str2)) {
                        for (String str3 : strArr) {
                            if (this.hmapLabelsList.get(i).get(str2).get(str3) == null || this.hmapLabelsList.get(i).get(str2).get(str3).equals("") || this.hmapLabelsList.get(i).get(str2).get(str3).equals("0")) {
                                z = false;
                                break;
                            }
                        }
                    } else if (this.hmapLabelsList.get(i).get(str2).size() <= 1) {
                    }
                    if (!z) {
                        if (this.mKeyWordMapping.containsKey(str2.split("-")[0])) {
                            str = str2.split("-")[0];
                        } else {
                            str = str2;
                        }
                        hashSet.add(str);
                    }
                } else if (!z) {
                    if (this.mKeyWordMapping.containsKey(str2.split("-")[0])) {
                        str = str2.split("-")[0];
                    } else {
                        str = str2;
                    }
                    hashSet.add(str);
                }
            }
        }
        return hashSet;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String[] getSurpportedLabel(int i) {
        int i2;
        int[] networkType = getNetworkType(i);
        String[] strArr = new String[networkType.length];
        int i3 = 0;
        while (true) {
            if (i3 >= networkType.length) {
                if ((strArr[0].indexOf("UMTS") >= 0 || strArr[1].indexOf("UMTS") >= 0) && (i2 = WorldModeUtil.get3GDivisionDuplexMode()) != 0) {
                    String str = i2 != 1 ? "UMTS TDD" : "UMTS FDD";
                    if (ModemCategory.getCapabilitySim() != i || i2 == 1) {
                        str = "UMTS FDD";
                    }
                    strArr[0] = strArr[0].indexOf("UMTS") >= 0 ? str : strArr[0];
                    strArr[1] = strArr[1].indexOf("UMTS") >= 0 ? str : strArr[1];
                }
                return strArr;
            }
            switch (networkType[i3]) {
                case 0:
                    strArr[i3] = "Unknow";
                    break;
                case 1:
                    strArr[i3] = "GSM";
                    break;
                case 2:
                    strArr[i3] = "GSM";
                    break;
                case 3:
                    strArr[i3] = "UMTS";
                    break;
                case 4:
                    strArr[i3] = "1xRTT";
                    break;
                case 5:
                    strArr[i3] = "EVDO";
                    break;
                case 6:
                    strArr[i3] = "EVDO";
                    break;
                case 7:
                    strArr[i3] = "1xRTT";
                    break;
                case 8:
                    strArr[i3] = "UMTS FDD";
                    break;
                case 9:
                    strArr[i3] = "UMTS FDD";
                    break;
                case 10:
                    strArr[i3] = "UMTS FDD";
                    break;
                case 11:
                case 18:
                default:
                    strArr[i3] = this.networkInfo[i3];
                    Elog.e("EmInfo/MDMComponent", "Unexpected radioTechnology");
                    break;
                case 12:
                    strArr[i3] = "EVDO";
                    break;
                case 13:
                    strArr[i3] = "LTE";
                    break;
                case 14:
                    strArr[i3] = "EVDO";
                    break;
                case 15:
                    strArr[i3] = "UMTS FDD";
                    break;
                case 16:
                    strArr[i3] = "GSM";
                    break;
                case 17:
                    strArr[i3] = "UMTS FDD";
                    break;
                case 19:
                    strArr[i3] = "LTE";
                    break;
            }
            i3++;
        }
    }

    private String getValueFromMapping(int i, HashMap<Integer, String> map) {
        if (map.containsKey(Integer.valueOf(i))) {
            return map.get(Integer.valueOf(i));
        }
        return "-(" + i + ")";
    }

    String antidxMapping(int i) {
        if (i >= 0 && i <= 3) {
            return this.AntennaMapping.get(Integer.valueOf(i));
        }
        return this.AntennaMapping.get(4) + "(" + i + ")";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void clearData() {
        Elog.d("EmInfo/MDMComponent", "[clearData]");
        unRegisteListener();
        if (this.layout != null && this.layout.getChildCount() > 0) {
            this.layout.removeAllViews();
            this.scrollView.removeAllViews();
        }
        this.commonView.setAdapter(null);
        this.commonInfoAdapter.clear();
        if (this.mUpdateTaskDriven.isTaskRunning()) {
            taskStop();
        } else {
            resetPublicValues();
            clearViewData(-1);
        }
    }

    public ArrayList<String> getArrayTypeLabels() {
        ArrayList<String> arrayList = new ArrayList<>();
        arrayList.add("LTE-Scell");
        arrayList.add("LTE-Neighbor Cell");
        arrayList.add("GSM-Neighbor Cell");
        arrayList.add("UMTS FDD-Active Set");
        arrayList.add("UMTS TDD-Neighbor Cell");
        arrayList.add("UMTS FDD-Neighbor Cell");
        arrayList.add("UMTS FDD-PDN Context List");
        arrayList.add("LTE-Pcell and Scell basic info");
        arrayList.add("LTE-PDP Context Information");
        return arrayList;
    }

    String getBandMapping(int i) {
        if (i == 0 || i == 1) {
            return this.gsmBandMapping.get(Integer.valueOf(i));
        }
        return this.gsmBandMapping.get(2) + "(" + i + ")";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "1. General EM Component";
    }

    int getIndexOfEmTypes(String str) {
        int i = 0;
        while (true) {
            String[] strArr = EM_TYPES;
            if (i >= strArr.length) {
                return -1;
            }
            if (strArr[i].equals(str)) {
                return i;
            }
            i++;
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "FT Network Info";
    }

    /* JADX WARN: Code duplicated, block: B:551:0x2c35  */
    /* JADX WARN: Code duplicated, block: B:552:0x2c37  */
    /* JADX WARN: Code duplicated, block: B:555:0x2c3c  */
    /* JADX WARN: Code duplicated, block: B:556:0x2c3e  */
    /* JADX WARN: Code duplicated, block: B:559:0x2c43  */
    /* JADX WARN: Code duplicated, block: B:560:0x2c45  */
    /* JADX WARN: Code duplicated, block: B:563:0x2c4a  */
    /* JADX WARN: Code duplicated, block: B:564:0x2c4c  */
    /* JADX WARN: Code duplicated, block: B:567:0x2c51  */
    /* JADX WARN: Code duplicated, block: B:568:0x2c53  */
    /* JADX WARN: Code duplicated, block: B:571:0x2c6b  */
    /* JADX WARN: Code duplicated, block: B:573:0x2c71  */
    /* JADX WARN: Code duplicated, block: B:575:0x2d00  */
    /* JADX WARN: Code duplicated, block: B:577:0x2d2f  */
    /* JADX WARN: Code duplicated, block: B:578:0x2d37  */
    /* JADX WARN: Code duplicated, block: B:581:0x2d4c  */
    /* JADX WARN: Code duplicated, block: B:582:0x2d54  */
    /* JADX WARN: Code duplicated, block: B:584:0x2d5f  */
    /* JADX WARN: Code duplicated, block: B:591:0x2e56 A[LOOP:26: B:589:0x2e51->B:591:0x2e56, LOOP_END] */
    /* JADX WARN: Code duplicated, block: B:789:0x2d83 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:790:0x2d7c A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:793:0x2f1a A[SYNTHETIC] */
    /* JADX WARN: Instruction removed from duplicated block: B:573:0x2c71, please report this as an issue */
    /* JADX WARN: Instruction removed from duplicated block: B:591:0x2e56, please report this as an issue */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r101v0, types: [com.mediatek.engineermode.mdmcomponent.FTNetworkInfo] */
    /* JADX WARN: Type inference failed for: r10v30 */
    /* JADX WARN: Type inference failed for: r10v32, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r12v100, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r12v102, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r12v104 */
    /* JADX WARN: Type inference failed for: r12v105, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r12v305 */
    /* JADX WARN: Type inference failed for: r12v95, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r12v98, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r13v124, types: [java.lang.Object, java.lang.String[]] */
    /* JADX WARN: Type inference failed for: r14v161, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r14v164, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r14v166, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r14v168, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r14v170 */
    /* JADX WARN: Type inference failed for: r14v171, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r14v180, types: [java.lang.String[]] */
    /* JADX WARN: Type inference failed for: r14v410 */
    /* JADX WARN: Type inference failed for: r15v80, types: [java.lang.Object, java.lang.String[]] */
    /* JADX WARN: Type inference failed for: r1v109 */
    /* JADX WARN: Type inference failed for: r1v110, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r1v112, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r1v120, types: [java.lang.String[]] */
    /* JADX WARN: Type inference failed for: r1v283 */
    /* JADX WARN: Type inference failed for: r1v91, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r1v93, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r1v95, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r1v97, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v100, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v104, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v106, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v108, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v110, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v114, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v116, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v118, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v120, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v123, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v125, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v127, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v129, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v132, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v134, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v136, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v138, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v186, types: [java.lang.String[]] */
    /* JADX WARN: Type inference failed for: r3v31, types: [java.lang.Object, java.lang.String[]] */
    /* JADX WARN: Type inference failed for: r3v40, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v42, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v44, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v46, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v70, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v72, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v74, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v76, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v79, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v81, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v83, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v85, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v94, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v96, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r3v98, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r5v181 */
    /* JADX WARN: Type inference failed for: r5v80 */
    /* JADX WARN: Type inference failed for: r5v81, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r5v83, types: [java.lang.StringBuilder] */
    /* JADX WARN: Type inference failed for: r76v1 */
    /* JADX WARN: Type inference failed for: r76v19 */
    /* JADX WARN: Type inference failed for: r76v2 */
    /* JADX WARN: Type inference failed for: r76v5 */
    /* JADX WARN: Type inference failed for: r76v6 */
    /* JADX WARN: Type inference failed for: r76v8 */
    /* JADX WARN: Type inference failed for: r7v154, types: [java.lang.Object, java.lang.String[]] */
    /* JADX WARN: Type inference failed for: r7v226, types: [java.lang.String[]] */
    /* JADX WARN: Type inference failed for: r9v83, types: [java.lang.Object, java.lang.String[]] */
    /* JADX WARN: Type inference failed for: r9v89, types: [java.lang.String[]] */
    public HashMap<String, Boolean> getUpdateMap(String[] strArr, int i, String str, Object obj) {
        String str2;
        String str3;
        String str4;
        Msg msg;
        int fieldValue;
        int i2;
        ?? r7;
        int i3;
        ?? r9;
        int i4;
        ?? r13;
        int i5;
        ?? r15;
        int i6;
        ?? r3;
        String str5;
        int fieldValue2;
        String str6;
        int i7;
        int i8;
        int i9;
        String str7;
        String str8;
        String str9;
        long fieldValue3;
        int fieldValue4;
        int fieldValue5;
        int fieldValue6;
        int fieldValue7;
        int fieldValue8;
        int i10;
        int i11;
        int fieldValue9;
        int fieldValue10;
        int fieldValue11;
        int fieldValue12;
        ?? ValueOf;
        ?? ValueOf2;
        String str10;
        Msg msg2;
        HashMap<String, Boolean> map;
        int i12;
        int i13;
        String str11;
        HashMap<String, Boolean> map2;
        boolean z;
        int i14;
        Msg msg3 = (Msg) obj;
        HashMap<String, Boolean> map3 = new HashMap<>();
        int indexOfEmTypes = getIndexOfEmTypes(str);
        Elog.d("EmInfo/MDMComponent", "Sim" + i + ", update: " + indexOfEmTypes + "," + str);
        initHashMap(i);
        long[] jArr = new long[3];
        int[] iArr = new int[3];
        int[] iArr2 = new int[3];
        int[] iArr3 = new int[3];
        int[] iArr4 = new int[3];
        int[] iArr5 = new int[3];
        int[] iArr6 = new int[3];
        int[] iArr7 = new int[3];
        int[] iArr8 = new int[3];
        int[] iArr9 = new int[3];
        int[] iArr10 = new int[3];
        int[] iArr11 = new int[3];
        int[] iArr12 = new int[3];
        int[] iArr13 = new int[3];
        int[] iArr14 = new int[3];
        int[] iArr15 = new int[3];
        int[] iArr16 = new int[3];
        int[] iArr17 = new int[4];
        int[] iArr18 = new int[4];
        int[] iArr19 = new int[4];
        int[] iArr20 = new int[4];
        int[] iArr21 = new int[4];
        int[] iArr22 = new int[4];
        int[] iArr23 = new int[4];
        int[] iArr24 = new int[4];
        int[] iArr25 = new int[4];
        int[] iArr26 = new int[4];
        int[] iArr27 = new int[4];
        int[] iArr28 = new int[4];
        String str12 = "UARFCN";
        String str13 = "RSRQ";
        String str14 = "EARFCN";
        String str15 = "[";
        String str16 = "].";
        String str17 = "";
        Object obj2 = "";
        int i15 = 1;
        switch (indexOfEmTypes) {
            case 0:
                String str18 = strArr[0];
                map3.put(str18, true);
                int fieldValue13 = getFieldValue(msg3, "selectedPlmn.mcc1");
                int fieldValue14 = getFieldValue(msg3, "selectedPlmn.mcc2");
                int fieldValue15 = getFieldValue(msg3, "selectedPlmn.mcc3");
                int fieldValue16 = getFieldValue(msg3, "selectedPlmn.mnc1");
                int fieldValue17 = getFieldValue(msg3, "selectedPlmn.mnc2");
                int fieldValue18 = getFieldValue(msg3, "selectedPlmn.mnc3");
                int fieldValue19 = getFieldValue(msg3, MDMContent.EM_EMM_L4C_PLMNSEL_PARA__MNC);
                if (fieldValue13 == 15 && fieldValue14 == 15 && fieldValue15 == 15 && fieldValue16 == 15 && fieldValue17 == 15 && fieldValue18 == 15) {
                    setHashMapKeyValues(str18, i, "PLMN", "-");
                } else {
                    StringBuilder sb = new StringBuilder();
                    sb.append("");
                    sb.append(fieldValue13);
                    sb.append(fieldValue14);
                    sb.append(fieldValue15);
                    sb.append(fieldValue16);
                    sb.append(fieldValue17);
                    sb.append(fieldValue18 == 15 ? "" : Integer.valueOf(fieldValue18));
                    setHashMapKeyValues(str18, i, "PLMN", sb.toString());
                }
                if (fieldValue19 == 65534 || fieldValue19 == 0) {
                    setHashMapKeyValues(str18, i, "TAC", "-");
                } else {
                    setHashMapKeyValues(str18, i, "TAC", Integer.valueOf(fieldValue19));
                }
                return map3;
            case 1:
            case 33:
            default:
                map2 = map3;
                z = false;
                return map2;
            case 2:
                String str19 = strArr[0];
                map3.put(str19, true);
                int fieldValue20 = getFieldValue(msg3, "serv_inf.dl_earfcn");
                int fieldValue21 = getFieldValue(msg3, "serv_inf.pci");
                int fieldValue22 = getFieldValue(msg3, "serv_inf.band");
                setHashMapKeyValues(str19, i, "Cell ID", Integer.valueOf(getFieldValue(msg3, "serv_inf.cell_id")));
                setHashMapKeyValues(str19, i, "EARFCN", fieldValue20 == -1 ? "" : Integer.valueOf(fieldValue20));
                setHashMapKeyValues(str19, i, "PCI", fieldValue20 == -1 ? "" : Integer.valueOf(fieldValue21));
                setHashMapKeyValues(str19, i, "Band", fieldValue22 == 65535 ? "" : "Band" + fieldValue22);
                return map3;
            case 3:
                HashMap<String, Boolean> map4 = map3;
                String str20 = "EARFCN";
                String str21 = strArr[0];
                map4.put(str21, true);
                int fieldValue23 = getFieldValue(msg3, "cell_info[0].dl_bw");
                setHashMapKeyValues(str21, i, "DL_BW", this.mMappingBW.containsKey(Integer.valueOf(fieldValue23)) ? this.mMappingBW.get(Integer.valueOf(fieldValue23)) : "");
                String str22 = "RSRP";
                setHashMapKeyValues(str21, i, str22, getFieldValue(msg3, "dl_info[0].rsrp", true) + "");
                setHashMapKeyValues(str21, i, "RSRQ", getFieldValue(msg3, "dl_info[0].rsrq", true) + "");
                setHashMapKeyValues(str21, i, "SINR", getFieldValue(msg3, "dl_info[0]." + MDMContent.EM_EL1_STATUS_DL_INFO_SINR, true) + "");
                setHashMapKeyValues(str21, i, "RSSI", getFieldValue(msg3, "dl_info[0]." + MDMContent.EM_EL1_STATUS_DL_INFO_DL_RSSI + "[0]", true) + "," + getFieldValue(msg3, "dl_info[0]." + MDMContent.EM_EL1_STATUS_DL_INFO_DL_RSSI + "[1]", true));
                int fieldValue24 = getFieldValue(msg3, "cell_info[0].ant_port");
                int i16 = 0;
                int i17 = 0;
                while (true) {
                    String str23 = str22;
                    if (i17 < 2) {
                        StringBuilder sb2 = new StringBuilder();
                        sb2.append("dl_info[0].");
                        String str24 = str20;
                        sb2.append(MDMContent.EM_EL1_STATUS_DL_INFO_DL_RSSI);
                        sb2.append("[");
                        sb2.append(i17);
                        sb2.append("]");
                        int fieldValue25 = getFieldValue(msg3, sb2.toString(), true);
                        if (fieldValue25 <= 18 || fieldValue25 >= -140) {
                            i16++;
                        }
                        i17++;
                        str22 = str23;
                        str20 = str24;
                    } else {
                        String str25 = str20;
                        setHashMapKeyValues(str21, i, "Antenna", fieldValue24 + "x" + i16);
                        StringBuilder sb3 = new StringBuilder();
                        sb3.append("dl_info[0].");
                        sb3.append("ri");
                        setHashMapKeyValues(str21, i, "RI", getFieldValue(msg3, sb3.toString(), true) + "");
                        setHashMapKeyValues(str21, i, "TM", "TM" + getFieldValue(msg3, "dl_info[0].tm", true));
                        setHashMapKeyValues(str21, i, "DL Imcs", "" + getFieldValue(msg3, "dl_info[0]." + MDMContent.EM_EL1_STATUS_DL_INFO_DL_IMCS, true));
                        int fieldValue26 = getFieldValue(msg3, "dl_info[0]." + MDMContent.EM_EL1_STATUS_DL_INFO_DL_MOD0);
                        int i18 = fieldValue26 == 255 ? 0 : fieldValue26;
                        setHashMapKeyValues(str21, i, "DL Mod TB1", this.mMappingQam.containsKey(Integer.valueOf(i18)) ? this.mMappingQam.get(Integer.valueOf(i18)) : "");
                        int fieldValue27 = getFieldValue(msg3, "dl_info[0]." + MDMContent.EM_EL1_STATUS_DL_INFO_DL_MOD1);
                        int i19 = fieldValue27 == 255 ? 0 : fieldValue27;
                        setHashMapKeyValues(str21, i, "DL Mod TB2", this.mMappingQam.containsKey(Integer.valueOf(i19)) ? this.mMappingQam.get(Integer.valueOf(i19)) : "");
                        setHashMapKeyValues(str21, i, "UL Imcs", "" + getFieldValue(msg3, "ul_info[0].UL_Imcs", true));
                        int fieldValue28 = getFieldValue(msg3, "ul_info[0].UL_Mod", true);
                        int i20 = fieldValue28 == 255 ? this.oldUlMode : fieldValue28;
                        this.oldUlMode = i20;
                        setHashMapKeyValues(str21, i, "UL Mod", this.mMappingQam.containsKey(Integer.valueOf(i20)) ? this.mMappingQam.get(Integer.valueOf(this.oldUlMode)) : "");
                        String str26 = strArr[1];
                        map4.put(str26, true);
                        resetHashMapKeyValues(str26, i);
                        int fieldValue29 = getFieldValue(msg3, MDMContent.DL_CC_COUNT);
                        int fieldValue30 = getFieldValue(msg3, MDMContent.UL_CC_COUNT);
                        int i21 = i19;
                        int fieldValue31 = getFieldValue(msg3, MDMContent.FDD_EM_UL1_TAS_VERISION);
                        this.TasVersion = fieldValue31;
                        this.TasVersion = fieldValue31 == 0 ? 1 : 2;
                        int fieldValue32 = getFieldValue(msg3, "ul_info[0].tx_ant_type", true);
                        int i22 = i18;
                        int fieldValue33 = getFieldValue(msg3, "ul_info[0].rsrp_l_ant", true);
                        int fieldValue34 = getFieldValue(msg3, "ul_info[0].rsrp_u_ant", true);
                        int fieldValue35 = getFieldValue(msg3, "ul_info[0].tx_power", true);
                        int fieldValue36 = FeatureSupport.is93Modem() ? getFieldValue(msg3, "ul_info[0].tas_status") : 2;
                        if (fieldValue29 == 0) {
                            str2 = "PCI";
                            this.TasVersion = 1;
                            str3 = "].";
                            setHashMapKeyValues(str26, i, new String[]{tasEableMapping(fieldValue36), "", "", "", ""});
                        } else {
                            str2 = "PCI";
                            str3 = "].";
                            if (fieldValue29 == 1 && fieldValue30 == 0) {
                                setHashMapKeyValues(str26, i, new String[]{tasEableMapping(fieldValue36), "", "", rscpCheck(fieldValue33), rscpCheck(fieldValue34)});
                            } else if (fieldValue29 >= 1 && fieldValue30 >= 1) {
                                setHashMapKeyValues(str26, i, new String[]{tasEableMapping(fieldValue36), antidxMapping(fieldValue32), fieldValue35 + "", rscpCheck(fieldValue33), rscpCheck(fieldValue34)});
                            }
                        }
                        String str27 = strArr[6];
                        map4.put(str27, true);
                        resetHashMapKeyValues(str27, i);
                        String str28 = "cell_info[";
                        int fieldValue37 = getFieldValue(msg3, "cell_info[0]." + MDMContent.EM_EL1_STATUS_CELL_INFO_DL_BW);
                        int fieldValue38 = getFieldValue(msg3, "cell_info[0]." + MDMContent.EM_EL1_STATUS_CELL_INFO_UL_BW);
                        int fieldValue39 = getFieldValue(msg3, "cell_info[0].tm");
                        int fieldValue40 = getFieldValue(msg3, "cell_info[0].dlFreq");
                        int fieldValue41 = getFieldValue(msg3, "cell_info[0].ulFreq");
                        int fieldValue42 = getFieldValue(msg3, "dl_info[0].DL_Mod0");
                        int i23 = fieldValue42 == 255 ? i22 : fieldValue42;
                        int fieldValue43 = getFieldValue(msg3, "dl_info[0].DL_Mod1");
                        int i24 = fieldValue43 == 255 ? i21 : fieldValue43;
                        int fieldValue44 = getFieldValue(msg3, "ul_info[0].UL_Mod");
                        int i25 = fieldValue44 == 255 ? 0 : fieldValue44;
                        int i26 = 0;
                        while (true) {
                            HashMap<String, Boolean> map5 = map4;
                            if (i26 >= 3) {
                                int i27 = i24;
                                int i28 = i25;
                                String str29 = str3;
                                int i29 = 0;
                                while (i29 < 4) {
                                    String str30 = "dl_info[" + i29 + str29;
                                    StringBuilder sb4 = new StringBuilder();
                                    String str31 = str28;
                                    sb4.append("ul_info[");
                                    sb4.append(i29);
                                    sb4.append(str29);
                                    String string = sb4.toString();
                                    StringBuilder sb5 = new StringBuilder();
                                    sb5.append("cell_info[");
                                    sb5.append(i29);
                                    sb5.append(str29);
                                    iArr17[i29] = getFieldValue(msg3, sb5.toString() + MDMContent.EM_EL1_STATUS_CELL_INFO_ANT_PORT, true);
                                    iArr18[i29] = getFieldValue(msg3, str30 + MDMContent.EM_EL1_STATUS_DL_INFO_DL_TPUT);
                                    iArr19[i29] = getFieldValue(msg3, string + MDMContent.EM_EL1_STATUS_UL_INFO_UL_TPUT);
                                    iArr20[i29] = getFieldValue(msg3, str30 + MDMContent.EM_EL1_STATUS_DL_INFO_DL_IMCS, true);
                                    iArr21[i29] = getFieldValue(msg3, string + MDMContent.EM_EL1_STATUS_UL_INFO_UL_IMCS, true);
                                    iArr22[i29] = getFieldValue(msg3, str30 + MDMContent.EM_EL1_STATUS_DL_INFO_DL_BLER, true);
                                    iArr23[i29] = getFieldValue(msg3, string + MDMContent.EM_EL1_STATUS_UL_INFO_UL_BLER, true);
                                    iArr24[i29] = getFieldValue(msg3, str30 + MDMContent.EM_EL1_STATUS_DL_INFO_DL_RB, true);
                                    iArr25[i29] = getFieldValue(msg3, string + MDMContent.EM_EL1_STATUS_UL_INFO_UL_RB, true);
                                    iArr26[i29] = getFieldValue(msg3, str30 + MDMContent.EM_EL1_STATUS_DL_INFO_CQI_CW0, true);
                                    iArr27[i29] = getFieldValue(msg3, str30 + MDMContent.EM_EL1_STATUS_DL_INFO_CQI_CW1, true);
                                    iArr28[i29] = getFieldValue(msg3, str30 + "ri");
                                    i29++;
                                    i23 = i23;
                                    str28 = str31;
                                }
                                addHashMapKeyValues(str27, i, new String[]{"Band", "0", iArr[0] + "", iArr[1] + "", iArr[2] + ""});
                                addHashMapKeyValues(str27, i, new String[]{"DL BW(MHz)", getValueFromMapping(fieldValue37, this.mMappingBW), getValueFromMapping(iArr2[0], this.mMappingBW), getValueFromMapping(iArr2[1], this.mMappingBW), getValueFromMapping(iArr2[2], this.mMappingBW)});
                                addHashMapKeyValues(str27, i, new String[]{"UL BW(MHz)", getValueFromMapping(fieldValue38, this.mMappingBW), getValueFromMapping(iArr3[0], this.mMappingBW), getValueFromMapping(iArr3[1], this.mMappingBW), getValueFromMapping(iArr3[2], this.mMappingBW)});
                                addHashMapKeyValues(str27, i, new String[]{"TM", fieldValue39 + "", iArr4[0] + "", iArr4[1] + "", iArr4[2] + ""});
                                addHashMapKeyValues(str27, i, new String[]{str2, "0", iArr5[0] + "", iArr5[1] + "", iArr5[2] + ""});
                                addHashMapKeyValues(str27, i, new String[]{str25, "0", jArr[0] + "", jArr[1] + "", jArr[2] + ""});
                                addHashMapKeyValues(str27, i, new String[]{"RS_SNR", (((float) 0) / 4.0f) + "", (((float) iArr6[0]) / 4.0f) + "", (((float) iArr6[1]) / 4.0f) + "", (((float) iArr6[2]) / 4.0f) + ""});
                                addHashMapKeyValues(str27, i, new String[]{"DL Freq", fieldValue40 + "", iArr7[0] + "", iArr7[1] + "", iArr7[2] + ""});
                                addHashMapKeyValues(str27, i, new String[]{"UL Freq", fieldValue41 + "", iArr8[0] + "", iArr8[1] + "", iArr8[2] + ""});
                                addHashMapKeyValues(str27, i, new String[]{str23, (((float) 0) / 4.0f) + "", (((float) iArr9[0]) / 4.0f) + "", (((float) iArr9[1]) / 4.0f) + "", (((float) iArr9[2]) / 4.0f) + ""});
                                addHashMapKeyValues(str27, i, new String[]{"RSRQ", (((float) 0) / 4.0f) + "", (((float) iArr10[0]) / 4.0f) + "", (((float) iArr10[1]) / 4.0f) + "", (((float) iArr10[2]) / 4.0f) + ""});
                                addHashMapKeyValues(str27, i, new String[]{"DL Mod TB1", getValueFromMapping(i23, this.mLteMappingQam), getValueFromMapping(iArr12[0], this.mLteMappingQam), getValueFromMapping(iArr12[1], this.mLteMappingQam), getValueFromMapping(iArr12[2], this.mLteMappingQam)});
                                addHashMapKeyValues(str27, i, new String[]{"DL Mod TB2", getValueFromMapping(i27, this.mLteMappingQam), getValueFromMapping(iArr14[0], this.mLteMappingQam), getValueFromMapping(iArr14[1], this.mLteMappingQam), getValueFromMapping(iArr14[2], this.mLteMappingQam)});
                                addHashMapKeyValues(str27, i, new String[]{"UL Mod", getValueFromMapping(i28, this.mLteMappingQam), getValueFromMapping(iArr16[0], this.mLteMappingQam), getValueFromMapping(iArr16[1], this.mLteMappingQam), getValueFromMapping(iArr16[2], this.mLteMappingQam)});
                                return map5;
                            }
                            StringBuilder sb6 = new StringBuilder();
                            sb6.append("cell_info[");
                            int i30 = i25;
                            sb6.append(i26 + 1);
                            String str32 = str3;
                            sb6.append(str32);
                            int i31 = i24;
                            sb6.append(MDMContent.EM_EL1_STATUS_CELL_INFO_DL_BW);
                            iArr2[i26] = getFieldValue(msg3, sb6.toString());
                            iArr3[i26] = getFieldValue(msg3, "cell_info[" + (i26 + 1) + str32 + MDMContent.EM_EL1_STATUS_CELL_INFO_UL_BW);
                            iArr4[i26] = getFieldValue(msg3, "cell_info[" + (i26 + 1) + str32 + "tm");
                            StringBuilder sb7 = new StringBuilder();
                            sb7.append("cell_info[");
                            sb7.append(i26 + 1);
                            sb7.append("].dlFreq");
                            iArr7[i26] = getFieldValue(msg3, sb7.toString());
                            iArr8[i26] = getFieldValue(msg3, "cell_info[" + (i26 + 1) + "].ulFreq");
                            iArr11[i26] = getFieldValue(msg3, "dl_info[" + (i26 + 1) + "].DL_Mod0");
                            iArr12[i26] = iArr11[i26] == 255 ? iArr12[i26] : iArr11[i26];
                            iArr13[i26] = getFieldValue(msg3, "dl_info[" + (i26 + 1) + "].DL_Mod1");
                            iArr14[i26] = iArr13[i26] == 255 ? iArr14[i26] : iArr13[i26];
                            iArr15[i26] = getFieldValue(msg3, "ul_info[" + (i26 + 1) + "].UL_Mod");
                            iArr16[i26] = iArr15[i26] == 255 ? iArr16[i26] : iArr15[i26];
                            if (iArr[i26] == 0) {
                                iArr12[i26] = 0;
                                iArr14[i26] = 0;
                                iArr16[i26] = 0;
                            }
                            i26++;
                            str3 = str32;
                            i25 = i30;
                            i24 = i31;
                            map4 = map5;
                        }
                    }
                }
                break;
            case 4:
                String str33 = strArr[0];
                map3.put(str33, true);
                int fieldValue45 = getFieldValue(msg3, MDMContent.EM_ERRC_STATE_ERRC_STS);
                String valueFromMapping = getValueFromMapping(fieldValue45, this.ERRCStateMapping);
                setHashMapKeyValues(str33, i, "ERRC State", valueFromMapping);
                Elog.d("EmInfo/MDMComponent", "[" + str33 + "]ERRC State : " + fieldValue45 + ",state: " + valueFromMapping);
                return map3;
            case 5:
                String str34 = "EARFCN";
                String str35 = "RSRP";
                String str36 = "].";
                Boolean bool = true;
                String str37 = "PCI";
                Msg msg4 = msg3;
                HashMap<String, Boolean> map6 = map3;
                String str38 = "RSRQ";
                String str39 = strArr[2];
                map6.put(str39, 1);
                resetHashMapKeyValues(str39, i);
                String str40 = "scell_info_list.scell_info";
                int fieldValue46 = getFieldValue(msg4, "scell_info_list.num_scell");
                int i32 = 0;
                while (i32 < fieldValue46) {
                    StringBuilder sb8 = new StringBuilder();
                    sb8.append(str40);
                    sb8.append("[");
                    sb8.append(i32);
                    int i33 = fieldValue46;
                    String str41 = str36;
                    sb8.append(str41);
                    Object obj3 = obj2;
                    sb8.append("earfcn");
                    int fieldValue47 = getFieldValue(msg4, sb8.toString());
                    StringBuilder sb9 = new StringBuilder();
                    sb9.append(str40);
                    sb9.append("[");
                    sb9.append(i32);
                    sb9.append(str41);
                    Boolean bool2 = bool;
                    sb9.append("pci");
                    int fieldValue48 = getFieldValue(msg4, sb9.toString());
                    StringBuilder sb10 = new StringBuilder();
                    sb10.append(str40);
                    sb10.append("[");
                    sb10.append(i32);
                    sb10.append(str41);
                    HashMap<String, Boolean> map7 = map6;
                    sb10.append("rsrp");
                    int fieldValue49 = getFieldValue(msg4, sb10.toString(), true);
                    StringBuilder sb11 = new StringBuilder();
                    sb11.append(str40);
                    sb11.append("[");
                    sb11.append(i32);
                    sb11.append(str41);
                    String str42 = str38;
                    sb11.append("rsrq");
                    int fieldValue50 = getFieldValue(msg4, sb11.toString(), true);
                    int fieldValue51 = getFieldValue(msg4, str40 + "[" + i32 + str41 + "rs_snr_in_qdb", true);
                    StringBuilder sb12 = new StringBuilder();
                    sb12.append(str40);
                    sb12.append("[");
                    sb12.append(i32);
                    sb12.append(str41);
                    String str43 = str40;
                    sb12.append("serv_lte_band");
                    int fieldValue52 = getFieldValue(msg4, sb12.toString());
                    if (fieldValue47 == 0 || fieldValue48 == 0 || fieldValue47 == -1) {
                        str10 = str42;
                    } else {
                        addHashMapKeyValues(str39, i, str34, fieldValue47 == -1 ? obj3 : Integer.valueOf(fieldValue47));
                        addHashMapKeyValues(str39, i, str37, fieldValue47 == -1 ? obj3 : Integer.valueOf(fieldValue48));
                        addHashMapKeyValues(str39, i, "Band", fieldValue52 == 65535 ? obj3 : Integer.valueOf(fieldValue52));
                        addHashMapKeyValues(str39, i, str35, fieldValue49 == -1 ? obj3 : Float.valueOf(fieldValue49 / 4.0f));
                        str10 = str42;
                        addHashMapKeyValues(str39, i, str10, fieldValue50 == -1 ? obj3 : Float.valueOf(fieldValue50 / 4.0f));
                        addHashMapKeyValues(str39, i, "SINR", fieldValue51 == -1 ? obj3 : Float.valueOf(fieldValue51 / 4.0f));
                    }
                    i32++;
                    str38 = str10;
                    obj2 = obj3;
                    str40 = str43;
                    map6 = map7;
                    bool = bool2;
                    str36 = str41;
                    fieldValue46 = i33;
                }
                ?? r76 = obj2;
                String str44 = str38;
                String str45 = str36;
                String str46 = strArr[3];
                HashMap<String, Boolean> map8 = map6;
                map8.put(str46, bool);
                resetHashMapKeyValues(str46, i);
                String str47 = "inter_info.";
                int fieldValue53 = getFieldValue(msg4, "inter_info.freq_num");
                int i34 = 0;
                int i35 = 0;
                while (i35 < fieldValue53) {
                    int i36 = fieldValue53;
                    if (i35 < 4) {
                        StringBuilder sb13 = new StringBuilder();
                        sb13.append(str47);
                        String str48 = str47;
                        sb13.append("inter_freq");
                        sb13.append(str15);
                        sb13.append(i35);
                        sb13.append(str45);
                        String string2 = sb13.toString();
                        StringBuilder sb14 = new StringBuilder();
                        sb14.append(string2);
                        int i37 = i34;
                        sb14.append("valid");
                        int fieldValue54 = getFieldValue(msg4, sb14.toString());
                        StringBuilder sb15 = new StringBuilder();
                        sb15.append(string2);
                        HashMap<String, Boolean> map9 = map8;
                        sb15.append("earfcn");
                        int fieldValue55 = getFieldValue(msg4, sb15.toString());
                        StringBuilder sb16 = new StringBuilder();
                        sb16.append(string2);
                        Boolean bool3 = bool;
                        sb16.append("cell_num");
                        int fieldValue56 = getFieldValue(msg4, sb16.toString());
                        ?? r14 = new String[fieldValue56 < 6 ? fieldValue56 : 6];
                        String str49 = str44;
                        ?? r4 = new String[fieldValue56 < 6 ? fieldValue56 : 6];
                        String str50 = str35;
                        ?? r10 = new String[fieldValue56 < 6 ? fieldValue56 : 6];
                        String str51 = str37;
                        ?? r8 = new String[fieldValue56 < 6 ? fieldValue56 : 6];
                        String str52 = str34;
                        ?? r1 = new String[fieldValue56 < 6 ? fieldValue56 : 6];
                        String str53 = str46;
                        int i38 = 0;
                        int i39 = i37;
                        ?? r77 = r76;
                        while (i38 < fieldValue56) {
                            int i40 = fieldValue56;
                            if (i38 >= 6) {
                            }
                            StringBuilder sb17 = new StringBuilder();
                            sb17.append(string2);
                            String str54 = string2;
                            sb17.append(MDMContent.EM_ERRC_MOB_MEAS_INTRARAT_INTER_INFO_INTER_CELL);
                            sb17.append(str15);
                            sb17.append(i38);
                            sb17.append(str45);
                            String string3 = sb17.toString();
                            StringBuilder sb18 = new StringBuilder();
                            sb18.append(string3);
                            String str55 = str45;
                            sb18.append("pci");
                            int fieldValue57 = getFieldValue(msg4, sb18.toString());
                            StringBuilder sb19 = new StringBuilder();
                            sb19.append(string3);
                            String str56 = str15;
                            sb19.append("rsrp");
                            int fieldValue58 = getFieldValue(msg4, sb19.toString(), true);
                            int fieldValue59 = getFieldValue(msg4, string3 + "rsrq", true);
                            ?? sb20 = new StringBuilder();
                            Msg msg5 = msg4;
                            ?? r11 = r77;
                            sb20.append(r11);
                            sb20.append(i39);
                            r14[i38] = sb20.toString();
                            if (fieldValue54 > 0) {
                                ?? sb21 = new StringBuilder();
                                sb21.append(r11);
                                sb21.append(fieldValue55);
                                r1[i38] = sb21.toString();
                                ?? sb22 = new StringBuilder();
                                sb22.append(r11);
                                sb22.append(fieldValue57);
                                r4[i38] = sb22.toString();
                                ?? sb23 = new StringBuilder();
                                sb23.append(r11);
                                sb23.append(fieldValue58 != -1 ? Float.valueOf(fieldValue58 / 4.0f) : r11);
                                r10[i38] = sb23.toString();
                                ?? sb24 = new StringBuilder();
                                sb24.append(r11);
                                sb24.append(fieldValue59 != -1 ? Float.valueOf(fieldValue59 / 4.0f) : r11);
                                r8[i38] = sb24.toString();
                            } else {
                                r8[i35] = r11;
                                r10[i35] = r11;
                                r4[i35] = r11;
                                r1[i35] = r11;
                                r14[i35] = r11;
                            }
                            i39++;
                            i38++;
                            r77 = r11;
                            fieldValue56 = i40;
                            string2 = str54;
                            str45 = str55;
                            str15 = str56;
                            msg4 = msg5;
                            break;
                        }
                        setHashMapKeyValues(str53, i, "LTE", r14);
                        setHashMapKeyValues(str53, i, str52, r1);
                        setHashMapKeyValues(str53, i, str51, r4);
                        setHashMapKeyValues(str53, i, str50, r10);
                        setHashMapKeyValues(str53, i, str49, r8);
                        i35++;
                        str34 = str52;
                        str46 = str53;
                        str37 = str51;
                        r76 = r77;
                        str35 = str50;
                        str44 = str49;
                        fieldValue53 = i36;
                        i34 = i39;
                        str47 = str48;
                        map8 = map9;
                        bool = bool3;
                        str45 = str45;
                        str15 = str15;
                        msg4 = msg4;
                    } else {
                        str4 = "intra_info.";
                        msg = msg4;
                        fieldValue = getFieldValue(msg, "intra_info.cell_num");
                        if (fieldValue < 16) {
                            i2 = fieldValue;
                        } else {
                            i2 = 16;
                        }
                        r7 = new String[i2];
                        if (fieldValue < 16) {
                            i3 = fieldValue;
                        } else {
                            i3 = 16;
                        }
                        r9 = new String[i3];
                        if (fieldValue < 16) {
                            i4 = fieldValue;
                        } else {
                            i4 = 16;
                        }
                        r13 = new String[i4];
                        if (fieldValue < 16) {
                            i5 = fieldValue;
                        } else {
                            i5 = 16;
                        }
                        r15 = new String[i5];
                        if (fieldValue < 16) {
                            i6 = fieldValue;
                        } else {
                            i6 = 16;
                        }
                        r3 = new String[i6];
                        str5 = str44;
                        fieldValue2 = getFieldValue(msg, "serving_info.earfcn");
                        str6 = str37;
                        String str57 = str35;
                        i7 = 0;
                        i8 = i34;
                        while (true) {
                            if (i7 < fieldValue) {
                                i9 = fieldValue;
                                if (i7 < 16) {
                                    StringBuilder sb25 = new StringBuilder();
                                    sb25.append(str4);
                                    String str58 = str4;
                                    sb25.append(MDMContent.EM_ERRC_MOB_MEAS_INTRARAT_INTRA_INFO_INTRA_CELL);
                                    sb25.append(str15);
                                    sb25.append(i7);
                                    sb25.append(str45);
                                    String string4 = sb25.toString();
                                    StringBuilder sb26 = new StringBuilder();
                                    sb26.append(string4);
                                    String str59 = str34;
                                    sb26.append("valid");
                                    fieldValue9 = getFieldValue(msg, sb26.toString());
                                    fieldValue10 = getFieldValue(msg, string4 + "pci");
                                    StringBuilder sb27 = new StringBuilder();
                                    sb27.append(string4);
                                    String str60 = str46;
                                    sb27.append("rsrp");
                                    fieldValue11 = getFieldValue(msg, sb27.toString(), true);
                                    fieldValue12 = getFieldValue(msg, string4 + "rsrq", true);
                                    ?? sb28 = new StringBuilder();
                                    sb28.append(r76);
                                    sb28.append(i8);
                                    r7[i7] = sb28.toString();
                                    if (fieldValue9 > 0) {
                                        ?? sb29 = new StringBuilder();
                                        sb29.append(r76);
                                        sb29.append(fieldValue2);
                                        r9[i7] = sb29.toString();
                                        ?? sb30 = new StringBuilder();
                                        sb30.append(r76);
                                        sb30.append(fieldValue10);
                                        r13[i7] = sb30.toString();
                                        ?? sb31 = new StringBuilder();
                                        sb31.append(r76);
                                        if (fieldValue11 != -1) {
                                            ValueOf = Float.valueOf(fieldValue11 / 4.0f);
                                        } else {
                                            ValueOf = r76;
                                        }
                                        sb31.append(ValueOf);
                                        r15[i7] = sb31.toString();
                                        ?? sb32 = new StringBuilder();
                                        sb32.append(r76);
                                        if (fieldValue12 != -1) {
                                            ValueOf2 = Float.valueOf(fieldValue12 / 4.0f);
                                        } else {
                                            ValueOf2 = r76;
                                        }
                                        sb32.append(ValueOf2);
                                        r3[i7] = sb32.toString();
                                    } else {
                                        r3[i7] = r76;
                                        r15[i7] = r76;
                                        r13[i7] = r76;
                                        r9[i7] = r76;
                                        r7[i7] = r76;
                                    }
                                    i8++;
                                    i7++;
                                    fieldValue = i9;
                                    str4 = str58;
                                    str46 = str60;
                                    str34 = str59;
                                }
                            } else {
                                i9 = fieldValue;
                            }
                        }
                        String str61 = str46;
                        addHashMapKeyValues(str61, i, "LTE", r7);
                        str7 = str34;
                        addHashMapKeyValues(str61, i, str7, r9);
                        addHashMapKeyValues(str61, i, str6, r13);
                        str8 = str57;
                        addHashMapKeyValues(str61, i, str8, r15);
                        addHashMapKeyValues(str61, i, str5, r3);
                        str9 = strArr[6];
                        map8.put(str9, bool);
                        resetHashMapKeyValues(str9, i);
                        fieldValue3 = getFieldValue(msg, "serving_info.earfcn");
                        fieldValue4 = getFieldValue(msg, "serving_info.pci");
                        fieldValue5 = getFieldValue(msg, "serving_info.rsrp", true);
                        fieldValue6 = getFieldValue(msg, "serving_info.rsrq", true);
                        fieldValue7 = getFieldValue(msg, "serving_info.rs_snr_in_qdb", true);
                        fieldValue8 = getFieldValue(msg, "serving_info.serv_lte_band");
                        i10 = 0;
                        while (true) {
                            i11 = fieldValue5;
                            if (i10 < 3) {
                                ?? sb33 = new StringBuilder();
                                sb33.append(fieldValue8);
                                sb33.append(r76);
                                ?? sb34 = new StringBuilder();
                                sb34.append(iArr[0]);
                                sb34.append(r76);
                                ?? sb35 = new StringBuilder();
                                sb35.append(iArr[1]);
                                sb35.append(r76);
                                ?? sb36 = new StringBuilder();
                                sb36.append(iArr[2]);
                                sb36.append(r76);
                                addHashMapKeyValues(str9, i, new String[]{"Band", sb33.toString(), sb34.toString(), sb35.toString(), sb36.toString()});
                                addHashMapKeyValues(str9, i, new String[]{"DL BW(MHz)", getValueFromMapping(0, this.mMappingBW), getValueFromMapping(iArr2[0], this.mMappingBW), getValueFromMapping(iArr2[1], this.mMappingBW), getValueFromMapping(iArr2[2], this.mMappingBW)});
                                addHashMapKeyValues(str9, i, new String[]{"UL BW(MHz)", getValueFromMapping(0, this.mMappingBW), getValueFromMapping(iArr3[0], this.mMappingBW), getValueFromMapping(iArr3[1], this.mMappingBW), getValueFromMapping(iArr3[2], this.mMappingBW)});
                                ?? sb37 = new StringBuilder();
                                sb37.append(0);
                                sb37.append(r76);
                                ?? sb38 = new StringBuilder();
                                sb38.append(iArr4[0]);
                                sb38.append(r76);
                                ?? sb39 = new StringBuilder();
                                sb39.append(iArr4[1]);
                                sb39.append(r76);
                                ?? sb40 = new StringBuilder();
                                sb40.append(iArr4[2]);
                                sb40.append(r76);
                                addHashMapKeyValues(str9, i, new String[]{"TM", sb37.toString(), sb38.toString(), sb39.toString(), sb40.toString()});
                                ?? sb41 = new StringBuilder();
                                sb41.append(fieldValue4);
                                sb41.append(r76);
                                ?? sb42 = new StringBuilder();
                                sb42.append(iArr5[0]);
                                sb42.append(r76);
                                ?? sb43 = new StringBuilder();
                                sb43.append(iArr5[1]);
                                sb43.append(r76);
                                ?? sb44 = new StringBuilder();
                                sb44.append(iArr5[2]);
                                sb44.append(r76);
                                addHashMapKeyValues(str9, i, new String[]{str6, sb41.toString(), sb42.toString(), sb43.toString(), sb44.toString()});
                                ?? sb45 = new StringBuilder();
                                sb45.append(fieldValue3);
                                sb45.append(r76);
                                ?? sb46 = new StringBuilder();
                                sb46.append(jArr[0]);
                                sb46.append(r76);
                                ?? sb47 = new StringBuilder();
                                sb47.append(jArr[1]);
                                sb47.append(r76);
                                ?? sb48 = new StringBuilder();
                                sb48.append(jArr[2]);
                                sb48.append(r76);
                                addHashMapKeyValues(str9, i, new String[]{str7, sb45.toString(), sb46.toString(), sb47.toString(), sb48.toString()});
                                ?? sb49 = new StringBuilder();
                                sb49.append(fieldValue7 / 4.0f);
                                sb49.append(r76);
                                ?? sb50 = new StringBuilder();
                                sb50.append(iArr6[0] / 4.0f);
                                sb50.append(r76);
                                ?? sb51 = new StringBuilder();
                                sb51.append(iArr6[1] / 4.0f);
                                sb51.append(r76);
                                ?? sb52 = new StringBuilder();
                                sb52.append(iArr6[2] / 4.0f);
                                sb52.append(r76);
                                addHashMapKeyValues(str9, i, new String[]{"RS_SNR", sb49.toString(), sb50.toString(), sb51.toString(), sb52.toString()});
                                ?? sb53 = new StringBuilder();
                                sb53.append(0);
                                sb53.append(r76);
                                ?? sb54 = new StringBuilder();
                                sb54.append(iArr7[0]);
                                sb54.append(r76);
                                ?? sb55 = new StringBuilder();
                                sb55.append(iArr7[1]);
                                sb55.append(r76);
                                ?? sb56 = new StringBuilder();
                                sb56.append(iArr7[2]);
                                sb56.append(r76);
                                addHashMapKeyValues(str9, i, new String[]{"DL Freq", sb53.toString(), sb54.toString(), sb55.toString(), sb56.toString()});
                                ?? sb57 = new StringBuilder();
                                sb57.append(0);
                                sb57.append(r76);
                                ?? sb58 = new StringBuilder();
                                sb58.append(iArr8[0]);
                                sb58.append(r76);
                                ?? sb59 = new StringBuilder();
                                sb59.append(iArr8[1]);
                                sb59.append(r76);
                                ?? sb60 = new StringBuilder();
                                sb60.append(iArr8[2]);
                                sb60.append(r76);
                                addHashMapKeyValues(str9, i, new String[]{"UL Freq", sb57.toString(), sb58.toString(), sb59.toString(), sb60.toString()});
                                ?? sb61 = new StringBuilder();
                                sb61.append(i11 / 4.0f);
                                sb61.append(r76);
                                ?? sb62 = new StringBuilder();
                                sb62.append(iArr9[0] / 4.0f);
                                sb62.append(r76);
                                ?? sb63 = new StringBuilder();
                                sb63.append(iArr9[1] / 4.0f);
                                sb63.append(r76);
                                ?? sb64 = new StringBuilder();
                                sb64.append(iArr9[2] / 4.0f);
                                sb64.append(r76);
                                addHashMapKeyValues(str9, i, new String[]{str8, sb61.toString(), sb62.toString(), sb63.toString(), sb64.toString()});
                                ?? sb65 = new StringBuilder();
                                sb65.append(fieldValue6 / 4.0f);
                                sb65.append(r76);
                                ?? sb66 = new StringBuilder();
                                sb66.append(iArr10[0] / 4.0f);
                                sb66.append(r76);
                                ?? sb67 = new StringBuilder();
                                sb67.append(iArr10[1] / 4.0f);
                                sb67.append(r76);
                                ?? sb68 = new StringBuilder();
                                sb68.append(iArr10[2] / 4.0f);
                                sb68.append(r76);
                                addHashMapKeyValues(str9, i, new String[]{str5, sb65.toString(), sb66.toString(), sb67.toString(), sb68.toString()});
                                addHashMapKeyValues(str9, i, new String[]{"DL Mod TB1", getValueFromMapping(0, this.mLteMappingQam), getValueFromMapping(iArr12[0], this.mLteMappingQam), getValueFromMapping(iArr12[1], this.mLteMappingQam), getValueFromMapping(iArr12[2], this.mLteMappingQam)});
                                addHashMapKeyValues(str9, i, new String[]{"DL Mod TB2", getValueFromMapping(0, this.mLteMappingQam), getValueFromMapping(iArr14[0], this.mLteMappingQam), getValueFromMapping(iArr14[1], this.mLteMappingQam), getValueFromMapping(iArr14[2], this.mLteMappingQam)});
                                addHashMapKeyValues(str9, i, new String[]{"UL Mod", getValueFromMapping(0, this.mLteMappingQam), getValueFromMapping(iArr16[0], this.mLteMappingQam), getValueFromMapping(iArr16[1], this.mLteMappingQam), getValueFromMapping(iArr16[2], this.mLteMappingQam)});
                                return map8;
                            }
                            StringBuilder sb69 = new StringBuilder();
                            sb69.append("scell_info_list.scell_info[");
                            sb69.append(i10);
                            String str62 = str8;
                            String str63 = str45;
                            sb69.append(str63);
                            sb69.append("earfcn");
                            jArr[i10] = getFieldValue(msg, sb69.toString());
                            iArr5[i10] = getFieldValue(msg, "scell_info_list.scell_info[" + i10 + str63 + "pci");
                            iArr9[i10] = getFieldValue(msg, "scell_info_list.scell_info[" + i10 + str63 + "rsrp", true);
                            iArr10[i10] = getFieldValue(msg, "scell_info_list.scell_info[" + i10 + str63 + "rsrq", true);
                            iArr6[i10] = getFieldValue(msg, "scell_info_list.scell_info[" + i10 + str63 + "rs_snr_in_qdb", true);
                            iArr[i10] = getFieldValue(msg, "scell_info_list.scell_info[" + i10 + str63 + "serv_lte_band");
                            i10++;
                            fieldValue5 = i11;
                            fieldValue7 = fieldValue7;
                            str8 = str62;
                            fieldValue3 = fieldValue3;
                        }
                    }
                }
                str4 = "intra_info.";
                msg = msg4;
                fieldValue = getFieldValue(msg, "intra_info.cell_num");
                if (fieldValue < 16) {
                    i2 = fieldValue;
                } else {
                    i2 = 16;
                }
                r7 = new String[i2];
                if (fieldValue < 16) {
                    i3 = fieldValue;
                } else {
                    i3 = 16;
                }
                r9 = new String[i3];
                if (fieldValue < 16) {
                    i4 = fieldValue;
                } else {
                    i4 = 16;
                }
                r13 = new String[i4];
                if (fieldValue < 16) {
                    i5 = fieldValue;
                } else {
                    i5 = 16;
                }
                r15 = new String[i5];
                if (fieldValue < 16) {
                    i6 = fieldValue;
                } else {
                    i6 = 16;
                }
                r3 = new String[i6];
                str5 = str44;
                fieldValue2 = getFieldValue(msg, "serving_info.earfcn");
                str6 = str37;
                String str510 = str35;
                i7 = 0;
                i8 = i34;
                while (true) {
                    if (i7 < fieldValue) {
                        i9 = fieldValue;
                        if (i7 < 16) {
                            StringBuilder sb210 = new StringBuilder();
                            sb210.append(str4);
                            String str511 = str4;
                            sb210.append(MDMContent.EM_ERRC_MOB_MEAS_INTRARAT_INTRA_INFO_INTRA_CELL);
                            sb210.append(str15);
                            sb210.append(i7);
                            sb210.append(str45);
                            String string5 = sb210.toString();
                            StringBuilder sb211 = new StringBuilder();
                            sb211.append(string5);
                            String str512 = str34;
                            sb211.append("valid");
                            fieldValue9 = getFieldValue(msg, sb211.toString());
                            fieldValue10 = getFieldValue(msg, string5 + "pci");
                            StringBuilder sb212 = new StringBuilder();
                            sb212.append(string5);
                            String str64 = str46;
                            sb212.append("rsrp");
                            fieldValue11 = getFieldValue(msg, sb212.toString(), true);
                            fieldValue12 = getFieldValue(msg, string5 + "rsrq", true);
                            ?? sb213 = new StringBuilder();
                            sb213.append(r76);
                            sb213.append(i8);
                            r7[i7] = sb213.toString();
                            if (fieldValue9 > 0) {
                                ?? sb214 = new StringBuilder();
                                sb214.append(r76);
                                sb214.append(fieldValue2);
                                r9[i7] = sb214.toString();
                                ?? sb310 = new StringBuilder();
                                sb310.append(r76);
                                sb310.append(fieldValue10);
                                r13[i7] = sb310.toString();
                                ?? sb311 = new StringBuilder();
                                sb311.append(r76);
                                if (fieldValue11 != -1) {
                                    ValueOf = Float.valueOf(fieldValue11 / 4.0f);
                                } else {
                                    ValueOf = r76;
                                }
                                sb311.append(ValueOf);
                                r15[i7] = sb311.toString();
                                ?? sb312 = new StringBuilder();
                                sb312.append(r76);
                                if (fieldValue12 != -1) {
                                    ValueOf2 = Float.valueOf(fieldValue12 / 4.0f);
                                } else {
                                    ValueOf2 = r76;
                                }
                                sb312.append(ValueOf2);
                                r3[i7] = sb312.toString();
                            } else {
                                r3[i7] = r76;
                                r15[i7] = r76;
                                r13[i7] = r76;
                                r9[i7] = r76;
                                r7[i7] = r76;
                            }
                            i8++;
                            i7++;
                            fieldValue = i9;
                            str4 = str511;
                            str46 = str64;
                            str34 = str512;
                        }
                    } else {
                        i9 = fieldValue;
                    }
                }
                String str65 = str46;
                addHashMapKeyValues(str65, i, "LTE", r7);
                str7 = str34;
                addHashMapKeyValues(str65, i, str7, r9);
                addHashMapKeyValues(str65, i, str6, r13);
                str8 = str510;
                addHashMapKeyValues(str65, i, str8, r15);
                addHashMapKeyValues(str65, i, str5, r3);
                str9 = strArr[6];
                map8.put(str9, bool);
                resetHashMapKeyValues(str9, i);
                fieldValue3 = getFieldValue(msg, "serving_info.earfcn");
                fieldValue4 = getFieldValue(msg, "serving_info.pci");
                fieldValue5 = getFieldValue(msg, "serving_info.rsrp", true);
                fieldValue6 = getFieldValue(msg, "serving_info.rsrq", true);
                fieldValue7 = getFieldValue(msg, "serving_info.rs_snr_in_qdb", true);
                fieldValue8 = getFieldValue(msg, "serving_info.serv_lte_band");
                i10 = 0;
                while (true) {
                    i11 = fieldValue5;
                    if (i10 < 3) {
                        ?? sb313 = new StringBuilder();
                        sb313.append(fieldValue8);
                        sb313.append(r76);
                        ?? sb314 = new StringBuilder();
                        sb314.append(iArr[0]);
                        sb314.append(r76);
                        ?? sb315 = new StringBuilder();
                        sb315.append(iArr[1]);
                        sb315.append(r76);
                        ?? sb316 = new StringBuilder();
                        sb316.append(iArr[2]);
                        sb316.append(r76);
                        addHashMapKeyValues(str9, i, new String[]{"Band", sb313.toString(), sb314.toString(), sb315.toString(), sb316.toString()});
                        addHashMapKeyValues(str9, i, new String[]{"DL BW(MHz)", getValueFromMapping(0, this.mMappingBW), getValueFromMapping(iArr2[0], this.mMappingBW), getValueFromMapping(iArr2[1], this.mMappingBW), getValueFromMapping(iArr2[2], this.mMappingBW)});
                        addHashMapKeyValues(str9, i, new String[]{"UL BW(MHz)", getValueFromMapping(0, this.mMappingBW), getValueFromMapping(iArr3[0], this.mMappingBW), getValueFromMapping(iArr3[1], this.mMappingBW), getValueFromMapping(iArr3[2], this.mMappingBW)});
                        ?? sb317 = new StringBuilder();
                        sb317.append(0);
                        sb317.append(r76);
                        ?? sb318 = new StringBuilder();
                        sb318.append(iArr4[0]);
                        sb318.append(r76);
                        ?? sb319 = new StringBuilder();
                        sb319.append(iArr4[1]);
                        sb319.append(r76);
                        ?? sb410 = new StringBuilder();
                        sb410.append(iArr4[2]);
                        sb410.append(r76);
                        addHashMapKeyValues(str9, i, new String[]{"TM", sb317.toString(), sb318.toString(), sb319.toString(), sb410.toString()});
                        ?? sb411 = new StringBuilder();
                        sb411.append(fieldValue4);
                        sb411.append(r76);
                        ?? sb412 = new StringBuilder();
                        sb412.append(iArr5[0]);
                        sb412.append(r76);
                        ?? sb413 = new StringBuilder();
                        sb413.append(iArr5[1]);
                        sb413.append(r76);
                        ?? sb414 = new StringBuilder();
                        sb414.append(iArr5[2]);
                        sb414.append(r76);
                        addHashMapKeyValues(str9, i, new String[]{str6, sb411.toString(), sb412.toString(), sb413.toString(), sb414.toString()});
                        ?? sb415 = new StringBuilder();
                        sb415.append(fieldValue3);
                        sb415.append(r76);
                        ?? sb416 = new StringBuilder();
                        sb416.append(jArr[0]);
                        sb416.append(r76);
                        ?? sb417 = new StringBuilder();
                        sb417.append(jArr[1]);
                        sb417.append(r76);
                        ?? sb418 = new StringBuilder();
                        sb418.append(jArr[2]);
                        sb418.append(r76);
                        addHashMapKeyValues(str9, i, new String[]{str7, sb415.toString(), sb416.toString(), sb417.toString(), sb418.toString()});
                        ?? sb419 = new StringBuilder();
                        sb419.append(fieldValue7 / 4.0f);
                        sb419.append(r76);
                        ?? sb510 = new StringBuilder();
                        sb510.append(iArr6[0] / 4.0f);
                        sb510.append(r76);
                        ?? sb511 = new StringBuilder();
                        sb511.append(iArr6[1] / 4.0f);
                        sb511.append(r76);
                        ?? sb512 = new StringBuilder();
                        sb512.append(iArr6[2] / 4.0f);
                        sb512.append(r76);
                        addHashMapKeyValues(str9, i, new String[]{"RS_SNR", sb419.toString(), sb510.toString(), sb511.toString(), sb512.toString()});
                        ?? sb513 = new StringBuilder();
                        sb513.append(0);
                        sb513.append(r76);
                        ?? sb514 = new StringBuilder();
                        sb514.append(iArr7[0]);
                        sb514.append(r76);
                        ?? sb515 = new StringBuilder();
                        sb515.append(iArr7[1]);
                        sb515.append(r76);
                        ?? sb516 = new StringBuilder();
                        sb516.append(iArr7[2]);
                        sb516.append(r76);
                        addHashMapKeyValues(str9, i, new String[]{"DL Freq", sb513.toString(), sb514.toString(), sb515.toString(), sb516.toString()});
                        ?? sb517 = new StringBuilder();
                        sb517.append(0);
                        sb517.append(r76);
                        ?? sb518 = new StringBuilder();
                        sb518.append(iArr8[0]);
                        sb518.append(r76);
                        ?? sb519 = new StringBuilder();
                        sb519.append(iArr8[1]);
                        sb519.append(r76);
                        ?? sb610 = new StringBuilder();
                        sb610.append(iArr8[2]);
                        sb610.append(r76);
                        addHashMapKeyValues(str9, i, new String[]{"UL Freq", sb517.toString(), sb518.toString(), sb519.toString(), sb610.toString()});
                        ?? sb611 = new StringBuilder();
                        sb611.append(i11 / 4.0f);
                        sb611.append(r76);
                        ?? sb612 = new StringBuilder();
                        sb612.append(iArr9[0] / 4.0f);
                        sb612.append(r76);
                        ?? sb613 = new StringBuilder();
                        sb613.append(iArr9[1] / 4.0f);
                        sb613.append(r76);
                        ?? sb614 = new StringBuilder();
                        sb614.append(iArr9[2] / 4.0f);
                        sb614.append(r76);
                        addHashMapKeyValues(str9, i, new String[]{str8, sb611.toString(), sb612.toString(), sb613.toString(), sb614.toString()});
                        ?? sb615 = new StringBuilder();
                        sb615.append(fieldValue6 / 4.0f);
                        sb615.append(r76);
                        ?? sb616 = new StringBuilder();
                        sb616.append(iArr10[0] / 4.0f);
                        sb616.append(r76);
                        ?? sb617 = new StringBuilder();
                        sb617.append(iArr10[1] / 4.0f);
                        sb617.append(r76);
                        ?? sb618 = new StringBuilder();
                        sb618.append(iArr10[2] / 4.0f);
                        sb618.append(r76);
                        addHashMapKeyValues(str9, i, new String[]{str5, sb615.toString(), sb616.toString(), sb617.toString(), sb618.toString()});
                        addHashMapKeyValues(str9, i, new String[]{"DL Mod TB1", getValueFromMapping(0, this.mLteMappingQam), getValueFromMapping(iArr12[0], this.mLteMappingQam), getValueFromMapping(iArr12[1], this.mLteMappingQam), getValueFromMapping(iArr12[2], this.mLteMappingQam)});
                        addHashMapKeyValues(str9, i, new String[]{"DL Mod TB2", getValueFromMapping(0, this.mLteMappingQam), getValueFromMapping(iArr14[0], this.mLteMappingQam), getValueFromMapping(iArr14[1], this.mLteMappingQam), getValueFromMapping(iArr14[2], this.mLteMappingQam)});
                        addHashMapKeyValues(str9, i, new String[]{"UL Mod", getValueFromMapping(0, this.mLteMappingQam), getValueFromMapping(iArr16[0], this.mLteMappingQam), getValueFromMapping(iArr16[1], this.mLteMappingQam), getValueFromMapping(iArr16[2], this.mLteMappingQam)});
                        return map8;
                    }
                    StringBuilder sb619 = new StringBuilder();
                    sb619.append("scell_info_list.scell_info[");
                    sb619.append(i10);
                    String str66 = str8;
                    String str67 = str45;
                    sb619.append(str67);
                    sb619.append("earfcn");
                    jArr[i10] = getFieldValue(msg, sb619.toString());
                    iArr5[i10] = getFieldValue(msg, "scell_info_list.scell_info[" + i10 + str67 + "pci");
                    iArr9[i10] = getFieldValue(msg, "scell_info_list.scell_info[" + i10 + str67 + "rsrp", true);
                    iArr10[i10] = getFieldValue(msg, "scell_info_list.scell_info[" + i10 + str67 + "rsrq", true);
                    iArr6[i10] = getFieldValue(msg, "scell_info_list.scell_info[" + i10 + str67 + "rs_snr_in_qdb", true);
                    iArr[i10] = getFieldValue(msg, "scell_info_list.scell_info[" + i10 + str67 + "serv_lte_band");
                    i10++;
                    fieldValue5 = i11;
                    fieldValue7 = fieldValue7;
                    str8 = str66;
                    fieldValue3 = fieldValue3;
                }
                break;
            case 6:
                String str68 = strArr[8];
                map3.put(str68, true);
                int fieldValue60 = getFieldValue(msg3, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_RR_STATE);
                if (fieldValue60 >= 3 && fieldValue60 <= 7) {
                    int fieldValue61 = getFieldValue(msg3, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERVING_CURRENT_BAND);
                    int fieldValue62 = getFieldValue(msg3, "rr_em_measurement_report_info.serving_arfcn");
                    int fieldValue63 = getFieldValue(msg3, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERVING_BSIC);
                    int fieldValue64 = getFieldValue(msg3, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERV_RLA_IN_QUARTER_DBM, true);
                    int fieldValue65 = getFieldValue(msg3, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERV_RXQUAL_SUB);
                    String str69 = this.mRrStateMapping.get(Integer.valueOf(getFieldValue(msg3, "rr_em_measurement_report_info.rr_state")));
                    setHashMapKeyValues(str68, i, "RLA", fieldValue64 == -1000 ? "-" : String.format("%.2f", Float.valueOf(fieldValue64 / 4.0f)));
                    setHashMapKeyValues(str68, i, "RX quality sub", fieldValue65 == 255 ? "-" : Integer.valueOf(fieldValue65));
                    setHashMapKeyValues(str68, i, ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, Integer.valueOf(fieldValue62));
                    setHashMapKeyValues(str68, i, "BSIC", Integer.valueOf(fieldValue63));
                    setHashMapKeyValues(str68, i, "band", this.bandMapping.get(Integer.valueOf(fieldValue61)));
                    setHashMapKeyValues(str68, i, "RR state", str69);
                }
                String str70 = strArr[12];
                map3.put(str70, true);
                resetHashMapKeyValues(str70, i);
                String str71 = "rr_em_measurement_report_info.";
                int fieldValue66 = getFieldValue(msg3, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_NUM_OF_CARRIERS);
                int i41 = 0;
                while (i41 < fieldValue66 && i41 < 32) {
                    int fieldValue67 = getFieldValue(msg3, str71 + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_NC_ARFCN + "[" + i41 + "]");
                    int fieldValue68 = getFieldValue(msg3, str71 + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_NC_BSIC + "[" + i41 + "]");
                    int fieldValue69 = getFieldValue(msg3, str71 + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_RLA_IN_QUARTER_DBM + "[" + i41 + "]", true);
                    StringBuilder sb70 = new StringBuilder();
                    sb70.append(i41);
                    sb70.append("");
                    addHashMapKeyValues(str70, i, "GSM", sb70.toString());
                    addHashMapKeyValues(str70, i, ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, fieldValue67 + "");
                    addHashMapKeyValues(str70, i, "BSIC", fieldValue68 + "");
                    addHashMapKeyValues(str70, i, "RSSI", (((double) ((float) fieldValue69)) / 4.0d) + "");
                    i41++;
                    fieldValue60 = fieldValue60;
                    str71 = str71;
                }
                return map3;
            case 7:
                String str72 = strArr[9];
                map3.put(str72, true);
                setHashMapKeyValues(str72, i, new String[]{tasEableMapping(FeatureSupport.is93Modem() ? getFieldValue(msg3, "tas_enable") : 2), antidxMapping(getFieldValue(msg3, MDMContent.GSM_ANTENNA)), getFieldValue(msg3, MDMContent.GSM_CURRENT_ANTENNA_RXLEVEL, true) + "", getFieldValue(msg3, MDMContent.GSM_OTHER_ANTENNA_RXLEVEL, true) + ""});
                return map3;
            case 8:
                String str73 = strArr[13];
                map3.put(str73, true);
                int fieldValue70 = getFieldValue(msg3, "rssi_dbm", true) / 128;
                int fieldValue71 = getFieldValue(msg3, "bandClass");
                int fieldValue72 = getFieldValue(msg3, MDMContent.C2K_L4_CHANNEL);
                int fieldValue73 = getFieldValue(msg3, "pilotPN");
                setHashMapKeyValues(str73, i, "Channel", Integer.valueOf(fieldValue72));
                setHashMapKeyValues(str73, i, "pilotPN", Integer.valueOf(fieldValue73));
                setHashMapKeyValues(str73, i, MDMContent.C2K_L4_BAND_CLASS, Integer.valueOf(fieldValue71));
                setHashMapKeyValues(str73, i, "RSSI", Integer.valueOf(fieldValue70));
                return map3;
            case 9:
                String str74 = strArr[14];
                map3.put(str74, true);
                int fieldValue74 = getFieldValue(msg3, MDMContent.C2K_L4_CHANNEL);
                int fieldValue75 = getFieldValue(msg3, MDMContent.C2K_L4_BAND_CLASS);
                int fieldValue76 = getFieldValue(msg3, MDMContent.C2K_L4_PILOT_PN_OFFSET);
                setHashMapKeyValues(str74, i, "RSSI", Integer.valueOf(getFieldValue(msg3, MDMContent.C2K_L4_RX_POWER, true)));
                setHashMapKeyValues(str74, i, "Channel", Integer.valueOf(fieldValue74));
                setHashMapKeyValues(str74, i, "pilotPN", Integer.valueOf(fieldValue76));
                setHashMapKeyValues(str74, i, MDMContent.C2K_L4_BAND_CLASS, Integer.valueOf(fieldValue75));
                String str75 = strArr[15];
                map3.put(str75, true);
                int fieldValue77 = FeatureSupport.is93Modem() ? getFieldValue(msg3, "tas_enable") : 2;
                int fieldValue78 = getFieldValue(msg3, "tx_ant", true);
                int fieldValue79 = getFieldValue(msg3, "rx_power_dbmL", true);
                int fieldValue80 = getFieldValue(msg3, "rx_power_dbmU", true);
                int fieldValue81 = getFieldValue(msg3, "rx_power_dbmLp", true);
                if (getFieldValue(msg3, MDMContent.C2K_L4_TAS_VER, true) != 1) {
                    setHashMapKeyValues(str75, i, "rxPower_LANT", fieldValue79 == -150 ? "" : Integer.valueOf(fieldValue79));
                    setHashMapKeyValues(str75, i, "rxPower_UANT", fieldValue80 == -150 ? "" : Integer.valueOf(fieldValue80));
                    setHashMapKeyValues(str75, i, "rxPower_UANT(')", fieldValue81 != -150 ? Integer.valueOf(fieldValue81) : "");
                }
                setHashMapKeyValues(str75, i, "TAS Enable", tasEableMapping(fieldValue77));
                setHashMapKeyValues(str75, i, "tx_Ant", Integer.valueOf(fieldValue78));
                return map3;
            case 10:
                String str76 = strArr[16];
                map3.put(str76, true);
                int fieldValue82 = getFieldValue(msg3, str17 + "mcc[0]");
                int fieldValue83 = getFieldValue(msg3, str17 + "mcc[1]");
                int fieldValue84 = getFieldValue(msg3, str17 + "mcc[2]");
                int fieldValue85 = getFieldValue(msg3, str17 + "mnc[0]");
                int fieldValue86 = getFieldValue(msg3, str17 + "mnc[1]");
                int fieldValue87 = getFieldValue(msg3, str17 + "mnc[2]");
                if (fieldValue82 == 15 && fieldValue83 == 15 && fieldValue84 == 15 && fieldValue85 == 15 && fieldValue86 == 15 && fieldValue87 == 15) {
                    setHashMapKeyValues(str76, i, "PLMN", "-");
                } else {
                    StringBuilder sb71 = new StringBuilder();
                    sb71.append("");
                    sb71.append(fieldValue82);
                    sb71.append(fieldValue83);
                    sb71.append(fieldValue84);
                    sb71.append(fieldValue85);
                    sb71.append(fieldValue86);
                    sb71.append(fieldValue87 != 15 ? Integer.valueOf(fieldValue87) : "");
                    setHashMapKeyValues(str76, i, "PLMN", sb71.toString());
                }
                String str77 = String.format("%d", Integer.valueOf(getFieldValue(msg3, "loc[0]")));
                String str78 = String.format("%d", Integer.valueOf(getFieldValue(msg3, "loc[1]")));
                setHashMapKeyValues(str76, i, "LAC", str77 + str78);
                String str79 = strArr[21];
                map3.put(str79, true);
                setHashMapKeyValues(str79, i, "LAC", str77 + str78);
                return map3;
            case 11:
                String str80 = strArr[16];
                map3.put(str80, true);
                int fieldValue88 = getFieldValue(msg3, "serv_cell.uarfcn_DL");
                int fieldValue89 = getFieldValue(msg3, "serv_cell.psc");
                float fieldValue90 = getFieldValue(msg3, "serv_cell.rscp", true);
                int fieldValue91 = getFieldValue(msg3, "serv_cell.cell_identity");
                int fieldValue92 = getFieldValue(msg3, "serv_cell.rssi");
                setHashMapKeyValues(str80, i, MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, Integer.valueOf(fieldValue89));
                setHashMapKeyValues(str80, i, "UARFCN", Integer.valueOf(fieldValue88));
                setHashMapKeyValues(str80, i, "RSCP", Float.valueOf(fieldValue90 / 4096.0f));
                setHashMapKeyValues(str80, i, "Cell ID", Integer.valueOf(fieldValue91));
                setHashMapKeyValues(str80, i, "RSSI", Integer.valueOf(fieldValue92));
                String str81 = strArr[19];
                map3.put(str81, true);
                resetHashMapKeyValues(str81, i);
                setHashMapKeyValues(str81, i, "UMTS", "0");
                setHashMapKeyValues(str81, i, "UARFCN", Integer.valueOf(fieldValue88));
                setHashMapKeyValues(str81, i, MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, Integer.valueOf(fieldValue89));
                setHashMapKeyValues(str81, i, "RSCP", Float.valueOf(fieldValue90 / 4096.0f));
                return map3;
            case 12:
                String str82 = strArr[16];
                map3.put(str82, true);
                setHashMapKeyValues(str82, i, "band", servingBandMapping(FeatureSupport.is93Modem() ? getFieldValue(msg3, "current_serving_band") : 2));
                String str83 = strArr[17];
                map3.put(str83, true);
                int fieldValue93 = FeatureSupport.is93Modem() ? getFieldValue(msg3, "tas_enable_info") : 2;
                int fieldValue94 = getFieldValue(msg3, "tx_pwr", true);
                int fieldValue95 = getFieldValue(msg3, "force_ant_state");
                int fieldValue96 = getFieldValue(msg3, MDMContent.TDD_ANT0_RSCP, true);
                int fieldValue97 = getFieldValue(msg3, MDMContent.TDD_ANT1_RSCP, true);
                setHashMapKeyValues(str83, i, "TAS Enable", tasEableMapping(fieldValue93));
                setHashMapKeyValues(str83, i, "TX Antenna", antidxMapping(fieldValue95));
                setHashMapKeyValues(str83, i, "TX Power", Integer.valueOf(fieldValue94));
                setHashMapKeyValues(str83, i, "RSRP_LANT", Integer.valueOf(fieldValue96));
                setHashMapKeyValues(str83, i, "RSRP_UANT", Integer.valueOf(fieldValue97));
                return map3;
            case 13:
                String str84 = "mnc";
                String str85 = "mcc";
                HashMap<String, Boolean> map10 = map3;
                String str86 = "].";
                String str87 = strArr[21];
                map10.put(str87, true);
                String str88 = "serv_cell.";
                int fieldValue98 = getFieldValue(msg3, "serv_cell.multi_plmn_count");
                int i42 = 0;
                while (i42 < fieldValue98 && i42 < 6) {
                    StringBuilder sb72 = new StringBuilder();
                    sb72.append(str88);
                    String str89 = str88;
                    sb72.append("multi_plmn_id");
                    sb72.append(str15);
                    sb72.append(i42);
                    sb72.append(str86);
                    String string6 = sb72.toString();
                    StringBuilder sb73 = new StringBuilder();
                    sb73.append(string6);
                    sb73.append(str85);
                    int i43 = fieldValue98;
                    sb73.append(1);
                    int fieldValue99 = getFieldValue(msg3, sb73.toString());
                    StringBuilder sb74 = new StringBuilder();
                    sb74.append(string6);
                    sb74.append(str85);
                    String str90 = str86;
                    sb74.append(2);
                    int fieldValue100 = getFieldValue(msg3, sb74.toString());
                    StringBuilder sb75 = new StringBuilder();
                    sb75.append(string6);
                    sb75.append(str85);
                    String str91 = str15;
                    sb75.append(3);
                    int fieldValue101 = getFieldValue(msg3, sb75.toString());
                    StringBuilder sb76 = new StringBuilder();
                    sb76.append(string6);
                    sb76.append(str84);
                    String str92 = str85;
                    sb76.append(1);
                    int fieldValue102 = getFieldValue(msg3, sb76.toString());
                    StringBuilder sb77 = new StringBuilder();
                    sb77.append(string6);
                    sb77.append(str84);
                    HashMap<String, Boolean> map11 = map10;
                    sb77.append(2);
                    int fieldValue103 = getFieldValue(msg3, sb77.toString());
                    int fieldValue104 = getFieldValue(msg3, string6 + str84 + 3);
                    if (fieldValue99 == 15 && fieldValue100 == 15 && fieldValue101 == 15 && fieldValue102 == 15 && fieldValue103 == 15 && fieldValue104 == 15) {
                        setHashMapKeyValues(str87, i, "PLMN", "-");
                    } else {
                        StringBuilder sb78 = new StringBuilder();
                        sb78.append("");
                        sb78.append(fieldValue99);
                        sb78.append(fieldValue100);
                        sb78.append(fieldValue101);
                        sb78.append(fieldValue102);
                        sb78.append(fieldValue103);
                        sb78.append(fieldValue104 == 15 ? "" : Integer.valueOf(fieldValue104));
                        setHashMapKeyValues(str87, i, "PLMN", sb78.toString());
                    }
                    i42++;
                    str88 = str89;
                    fieldValue98 = i43;
                    str84 = str84;
                    map10 = map11;
                    str85 = str92;
                    str15 = str91;
                    str86 = str90;
                }
                HashMap<String, Boolean> map12 = map10;
                int fieldValue105 = getFieldValue(msg3, "serv_cell.uarfcn_DL");
                int fieldValue106 = getFieldValue(msg3, "serv_cell.psc");
                float fieldValue107 = getFieldValue(msg3, "serv_cell.rscp", true) / 4096.0f;
                float fieldValue108 = getFieldValue(msg3, "serv_cell.ec_no", true) / 4096.0f;
                if (fieldValue107 > -120.0f && fieldValue108 > -25.0f) {
                    setHashMapKeyValues(str87, i, "UARFCN", Integer.valueOf(fieldValue105));
                    setHashMapKeyValues(str87, i, MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, Integer.valueOf(fieldValue106));
                    setHashMapKeyValues(str87, i, "RSCP", Float.valueOf(fieldValue107));
                    setHashMapKeyValues(str87, i, "Ec/No", Float.valueOf(fieldValue108));
                }
                setHashMapKeyValues(str87, i, "Cell ID", Integer.valueOf(getFieldValue(msg3, "serv_cell.cell_identity")));
                setHashMapKeyValues(str87, i, "RSSI", Integer.valueOf(getFieldValue(msg3, "serv_cell.rssi")));
                if (getFieldValue(msg3, "serv_cell.rac_valid") == 1) {
                    setHashMapKeyValues(str87, i, "RAC", Integer.valueOf(getFieldValue(msg3, "serv_cell.rac")));
                }
                String str93 = strArr[24];
                map12.put(str93, true);
                setHashMapKeyValues(str93, i, "P-carrier UARFCN", Integer.valueOf(fieldValue105));
                setHashMapKeyValues(str93, i, "P-carrier PSC", Integer.valueOf(fieldValue106));
                return map12;
            case 14:
                String str94 = strArr[22];
                map3.put(str94, true);
                String str95 = "umts_cell_list[";
                int fieldValue109 = getFieldValue(msg3, "num_cells");
                resetHashMapKeyValues(str94, i);
                String[][] strArr2 = (String[][]) Array.newInstance((Class<?>) String.class, 4, fieldValue109 < 32 ? fieldValue109 : 32);
                int i44 = 0;
                while (i44 < fieldValue109 && i44 < 32) {
                    int fieldValue110 = getFieldValue(msg3, str95 + i44 + "].UARFCN");
                    int fieldValue111 = getFieldValue(msg3, str95 + i44 + "]." + MDMContent.FDD_EM_MEME_DCH_UMTS_PSC);
                    StringBuilder sb79 = new StringBuilder();
                    sb79.append(str95);
                    sb79.append(i44);
                    sb79.append("].");
                    int i45 = fieldValue109;
                    sb79.append("RSCP");
                    float fieldValue112 = getFieldValue(msg3, sb79.toString(), true);
                    StringBuilder sb80 = new StringBuilder();
                    sb80.append(str95);
                    sb80.append(i44);
                    sb80.append("].");
                    String str96 = str95;
                    sb80.append(MDMContent.FDD_EM_MEME_DCH_UMTS_ECN0);
                    float fieldValue113 = getFieldValue(msg3, sb80.toString(), true);
                    strArr2[0][i44] = fieldValue110 + "";
                    strArr2[1][i44] = fieldValue111 + "";
                    strArr2[2][i44] = fieldValue112 + "";
                    strArr2[3][i44] = fieldValue113 + "";
                    i44++;
                    fieldValue109 = i45;
                    str95 = str96;
                }
                setHashMapKeyValues(str94, i, "UARFCN", strArr2[0]);
                setHashMapKeyValues(str94, i, MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, strArr2[1]);
                setHashMapKeyValues(str94, i, "RSCP", strArr2[2]);
                setHashMapKeyValues(str94, i, "Ec/No", strArr2[3]);
                String str97 = strArr[27];
                map3.put(str97, true);
                resetHashMapKeyValues(str97, i);
                int fieldValue114 = getFieldValue(msg3, "num_cells");
                String str98 = "umts_cell_list[";
                int i46 = 0;
                while (i46 < fieldValue114 && i46 < 32) {
                    getFieldValue(msg3, str98 + i46 + "].cell_type");
                    int fieldValue115 = getFieldValue(msg3, str98 + i46 + "].UARFCN");
                    int fieldValue116 = getFieldValue(msg3, str98 + i46 + "]." + MDMContent.FDD_EM_MEME_DCH_UMTS_PSC);
                    float fieldValue117 = getFieldValue(msg3, str98 + i46 + "].RSCP", true);
                    StringBuilder sb81 = new StringBuilder();
                    sb81.append(str98);
                    sb81.append(i46);
                    sb81.append("].");
                    String str99 = str98;
                    sb81.append(MDMContent.FDD_EM_MEME_DCH_UMTS_ECN0);
                    float fieldValue118 = getFieldValue(msg3, sb81.toString(), true);
                    addHashMapKeyValues(str97, i, "UMTS", "" + i46);
                    addHashMapKeyValues(str97, i, "UARFCN", "" + fieldValue115);
                    addHashMapKeyValues(str97, i, MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "" + fieldValue116);
                    addHashMapKeyValues(str97, i, "RSCP", "" + fieldValue117);
                    addHashMapKeyValues(str97, i, "Ec/No", "" + fieldValue118);
                    i46++;
                    str98 = str99;
                    strArr2 = strArr2;
                }
                return map3;
            case 15:
                msg2 = msg3;
                map = map3;
                String str100 = strArr[21];
                int fieldValue119 = getFieldValue(msg2, "uas_3g_general_status.umts_rrc_state");
                Elog.d("EmInfo/MDMComponent", "[" + str100 + "]rrState: " + fieldValue119);
                if (fieldValue119 != 6) {
                    String valueFromMapping2 = getValueFromMapping(fieldValue119, this.mStateMapping);
                    setHashMapKeyValues(str100, i, "RRC state", valueFromMapping2);
                    map.put(str100, true);
                    Elog.d("EmInfo/MDMComponent", "[" + str100 + "]RRC State : " + valueFromMapping2);
                }
                break;
            case 16:
                String str101 = strArr[23];
                map3.put(str101, true);
                int fieldValue120 = FeatureSupport.is93Modem() ? getFieldValue(msg3, "EmUl1Tas.tas_enable") : 2;
                int fieldValue121 = FeatureSupport.is93Modem() ? getFieldValue(msg3, "EmUl1Tas.band") : -1;
                int fieldValue122 = getFieldValue(msg3, "EmUl1Tas." + MDMContent.FDD_EM_UL1_TAS_MAIN_ANT_IDX);
                int fieldValue123 = getFieldValue(msg3, "EmUl1Tas.tx_pwr", true);
                int fieldValue124 = getFieldValue(msg3, "EmUl1Tas." + MDMContent.FDD_EM_UL1_TAS_RSCP0, true);
                int fieldValue125 = getFieldValue(msg3, "EmUl1Tas." + MDMContent.FDD_EM_UL1_TAS_RSCP1, true);
                int fieldValue126 = getFieldValue(msg3, "EmUl1Tas." + MDMContent.FDD_EM_UL1_TAS_RSCP2, true);
                StringBuilder sb82 = new StringBuilder();
                sb82.append("EmUl1Tas.");
                sb82.append(MDMContent.FDD_EM_UL1_TAS_VERISION);
                this.TasVersion = getFieldValue(msg3, sb82.toString(), true) == 2 ? 2 : 1;
                setHashMapKeyValues(str101, i, "TAS Enable", tasEableMapping(fieldValue120));
                setHashMapKeyValues(str101, i, "TX Antenna", antidxMapping(fieldValue122));
                setHashMapKeyValues(str101, i, "TX Power", fieldValue123 == -128 ? "" : Integer.valueOf(fieldValue123));
                setHashMapKeyValues(str101, i, "RSRP_LANT", fieldValue124 == -480 ? "" : Integer.valueOf(fieldValue124 / 4));
                setHashMapKeyValues(str101, i, "RSRP_UANT", fieldValue125 == -480 ? "" : Integer.valueOf(fieldValue125 / 4));
                if (this.TasVersion == 2) {
                    setHashMapKeyValues(str101, i, "RSRP_UANT(')", fieldValue126 != -480 ? Integer.valueOf(fieldValue126 / 4) : "");
                }
                String str102 = strArr[21];
                map3.put(str102, true);
                setHashMapKeyValues(str102, i, "band", fieldValue121 == -1 ? "=" : "Band" + fieldValue121);
                return map3;
            case 17:
                msg2 = msg3;
                map = map3;
                String str103 = strArr[16];
                map.put(str103, true);
                int fieldValue127 = getFieldValue(msg2, "uas_3g_general_status.umts_rrc_state");
                if (fieldValue127 != 6) {
                    String valueFromMapping3 = getValueFromMapping(fieldValue127, this.mStateMapping);
                    setHashMapKeyValues(str103, i, "RRC state", valueFromMapping3);
                    map.put(str103, true);
                    Elog.d("EmInfo/MDMComponent", "[" + str103 + "]RRC State : " + valueFromMapping3);
                }
                break;
            case 18:
                String str104 = strArr[8];
                map3.put(str104, true);
                String str105 = String.format("%d", Integer.valueOf(getFieldValue(msg3, "rr_em_lai_info.lac[0]"))) + String.format("%d", Integer.valueOf(getFieldValue(msg3, "rr_em_lai_info.lac[1]")));
                int fieldValue128 = getFieldValue(msg3, "rr_em_lai_info." + MDMContent.CELL_ID);
                int fieldValue129 = getFieldValue(msg3, "rr_em_lai_info.mcc[0]");
                int fieldValue130 = getFieldValue(msg3, "rr_em_lai_info.mcc[1]");
                int fieldValue131 = getFieldValue(msg3, "rr_em_lai_info.mcc[2]");
                int fieldValue132 = getFieldValue(msg3, "rr_em_lai_info.mnc[0]");
                int fieldValue133 = getFieldValue(msg3, "rr_em_lai_info.mnc[1]");
                int fieldValue134 = getFieldValue(msg3, "rr_em_lai_info.mnc[2]");
                if (fieldValue129 == 15 && fieldValue130 == 15 && fieldValue131 == 15 && fieldValue132 == 15 && fieldValue133 == 15 && fieldValue134 == 15) {
                    setHashMapKeyValues(str104, i, "PLMN", "-");
                } else {
                    StringBuilder sb83 = new StringBuilder();
                    sb83.append("");
                    sb83.append(fieldValue129);
                    sb83.append(fieldValue130);
                    sb83.append(fieldValue131);
                    sb83.append(fieldValue132);
                    sb83.append(fieldValue133);
                    sb83.append(fieldValue134 != 15 ? Integer.valueOf(fieldValue134) : "");
                    setHashMapKeyValues(str104, i, "PLMN", sb83.toString());
                }
                setHashMapKeyValues(str104, i, "LAC", str105);
                setHashMapKeyValues(str104, i, "Cell ID", Integer.valueOf(fieldValue128));
                return map3;
            case 19:
                String str106 = strArr[13];
                map3.put(str106, true);
                setHashMapKeyValues(str106, i, "ecio", Integer.valueOf(getFieldValue(msg3, MDMContent.PILOT_ENERGY)));
                return map3;
            case 20:
                String str107 = strArr[14];
                map3.put(str107, true);
                setHashMapKeyValues(str107, i, "ecio", Integer.valueOf(getFieldValue(msg3, MDMContent.ECIO, true)));
                return map3;
            case 21:
                int i47 = i;
                String str108 = strArr[4];
                HashMap<String, Boolean> map13 = map3;
                map13.put(str108, true);
                resetHashMapKeyValues(str108, i47);
                int fieldValue135 = getFieldValue(msg3, "freq_num");
                String str109 = "inter_freq[";
                int i48 = 0;
                int i49 = 0;
                while (i48 < fieldValue135 && i48 < 16) {
                    int fieldValue136 = getFieldValue(msg3, str109 + i48 + "].valid");
                    int fieldValue137 = getFieldValue(msg3, str109 + i48 + "].uarfcn");
                    StringBuilder sb84 = new StringBuilder();
                    sb84.append(str109);
                    sb84.append(i48);
                    sb84.append("].");
                    int i50 = fieldValue135;
                    sb84.append(MDMContent.ERRC_MOB_MEAS_INTERRAT_UTRAN_UCELL_NUM);
                    int fieldValue138 = getFieldValue(msg3, sb84.toString());
                    String str110 = str109 + i48 + "]." + MDMContent.ERRC_MOB_MEAS_INTERRAT_UTRAN_UCELL + str15;
                    String[] strArr3 = new String[fieldValue138 < 6 ? fieldValue138 : 6];
                    String str111 = str109;
                    String[] strArr4 = new String[fieldValue138 < 6 ? fieldValue138 : 6];
                    String str112 = str15;
                    String[] strArr5 = new String[fieldValue138 < 6 ? fieldValue138 : 6];
                    HashMap<String, Boolean> map14 = map13;
                    String[] strArr6 = new String[fieldValue138 < 6 ? fieldValue138 : 6];
                    int i51 = i48;
                    String[] strArr7 = new String[fieldValue138 < 6 ? fieldValue138 : 6];
                    String str113 = str12;
                    int i52 = 0;
                    while (true) {
                        if (i52 >= fieldValue138) {
                            i12 = fieldValue138;
                        }
                        i12 = fieldValue138;
                        if (i52 >= 6) {
                        }
                        StringBuilder sb85 = new StringBuilder();
                        sb85.append(str110);
                        sb85.append(i52);
                        sb85.append("].");
                        String str114 = str108;
                        sb85.append("valid");
                        int fieldValue139 = getFieldValue(msg3, sb85.toString());
                        int fieldValue140 = getFieldValue(msg3, str110 + i52 + "].psc");
                        StringBuilder sb86 = new StringBuilder();
                        sb86.append(str110);
                        sb86.append(i52);
                        sb86.append("].");
                        String[] strArr8 = strArr6;
                        sb86.append("rscp");
                        float fieldValue141 = getFieldValue(msg3, sb86.toString());
                        StringBuilder sb87 = new StringBuilder();
                        sb87.append(str110);
                        sb87.append(i52);
                        sb87.append("].");
                        String str115 = str110;
                        sb87.append(MDMContent.ERRC_MOB_MEAS_INTERRAT_UTRAN_UCELL_EC_N0);
                        float fieldValue142 = getFieldValue(msg3, sb87.toString());
                        strArr3[i52] = i52 + "";
                        StringBuilder sb88 = new StringBuilder();
                        sb88.append("");
                        sb88.append(fieldValue136 > 0 ? Integer.valueOf(fieldValue137) : "");
                        strArr7[i52] = sb88.toString();
                        StringBuilder sb89 = new StringBuilder();
                        sb89.append("");
                        sb89.append(fieldValue139 > 0 ? Integer.valueOf(fieldValue140) : "");
                        strArr4[i52] = sb89.toString();
                        StringBuilder sb90 = new StringBuilder();
                        sb90.append("");
                        sb90.append((fieldValue139 <= 0 || fieldValue141 == -1.0f) ? "" : Float.valueOf(fieldValue141 / 4.0f));
                        strArr5[i52] = sb90.toString();
                        StringBuilder sb91 = new StringBuilder();
                        sb91.append("");
                        sb91.append((fieldValue139 <= 0 || fieldValue142 == -1.0f) ? "" : Float.valueOf(fieldValue142 / 4.0f));
                        strArr8[i52] = sb91.toString();
                        i52++;
                        fieldValue138 = i12;
                        str108 = str114;
                        strArr6 = strArr8;
                        str110 = str115;
                        fieldValue136 = fieldValue136;
                        break;
                        break;
                    }
                    String str116 = str108;
                    addHashMapKeyValues(str116, i, "UMTS", strArr3);
                    addHashMapKeyValues(str116, i, str113, strArr7);
                    addHashMapKeyValues(str116, i, MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, strArr4);
                    addHashMapKeyValues(str116, i, "RSCP", strArr5);
                    addHashMapKeyValues(str116, i, "Ec/No", strArr6);
                    i48 = i51 + 1;
                    str12 = str113;
                    i47 = i;
                    str108 = str116;
                    fieldValue135 = i50;
                    str109 = str111;
                    i49 = i12;
                    str15 = str112;
                    map13 = map14;
                }
                return map13;
            case 22:
                String str117 = strArr[5];
                HashMap<String, Boolean> map15 = map3;
                map15.put(str117, true);
                resetHashMapKeyValues(str117, i);
                String str118 = MDMContent.EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_GCELL;
                int fieldValue143 = getFieldValue(msg3, MDMContent.EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_TOTAL_GCELL_NUM);
                String[] strArr9 = new String[fieldValue143 < 6 ? fieldValue143 : 6];
                String[] strArr10 = new String[fieldValue143 < 6 ? fieldValue143 : 6];
                String[] strArr11 = new String[fieldValue143 < 6 ? fieldValue143 : 6];
                String[] strArr12 = new String[fieldValue143 < 6 ? fieldValue143 : 6];
                int i53 = 0;
                while (i53 < fieldValue143 && i53 < 6) {
                    StringBuilder sb92 = new StringBuilder();
                    sb92.append(str118);
                    sb92.append("[");
                    sb92.append(i53);
                    sb92.append("].");
                    int i54 = fieldValue143;
                    sb92.append("valid");
                    int fieldValue144 = getFieldValue(msg3, sb92.toString());
                    StringBuilder sb93 = new StringBuilder();
                    sb93.append(str118);
                    sb93.append("[");
                    sb93.append(i53);
                    sb93.append("].");
                    HashMap<String, Boolean> map16 = map15;
                    sb93.append(MDMContent.EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_BAND_IND);
                    getFieldValue(msg3, sb93.toString());
                    int fieldValue145 = getFieldValue(msg3, str118 + "[" + i53 + "].arfcn");
                    StringBuilder sb94 = new StringBuilder();
                    sb94.append(str118);
                    sb94.append("[");
                    sb94.append(i53);
                    sb94.append("].");
                    String str119 = str117;
                    sb94.append("bsic");
                    int fieldValue146 = getFieldValue(msg3, sb94.toString());
                    StringBuilder sb95 = new StringBuilder();
                    sb95.append(str118);
                    sb95.append("[");
                    sb95.append(i53);
                    sb95.append("].");
                    String str120 = str118;
                    sb95.append("rssi");
                    int fieldValue147 = getFieldValue(msg3, sb95.toString(), true);
                    strArr9[i53] = "" + i53;
                    StringBuilder sb96 = new StringBuilder();
                    sb96.append("");
                    sb96.append(fieldValue144 > 0 ? Integer.valueOf(fieldValue145) : "");
                    strArr10[i53] = sb96.toString();
                    StringBuilder sb97 = new StringBuilder();
                    sb97.append("");
                    sb97.append(fieldValue144 > 0 ? Integer.valueOf(fieldValue146) : "");
                    strArr11[i53] = sb97.toString();
                    StringBuilder sb98 = new StringBuilder();
                    sb98.append("");
                    sb98.append(fieldValue144 > 0 ? Float.valueOf(fieldValue147 / 4.0f) : "");
                    strArr12[i53] = sb98.toString();
                    i53++;
                    fieldValue143 = i54;
                    str117 = str119;
                    str118 = str120;
                    map15 = map16;
                }
                String str121 = str117;
                HashMap<String, Boolean> map17 = map15;
                addHashMapKeyValues(str121, i, "GSM", strArr9);
                addHashMapKeyValues(str121, i, ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, strArr10);
                addHashMapKeyValues(str121, i, "BSIC", strArr11);
                addHashMapKeyValues(str121, i, "RSSI", strArr12);
                return map17;
            case 23:
                String str122 = "RSRP";
                String str123 = "EARFCN";
                String str124 = "PCI";
                String str125 = strArr[18];
                map3.put(str125, true);
                resetHashMapKeyValues(str125, i);
                String str126 = "lte_cell_list";
                int fieldValue148 = getFieldValue(msg3, "num_cells");
                String[] strArr13 = new String[fieldValue148 < 32 ? fieldValue148 : 32];
                String[] strArr14 = new String[fieldValue148 < 32 ? fieldValue148 : 32];
                String[] strArr15 = new String[fieldValue148 < 32 ? fieldValue148 : 32];
                String[] strArr16 = new String[fieldValue148 < 32 ? fieldValue148 : 32];
                String[] strArr17 = new String[fieldValue148 < 32 ? fieldValue148 : 32];
                int i55 = 0;
                while (i55 < fieldValue148) {
                    int i56 = fieldValue148;
                    if (i55 >= 32) {
                        addHashMapKeyValues(str125, i, "LTE", strArr13);
                        addHashMapKeyValues(str125, i, str123, strArr14);
                        addHashMapKeyValues(str125, i, str124, strArr15);
                        addHashMapKeyValues(str125, i, str122, strArr16);
                        addHashMapKeyValues(str125, i, "RSRQ", strArr17);
                        return map3;
                    }
                    int fieldValue149 = getFieldValue(msg3, str126 + "[" + i55 + "]." + str123);
                    String str127 = str123;
                    int fieldValue150 = getFieldValue(msg3, str126 + "[" + i55 + "]." + str124);
                    String str128 = str124;
                    String str129 = str122;
                    int fieldValue151 = getFieldValue(msg3, str126 + "[" + i55 + "]." + str122, true);
                    String str130 = str126;
                    int fieldValue152 = getFieldValue(msg3, str126 + "[" + i55 + "].RSRQ", true);
                    StringBuilder sb99 = new StringBuilder();
                    sb99.append("");
                    sb99.append(i55);
                    strArr13[i55] = sb99.toString();
                    strArr14[i55] = "" + fieldValue149;
                    strArr15[i55] = "" + fieldValue150;
                    strArr16[i55] = "" + fieldValue151;
                    strArr17[i55] = "" + fieldValue152;
                    i55++;
                    fieldValue148 = i56;
                    str126 = str130;
                    str122 = str129;
                    str124 = str128;
                    str123 = str127;
                }
                addHashMapKeyValues(str125, i, "LTE", strArr13);
                addHashMapKeyValues(str125, i, str123, strArr14);
                addHashMapKeyValues(str125, i, str124, strArr15);
                addHashMapKeyValues(str125, i, str122, strArr16);
                addHashMapKeyValues(str125, i, "RSRQ", strArr17);
                return map3;
            case 24:
                String str131 = strArr[18];
                String str132 = "choice.LTE_neigh_cells";
                int fieldValue153 = getFieldValue(msg3, "neigh_cell_count");
                if (getFieldValue(msg3, "RAT_type") == 2) {
                    map3.put(str131, true);
                    resetHashMapKeyValues(str131, i);
                    String[] strArr18 = new String[fieldValue153 < 16 ? fieldValue153 : 16];
                    String[] strArr19 = new String[fieldValue153 < 16 ? fieldValue153 : 16];
                    String[] strArr20 = new String[fieldValue153 < 16 ? fieldValue153 : 16];
                    String[] strArr21 = new String[fieldValue153 < 16 ? fieldValue153 : 16];
                    String[] strArr22 = new String[fieldValue153 < 16 ? fieldValue153 : 16];
                    int i57 = 0;
                    while (i57 < fieldValue153) {
                        int i58 = fieldValue153;
                        if (i57 < 16) {
                            StringBuilder sb100 = new StringBuilder();
                            sb100.append(str132);
                            sb100.append("[");
                            sb100.append(i57);
                            sb100.append("].");
                            String str133 = str14;
                            sb100.append("earfcn");
                            int fieldValue154 = getFieldValue(msg3, sb100.toString());
                            int fieldValue155 = getFieldValue(msg3, str132 + "[" + i57 + "].pci");
                            StringBuilder sb101 = new StringBuilder();
                            sb101.append(str132);
                            sb101.append("[");
                            sb101.append(i57);
                            sb101.append("].");
                            String str134 = str131;
                            sb101.append("rsrp");
                            int fieldValue156 = getFieldValue(msg3, sb101.toString(), true);
                            StringBuilder sb102 = new StringBuilder();
                            sb102.append(str132);
                            sb102.append("[");
                            sb102.append(i57);
                            sb102.append("].");
                            String str135 = str132;
                            sb102.append("rsrq");
                            int fieldValue157 = getFieldValue(msg3, sb102.toString(), true);
                            strArr18[i57] = "" + i57;
                            strArr19[i57] = "" + fieldValue154;
                            strArr20[i57] = "" + fieldValue155;
                            strArr21[i57] = "" + (((float) fieldValue156) / 4.0f);
                            strArr22[i57] = "" + (((float) fieldValue157) / 4.0f);
                            i57++;
                            fieldValue153 = i58;
                            str131 = str134;
                            str132 = str135;
                            str14 = str133;
                        } else {
                            i13 = i;
                            String str136 = str131;
                            addHashMapKeyValues(str136, i13, "LTE", strArr18);
                            addHashMapKeyValues(str136, i13, str14, strArr19);
                            addHashMapKeyValues(str136, i13, "PCI", strArr20);
                            addHashMapKeyValues(str136, i13, "RSRP", strArr21);
                            addHashMapKeyValues(str136, i13, "RSRQ", strArr22);
                        }
                    }
                    i13 = i;
                    String str137 = str131;
                    addHashMapKeyValues(str137, i13, "LTE", strArr18);
                    addHashMapKeyValues(str137, i13, str14, strArr19);
                    addHashMapKeyValues(str137, i13, "PCI", strArr20);
                    addHashMapKeyValues(str137, i13, "RSRP", strArr21);
                    addHashMapKeyValues(str137, i13, "RSRQ", strArr22);
                } else {
                    i13 = i;
                }
                String str138 = strArr[20];
                map3.put(str138, true);
                String str139 = "choice.GSM_neigh_cells";
                int fieldValue158 = getFieldValue(msg3, "neigh_cell_count");
                resetHashMapKeyValues(str138, i13);
                int i59 = 0;
                while (i59 < fieldValue158 && i59 < 16) {
                    int fieldValue159 = getFieldValue(msg3, str139 + "[" + i59 + "].arfcn");
                    int fieldValue160 = getFieldValue(msg3, str139 + "[" + i59 + "].bsic");
                    int fieldValue161 = getFieldValue(msg3, str139 + "[" + i59 + "].rssi", true);
                    String str140 = str139;
                    StringBuilder sb103 = new StringBuilder();
                    sb103.append("");
                    sb103.append(i59);
                    addHashMapKeyValues(str138, i13, "GSM", sb103.toString());
                    addHashMapKeyValues(str138, i13, ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "" + fieldValue159);
                    addHashMapKeyValues(str138, i13, "BSIC", ((fieldValue160 >> 3) & 7) + "" + (fieldValue160 & 7));
                    StringBuilder sb104 = new StringBuilder();
                    sb104.append("");
                    sb104.append(fieldValue161);
                    addHashMapKeyValues(str138, i13, "RSSI", sb104.toString());
                    i59++;
                    str139 = str140;
                }
                return map3;
            case 25:
                String str141 = strArr[19];
                map3.put(str141, true);
                resetHashMapKeyValues(str141, i);
                int i60 = 0;
                while (i60 < 64) {
                    String str142 = "umts_cell_list[" + i60 + "].";
                    int fieldValue162 = getFieldValue(msg3, str142 + "UARFCN");
                    int fieldValue163 = getFieldValue(msg3, str142 + MDMContent.EM_MEME_DCH_UMTS_CELL_LIST_CELLPARAID);
                    float fieldValue164 = getFieldValue(msg3, str142 + "RSCP", true);
                    if (getFieldValue(msg3, str142 + MDMContent.EM_MEME_DCH_UMTS_CELL_LIST_IS_SERVING_CELL) != 0 && fieldValue164 > -120.0f) {
                        addHashMapKeyValues(str141, i, "UMTS", "" + i60);
                        addHashMapKeyValues(str141, i, "UARFCN", "" + fieldValue162);
                        addHashMapKeyValues(str141, i, MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "" + fieldValue163);
                        addHashMapKeyValues(str141, i, "RSCP", "" + (fieldValue164 / 4096.0f));
                    }
                    i60++;
                    str17 = str142;
                }
                return map3;
            case 26:
                String str143 = strArr[20];
                map3.put(str143, true);
                resetHashMapKeyValues(str143, i);
                String str144 = "gsm_cell_list";
                int fieldValue165 = getFieldValue(msg3, "num_cells");
                int i61 = 0;
                while (i61 < fieldValue165 && i61 < 6) {
                    int fieldValue166 = getFieldValue(msg3, str144 + "[" + i61 + "].arfcn");
                    int fieldValue167 = getFieldValue(msg3, str144 + "[" + i61 + "].bsic");
                    int fieldValue168 = getFieldValue(msg3, str144 + "[" + i61 + "].rssi", true);
                    String str145 = str144;
                    StringBuilder sb105 = new StringBuilder();
                    sb105.append("");
                    sb105.append(i61);
                    addHashMapKeyValues(str143, i, "GSM", sb105.toString());
                    addHashMapKeyValues(str143, i, ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "" + fieldValue166);
                    addHashMapKeyValues(str143, i, "BSIC", ((fieldValue167 >> 3) & 7) + "" + (fieldValue167 & 7));
                    StringBuilder sb106 = new StringBuilder();
                    sb106.append("");
                    sb106.append(fieldValue168);
                    addHashMapKeyValues(str143, i, "RSSI", sb106.toString());
                    i61++;
                    str144 = str145;
                }
                return map3;
            case 27:
                HashMap<String, Boolean> map18 = map3;
                String str146 = strArr[10];
                map18.put(str146, true);
                resetHashMapKeyValues(str146, i);
                String str147 = "ir_4g_neighbor_meas_status[";
                int i62 = 0;
                while (i62 < 6) {
                    int fieldValue169 = getFieldValue(msg3, str147 + i62 + "].is_valid");
                    int fieldValue170 = getFieldValue(msg3, str147 + i62 + "].earfcn");
                    StringBuilder sb107 = new StringBuilder();
                    sb107.append(str147);
                    sb107.append(i62);
                    sb107.append("].");
                    HashMap<String, Boolean> map19 = map18;
                    sb107.append("pci");
                    int fieldValue171 = getFieldValue(msg3, sb107.toString());
                    StringBuilder sb108 = new StringBuilder();
                    sb108.append(str147);
                    sb108.append(i62);
                    sb108.append("].");
                    String str148 = str13;
                    sb108.append("rsrp");
                    int fieldValue172 = getFieldValue(msg3, sb108.toString(), true);
                    StringBuilder sb109 = new StringBuilder();
                    sb109.append(str147);
                    sb109.append(i62);
                    sb109.append("].");
                    String str149 = str147;
                    sb109.append("rsrq");
                    int fieldValue173 = getFieldValue(msg3, sb109.toString(), true);
                    if (fieldValue169 > 0) {
                        addHashMapKeyValues(str146, i, "LTE", "" + i62);
                        addHashMapKeyValues(str146, i, "EARFCN", "" + fieldValue170);
                        addHashMapKeyValues(str146, i, "PCI", "" + fieldValue171);
                        addHashMapKeyValues(str146, i, "RSRP", "" + fieldValue172);
                        str11 = str148;
                        addHashMapKeyValues(str146, i, str11, "" + fieldValue173);
                    } else {
                        str11 = str148;
                    }
                    i62++;
                    str13 = str11;
                    str147 = str149;
                    map18 = map19;
                }
                return map18;
            case 28:
                Msg msg6 = msg3;
                String str150 = strArr[11];
                map3.put(str150, true);
                resetHashMapKeyValues(str150, i);
                String str151 = "ir_3g_neighbor_meas_status[";
                int i63 = 0;
                while (i63 < 6) {
                    Msg msg7 = msg6;
                    int fieldValue174 = getFieldValue(msg7, str151 + i63 + "].is_valid");
                    int fieldValue175 = getFieldValue(msg7, str151 + i63 + "].uarfcn");
                    int fieldValue176 = getFieldValue(msg7, str151 + i63 + "]." + MDMContent.RRM_IR_3G_NEIGHBOR_MEAS_STATUS_PHY_ID);
                    float fieldValue177 = getFieldValue(msg7, str151 + i63 + "]." + MDMContent.RRM_IR_3G_NEIGHBOR_MEAS_STATUS_STRENGTH, true);
                    float fieldValue178 = getFieldValue(msg7, str151 + i63 + "]." + MDMContent.RRM_IR_3G_NEIGHBOR_MEAS_STATUS_QUALITY, true);
                    if (fieldValue174 > 0) {
                        addHashMapKeyValues(str150, i, "UMTS", "" + i63);
                        addHashMapKeyValues(str150, i, "UARFCN", "" + fieldValue175);
                        addHashMapKeyValues(str150, i, MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "" + fieldValue176);
                        addHashMapKeyValues(str150, i, "RSCP", "" + fieldValue177);
                        addHashMapKeyValues(str150, i, "Ec/No", "" + fieldValue178);
                    }
                    i63++;
                    msg6 = msg7;
                    str151 = str151;
                }
                return map3;
            case 29:
                String str152 = "].";
                int fieldValue179 = getFieldValue(msg3, MDMContent.FDD_EM_CSCE_NEIGH_CELL_OPERATION);
                int fieldValue180 = getFieldValue(msg3, "RAT_type");
                if (fieldValue180 == 0) {
                    String str153 = strArr[27];
                    map3.put(str153, true);
                    resetHashMapKeyValues(str153, i);
                    if (fieldValue179 != 1 && fieldValue179 != 2) {
                        return map3;
                    }
                    int fieldValue181 = getFieldValue(msg3, "neigh_cell_count");
                    String str154 = "choice.neigh_cells[";
                    int i64 = 0;
                    while (i64 < fieldValue181 && i64 < 16) {
                        StringBuilder sb110 = new StringBuilder();
                        sb110.append(str154);
                        sb110.append(i64);
                        str152 = str152;
                        sb110.append(str152);
                        sb110.append("uarfcn_DL");
                        int fieldValue182 = getFieldValue(msg3, sb110.toString());
                        int fieldValue183 = getFieldValue(msg3, str154 + i64 + str152 + "psc");
                        StringBuilder sb111 = new StringBuilder();
                        sb111.append(str154);
                        sb111.append(i64);
                        sb111.append(str152);
                        int i65 = fieldValue181;
                        sb111.append("rscp");
                        float fieldValue184 = getFieldValue(msg3, sb111.toString(), true) / 4096.0f;
                        StringBuilder sb112 = new StringBuilder();
                        sb112.append(str154);
                        sb112.append(i64);
                        sb112.append(str152);
                        String str155 = str154;
                        sb112.append("ec_no");
                        float fieldValue185 = getFieldValue(msg3, sb112.toString(), true) / 4096.0f;
                        if (fieldValue184 > -120.0f && fieldValue185 > -25.0f) {
                            addHashMapKeyValues(str153, i, "UMTS", "" + i64);
                            addHashMapKeyValues(str153, i, "UARFCN", "" + fieldValue182);
                            addHashMapKeyValues(str153, i, MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "" + fieldValue183);
                            addHashMapKeyValues(str153, i, "RSCP", "" + fieldValue184);
                            addHashMapKeyValues(str153, i, "Ec/No", "" + fieldValue185);
                        }
                        i64++;
                        fieldValue181 = i65;
                        str154 = str155;
                    }
                    return map3;
                }
                HashMap<String, Boolean> map20 = map3;
                if (fieldValue180 == 1) {
                    String str156 = strArr[28];
                    map20.put(str156, true);
                    resetHashMapKeyValues(str156, i);
                    if (fieldValue179 != 1 && fieldValue179 != 2) {
                        return map20;
                    }
                    String str157 = "choice.GSM_neigh_cells[";
                    int fieldValue186 = getFieldValue(msg3, "neigh_cell_count");
                    int i66 = 0;
                    while (i66 < fieldValue186 && i66 < 16) {
                        int fieldValue187 = getFieldValue(msg3, str157 + i66 + str152 + "arfcn");
                        int fieldValue188 = getFieldValue(msg3, str157 + i66 + str152 + "bsic");
                        int fieldValue189 = getFieldValue(msg3, str157 + i66 + str152 + "rssi", true);
                        String str158 = str157;
                        addHashMapKeyValues(str156, i, "GSM", "" + i66);
                        addHashMapKeyValues(str156, i, ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "" + fieldValue187);
                        addHashMapKeyValues(str156, i, "BSIC", ((fieldValue188 >> 3) & 7) + "" + (fieldValue188 & 7));
                        StringBuilder sb113 = new StringBuilder();
                        sb113.append("");
                        sb113.append(fieldValue189);
                        addHashMapKeyValues(str156, i, "RSSI", sb113.toString());
                        i66++;
                        fieldValue186 = fieldValue186;
                        str157 = str158;
                    }
                    return map20;
                }
                if (fieldValue180 != 2) {
                    map2 = map20;
                    z = false;
                    return map2;
                }
                String str159 = strArr[26];
                map20.put(str159, true);
                resetHashMapKeyValues(str159, i);
                if (fieldValue179 != 2) {
                    return map20;
                }
                int fieldValue190 = getFieldValue(msg3, "neigh_cell_count");
                String str160 = "choice.LTE_neigh_cells[";
                int i67 = 0;
                while (i67 < fieldValue190) {
                    int i68 = fieldValue179;
                    if (i67 >= 16) {
                        return map20;
                    }
                    StringBuilder sb114 = new StringBuilder();
                    sb114.append(str160);
                    sb114.append(i67);
                    sb114.append(str152);
                    int i69 = fieldValue180;
                    sb114.append("earfcn");
                    int fieldValue191 = getFieldValue(msg3, sb114.toString());
                    StringBuilder sb115 = new StringBuilder();
                    sb115.append(str160);
                    sb115.append(i67);
                    sb115.append(str152);
                    int i70 = fieldValue190;
                    sb115.append("pci");
                    int fieldValue192 = getFieldValue(msg3, sb115.toString());
                    StringBuilder sb116 = new StringBuilder();
                    sb116.append(str160);
                    sb116.append(i67);
                    sb116.append(str152);
                    HashMap<String, Boolean> map21 = map20;
                    sb116.append("rsrp");
                    int fieldValue193 = getFieldValue(msg3, sb116.toString(), true);
                    StringBuilder sb117 = new StringBuilder();
                    sb117.append(str160);
                    sb117.append(i67);
                    sb117.append(str152);
                    String str161 = str160;
                    sb117.append("rsrq");
                    int fieldValue194 = getFieldValue(msg3, sb117.toString(), true);
                    addHashMapKeyValues(str159, i, "LTE", "" + i67);
                    addHashMapKeyValues(str159, i, "EARFCN", "" + fieldValue191);
                    addHashMapKeyValues(str159, i, "PCI", "" + fieldValue192);
                    addHashMapKeyValues(str159, i, "RSRP", "" + (((float) fieldValue193) / 4096.0f));
                    addHashMapKeyValues(str159, i, "RSRQ", "" + (((float) fieldValue194) / 4096.0f));
                    i67++;
                    fieldValue190 = i70;
                    str160 = str161;
                    fieldValue179 = i68;
                    fieldValue180 = i69;
                    map20 = map21;
                    msg3 = msg3;
                }
                return map20;
            case 30:
                String str162 = strArr[26];
                map3.put(str162, true);
                resetHashMapKeyValues(str162, i);
                int fieldValue195 = getFieldValue(msg3, "num_cells");
                String str163 = "lte_cell_list[";
                int i71 = 0;
                while (i71 < fieldValue195 && i71 < 32) {
                    int fieldValue196 = getFieldValue(msg3, str163 + i71 + str16 + "EARFCN");
                    int fieldValue197 = getFieldValue(msg3, str163 + i71 + str16 + "PCI");
                    int i72 = fieldValue195;
                    HashMap<String, Boolean> map22 = map3;
                    int fieldValue198 = getFieldValue(msg3, str163 + i71 + str16 + "RSRP", true);
                    String str164 = str163;
                    int fieldValue199 = getFieldValue(msg3, str163 + i71 + str16 + "RSRQ", true);
                    StringBuilder sb118 = new StringBuilder();
                    sb118.append("");
                    sb118.append(i71);
                    addHashMapKeyValues(str162, i, "LTE", sb118.toString());
                    addHashMapKeyValues(str162, i, "EARFCN", "" + fieldValue196);
                    addHashMapKeyValues(str162, i, "PCI", "" + fieldValue197);
                    addHashMapKeyValues(str162, i, "RSRP", "" + (((float) fieldValue198) / 4096.0f));
                    addHashMapKeyValues(str162, i, "RSRQ", "" + (((float) fieldValue199) / 4096.0f));
                    i71++;
                    fieldValue195 = i72;
                    str163 = str164;
                    map3 = map22;
                    str16 = str16;
                }
                return map3;
            case 31:
                String str165 = strArr[28];
                map3.put(str165, true);
                resetHashMapKeyValues(str165, i);
                int fieldValue200 = getFieldValue(msg3, "num_cells");
                String str166 = "gsm_cell_list[";
                int i73 = 0;
                while (i73 < fieldValue200 && i73 < 6) {
                    int fieldValue201 = getFieldValue(msg3, str166 + i73 + "].arfcn");
                    int fieldValue202 = getFieldValue(msg3, str166 + i73 + "].bsic");
                    int fieldValue203 = getFieldValue(msg3, str166 + i73 + "].rssi", true);
                    StringBuilder sb119 = new StringBuilder();
                    sb119.append("");
                    sb119.append(i73);
                    addHashMapKeyValues(str165, i, "GSM", sb119.toString());
                    addHashMapKeyValues(str165, i, ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "" + fieldValue201);
                    addHashMapKeyValues(str165, i, "BSIC", ((fieldValue202 >> 3) & 7) + "" + (fieldValue202 & 7));
                    StringBuilder sb120 = new StringBuilder();
                    sb120.append("");
                    sb120.append(fieldValue203);
                    addHashMapKeyValues(str165, i, "RSSI", sb120.toString());
                    i73++;
                    str166 = str166;
                }
                return map3;
            case 32:
                String str167 = strArr[24];
                map3.put(str167, true);
                int fieldValue204 = getFieldValue(msg3, "secondary_hs_dsch_configuration_status." + MDMContent.FDD_EM_UL1_HSPA_PRIMARY_SEC_HS_DSCH_CONFIG_STATUS_DC_ON);
                int fieldValue205 = getFieldValue(msg3, "secondary_hs_dsch_configuration_status." + MDMContent.FDD_EM_UL1_HSPA_PRIMARY_SEC_HS_DSCH_CONFIG_STATUS_DL_FREQ);
                int fieldValue206 = getFieldValue(msg3, "secondary_hs_dsch_configuration_status.psc");
                StringBuilder sb121 = new StringBuilder();
                sb121.append("");
                sb121.append(fieldValue204 > 0 ? 1 : 0);
                setHashMapKeyValues(str167, i, "State", sb121.toString());
                if (fieldValue204 > 0) {
                    setHashMapKeyValues(str167, i, "S-carrier UARFCN", "" + fieldValue205);
                    setHashMapKeyValues(str167, i, "S-carrier PSC", "" + fieldValue206);
                } else {
                    setHashMapKeyValues(str167, i, "S-carrier UARFCN", "");
                    setHashMapKeyValues(str167, i, "S-carrier PSC", "");
                }
                return map3;
            case 34:
                String str168 = strArr[21];
                map3.put(str168, true);
                setHashMapKeyValues(str168, i, "Attach Type", getValueFromMapping(getFieldValue(msg3, MDMContent.EM_GMM_ATTACH_TYPE), this.attachTypeMapping));
                String str169 = strArr[8];
                map3.put(str169, true);
                setHashMapKeyValues(str169, i, "gmm state", getValueFromMapping(getFieldValue(msg3, MDMContent.EM_MM_GMM_STATE), this.gmmStateMapping));
                return map3;
            case 35:
                String str170 = strArr[21];
                map3.put(str170, true);
                setHashMapKeyValues(str170, i, "Location Update Type", getValueFromMapping(getFieldValue(msg3, MDMContent.EM_MM_LU_TYPE), this.luTypeMapping));
                return map3;
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case MotionEventCompat.AXIS_GENERIC_10 /* 41 */:
            case MotionEventCompat.AXIS_GENERIC_11 /* 42 */:
            case MotionEventCompat.AXIS_GENERIC_12 /* 43 */:
            case 44:
            case MotionEventCompat.AXIS_GENERIC_14 /* 45 */:
            case MotionEventCompat.AXIS_GENERIC_15 /* 46 */:
                String str171 = strArr[25];
                map3.put(str171, true);
                int iParsIndex = parsIndex(str);
                int fieldValue207 = getFieldValue(msg3, "pdp.pdp_context_status");
                Elog.d("EmInfo/MDMComponent", "index: " + iParsIndex + " pdp_context_status:" + fieldValue207);
                if (fieldValue207 == 0 || fieldValue207 == 2) {
                    this.status[iParsIndex] = false;
                } else {
                    this.status[iParsIndex] = true;
                }
                if (this.status[iParsIndex]) {
                    this.pdpapn_s[iParsIndex] = "";
                    for (int i74 = 0; i74 < 100; i74++) {
                        char fieldValue208 = (char) getFieldValue(msg3, "pdp.apn[" + i74 + "]");
                        StringBuilder sb122 = new StringBuilder();
                        String[] strArr23 = this.pdpapn_s;
                        sb122.append(strArr23[iParsIndex]);
                        sb122.append(fieldValue208);
                        strArr23[iParsIndex] = sb122.toString();
                    }
                    this.pdpStatus[iParsIndex] = getValueFromMapping(getFieldValue(msg3, "pdp.pdp_context_status"), this.pdpStatusMapping);
                    this.pdpIndex[iParsIndex] = "SM_NSAP" + (iParsIndex + 5);
                }
                setHashMapKeyValues(str171, i, "NSAPI Index", this.pdpIndex);
                setHashMapKeyValues(str171, i, "APN", this.pdpapn_s);
                setHashMapKeyValues(str171, i, "State", this.pdpStatus);
                return map3;
            case MotionEventCompat.AXIS_GENERIC_16 /* 47 */:
                String str172 = strArr[0];
                map3.put(str172, true);
                int fieldValue209 = getFieldValue(msg3, MDMContent.EM_SPEECH_INFO_SPH_CODEC_ULSPH_CODEC);
                int fieldValue210 = getFieldValue(msg3, MDMContent.EM_SPEECH_INFO_SPH_CODEC_DLSPH_CODEC);
                setHashMapKeyValues(str172, i, "UL speech codec", getValueFromMapping(fieldValue209, this.mMappingSpeechCodec));
                setHashMapKeyValues(str172, i, "DL speech codec", getValueFromMapping(fieldValue210, this.mMappingSpeechCodec));
                String str173 = strArr[8];
                map3.put(str173, true);
                setHashMapKeyValues(str173, i, "UL speech codec", getValueFromMapping(fieldValue209, this.speechCodecMapping));
                setHashMapKeyValues(str173, i, "DL speech codec", getValueFromMapping(fieldValue210, this.speechCodecMapping));
                String str174 = strArr[21];
                map3.put(str174, true);
                setHashMapKeyValues(str174, i, "UL speech codec", getValueFromMapping(fieldValue209, this.mMappingSpeechCodec));
                setHashMapKeyValues(str174, i, "DL speech codec", getValueFromMapping(fieldValue210, this.mMappingSpeechCodec));
                return map3;
            case 48:
                String str175 = strArr[0];
                map3.put(str175, true);
                setHashMapKeyValues(str175, i, "Attach Type", getValueFromMapping(getFieldValue(msg3, MDMContent.EM_EMM_L4C_EPS_ATTACH_TYPE), this.lteAttachTypeMapping));
                return map3;
            case 49:
                String str176 = strArr[0];
                map3.put(str176, true);
                setHashMapKeyValues(str176, i, "TAU Type", getValueFromMapping(getFieldValue(msg3, MDMContent.EM_EMM_REG_EPS_UPDATE_TYPE), this.lteTAUTypeMapping));
                return map3;
            case 50:
                String str177 = strArr[7];
                map3.put(str177, true);
                resetHashMapKeyValues(str177, i);
                this.lte_pdpapn_s = new String[11];
                this.lte_ebi_s = new String[11];
                this.lte_index_s = new String[15];
                this.lte_ptebi_s = new String[15];
                this.lte_ptlinkebi_s = new String[15];
                int i75 = 0;
                while (i75 < 11) {
                    String str178 = "esm_epsbc[" + i75 + "].";
                    int fieldValue211 = getFieldValue(msg3, str178 + "is_active");
                    if (fieldValue211 == 0) {
                        i14 = indexOfEmTypes;
                    } else {
                        Elog.d("EmInfo/MDMComponent", str178 + "is_active: " + fieldValue211);
                        StringBuilder sb123 = new StringBuilder();
                        sb123.append(str178);
                        sb123.append("apn.length");
                        int fieldValue212 = getFieldValue(msg3, sb123.toString());
                        int fieldValue213 = getFieldValue(msg3, str178 + "bearer_type");
                        if (fieldValue213 == i15) {
                            String[] strArr24 = this.lte_ebi_s;
                            StringBuilder sb124 = new StringBuilder();
                            i14 = indexOfEmTypes;
                            sb124.append(getFieldValue(msg3, str178 + "ebi"));
                            sb124.append("");
                            strArr24[i75] = sb124.toString();
                        } else {
                            i14 = indexOfEmTypes;
                            if (fieldValue213 == 2) {
                                String[] strArr25 = this.lte_ptebi_s;
                                StringBuilder sb125 = new StringBuilder();
                                sb125.append(getFieldValue(msg3, str178 + "ebi"));
                                sb125.append("");
                                strArr25[i75] = sb125.toString();
                            }
                        }
                        String[] strArr26 = this.lte_ptlinkebi_s;
                        StringBuilder sb126 = new StringBuilder();
                        sb126.append(getFieldValue(msg3, str178 + "linked_ebi"));
                        sb126.append("");
                        strArr26[i75] = sb126.toString();
                        this.lte_index_s[i75] = i75 + "";
                        this.lte_pdpapn_s[i75] = "";
                        int i76 = 0;
                        while (i76 < fieldValue212) {
                            int fieldValue214 = getFieldValue(msg3, str178 + "apn.data[" + i76 + "]");
                            if (i76 <= 0 || fieldValue214 >= 31) {
                                StringBuilder sb127 = new StringBuilder();
                                String[] strArr27 = this.lte_pdpapn_s;
                                sb127.append(strArr27[i75]);
                                sb127.append((char) fieldValue214);
                                strArr27[i75] = sb127.toString();
                            } else {
                                StringBuilder sb128 = new StringBuilder();
                                String[] strArr28 = this.lte_pdpapn_s;
                                sb128.append(strArr28[i75]);
                                sb128.append(".");
                                strArr28[i75] = sb128.toString();
                            }
                            i76++;
                            str178 = str178;
                        }
                    }
                    i75++;
                    str17 = str178;
                    indexOfEmTypes = i14;
                    i15 = 1;
                }
                setHashMapKeyValues(str177, i, "Index", this.lte_index_s);
                setHashMapKeyValues(str177, i, "APN", this.lte_pdpapn_s);
                setHashMapKeyValues(str177, i, "Bearer ID", this.lte_ebi_s);
                setHashMapKeyValues(str177, i, "Dedicated Bearer ID", this.lte_ptebi_s);
                setHashMapKeyValues(str177, i, "Dedicated Linked Bearer ID", this.lte_ptlinkebi_s);
                return map3;
            case 51:
                String str179 = strArr[25];
                map3.put(str179, true);
                int fieldValue215 = getFieldValue(msg3, "pdp.nsapi");
                Elog.d("EmInfo/MDMComponent", "pdp.nsapi: " + fieldValue215);
                if (fieldValue215 >= 5 && this.status[fieldValue215 - 5] && this.pdpIndex[fieldValue215 - 5] != null) {
                    this.cids[fieldValue215 - 5] = getFieldValue(msg3, "pdp.cid") + "";
                    int fieldValue216 = getFieldValue(msg3, "pdp.primary_context_id");
                    if (fieldValue216 != 255) {
                        this.linkedCids[fieldValue215 - 5] = fieldValue216 + "";
                    }
                }
                setHashMapKeyValues(str179, i, "Cid", this.cids);
                setHashMapKeyValues(str179, i, "Linked Cid", this.linkedCids);
                return map3;
        }
        return map;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationViewComponent
    ArrayList<LinkedHashMap> initHashMapValues() {
        ArrayList<LinkedHashMap> arrayList = new ArrayList<>();
        arrayList.add(initHashMap(new String[]{"PLMN", "TAC", "Cell ID", "EARFCN", "PCI", "Band", "DL_BW", "RSRP", "RSRQ", "SINR", "RSSI", "ERRC State", "Antenna", "RI", "TM", "DL Imcs", "DL Mod TB1", "DL Mod TB2", "UL Imcs", "UL Mod", "UL speech codec", "DL speech codec", "Attach Type", "TAU Type"}));
        arrayList.add(initHashMap(new String[]{"TAS Enable", "TX Antenna", "TX Power", "RSRP_LANT", "RSRP_UANT"}));
        arrayList.add(initHashMap(new String[]{"EARFCN", "PCI", "Band", "RSRP", "RSRQ", "SINR"}));
        arrayList.add(initHashMap(new String[]{"LTE", "EARFCN", "PCI", "RSRP", "RSRQ"}));
        arrayList.add(initHashMap(new String[]{"UMTS", "UARFCN", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "RSCP", "Ec/No"}));
        arrayList.add(initHashMap(new String[]{"GSM", ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "BSIC", "RSSI"}));
        arrayList.add(initHashMap(new String[]{"", "Pcell", "Scell0", "Scell1", "Scell2"}));
        arrayList.add(initHashMap(new String[]{"Index", "APN", "Bearer ID", "Dedicated Bearer ID", "Dedicated Linked Bearer ID"}));
        arrayList.add(initHashMap(new String[]{"PLMN", "LAC", "Cell ID", ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "BSIC", "band", "RLA", "RX quality sub", "RR state", "gmm state", "UL speech codec", "DL speech codec"}));
        arrayList.add(initHashMap(new String[]{"TAS Enable", "Antenna Index", "Current Antenna Power", "Other Antenna Power"}));
        arrayList.add(initHashMap(new String[]{"LTE", "EARFCN", "PCI", "RSRP", "RSRQ"}));
        arrayList.add(initHashMap(new String[]{"UMTS", "UARFCN", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "RSCP", "Ec/No"}));
        arrayList.add(initHashMap(new String[]{"GSM", ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "BSIC", "RSSI"}));
        arrayList.add(initHashMap(new String[]{"Channel", "pilotPN", MDMContent.C2K_L4_BAND_CLASS, "RSSI", "ecio"}));
        arrayList.add(initHashMap(new String[]{"Channel", "pilotPN", MDMContent.C2K_L4_BAND_CLASS, "RSSI", "ecio"}));
        arrayList.add(initHashMap(new String[]{"TAS Enable", "tx_Ant", "rxPower_LANT", "rxPower_UANT"}));
        arrayList.add(initHashMap(new String[]{"PLMN", "LAC", "Cell ID", "UARFCN", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "band", "RSCP", "RSSI", "RRC state"}));
        arrayList.add(initHashMap(new String[]{"TAS Enable", "TX Antenna", "TX Power", "RSRP_LANT", "RSRP_UANT"}));
        arrayList.add(initHashMap(new String[]{"LTE", "EARFCN", "PCI", "RSRP", "RSRQ"}));
        arrayList.add(initHashMap(new String[]{"UMTS", "UARFCN", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "RSCP"}));
        arrayList.add(initHashMap(new String[]{"GSM", ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "BSIC", "RSSI"}));
        arrayList.add(initHashMap(new String[]{"PLMN", "LAC", "Cell ID", "UARFCN", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "band", "RSCP", "Ec/No", "RSSI", "RRC state", "RAC", "UL speech codec", "DL speech codec", "Attach Type", "Location Update Type"}));
        arrayList.add(initHashMap(new String[]{"UARFCN", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "RSCP", "Ec/No"}));
        arrayList.add(initHashMap(new String[]{"TAS Enable", "TX Antenna", "TX Power", "RSRP_LANT", "RSRP_UANT", "RSRP_UANT(')"}));
        arrayList.add(initHashMap(new String[]{"State", "P-carrier UARFCN", "P-carrier PSC", "S-carrier UARFCN", "S-carrier PSC"}));
        arrayList.add(initHashMap(new String[]{"NSAPI Index", "APN", "State", "Cid", "Linked Cid"}));
        arrayList.add(initHashMap(new String[]{"LTE", "EARFCN", "PCI", "RSRP", "RSRQ"}));
        arrayList.add(initHashMap(new String[]{"UMTS", "UARFCN", MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, "RSCP", "Ec/No"}));
        arrayList.add(initHashMap(new String[]{"GSM", ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "BSIC", "RSSI"}));
        return arrayList;
    }

    void initImsiList(int i) {
        Activity activity = this.mActivity;
        Activity activity2 = this.mActivity;
        TelephonyManager telephonyManager = (TelephonyManager) activity.getSystemService("phone");
        if (isValidSimID(i)) {
            if (i >= this.imsi.length) {
                String[] strArr = this.imsi;
                this.imsi = new String[i];
                System.arraycopy(strArr, 0, this.imsi, 0, strArr.length);
            }
            String subscriberId = !isSimCardAbsent(i) ? telephonyManager.getSubscriberId(i) : "";
            this.imsi[i] = subscriberId != null ? subscriberId : "";
            return;
        }
        this.imsi = null;
        this.imsi = new String[getSupportSimCount()];
        for (int i2 = 0; i2 < getSupportSimCount(); i2++) {
            String subscriberId2 = !isSimCardAbsent(i2) ? telephonyManager.getSubscriberId(i2) : "";
            this.imsi[i2] = subscriberId2 != null ? subscriberId2 : "";
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationViewComponent
    String[] initLabels() {
        return new String[]{"LTE-Pcell", "LTE-Tas Info", "LTE-Scell", "LTE-Neighbor Cell", "LTE-Neighbor Cell.1", "LTE-Neighbor Cell.2", "LTE-Pcell and Scell basic info", "LTE-PDP Context Information", "GSM-Serving Cell", "GSM-Tas Info", "GSM-Neighbor Cell", "GSM-Neighbor Cell.1", "GSM-Neighbor Cell.2", "EVDO-Basic Info", "1xRTT-Basic Info", "1xRTT-Tas Info", "UMTS TDD-Serving cell", "UMTS TDD-Tas Info", "UMTS TDD-Neighbor Cell", "UMTS TDD-Neighbor Cell.1", "UMTS TDD-Neighbor Cell.2", "UMTS FDD-Serving cell", "UMTS FDD-Active Set", "UMTS FDD-Tas Info", "UMTS FDD-DC Info", "UMTS FDD-PDN Context List", "UMTS FDD-Neighbor Cell", "UMTS FDD-Neighbor Cell.1", "UMTS FDD-Neighbor Cell.2"};
    }

    public void initLocation() {
        Location lastKnownLocation;
        try {
            try {
                LocationManager locationManager = (LocationManager) this.mContext.getSystemService("location");
                this.locationManager = locationManager;
                if (locationManager == null) {
                    Elog.e("EmInfo/MDMComponent", "[initLocation]new mLocationManager failed");
                } else if (locationManager.isProviderEnabled("gps")) {
                    Location lastKnownLocation2 = this.locationManager.getLastKnownLocation("gps");
                    if (lastKnownLocation2 != null) {
                        this.location = lastKnownLocation2.getLatitude() + ":" + lastKnownLocation2.getLongitude();
                    }
                } else if (this.locationManager.isProviderEnabled("network") && (lastKnownLocation = this.locationManager.getLastKnownLocation("network")) != null) {
                    this.location = lastKnownLocation.getLatitude() + ":" + lastKnownLocation.getLongitude();
                }
            } catch (IllegalArgumentException e) {
                Elog.e("EmInfo/MDMComponent", "[initLocation]IllegalArgumentException: " + e.getMessage());
            } catch (SecurityException e2) {
                Toast.makeText(this.mContext, "security exception", 1).show();
                Elog.e("EmInfo/MDMComponent", "[initLocation]SecurityException: " + e2.getMessage());
            }
        } finally {
            this.locationManager = null;
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationViewComponent
    boolean isLabelArrayType(String str) {
        return getArrayTypeLabels().contains(str.indexOf(".") > 0 ? str.substring(0, str.indexOf(".")) : str);
    }

    public boolean isSimCardAbsent(int i) {
        Activity activity = this.mActivity;
        Activity activity2 = this.mActivity;
        TelephonyManager telephonyManager = (TelephonyManager) activity.getSystemService("phone");
        return telephonyManager.getSimState() == 1 || telephonyManager.getSimState() == 0;
    }

    int parsIndex(String str) {
        return Integer.parseInt(str.substring(18).split("_")[0]) - 5;
    }

    void registSimReceiver(Context context) {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ACTION_SIM_STATE_CHANGED);
        BroadcastReceiver broadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.mdmcomponent.FTNetworkInfo.23
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                String action = intent.getAction();
                if (FTNetworkInfo.this.mFirstBroadcast) {
                    FTNetworkInfo.this.mFirstBroadcast = false;
                    return;
                }
                if (action == null || !action.equals(FTNetworkInfo.ACTION_SIM_STATE_CHANGED)) {
                    return;
                }
                String stringExtra = intent.getStringExtra(FTNetworkInfo.INTENT_KEY_ICC_STATE);
                int intExtra = intent.getIntExtra("slot", 0);
                Elog.d("EmInfo/MDMComponent", "SIM state change changeSlot=" + intExtra + " new state =" + stringExtra);
                FTNetworkInfo.this.initImsiList(intExtra);
                FTNetworkInfo fTNetworkInfo = FTNetworkInfo.this;
                fTNetworkInfo.updateCommonView(fTNetworkInfo.getCurrentSimID());
            }
        };
        this.SimCardChangedReceiver = broadcastReceiver;
        context.registerReceiver(broadcastReceiver, intentFilter);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationViewComponent
    public void registeListener() {
        initImsiList(getSupportSimCount());
        initLocation();
        startLocation();
        registSimReceiver(this.mContext);
    }

    public void resetPublicValues() {
        this.TasVersion = 1;
        this.oldDlMod0Pcell = 0;
        this.oldDlMod1Pcell = 0;
        this.oldUlMode = 0;
        this.pdpIndex = new String[11];
        this.pdpapn_s = new String[11];
        this.pdpStatus = new String[11];
        this.cids = new String[11];
        this.linkedCids = new String[11];
        this.status = new boolean[11];
        this.lte_pdpapn_s = new String[11];
        this.lte_ebi_s = new String[11];
        this.lte_index_s = new String[15];
        this.lte_ptebi_s = new String[15];
        this.lte_ptlinkebi_s = new String[15];
    }

    String rscpCheck(int i) {
        return i == -255 ? " " : String.valueOf(i);
    }

    String servingBandMapping(int i) {
        if (i >= 0 && i <= 1) {
            return this.ServingBandMapping.get(Integer.valueOf(i));
        }
        return this.ServingBandMapping.get(2) + "(" + i + ")";
    }

    public void startLocation() {
        LocationManager locationManager = (LocationManager) this.mContext.getSystemService("location");
        this.locationManager = locationManager;
        if (locationManager != null) {
            if (locationManager.isProviderEnabled("gps")) {
                this.locationManager.requestLocationUpdates("gps", 0L, 0.0f, this.mLocListener);
            }
            if (this.locationManager.isProviderEnabled("network")) {
                this.locationManager.requestLocationUpdates("network", 0L, 0.0f, this.mLocListener);
            }
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationViewComponent
    void startUpdateProcess(CombinationViewComponent.Task task) {
        new UpdateViewTask().execute(task);
    }

    public void stopGetLocation() {
        LocationManager locationManager = this.locationManager;
        if (locationManager != null) {
            locationManager.removeUpdates(this.mLocListener);
            this.locationManager = null;
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    String tasEableMapping(int i) {
        return (i < 0 || i > 1) ? this.TasEnableMapping.get(2) : this.TasEnableMapping.get(Integer.valueOf(i));
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationViewComponent
    public void unRegisteListener() {
        this.imsi = new String[getSupportSimCount()];
        if (this.SimCardChangedReceiver != null) {
            try {
                try {
                    this.mContext.unregisterReceiver(this.SimCardChangedReceiver);
                } catch (Exception e) {
                    Elog.e("EmInfo/MDMComponent", "mContext.unregisterReceiver SimCardChangedReceiver: " + e.getMessage());
                }
                this.SimCardChangedReceiver = null;
            } catch (Throwable th) {
                this.SimCardChangedReceiver = null;
                throw th;
            }
        }
        LocationManager locationManager = this.locationManager;
        try {
            if (locationManager != null) {
                try {
                    locationManager.removeUpdates(this.mLocListener);
                } catch (Exception e2) {
                    Elog.e("EmInfo/MDMComponent", "locationManager.removeUpdates : " + e2.getMessage());
                }
            }
        } finally {
            this.locationManager = null;
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        System.currentTimeMillis();
        if (this.Labels == null) {
            this.Labels = initLabels();
        }
        int capabilitySim = (msg.getSimIdx() + (-1)) % 2 == 0 ? ModemCategory.getCapabilitySim() % 2 : (ModemCategory.getCapabilitySim() + 1) % 2;
        this.mUpdateTaskDriven.appendTask(this.repeateMsgArray.contains(str) ? new CombinationViewComponent.Task(1, str, msg, capabilitySim, true) : new CombinationViewComponent.Task(1, str, msg, capabilitySim));
    }
}
