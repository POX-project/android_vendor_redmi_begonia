package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPServingCellRsrpRx extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_SYNC_SSB_SNR};
    int[][] carTypeAddrs;
    int[] recordLength;
    int[][] recordNumAddrs;
    int[][] rsrpRx0Addrs;
    int[][] rsrpRx1Addrs;
    int[][] rsrpRx2Addrs;
    int[][] rsrpRx3Addrs;

    public NRPServingCellRsrpRx(Activity activity) {
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
        return new String[]{"SSB - RSRP RX0", "SSB - RSRP RX1", "SSB - RSRP RX2", "SSB - RSRP RX3"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Serving Cell RSRP RX 0/1/2/3";
    }

    void initValue() {
        this.carTypeAddrs = new int[][]{new int[]{8, 15, 3}, new int[]{8, 15, 3}};
        this.rsrpRx0Addrs = new int[][]{new int[0], new int[]{8, 24, 80, 16}};
        this.rsrpRx1Addrs = new int[][]{new int[0], new int[]{8, 24, 96, 16}};
        this.rsrpRx2Addrs = new int[][]{new int[0], new int[]{8, 24, 112, 16}};
        this.rsrpRx3Addrs = new int[][]{new int[0], new int[]{8, 24, 128, 16}};
        this.recordNumAddrs = new int[][]{new int[]{8, 10, 5}, new int[]{8, 10, 5}};
        this.recordLength = new int[]{96, 192};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        initValue();
        int[][] iArr = this.carTypeAddrs;
        boolean z = true;
        int i = 0;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.carTypeAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.recordNumAddrs);
        int i2 = -32768;
        int i3 = -32768;
        int i4 = -32768;
        int i5 = -32768;
        int i6 = 0;
        while (i6 < fieldValueIcd2) {
            int[][] iArrInsertElement = insertElement(this.rsrpRx0Addrs, fieldValueIcdVersion, this.recordLength, i6 == 0 ? i : -1);
            this.rsrpRx0Addrs = iArrInsertElement;
            int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement, z);
            i2 = (fieldValueIcd3 == 0 || fieldValueIcd3 <= i2) ? i2 : fieldValueIcd3;
            int[][] iArrInsertElement2 = insertElement(this.rsrpRx1Addrs, fieldValueIcdVersion, this.recordLength, i6 == 0 ? i : -1);
            this.rsrpRx1Addrs = iArrInsertElement2;
            int fieldValueIcd4 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement2, z);
            i3 = (fieldValueIcd4 == 0 || fieldValueIcd4 <= i3) ? i3 : fieldValueIcd4;
            int[][] iArr2 = this.rsrpRx2Addrs;
            int[] iArr3 = this.recordLength;
            if (i6 != 0) {
                i = -1;
            }
            int[][] iArrInsertElement3 = insertElement(iArr2, fieldValueIcdVersion, iArr3, i);
            this.rsrpRx2Addrs = iArrInsertElement3;
            int fieldValueIcd5 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement3, z);
            i4 = (fieldValueIcd5 == 0 || fieldValueIcd5 <= i4) ? i4 : fieldValueIcd5;
            int[][] iArrInsertElement4 = insertElement(this.rsrpRx3Addrs, fieldValueIcdVersion, this.recordLength, i6 == 0 ? 0 : -1);
            this.rsrpRx3Addrs = iArrInsertElement4;
            int fieldValueIcd6 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement4, true);
            i5 = (fieldValueIcd6 == 0 || fieldValueIcd6 <= i5) ? i5 : fieldValueIcd6;
            i6++;
            i = 0;
            z = true;
        }
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd + ", values = " + i2 + ", " + i3 + ", " + i4 + ", " + i5);
        if (fieldValueIcd == 0) {
            clearData();
            addData(i2 + "", i3 + "", i4 + "", i5 + "");
        }
    }
}
