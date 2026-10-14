package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class LteServingCellInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND, MDMContent.MSG_ID_EM_ERRC_SERVING_INFO_IND, MDMContent.MSG_ID_EM_EMM_REG_COMMON_INFO_IND, MDMContent.MSG_ID_EM_ERRC_EL1_CONFIG_INFO_IND, MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_ERRC_SERVING_CELL_INFO};
    int band;
    int[] cellIdAddrs;
    int cell_id;
    int dlBandwidth;
    int dl_earfcn;
    int earfcn;
    int highSpeed;
    String lac;
    HashMap<Integer, String> mBandMapping;
    int pci;
    int powerClass;
    int rsrp;
    int rsrq;
    int servingValid;
    int sinr;
    int ulBandwidth;
    int ul_earfcn;

    public LteServingCellInfo(Activity activity) {
        super(activity);
        this.mBandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.LteServingCellInfo.1
            {
                put(0, "6_RB");
                put(1, "15_RB");
                put(2, "25_RB");
                put(3, "50_RB");
                put(4, "75_RB");
                put(5, "100_RB");
                put(255, "Invalid(-1)");
            }
        };
        this.lac = "-";
        this.servingValid = 0;
        this.cellIdAddrs = new int[]{8, 216, 32};
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
        return new String[]{"PCI", "EARFCN (Band)", "SINR", "RSRP", "RSRQ", "FreqBandInd", MDMContent.DL_BANDWIDTH, MDMContent.UL_BANDWIDTH, "dl_earfcn", "ul_earfcn", "powerclass", "HighSpeed", "Cell ID", "LAC"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Serving Cell(Primary Cell) Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        if (str.equals(MDMContent.MSG_ID_EM_ERRC_SERVING_INFO_IND)) {
            this.servingValid = getFieldValue((Msg) obj, "is_serving_inf_valid");
            Elog.d("EmInfo/MDMComponent", "is_serving_inf_valid = " + this.servingValid);
        }
        Elog.d("EmInfo/MDMComponent", "servingValid = " + this.servingValid);
        int i = this.servingValid;
        if (i == 0) {
            clearData();
            addData("-");
            addData("-");
            addData("-");
            addData("-");
            addData("-");
            addData("-");
            addData("-");
            addData("-");
            addData("-");
            addData("-");
            return;
        }
        if (i == 1) {
            if (str.equals(MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND)) {
                Msg msg = (Msg) obj;
                this.rsrp = getFieldValue(msg, "serving_info.rsrp", true);
                this.rsrq = getFieldValue(msg, "serving_info.rsrq", true);
                this.sinr = getFieldValue(msg, "serving_info.rs_snr_in_qdb", true);
                this.earfcn = getFieldValue(msg, "serving_info.earfcn");
                this.pci = getFieldValue(msg, "serving_info.pci");
                this.band = getFieldValue(msg, "serving_info.serv_lte_band");
                this.dlBandwidth = getFieldValue(msg, "serving_info." + MDMContent.DL_BANDWIDTH, true);
                this.ulBandwidth = getFieldValue(msg, "serving_info." + MDMContent.UL_BANDWIDTH, true);
            } else if (str.equals(MDMContent.MSG_ID_EM_ERRC_SERVING_INFO_IND)) {
                Msg msg2 = (Msg) obj;
                this.highSpeed = getFieldValue(msg2, MDMContent.EM_ERRC_HIGH_SPEED_FLG);
                this.cell_id = getFieldValue(msg2, "serv_inf.cell_id");
                this.dl_earfcn = getFieldValue(msg2, "serv_inf.dl_earfcn");
                this.ul_earfcn = getFieldValue(msg2, "serv_inf.ul_earfcn");
            } else if (str.equals(MDMContent.MSG_ID_EM_ERRC_EL1_CONFIG_INFO_IND)) {
                this.powerClass = getFieldValue((Msg) obj, "powerclass");
            } else if (str.equals(MDMContent.MSG_ID_EM_EMM_REG_COMMON_INFO_IND)) {
                Msg msg3 = (Msg) obj;
                this.lac = "";
                for (int i2 = 0; i2 < 2; i2++) {
                    int fieldValue = getFieldValue(msg3, "lai.la_code[" + i2 + "]");
                    StringBuilder sb = new StringBuilder();
                    sb.append(this.lac);
                    sb.append(Integer.toHexString(fieldValue));
                    this.lac = sb.toString();
                }
            } else if (str.equals(MDMContentICD.MSG_ID_ERRC_SERVING_CELL_INFO)) {
                ByteBuffer byteBuffer = (ByteBuffer) obj;
                this.lac = "";
                int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.cellIdAddrs[0]);
                int fieldValueIcd = getFieldValueIcd(byteBuffer, this.cellIdAddrs);
                Elog.d("EmInfo/MDMComponent", getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd);
                clearData();
                addData(Integer.valueOf(fieldValueIcd));
            }
            clearData();
            Object[] objArr = new Object[1];
            objArr[0] = this.earfcn == -1 ? "" : Integer.valueOf(this.pci);
            addData(objArr);
            addData(this.earfcn == -1 ? "" : "EARFCN: " + this.earfcn + " (Band " + this.band + ")");
            Object[] objArr2 = new Object[1];
            int i3 = this.sinr;
            objArr2[0] = i3 == -1 ? "" : Float.valueOf(i3 / 4.0f);
            addData(objArr2);
            Object[] objArr3 = new Object[1];
            int i4 = this.rsrp;
            objArr3[0] = i4 == -1 ? "" : Float.valueOf(i4 / 4.0f);
            addData(objArr3);
            Object[] objArr4 = new Object[1];
            int i5 = this.rsrq;
            objArr4[0] = i5 == -1 ? "" : Float.valueOf(i5 / 4.0f);
            addData(objArr4);
            Object[] objArr5 = new Object[1];
            int i6 = this.band;
            objArr5[0] = i6 != 65535 ? Integer.valueOf(i6) : "";
            addData(objArr5);
            addData(this.mBandMapping.get(Integer.valueOf(this.dlBandwidth)) + "(" + this.dlBandwidth + ")");
            addData(this.mBandMapping.get(Integer.valueOf(this.ulBandwidth)) + "(" + this.ulBandwidth + ")");
            addData(Integer.valueOf(this.dl_earfcn));
            addData(Integer.valueOf(this.ul_earfcn));
            addData(Integer.valueOf(this.powerClass));
            addData(Integer.valueOf(this.highSpeed));
            addData(String.format("0x%X", Integer.valueOf(this.cell_id)));
            addData(this.lac);
        }
    }
}
