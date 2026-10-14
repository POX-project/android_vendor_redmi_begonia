package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPCellDLModulationTB2 extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_DCI_INFORMATION};
    HashMap<Integer, String> MCSTypeMapping;
    int[] dlDciValidAddrs;
    int[][] dlMcsIndexAddrs;
    int[] dlMcsTypeAddrs;

    public NRPCellDLModulationTB2(Activity activity) {
        super(activity);
        this.dlMcsTypeAddrs = new int[]{8, 24, 128, 45, 2};
        this.dlMcsIndexAddrs = new int[][]{new int[]{8, 24, 128, 101, 5}, new int[]{8, 24, 128, 101, 5}, new int[]{8, 24, 128, 81, 5}, new int[]{8, 24, 128, 81, 5}};
        this.dlDciValidAddrs = new int[]{8, 24, 128, 0, 1};
        this.MCSTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.NRPCellDLModulationTB2.1
            {
                put(0, "BPSK");
                put(1, "QPSK");
                put(2, "16QAM");
                put(3, "64QAM");
                put(4, "256QAM");
            }
        };
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
        return new String[]{"Modulation Type", "Modulation Index"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Cell DL Modulation TB2";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int[][] iArr = this.dlMcsIndexAddrs;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.dlMcsIndexAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.dlMcsTypeAddrs);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, this.dlDciValidAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", conditions = " + fieldValueIcd3 + ", values = " + fieldValueIcd2 + ", " + fieldValueIcd);
        if (fieldValueIcd3 == 1) {
            clearData();
            addData(getValueByMapping(this.MCSTypeMapping, fieldValueIcd2), fieldValueIcd + "");
        }
    }
}
