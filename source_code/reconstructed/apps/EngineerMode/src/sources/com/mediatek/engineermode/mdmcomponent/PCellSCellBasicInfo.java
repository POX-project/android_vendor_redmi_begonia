package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.os.SystemProperties;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;
import java.lang.reflect.Array;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class PCellSCellBasicInfo extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND, MDMContent.MSG_ID_EM_EL1_STATUS_IND};
    int[][] DlCellAntPort;
    int[][] DlCellBler;
    int[][] DlCellCqiCw0;
    int[][] DlCellCqiCw1;
    int[][] DlCellImcs;
    int[][] DlCellRb;
    int[][] DlCellTput;
    int[][] DlCellri;
    String FileNamePS;
    String FileNamePS1;
    String FileNamePS2;
    String StartTime;
    int[][] UlCellBler;
    int[][] UlCellImcs;
    int[][] UlCellRb;
    int[][] UlCellTput;
    int[] bandPcell;
    int[][] bandScellArr;
    int[] dlBandwidthPcell;
    int[][] dlBandwidthScellArr;
    int[] dlFreqPcell;
    int[][] dlFreqScellArr;
    int[] dlMod0Pcell;
    int[][] dlMod0ScellArr;
    int[] dlMod1Pcell;
    int[][] dlMod1ScellArr;
    long[] earfcnPcell;
    long[][] earfcnScellArr;
    boolean isFirstTimeRecord;
    String[] lastTime;
    HashMap<Integer, String> mMappingBW;
    HashMap<Integer, String> mMappingQam;
    int[] oldDlMod0Pcell;
    int[][] oldDlMod0ScellArr;
    int[] oldDlMod1Pcell;
    int[][] oldDlMod1ScellArr;
    int[] oldUlPcell;
    int[][] oldUlScellArr;
    int[] pciPcell;
    int[][] pciScellArr;
    int[] rsrpPcell;
    int[][] rsrpScellArr;
    int[] rsrqPcell;
    int[][] rsrqScellArr;
    int[] snrPcell;
    int[][] snrScellArr;
    String title;
    int[] tmPcell;
    int[][] tmScellArr;
    int[] ulBandwidthPcell;
    int[][] ulBandwidthScellArr;
    int[] ulFreqPcell;
    int[][] ulFreqScellArr;
    int[] ulPcell;
    int[][] ulScellArr;

    public PCellSCellBasicInfo(Activity activity) {
        super(activity);
        this.mMappingBW = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.PCellSCellBasicInfo.1
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
        this.mMappingQam = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.PCellSCellBasicInfo.2
            {
                put(1, "QPSK");
                put(2, "16QAM");
                put(3, "64QAM");
                put(4, "256QAM");
            }
        };
        this.earfcnPcell = new long[3];
        this.earfcnScellArr = (long[][]) Array.newInstance((Class<?>) long.class, 3, 3);
        this.bandPcell = new int[3];
        this.bandScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.dlBandwidthPcell = new int[3];
        this.dlBandwidthScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.ulBandwidthPcell = new int[3];
        this.ulBandwidthScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.tmPcell = new int[3];
        this.tmScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.pciPcell = new int[3];
        this.pciScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.snrPcell = new int[3];
        this.snrScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.dlFreqPcell = new int[3];
        this.dlFreqScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.ulFreqPcell = new int[3];
        this.ulFreqScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.rsrpPcell = new int[3];
        this.rsrpScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.rsrqPcell = new int[3];
        this.rsrqScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.dlMod0Pcell = new int[3];
        this.oldDlMod0Pcell = new int[3];
        this.dlMod0ScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.oldDlMod0ScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.dlMod1Pcell = new int[3];
        this.oldDlMod1Pcell = new int[3];
        this.dlMod1ScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.oldDlMod1ScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.ulPcell = new int[3];
        this.oldUlPcell = new int[3];
        this.ulScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.oldUlScellArr = (int[][]) Array.newInstance((Class<?>) int.class, 3, 3);
        this.DlCellAntPort = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.DlCellTput = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.UlCellTput = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.DlCellImcs = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.UlCellImcs = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.DlCellBler = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.UlCellBler = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.DlCellRb = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.UlCellRb = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.DlCellCqiCw0 = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.DlCellCqiCw1 = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.DlCellri = (int[][]) Array.newInstance((Class<?>) int.class, 3, 4);
        this.StartTime = null;
        this.lastTime = new String[2];
        this.FileNamePS = "_Pcell_and_Scell_basic_info.txt";
        this.title = "Time,Pcell_Band, Pcell_DL BW, Pcell_UL BW, Pcell_TM, Pcell_PCI, Pcell_EARFCN, Pcell_SNR, Pcell_DL_Freq, Pcell_UL_Freq, Pcell_RSRP, Pcell_RSRQ,Pcell_ant_port,Pcell_DL_Tput,Pcell_UL_Tput,Pcell_DL_Imcs,Pcell_UL_Imcs,Pcell_DL_bler,Pcell_UL_bler,Pcell_DL_rb,Pcell_UL_rb,Pcell_cqi_cw0,Pcell_cqi_cw1,Pcell_ri,Scell0_Band, Scell0_DL BW, Scell0_UL BW, Scell0_TM, Scell0_PCI, Scell0_EARFCN,Scell0_SNR, Scell0_DL_Freq, Scell0_UL_Freq, Scell0_RSRP, Scell0_RSRQ, Scell0_ant_port,Scell0_DL_Tput,Scell0_UL_Tput,Scell0_DL_Imcs,Scell0_UL_Imcs,Scell0_DL_bler,Scell0_UL_bler,Scell0_DL_rb,Scell0_UL_rb,Scell0_cqi_cw0,Scell0_cqi_cw1,Scell0_ri,Scell1_Band,Scell1_DL BW, Scell1_UL BW, Scell1_TM, Scell1_PCI, Scell1_EARFCN, Scell1_SNR,Scell1_DL_Freq, Scell1_UL_Freq, Scell1_RSRP, Scell1_RSRQ, Scell1_ant_port,Scell1_DL_Tput,Scell1_UL_Tput,Scell1_DL_Imcs,Scell1_UL_Imcs,Scell1_DL_bler,Scell1_UL_bler,Scell1_DL_rb,Scell1_UL_rb,Scell1_cqi_cw0,Scell1_cqi_cw1,Scell1_ri,Scell2_Band,Scell2_DL BW, Scell2_UL BW, Scell2_TM, Scell2_PCI, Scell2_EARFCN, Scell2_SNR,Scell2_DL_Freq, Scell2_UL_Freq,Scell2_RSRP, Scell2_RSRQ,Scell2_ant_port,Scell2_DL_Tput,Scell2_UL_Tput,Scell2_DL_Imcs,Scell2_UL_Imcs,Scell2_DL_bler,Scell2_UL_bler,Scell2_DL_rb,Scell2_UL_rb,Scell2_cqi_cw0,Scell2_cqi_cw1,Scell2_ri";
        this.FileNamePS1 = null;
        this.FileNamePS2 = null;
        this.isFirstTimeRecord = true;
    }

    void LogRecord(int i) {
        String[] strArr = new String[2];
        String[][] strArr2 = (String[][]) Array.newInstance((Class<?>) String.class, 2, 3);
        String[] strArr3 = new String[2];
        String[] strArr4 = new String[2];
        if (ComponentSelectActivity.mAutoRecordFlag.equals("0")) {
            Elog.d("EmInfo/MDMComponent", "Do not save info");
            return;
        }
        if (this.isFirstTimeRecord) {
            this.isFirstTimeRecord = false;
            this.StartTime = getCurrectTime();
            try {
                this.FileNamePS1 = this.StartTime + "_ps_1_" + MDMComponentDetailActivity.mSimMccMnc[0] + this.FileNamePS;
                this.FileNamePS2 = this.StartTime + "_ps_2_" + MDMComponentDetailActivity.mSimMccMnc[1] + this.FileNamePS;
                saveToSDCard("/Download", this.FileNamePS1, this.title, false);
                saveToSDCard("/Download", this.FileNamePS2, this.title, false);
                this.lastTime[0] = this.StartTime;
                this.lastTime[1] = this.StartTime;
            } catch (Exception e) {
                e.printStackTrace();
            }
            Elog.d("EmInfo/MDMComponent", "isFirstTimeRecord = " + this.isFirstTimeRecord + "," + this.title);
        }
        strArr3[i] = getCurrectTime();
        strArr[i] = strArr3[i] + " ," + this.bandPcell[i] + "," + this.mMappingBW.get(Integer.valueOf(this.dlBandwidthPcell[i])) + "," + this.mMappingBW.get(Integer.valueOf(this.ulBandwidthPcell[i])) + "," + this.tmPcell[i] + "," + this.pciPcell[i] + "," + this.earfcnPcell[i] + "," + (this.snrPcell[i] / 4.0f) + "," + this.dlFreqPcell[i] + "," + this.ulFreqPcell[i] + "," + (this.rsrpPcell[i] / 4.0f) + "," + (this.rsrqPcell[i] / 4.0f) + "," + this.DlCellAntPort[i][0] + "," + this.DlCellTput[i][0] + "," + this.UlCellTput[i][0] + "," + this.DlCellImcs[i][0] + "," + this.UlCellImcs[i][0] + "," + this.DlCellBler[i][0] + "," + this.UlCellBler[i][0] + "," + this.DlCellRb[i][0] + "," + this.UlCellRb[i][0] + "," + this.DlCellCqiCw0[i][0] + "," + this.DlCellCqiCw1[i][0] + "," + this.DlCellri[i][0];
        String[] strArr5 = strArr2[i];
        StringBuilder sb = new StringBuilder();
        sb.append(this.bandScellArr[i][0]);
        sb.append(",");
        sb.append(this.mMappingBW.get(Integer.valueOf(this.dlBandwidthScellArr[i][0])));
        sb.append(",");
        sb.append(this.mMappingBW.get(Integer.valueOf(this.ulBandwidthScellArr[i][0])));
        sb.append(",");
        sb.append(this.tmScellArr[i][0]);
        sb.append(",");
        sb.append(this.pciScellArr[i][0]);
        sb.append(",");
        sb.append(this.earfcnScellArr[i][0]);
        sb.append(",");
        sb.append(((float) this.snrScellArr[i][0]) / 4.0f);
        sb.append(",");
        sb.append(this.dlFreqScellArr[i][0]);
        sb.append(",");
        sb.append(this.ulFreqScellArr[i][0]);
        sb.append(",");
        sb.append(((float) this.rsrpScellArr[i][0]) / 4.0f);
        sb.append(",");
        sb.append(((float) this.rsrqScellArr[i][0]) / 4.0f);
        sb.append(",");
        sb.append(this.DlCellAntPort[i][1]);
        sb.append(",");
        sb.append(this.DlCellTput[i][1]);
        sb.append(",");
        sb.append(this.UlCellTput[i][1]);
        sb.append(",");
        sb.append(this.DlCellImcs[i][1]);
        sb.append(",");
        sb.append(this.UlCellImcs[i][1]);
        sb.append(",");
        sb.append(this.DlCellBler[i][1]);
        sb.append(",");
        sb.append(this.UlCellBler[i][1]);
        sb.append(",");
        sb.append(this.DlCellRb[i][1]);
        sb.append(",");
        sb.append(this.UlCellRb[i][1]);
        sb.append(",");
        sb.append(this.DlCellCqiCw0[i][1]);
        sb.append(",");
        sb.append(this.DlCellCqiCw1[i][1]);
        sb.append(",");
        sb.append(this.DlCellri[i][1]);
        strArr5[0] = sb.toString();
        strArr2[i][1] = this.bandScellArr[i][1] + "," + this.mMappingBW.get(Integer.valueOf(this.dlBandwidthScellArr[i][1])) + "," + this.mMappingBW.get(Integer.valueOf(this.ulBandwidthScellArr[i][1])) + "," + this.tmScellArr[i][1] + "," + this.pciScellArr[i][1] + "," + this.earfcnScellArr[i][1] + "," + (this.snrScellArr[i][1] / 4.0f) + "," + this.dlFreqScellArr[i][1] + "," + this.ulFreqScellArr[i][1] + "," + (this.rsrpScellArr[i][1] / 4.0f) + "," + (this.rsrqScellArr[i][1] / 4.0f) + "," + this.DlCellAntPort[i][2] + "," + this.DlCellTput[i][2] + "," + this.UlCellTput[i][2] + "," + this.DlCellImcs[i][2] + "," + this.UlCellImcs[i][2] + "," + this.DlCellBler[i][2] + "," + this.UlCellBler[i][2] + "," + this.DlCellRb[i][2] + "," + this.UlCellRb[i][2] + "," + this.DlCellCqiCw0[i][2] + "," + this.DlCellCqiCw1[i][2] + "," + this.DlCellri[i][2];
        strArr2[i][2] = this.bandScellArr[i][2] + "," + this.mMappingBW.get(Integer.valueOf(this.dlBandwidthScellArr[i][2])) + "," + this.mMappingBW.get(Integer.valueOf(this.ulBandwidthScellArr[i][2])) + "," + this.tmScellArr[i][2] + "," + this.pciScellArr[i][2] + "," + this.earfcnScellArr[i][2] + "," + (((float) this.snrScellArr[i][2]) / 4.0f) + "," + this.dlFreqScellArr[i][2] + "," + this.ulFreqScellArr[i][2] + "," + (((float) this.rsrpScellArr[i][2]) / 4.0f) + "," + (((float) this.rsrqScellArr[i][2]) / 4.0f) + "," + this.DlCellAntPort[i][3] + "," + this.DlCellTput[i][3] + "," + this.UlCellTput[i][3] + "," + this.DlCellImcs[i][3] + "," + this.UlCellImcs[i][3] + "," + this.DlCellBler[i][3] + "," + this.UlCellBler[i][3] + "," + this.DlCellRb[i][3] + "," + this.UlCellRb[i][3] + "," + this.DlCellCqiCw0[i][3] + "," + this.DlCellCqiCw1[i][3] + "," + this.DlCellri[i][3];
        StringBuilder sb2 = new StringBuilder();
        sb2.append(strArr[i]);
        sb2.append(",");
        sb2.append(strArr2[i][0]);
        sb2.append(",");
        sb2.append(strArr2[i][1]);
        sb2.append(",");
        sb2.append(strArr2[i][2]);
        strArr4[i] = sb2.toString();
        try {
            int i2 = Integer.parseInt(SystemProperties.get("persist.radio.record.time", "5"));
            if (diff_time(this.lastTime[i], strArr3[i], i2 * 1000)) {
                this.lastTime[i] = strArr3[i];
                Elog.d("EmInfo/MDMComponent", "recordTimer " + i2);
                if (i == 0) {
                    Elog.d("EmInfo/MDMComponent", "save " + strArr4[i] + " to " + this.FileNamePS1);
                    saveToSDCard("/Download", this.FileNamePS1, strArr4[i], true);
                } else if (i == 1) {
                    Elog.d("EmInfo/MDMComponent", "save " + strArr4[i] + " to " + this.FileNamePS2);
                    saveToSDCard("/Download", this.FileNamePS2, strArr4[i], true);
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"", "Pcell", "Scell0", "Scell1", "Scell2"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Pcell and Scell basic info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int simIdx = msg.getSimIdx() - 1;
        if (str.equals(MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND)) {
            String str2 = "serving_info.";
            this.earfcnPcell[simIdx] = getFieldValue(msg, "serving_info.earfcn");
            this.pciPcell[simIdx] = getFieldValue(msg, "serving_info.pci");
            this.rsrpPcell[simIdx] = getFieldValue(msg, "serving_info.rsrp", true);
            this.rsrqPcell[simIdx] = getFieldValue(msg, "serving_info.rsrq", true);
            this.snrPcell[simIdx] = getFieldValue(msg, "serving_info.rs_snr_in_qdb", true);
            int[] iArr = this.bandPcell;
            StringBuilder sb = new StringBuilder();
            sb.append("serving_info.");
            String str3 = "serv_lte_band";
            sb.append("serv_lte_band");
            iArr[simIdx] = getFieldValue(msg, sb.toString());
            int i = 0;
            for (int i2 = 3; i < i2; i2 = 3) {
                String str4 = str3;
                this.earfcnScellArr[simIdx][i] = getFieldValue(msg, "scell_info_list.scell_info[" + i + "].earfcn");
                this.pciScellArr[simIdx][i] = getFieldValue(msg, "scell_info_list.scell_info[" + i + "].pci");
                this.rsrpScellArr[simIdx][i] = getFieldValue(msg, "scell_info_list.scell_info[" + i + "].rsrp", true);
                this.rsrqScellArr[simIdx][i] = getFieldValue(msg, "scell_info_list.scell_info[" + i + "].rsrq", true);
                this.snrScellArr[simIdx][i] = getFieldValue(msg, "scell_info_list.scell_info[" + i + "].rs_snr_in_qdb", true);
                this.bandScellArr[simIdx][i] = getFieldValue(msg, "scell_info_list.scell_info[" + i + "]." + str4);
                i++;
                str3 = str4;
                str2 = str2;
            }
        } else {
            if (!str.equals(MDMContent.MSG_ID_EM_EL1_STATUS_IND)) {
                Elog.d("EmInfo/MDMComponent", "PCellSCellBasicInfo update invalid name");
                return;
            }
            String str5 = "cell_info[0].";
            this.dlBandwidthPcell[simIdx] = getFieldValue(msg, "cell_info[0]." + MDMContent.EM_EL1_STATUS_CELL_INFO_DL_BW);
            this.ulBandwidthPcell[simIdx] = getFieldValue(msg, "cell_info[0]." + MDMContent.EM_EL1_STATUS_CELL_INFO_UL_BW);
            this.tmPcell[simIdx] = getFieldValue(msg, "cell_info[0].tm");
            this.dlFreqPcell[simIdx] = getFieldValue(msg, "cell_info[0].dlFreq");
            this.ulFreqPcell[simIdx] = getFieldValue(msg, "cell_info[0].ulFreq");
            this.dlMod0Pcell[simIdx] = getFieldValue(msg, "dl_info[0].DL_Mod0");
            int[] iArr2 = this.oldDlMod0Pcell;
            int[] iArr3 = this.dlMod0Pcell;
            iArr2[simIdx] = iArr3[simIdx] == 255 ? iArr2[simIdx] : iArr3[simIdx];
            this.dlMod1Pcell[simIdx] = getFieldValue(msg, "dl_info[0].DL_Mod1");
            int[] iArr4 = this.oldDlMod1Pcell;
            int[] iArr5 = this.dlMod1Pcell;
            iArr4[simIdx] = iArr5[simIdx] == 255 ? iArr4[simIdx] : iArr5[simIdx];
            this.ulPcell[simIdx] = getFieldValue(msg, "ul_info[0].UL_Mod");
            int[] iArr6 = this.oldUlPcell;
            int[] iArr7 = this.ulPcell;
            iArr6[simIdx] = iArr7[simIdx] == 255 ? iArr6[simIdx] : iArr7[simIdx];
            int i3 = 0;
            while (i3 < 3) {
                this.dlBandwidthScellArr[simIdx][i3] = getFieldValue(msg, "cell_info[" + (i3 + 1) + "]." + MDMContent.EM_EL1_STATUS_CELL_INFO_DL_BW);
                this.ulBandwidthScellArr[simIdx][i3] = getFieldValue(msg, "cell_info[" + (i3 + 1) + "]." + MDMContent.EM_EL1_STATUS_CELL_INFO_UL_BW);
                this.tmScellArr[simIdx][i3] = getFieldValue(msg, "cell_info[" + (i3 + 1) + "].tm");
                this.dlFreqScellArr[simIdx][i3] = getFieldValue(msg, "cell_info[" + (i3 + 1) + "].dlFreq");
                this.ulFreqScellArr[simIdx][i3] = getFieldValue(msg, "cell_info[" + (i3 + 1) + "].ulFreq");
                this.dlMod0ScellArr[simIdx][i3] = getFieldValue(msg, "dl_info[" + (i3 + 1) + "].DL_Mod0");
                int[][] iArr8 = this.oldDlMod0ScellArr;
                int[] iArr9 = iArr8[simIdx];
                int[][] iArr10 = this.dlMod0ScellArr;
                String str6 = str5;
                iArr9[i3] = iArr10[simIdx][i3] == 255 ? iArr8[simIdx][i3] : iArr10[simIdx][i3];
                this.dlMod1ScellArr[simIdx][i3] = getFieldValue(msg, "dl_info[" + (i3 + 1) + "].DL_Mod1");
                int[][] iArr11 = this.oldDlMod1ScellArr;
                int[] iArr12 = iArr11[simIdx];
                int[][] iArr13 = this.dlMod1ScellArr;
                iArr12[i3] = iArr13[simIdx][i3] == 255 ? iArr11[simIdx][i3] : iArr13[simIdx][i3];
                this.ulScellArr[simIdx][i3] = getFieldValue(msg, "ul_info[" + (i3 + 1) + "].UL_Mod");
                int[][] iArr14 = this.oldUlScellArr;
                int[] iArr15 = iArr14[simIdx];
                int[][] iArr16 = this.ulScellArr;
                iArr15[i3] = iArr16[simIdx][i3] == 255 ? iArr14[simIdx][i3] : iArr16[simIdx][i3];
                if (this.bandScellArr[simIdx][i3] == 0) {
                    this.oldDlMod0ScellArr[simIdx][i3] = 0;
                    this.oldDlMod1ScellArr[simIdx][i3] = 0;
                    this.oldUlScellArr[simIdx][i3] = 0;
                }
                i3++;
                str5 = str6;
            }
            for (int i4 = 0; i4 < 4; i4++) {
                String str7 = "dl_info[" + i4 + "].";
                String str8 = "ul_info[" + i4 + "].";
                int[] iArr17 = this.DlCellAntPort[simIdx];
                iArr17[i4] = getFieldValue(msg, ("cell_info[" + i4 + "].") + MDMContent.EM_EL1_STATUS_CELL_INFO_ANT_PORT, true);
                this.DlCellTput[simIdx][i4] = getFieldValue(msg, str7 + MDMContent.EM_EL1_STATUS_DL_INFO_DL_TPUT);
                this.UlCellTput[simIdx][i4] = getFieldValue(msg, str8 + MDMContent.EM_EL1_STATUS_UL_INFO_UL_TPUT);
                this.DlCellImcs[simIdx][i4] = getFieldValue(msg, str7 + MDMContent.EM_EL1_STATUS_DL_INFO_DL_IMCS, true);
                this.UlCellImcs[simIdx][i4] = getFieldValue(msg, str8 + MDMContent.EM_EL1_STATUS_UL_INFO_UL_IMCS, true);
                this.DlCellBler[simIdx][i4] = getFieldValue(msg, str7 + MDMContent.EM_EL1_STATUS_DL_INFO_DL_BLER, true);
                this.UlCellBler[simIdx][i4] = getFieldValue(msg, str8 + MDMContent.EM_EL1_STATUS_UL_INFO_UL_BLER, true);
                this.DlCellRb[simIdx][i4] = getFieldValue(msg, str7 + MDMContent.EM_EL1_STATUS_DL_INFO_DL_RB, true);
                this.UlCellRb[simIdx][i4] = getFieldValue(msg, str8 + MDMContent.EM_EL1_STATUS_UL_INFO_UL_RB, true);
                this.DlCellCqiCw0[simIdx][i4] = getFieldValue(msg, str7 + MDMContent.EM_EL1_STATUS_DL_INFO_CQI_CW0, true);
                this.DlCellCqiCw1[simIdx][i4] = getFieldValue(msg, str7 + MDMContent.EM_EL1_STATUS_DL_INFO_CQI_CW1, true);
                this.DlCellri[simIdx][i4] = getFieldValue(msg, str7 + "ri");
            }
        }
        if (ComponentSelectActivity.mAutoRecordFlag.equals("1") && simIdx < 2) {
            LogRecord(simIdx);
        }
        if (simIdx + 1 != MDMComponentDetailActivity.mModemType) {
            return;
        }
        clearData();
        addData("Band", Integer.valueOf(this.bandPcell[simIdx]), Integer.valueOf(this.bandScellArr[simIdx][0]), Integer.valueOf(this.bandScellArr[simIdx][1]), Integer.valueOf(this.bandScellArr[simIdx][2]));
        addData("DL BW(MHz)", this.mMappingBW.get(Integer.valueOf(this.dlBandwidthPcell[simIdx])), this.mMappingBW.get(Integer.valueOf(this.dlBandwidthScellArr[simIdx][0])), this.mMappingBW.get(Integer.valueOf(this.dlBandwidthScellArr[simIdx][1])), this.mMappingBW.get(Integer.valueOf(this.dlBandwidthScellArr[simIdx][2])));
        addData("UL BW(MHz)", this.mMappingBW.get(Integer.valueOf(this.ulBandwidthPcell[simIdx])), this.mMappingBW.get(Integer.valueOf(this.ulBandwidthScellArr[simIdx][0])), this.mMappingBW.get(Integer.valueOf(this.ulBandwidthScellArr[simIdx][1])), this.mMappingBW.get(Integer.valueOf(this.ulBandwidthScellArr[simIdx][2])));
        addData("TM", Integer.valueOf(this.tmPcell[simIdx]), Integer.valueOf(this.tmScellArr[simIdx][0]), Integer.valueOf(this.tmScellArr[simIdx][1]), Integer.valueOf(this.tmScellArr[simIdx][2]));
        addData("PCI", Integer.valueOf(this.pciPcell[simIdx]), Integer.valueOf(this.pciScellArr[simIdx][0]), Integer.valueOf(this.pciScellArr[simIdx][1]), Integer.valueOf(this.pciScellArr[simIdx][2]));
        addData("EARFCN", Long.valueOf(this.earfcnPcell[simIdx]), Long.valueOf(this.earfcnScellArr[simIdx][0]), Long.valueOf(this.earfcnScellArr[simIdx][1]), Long.valueOf(this.earfcnScellArr[simIdx][2]));
        addData("RS_SNR", Float.valueOf(this.snrPcell[simIdx] / 4.0f), Float.valueOf(this.snrScellArr[simIdx][0] / 4.0f), Float.valueOf(this.snrScellArr[simIdx][1] / 4.0f), Float.valueOf(this.snrScellArr[simIdx][2] / 4.0f));
        addData("DL Freq", Integer.valueOf(this.dlFreqPcell[simIdx]), Integer.valueOf(this.dlFreqScellArr[simIdx][0]), Integer.valueOf(this.dlFreqScellArr[simIdx][1]), Integer.valueOf(this.dlFreqScellArr[simIdx][2]));
        addData("UL Freq", Integer.valueOf(this.ulFreqPcell[simIdx]), Integer.valueOf(this.ulFreqScellArr[simIdx][0]), Integer.valueOf(this.ulFreqScellArr[simIdx][1]), Integer.valueOf(this.ulFreqScellArr[simIdx][2]));
        addData("RSRP", Float.valueOf(this.rsrpPcell[simIdx] / 4.0f), Float.valueOf(this.rsrpScellArr[simIdx][0] / 4.0f), Float.valueOf(this.rsrpScellArr[simIdx][1] / 4.0f), Float.valueOf(this.rsrpScellArr[simIdx][2] / 4.0f));
        addData("RSRQ", Float.valueOf(this.rsrqPcell[simIdx] / 4.0f), Float.valueOf(this.rsrqScellArr[simIdx][0] / 4.0f), Float.valueOf(this.rsrqScellArr[simIdx][1] / 4.0f), Float.valueOf(this.rsrqScellArr[simIdx][2] / 4.0f));
        addData("DL Mod TB1", this.mMappingQam.get(Integer.valueOf(this.oldDlMod0Pcell[simIdx])), this.mMappingQam.get(Integer.valueOf(this.oldDlMod0ScellArr[simIdx][0])), this.mMappingQam.get(Integer.valueOf(this.oldDlMod0ScellArr[simIdx][1])), this.mMappingQam.get(Integer.valueOf(this.oldDlMod0ScellArr[simIdx][2])));
        addData("DL Mod TB2", this.mMappingQam.get(Integer.valueOf(this.oldDlMod1Pcell[simIdx])), this.mMappingQam.get(Integer.valueOf(this.oldDlMod1ScellArr[simIdx][0])), this.mMappingQam.get(Integer.valueOf(this.oldDlMod1ScellArr[simIdx][1])), this.mMappingQam.get(Integer.valueOf(this.oldDlMod1ScellArr[simIdx][2])));
        addData("UL Mod", this.mMappingQam.get(Integer.valueOf(this.oldUlPcell[simIdx])), this.mMappingQam.get(Integer.valueOf(this.oldUlScellArr[simIdx][0])), this.mMappingQam.get(Integer.valueOf(this.oldUlScellArr[simIdx][1])), this.mMappingQam.get(Integer.valueOf(this.oldUlScellArr[simIdx][2])));
    }
}
