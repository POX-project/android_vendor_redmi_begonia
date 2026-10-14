package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPCellTxPower extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_PUSCH_POWER_CONTROL, MDMContentICD.MSG_ID_NL1_PUCCH_POWER_CONTROL, MDMContentICD.MSG_ID_NL1_SRS_TX_INFORMATION};
    int[] pucchPowerAddrs;
    int[][] puschPowerAddrs;
    int[] srsPwerAddrs;

    public NRPCellTxPower(Activity activity) {
        super(activity);
        this.puschPowerAddrs = new int[][]{new int[]{8, 24, 64, 8}, new int[]{8, 24, 96, 8}, new int[]{8, 24, 96, 8}, new int[]{8, 24, 96, 8}};
        this.pucchPowerAddrs = new int[]{8, 24, 64, 8};
        this.srsPwerAddrs = new int[]{8, 24, 96, 16};
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
        return new String[]{"PUSCH Tx Power", "PUCCH Tx Power", "SRS Tx Power"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Cell Tx Power";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_NL1_PUSCH_POWER_CONTROL)) {
            int[][] iArr = this.puschPowerAddrs;
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.puschPowerAddrs, true);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd);
            StringBuilder sb = new StringBuilder();
            sb.append(fieldValueIcd);
            sb.append("");
            setData(0, sb.toString());
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NL1_PUCCH_POWER_CONTROL)) {
            int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, this.pucchPowerAddrs[0]);
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.pucchPowerAddrs, true);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", values = " + fieldValueIcd2);
            StringBuilder sb2 = new StringBuilder();
            sb2.append(fieldValueIcd2);
            sb2.append("");
            setData(1, sb2.toString());
            return;
        }
        int fieldValueIcdVersion3 = getFieldValueIcdVersion(byteBuffer, this.pucchPowerAddrs[0]);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, this.srsPwerAddrs, true);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion3 + ", values = " + fieldValueIcd3);
        StringBuilder sb3 = new StringBuilder();
        sb3.append(fieldValueIcd3);
        sb3.append("");
        setData(2, sb3.toString());
    }
}
