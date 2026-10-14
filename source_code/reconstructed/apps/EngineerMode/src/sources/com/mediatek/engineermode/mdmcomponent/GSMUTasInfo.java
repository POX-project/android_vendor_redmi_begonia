package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.widget.AbsListView;
import android.widget.TextView;
import com.mediatek.mdml.Msg;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class GSMUTasInfo extends CombinationTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_GSM_TAS_INFO_IND, MDMContent.MSG_ID_EM_GSM_UTAS_INFO_IND};
    HashMap<Integer, String> ServingBandMapping;
    HashMap<Integer, String> TasEnableMapping;
    String[] labelsKey;
    List<String[]> labelsList;
    private String[] tabTitle;
    List<LinkedHashMap> valuesHashMap;

    public GSMUTasInfo(Activity activity) {
        super(activity);
        this.ServingBandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.GSMUTasInfo.1
            {
                put(1, "Band 850");
                put(2, "Band 900");
                put(3, "Band 1800");
                put(4, "Band 1900");
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.GSMUTasInfo.2
            {
                put(0, "DISABLE");
                put(1, "ENABLE");
            }
        };
        this.labelsList = new ArrayList<String[]>() { // from class: com.mediatek.engineermode.mdmcomponent.GSMUTasInfo.3
            {
                add(new String[]{"TAS Enable Info", "Serving Band", "Cur ant state", "Current Primary RxLev", "Current Diversity RxLev", "Current SNR", "Tx Power Detect"});
                add(new String[]{"TX Index"});
                add(new String[]{"ANT Index", "TX Pwr dBm", "SNR", "RSSI dBm"});
            }
        };
        this.labelsKey = new String[]{"Tas Common", "TX Info", "ANT Info"};
        this.valuesHashMap = new ArrayList<LinkedHashMap>() { // from class: com.mediatek.engineermode.mdmcomponent.GSMUTasInfo.4
            {
                GSMUTasInfo gSMUTasInfo = GSMUTasInfo.this;
                add(gSMUTasInfo.initHashMap(gSMUTasInfo.labelsList.get(0)));
                GSMUTasInfo gSMUTasInfo2 = GSMUTasInfo.this;
                add(gSMUTasInfo2.initHashMap(gSMUTasInfo2.labelsList.get(1)));
                GSMUTasInfo gSMUTasInfo3 = GSMUTasInfo.this;
                add(gSMUTasInfo3.initArrayHashMap(gSMUTasInfo3.labelsList.get(2)));
            }
        };
        String[] strArr = {"Common", "Detail"};
        this.tabTitle = strArr;
        initTableComponent(strArr);
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
        return "2. GSM EM Component";
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
        return "GSM UTAS Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationTableComponent
    boolean isLabelArrayType(String str) {
        return getArrayTypeKey().contains(str);
    }

    String servingBandMapping(int i) {
        if (i >= 1 && i <= 4) {
            return this.ServingBandMapping.get(Integer.valueOf(i));
        }
        return "-(" + i + ")";
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
        StringBuilder sb;
        StringBuilder sb2;
        String str2;
        String str3;
        StringBuilder sb3;
        String str4;
        String str5;
        Msg msg = (Msg) obj;
        clearData();
        if (str.equals(MDMContent.MSG_ID_EM_GSM_TAS_INFO_IND)) {
            setInfoValid(0);
        } else {
            setInfoValid(1);
        }
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
        int fieldValue2 = getFieldValue(msg, MDMContent.GSM_SERVING_BAND);
        int fieldValue3 = getFieldValue(msg, MDMContent.GSM_TX_ANTENNA_RXLEVEL, true);
        int fieldValue4 = getFieldValue(msg, MDMContent.GSM_DRX_ANTENNA_RXLEVEL, true);
        int fieldValue5 = getFieldValue(msg, MDMContent.GSM_CURRENT_AVERAGE_SNR, true);
        int fieldValue6 = getFieldValue(msg, MDMContent.GSM_ANTENNA_STATE);
        int fieldValue7 = getFieldValue(msg, MDMContent.GSM_TXPOWER_DET, true);
        String str6 = this.labelsKey[0];
        String[] strArr = this.labelsList.get(0);
        String[] strArr2 = new String[7];
        strArr2[0] = tasEableMapping(fieldValue);
        strArr2[1] = servingBandMapping(fieldValue2);
        if (fieldValue6 < 0 || fieldValue6 > 23) {
            sb = new StringBuilder();
            sb.append("-(");
            sb.append(fieldValue6);
            sb.append(")");
        } else {
            sb = new StringBuilder();
            sb.append(fieldValue6);
            sb.append("");
        }
        strArr2[2] = sb.toString();
        strArr2[3] = fieldValue3 + "dBm";
        if (fieldValue4 == -1) {
            sb2 = new StringBuilder();
            sb2.append("-(");
            sb2.append(fieldValue4);
            sb2.append(")");
        } else {
            sb2 = new StringBuilder();
            sb2.append(fieldValue4);
            sb2.append("dBm");
        }
        strArr2[4] = sb2.toString();
        strArr2[5] = fieldValue5 + "";
        if (fieldValue7 >= 0) {
            str2 = fieldValue7 + "dBm";
        } else {
            str2 = "";
        }
        strArr2[6] = str2;
        setHashMapKeyValues(str6, 0, strArr, strArr2);
        addData(this.labelsKey[0], 0);
        int fieldValue8 = getFieldValue(msg, MDMContent.GSM_TX_ANT_INDEX);
        String str7 = this.labelsKey[1];
        String[] strArr3 = this.labelsList.get(1);
        String[] strArr4 = new String[1];
        if (fieldValue8 < 1 || fieldValue8 > 14) {
            str3 = "-(" + fieldValue8 + ")";
        } else {
            str3 = fieldValue8 + "";
        }
        strArr4[0] = str3;
        setHashMapKeyValues(str7, 1, strArr3, strArr4);
        addData(this.labelsKey[1], 1);
        int fieldValue9 = getFieldValue(msg, MDMContent.GSM_AVAILABLE_ANT_NUM);
        int i = 0;
        while (i < fieldValue9 && i <= 5) {
            int fieldValue10 = getFieldValue(msg, "gsm_available_ant[" + i + "]");
            StringBuilder sb4 = new StringBuilder();
            int i2 = fieldValue8;
            sb4.append("gsm_antenna_rxLevel[");
            sb4.append(i);
            sb4.append("]");
            int fieldValue11 = getFieldValue(msg, sb4.toString(), true);
            StringBuilder sb5 = new StringBuilder();
            int i3 = fieldValue9;
            sb5.append("gsm_snr[");
            sb5.append(i);
            sb5.append("]");
            int fieldValue12 = getFieldValue(msg, sb5.toString(), true);
            StringBuilder sb6 = new StringBuilder();
            int i4 = fieldValue4;
            sb6.append("gsm_txpower[");
            sb6.append(i);
            sb6.append("]");
            int fieldValue13 = getFieldValue(msg, sb6.toString(), true);
            String str8 = this.labelsKey[2];
            Msg msg2 = msg;
            String[] strArr5 = this.labelsList.get(2);
            int i5 = fieldValue5;
            String[] strArr6 = new String[4];
            if (fieldValue10 < 1 || fieldValue10 > 14) {
                sb3 = new StringBuilder();
                sb3.append("-(");
                sb3.append(fieldValue10);
                sb3.append(")");
            } else {
                sb3 = new StringBuilder();
                sb3.append(fieldValue10);
                sb3.append("");
            }
            strArr6[0] = sb3.toString();
            if (fieldValue13 >= 0) {
                str4 = fieldValue13 + "dBm";
            } else {
                str4 = "";
            }
            strArr6[1] = str4;
            strArr6[2] = fieldValue12 + "";
            if (fieldValue11 <= 0) {
                str5 = fieldValue11 + "dBm";
            } else {
                str5 = "";
            }
            strArr6[3] = str5;
            setHashMapKeyValues(str8, 1, strArr5, strArr6);
            i++;
            fieldValue5 = i5;
            fieldValue8 = i2;
            fieldValue9 = i3;
            fieldValue4 = i4;
            msg = msg2;
        }
        addData(this.labelsKey[2], 1);
    }
}
