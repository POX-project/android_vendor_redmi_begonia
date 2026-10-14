package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class oRfcInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_EVENT, MDMContentICD.MSG_ID_NRRC_RLF_EVENT, MDMContentICD.MSG_ID_NRRC_SCG_FAILURE_EVENT, MDMContentICD.MSG_ID_NRRC_DYNAMIC_SPECTRUM_SHARING_CONFIGURATION_EVENT};
    int[][] dlFreBandAddr;
    int[][] dlNrarfcnAddr;
    int[][] dssEnabledAddr;
    String[] icdLogInfo;
    int[][] phyCellIdAddr;
    int[][] rlfCauseAddr;
    HashMap<Integer, String> rlfCauseMapping;
    int[][] scgFailCauseAddr;
    HashMap<Integer, String> scgFailCauseMapping;

    public oRfcInfo(Activity activity) {
        super(activity);
        this.icdLogInfo = new String[8];
        this.rlfCauseAddr = new int[][]{new int[]{8, 8, 8}};
        this.scgFailCauseAddr = new int[][]{new int[]{8, 8, 8}, new int[]{8, 8, 8}, new int[]{8, 8, 8}};
        this.dssEnabledAddr = new int[][]{new int[]{8, 72, 8}};
        this.dlFreBandAddr = new int[][]{new int[]{8, 8, 16}};
        this.dlNrarfcnAddr = new int[][]{new int[]{8, 24, 32}};
        this.phyCellIdAddr = new int[][]{new int[]{8, 56, 16}};
        this.rlfCauseMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.oRfcInfo.1
            {
                put(0, "Physical layer problem");
                put(1, "RA problem");
                put(2, "Maximum RLC re-transmissions");
            }
        };
        this.scgFailCauseMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.oRfcInfo.2
            {
                put(0, "t310-Expiry");
                put(1, "randomAccessProblem");
                put(2, "rlc-MaxNumRetx");
                put(2, "synchReconfigFailure-SCG");
                put(2, "scg-reconfigFailure");
                put(2, "srb3-IntegrityFailure");
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
        return new String[]{"RLF Cause", "SCG Failure Cause", "DSS_STATUS"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Other RRC information";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2;
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_NRRC_RLF_EVENT)) {
            int[][] iArr = this.rlfCauseAddr;
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.rlfCauseAddr);
            Elog.d("EmInfo/MDMComponent", this.icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", value = " + fieldValueIcd);
            setData(0, getValueByMapping(this.rlfCauseMapping, fieldValueIcd));
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NRRC_SCG_FAILURE_EVENT)) {
            int[][] iArr2 = this.scgFailCauseAddr;
            int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, iArr2[iArr2.length - 1][0]);
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.scgFailCauseAddr);
            Elog.d("EmInfo/MDMComponent", this.icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", values = " + fieldValueIcd2);
            setData(1, getValueByMapping(this.scgFailCauseMapping, fieldValueIcd2));
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NRRC_DYNAMIC_SPECTRUM_SHARING_CONFIGURATION_EVENT)) {
            int[][] iArr3 = this.dlFreBandAddr;
            int fieldValueIcdVersion3 = getFieldValueIcdVersion(byteBuffer, iArr3[iArr3.length - 1][0]);
            int fieldValueIcd3 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion3, this.dlFreBandAddr);
            int fieldValueIcd4 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion3, this.dlNrarfcnAddr);
            int fieldValueIcd5 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion3, this.phyCellIdAddr);
            int fieldValueIcd6 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion3, this.dssEnabledAddr);
            Elog.d("EmInfo/MDMComponent", this.icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion3 + ", conditions = " + fieldValueIcd3 + ", " + fieldValueIcd4 + ", " + fieldValueIcd5 + ", values = " + fieldValueIcd6);
            if (fieldValueIcd6 == 0) {
                str2 = "Disable";
            } else {
                str2 = "Enable, " + fieldValueIcd3 + ", " + fieldValueIcd4 + ", " + fieldValueIcd5;
            }
            setData(2, str2);
        }
    }
}
