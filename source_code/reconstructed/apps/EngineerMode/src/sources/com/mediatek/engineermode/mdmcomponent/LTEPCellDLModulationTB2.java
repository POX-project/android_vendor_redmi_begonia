package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class LTEPCellDLModulationTB2 extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_EL1_PDSCH_DECODING_RESULTS};
    HashMap<Integer, String> ModulationTypeMapping;
    int[] carrierIndexAddrs;
    int[] crcResultAddrs;
    int[] modIndexAddrs;
    int[] modTypeAddrs;
    int[] streamNumAddrs;

    public LTEPCellDLModulationTB2(Activity activity) {
        super(activity);
        this.modTypeAddrs = new int[]{8, 56, 64, 96, 68, 2};
        this.modIndexAddrs = new int[]{8, 56, 64, 96, 20, 5};
        this.crcResultAddrs = new int[]{8, 56, 64, 96, 0, 1};
        this.carrierIndexAddrs = new int[]{8, 56, 14, 3};
        this.streamNumAddrs = new int[]{8, 56, 62, 2};
        this.ModulationTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.LTEPCellDLModulationTB2.1
            {
                put(0, "QPSK");
                put(1, "16QAM");
                put(2, "64QAM");
                put(3, "256QAM");
            }
        };
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
        return new String[]{"Modulation Type", "Modulation Index"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE Primary Cell DL Modulation TB2";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    public void testData() {
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + getName() + ", conditions = 0, 1, values = 3, 2");
        if (0 == 0 && 1 == 1) {
            clearData();
            addData(getValueByMapping(this.ModulationTypeMapping, 3));
            addData(2);
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.crcResultAddrs[0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, this.streamNumAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.crcResultAddrs);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, this.carrierIndexAddrs);
        int fieldValueIcd4 = getFieldValueIcd(byteBuffer, this.modTypeAddrs);
        int fieldValueIcd5 = getFieldValueIcd(byteBuffer, this.modIndexAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", conditions = " + fieldValueIcd3 + ", " + fieldValueIcd2 + ", " + fieldValueIcd + ", values = " + fieldValueIcd4 + ", " + fieldValueIcd5);
        if (fieldValueIcd > 1 && fieldValueIcd3 == 1 && fieldValueIcd2 == 1) {
            clearData();
            addData(getValueByMapping(this.ModulationTypeMapping, fieldValueIcd4));
            addData(Integer.valueOf(fieldValueIcd5));
        }
    }
}
