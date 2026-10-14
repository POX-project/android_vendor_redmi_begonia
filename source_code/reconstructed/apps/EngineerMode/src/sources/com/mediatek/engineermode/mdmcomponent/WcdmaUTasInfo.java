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
class WcdmaUTasInfo extends CombinationTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_UL1_TAS_INFO_IND, MDMContent.MSG_ID_FDD_EM_UL1_UTAS_INFO_IND};
    HashMap<Integer, String> CcmStateMapping;
    HashMap<Integer, String> RxSystemMapping;
    HashMap<Integer, String> TasEnableMapping;
    String[] labelsKey;
    List<String[]> labelsList;
    private String[] tabTitle;
    List<LinkedHashMap> valuesHashMap;

    public WcdmaUTasInfo(Activity activity) {
        super(activity);
        this.RxSystemMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.WcdmaUTasInfo.1
            {
                put(1, "OneRX");
                put(2, "TwoRX");
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.WcdmaUTasInfo.2
            {
                put(0, "DISABLE");
                put(1, "ENABLE");
            }
        };
        this.CcmStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.WcdmaUTasInfo.3
            {
                put(3, "PCH");
                put(4, "FACH");
                put(5, "DCH");
            }
        };
        this.labelsList = new ArrayList<String[]>() { // from class: com.mediatek.engineermode.mdmcomponent.WcdmaUTasInfo.4
            {
                add(new String[]{"TAS Enable Info", "Serving Band", "Current Ant State", "Previous Ant State", "Rx System", "RRC State"});
                add(new String[]{"TX Index", "RX Index"});
                add(new String[]{"ANT Index", "TX Pwr dBm", "Pwr Hdr DB", "RSCP dBm"});
            }
        };
        this.labelsKey = new String[]{"Tas Common", "TX Info", "ANT Info"};
        this.valuesHashMap = new ArrayList<LinkedHashMap>() { // from class: com.mediatek.engineermode.mdmcomponent.WcdmaUTasInfo.5
            {
                WcdmaUTasInfo wcdmaUTasInfo = WcdmaUTasInfo.this;
                add(wcdmaUTasInfo.initHashMap(wcdmaUTasInfo.labelsList.get(0)));
                WcdmaUTasInfo wcdmaUTasInfo2 = WcdmaUTasInfo.this;
                add(wcdmaUTasInfo2.initHashMap(wcdmaUTasInfo2.labelsList.get(1)));
                WcdmaUTasInfo wcdmaUTasInfo3 = WcdmaUTasInfo.this;
                add(wcdmaUTasInfo3.initArrayHashMap(wcdmaUTasInfo3.labelsList.get(2)));
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
        return "3. UMTS FDD EM Component";
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
        return "WCDMA UTAS Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationTableComponent
    boolean isLabelArrayType(String str) {
        return getArrayTypeKey().contains(str);
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
        return "-(" + i + ")";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        StringBuilder sb;
        StringBuilder sb2;
        String str2;
        String str3;
        StringBuilder sb3;
        StringBuilder sb4;
        StringBuilder sb5;
        String str4;
        String str5;
        int i;
        String str6;
        String str7;
        String str8;
        Msg msg = (Msg) obj;
        clearData();
        if (str.equals(MDMContent.MSG_ID_FDD_EM_UL1_TAS_INFO_IND)) {
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
        int fieldValue2 = getFieldValue(msg, "band");
        int fieldValue3 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_CURRENT_ANT_STATE);
        int fieldValue4 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_PREVIOUS_ANT_STATE);
        int fieldValue5 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_RX_SYSTEM);
        int fieldValue6 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_CCMSTATE);
        String str9 = this.labelsKey[0];
        String[] strArr = this.labelsList.get(0);
        String[] strArr2 = new String[6];
        strArr2[0] = tasEableMapping(fieldValue);
        strArr2[1] = servingBandMapping(fieldValue2);
        if (fieldValue3 < 0 || fieldValue3 > 23) {
            sb = new StringBuilder();
            sb.append("-(");
            sb.append(fieldValue3);
            sb.append(")");
        } else {
            sb = new StringBuilder();
            sb.append(fieldValue3);
            sb.append("");
        }
        strArr2[2] = sb.toString();
        if (fieldValue4 < 0 || fieldValue4 > 23) {
            sb2 = new StringBuilder();
            sb2.append("-(");
            sb2.append(fieldValue4);
            sb2.append(")");
        } else {
            sb2 = new StringBuilder();
            sb2.append(fieldValue4);
            sb2.append("");
        }
        strArr2[3] = sb2.toString();
        if (this.RxSystemMapping.containsKey(Integer.valueOf(fieldValue5))) {
            str2 = this.RxSystemMapping.get(Integer.valueOf(fieldValue5));
        } else {
            str2 = "-(" + fieldValue5 + ")";
        }
        strArr2[4] = str2;
        if (this.CcmStateMapping.containsKey(Integer.valueOf(fieldValue6))) {
            str3 = this.CcmStateMapping.get(Integer.valueOf(fieldValue6));
        } else {
            str3 = "-(" + fieldValue6 + ")";
        }
        strArr2[5] = str3;
        setHashMapKeyValues(str9, 0, strArr, strArr2);
        addData(this.labelsKey[0], 0);
        int fieldValue7 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_TX_INDEX);
        int fieldValue8 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_RX_INDEX);
        String str10 = this.labelsKey[1];
        String[] strArr3 = this.labelsList.get(1);
        String[] strArr4 = new String[2];
        if (fieldValue7 < 0 || fieldValue7 > 11) {
            sb3 = new StringBuilder();
            sb3.append("-(");
            sb3.append(fieldValue7);
            sb3.append(")");
        } else {
            sb3 = new StringBuilder();
            sb3.append(fieldValue7);
            sb3.append("");
        }
        strArr4[0] = sb3.toString();
        if (fieldValue5 <= 1 || fieldValue8 < 0 || fieldValue8 > 11) {
            sb4 = new StringBuilder();
            sb4.append("-(");
            sb4.append(fieldValue8);
            sb4.append(")");
        } else {
            sb4 = new StringBuilder();
            sb4.append(fieldValue8);
            sb4.append("");
        }
        strArr4[1] = sb4.toString();
        setHashMapKeyValues(str10, 1, strArr3, strArr4);
        addData(this.labelsKey[1], 1);
        int fieldValue9 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_TX_INDEX_TXP, true);
        int fieldValue10 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_RX_INDEX_TXP, true);
        int fieldValue11 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_TX_INDEX_PWRHDR, true);
        int fieldValue12 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_RX_INDEX_PWRHDR, true);
        int fieldValue13 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_TX_INDEX_RSCP, true);
        int fieldValue14 = getFieldValue(msg, MDMContent.FDD_EM_UL1_TAS_RX_INDEX_RSCP, true);
        String str11 = this.labelsKey[2];
        String[] strArr5 = this.labelsList.get(2);
        String[] strArr6 = new String[4];
        if (fieldValue7 < 0 || fieldValue7 > 11) {
            sb5 = new StringBuilder();
            sb5.append("-(");
            sb5.append(fieldValue7);
            sb5.append(")");
        } else {
            sb5 = new StringBuilder();
            sb5.append(fieldValue7);
            sb5.append("");
        }
        strArr6[0] = sb5.toString();
        if (fieldValue9 == -128) {
            str4 = "-";
        } else {
            str4 = fieldValue9 + "";
        }
        strArr6[1] = str4;
        if (fieldValue11 == -128) {
            str5 = "-";
        } else {
            str5 = fieldValue11 + "";
        }
        strArr6[2] = str5;
        strArr6[3] = fieldValue13 == -480 ? "-" : String.valueOf(fieldValue13);
        setHashMapKeyValues(str11, 1, strArr5, strArr6);
        if (fieldValue5 > 1) {
            String str12 = this.labelsKey[2];
            String[] strArr7 = this.labelsList.get(2);
            String[] strArr8 = new String[4];
            if (fieldValue8 < 0 || fieldValue8 > 11) {
                str6 = "-(" + fieldValue8 + ")";
            } else {
                str6 = fieldValue8 + "";
            }
            strArr8[0] = str6;
            if (fieldValue10 == -128) {
                str7 = "-";
            } else {
                str7 = fieldValue10 + "";
            }
            strArr8[1] = str7;
            if (fieldValue12 == -128) {
                str8 = "-";
            } else {
                str8 = fieldValue12 + "";
            }
            strArr8[2] = str8;
            strArr8[3] = fieldValue14 != -480 ? String.valueOf(fieldValue14) : "-";
            i = 1;
            setHashMapKeyValues(str12, 1, strArr7, strArr8);
        } else {
            i = 1;
        }
        addData(this.labelsKey[2], i);
    }
}
