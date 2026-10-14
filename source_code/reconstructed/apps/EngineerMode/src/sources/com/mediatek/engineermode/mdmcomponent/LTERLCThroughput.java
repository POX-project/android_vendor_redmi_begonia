package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class LTERLCThroughput extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_EL2_RLC_THROUGHPUT_DL, MDMContentICD.MSG_ID_EL2_RLC_THROUGHPUT_UL};
    int[] RLCTpDlddrs;
    int[] RLCTpUlddrs;

    public LTERLCThroughput(Activity activity) {
        super(activity);
        this.RLCTpDlddrs = new int[]{8, 24, 32};
        this.RLCTpUlddrs = new int[]{8, 24, 32};
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
        return new String[]{"RLC DL Throughput", "RLC UL Throughput"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE RLC Throughput";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_EL2_RLC_THROUGHPUT_DL)) {
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.RLCTpDlddrs[0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, this.RLCTpDlddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd);
            StringBuilder sb = new StringBuilder();
            sb.append(fieldValueIcd / 1000000);
            sb.append("Mbps");
            setData(0, sb.toString());
            return;
        }
        int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, this.RLCTpUlddrs[0]);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.RLCTpUlddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", values = " + fieldValueIcd2);
        StringBuilder sb2 = new StringBuilder();
        sb2.append(fieldValueIcd2 / 1000000);
        sb2.append("Mbps");
        setData(1, sb2.toString());
    }
}
