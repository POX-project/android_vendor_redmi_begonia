package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.channellock.ChannelLockReceiver;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class GeranNeighbouringCellInformation extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_IND};
    HashMap<Integer, String> bandMapping;

    public GeranNeighbouringCellInformation(Activity activity) {
        super(activity);
        this.bandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.GeranNeighbouringCellInformation.1
            {
                put(0, "DCS1800");
                put(1, "PCS1900");
                put(2, "-");
            }
        };
    }

    String getBandMapping(int i) {
        if (i == 0 || i == 1) {
            return this.bandMapping.get(Integer.valueOf(i));
        }
        return this.bandMapping.get(2) + "(" + i + ")";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"BAND INDICATOR", ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "BSIC", "RSSI"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "GERAN neighbouring cell information";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        clearData();
        int fieldValue = getFieldValue(msg, MDMContent.EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_TOTAL_GCELL_NUM);
        for (int i = 0; i < fieldValue && i < 6; i++) {
            int fieldValue2 = getFieldValue(msg, MDMContent.EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_GCELL + "[" + i + "].valid");
            int fieldValue3 = getFieldValue(msg, MDMContent.EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_GCELL + "[" + i + "]." + MDMContent.EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_BAND_IND);
            int fieldValue4 = getFieldValue(msg, MDMContent.EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_GCELL + "[" + i + "].arfcn");
            int fieldValue5 = getFieldValue(msg, MDMContent.EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_GCELL + "[" + i + "].bsic");
            int fieldValue6 = getFieldValue(msg, MDMContent.EM_ERRC_MOB_MEAS_INTERRAT_GERAN_INFO_GCELL + "[" + i + "].rssi");
            Object[] objArr = new Object[4];
            Object objValueOf = "";
            objArr[0] = fieldValue2 > 0 ? getBandMapping(fieldValue3) : "";
            objArr[1] = fieldValue2 > 0 ? Integer.valueOf(fieldValue4) : "";
            objArr[2] = fieldValue2 > 0 ? Integer.valueOf(fieldValue5) : "";
            if (fieldValue2 > 0) {
                objValueOf = Float.valueOf(fieldValue6 / 4.0f);
            }
            objArr[3] = objValueOf;
            addData(objArr);
        }
    }
}
