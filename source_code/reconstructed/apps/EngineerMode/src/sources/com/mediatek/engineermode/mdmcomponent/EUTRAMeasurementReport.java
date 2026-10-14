package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class EUTRAMeasurementReport extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_ERRC_SERVING_CELL_INFO, MDMContentICD.MSG_ID_ERRC_MEAS_REPORT_INFO};
    int ucDlBandWidth;
    int ucFreqBandInd;
    int ucUlBandWidth;
    int wMCC;
    int wMNC;
    int wServEarfcn;
    int wServPhysCellId;
    int wServRsrp;
    int wServRsrq;
    int wServRssnr;

    public EUTRAMeasurementReport(Activity activity) {
        super(activity);
        this.wMCC = 0;
        this.wMNC = 0;
        this.ucFreqBandInd = 0;
        this.ucDlBandWidth = 0;
        this.ucUlBandWidth = 0;
        this.wServEarfcn = 0;
        this.wServPhysCellId = 0;
        this.wServRsrp = 0;
        this.wServRsrq = 0;
        this.wServRssnr = 0;
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
        return new String[]{MDMContentICD.MSG_VALUE_ICD_MCC, MDMContentICD.MSG_VALUE_ICD_MNC, "ucFreqBandInd", "ucDlBandwidth", "ucUlBandwidth", "wServEarfcn", "wServPhysCellId", "ucServRsrp", "ucServRsrq", "ucServRssnr"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EUTRAMeasurementReport";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        clearData();
        Elog.d("EmInfo/MDMComponent", "EUTRAMeasurementReport update,name id = " + str);
        if (str.equals(MDMContentICD.MSG_ID_ERRC_SERVING_CELL_INFO)) {
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, 8);
            this.wMCC = getFieldValueIcd(byteBuffer, 64, 16, false);
            this.wMNC = getFieldValueIcd(byteBuffer, 80, 16, false);
            this.ucFreqBandInd = getFieldValueIcd(byteBuffer, 16, 16, false);
            this.ucDlBandWidth = getFieldValueIcd(byteBuffer, 104, 8, false);
            this.ucUlBandWidth = getFieldValueIcd(byteBuffer, 112, 8, false);
            Elog.d("EmInfo/MDMComponent", "version = " + fieldValueIcdVersion);
        } else if (str.equals(MDMContentICD.MSG_ID_ERRC_MEAS_REPORT_INFO)) {
            int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, 8);
            this.wServEarfcn = getFieldValueIcd(byteBuffer, 32, 32, false);
            this.wServPhysCellId = getFieldValueIcd(byteBuffer, 16, 16, false);
            this.wServRsrp = getFieldValueIcd(byteBuffer, 64, 8, false);
            this.wServRsrq = getFieldValueIcd(byteBuffer, 72, 8, false);
            this.wServRssnr = getFieldValueIcd(byteBuffer, 80, 8, false);
            Elog.d("EmInfo/MDMComponent", "version = " + fieldValueIcdVersion2);
        }
        addData(Integer.valueOf(this.wMCC));
        addData(Integer.valueOf(this.wMNC));
        addData(Integer.valueOf(this.ucFreqBandInd));
        addData(Integer.valueOf(this.ucDlBandWidth));
        addData(Integer.valueOf(this.ucUlBandWidth));
        addData(Integer.valueOf(this.wServEarfcn));
        addData(Integer.valueOf(this.wServPhysCellId));
        addData(Integer.valueOf(this.wServRsrp));
        addData(Integer.valueOf(this.wServRsrq));
        addData(Integer.valueOf(this.wServRssnr));
    }
}
