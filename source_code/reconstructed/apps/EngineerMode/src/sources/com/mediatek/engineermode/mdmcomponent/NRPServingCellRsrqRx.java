package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.support.v4.media.subtitle.Cea708CCParser;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.rfdesense.RfDesenseTxTestCdma;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPServingCellRsrqRx extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_SERVING_CELL_MEASUREMENT};
    int[] carTypeAddrs;
    int[] recordLength;
    int[][] recordNumAddrs;
    int[][] rsrqRx0Addrs;
    int[][] rsrqRx1Addrs;
    int[][] rsrqRx2Addrs;
    int[][] rsrqRx3Addrs;

    public NRPServingCellRsrqRx(Activity activity) {
        super(activity);
        this.carTypeAddrs = new int[]{8, 10, 3};
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
        return new String[]{"SSB - RSRQ RX0", "SSB - RSRQ RX1", "SSB - RSRQ RX2", "SSB - RSRQ RX3"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Serving Cell RSRQ RX 0/1/2/3";
    }

    void initValue() {
        this.rsrqRx0Addrs = new int[][]{new int[]{8, 88, 168, 8}, new int[]{8, 88, 168, 8}, new int[]{8, 88, 136, 8}};
        this.rsrqRx1Addrs = new int[][]{new int[]{8, 88, 176, 8}, new int[]{8, 88, 176, 8}, new int[]{8, 88, Cea708CCParser.Const.CODE_C1_SPA, 8}};
        this.rsrqRx2Addrs = new int[][]{new int[]{8, 88, 184, 8}, new int[]{8, 88, 184, 8}, new int[0]};
        this.rsrqRx3Addrs = new int[][]{new int[]{8, 88, 192, 8}, new int[]{8, 88, 192, 8}, new int[0]};
        this.recordNumAddrs = new int[][]{new int[]{8, 56, 5}, new int[]{8, 56, 5}, new int[]{8, 56, 5}};
        this.recordLength = new int[]{RfDesenseTxTestCdma.DEFAULT_CHANNEL_VALUE, RfDesenseTxTestCdma.DEFAULT_CHANNEL_VALUE, 256};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        initValue();
        int i = 0;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.carTypeAddrs[0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, this.carTypeAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.recordNumAddrs);
        int i2 = -32768;
        int i3 = -32768;
        int i4 = -32768;
        int i5 = -32768;
        int i6 = 0;
        while (i6 < fieldValueIcd2) {
            int[][] iArrInsertElement = insertElement(this.rsrqRx0Addrs, fieldValueIcdVersion, this.recordLength, i6 == 0 ? i : -1);
            this.rsrqRx0Addrs = iArrInsertElement;
            int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement, true);
            i2 = (fieldValueIcd3 == 0 || fieldValueIcd3 <= i2) ? i2 : fieldValueIcd3;
            int[][] iArr = this.rsrqRx1Addrs;
            int[] iArr2 = this.recordLength;
            if (i6 != 0) {
                i = -1;
            }
            int[][] iArrInsertElement2 = insertElement(iArr, fieldValueIcdVersion, iArr2, i);
            this.rsrqRx1Addrs = iArrInsertElement2;
            int fieldValueIcd4 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement2, true);
            i3 = (fieldValueIcd4 == 0 || fieldValueIcd4 <= i3) ? i3 : fieldValueIcd4;
            int[][] iArrInsertElement3 = insertElement(this.rsrqRx2Addrs, fieldValueIcdVersion, this.recordLength, i6 == 0 ? 0 : -1);
            this.rsrqRx2Addrs = iArrInsertElement3;
            int fieldValueIcd5 = fieldValueIcdVersion <= 2 ? getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement3, true) : -128;
            i4 = (fieldValueIcd5 == 0 || fieldValueIcd5 <= i4) ? i4 : fieldValueIcd5;
            int[][] iArrInsertElement4 = insertElement(this.rsrqRx3Addrs, fieldValueIcdVersion, this.recordLength, i6 == 0 ? 0 : -1);
            this.rsrqRx3Addrs = iArrInsertElement4;
            int fieldValueIcd6 = fieldValueIcdVersion <= 2 ? getFieldValueIcd(byteBuffer, fieldValueIcdVersion, iArrInsertElement4, true) : -128;
            i5 = (fieldValueIcd6 == 0 || fieldValueIcd6 <= i5) ? i5 : fieldValueIcd6;
            i6++;
            i = 0;
        }
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd + ", values = " + i2 + ", " + i3 + ", " + i4 + ", " + i5);
        if (fieldValueIcd == 0) {
            clearData();
            addData(i2 + "", i3 + "", i4 + "", i5 + "");
        }
    }
}
