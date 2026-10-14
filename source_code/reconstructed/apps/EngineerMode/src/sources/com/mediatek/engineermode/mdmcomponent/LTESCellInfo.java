package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class LTESCellInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_EL1_SERVING_CELL_MEASUREMENT};
    int[][] earfcnAddrs;
    int[][] pciAddrs;

    public LTESCellInfo(Activity activity) {
        super(activity);
        this.earfcnAddrs = new int[][]{new int[]{8, 24, 16}, new int[]{8, 24, 16}, new int[]{8, 24, 17}};
        this.pciAddrs = new int[][]{new int[]{8, 0, 9}, new int[]{8, 0, 9}, new int[]{8, 0, 9}};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"EARFCN", "PCI"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Serving Cell info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.pciAddrs[0][0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.earfcnAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.pciAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd + ", " + fieldValueIcd2);
        setData(0, fieldValueIcd != 0 ? Integer.valueOf(fieldValueIcd) : "");
        setData(1, fieldValueIcd2 != 0 ? Integer.valueOf(fieldValueIcd2) : "");
    }
}
