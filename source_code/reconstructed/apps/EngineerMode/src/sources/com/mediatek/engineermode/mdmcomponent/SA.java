package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class SA extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_TAS_INFORMATION};
    int[][] carrIndexAddrs;
    int[][] statusAddrs;
    int[][] txIndex0Addrs;
    int[][] txIndex1Addrs;

    public SA(Activity activity) {
        super(activity);
        this.statusAddrs = new int[][]{new int[]{8, 0, 2}, new int[]{8, 24, 0, 2}, new int[]{8, 24, 0, 2}};
        this.carrIndexAddrs = new int[][]{new int[]{8, 56, 0, 3}, new int[]{8, 24, 2, 3}, new int[]{8, 24, 2, 3}};
        this.txIndex0Addrs = new int[][]{new int[]{8, 56, 3, 4}, new int[]{8, 24, 5, 5}, new int[]{8, 24, 8, 8}};
        this.txIndex1Addrs = new int[][]{new int[]{8, 56, 8, 4}, new int[]{8, 24, 10, 5}, new int[]{8, 24, 16, 8}};
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
        return new String[]{"NR Primary Cell Tx Antenna"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "SA";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2;
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int[][] iArr = this.carrIndexAddrs;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
        int[][] iArr2 = this.carrIndexAddrs;
        int fieldValueIcd = getFieldValueIcd(byteBuffer, iArr2[(fieldValueIcdVersion < iArr2.length ? fieldValueIcdVersion : iArr2.length) - 1]);
        int[][] iArr3 = this.txIndex0Addrs;
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, iArr3[(fieldValueIcdVersion < iArr3.length ? fieldValueIcdVersion : iArr3.length) - 1]);
        int[][] iArr4 = this.txIndex1Addrs;
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, iArr4[(fieldValueIcdVersion < iArr4.length ? fieldValueIcdVersion : iArr4.length) - 1]);
        int[][] iArr5 = this.statusAddrs;
        int fieldValueIcd4 = getFieldValueIcd(byteBuffer, iArr5[(fieldValueIcdVersion < iArr5.length ? fieldValueIcdVersion : iArr5.length) - 1]);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd + ", " + fieldValueIcd4 + ", values = " + fieldValueIcd2 + ", " + fieldValueIcd3);
        if (fieldValueIcd == 0) {
            StringBuilder sb = new StringBuilder();
            sb.append(fieldValueIcd2);
            if (fieldValueIcd4 == 2) {
                str2 = "," + fieldValueIcd3;
            } else {
                str2 = "";
            }
            sb.append(str2);
            setData(0, sb.toString());
        }
    }
}
