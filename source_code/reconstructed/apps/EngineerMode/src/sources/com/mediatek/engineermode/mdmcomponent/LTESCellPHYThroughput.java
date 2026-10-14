package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class LTESCellPHYThroughput extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_EL1_MIMO_PDSCH_THROUGHPUT0, MDMContentICD.MSG_ID_EL1_MIMO_PDSCH_THROUGHPUT1, MDMContentICD.MSG_ID_EL1_UL_THROUGHPUT};
    int dlPHYTp0;
    int dlPHYTp1;
    int[] sCellIndexAddrs;
    int[] thputAddrs;

    public LTESCellPHYThroughput(Activity activity) {
        super(activity);
        this.thputAddrs = new int[]{8, 24, 32};
        this.sCellIndexAddrs = new int[]{8, 14, 3};
        this.dlPHYTp0 = 0;
        this.dlPHYTp1 = 0;
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
        return new String[]{"Cell index", "PHY DL Throughput", "Cell index", "PHY UL Throughput"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE Secondary Cell PHY Throughput";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.thputAddrs[0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, this.thputAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.sCellIndexAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd2 + ", values = " + fieldValueIcd);
        if (fieldValueIcd2 == 0) {
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_EL1_UL_THROUGHPUT)) {
            setData(2, Integer.valueOf(fieldValueIcd2));
            setData(3, (fieldValueIcd / 1000000) + "Mbps");
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_EL1_MIMO_PDSCH_THROUGHPUT0)) {
            this.dlPHYTp0 = fieldValueIcd;
            return;
        }
        this.dlPHYTp1 = fieldValueIcd;
        setData(0, Integer.valueOf(fieldValueIcd2));
        setData(1, ((this.dlPHYTp0 + this.dlPHYTp1) / 1000000) + "Mbps");
    }
}
