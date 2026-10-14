package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPCellChannelStateCqi1 extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_CSI_REPORT};
    int[] cqi1Addrs;
    int[] cqi1ValidAddrs;

    public NRPCellChannelStateCqi1(Activity activity) {
        super(activity);
        this.cqi1Addrs = new int[]{8, 24, 28, 4};
        this.cqi1ValidAddrs = new int[]{8, 24, 27, 1};
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
        return new String[]{"CQI1"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Cell Channel State Info - CQI1";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.cqi1Addrs[0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, this.cqi1Addrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.cqi1ValidAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd2 + ", values = " + fieldValueIcd);
        if (fieldValueIcd2 == 1) {
            clearData();
            addData(fieldValueIcd + "");
        }
    }
}
