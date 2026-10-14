package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.channellock.ChannelLockReceiver;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class BasicInfoServingGsm extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_RRM_MEASUREMENT_REPORT_INFO_IND};
    HashMap<Integer, String> mGprsMapping;
    HashMap<Integer, String> mMapping;
    HashMap<Integer, String> mPbcchMapping;

    public BasicInfoServingGsm(Activity activity) {
        super(activity);
        this.mMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.BasicInfoServingGsm.1
            {
                put(0, "PGSM");
                put(1, "EGSM");
                put(2, "RGSM");
                put(3, "DCS1800");
                put(4, "PCS1900");
                put(5, "GSM450");
                put(6, "GSM480");
                put(7, "GSM850");
            }
        };
        this.mGprsMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.BasicInfoServingGsm.2
            {
                put(0, "PGSM");
                put(1, "EGSM");
            }
        };
        this.mPbcchMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.BasicInfoServingGsm.3
            {
                put(0, "PGSM");
                put(1, "EGSM");
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
        return new String[]{"Band", ChannelLockReceiver.EXTRAL_CHANNELLOCK_ARFCN, "BSIC", "GPRS supported", "PBCCH present"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Basic Info (Serving) (GSM)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_RR_STATE);
        clearData();
        if (fieldValue >= 3 && fieldValue <= 7) {
            int fieldValue2 = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERVING_CURRENT_BAND);
            int fieldValue3 = getFieldValue(msg, "rr_em_measurement_report_info.serving_arfcn");
            int fieldValue4 = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERVING_BSIC);
            int fieldValue5 = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERV_GPRS_SUPPORTED);
            int fieldValue6 = getFieldValue(msg, "rr_em_measurement_report_info." + MDMContent.RR_EM_MEASUREMENT_REPORT_INFO_SERV_GPRS_PBCCH_PRESENT);
            addData(this.mMapping.get(Integer.valueOf(fieldValue2)));
            addData(Integer.valueOf(fieldValue3));
            addData(Integer.valueOf(fieldValue4));
            addData(this.mGprsMapping.get(Integer.valueOf(fieldValue5)));
            addData(this.mPbcchMapping.get(Integer.valueOf(fieldValue6)));
        }
        notifyDataSetChanged();
    }
}
