package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class GSMRxdInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_GSM_RXD_INFO_IND};
    HashMap<Integer, String> RxModeMapping;
    HashMap<Integer, String> RxdEnableMapping;
    HashMap<Integer, String> ServingBandMapping;

    public GSMRxdInfo(Activity activity) {
        super(activity);
        this.ServingBandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.GSMRxdInfo.1
            {
                put(1, "Band 850");
                put(2, "Band 900");
                put(3, "Band 1800");
                put(4, "Band 1900");
                put(5, "-");
            }
        };
        this.RxModeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.GSMRxdInfo.2
            {
                put(-1, "-");
                put(0, "MODE_LEGACY");
                put(1, "MODE_1RX_DESENSE");
                put(3, "MODE_RXD");
                put(17, "MODE_1RX_DESENSE_CROSS");
                put(19, "RXD_CROSS");
            }
        };
        this.RxdEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.GSMRxdInfo.3
            {
                put(0, "DISABLE");
                put(1, "ENABLE");
                put(2, "-");
            }
        };
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "2. GSM EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"RxD Enable", "Serving ARFCN", "Serving Band", "RxD Mode", "Current Primary RxLev", "Current Diversity RxLev"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "GSM RXD Info";
    }

    String rxdEnableMapping(int i) {
        if (i >= 0 && i <= 1) {
            return this.RxdEnableMapping.get(Integer.valueOf(i));
        }
        return this.RxdEnableMapping.get(2) + "(" + i + ")";
    }

    String rxdModeMapping(int i) {
        if (this.RxModeMapping.keySet().contains(Integer.valueOf(i))) {
            return this.RxModeMapping.get(Integer.valueOf(i));
        }
        return this.RxModeMapping.get(-1) + "()";
    }

    String servingBandMapping(int i) {
        return (i < 1 || i > 4) ? " " : this.ServingBandMapping.get(Integer.valueOf(i));
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, MDMContent.GSM_RXD_ENABLE);
        int fieldValue2 = getFieldValue(msg, "serving_arfcn", true);
        int fieldValue3 = getFieldValue(msg, MDMContent.GSM_SERVING_BAND);
        int fieldValue4 = getFieldValue(msg, MDMContent.GSM_RXD_MODE);
        int fieldValue5 = getFieldValue(msg, MDMContent.GSM_RXLEV_PRX, true);
        int fieldValue6 = getFieldValue(msg, MDMContent.GSM_RXLEV_DRX, true);
        clearData();
        addData(rxdEnableMapping(fieldValue));
        addData(Integer.valueOf(fieldValue2));
        addData(servingBandMapping(fieldValue3));
        if (fieldValue == 1) {
            addData(rxdModeMapping(fieldValue4));
            addData(fieldValue5 + " dBm");
            addData(fieldValue6 + " dBm");
        }
        notifyDataSetChanged();
    }
}
