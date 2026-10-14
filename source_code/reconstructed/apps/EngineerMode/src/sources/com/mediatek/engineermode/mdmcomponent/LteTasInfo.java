package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class LteTasInfo extends NormalTableTasComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EL1_STATUS_IND};
    HashMap<Integer, String> AntennaMapping;
    HashMap<Integer, String> TasEnableMapping;
    int TasVersion;

    public LteTasInfo(Activity activity) {
        super(activity);
        this.TasVersion = 1;
        this.AntennaMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.LteTasInfo.1
            {
                put(0, "LANT");
                put(1, "UANT");
                put(2, "LANT(')");
                put(3, "UANT");
                put(4, "-");
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.LteTasInfo.2
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
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        String[] strArr = {"TX Antenna", "RSRP_LANT", "RSRP_UANT", "TX Power"};
        String[] strArr2 = {"TX Antenna", "RSRP_LANT", "RSRP_UANT", "RSRP_LANT(')", "TX Power"};
        String[] strArr3 = {"CC0 TX Antenna", "CC0 RSRP_LANT", "CC0 RSRP_UANT", "CC1 TX Antenna", "CC1 RSRP_LANT", "CC1 RSRP_UANT", "TX Power"};
        String[] strArr4 = {"CC0 TX Antenna", "CC0 RSRP_LANT", "CC0 RSRP_UANT", "CC0 RSRP_LANT(')", "CC1 TX Antenna", "CC1 RSRP_LANT", "CC1 RSRP_UANT", "CC1 RSRP_LANT(')", "TX Power"};
        String[] strArr5 = {"TAS Enable Info", "Serving Band"};
        String[] strArr6 = {"CC1 Serving Band"};
        String[] strArr7 = {"DAT Index"};
        int i = this.TasVersion;
        if (i == 1) {
            return (String[]) concatAll(conbineLablesByModem(strArr5, strArr, strArr5.length), strArr7);
        }
        if (i == 2) {
            return (String[]) concatAll(conbineLablesByModem(strArr5, strArr2, strArr5.length), strArr7);
        }
        if (i == 3) {
            return (String[]) concatAll(conbineLablesByModem(strArr6, conbineLablesByModem(strArr5, strArr3, strArr5.length), -5), strArr7);
        }
        return i == 4 ? (String[]) concatAll(conbineLablesByModem(strArr6, conbineLablesByModem(strArr5, strArr4, strArr5.length), -6), strArr7) : (String[]) concatAll(conbineLablesByModem(strArr5, strArr, strArr5.length), strArr7);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE TAS Info";
    }

    String rscpCheck(int i) {
        return i == -255 ? " " : String.valueOf(i);
    }

    String servingBandMapping(int i) {
        if (i == 0) {
            return "INVALID";
        }
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
        int fieldValue;
        int i2;
        int i3;
        Msg msg = (Msg) obj;
        int fieldValue2 = getFieldValue(msg, MDMContent.DL_CC_COUNT);
        int fieldValue3 = getFieldValue(msg, MDMContent.UL_CC_COUNT);
        setInfoValid(getFieldValue(msg, "ul_info[0].utas_info_valid"));
        if (isInfoValid()) {
            clearData();
            this.mAdapter.add(new String[]{"Use " + getName().replace("UTAS", "TAS")});
            return;
        }
        int fieldValue4 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_VERISION);
        this.TasVersion = fieldValue4;
        this.TasVersion = fieldValue4 == 0 ? 1 : 2;
        Elog.d("EmInfo/MDMComponent", "dl_cc_count= " + fieldValue2);
        Elog.d("EmInfo/MDMComponent", "ul_cc_count= " + fieldValue3);
        Elog.d("EmInfo/MDMComponent", "TasVersion= " + this.TasVersion);
        int fieldValue5 = getFieldValue(msg, "ul_info[0].tx_ant_type", true);
        int fieldValue6 = getFieldValue(msg, "ul_info[0].rsrp_l_ant", true);
        int fieldValue7 = getFieldValue(msg, "ul_info[0].rsrp_u_ant", true);
        int fieldValue8 = getFieldValue(msg, "ul_info[0].rsrp_l_ant_a", true);
        int fieldValue9 = getFieldValue(msg, "ul_info[0].tx_power", true);
        int fieldValue10 = getFieldValue(msg, "ul_info[1].tx_ant_type", true);
        getFieldValue(msg, "ul_info[1].rsrp_l_ant", true);
        int fieldValue11 = getFieldValue(msg, "ul_info[1].rsrp_u_ant", true);
        int fieldValue12 = getFieldValue(msg, "ul_info[1].rsrp_l_ant_a", true);
        int fieldValue13 = getFieldValue(msg, "ul_info[0].el1_dat_scenario_index", true);
        if (FeatureSupport.is93Modem()) {
            int fieldValue14 = getFieldValue(msg, "ul_info[0].tas_status");
            int fieldValue15 = getFieldValue(msg, "cell_info[0].band", true);
            fieldValue = getFieldValue(msg, "cell_info[1].band", true);
            i = fieldValue14;
            i2 = fieldValue15;
        } else {
            i = 0;
            fieldValue = 0;
            i2 = 0;
        }
        clearData();
        if (fieldValue2 == 0) {
            this.TasVersion = 1;
            addData("", "", "", "", "", "");
            addData("");
            return;
        }
        if (fieldValue2 == 1 && fieldValue3 == 0 && this.TasVersion == 1) {
            addData("", "", "", rscpCheck(fieldValue6), rscpCheck(fieldValue7), "");
            addData(Integer.valueOf(fieldValue13));
            return;
        }
        if (fieldValue2 >= 1 && fieldValue3 == 1 && this.TasVersion == 1) {
            if (FeatureSupport.is93Modem()) {
                addData(tasEableMapping(i), servingBandMapping(i2));
            }
            addData(antidxMapping(fieldValue5), rscpCheck(fieldValue6), rscpCheck(fieldValue7), Integer.valueOf(fieldValue9));
            addData(Integer.valueOf(fieldValue13));
            return;
        }
        int i4 = i2;
        if (fieldValue2 == 1 && fieldValue3 == 0) {
            if (this.TasVersion == 2) {
                addData("", "", "", rscpCheck(fieldValue6), rscpCheck(fieldValue7), rscpCheck(fieldValue8), "");
                addData(Integer.valueOf(fieldValue13));
                return;
            }
        }
        if (fieldValue2 >= 1 && fieldValue3 == 1 && this.TasVersion == 2) {
            if (FeatureSupport.is93Modem()) {
                i3 = 1;
                addData(tasEableMapping(i), servingBandMapping(i4));
            } else {
                i3 = 1;
            }
            Object[] objArr = new Object[5];
            objArr[0] = antidxMapping(fieldValue5);
            objArr[i3] = rscpCheck(fieldValue6);
            objArr[2] = rscpCheck(fieldValue7);
            objArr[3] = rscpCheck(fieldValue8);
            objArr[4] = Integer.valueOf(fieldValue9);
            addData(objArr);
            Object[] objArr2 = new Object[i3];
            objArr2[0] = Integer.valueOf(fieldValue13);
            addData(objArr2);
            return;
        }
        if (fieldValue2 > 1 && fieldValue3 == 2 && this.TasVersion == 1) {
            this.TasVersion = 3;
            if (FeatureSupport.is93Modem()) {
                addData(tasEableMapping(i), servingBandMapping(i4), antidxMapping(fieldValue5), rscpCheck(fieldValue6), rscpCheck(fieldValue7), servingBandMapping(fieldValue), antidxMapping(fieldValue10), rscpCheck(fieldValue12), rscpCheck(fieldValue11), Integer.valueOf(fieldValue9));
                addData(Integer.valueOf(fieldValue13));
                return;
            } else {
                addData(antidxMapping(fieldValue5), rscpCheck(fieldValue6), rscpCheck(fieldValue7), antidxMapping(fieldValue10), rscpCheck(fieldValue12), rscpCheck(fieldValue11), Integer.valueOf(fieldValue9));
                addData(Integer.valueOf(fieldValue13));
                return;
            }
        }
        int i5 = fieldValue;
        if (fieldValue2 <= 1 || fieldValue3 != 2) {
            return;
        }
        if (this.TasVersion == 2) {
            this.TasVersion = 4;
            if (FeatureSupport.is93Modem()) {
                addData(tasEableMapping(i), servingBandMapping(i4), antidxMapping(fieldValue5), rscpCheck(fieldValue6), rscpCheck(fieldValue7), rscpCheck(fieldValue8), servingBandMapping(i5), antidxMapping(fieldValue10), rscpCheck(fieldValue12), rscpCheck(fieldValue11), rscpCheck(0), Integer.valueOf(fieldValue9));
                addData(Integer.valueOf(fieldValue13));
            } else {
                addData(antidxMapping(fieldValue5), rscpCheck(fieldValue6), rscpCheck(fieldValue7), rscpCheck(fieldValue8), antidxMapping(fieldValue10), rscpCheck(fieldValue12), rscpCheck(fieldValue11), rscpCheck(0), Integer.valueOf(fieldValue9));
                addData(Integer.valueOf(fieldValue13));
            }
        }
    }
}
