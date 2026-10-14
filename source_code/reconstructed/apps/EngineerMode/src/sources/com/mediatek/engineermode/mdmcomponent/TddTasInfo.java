package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class TddTasInfo extends NormalTableTasComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_TDD_TAS_INFO_IND};
    HashMap<Integer, String> AntennaMapping;
    HashMap<Integer, String> ServingBandMapping;
    HashMap<Integer, String> TasEnableMapping;
    int TasVersion;

    public TddTasInfo(Activity activity) {
        super(activity);
        this.TasVersion = 1;
        this.AntennaMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.TddTasInfo.1
            {
                put(0, "LANT");
                put(1, "UANT");
                put(2, "LANT(')");
                put(3, "-");
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.TddTasInfo.2
            {
                put(0, "DISABLE");
                put(1, "ENABLE");
                put(2, "-");
            }
        };
        this.ServingBandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.TddTasInfo.3
            {
                put(0, "Band 34");
                put(1, "Band 39");
                put(2, "-");
            }
        };
    }

    String antidxMapping(int i) {
        if (i >= 0 && i <= 2) {
            return this.AntennaMapping.get(Integer.valueOf(i));
        }
        return this.AntennaMapping.get(3) + "(" + i + ")";
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
        return "4. UMTS TDD EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        String[] strArr = {"Tas Enable Info", "Serving Band"};
        return this.TasVersion == 2 ? conbineLablesByModem(strArr, new String[]{"force tx en", "force ant state", "cur ant state", "RSCP_LANT", "RSSI_LANT", "SINR_LANT", "RSCP_UANT", "RSSI_UANT", "SINR_UANT", "RSCP_LANT(')", "RSSI_LANT(')", "SINR_LANT(')", "tx pwr"}, strArr.length) : conbineLablesByModem(strArr, new String[]{"force tx en", "force ant state", "cur ant state", "RSCP_LANT", "RSSI_LANT", "SINR_LANT", "RSCP_UANT", "RSSI_UANT", "SINR_UANT", "tx pwr"}, strArr.length);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "TDD TAS Info";
    }

    String servingBandMapping(int i) {
        if (i >= 0 && i <= 1) {
            return this.ServingBandMapping.get(Integer.valueOf(i));
        }
        return this.ServingBandMapping.get(2) + "(" + i + ")";
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
        int fieldValue = getFieldValue(msg, "cur_ant_state");
        setInfoValid((fieldValue >> 8) == 3 ? 1 : 0);
        if (isInfoValid()) {
            clearData();
            this.mAdapter.add(new String[]{"Use " + getName().replace("UTAS", "TAS")});
            return;
        }
        this.TasVersion = ((fieldValue >> 8) & 3) == 2 ? 2 : 1;
        Elog.d("EmInfo/MDMComponent", "TasVersion " + this.TasVersion);
        int fieldValue2 = getFieldValue(msg, "tas_enable_info");
        int fieldValue3 = getFieldValue(msg, "current_serving_band");
        int fieldValue4 = getFieldValue(msg, MDMContent.TDD_FORCE_TX_EN);
        int fieldValue5 = getFieldValue(msg, "force_ant_state");
        int fieldValue6 = getFieldValue(msg, MDMContent.TDD_ANT0_RSCP, true);
        int fieldValue7 = getFieldValue(msg, MDMContent.TDD_ANT0_RSSI, true);
        int fieldValue8 = getFieldValue(msg, MDMContent.TDD_ANT0_SINR, true);
        int fieldValue9 = getFieldValue(msg, MDMContent.TDD_ANT1_RSCP, true);
        int fieldValue10 = getFieldValue(msg, "ant1_rssi", true);
        int fieldValue11 = getFieldValue(msg, MDMContent.TDD_ANT1_SINR, true);
        int fieldValue12 = getFieldValue(msg, "tx_pwr", true);
        int fieldValue13 = 0;
        int fieldValue14 = 0;
        int fieldValue15 = 0;
        if (this.TasVersion == 2) {
            fieldValue13 = getFieldValue(msg, MDMContent.TDD_ANT2_RSCP, true);
            fieldValue14 = getFieldValue(msg, "ant1_rssi", true);
            fieldValue15 = getFieldValue(msg, MDMContent.TDD_ANT2_SINR, true);
        }
        clearData();
        if (FeatureSupport.is93Modem()) {
            addData(tasEableMapping(fieldValue2), servingBandMapping(fieldValue3));
        }
        if (this.TasVersion == 2) {
            addData(tasEableMapping(fieldValue4), antidxMapping(fieldValue5), Integer.valueOf(fieldValue & 255), Integer.valueOf(fieldValue6), Integer.valueOf(fieldValue7), Integer.valueOf(fieldValue8), Integer.valueOf(fieldValue9), Integer.valueOf(fieldValue10), Integer.valueOf(fieldValue11), Integer.valueOf(fieldValue13), Integer.valueOf(fieldValue14), Integer.valueOf(fieldValue15), Integer.valueOf(fieldValue12));
        } else {
            addData(tasEableMapping(fieldValue4), antidxMapping(fieldValue5), Integer.valueOf(fieldValue & 255), Integer.valueOf(fieldValue6), Integer.valueOf(fieldValue7), Integer.valueOf(fieldValue8), Integer.valueOf(fieldValue9), Integer.valueOf(fieldValue10), Integer.valueOf(fieldValue11), Integer.valueOf(fieldValue12));
        }
        notifyDataSetChanged();
    }
}
