package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.hqanfc.NfcCommand;
import com.mediatek.engineermode.rfdesense.RfDesenseTxTestCdma;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPServingCellInfo2 extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_TPC_REPORT, MDMContentICD.MSG_ID_NL1_SERVING_CELL_MEASUREMENT, MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION, MDMContentICD.MSG_TYPE_ICD_EVENT, MDMContentICD.MSG_ID_NL2_PDCP_CONFIGURATION_EVENT, MDMContentICD.MSG_ID_NRRC_CAPABILITY_EVENT, MDMContentICD.MSG_ID_NRRC_STATE_CHANGE_EVENT, MDMContentICD.MSG_ID_NRRC_SCG_RECONFIGURATION_EVENT, MDMContentICD.MSG_ID_NL2_MAC_TIMING_ADVANCE_EVENT};
    HashMap<Integer, Integer> BwpMapping;
    int[] PRlcEntityAddrs;
    int[][] TAAddrs;
    int[] UpLayerIndAddrs;
    int[][] beamFlagAddrs;
    int[] carTypeAddrs;
    int[] cfgRlcEntityAddrs;
    HashMap<Integer, String> cfgRlcEntityDLMapping;
    HashMap<Integer, String> cfgRlcEntityULMapping;
    int[][] cpTypeAddr;
    int[][] curEndcPowerAddrs;
    int[][] dlBwpSizeAddrs;
    int[][] dlSubCarrSpacingAddrs;
    int[][] maxMcsAddr;
    int[] recordLength;
    int[][] recordNumAddrs;
    int[] rrcStateAddrs;
    HashMap<Integer, String> rrcStateMapping;
    int[][] rsrpAddrs;
    int[][] rsrqAddrs;
    int[][] rssiAddrs;
    int[][] sinrAddrs;
    int[][] ssbIndexAddrs;
    int[] ueEndcAddrs;
    int[][] ulBwpSizeAddrs;
    int[] ulDataThresholdAddrs;
    int[][] ulSubCarrSpacingAddrs;

    public NRPServingCellInfo2(Activity activity) {
        super(activity);
        this.carTypeAddrs = new int[]{8, 10, 3};
        this.recordNumAddrs = new int[][]{new int[]{8, 56, 5}, new int[]{8, 56, 5}, new int[]{8, 56, 5}};
        this.recordLength = new int[]{RfDesenseTxTestCdma.DEFAULT_CHANNEL_VALUE, RfDesenseTxTestCdma.DEFAULT_CHANNEL_VALUE, 256};
        this.curEndcPowerAddrs = new int[][]{new int[0], new int[]{8, 136, 16}};
        this.UpLayerIndAddrs = new int[]{8, 112, 8};
        this.ueEndcAddrs = new int[]{8, 0, 8};
        this.rrcStateAddrs = new int[]{8, 0, 8};
        this.dlSubCarrSpacingAddrs = new int[][]{new int[]{8, 920, 21, 3}, new int[]{8, 920, 21, 3}, new int[]{8, 1176, 21, 3}, new int[]{8, 1176, 21, 3}, new int[]{8, 1432, 21, 3}, new int[]{8, 1464, 21, 3}, new int[]{8, 1496, 21, 3}, new int[]{8, 1496, 21, 3}, new int[]{8, 1752, 21, 3}, new int[]{8, 1752, 21, 3}, new int[]{8, 1752, 21, 3}, new int[]{8, 1784, 21, 3}, new int[]{8, 1816, 21, 3}};
        this.dlBwpSizeAddrs = new int[][]{new int[]{8, 920, 12, 9}, new int[]{8, 920, 12, 9}, new int[]{8, 1176, 12, 9}, new int[]{8, 1176, 12, 9}, new int[]{8, 1432, 12, 9}, new int[]{8, 1464, 12, 9}, new int[]{8, 1496, 12, 9}, new int[]{8, 1496, 12, 9}, new int[]{8, 1752, 12, 9}, new int[]{8, 1752, 12, 9}, new int[]{8, 1752, 12, 9}, new int[]{8, 1784, 12, 9}, new int[]{8, 1816, 12, 9}};
        this.ulSubCarrSpacingAddrs = new int[][]{new int[]{8, 856, 21, 3}, new int[]{8, 856, 21, 3}, new int[]{8, 856, 21, 3}, new int[]{8, 856, 21, 3}, new int[]{8, 856, 21, 3}, new int[]{8, 1400, 21, 3}, new int[]{8, 1400, 21, 3}, new int[]{8, 1400, 21, 3}, new int[]{8, 1656, 21, 3}, new int[]{8, 1656, 21, 3}, new int[]{8, 1656, 21, 3}, new int[]{8, 1688, 21, 3}, new int[]{8, 1720, 21, 3}};
        this.ulBwpSizeAddrs = new int[][]{new int[]{8, 856, 12, 9}, new int[]{8, 856, 12, 9}, new int[]{8, 856, 12, 9}, new int[]{8, 856, 12, 9}, new int[]{8, 856, 12, 9}, new int[]{8, 1400, 12, 9}, new int[]{8, 1400, 12, 9}, new int[]{8, 1400, 12, 9}, new int[]{8, 1656, 12, 9}, new int[]{8, 1656, 12, 9}, new int[]{8, 1656, 12, 9}, new int[]{8, 1688, 12, 9}, new int[]{8, 1720, 12, 9}};
        this.maxMcsAddr = new int[][]{new int[0], new int[0], new int[0], new int[0], new int[0], new int[]{8, 664, 3, 1}, new int[]{8, 664, 3, 1}, new int[]{8, 664, 3, 1}, new int[]{8, 920, 3, 1}, new int[]{8, 920, 3, 1}, new int[]{8, 920, 3, 1}, new int[]{8, 952, 3, 1}, new int[]{8, 952, 3, 1}};
        this.cpTypeAddr = new int[][]{new int[0], new int[0], new int[0], new int[0], new int[0], new int[0], new int[]{8, 246, 1}, new int[]{8, 246, 1}, new int[]{8, 246, 1}, new int[]{8, 246, 1}, new int[]{8, 246, 1}, new int[]{8, 246, 1}, new int[]{8, 246, 1}};
        this.cfgRlcEntityAddrs = new int[]{32, 32, 27, 2};
        this.PRlcEntityAddrs = new int[]{32, 32, 29, 1};
        this.ulDataThresholdAddrs = new int[]{32, 32, 32, 32};
        this.TAAddrs = new int[][]{new int[]{8, 14, 6}};
        this.cfgRlcEntityDLMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.NRPServingCellInfo2.1
            {
                put(0, "DL: LTE");
                put(1, "DL: NR");
                put(2, "DL: LTE & NR");
                put(-1, "INVALID");
            }
        };
        this.cfgRlcEntityULMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.NRPServingCellInfo2.2
            {
                put(0, "UL: LTE");
                put(1, "UL: NR");
                put(-1, "INVALID");
            }
        };
        this.rrcStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.NRPServingCellInfo2.3
            {
                put(0, "null");
                put(1, "idleCampedOnAnyCell");
                put(2, "idleCampedNormally");
                put(3, "idlConnecting");
                put(4, "connectedNormally");
                put(5, "releasing");
                put(6, "atmptOutbndMobility");
                put(7, "atmptInbndMobility");
                put(8, "inactive");
                put(9, "endcScgAdded");
            }
        };
        this.BwpMapping = new HashMap<Integer, Integer>() { // from class: com.mediatek.engineermode.mdmcomponent.NRPServingCellInfo2.4
            {
                put(0, 15);
                put(1, 30);
                put(2, 60);
                put(3, Integer.valueOf(NfcCommand.CommandType.MTK_NFC_EM_STOP_CMD));
                put(4, 240);
            }
        };
    }

    int getBandWidth(int i) {
        if (i < 5000) {
            return 5;
        }
        if (i < 10000) {
            return 10;
        }
        if (i < 15000) {
            return 15;
        }
        if (i < 20000) {
            return 20;
        }
        if (i < 25000) {
            return 25;
        }
        if (i < 30000) {
            return 30;
        }
        if (i < 40000) {
            return 40;
        }
        if (i < 50000) {
            return 50;
        }
        if (i < 60000) {
            return 60;
        }
        if (i < 80000) {
            return 80;
        }
        return i < 100000 ? 100 : 0;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "8. NR EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"RRC Status", "NR ENDC available", "EN-DE Status", "NR-SSB Index", "NR AvgRSRP, AvgRSRQ", "EN-DC Total Tx Pwr", "SSB - RSRP", "SSB - RSRQ", "SSB - RSSI", "SSB - SINR", "DL Data Split Path", "UL Data Split Path", "NR_DL_256QAM", "Cyclic Prefix", "DL Bandwidth", "UL Bandwidth", "DL Subcarrier Spacing", "UL Subcarrier Spacing", "NR_TA"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Serving Cell Info 2";
    }

    void initValue() {
        this.beamFlagAddrs = new int[][]{new int[0], new int[]{8, 88, 40, 1}, new int[]{8, 88, 40, 1}};
        this.ssbIndexAddrs = new int[][]{new int[]{8, 88, 32, 8}, new int[]{8, 88, 32, 8}, new int[]{8, 88, 32, 8}};
        this.rsrpAddrs = new int[][]{new int[]{8, 88, 64, 16}, new int[]{8, 88, 64, 16}, new int[]{8, 88, 64, 16}};
        this.rsrqAddrs = new int[][]{new int[]{8, 88, 160, 8}, new int[]{8, 88, 160, 8}, new int[]{8, 88, 128, 8}};
        this.rssiAddrs = new int[][]{new int[]{8, 88, 224, 16}, new int[]{8, 88, 224, 16}, new int[]{8, 88, 160, 16}};
        this.sinrAddrs = new int[][]{new int[]{8, 88, 320, 8}, new int[]{8, 88, 320, 8}, new int[]{8, 88, 224, 8}};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    /* JADX WARN: Code duplicated, block: B:51:0x00fa  */
    /* JADX WARN: Code duplicated, block: B:52:0x00fc  */
    /* JADX WARN: Code duplicated, block: B:57:0x0142  */
    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2;
        String str3;
        int i;
        int i2;
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        String str4 = ", condition = ";
        String str5 = ", values = ";
        String str6 = "EmInfo/MDMComponent";
        if (str.equals(MDMContentICD.MSG_ID_NL1_SERVING_CELL_MEASUREMENT)) {
            initValue();
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.carTypeAddrs[0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, this.carTypeAddrs);
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.recordNumAddrs);
            boolean z = false;
            int i3 = -32768;
            int i4 = -32768;
            int i5 = -32768;
            int i6 = -32768;
            int i7 = 0;
            int i8 = 0;
            int i9 = 0;
            int i10 = 0;
            while (true) {
                str3 = str6;
                if (i10 >= fieldValueIcd2) {
                    break;
                }
                String str7 = str5;
                int i11 = fieldValueIcd2;
                int i12 = fieldValueIcd;
                int[][] iArrInsertElement = insertElement(this.beamFlagAddrs, fieldValueIcdVersion, this.recordLength, i10 == 0 ? 0 : -1);
                this.beamFlagAddrs = iArrInsertElement;
                int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement);
                String str8 = str4;
                int[][] iArrInsertElement2 = insertElement(this.rsrpAddrs, fieldValueIcdVersion, this.recordLength, i10 == 0 ? 0 : -1);
                this.rsrpAddrs = iArrInsertElement2;
                int fieldValueIcd4 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement2, true);
                int i13 = (fieldValueIcd4 == 0 || fieldValueIcd4 <= i3) ? i3 : fieldValueIcd4;
                int[][] iArrInsertElement3 = insertElement(this.rsrqAddrs, fieldValueIcdVersion, this.recordLength, i10 == 0 ? 0 : -1);
                this.rsrqAddrs = iArrInsertElement3;
                int fieldValueIcd5 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement3, true);
                int i14 = (fieldValueIcd5 == 0 || fieldValueIcd5 <= i4) ? i4 : fieldValueIcd5;
                int[][] iArrInsertElement4 = insertElement(this.rssiAddrs, fieldValueIcdVersion, this.recordLength, i10 == 0 ? 0 : -1);
                this.rssiAddrs = iArrInsertElement4;
                int fieldValueIcd6 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement4, true);
                int i15 = (fieldValueIcd6 == 0 || fieldValueIcd6 <= i5) ? i5 : fieldValueIcd6;
                int[][] iArrInsertElement5 = insertElement(this.sinrAddrs, fieldValueIcdVersion, this.recordLength, i10 == 0 ? 0 : -1);
                this.sinrAddrs = iArrInsertElement5;
                int fieldValueIcd7 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement5, true);
                if (fieldValueIcd7 != 0) {
                    i = i6;
                    if (fieldValueIcd7 > i) {
                        i6 = fieldValueIcd7;
                    }
                    int[][] iArr = this.ssbIndexAddrs;
                    int[] iArr2 = this.recordLength;
                    if (i10 == 0) {
                        i2 = 0;
                    } else {
                        i2 = -1;
                    }
                    int[][] iArrInsertElement6 = insertElement(iArr, fieldValueIcdVersion, iArr2, i2);
                    this.ssbIndexAddrs = iArrInsertElement6;
                    if (fieldValueIcd3 != 1 && !z) {
                        int fieldValueIcd8 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement6);
                        z = true;
                        setData(3, fieldValueIcd8 + "");
                        setData(4, fieldValueIcd4 + ", " + fieldValueIcd5);
                        i9 = fieldValueIcd8;
                        i7 = fieldValueIcd4;
                        i8 = fieldValueIcd5;
                    }
                    i10++;
                    str6 = str3;
                    str5 = str7;
                    fieldValueIcd2 = i11;
                    fieldValueIcd = i12;
                    str4 = str8;
                    i3 = i13;
                    i4 = i14;
                    i5 = i15;
                } else {
                    i = i6;
                }
                i6 = i;
                int[][] iArr3 = this.ssbIndexAddrs;
                int[] iArr4 = this.recordLength;
                if (i10 == 0) {
                    i2 = 0;
                } else {
                    i2 = -1;
                }
                int[][] iArrInsertElement7 = insertElement(iArr3, fieldValueIcdVersion, iArr4, i2);
                this.ssbIndexAddrs = iArrInsertElement7;
                if (fieldValueIcd3 != 1) {
                }
                i10++;
                str6 = str3;
                str5 = str7;
                fieldValueIcd2 = i11;
                fieldValueIcd = i12;
                str4 = str8;
                i3 = i13;
                i4 = i14;
                i5 = i15;
            }
            String str9 = str4;
            String str10 = str5;
            int i16 = fieldValueIcd;
            int i17 = i6;
            String[] strArr = icdLogInfo;
            StringBuilder sb = new StringBuilder();
            sb.append(getName());
            sb.append(" update,name id = ");
            sb.append(str);
            sb.append(", version = ");
            sb.append(fieldValueIcdVersion);
            sb.append(str9);
            sb.append(i16);
            sb.append(", ");
            sb.append(fieldValueIcd2);
            sb.append(str10);
            int i18 = i9;
            sb.append(i18);
            sb.append(", ");
            int i19 = i7;
            sb.append(i19);
            sb.append(", ");
            int i20 = i8;
            sb.append(i20);
            sb.append(", ");
            sb.append(i3);
            sb.append(", ");
            sb.append(i4);
            sb.append(", ");
            sb.append(i5);
            sb.append(", ");
            sb.append(i17);
            sb.append(", ");
            sb.append(i18);
            sb.append(", ");
            sb.append(i19);
            sb.append(", ");
            sb.append(i20);
            Elog.d(str3, strArr, sb.toString());
            if (i16 == 0) {
                setData(6, i3 + "");
                setData(7, i4 + "");
                setData(8, i5 + "");
                setData(9, i17 + "");
            }
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION)) {
            int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, this.dlBwpSizeAddrs[0][0]);
            int fieldValueIcd9 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.dlSubCarrSpacingAddrs);
            int fieldValueIcd10 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.dlBwpSizeAddrs);
            int i21 = fieldValueIcd10 * 12 * (15 << fieldValueIcd9);
            setData(14, getBandWidth(i21) + " MHz");
            setData(16, this.BwpMapping.get(Integer.valueOf(fieldValueIcd9)) + " kHz");
            int fieldValueIcd11 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.ulSubCarrSpacingAddrs);
            int fieldValueIcd12 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.ulBwpSizeAddrs);
            int i22 = fieldValueIcd12 * 12 * (15 << fieldValueIcd11);
            int fieldValueIcd13 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.maxMcsAddr);
            int fieldValueIcd14 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.cpTypeAddr);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", condition = " + i21 + ", " + i22 + ", values = " + fieldValueIcd9 + ", " + fieldValueIcd10 + ", " + fieldValueIcd11 + ", " + fieldValueIcd12 + ", " + fieldValueIcd13 + ", " + fieldValueIcd14);
            StringBuilder sb2 = new StringBuilder();
            sb2.append(getBandWidth(i22));
            sb2.append(" MHz");
            setData(15, sb2.toString());
            StringBuilder sb3 = new StringBuilder();
            sb3.append(this.BwpMapping.get(Integer.valueOf(fieldValueIcd11)));
            sb3.append(" kHz");
            setData(17, sb3.toString());
            setData(12, fieldValueIcd13 == 1 ? "Enable" : "Disable");
            setData(13, fieldValueIcd14 == 0 ? "Normal" : "Extended");
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NL2_PDCP_CONFIGURATION_EVENT)) {
            int fieldValueIcdVersion3 = getFieldValueIcdVersion(byteBuffer, this.cfgRlcEntityAddrs[0]);
            int fieldValueIcd15 = getFieldValueIcd(byteBuffer, this.cfgRlcEntityAddrs);
            setData(10, getValueByMapping(this.cfgRlcEntityDLMapping, fieldValueIcd15));
            int fieldValueIcd16 = getFieldValueIcd(byteBuffer, this.PRlcEntityAddrs);
            int fieldValueIcd17 = getFieldValueIcd(byteBuffer, this.ulDataThresholdAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion3 + ", condition = " + fieldValueIcd15 + ", values = " + fieldValueIcd16 + ", " + fieldValueIcd17);
            if (fieldValueIcd15 != 2) {
                setData(11, getValueByMapping(this.cfgRlcEntityULMapping, fieldValueIcd15));
                return;
            }
            if (fieldValueIcd17 != -1) {
                str2 = "UL: LTE & NR";
            } else {
                str2 = fieldValueIcd16 == 0 ? "UL: LTE" : "UL: NR";
            }
            setData(11, str2);
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NRRC_CAPABILITY_EVENT)) {
            int fieldValueIcdVersion4 = getFieldValueIcdVersion(byteBuffer, this.ueEndcAddrs[0]);
            int fieldValueIcd18 = getFieldValueIcd(byteBuffer, this.ueEndcAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion4 + ", values = " + fieldValueIcd18);
            setData(1, fieldValueIcd18 == 0 ? "FALSE" : "TRUE");
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NRRC_STATE_CHANGE_EVENT)) {
            int fieldValueIcdVersion5 = getFieldValueIcdVersion(byteBuffer, this.rrcStateAddrs[0]);
            int fieldValueIcd19 = getFieldValueIcd(byteBuffer, this.rrcStateAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion5 + ", values = " + fieldValueIcd19);
            setData(0, getValueByMapping(this.rrcStateMapping, fieldValueIcd19));
            setData(2, fieldValueIcd19 == 9 ? "ON" : "OFF");
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NL1_TPC_REPORT)) {
            int[][] iArr5 = this.curEndcPowerAddrs;
            int fieldValueIcdVersion6 = getFieldValueIcdVersion(byteBuffer, iArr5[iArr5.length - 1][0]);
            int fieldValueIcd20 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion6, this.curEndcPowerAddrs, true);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion6 + ", values = " + fieldValueIcd20);
            setData(5, Integer.valueOf(fieldValueIcd20 / 32));
            return;
        }
        if (!str.equals(MDMContentICD.MSG_ID_NL2_MAC_TIMING_ADVANCE_EVENT)) {
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + " unhandled MSI_ID, return! ");
            return;
        }
        int[][] iArr6 = this.TAAddrs;
        int fieldValueIcdVersion7 = getFieldValueIcdVersion(byteBuffer, iArr6[iArr6.length - 1][0]);
        int fieldValueIcd21 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion7, this.TAAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion7 + ", value = " + fieldValueIcd21);
        setData(18, Integer.valueOf(fieldValueIcd21));
    }
}
