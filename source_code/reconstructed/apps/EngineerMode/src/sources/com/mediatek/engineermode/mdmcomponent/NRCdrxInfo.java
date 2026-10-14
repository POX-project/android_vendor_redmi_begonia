package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.support.v4.media.subtitle.Cea708CCParser;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRCdrxInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_EVENT, MDMContentICD.MSG_ID_NL2_MAC_DRX_STATUS_EVENT};
    int[][] dlRestranTimerAddrs;
    int[][] dlRttTimerAddrs;
    int[][] drxConfValidAddrs;
    int[][] drxDurTimerAddrs;
    int[][] drxDurTimerUnitAddrs;
    int[][] inactTimerAddrs;
    int[][] longCycleAddrs;
    int[][] shortCycleAddrs;
    int[][] shortCycleTimerAddrs;
    int[][] shortCycleValidAddrs;
    int[][] slotOffsetAddrs;
    int[][] startOffsetAddrs;
    int[][] ulRestranTimerAddrs;
    int[][] ulRttTimerAddrs;

    public NRCdrxInfo(Activity activity) {
        super(activity);
        this.drxConfValidAddrs = new int[][]{new int[0], new int[]{8, 56, 0, 8}, new int[]{8, 56, 0, 8}};
        this.drxDurTimerUnitAddrs = new int[][]{new int[0], new int[]{8, 56, 32, 0, 8}, new int[]{8, 56, 32, 0, 8}};
        this.drxDurTimerAddrs = new int[][]{new int[0], new int[]{8, 56, 32, 16, 16}, new int[]{8, 56, 32, 16, 16}};
        this.inactTimerAddrs = new int[][]{new int[0], new int[]{8, 56, 96, 16}, new int[]{8, 56, 96, 16}};
        this.longCycleAddrs = new int[][]{new int[0], new int[]{8, 56, Cea708CCParser.Const.CODE_C1_SPA, 16}, new int[]{8, 56, Cea708CCParser.Const.CODE_C1_SPA, 16}};
        this.shortCycleValidAddrs = new int[][]{new int[0], new int[]{8, 56, 64, 0, 8}, new int[]{8, 56, 64, 0, 8}};
        this.shortCycleAddrs = new int[][]{new int[0], new int[]{8, 56, 64, 16, 16}, new int[]{8, 56, 64, 16, 16}};
        this.shortCycleTimerAddrs = new int[][]{new int[0], new int[]{8, 56, 64, 8, 8}, new int[]{8, 56, 64, 8, 8}};
        this.startOffsetAddrs = new int[][]{new int[0], new int[]{8, 56, 160, 16}, new int[]{8, 56, 160, 16}};
        this.slotOffsetAddrs = new int[][]{new int[0], new int[]{8, 56, 24, 8}, new int[]{8, 56, 24, 8}};
        this.dlRttTimerAddrs = new int[][]{new int[0], new int[]{8, 56, 8, 8}, new int[]{8, 56, 8, 8}};
        this.ulRttTimerAddrs = new int[][]{new int[0], new int[]{8, 56, 16, 8}, new int[]{8, 56, 16, 8}};
        this.dlRestranTimerAddrs = new int[][]{new int[0], new int[]{8, 56, 112, 16}, new int[]{8, 56, 112, 16}};
        this.ulRestranTimerAddrs = new int[][]{new int[0], new int[]{8, 56, 128, 16}, new int[]{8, 56, 128, 16}};
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
        return new String[]{"OnDuration Timer", " Inactivity Timer", "Long Cycle", "Short Cycle", "Start Offset", "Slot Offset", "Short Cycle Timer", "DL RTT Timer", "UL RTT Timer", "DL Retransmission Timer", "UL Retransmission Timer"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR CDRX Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2;
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        clearData();
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, 8);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.drxConfValidAddrs);
        if (fieldValueIcd == 0) {
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", valid = " + fieldValueIcd);
            addData("Invalid", "Invalid", "Invalid", "Invalid", "Invalid", "Invalid", "Invalid", "Invalid", "Invalid", "Invalid", "Invalid");
            return;
        }
        int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.drxDurTimerUnitAddrs);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.drxDurTimerAddrs);
        int fieldValueIcd4 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.inactTimerAddrs);
        int fieldValueIcd5 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.longCycleAddrs);
        int fieldValueIcd6 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.shortCycleValidAddrs);
        int fieldValueIcd7 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.shortCycleAddrs);
        int fieldValueIcd8 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.shortCycleTimerAddrs);
        int fieldValueIcd9 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.startOffsetAddrs);
        int fieldValueIcd10 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.slotOffsetAddrs);
        int fieldValueIcd11 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.dlRttTimerAddrs);
        int fieldValueIcd12 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.ulRttTimerAddrs);
        int fieldValueIcd13 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.dlRestranTimerAddrs);
        int fieldValueIcd14 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.ulRestranTimerAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", condition = " + fieldValueIcd + ", " + fieldValueIcd6 + ", " + fieldValueIcd2 + ", value = " + fieldValueIcd2 + ", " + fieldValueIcd3 + ", " + fieldValueIcd4 + ", " + fieldValueIcd5 + ", , " + fieldValueIcd6 + ", " + fieldValueIcd7 + ", " + fieldValueIcd9 + ", " + fieldValueIcd10 + ", " + fieldValueIcd8 + ", " + fieldValueIcd11 + ", " + fieldValueIcd12 + ", " + fieldValueIcd13 + ", " + fieldValueIcd14);
        Object[] objArr = new Object[11];
        StringBuilder sb = new StringBuilder();
        sb.append(fieldValueIcd3);
        sb.append(fieldValueIcd2 == 0 ? " 1/32ms" : " ms");
        objArr[0] = sb.toString();
        objArr[1] = fieldValueIcd4 + " ms";
        objArr[2] = fieldValueIcd5 + " ms";
        if (fieldValueIcd6 == 0) {
            str2 = "Invalid";
        } else {
            str2 = fieldValueIcd7 + " ms";
        }
        objArr[3] = str2;
        objArr[4] = fieldValueIcd9 + " ms";
        objArr[5] = fieldValueIcd10 + " slot";
        objArr[6] = fieldValueIcd6 != 0 ? Integer.valueOf(fieldValueIcd8) : "Invalid";
        objArr[7] = fieldValueIcd11 + " symbol";
        objArr[8] = fieldValueIcd12 + " symbol";
        objArr[9] = fieldValueIcd13 + " slot";
        objArr[10] = fieldValueIcd14 + " slot";
        addData(objArr);
    }
}
