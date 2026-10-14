package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.text.DecimalFormat;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class LTESignalView extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_EL1_MIMO_PDSCH_THROUGHPUT0, MDMContentICD.MSG_ID_EL1_MIMO_PDSCH_THROUGHPUT1, MDMContentICD.MSG_ID_EL1_PUCCH_CSF};
    int dlBler0;
    int[] dlBler0Addrs;
    int dlBler1;
    int[] dlBler1Addrs;
    int lteDlTb0;
    int lteDlTb1;
    int[] recordsAddrs;
    int[] riAddrs;
    int[][] tbNum0Addrs;
    int[][] tbNum1Addrs;
    int[] tput0Addrs;
    int[] tput1Addrs;

    public LTESignalView(Activity activity) {
        super(activity);
        this.dlBler0Addrs = new int[]{8, 56, 7};
        this.dlBler1Addrs = new int[]{8, 56, 7};
        this.tput0Addrs = new int[]{8, 24, 32};
        this.tput1Addrs = new int[]{8, 24, 32};
        this.tbNum0Addrs = new int[][]{new int[0], new int[]{8, 63, 10}, new int[]{8, 70, 10}};
        this.tbNum1Addrs = new int[][]{new int[0], new int[]{8, 63, 10}, new int[]{8, 70, 10}};
        this.recordsAddrs = new int[]{8, 0, 5};
        this.riAddrs = new int[]{8, 24, 29, 2};
        this.dlBler0 = 0;
        this.dlBler1 = 0;
        this.lteDlTb0 = 0;
        this.lteDlTb1 = 0;
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
        return new String[]{"PDSCH BLER", "RI"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Signal View";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_EL1_MIMO_PDSCH_THROUGHPUT0)) {
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.dlBler0Addrs[0]);
            if (fieldValueIcdVersion < 2) {
                Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + " not support, return");
                return;
            }
            this.dlBler0 = getFieldValueIcd(byteBuffer, this.dlBler0Addrs);
            int[][] iArr = this.tbNum0Addrs;
            this.lteDlTb0 = getFieldValueIcd(byteBuffer, iArr[(fieldValueIcdVersion > iArr.length ? iArr.length : fieldValueIcdVersion) - 1]);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + this.dlBler0 + ", " + this.lteDlTb0);
            return;
        }
        if (!str.equals(MDMContentICD.MSG_ID_EL1_MIMO_PDSCH_THROUGHPUT1)) {
            int[] iArr2 = {8, 0, 5};
            int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, iArr2[0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, iArr2);
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, new int[]{8, 24, 29, 2});
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", condition = " + fieldValueIcd + ", values = " + fieldValueIcd2);
            setData(1, fieldValueIcd != 0 ? Integer.valueOf(fieldValueIcd2) : "");
            return;
        }
        int fieldValueIcdVersion3 = getFieldValueIcdVersion(byteBuffer, this.dlBler1Addrs[0]);
        if (fieldValueIcdVersion3 < 2) {
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion3 + " not support, return");
            return;
        }
        this.dlBler1 = getFieldValueIcd(byteBuffer, this.dlBler1Addrs);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion3, this.tbNum0Addrs);
        this.lteDlTb1 = fieldValueIcd3;
        int i = this.dlBler0;
        int i2 = this.lteDlTb0;
        int i3 = i * i2;
        int i4 = this.dlBler1 * fieldValueIcd3;
        int i5 = i2 + fieldValueIcd3;
        float f = i5 != 0 ? (i3 + i4) / i5 : 0.0f;
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion3 + ", condition = " + this.dlBler0 + ", " + this.lteDlTb0 + ", " + this.dlBler1 + ", " + this.lteDlTb1 + ", values = " + i3 + ", " + i4 + ", " + f + "%");
        DecimalFormat decimalFormat = new DecimalFormat("#.##");
        StringBuilder sb = new StringBuilder();
        sb.append(decimalFormat.format((double) f));
        sb.append("%");
        setData(0, sb.toString());
    }
}
