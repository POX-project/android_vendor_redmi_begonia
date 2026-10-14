package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPServingCellCSIRSReport extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_SERVING_CELL_CSIRS_MEASUREMENT};
    int[][] rsrpAddrs;
    int[][] sinrAddrs;

    public NRPServingCellCSIRSReport(Activity activity) {
        super(activity);
        this.rsrpAddrs = new int[][]{new int[]{8, 24, 32, 16}};
        this.sinrAddrs = new int[][]{new int[]{8, 24, 288, 8}};
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
        return new String[]{"CSI-RS RSRP", "SINR"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Serving Cell CSI-RS Report";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_NL1_SERVING_CELL_CSIRS_MEASUREMENT)) {
            int[][] iArr = this.rsrpAddrs;
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.rsrpAddrs, true);
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.sinrAddrs, true);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", value = " + fieldValueIcd + ", " + fieldValueIcd2);
            setData(0, Integer.valueOf(fieldValueIcd));
            setData(1, Integer.valueOf(fieldValueIcd2));
        }
    }
}
