package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NrTddPattern extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION};
    int[] dlSlotNum1Addrs;
    int[] dlSlotNumAddrs;
    int[] dlSymbolNum1Addrs;
    int[] dlSymbolNumAddrs;
    int[] transPeriod1Addrs;
    int[] transPeriodAddrs;
    int[] ulSlotNum1Addrs;
    int[] ulSlotNumAddrs;
    int[] ulSymbolNum1Addrs;
    int[] ulSymbolNumAddrs;
    int[] valid1Addrs;
    int[] validAddrs;

    public NrTddPattern(Activity activity) {
        super(activity);
        this.validAddrs = new int[]{8, 56, 0, 1};
        this.transPeriodAddrs = new int[]{8, 56, 1, 4};
        this.dlSlotNumAddrs = new int[]{8, 56, 5, 9};
        this.ulSlotNumAddrs = new int[]{8, 56, 14, 9};
        this.dlSymbolNumAddrs = new int[]{8, 56, 23, 4};
        this.ulSymbolNumAddrs = new int[]{8, 56, 27, 4};
        this.valid1Addrs = new int[]{8, 56, 64, 0, 1};
        this.transPeriod1Addrs = new int[]{8, 56, 64, 1, 4};
        this.dlSlotNum1Addrs = new int[]{8, 56, 64, 5, 9};
        this.ulSlotNum1Addrs = new int[]{8, 56, 64, 14, 9};
        this.dlSymbolNum1Addrs = new int[]{8, 56, 64, 23, 4};
        this.ulSymbolNum1Addrs = new int[]{8, 56, 64, 27, 4};
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
        return new String[]{"Transmission Period 1", "DL slots 1", "UL slots 1", "DL symbols 1", "UL symbols 1", "Transmission Period 2", "DL slots 2", "UL slots 2", "DL symbols 2", "UL symbols 2"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR TDD UL/DL Pattern ";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.validAddrs[0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, this.validAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.transPeriodAddrs);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, this.dlSlotNumAddrs);
        int fieldValueIcd4 = getFieldValueIcd(byteBuffer, this.ulSlotNumAddrs);
        int fieldValueIcd5 = getFieldValueIcd(byteBuffer, this.dlSymbolNumAddrs);
        int fieldValueIcd6 = getFieldValueIcd(byteBuffer, this.ulSymbolNumAddrs);
        int fieldValueIcd7 = getFieldValueIcd(byteBuffer, this.valid1Addrs);
        int fieldValueIcd8 = getFieldValueIcd(byteBuffer, this.transPeriod1Addrs);
        int fieldValueIcd9 = getFieldValueIcd(byteBuffer, this.dlSlotNum1Addrs);
        int fieldValueIcd10 = getFieldValueIcd(byteBuffer, this.ulSlotNum1Addrs);
        int fieldValueIcd11 = getFieldValueIcd(byteBuffer, this.dlSymbolNum1Addrs);
        int fieldValueIcd12 = getFieldValueIcd(byteBuffer, this.ulSymbolNum1Addrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd2 + ", " + fieldValueIcd3 + ", " + fieldValueIcd4 + ", " + fieldValueIcd5 + ", " + fieldValueIcd6 + ", " + fieldValueIcd8 + ", " + fieldValueIcd9 + ", " + fieldValueIcd10 + ", " + fieldValueIcd11 + ", " + fieldValueIcd12);
        setData(0, fieldValueIcd == 0 ? "Invlid" : Integer.valueOf(fieldValueIcd2));
        setData(1, fieldValueIcd == 0 ? "Invlid" : Integer.valueOf(fieldValueIcd3));
        setData(2, fieldValueIcd == 0 ? "Invlid" : Integer.valueOf(fieldValueIcd4));
        setData(3, fieldValueIcd == 0 ? "Invlid" : Integer.valueOf(fieldValueIcd5));
        setData(4, fieldValueIcd == 0 ? "Invlid" : Integer.valueOf(fieldValueIcd6));
        setData(5, fieldValueIcd7 == 0 ? "Invlid" : Integer.valueOf(fieldValueIcd8));
        setData(6, fieldValueIcd7 == 0 ? "Invlid" : Integer.valueOf(fieldValueIcd9));
        setData(7, fieldValueIcd7 == 0 ? "Invlid" : Integer.valueOf(fieldValueIcd10));
        setData(8, fieldValueIcd7 == 0 ? "Invlid" : Integer.valueOf(fieldValueIcd11));
        setData(9, fieldValueIcd7 != 0 ? Integer.valueOf(fieldValueIcd12) : "Invlid");
    }
}
