package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class LTEPCellULModulation extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_EL1_DCI_INFORMATION};
    HashMap<Integer, String> ModulationTypeMapping;
    int[] grantValidAddrs;
    int[] modIndexAddrs;
    int[] modTypeAddrs;
    int[] scellIndexAddrs;

    public LTEPCellULModulation(Activity activity) {
        super(activity);
        this.modTypeAddrs = new int[]{8, 24, 32, 22, 2};
        this.modIndexAddrs = new int[]{8, 24, 32, 1, 5};
        this.scellIndexAddrs = new int[]{8, 56, 17, 3};
        this.grantValidAddrs = new int[]{8, 24, 32, 0, 1};
        this.ModulationTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.LTEPCellULModulation.1
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
        return "LTE Primary Cell UL Modulation ";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.scellIndexAddrs[0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, this.scellIndexAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.grantValidAddrs);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, this.modTypeAddrs);
        int fieldValueIcd4 = getFieldValueIcd(byteBuffer, this.modIndexAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", conditions = " + fieldValueIcd + ", " + fieldValueIcd2 + ", values = " + fieldValueIcd3 + ", " + fieldValueIcd4);
        if (fieldValueIcd == 0 && fieldValueIcd2 == 1) {
            clearData();
            addData(getValueByMapping(this.ModulationTypeMapping, fieldValueIcd3));
            addData(Integer.valueOf(fieldValueIcd4));
        }
    }
}
