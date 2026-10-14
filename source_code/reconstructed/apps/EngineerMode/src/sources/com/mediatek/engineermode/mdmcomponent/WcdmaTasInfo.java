package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class WcdmaTasInfo extends NormalTableTasComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_UL1_TAS_INFO_IND, MDMContent.MSG_ID_FDD_EM_UL1_UTAS_INFO_IND};
    HashMap<Integer, String> AntennaMapping;
    HashMap<Integer, String> TasEnableMapping;
    int TasVersion;

    public WcdmaTasInfo(Activity activity) {
        super(activity);
        this.TasVersion = 1;
        this.AntennaMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.WcdmaTasInfo.1
            {
                put(0, "LANT");
                put(1, "UANT");
                put(2, "LANT(')");
                put(3, "UANT");
                put(4, "-");
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.WcdmaTasInfo.2
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
        return "3. UMTS FDD EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        String[] strArr = {"Tas Enable Info", "Serving Band", "Serving UARFCN"};
        String[] strArr2 = {"DAT Index"};
        return this.TasVersion == 2 ? (String[]) concatAll(conbineLablesByModem(strArr, new String[]{"TX Antenna", "Antenna State", "RSCP_Diff", "RSCP_LANT", "RSCP_UANT", "RSCP_LANT(')", "TX Power", "DPCCH TX Power"}, strArr.length), strArr2) : (String[]) concatAll(conbineLablesByModem(strArr, new String[]{"TX Antenna", "Antenna State", "RSCP_Diff", "RSCP_LANT", "RSCP_UANT", "TX Power", "DPCCH TX Power"}, strArr.length), strArr2);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "WCDMA TAS Info";
    }

    String servingBandMapping(int i) {
        return "Band " + i;
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
        int i;
        Msg msg = (Msg) obj;
        if (str.equals(MDMContent.MSG_ID_FDD_EM_UL1_UTAS_INFO_IND)) {
            setInfoValid(1);
        } else {
            setInfoValid(0);
        }
        if (isInfoValid()) {
            clearData();
            this.mAdapter.add(new String[]{"Use " + getName().replace("UTAS", "TAS")});
            return;
        }
        int fieldValue = getFieldValue(msg, "EmUl1Tas.tas_enable");
        int fieldValue2 = getFieldValue(msg, "EmUl1Tas.band");
        int fieldValue3 = getFieldValue(msg, "EmUl1Tas.uarfcn");
        int fieldValue4 = getFieldValue(msg, "EmUl1Tas." + MDMContent.FDD_EM_UL1_TAS_MAIN_ANT_IDX);
        int fieldValue5 = getFieldValue(msg, "EmUl1Tas." + MDMContent.FDD_EM_UL1_TAS_RSCP_DIFF, true);
        int fieldValue6 = getFieldValue(msg, "EmUl1Tas." + MDMContent.FDD_EM_UL1_TAS_DAT_SCENARIO_INDEX, true);
        String strValueOf = fieldValue5 == -480 ? " " : String.valueOf(fieldValue5 / 4);
        int fieldValue7 = getFieldValue(msg, "EmUl1Tas." + MDMContent.FDD_EM_UL1_TAS_RSCP0, true);
        String strValueOf2 = fieldValue7 == -480 ? " " : String.valueOf(fieldValue7 / 4);
        int fieldValue8 = getFieldValue(msg, "EmUl1Tas." + MDMContent.FDD_EM_UL1_TAS_RSCP1, true);
        String strValueOf3 = fieldValue8 == -480 ? " " : String.valueOf(fieldValue8 / 4);
        int fieldValue9 = getFieldValue(msg, "EmUl1Tas." + MDMContent.FDD_EM_UL1_TAS_RSCP2, true);
        String strValueOf4 = fieldValue9 == -480 ? " " : String.valueOf(fieldValue9 / 4);
        int fieldValue10 = getFieldValue(msg, "EmUl1Tas.tx_pwr", true);
        String strValueOf5 = fieldValue10 == -128 ? " " : String.valueOf(fieldValue10);
        int fieldValue11 = getFieldValue(msg, "EmUl1Tas." + MDMContent.FDD_EM_UL1_TAS_DPCCH_TX_PWR, true);
        String strValueOf6 = fieldValue11 == -128 ? " " : String.valueOf(fieldValue11);
        StringBuilder sb = new StringBuilder();
        sb.append("EmUl1Tas.");
        sb.append(MDMContent.FDD_EM_UL1_TAS_VERISION);
        this.TasVersion = getFieldValue(msg, sb.toString(), true) == 2 ? 2 : 1;
        clearData();
        if (FeatureSupport.is93Modem()) {
            addData(tasEableMapping(fieldValue), servingBandMapping(fieldValue2), Integer.valueOf(fieldValue3));
        }
        if (this.TasVersion == 2) {
            addData(antidxMapping(fieldValue4), Integer.valueOf(fieldValue4), strValueOf, strValueOf2, strValueOf3, strValueOf4, strValueOf5, strValueOf6);
            i = 1;
        } else {
            i = 1;
            addData(antidxMapping(fieldValue4), Integer.valueOf(fieldValue4), strValueOf, strValueOf2, strValueOf3, strValueOf5, strValueOf6);
        }
        Object[] objArr = new Object[i];
        objArr[0] = Integer.valueOf(fieldValue6);
        addData(objArr);
        notifyDataSetChanged();
    }
}
