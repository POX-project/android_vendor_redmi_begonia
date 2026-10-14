package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NSA extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_EL1_TAS_INFORMATION, MDMContentICD.MSG_ID_NL1_TAS_INFORMATION};
    int[][] carrIndexAddrs;
    int[] servCellIndexAddrs;
    int[][] statusAddrs;
    int[][] txAntAddrs;
    int[][] txIndex0Addrs;
    int[][] txIndex1Addrs;

    public NSA(Activity activity) {
        super(activity);
        this.statusAddrs = new int[][]{new int[]{8, 0, 2}, new int[]{8, 24, 0, 2}, new int[]{8, 24, 0, 2}};
        this.carrIndexAddrs = new int[][]{new int[]{8, 56, 0, 3}, new int[]{8, 24, 2, 3}, new int[]{8, 24, 2, 3}};
        this.txIndex0Addrs = new int[][]{new int[]{8, 56, 3, 4}, new int[]{8, 24, 5, 5}, new int[]{8, 24, 8, 8}};
        this.txIndex1Addrs = new int[][]{new int[]{8, 56, 8, 4}, new int[]{8, 24, 10, 5}, new int[]{8, 24, 16, 8}};
        this.servCellIndexAddrs = new int[]{8, 24, 0, 3};
        this.txAntAddrs = new int[][]{new int[]{8, 24, 3, 3}, new int[]{8, 24, 3, 4}};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "9. Tx Antenna Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"NR Primary Cell Tx Antenna", "LTE Primary Cell Tx Antenna"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NSA";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2;
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (!str.equals(MDMContentICD.MSG_ID_NL1_TAS_INFORMATION)) {
            int[][] iArr = this.txAntAddrs;
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, this.servCellIndexAddrs);
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.txAntAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd + ", values = " + fieldValueIcd2);
            if (fieldValueIcd == 0) {
                setData(1, Integer.valueOf(fieldValueIcd2));
                return;
            }
            return;
        }
        int[][] iArr2 = this.carrIndexAddrs;
        int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, iArr2[iArr2.length - 1][0]);
        int[][] iArr3 = this.carrIndexAddrs;
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, iArr3[(fieldValueIcdVersion2 < iArr3.length ? fieldValueIcdVersion2 : iArr3.length) - 1]);
        int[][] iArr4 = this.txIndex0Addrs;
        int fieldValueIcd4 = getFieldValueIcd(byteBuffer, iArr4[(fieldValueIcdVersion2 < iArr4.length ? fieldValueIcdVersion2 : iArr4.length) - 1]);
        int[][] iArr5 = this.txIndex1Addrs;
        int fieldValueIcd5 = getFieldValueIcd(byteBuffer, iArr5[(fieldValueIcdVersion2 < iArr5.length ? fieldValueIcdVersion2 : iArr5.length) - 1]);
        int[][] iArr6 = this.statusAddrs;
        int fieldValueIcd6 = getFieldValueIcd(byteBuffer, iArr6[(fieldValueIcdVersion2 < iArr6.length ? fieldValueIcdVersion2 : iArr6.length) - 1]);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", condition = " + fieldValueIcd3 + ", " + fieldValueIcd6 + ", values = " + fieldValueIcd4 + ", " + fieldValueIcd5);
        if (fieldValueIcd3 == 0) {
            StringBuilder sb = new StringBuilder();
            sb.append(fieldValueIcd4);
            if (fieldValueIcd6 == 2) {
                str2 = "," + fieldValueIcd5;
            } else {
                str2 = "";
            }
            sb.append(str2);
            setData(0, sb.toString());
        }
    }
}
