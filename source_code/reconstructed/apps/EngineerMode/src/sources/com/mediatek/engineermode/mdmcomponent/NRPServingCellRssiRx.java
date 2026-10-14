package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPServingCellRssiRx extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_SERVING_CELL_RSSI};
    int[] recordLength;
    int[][] recordNumAddrs;
    int[][] rssiRx0Addrs;
    int[][] rssiRx1Addrs;
    int[][] rssiRx2Addrs;
    int[][] rssiRx3Addrs;

    public NRPServingCellRssiRx(Activity activity) {
        super(activity);
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
        return new String[]{"SSB - RSSI RX0", "SSB - RSSI RX1", "SSB - RSSI RX2", "SSB - RSSI RX3"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Serving Cell RSSI RX 0/1/2/3";
    }

    void initValue() {
        this.rssiRx0Addrs = new int[][]{new int[]{8, 24, 16, 16}, new int[]{8, 40, 16}, new int[]{8, 40, 16}};
        this.rssiRx1Addrs = new int[][]{new int[]{8, 24, 32, 16}, new int[]{8, 56, 16}, new int[]{8, 56, 16}};
        this.rssiRx2Addrs = new int[][]{new int[]{8, 24, 48, 16}, new int[]{8, 72, 16}, new int[]{8, 72, 16}};
        this.rssiRx3Addrs = new int[][]{new int[]{8, 24, 64, 16}, new int[]{8, 88, 16}, new int[]{8, 88, 16}};
        this.recordNumAddrs = new int[][]{new int[]{8, 19, 5}, new int[0], new int[0]};
        this.recordLength = new int[]{96, 0};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        initValue();
        int[][] iArr = this.rssiRx0Addrs;
        int i = 0;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
        int fieldValueIcd = fieldValueIcdVersion == 1 ? getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.recordNumAddrs) : 1;
        int i2 = -150;
        int i3 = -150;
        int i4 = -150;
        int i5 = -150;
        int i6 = 0;
        while (i6 < fieldValueIcd) {
            int[][] iArrInsertElement = insertElement(this.rssiRx0Addrs, fieldValueIcdVersion, this.recordLength, i6 == 0 ? i : -1);
            this.rssiRx0Addrs = iArrInsertElement;
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement, true);
            i2 = (fieldValueIcd2 == 0 || fieldValueIcd2 <= i2) ? i2 : fieldValueIcd2;
            int[][] iArrInsertElement2 = insertElement(this.rssiRx1Addrs, fieldValueIcdVersion, this.recordLength, i6 == 0 ? i : -1);
            this.rssiRx1Addrs = iArrInsertElement2;
            int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement2, true);
            i3 = (fieldValueIcd3 == 0 || fieldValueIcd3 <= i3) ? i3 : fieldValueIcd3;
            int[][] iArrInsertElement3 = insertElement(this.rssiRx2Addrs, fieldValueIcdVersion, this.recordLength, i6 == 0 ? i : -1);
            this.rssiRx2Addrs = iArrInsertElement3;
            int fieldValueIcd4 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement3, true);
            i4 = (fieldValueIcd4 == 0 || fieldValueIcd4 <= i4) ? i4 : fieldValueIcd2;
            int[][] iArr2 = this.rssiRx3Addrs;
            int[] iArr3 = this.recordLength;
            if (i6 != 0) {
                i = -1;
            }
            int[][] iArrInsertElement4 = insertElement(iArr2, fieldValueIcdVersion, iArr3, i);
            this.rssiRx3Addrs = iArrInsertElement4;
            int fieldValueIcd5 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement4, true);
            i5 = (fieldValueIcd5 == 0 || fieldValueIcd5 <= i5) ? i5 : fieldValueIcd5;
            i6++;
            i = 0;
        }
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", " + fieldValueIcd + ", values = " + i2 + ", " + i4 + ", " + i5 + ", " + i5);
        clearData();
        StringBuilder sb = new StringBuilder();
        sb.append(i2);
        sb.append("");
        StringBuilder sb2 = new StringBuilder();
        sb2.append(i3);
        sb2.append("");
        StringBuilder sb3 = new StringBuilder();
        sb3.append(i4);
        sb3.append("");
        StringBuilder sb4 = new StringBuilder();
        sb4.append(i5);
        sb4.append("");
        addData(sb.toString(), sb2.toString(), sb3.toString(), sb4.toString());
    }
}
