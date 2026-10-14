package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.lang.reflect.Array;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRSessionInfo extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_EVENT, MDMContentICD.MSG_ID_VGNAS_SM_CONTEXT_INFO};
    String[][] ambrArrays;
    int[][] ambrLegthAddrs;
    int[][] dlAmbrAddrs;
    int[][] dlAmbrUnit;
    int[] sessionIdAddrs;
    int[][] ulAmbrAddrs;
    int[][] ulAmbrUnit;

    public NRSessionInfo(Activity activity) {
        super(activity);
        this.sessionIdAddrs = new int[]{8, 0, 8};
        this.ambrLegthAddrs = new int[][]{new int[]{8, 56, 8}, new int[0], new int[0]};
        this.ulAmbrUnit = new int[][]{new int[]{8, 64, 8}, new int[]{8, 56, 8, 8}, new int[]{8, 160, 8, 8}};
        this.ulAmbrAddrs = new int[][]{new int[]{8, 72, 16}, new int[]{8, 56, 64, 32}, new int[]{8, 160, 64, 32}};
        this.dlAmbrUnit = new int[][]{new int[]{8, 88, 8}, new int[]{8, 56, 0, 8}, new int[]{8, 160, 0, 8}};
        this.dlAmbrAddrs = new int[][]{new int[]{8, 96, 16}, new int[]{8, 56, 32, 32}, new int[]{8, 160, 32, 32}};
        this.ambrArrays = (String[][]) Array.newInstance((Class<?>) String.class, 15, 3);
        clearData();
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "8. NR EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"Session ID", "DL Session-AMBR", "UL Session-AMBR"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Session - AMBR";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.ambrLegthAddrs[0][0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, this.sessionIdAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.ambrLegthAddrs);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.ulAmbrUnit);
        int fieldValueIcd4 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.ulAmbrAddrs);
        int fieldValueIcd5 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.dlAmbrUnit);
        int fieldValueIcd6 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.dlAmbrAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd + ", values = " + fieldValueIcd2 + ", " + fieldValueIcd3 + ", " + fieldValueIcd4 + ", " + fieldValueIcd5 + ", " + fieldValueIcd6);
        StringBuilder sb = new StringBuilder();
        sb.append(fieldValueIcd);
        sb.append("");
        StringBuilder sb2 = new StringBuilder();
        sb2.append((fieldValueIcd6 * fieldValueIcd5) / 1000000);
        sb2.append("");
        StringBuilder sb3 = new StringBuilder();
        sb3.append((fieldValueIcd4 * fieldValueIcd3) / 1000000);
        sb3.append("");
        this.ambrArrays[fieldValueIcd + (-1)] = new String[]{sb.toString(), sb2.toString(), sb3.toString()};
        if (fieldValueIcd == 15) {
            addData(this.ambrArrays);
        }
    }
}
