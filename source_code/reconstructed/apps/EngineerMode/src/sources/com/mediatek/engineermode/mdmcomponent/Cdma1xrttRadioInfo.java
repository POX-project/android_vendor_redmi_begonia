package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.mdml.Msg;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class Cdma1xrttRadioInfo extends NormalTableTasComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_RTT_RADIO_INFO_IND};
    protected static final String TAG = "EmInfo";
    HashMap<Integer, String> AntennaMapping;
    HashMap<Integer, String> TasEnableMapping;
    int TasVersionC2K;

    public Cdma1xrttRadioInfo(Activity activity) {
        super(activity);
        this.TasVersionC2K = 1;
        this.AntennaMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.Cdma1xrttRadioInfo.1
            {
                put(0, "LANT");
                put(1, "UANT");
                put(2, "LANT(')");
                put(3, "UANT");
                put(4, "-");
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.Cdma1xrttRadioInfo.2
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

    String bandClassMapping(int i) {
        if (i >= 0 && i <= 20) {
            return "BC" + i;
        }
        return "-(" + i + ")";
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
        return "7. CDMA EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        String[] strArr = {"Tas Enable Info"};
        return this.TasVersionC2K == 2 ? conbineLablesByModem(strArr, new String[]{"Channel", "bandClass", "Cur ant state", "pilotPN", "rxPower_LANT (dbm)", "rxPower_UANT (dbm)", "rxPower_LANT(') (dbm)", "tx_Ant", "FER"}, strArr.length) : conbineLablesByModem(strArr, new String[]{"Channel", "bandClass", "pilotPN", "rxPower_main(dbm)", "rxPower_div(dbm)", "txPower", "tx_Ant", "FER"}, strArr.length);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "1xRTT radio info(TAS info)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
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
        setInfoValid(getFieldValue(msg, MDMContent.C2K_L4_UTAS_ENABLE));
        if (isInfoValid()) {
            clearData();
            this.mAdapter.add(new String[]{"Use " + getName().replace("UTAS", "TAS")});
            return;
        }
        int fieldValue = getFieldValue(msg, "tas_enable");
        int fieldValue2 = getFieldValue(msg, MDMContent.C2K_L4_CHANNEL);
        int fieldValue3 = getFieldValue(msg, MDMContent.C2K_L4_BAND_CLASS);
        int fieldValue4 = getFieldValue(msg, MDMContent.C2K_L4_PILOT_PN_OFFSET);
        int fieldValue5 = getFieldValue(msg, MDMContent.C2K_L4_RX_POWER, true);
        int fieldValue6 = getFieldValue(msg, "div_rx_power", true);
        int fieldValue7 = getFieldValue(msg, "tx_power", true);
        int fieldValue8 = getFieldValue(msg, "tx_ant", true);
        int fieldValue9 = getFieldValue(msg, MDMContent.C2K_L4_FER);
        int fieldValue10 = getFieldValue(msg, MDMContent.C2K_L4_TAS_VER, true);
        if (fieldValue10 == 1) {
            this.TasVersionC2K = 1;
        } else {
            this.TasVersionC2K = 2;
        }
        Elog.d(TAG, "tas_ver = " + fieldValue10);
        int fieldValue11 = getFieldValue(msg, MDMContent.C2K_L4_TAS_STATE, true);
        int fieldValue12 = getFieldValue(msg, "rx_power_dbmL", true);
        int fieldValue13 = getFieldValue(msg, "rx_power_dbmU", true);
        int fieldValue14 = getFieldValue(msg, "rx_power_dbmLp", true);
        clearData();
        if (FeatureSupport.is93Modem()) {
            addData(tasEableMapping(fieldValue));
        }
        if (this.TasVersionC2K == 1) {
            addData(Integer.valueOf(fieldValue2));
            addData(bandClassMapping(fieldValue3));
            addData(Integer.valueOf(fieldValue4));
            Object[] objArr = new Object[1];
            objArr[0] = fieldValue5 == -150 ? "" : Integer.valueOf(fieldValue5);
            addData(objArr);
            Object[] objArr2 = new Object[1];
            objArr2[0] = fieldValue6 == -150 ? "" : Integer.valueOf(fieldValue6);
            addData(objArr2);
            Object[] objArr3 = new Object[1];
            objArr3[0] = fieldValue7 != -150 ? Integer.valueOf(fieldValue7) : "";
            addData(objArr3);
            addData(Integer.valueOf(fieldValue8));
            addData(Integer.valueOf(fieldValue9));
        } else {
            addData(Integer.valueOf(fieldValue2));
            addData(bandClassMapping(fieldValue3));
            addData(antidxMapping(fieldValue11));
            addData(Integer.valueOf(fieldValue4));
            Object[] objArr4 = new Object[1];
            objArr4[0] = fieldValue12 == -150 ? "" : Integer.valueOf(fieldValue12);
            addData(objArr4);
            Object[] objArr5 = new Object[1];
            objArr5[0] = fieldValue13 == -150 ? "" : Integer.valueOf(fieldValue13);
            addData(objArr5);
            Object[] objArr6 = new Object[1];
            objArr6[0] = fieldValue14 != -150 ? Integer.valueOf(fieldValue14) : "";
            addData(objArr6);
            addData(Integer.valueOf(fieldValue8));
            addData(Integer.valueOf(fieldValue9));
        }
        notifyDataSetChanged();
    }
}
