package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.support.v4.media.subtitle.Cea708CCParser;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.hqanfc.NfcCommand;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRNetCon extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION, MDMContentICD.MSG_ID_ERRC_SERVING_CELL_INFO, MDMContentICD.MSG_ID_NL1_RACH_INFORMATION, MDMContentICD.MSG_ID_NL1_PUCCH_REPORT, MDMContentICD.MSG_ID_NRRC_SIB_READ_INFO, MDMContentICD.MSG_ID_NL1_PUCCH_POWER_CONTROL, MDMContentICD.MSG_ID_NL1_PUSCH_POWER_CONTROL, MDMContentICD.MSG_ID_NL1_SRS_TX_INFORMATION, MDMContentICD.MSG_TYPE_ICD_EVENT, MDMContentICD.MSG_ID_NRRC_STATE_CHANGE_EVENT};
    HashMap<Integer, Integer> BwpMapping;
    int[][] bwpSizeAddrs;
    int[][] dlBandWidthAddrs;
    int[][] dlFreqAddrs;
    int[] dlNarfcnAddrs;
    int[] guardPeriodAddrs;
    int[] guardPeriodV3Addrs;
    int[] power08Addrs;
    int[] power0EAddrs;
    int[][] power11Addrs;
    int[] prachConfAddrs;
    int[] prach_x;
    int[] preFormatAddrs;
    HashMap<Integer, String> preFormatMapping;
    int[] pucchFormatAddrs;
    int[] rrcStateAddrs;
    int[][] subCarSpacAddrs;
    int[] subCarrSpacingAddrs;

    public NRNetCon(Activity activity) {
        super(activity);
        this.rrcStateAddrs = new int[]{8, 0, 8};
        this.dlNarfcnAddrs = new int[]{8, 24, 22};
        this.subCarSpacAddrs = new int[][]{new int[]{8, 920, 21, 3}, new int[]{8, 920, 21, 3}, new int[]{8, 1176, 21, 3}, new int[]{8, 1176, 21, 3}, new int[]{8, 1432, 21, 3}, new int[]{8, 1464, 21, 3}, new int[]{8, 1496, 21, 3}, new int[]{8, 1496, 21, 3}, new int[]{8, 1752, 21, 3}, new int[]{8, 1752, 21, 3}, new int[]{8, 1752, 21, 3}, new int[]{8, 1784, 21, 3}, new int[]{8, 1816, 21, 3}};
        this.bwpSizeAddrs = new int[][]{new int[]{8, 920, 12, 9}, new int[]{8, 920, 12, 9}, new int[]{8, 1176, 12, 9}, new int[]{8, 1176, 12, 9}, new int[]{8, 1432, 12, 9}, new int[]{8, 1464, 12, 9}, new int[]{8, 1496, 12, 9}, new int[]{8, 1496, 12, 9}, new int[]{8, 1752, 12, 9}, new int[]{8, 1752, 12, 9}, new int[]{8, 1752, 12, 9}, new int[]{8, 1784, 12, 9}, new int[]{8, 1816, 12, 9}};
        this.dlFreqAddrs = new int[][]{new int[]{8, Cea708CCParser.Const.CODE_C1_DF0, 32}, new int[]{8, Cea708CCParser.Const.CODE_C1_DF0, 32}, new int[]{8, Cea708CCParser.Const.CODE_C1_DF0, 32}};
        this.dlBandWidthAddrs = new int[][]{new int[]{8, 96, 8}, new int[]{8, 96, 8}, new int[]{8, 96, 8}};
        this.guardPeriodAddrs = new int[]{8, 82, 4};
        this.guardPeriodV3Addrs = new int[]{8, 56, 32, 4};
        this.preFormatAddrs = new int[]{8, 56, 34, 4};
        this.prachConfAddrs = new int[]{8, 56, 43, 8};
        this.pucchFormatAddrs = new int[]{8, 24, 17, 4};
        this.subCarrSpacingAddrs = new int[]{8, 56, 0, 8};
        this.power0EAddrs = new int[]{8, 24, 64, 8};
        this.power11Addrs = new int[][]{new int[]{8, 24, 64, 8}, new int[]{8, 24, 96, 8}, new int[]{8, 24, 96, 8}, new int[]{8, 24, 96, 8}};
        this.power08Addrs = new int[]{8, 24, 96, 16};
        this.preFormatMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.NRNetCon.1
            {
                put(0, "0");
                put(1, "1");
                put(2, "2");
                put(3, "3");
                put(4, "A1");
                put(5, "A2");
                put(6, "A3");
                put(7, "B1");
                put(8, "B2");
                put(9, "B3");
                put(10, "B4");
                put(11, "C0");
                put(12, "C2");
            }
        };
        this.BwpMapping = new HashMap<Integer, Integer>() { // from class: com.mediatek.engineermode.mdmcomponent.NRNetCon.2
            {
                put(0, 15);
                put(1, 30);
                put(2, 60);
                put(3, Integer.valueOf(NfcCommand.CommandType.MTK_NFC_EM_STOP_CMD));
                put(4, 240);
            }
        };
        this.prach_x = new int[]{16, 16, 16, 16, 8, 8, 8, 8, 4, 4, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 16, 16, 16, 16, 8, 8, 8, 8, 4, 4, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 16, 8, 4, 2, 2, 1, 1, 16, 16, 16, 16, 8, 8, 8, 4, 4, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 16, 16, 8, 8, 4, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 16, 16, 8, 8, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 16, 16, 8, 8, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 16, 16, 8, 8, 4, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 16, 16, 8, 8, 4, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 16, 16, 8, 8, 4, 4, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
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
        return new String[]{"5G Connection", "NR Frequency", "NR BW", "LTE Frequency", "LTE BW", "Special Sub-Frame GP", "PRACH Fromat", "PRACH Period", "PUCCH Format", "PBCH Subcarrier Spacing", "Uplink Power Control PUCCH", "Uplink Power Control PUSCH", "Uplink Power Control SRS"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Network Configuration";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2;
        String string;
        String str3;
        String str4;
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_NRRC_STATE_CHANGE_EVENT)) {
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.rrcStateAddrs[0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, this.rrcStateAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd);
            if (fieldValueIcd == 0) {
                str4 = "None";
            } else {
                str4 = (fieldValueIcd < 1 || fieldValueIcd > 8) ? "NSA" : "SA";
            }
            setData(0, str4);
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION)) {
            int[][] iArr = this.subCarSpacAddrs;
            int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.dlNarfcnAddrs);
            int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2 < 3 ? this.guardPeriodAddrs : this.guardPeriodV3Addrs);
            int[][] iArr2 = this.subCarSpacAddrs;
            int fieldValueIcd4 = getFieldValueIcd(byteBuffer, iArr2[(fieldValueIcdVersion2 <= iArr2.length ? fieldValueIcdVersion2 : iArr2.length) - 1]);
            int[][] iArr3 = this.bwpSizeAddrs;
            int fieldValueIcd5 = getFieldValueIcd(byteBuffer, iArr3[(fieldValueIcdVersion2 <= iArr3.length ? fieldValueIcdVersion2 : iArr3.length) - 1]);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", condition = " + fieldValueIcd4 + ", values = " + fieldValueIcd2 + ", " + fieldValueIcd3 + ", " + fieldValueIcd5);
            int i = 0;
            int i2 = 0;
            int i3 = 0;
            if (fieldValueIcd2 >= 0 && fieldValueIcd2 <= 599999) {
                i = 0;
                i2 = 5;
                i3 = 0;
            } else if (600000 <= fieldValueIcd2 && fieldValueIcd2 <= 2016666) {
                i = 3000;
                i2 = 15;
                i3 = 600000;
            }
            setData(1, ((((fieldValueIcd2 - i3) * i2) / 1000) + i) + " MHz");
            this.BwpMapping.get(Integer.valueOf(fieldValueIcd4)).intValue();
            setData(2, getBandWidth(fieldValueIcd5 * 12 * (15 << fieldValueIcd4)) + " MHz");
            setData(5, Integer.valueOf(fieldValueIcd3));
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_ERRC_SERVING_CELL_INFO)) {
            int[][] iArr4 = this.dlFreqAddrs;
            int fieldValueIcdVersion3 = getFieldValueIcdVersion(byteBuffer, iArr4[iArr4.length - 1][0]);
            long fieldValueIcd6 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion3, this.dlFreqAddrs, false);
            long fieldValueIcd7 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion3, this.dlBandWidthAddrs, false);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion3 + ", values = " + fieldValueIcd6 + "," + fieldValueIcd7);
            if (fieldValueIcd6 == -1) {
                string = "Invalid";
                str2 = " MHz";
            } else {
                StringBuilder sb = new StringBuilder();
                sb.append(fieldValueIcd6);
                str2 = " MHz";
                sb.append(str2);
                string = sb.toString();
            }
            setData(3, string);
            if (fieldValueIcd7 == 255) {
                str3 = "";
            } else {
                str3 = (fieldValueIcd7 / 10) + str2;
            }
            setData(4, str3);
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NL1_RACH_INFORMATION)) {
            int fieldValueIcdVersion4 = getFieldValueIcdVersion(byteBuffer, this.preFormatAddrs[0]);
            int fieldValueIcd8 = getFieldValueIcd(byteBuffer, this.preFormatAddrs);
            int fieldValueIcd9 = getFieldValueIcd(byteBuffer, this.prachConfAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion4 + ", values = " + fieldValueIcd8 + "," + fieldValueIcd9);
            setData(6, getValueByMapping(this.preFormatMapping, fieldValueIcd8));
            StringBuilder sb2 = new StringBuilder();
            sb2.append(this.prach_x[fieldValueIcd9] * 10);
            sb2.append(" ms");
            setData(7, sb2.toString());
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NL1_PUCCH_REPORT)) {
            int fieldValueIcdVersion5 = getFieldValueIcdVersion(byteBuffer, this.pucchFormatAddrs[0]);
            int fieldValueIcd10 = getFieldValueIcd(byteBuffer, this.pucchFormatAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion5 + ", values = " + fieldValueIcd10);
            setData(8, Integer.valueOf(fieldValueIcd10));
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NRRC_SIB_READ_INFO)) {
            int fieldValueIcdVersion6 = getFieldValueIcdVersion(byteBuffer, this.subCarrSpacingAddrs[0]);
            int fieldValueIcd11 = getFieldValueIcd(byteBuffer, this.subCarrSpacingAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion6 + ", values = " + fieldValueIcd11);
            setData(9, Integer.valueOf(fieldValueIcd11));
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NL1_PUCCH_POWER_CONTROL)) {
            int fieldValueIcdVersion7 = getFieldValueIcdVersion(byteBuffer, this.power0EAddrs[0]);
            int fieldValueIcd12 = getFieldValueIcd(byteBuffer, this.power0EAddrs, true);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion7 + ", values = " + fieldValueIcd12);
            setData(10, Integer.valueOf(fieldValueIcd12));
            return;
        }
        if (!str.equals(MDMContentICD.MSG_ID_NL1_PUSCH_POWER_CONTROL)) {
            int fieldValueIcdVersion8 = getFieldValueIcdVersion(byteBuffer, this.power08Addrs[0]);
            int fieldValueIcd13 = getFieldValueIcd(byteBuffer, this.power08Addrs, true);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion8 + ", values = " + fieldValueIcd13);
            setData(12, Integer.valueOf(fieldValueIcd13));
            return;
        }
        int[][] iArr5 = this.power11Addrs;
        int fieldValueIcdVersion9 = getFieldValueIcdVersion(byteBuffer, iArr5[iArr5.length - 1][0]);
        int fieldValueIcd14 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion9, this.power11Addrs, true);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion9 + ", values = " + fieldValueIcd14);
        setData(11, Integer.valueOf(fieldValueIcd14));
    }
}
