package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.support.v4.media.subtitle.Cea708CCParser;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.hqanfc.NfcCommand;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPServingCellInfo1 extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_SERVING_CELL_MEASUREMENT, MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION, MDMContentICD.MSG_ID_ERRC_SERVING_CELL_INFO, MDMContentICD.MSG_TYPE_ICD_EVENT, MDMContentICD.MSG_ID_NRRC_SERVING_CELL_EVENT, MDMContentICD.MSG_ID_NRRC_SCG_RECONFIGURATION_EVENT};
    int[][] TAAddrs;
    int[][] TACodeAddrs;
    int[] UpLayerIndAddrs;
    int[] carTypeAddrs;
    int[][] cellGroupIdAddrs;
    int[][] cellId0Addrs;
    int[][] cellId1Addrs;
    int[][] cellId2Addrs;
    int[][] cellId3Addrs;
    int[][] cellId4Addrs;
    int[][] cellIdAddrs;
    int[][] cellMCCAddrs;
    int[][] cellMNCAddrs;
    int[][] cellMNCNumAddrs;
    int[][] dlFreqBandAddr;
    int[][] mncNumAddrs;
    int[] narfcnAddrs;
    int[] pciAddrs;
    int[][] servCellIndexAddrs;
    int[][] srb3ConfStatusAddrs;

    public NRPServingCellInfo1(Activity activity) {
        super(activity);
        this.carTypeAddrs = new int[]{8, 10, 3};
        this.narfcnAddrs = new int[]{8, 24, 22};
        this.cellGroupIdAddrs = new int[][]{new int[]{8, 0, 8}, new int[]{8, 0, 8}, new int[]{8, 0, 8}};
        this.cellMCCAddrs = new int[][]{new int[]{8, 8, 16}, new int[]{8, 8, 16}, new int[]{8, 24, 16}};
        this.cellMNCNumAddrs = new int[][]{new int[]{8, 32, 8}, new int[]{8, 32, 8}, new int[]{8, 96, 8}};
        this.cellMNCAddrs = new int[][]{new int[]{8, 40, 16}, new int[]{8, 40, 16}, new int[]{8, 104, 16}};
        this.servCellIndexAddrs = new int[][]{new int[]{8, Cea708CCParser.Const.CODE_C1_DF0, 0, 8}, new int[]{8, NfcCommand.CommandType.MTK_NFC_EM_STOP_CMD, 0, 8}, new int[]{8, 184, 0, 8}};
        this.cellId0Addrs = new int[][]{new int[]{8, 88, 8}, new int[]{8, 80, 8}, new int[]{8, Cea708CCParser.Const.CODE_C1_SPA, 8}};
        this.cellId1Addrs = new int[][]{new int[]{8, 96, 8}, new int[]{8, 88, 8}, new int[]{8, Cea708CCParser.Const.CODE_C1_DF0, 8}};
        this.cellId2Addrs = new int[][]{new int[]{8, 104, 8}, new int[]{8, 96, 8}, new int[]{8, 160, 8}};
        this.cellId3Addrs = new int[][]{new int[]{8, 112, 8}, new int[]{8, 104, 8}, new int[]{8, 168, 8}};
        this.cellId4Addrs = new int[][]{new int[]{8, NfcCommand.CommandType.MTK_NFC_EM_STOP_CMD, 8}, new int[]{8, 112, 8}, new int[]{8, 176, 8}};
        this.cellIdAddrs = new int[][]{new int[]{8, 88, 40}, new int[]{8, 80, 36}, new int[]{8, Cea708CCParser.Const.CODE_C1_SPA, 36}};
        this.mncNumAddrs = new int[][]{new int[]{8, 32, 8}, new int[]{8, 32, 8}, new int[]{8, 96, 8}};
        this.TACodeAddrs = new int[][]{new int[]{8, 56, 24}, new int[]{8, 56, 24}, new int[]{8, NfcCommand.CommandType.MTK_NFC_EM_STOP_CMD, 24}};
        this.pciAddrs = new int[]{8, 0, 10};
        this.TAAddrs = new int[][]{new int[]{8, 14, 6}};
        this.srb3ConfStatusAddrs = new int[][]{new int[0], new int[]{8, 32, 8}};
        this.UpLayerIndAddrs = new int[]{8, 112, 8};
        this.dlFreqBandAddr = new int[][]{new int[0], new int[0], new int[0], new int[0], new int[0], new int[]{8, 49, 7}, new int[]{8, 49, 7}, new int[]{8, 49, 7}, new int[]{8, 46, 7}, new int[]{8, 46, 7}, new int[]{8, 46, 7}, new int[]{8, 46, 8}, new int[]{8, 46, 8}};
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
        return new String[]{"NARFCN", "NCGI", "PCI", "Global Cell ID", "Vendor ID", "gNB ID", "Cell ID", "mcc", "mnc", "BAND", "NR-SRB3", "Upper Layer Indication Status-SIB2", "NT_TAC"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Serving Cell Info 1";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        int i;
        int i2;
        int i3;
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_NL1_SERVING_CELL_MEASUREMENT)) {
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.carTypeAddrs[0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, this.carTypeAddrs);
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.narfcnAddrs);
            int fieldValueIcd3 = getFieldValueIcd(byteBuffer, this.pciAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd + ", values = " + fieldValueIcd2 + ", " + fieldValueIcd3);
            if (fieldValueIcd == 0) {
                setData(0, fieldValueIcd2 + "");
                setData(2, fieldValueIcd3 + "");
            }
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION)) {
            int[][] iArr = this.dlFreqBandAddr;
            setData(9, Integer.valueOf(getFieldValueIcd(byteBuffer, getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]), this.dlFreqBandAddr)));
            return;
        }
        if (!str.equals(MDMContentICD.MSG_ID_NRRC_SERVING_CELL_EVENT)) {
            if (str.equals(MDMContentICD.MSG_ID_ERRC_SERVING_CELL_INFO)) {
                int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, this.UpLayerIndAddrs[0]);
                int fieldValueIcd4 = getFieldValueIcd(byteBuffer, this.UpLayerIndAddrs);
                setData(11, fieldValueIcd4 == 0 ? "FALSE" : "TRUE");
                Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", values = " + fieldValueIcd4);
                return;
            }
            if (!str.equals(MDMContentICD.MSG_ID_NRRC_SCG_RECONFIGURATION_EVENT)) {
                Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + " unhandled MSG_ID, return! ");
                return;
            }
            int[][] iArr2 = this.srb3ConfStatusAddrs;
            int fieldValueIcdVersion3 = getFieldValueIcdVersion(byteBuffer, iArr2[iArr2.length - 1][0]);
            int fieldValueIcd5 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion3, this.srb3ConfStatusAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion3 + ", values = " + fieldValueIcd5);
            setData(10, fieldValueIcd5 == 0 ? "Not configured" : "Configured");
            return;
        }
        int[][] iArr3 = this.cellGroupIdAddrs;
        int fieldValueIcdVersion4 = getFieldValueIcdVersion(byteBuffer, iArr3[iArr3.length - 1][0]);
        int fieldValueIcd6 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.cellGroupIdAddrs);
        int fieldValueIcd7 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.servCellIndexAddrs);
        int fieldValueIcd8 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.cellMNCNumAddrs);
        if (fieldValueIcd6 == 0 && fieldValueIcd7 == 0 && fieldValueIcd8 > 0) {
            int fieldValueIcd9 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.cellMCCAddrs);
            int fieldValueIcd10 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.cellMNCAddrs);
            long fieldValueIcd11 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.cellIdAddrs, false);
            int fieldValueIcd12 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.cellId0Addrs);
            int fieldValueIcd13 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.cellId1Addrs);
            int fieldValueIcd14 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.cellId2Addrs);
            int fieldValueIcd15 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.cellId3Addrs);
            int fieldValueIcd16 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.cellId4Addrs);
            int fieldValueIcd17 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion4, this.TACodeAddrs);
            int[][] iArr4 = this.cellIdAddrs;
            int length = (fieldValueIcdVersion4 <= iArr4.length ? fieldValueIcdVersion4 : iArr4.length) - 1;
            int[][] iArr5 = this.cellIdAddrs;
            int i4 = (int) ((fieldValueIcd11 >> (iArr5[length][iArr5.length - 1] - 2)) & 3);
            int i5 = (int) ((fieldValueIcd11 >> (iArr5[length][iArr5.length - 1] - 22)) & 8388607);
            int i6 = (int) (fieldValueIcd11 & 32767);
            int i7 = fieldValueIcd9 & 4095;
            int i8 = fieldValueIcd10 & 4095;
            int i9 = i7 & 15;
            int i10 = (i7 & 240) >> 4;
            int i11 = (i7 & 3840) >> 8;
            int i12 = (i11 * 100) + (i10 * 10) + i9;
            int i13 = 0;
            if (fieldValueIcd8 == 2) {
                int i14 = (i8 & 240) >> 4;
                int i15 = i8 & 15;
                i13 = (i14 * 10) + i15;
                i = i14;
                i2 = i15;
                i3 = 0;
            } else if (fieldValueIcd8 == 3) {
                int i16 = (i8 & 3840) >> 8;
                int i17 = (i8 & 240) >> 4;
                int i18 = i8 & 15;
                i13 = (i16 * 100) + (i17 * 10) + i18;
                i = i16;
                i2 = i17;
                i3 = i18;
            } else {
                i = 0;
                i2 = 0;
                i3 = 0;
            }
            int i19 = i;
            String[] strArr = icdLogInfo;
            StringBuilder sb = new StringBuilder();
            sb.append(getName());
            sb.append(" update,name id = ");
            sb.append(str);
            sb.append(", version = ");
            sb.append(fieldValueIcdVersion4);
            sb.append(", condition = ");
            sb.append(fieldValueIcd6);
            sb.append(", ");
            sb.append(fieldValueIcd7);
            sb.append(", ");
            sb.append(fieldValueIcd8);
            sb.append(", ");
            sb.append(fieldValueIcd11);
            sb.append("(");
            sb.append(Integer.toBinaryString((int) fieldValueIcd11));
            sb.append(")");
            sb.append(i7);
            sb.append("(");
            sb.append(Integer.toBinaryString(i7));
            sb.append(")");
            sb.append(i8);
            sb.append("(");
            sb.append(Integer.toBinaryString(i8));
            sb.append("), ");
            sb.append(i11);
            sb.append(i10);
            sb.append(i9);
            sb.append(", ");
            sb.append(i19);
            int i20 = i2;
            sb.append(i20);
            int i21 = i3;
            sb.append(i21);
            sb.append(", values = ");
            sb.append(Integer.toBinaryString(i4));
            sb.append(", ");
            sb.append(i5);
            sb.append("(");
            sb.append(Integer.toBinaryString(i5));
            sb.append("), ");
            sb.append(i6);
            sb.append("(");
            sb.append(Integer.toBinaryString(i6));
            sb.append("), ");
            int i22 = i13;
            sb.append(i22);
            sb.append(", ");
            sb.append(i12);
            sb.append(", ");
            sb.append(fieldValueIcd17);
            sb.append(", ");
            sb.append(String.format("%X, %X, %X, %X, %X, %X, %X", Integer.valueOf(i7), Integer.valueOf(i8), Integer.valueOf(fieldValueIcd12), Integer.valueOf(fieldValueIcd13), Integer.valueOf(fieldValueIcd14), Integer.valueOf(fieldValueIcd15), Integer.valueOf(fieldValueIcd16)));
            Elog.d("EmInfo/MDMComponent", strArr, sb.toString());
            setData(4, Integer.valueOf(i4));
            setData(5, Integer.valueOf(i5));
            setData(6, Integer.valueOf(i6));
            setData(7, Integer.valueOf(i12));
            setData(8, Integer.valueOf(i22));
            setData(12, Integer.valueOf(fieldValueIcd17));
            if (fieldValueIcd8 == 2) {
                setData(3, String.format("[%X%X%X][%X%X][%X]", Integer.valueOf(i11), Integer.valueOf(i10), Integer.valueOf(i9), Integer.valueOf(i19), Integer.valueOf(i20), Long.valueOf(fieldValueIcd11)));
            } else if (fieldValueIcd8 == 3) {
                setData(3, String.format("[%X%X%X][%X%X%X][%X]", Integer.valueOf(i11), Integer.valueOf(i10), Integer.valueOf(i9), Integer.valueOf(i19), Integer.valueOf(i20), Integer.valueOf(i21), Long.valueOf(fieldValueIcd11)));
            } else {
                Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + " Invalid format, not thing to generate! mncNum = " + fieldValueIcd8);
            }
            setData(1, String.format("%06X%02X%02X%02X%02X%02X", Integer.valueOf(fieldValueIcd8 == 2 ? ((i8 >> 4) & 15) | ((i8 << 4) & 240) | (((i7 & 15) | 240) << 8) | ((((i8 >> 8) & 15) | (i8 & 240)) << 16) : ((i7 >> 8) & 15) | (i8 & 240) | ((i7 << 8) & 3840) | (((i8 >> 8) & 15) << 12) | ((((i7 >> 4) & 15) | ((i7 << 4) & 240)) << 16)), Integer.valueOf(fieldValueIcd12), Integer.valueOf(fieldValueIcd13), Integer.valueOf(fieldValueIcd14), Integer.valueOf(fieldValueIcd15), Integer.valueOf(fieldValueIcd16 >> 4)));
        }
    }
}
