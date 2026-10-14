package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPCellULMIMOLayers extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_DCI_INFORMATION};
    HashMap<Integer, String> MIMOLayersMapping;
    int[] dlDciValidAddrs;
    int[][] dlNumsAddrs;
    int[] ulDciValidAddrs;
    int[][] ulNumsAddrs;

    public NRPCellULMIMOLayers(Activity activity) {
        super(activity);
        this.dlDciValidAddrs = new int[]{8, 24, 128, 0, 1};
        this.dlNumsAddrs = new int[][]{new int[]{8, 24, 128, 94, 2}, new int[]{8, 24, 128, 94, 2}, new int[]{8, 24, 128, 62, 2}, new int[]{8, 24, 128, 62, 2}};
        this.ulDciValidAddrs = new int[]{8, 24, 32, 0, 1};
        this.ulNumsAddrs = new int[][]{new int[]{8, 24, 32, 71, 1}, new int[]{8, 24, 32, 71, 1}, new int[]{8, 24, 32, 61, 2}, new int[]{8, 24, 32, 61, 2}};
        this.MIMOLayersMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.NRPCellULMIMOLayers.1
            {
                put(0, "1 layer");
                put(1, "2 layers");
                put(2, "3 layers");
                put(3, "4 layers");
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
        return new String[]{"DL MIMO Layers", "UL MIMO Layers"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Cell MIMO Layers";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.dlDciValidAddrs[0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, this.dlDciValidAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.dlNumsAddrs);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.ulNumsAddrs);
        int fieldValueIcd4 = getFieldValueIcd(byteBuffer, this.ulDciValidAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", conditions = " + fieldValueIcd + ", " + fieldValueIcd4 + ", values = " + fieldValueIcd2 + ", " + fieldValueIcd3);
        if (fieldValueIcd == 1) {
            setData(0, getValueByMapping(this.MIMOLayersMapping, fieldValueIcd2));
        }
        if (fieldValueIcd4 == 1) {
            setData(1, getValueByMapping(this.MIMOLayersMapping, fieldValueIcd3));
        }
    }
}
