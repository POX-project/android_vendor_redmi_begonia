package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.Arrays;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRPNeighborCellInfo extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_NEIGHBOR_CELL_MEASUREMENT};
    int[] carTypeAddrs;
    int[] cellNumAddrs;
    int[] narfcnAddrs;
    int[] pciAddrs;
    int[] rsrpAddrs;
    int[] rsrqAddrs;
    int[] rssiAddrs;
    int[] sinrAddrs;

    public NRPNeighborCellInfo(Activity activity) {
        super(activity);
        this.carTypeAddrs = new int[]{8, 24, 3};
        this.narfcnAddrs = new int[]{8, 0, 22};
        this.cellNumAddrs = new int[]{8, 56, 0, 5};
        this.pciAddrs = new int[]{8, 56, 32, 0, 10};
        this.rsrpAddrs = new int[]{8, 56, 32, 32, 16};
        this.rsrqAddrs = new int[]{8, 56, 32, 96, 8};
        this.rssiAddrs = new int[]{8, 56, 32, 128, 16};
        this.sinrAddrs = new int[]{8, 56, 32, 192, 8};
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
        return new String[]{"NARFCN", "PCI", "SSB - RSRP", "SSB - RSRQ", "SSB - RSSI", "SSB - SINR"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR Primary Neighbor Cell Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    public void testData() {
        if (0 == 0) {
            clearData();
            for (int i = 0; i < 5 && i <= 20; i++) {
                this.pciAddrs = updateElement(this.pciAddrs, (i * 224) + 0, -2);
                int i2 = (i * 2) + 123 + i;
                this.rsrpAddrs = updateElement(this.rsrpAddrs, (i * 224) + 32, -2);
                int i3 = (i * 2) + 3 + i;
                this.rsrqAddrs = updateElement(this.rsrqAddrs, (i * 224) + 96, -2);
                int i4 = (i * 2) + 53 + i;
                this.rssiAddrs = updateElement(this.rssiAddrs, (i * 224) + 128, -2);
                int i5 = (i * 2) + 63 + i;
                this.sinrAddrs = updateElement(this.sinrAddrs, (i * 224) + 192, -2);
                int i6 = ((i * 2) + 123) - i;
                Elog.d("EmInfo/MDMComponent", Arrays.toString(this.pciAddrs) + ", " + Arrays.toString(this.rsrpAddrs) + ", " + Arrays.toString(this.rsrqAddrs) + ", " + Arrays.toString(this.rssiAddrs) + ", " + Arrays.toString(this.sinrAddrs));
                Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + getName() + ", condition = 0, 5, values = 12345, " + i2 + ", " + i3 + ", " + i4 + ", " + i5 + ", " + i6);
                StringBuilder sb = new StringBuilder();
                sb.append(12345);
                sb.append("");
                StringBuilder sb2 = new StringBuilder();
                sb2.append(i2);
                sb2.append("");
                StringBuilder sb3 = new StringBuilder();
                sb3.append(i3);
                sb3.append("");
                StringBuilder sb4 = new StringBuilder();
                sb4.append(i4);
                sb4.append("");
                StringBuilder sb5 = new StringBuilder();
                sb5.append(i5);
                sb5.append("");
                StringBuilder sb6 = new StringBuilder();
                sb6.append(i6);
                sb6.append("");
                addData(sb.toString(), sb2.toString(), sb3.toString(), sb4.toString(), sb5.toString(), sb6.toString());
            }
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int i = 0;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.carTypeAddrs[0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, this.carTypeAddrs);
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, this.narfcnAddrs);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, this.cellNumAddrs);
        if (fieldValueIcd == 0) {
            clearData();
            int i2 = 0;
            while (i2 < fieldValueIcd3 && i2 <= 20) {
                int[] iArrUpdateElement = updateElement(this.pciAddrs, (i2 * 224) + i, -2);
                this.pciAddrs = iArrUpdateElement;
                int fieldValueIcd4 = getFieldValueIcd(byteBuffer, iArrUpdateElement);
                int[] iArrUpdateElement2 = updateElement(this.rsrpAddrs, (i2 * 224) + 32, -2);
                this.rsrpAddrs = iArrUpdateElement2;
                int fieldValueIcd5 = getFieldValueIcd(byteBuffer, iArrUpdateElement2, true);
                int[] iArrUpdateElement3 = updateElement(this.rsrqAddrs, (i2 * 224) + 96, -2);
                this.rsrqAddrs = iArrUpdateElement3;
                int fieldValueIcd6 = getFieldValueIcd(byteBuffer, iArrUpdateElement3, true);
                int[] iArrUpdateElement4 = updateElement(this.rssiAddrs, (i2 * 224) + 128, -2);
                this.rssiAddrs = iArrUpdateElement4;
                int fieldValueIcd7 = getFieldValueIcd(byteBuffer, iArrUpdateElement4, true);
                int[] iArrUpdateElement5 = updateElement(this.sinrAddrs, (i2 * 224) + 192, -2);
                this.sinrAddrs = iArrUpdateElement5;
                int fieldValueIcd8 = getFieldValueIcd(byteBuffer, iArrUpdateElement5, true);
                Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd + ", " + fieldValueIcd3 + ", values = " + fieldValueIcd2 + ", " + fieldValueIcd4 + ", " + fieldValueIcd5 + ", " + fieldValueIcd6 + ", " + fieldValueIcd7 + ", " + fieldValueIcd8);
                StringBuilder sb = new StringBuilder();
                sb.append(fieldValueIcd2);
                sb.append("");
                StringBuilder sb2 = new StringBuilder();
                sb2.append(fieldValueIcd4);
                sb2.append("");
                StringBuilder sb3 = new StringBuilder();
                sb3.append(fieldValueIcd5);
                sb3.append("");
                StringBuilder sb4 = new StringBuilder();
                sb4.append(fieldValueIcd6);
                sb4.append("");
                StringBuilder sb5 = new StringBuilder();
                sb5.append(fieldValueIcd7);
                sb5.append("");
                StringBuilder sb6 = new StringBuilder();
                sb6.append(fieldValueIcd8);
                sb6.append("");
                addData(sb.toString(), sb2.toString(), sb3.toString(), sb4.toString(), sb5.toString(), sb6.toString());
                i2++;
                byteBuffer = byteBuffer;
                i = 0;
            }
        }
    }
}
