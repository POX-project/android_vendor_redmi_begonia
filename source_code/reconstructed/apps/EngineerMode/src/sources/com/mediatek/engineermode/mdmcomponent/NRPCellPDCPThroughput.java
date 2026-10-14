package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPCellPDCPThroughput extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL2_PDCP_THROUGHPUT_DL, MDMContentICD.MSG_ID_NL2_PDCP_THROUGHPUT_UL};
    int[] dlPdcpThputAddrs;
    int[] ulPdcpThputAddrs;

    public NRPCellPDCPThroughput(Activity activity) {
        super(activity);
        this.dlPdcpThputAddrs = new int[]{32, 0, 32};
        this.ulPdcpThputAddrs = new int[]{32, 0, 32};
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
        return new String[]{"PDCP DL Throughput", "PDCP UL Throughput"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Cell PDCP Throughput";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_NL2_PDCP_THROUGHPUT_DL)) {
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.dlPdcpThputAddrs[0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, this.dlPdcpThputAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd);
            StringBuilder sb = new StringBuilder();
            sb.append(fieldValueIcd / 1000000);
            sb.append("Mbps");
            setData(0, sb.toString());
            return;
        }
        int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, this.ulPdcpThputAddrs[0]);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.ulPdcpThputAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", values = " + fieldValueIcd2);
        StringBuilder sb2 = new StringBuilder();
        sb2.append(fieldValueIcd2 / 1000000);
        sb2.append("Mbps");
        setData(1, sb2.toString());
    }
}
