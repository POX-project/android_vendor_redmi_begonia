package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPCellPHYThroughput extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_MIMO_PDSCH_THROUGHPUT, MDMContentICD.MSG_ID_NL1_UL_THROUGHPUT};
    int[][] dlPhyThput0Addrs;
    int[][] dlPhyThput1Addrs;
    int[] ulPhyThputAddrs;

    public NRPCellPHYThroughput(Activity activity) {
        super(activity);
        this.dlPhyThput0Addrs = new int[][]{new int[]{8, 56, 32}, new int[]{8, 56, 32}, new int[]{8, 56, 32}, new int[]{8, 56, 32}, new int[]{8, 312, 32}};
        this.dlPhyThput1Addrs = new int[][]{new int[]{8, 88, 32}, new int[]{8, 88, 32}, new int[]{8, 88, 32}, new int[]{8, 88, 32}, new int[]{8, 344, 32}};
        this.ulPhyThputAddrs = new int[]{8, 56, 32};
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
        return new String[]{"PHY DL Throughput", "PHY UL Throughput"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Cell PHY Throughput";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (!str.equals(MDMContentICD.MSG_ID_NL1_MIMO_PDSCH_THROUGHPUT)) {
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.ulPhyThputAddrs[0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, this.ulPhyThputAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd);
            StringBuilder sb = new StringBuilder();
            sb.append((fieldValueIcd * 8) / 1000);
            sb.append("Mbps");
            setData(1, sb.toString());
            return;
        }
        int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, this.dlPhyThput0Addrs[0][0]);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.dlPhyThput0Addrs);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.dlPhyThput1Addrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", values = " + fieldValueIcd2 + ", " + fieldValueIcd3);
        StringBuilder sb2 = new StringBuilder();
        sb2.append(((fieldValueIcd2 + fieldValueIcd3) * 8) / 1000);
        sb2.append("Mbps");
        setData(0, sb2.toString());
    }
}
