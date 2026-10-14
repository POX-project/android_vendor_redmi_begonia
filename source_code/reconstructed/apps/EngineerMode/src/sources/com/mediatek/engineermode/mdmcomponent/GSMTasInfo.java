package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class GSMTasInfo extends NormalTableTasComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_GSM_TAS_INFO_IND, MDMContent.MSG_ID_EM_GSM_UTAS_INFO_IND};
    HashMap<Integer, String> AntennaMapping;
    HashMap<Integer, String> ServingBandMapping;
    HashMap<Integer, String> TasEnableMapping;

    public GSMTasInfo(Activity activity) {
        super(activity);
        this.AntennaMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.GSMTasInfo.1
            {
                put(0, "LANT");
                put(1, "UANT");
                put(2, "LANT(')");
                put(3, "UANT");
                put(4, "-");
            }
        };
        this.ServingBandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.GSMTasInfo.2
            {
                put(1, "Band 850");
                put(2, "Band 900");
                put(3, "Band 1800");
                put(4, "Band 1900");
                put(5, "-");
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.GSMTasInfo.3
            {
                put(0, "DISABLE");
                put(1, "ENABLE");
                put(2, "-");
            }
        };
    }

    String antidxMapping(int i) {
        if (i >= 0 && i <= 3) {
            return this.AntennaMapping.get(Integer.valueOf(i));
        }
        return this.AntennaMapping.get(4) + "(" + i + ")";
    }

    String[] conbineLablesByModem(String[] strArr, String[] strArr2, int i) {
        if (FeatureSupport.is93Modem()) {
            return i < 0 ? addLablesAtPosition(strArr2, strArr, Math.abs(i)) : addLablesAtPosition(strArr, strArr2, i);
        }
        return strArr2;
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
        String[] strArr = {"TAS Enable Info", "Serving Band"};
        return (String[]) concatAll(conbineLablesByModem(strArr, new String[]{"Antenna Index", "Other Antenna Index", "Current Antenna Power", "Other Antenna Power", "Current Average SNR", "Other Average SNR", "Current Average SNR(dB)", "Other Average SNR(dB)"}, strArr.length), new String[]{"DAT Index"});
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "GSM TAS Info";
    }

    String servingBandMapping(int i) {
        return (i < 1 || i > 4) ? " " : this.ServingBandMapping.get(Integer.valueOf(i));
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    String tasEableMapping(int i) {
        if (i >= 0 && i <= 1) {
            return this.TasEnableMapping.get(Integer.valueOf(i));
        }
        return this.TasEnableMapping.get(2) + "(" + i + ")";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        if (str.equals(MDMContent.MSG_ID_EM_GSM_UTAS_INFO_IND)) {
            setInfoValid(1);
        } else {
            setInfoValid(0);
        }
        if (isInfoValid()) {
            clearData();
            this.mAdapter.add(new String[]{"Use " + getName().replace("UTAS", "TAS")});
            return;
        }
        int fieldValue = getFieldValue(msg, "tas_enable");
        int fieldValue2 = getFieldValue(msg, MDMContent.GSM_SERVING_BAND);
        int fieldValue3 = getFieldValue(msg, MDMContent.GSM_ANTENNA);
        int fieldValue4 = getFieldValue(msg, MDMContent.GSM_OTHER_ANTENNA);
        int fieldValue5 = getFieldValue(msg, MDMContent.GSM_CURRENT_ANTENNA_RXLEVEL, true);
        int fieldValue6 = getFieldValue(msg, MDMContent.GSM_OTHER_ANTENNA_RXLEVEL, true);
        int fieldValue7 = getFieldValue(msg, MDMContent.GSM_CURRENT_AVERAGE_SNR, true);
        int fieldValue8 = getFieldValue(msg, MDMContent.GSM_OTHER_ANTENNA_SNR, true);
        int iLog10 = (int) (Math.log10(((double) fieldValue7) / 4.0d) * 10.0d);
        int iLog11 = (int) (Math.log10(((double) fieldValue8) / 4.0d) * 10.0d);
        int fieldValue9 = getFieldValue(msg, MDMContent.GSM_DAT_SCENARIO_INDEX, true);
        clearData();
        if (FeatureSupport.is93Modem()) {
            addData(tasEableMapping(fieldValue));
            addData(servingBandMapping(fieldValue2));
        }
        addData(antidxMapping(fieldValue3));
        addData(antidxMapping(fieldValue4));
        addData(Integer.valueOf(fieldValue5));
        addData(Integer.valueOf(fieldValue6));
        addData(Integer.valueOf(fieldValue7));
        addData(Integer.valueOf(fieldValue8));
        addData(Integer.valueOf(iLog10));
        addData(Integer.valueOf(iLog11));
        addData(Integer.valueOf(fieldValue9));
        notifyDataSetChanged();
    }
}
