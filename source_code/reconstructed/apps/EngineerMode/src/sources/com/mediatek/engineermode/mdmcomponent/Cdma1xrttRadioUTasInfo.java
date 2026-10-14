package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.widget.AbsListView;
import android.widget.TextView;
import com.mediatek.mdml.Msg;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class Cdma1xrttRadioUTasInfo extends CombinationTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_RTT_RADIO_INFO_IND};
    HashMap<Integer, String> ServingBandMapping;
    HashMap<Integer, String> TasEnableMapping;
    String[] labelsKey;
    List<String[]> labelsList;
    private String[] tabTitle;
    List<LinkedHashMap> valuesHashMap;

    public Cdma1xrttRadioUTasInfo(Activity activity) {
        super(activity);
        this.ServingBandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.Cdma1xrttRadioUTasInfo.1
            {
                put(0, "B34");
                put(1, "B39");
                put(5, "-");
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.Cdma1xrttRadioUTasInfo.2
            {
                put(0, "DISABLE");
                put(1, "ENABLE");
                put(2, "-");
            }
        };
        this.tabTitle = new String[]{"Common", "Detail"};
        this.labelsList = new ArrayList<String[]>() { // from class: com.mediatek.engineermode.mdmcomponent.Cdma1xrttRadioUTasInfo.3
            {
                add(new String[]{"TAS_EN", "TAS Version", "BandClass", "Channel", "PilotPN", "FER"});
                add(new String[]{"Cur Ant State", "TX Ant"});
                add(new String[]{"ANT Index", "RxPower(dBm)", "TxPower(dBm)", "PHR(dB)"});
            }
        };
        this.labelsKey = new String[]{"Tas Common", "Main Info", "ANT Info"};
        this.valuesHashMap = new ArrayList<LinkedHashMap>() { // from class: com.mediatek.engineermode.mdmcomponent.Cdma1xrttRadioUTasInfo.4
            {
                Cdma1xrttRadioUTasInfo cdma1xrttRadioUTasInfo = Cdma1xrttRadioUTasInfo.this;
                add(cdma1xrttRadioUTasInfo.initHashMap(cdma1xrttRadioUTasInfo.labelsList.get(0)));
                Cdma1xrttRadioUTasInfo cdma1xrttRadioUTasInfo2 = Cdma1xrttRadioUTasInfo.this;
                add(cdma1xrttRadioUTasInfo2.initHashMap(cdma1xrttRadioUTasInfo2.labelsList.get(1)));
                Cdma1xrttRadioUTasInfo cdma1xrttRadioUTasInfo3 = Cdma1xrttRadioUTasInfo.this;
                add(cdma1xrttRadioUTasInfo3.initArrayHashMap(cdma1xrttRadioUTasInfo3.labelsList.get(2)));
            }
        };
        initTableComponent(this.tabTitle);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationTableComponent
    ArrayList<String> getArrayTypeKey() {
        ArrayList<String> arrayList = new ArrayList<>();
        arrayList.add(this.labelsKey[2]);
        return arrayList;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "7. CDMA EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationTableComponent
    LinkedHashMap<String, LinkedHashMap> getHashMapLabels(int i) {
        LinkedHashMap<String, LinkedHashMap> linkedHashMap = new LinkedHashMap<>();
        if (i == 0) {
            linkedHashMap.put(this.labelsKey[0], this.valuesHashMap.get(0));
        } else if (i == 1) {
            linkedHashMap.put(this.labelsKey[1], this.valuesHashMap.get(1));
            linkedHashMap.put(this.labelsKey[2], this.valuesHashMap.get(2));
        }
        return linkedHashMap;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "1xRTT radio info(UTAS info)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationTableComponent
    boolean isLabelArrayType(String str) {
        return getArrayTypeKey().contains(str);
    }

    String servingBandMapping(int i) {
        return this.ServingBandMapping.containsKey(Integer.valueOf(i)) ? this.ServingBandMapping.get(Integer.valueOf(i)) : " ";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    String tasEableMapping(int i) {
        return (i < 0 || i > 1) ? " " : this.TasEnableMapping.get(Integer.valueOf(i));
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2;
        String str3;
        StringBuilder sb;
        StringBuilder sb2;
        StringBuilder sb3;
        StringBuilder sb4;
        Msg msg = (Msg) obj;
        clearData();
        setInfoValid(getFieldValue(msg, MDMContent.C2K_L4_UTAS_ENABLE));
        if (!isInfoValid()) {
            resetView();
            TextView textView = new TextView(this.mContext);
            textView.setLayoutParams(new AbsListView.LayoutParams(-1, -2));
            textView.setPadding(20, 0, 20, 0);
            textView.setText("Use " + getName().replace("UTAS", "TAS"));
            textView.setTextSize(16.0f);
            this.scrollView.addView(textView);
            return;
        }
        int fieldValue = getFieldValue(msg, "tas_enable");
        int fieldValue2 = getFieldValue(msg, MDMContent.C2K_L4_TAS_VER);
        int fieldValue3 = getFieldValue(msg, MDMContent.C2K_L4_BAND_CLASS);
        int fieldValue4 = getFieldValue(msg, MDMContent.C2K_L4_CHANNEL);
        int fieldValue5 = getFieldValue(msg, MDMContent.C2K_L4_PILOT_PN_OFFSET);
        int fieldValue6 = getFieldValue(msg, MDMContent.C2K_L4_FER);
        String str4 = this.labelsKey[0];
        String[] strArr = this.labelsList.get(0);
        String[] strArr2 = new String[6];
        strArr2[0] = tasEableMapping(fieldValue);
        if (fieldValue2 < 1 || fieldValue2 > 3) {
            str2 = "-(" + fieldValue2 + ")";
        } else {
            str2 = fieldValue2 + ".0";
        }
        strArr2[1] = str2;
        strArr2[2] = fieldValue3 + "";
        strArr2[3] = fieldValue4 + "";
        strArr2[4] = fieldValue5 + "";
        strArr2[5] = fieldValue6 + "";
        setHashMapKeyValues(str4, 0, strArr, strArr2);
        int fieldValue7 = getFieldValue(msg, MDMContent.C2K_L4_TAS_STATE);
        int fieldValue8 = getFieldValue(msg, "tx_ant");
        String str5 = this.labelsKey[1];
        String[] strArr3 = this.labelsList.get(1);
        String[] strArr4 = new String[2];
        if (fieldValue7 >= 0) {
            str3 = "State" + fieldValue7;
        } else {
            str3 = "-(" + fieldValue7 + ")";
        }
        strArr4[0] = str3;
        if (fieldValue8 < 0 || fieldValue8 > 4) {
            sb = new StringBuilder();
            sb.append("-(");
            sb.append(fieldValue8);
            sb.append(")");
        } else {
            sb = new StringBuilder();
            sb.append(fieldValue8);
            sb.append("");
        }
        strArr4[1] = sb.toString();
        setHashMapKeyValues(str5, 1, strArr3, strArr4);
        String str6 = MDMContent.C2K_L4_EM_C2K_L4_RTT_ANT_INFO;
        int i = 0;
        while (i < 8) {
            StringBuilder sb5 = new StringBuilder();
            sb5.append(str6);
            sb5.append("[");
            sb5.append(i);
            sb5.append("].");
            int i2 = fieldValue7;
            sb5.append("valid");
            if (getFieldValue(msg, sb5.toString()) != 0) {
                int fieldValue9 = getFieldValue(msg, str6 + "[" + i + "]." + MDMContent.C2K_L4_RX_POWER, true);
                int fieldValue10 = getFieldValue(msg, str6 + "[" + i + "].tx_power", true);
                int fieldValue11 = getFieldValue(msg, str6 + "[" + i + "]." + MDMContent.C2K_L4_PHR, true);
                String str7 = this.labelsKey[2];
                String[] strArr5 = this.labelsList.get(2);
                String[] strArr6 = new String[4];
                strArr6[0] = i + "";
                if (fieldValue9 > -35 || fieldValue9 < -110) {
                    sb2 = new StringBuilder();
                    sb2.append("-(");
                    sb2.append(fieldValue9);
                    sb2.append(")");
                } else {
                    sb2 = new StringBuilder();
                    sb2.append(fieldValue9);
                    sb2.append("");
                }
                strArr6[1] = sb2.toString();
                if (fieldValue10 > 24 || fieldValue10 < -60) {
                    sb3 = new StringBuilder();
                    sb3.append("-(");
                    sb3.append(fieldValue10);
                    sb3.append(")");
                } else {
                    sb3 = new StringBuilder();
                    sb3.append(fieldValue10);
                    sb3.append("");
                }
                strArr6[2] = sb3.toString();
                if (fieldValue11 > 85 || fieldValue11 < -50) {
                    sb4 = new StringBuilder();
                    sb4.append("-(");
                    sb4.append(fieldValue11);
                    sb4.append(")");
                } else {
                    sb4 = new StringBuilder();
                    sb4.append(fieldValue11);
                    sb4.append("");
                }
                strArr6[3] = sb4.toString();
                setHashMapKeyValues(str7, 1, strArr5, strArr6);
            }
            i++;
            str6 = str6;
            fieldValue7 = i2;
            fieldValue8 = fieldValue8;
            msg = msg;
        }
        addData(this.labelsKey[0], 0);
        addData(this.labelsKey[1], 1);
        addData(this.labelsKey[2], 1);
    }
}
