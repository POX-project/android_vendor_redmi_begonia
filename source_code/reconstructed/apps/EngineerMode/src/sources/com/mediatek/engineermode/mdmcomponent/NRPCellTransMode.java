package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPCellTransMode extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION};
    int[][] antTransModeAddrs;

    public NRPCellTransMode(Activity activity) {
        super(activity);
        this.antTransModeAddrs = new int[][]{new int[]{8, 824, 0, 4}, new int[]{8, 824, 0, 4}, new int[]{8, 1080, 0, 4}, new int[]{8, 1080, 0, 4}, new int[]{8, 1336, 0, 4}, new int[]{8, 1368, 0, 4}, new int[]{8, 1368, 0, 4}, new int[]{8, 1368, 0, 4}, new int[]{8, 1624, 0, 4}, new int[]{8, 1624, 0, 4}, new int[]{8, 1624, 0, 4}, new int[]{8, 1656, 0, 4}, new int[]{8, 1656, 0, 4}};
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
        return new String[]{"Transmission Mode"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Cell Transmission Mode";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.antTransModeAddrs[0][0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.antTransModeAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd);
        clearData();
        StringBuilder sb = new StringBuilder();
        sb.append(fieldValueIcd);
        sb.append("");
        addData(sb.toString());
    }
}
