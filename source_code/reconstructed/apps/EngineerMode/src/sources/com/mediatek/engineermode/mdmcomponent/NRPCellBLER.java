package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPCellBLER extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_UL_THROUGHPUT, MDMContentICD.MSG_ID_NL1_MIMO_PDSCH_THROUGHPUT};
    int[] dlBlerAddrs;
    int[] ulBlerAddrs;

    public NRPCellBLER(Activity activity) {
        super(activity);
        this.ulBlerAddrs = new int[]{8, 17, 7};
        this.dlBlerAddrs = new int[]{8, 17, 7};
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
        return new String[]{"DL BLER", "UL BLER"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Cell BLER";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_NL1_UL_THROUGHPUT)) {
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.ulBlerAddrs[0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, this.ulBlerAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd);
            StringBuilder sb = new StringBuilder();
            sb.append(fieldValueIcd);
            sb.append("%");
            setData(1, sb.toString());
            return;
        }
        int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, this.dlBlerAddrs[0]);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.dlBlerAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", values = " + fieldValueIcd2);
        StringBuilder sb2 = new StringBuilder();
        sb2.append(fieldValueIcd2);
        sb2.append("%");
        setData(0, sb2.toString());
    }
}
