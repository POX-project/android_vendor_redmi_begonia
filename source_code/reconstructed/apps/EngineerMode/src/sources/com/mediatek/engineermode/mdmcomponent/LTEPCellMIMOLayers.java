package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class LTEPCellMIMOLayers extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_EL1_PDSCH_DECODING_RESULTS, MDMContentICD.MSG_ID_EL1_PUSCH_REPORT};
    int[] dlCarIndexAddrs;
    int[] dlCrcResultddrs;
    int[] dlLayerAddrs;
    int[] ulCarIndexAddrs;
    int[] ulLayerAddrs;

    public LTEPCellMIMOLayers(Activity activity) {
        super(activity);
        this.dlCrcResultddrs = new int[]{8, 56, 64, 0, 1};
        this.dlCarIndexAddrs = new int[]{8, 56, 14, 3};
        this.dlLayerAddrs = new int[]{8, 56, 51, 3};
        this.ulCarIndexAddrs = new int[]{8, 9, 3};
        this.ulLayerAddrs = new int[]{8, 24, 101, 1};
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
        return new String[]{" DL MIMO Layers", "UL MIMO Layers"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE Primary Cell MIMO Layers";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    public void testData() {
        System.out.println(" update update,name id = 700D conditions = 1, 0, values = 3");
        if (1 == 1 && 0 == 0) {
            setData(0, "3");
        }
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = 7014, version = 1, conditions = 0, values = 2");
        if (0 == 0) {
            setData(1, "2");
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (!str.equals(MDMContentICD.MSG_ID_EL1_PDSCH_DECODING_RESULTS)) {
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.ulCarIndexAddrs[0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, this.ulCarIndexAddrs);
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.ulLayerAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", conditions = " + fieldValueIcd + ", values = " + fieldValueIcd2);
            if (fieldValueIcd == 0) {
                setData(1, fieldValueIcd2 + "");
                return;
            }
            return;
        }
        int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, this.dlCrcResultddrs[0]);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, this.dlCrcResultddrs);
        int fieldValueIcd4 = getFieldValueIcd(byteBuffer, this.dlCarIndexAddrs);
        int fieldValueIcd5 = getFieldValueIcd(byteBuffer, this.dlLayerAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", conditions = " + fieldValueIcd3 + ", " + fieldValueIcd4 + ", values = " + fieldValueIcd5);
        if (fieldValueIcd3 == 1 && fieldValueIcd4 == 0) {
            setData(0, fieldValueIcd5 + "");
        }
    }
}
