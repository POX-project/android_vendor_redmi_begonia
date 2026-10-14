package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.Arrays;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRSCellInfo extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION, MDMContentICD.MSG_ID_NL1_SERVING_CELL_MEASUREMENT};
    HashMap<Integer, String> bandWidthMapping;
    int[][] bwAddrs;
    int[][] carrierTypeAddrs;
    int[][] dlBandSizeAddrs;
    int[][] pciAddrs;
    int[][] rsrpAddrs;
    int[][] rsrqAddrs;
    int[][] rssiAddrs;
    int[][] scellNumAddrs;
    int[][] sinrAddrs;

    public NRSCellInfo(Activity activity) {
        super(activity);
        this.dlBandSizeAddrs = new int[][]{new int[0], new int[0], new int[0], new int[0], new int[0], new int[0], new int[0], new int[]{8, 1848, 32, 7}, new int[]{8, 2104, 32, 7}, new int[]{8, 2168, 32, 7}, new int[]{8, 2232, 32, 7}, new int[]{8, 2328, 32, 8}, new int[]{8, 3032, 32, 8}};
        this.scellNumAddrs = new int[][]{new int[0], new int[0], new int[0], new int[0], new int[0], new int[0], new int[0], new int[]{8, 213, 3}, new int[]{8, 213, 3}, new int[]{8, 213, 3}, new int[]{8, 213, 3}, new int[]{8, 213, 3}, new int[]{8, 213, 3}};
        this.bwAddrs = new int[][]{new int[0], new int[0], new int[0], new int[0], new int[0], new int[0], new int[0], new int[]{8, 1848, 672, 12, 9}, new int[]{8, 2104, 672, 12, 9}, new int[]{8, 2168, 672, 12, 9}, new int[]{8, 2232, 928, 24, 4}, new int[]{8, 2328, 928, 24, 4}, new int[]{8, 3032, 928, 24, 4}};
        this.pciAddrs = new int[][]{new int[0], new int[0], new int[0], new int[0], new int[0], new int[0], new int[0], new int[]{8, 1848, 0, 10}, new int[]{8, 2104, 0, 10}, new int[]{8, 2168, 0, 10}, new int[]{8, 2232, 0, 10}, new int[]{8, 2328, 0, 10}, new int[]{8, 3032, 0, 10}};
        this.carrierTypeAddrs = new int[][]{new int[]{8, 10, 3}, new int[]{8, 10, 3}, new int[]{8, 10, 3}};
        this.rsrpAddrs = new int[][]{new int[]{8, 88, 64, 16}, new int[]{8, 88, 64, 16}, new int[]{8, 88, 64, 16}};
        this.rsrqAddrs = new int[][]{new int[]{8, 88, 160, 8}, new int[]{8, 88, 160, 8}, new int[]{8, 88, 128, 8}};
        this.rssiAddrs = new int[][]{new int[]{8, 88, 224, 16}, new int[]{8, 88, 224, 16}, new int[]{8, 88, 160, 16}};
        this.sinrAddrs = new int[][]{new int[]{8, 88, 320, 8}, new int[]{8, 88, 320, 8}, new int[]{8, 88, 224, 8}};
        this.bandWidthMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.NRSCellInfo.1
            {
                put(0, "5MHz");
                put(1, "10MHz");
                put(2, "15MHz");
                put(3, "20MHz");
                put(4, "25MHz");
                put(5, "30MHz");
                put(6, "40MHz");
                put(7, "50MHz");
                put(8, "60MHz");
                put(9, "80MHz");
                put(10, "90MHz");
                put(11, "100MHz");
                put(12, "200MHz");
                put(13, "400MHz");
            }
        };
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "8. NR EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"INDEX", "BAND", "BW", "PCI", "RSRP", "RSRQ", "SINR"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "SCell Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    public void testData() {
        String[] strArr = new String[8];
        String[] strArr2 = new String[8];
        String[] strArr3 = new String[8];
        for (int i = 0; i < 8; i++) {
            int[][] iArr = this.dlBandSizeAddrs;
            iArr[1] = updateElement(iArr[1], (i * 768) + 0, -2);
            strArr[i] = i + "";
            int[][] iArr2 = this.bwAddrs;
            iArr2[1] = updateElement(iArr2[1], (i * 768) + 0, -2);
            strArr2[i] = (i * 2) + "";
            int[][] iArr3 = this.pciAddrs;
            iArr3[1] = updateElement(iArr3[1], (i * 768) + 0, -2);
            strArr3[i] = (i + 12) + "";
        }
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = 9014, version = 1, values = " + Arrays.toString(strArr) + ", " + Arrays.toString(strArr2) + "," + Arrays.toString(strArr3));
        setDataAtPosition(0, strArr);
        setDataAtPosition(1, strArr2);
        setDataAtPosition(2, strArr3);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        String[] strArr = {"0", "1", "2", "3", "4", "5", "6", "7", "8"};
        String str2 = ",";
        String str3 = ", ";
        String str4 = "EmInfo/MDMComponent";
        if (!str.equals(MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION)) {
            if (str.equals(MDMContentICD.MSG_ID_NL1_SERVING_CELL_MEASUREMENT)) {
                int[][] iArr = this.carrierTypeAddrs;
                int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
                int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.carrierTypeAddrs);
                int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.rsrpAddrs);
                int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.rsrqAddrs);
                int fieldValueIcd4 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.sinrAddrs);
                Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd + ", values = " + fieldValueIcd2 + ", " + fieldValueIcd3 + "," + fieldValueIcd4);
                setDataAtPosition(0, strArr);
                setDataAtPosition(fieldValueIcd, 4, Integer.valueOf(fieldValueIcd2));
                setDataAtPosition(fieldValueIcd, 5, Integer.valueOf(fieldValueIcd3));
                setDataAtPosition(fieldValueIcd, 6, Integer.valueOf(fieldValueIcd4));
                return;
            }
            return;
        }
        int[][] iArr2 = this.bwAddrs;
        int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, iArr2[iArr2.length - 1][0]);
        int fieldValueIcd5 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.scellNumAddrs);
        String[] strArr2 = new String[9];
        String[] strArr3 = new String[9];
        String[] strArr4 = new String[9];
        int i = 0;
        while (i < fieldValueIcd5) {
            int i2 = fieldValueIcd5;
            int[][] iArr3 = this.dlBandSizeAddrs;
            String[] strArr5 = strArr;
            int length = (fieldValueIcdVersion2 > iArr3.length ? iArr3.length : fieldValueIcdVersion2) - 1;
            int[][] iArr4 = this.dlBandSizeAddrs;
            String str5 = str4;
            String str6 = str2;
            String str7 = str3;
            iArr4[length] = updateElement(iArr4[length], (i * 768) + 0, -2);
            strArr2[i] = "" + getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.dlBandSizeAddrs);
            int[][] iArr5 = this.bwAddrs;
            int length2 = (fieldValueIcdVersion2 > iArr5.length ? iArr5.length : fieldValueIcdVersion2) - 1;
            int[][] iArr6 = this.bwAddrs;
            String[] strArr6 = strArr2;
            iArr6[length2] = updateElement(iArr6[length2], (i * 768) + 0, -3);
            strArr3[i] = "" + getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.bwAddrs);
            int[][] iArr7 = this.pciAddrs;
            int length3 = (fieldValueIcdVersion2 > iArr7.length ? iArr7.length : fieldValueIcdVersion2) - 1;
            int[][] iArr8 = this.pciAddrs;
            iArr8[length3] = updateElement(iArr8[length3], (i * 768) + 0, -2);
            strArr4[i] = "" + getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.pciAddrs);
            i++;
            fieldValueIcd5 = i2;
            strArr = strArr5;
            str4 = str5;
            str2 = str6;
            str3 = str7;
            strArr2 = strArr6;
        }
        String[] strArr7 = strArr;
        String[] strArr8 = strArr2;
        String[] strArr9 = icdLogInfo;
        Elog.d(str4, strArr9, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", values = " + Arrays.toString(strArr8) + str3 + Arrays.toString(strArr3) + str2 + Arrays.toString(strArr4));
        setDataAtPosition(0, strArr7);
        setDataAtPosition(1, strArr8);
        setDataAtPosition(2, strArr3);
        setDataAtPosition(3, strArr4);
    }
}
