package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPCellResourceBlock extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_DCI_INFORMATION};
    int[] dlNumRbAddrs;
    int[] dlValidAddrs;
    int[] ulNumRbAddrs;
    int[] ulValidAddrs;

    public NRPCellResourceBlock(Activity activity) {
        super(activity);
        this.dlNumRbAddrs = new int[]{8, 24, 128, 12, 9};
        this.dlValidAddrs = new int[]{8, 24, 128, 0, 1};
        this.ulNumRbAddrs = new int[]{8, 24, 32, 12, 9};
        this.ulValidAddrs = new int[]{8, 24, 32, 0, 1};
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
        return new String[]{"DL Resource Block", "UL Resource Block"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Cell Resource Block";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.dlNumRbAddrs[0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, this.dlNumRbAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.dlValidAddrs);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, this.ulNumRbAddrs);
        int fieldValueIcd4 = getFieldValueIcd(byteBuffer, this.ulValidAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd2 + ", " + fieldValueIcd4 + ", values = " + fieldValueIcd + ", " + fieldValueIcd3);
        if (fieldValueIcd2 == 1) {
            setData(0, fieldValueIcd + "");
        }
        if (fieldValueIcd4 == 1) {
            setData(1, fieldValueIcd3 + "");
        }
    }
}
