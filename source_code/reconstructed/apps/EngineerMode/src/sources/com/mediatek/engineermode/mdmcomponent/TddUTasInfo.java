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
class TddUTasInfo extends CombinationTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_TDD_TAS_INFO_IND};
    HashMap<Integer, String> ServingBandMapping;
    HashMap<Integer, String> TasEnableMapping;
    String[] labelsKey;
    List<String[]> labelsList;
    private String[] tabTitle;
    List<LinkedHashMap> valuesHashMap;

    public TddUTasInfo(Activity activity) {
        super(activity);
        this.ServingBandMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.TddUTasInfo.1
            {
                put(0, "B34");
                put(1, "B39");
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.TddUTasInfo.2
            {
                put(0, "DISABLE");
                put(1, "ENABLE");
            }
        };
        this.labelsList = new ArrayList<String[]>() { // from class: com.mediatek.engineermode.mdmcomponent.TddUTasInfo.3
            {
                add(new String[]{"TAS Enable Info", "Force TX Enable", "Force Ant State", "Current Ant State"});
                add(new String[]{"Current Band", "Main Index"});
                add(new String[]{"ANT Index", "TX Pwr dBm", "SINR dB", "RSCP dBm"});
            }
        };
        this.labelsKey = new String[]{"Tas Common", "Main Info", "ANT Info"};
        this.valuesHashMap = new ArrayList<LinkedHashMap>() { // from class: com.mediatek.engineermode.mdmcomponent.TddUTasInfo.4
            {
                TddUTasInfo tddUTasInfo = TddUTasInfo.this;
                add(tddUTasInfo.initHashMap(tddUTasInfo.labelsList.get(0)));
                TddUTasInfo tddUTasInfo2 = TddUTasInfo.this;
                add(tddUTasInfo2.initHashMap(tddUTasInfo2.labelsList.get(1)));
                TddUTasInfo tddUTasInfo3 = TddUTasInfo.this;
                add(tddUTasInfo3.initArrayHashMap(tddUTasInfo3.labelsList.get(2)));
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
        return "4. UMTS TDD EM Component";
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
        return "TDD UTAS Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationTableComponent
    boolean isLabelArrayType(String str) {
        return getArrayTypeKey().contains(str);
    }

    String servingBandMapping(int i) {
        if (this.ServingBandMapping.containsKey(Integer.valueOf(i))) {
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
        return "-(" + i + ")";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        StringBuilder sb;
        String str2;
        StringBuilder sb2;
        StringBuilder sb3;
        String string;
        StringBuilder sb4;
        StringBuilder sb5;
        StringBuilder sb6;
        Msg msg = (Msg) obj;
        clearData();
        setInfoValid((getFieldValue(msg, "cur_ant_state") >> 8) == 3 ? 1 : 0);
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
        int fieldValue = getFieldValue(msg, "tas_enable_info");
        int fieldValue2 = getFieldValue(msg, MDMContent.TDD_FORCE_TX_EN);
        int fieldValue3 = getFieldValue(msg, "force_ant_state");
        int fieldValue4 = getFieldValue(msg, "cur_ant_state") & 255;
        String str3 = this.labelsKey[0];
        String[] strArr = this.labelsList.get(0);
        String[] strArr2 = new String[4];
        strArr2[0] = tasEableMapping(fieldValue);
        strArr2[1] = tasEableMapping(fieldValue2);
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
            str2 = "-(" + fieldValue4 + ")";
        } else {
            str2 = fieldValue4 + "";
        }
        strArr2[3] = str2;
        setHashMapKeyValues(str3, 0, strArr, strArr2);
        int fieldValue5 = getFieldValue(msg, "current_serving_band");
        int fieldValue6 = getFieldValue(msg, MDMContent.TDD_CUR_ANT_INDEX);
        int i = fieldValue6 >> 8;
        int i2 = fieldValue6 & 255;
        String str4 = this.labelsKey[1];
        String[] strArr3 = this.labelsList.get(1);
        String[] strArr4 = new String[2];
        strArr4[0] = servingBandMapping(fieldValue5);
        if (i2 < 0 || i2 > 7) {
            sb2 = new StringBuilder();
            sb2.append("-(");
            sb2.append(i2);
            sb2.append(")");
        } else {
            sb2 = new StringBuilder();
            sb2.append(i2);
            sb2.append("");
        }
        strArr4[1] = sb2.toString();
        setHashMapKeyValues(str4, 1, strArr3, strArr4);
        String str5 = fieldValue5 == 1 ? MDMContent.TDD_B39_AVAILABLE_ANT_NUM : MDMContent.TDD_B34_AVAILABLE_ANT_NUM;
        int fieldValue7 = getFieldValue(msg, str5);
        String str6 = fieldValue5 == 1 ? MDMContent.TDD_B39_AVAILABLE_ANT : MDMContent.TDD_B34_AVAILABLE_ANT;
        int i3 = 0;
        while (i3 < fieldValue7) {
            StringBuilder sb7 = new StringBuilder();
            sb7.append(str6);
            String str7 = str5;
            sb7.append("[");
            sb7.append(i3);
            sb7.append("]");
            int fieldValue8 = getFieldValue(msg, sb7.toString());
            int i4 = fieldValue7;
            StringBuilder sb8 = new StringBuilder();
            String str8 = str6;
            sb8.append("tx_power[");
            sb8.append(i3);
            sb8.append("]");
            int fieldValue9 = getFieldValue(msg, sb8.toString(), true);
            StringBuilder sb9 = new StringBuilder();
            int i5 = fieldValue3;
            sb9.append("ant_sinr[");
            sb9.append(i3);
            sb9.append("]");
            int fieldValue10 = getFieldValue(msg, sb9.toString(), true);
            StringBuilder sb10 = new StringBuilder();
            int i6 = fieldValue4;
            sb10.append("ant_rscp[");
            sb10.append(i3);
            sb10.append("]");
            int fieldValue11 = getFieldValue(msg, sb10.toString(), true);
            String str9 = this.labelsKey[2];
            Msg msg2 = msg;
            String[] strArr5 = this.labelsList.get(2);
            int i7 = fieldValue5;
            String[] strArr6 = new String[4];
            if (fieldValue8 > 7 || fieldValue8 < 0) {
                sb3 = new StringBuilder();
                sb3.append("-(");
                sb3.append(fieldValue8);
                sb3.append(")");
            } else {
                sb3 = new StringBuilder();
                sb3.append(fieldValue8);
                sb3.append("");
            }
            strArr6[0] = sb3.toString();
            if (i3 == i) {
                if (fieldValue9 > 32 || fieldValue9 < -50) {
                    sb6 = new StringBuilder();
                    sb6.append("-(");
                    sb6.append(fieldValue9);
                    sb6.append(")");
                } else {
                    sb6 = new StringBuilder();
                    sb6.append(fieldValue9);
                    sb6.append("");
                }
                string = sb6.toString();
            } else {
                string = "";
            }
            strArr6[1] = string;
            if (fieldValue10 > 32 || fieldValue10 < -50) {
                sb4 = new StringBuilder();
                sb4.append("-(");
                sb4.append(fieldValue10);
                sb4.append(")");
            } else {
                sb4 = new StringBuilder();
                sb4.append(fieldValue10);
                sb4.append("");
            }
            strArr6[2] = sb4.toString();
            if (fieldValue11 > -40 || fieldValue11 < -140) {
                sb5 = new StringBuilder();
                sb5.append("-(");
                sb5.append(fieldValue11);
                sb5.append(")");
            } else {
                sb5 = new StringBuilder();
                sb5.append(fieldValue11);
                sb5.append("");
            }
            strArr6[3] = sb5.toString();
            setHashMapKeyValues(str9, 1, strArr5, strArr6);
            i3++;
            fieldValue5 = i7;
            str5 = str7;
            fieldValue7 = i4;
            str6 = str8;
            fieldValue3 = i5;
            fieldValue4 = i6;
            msg = msg2;
        }
        addData(this.labelsKey[0], 0);
        addData(this.labelsKey[1], 1);
        addData(this.labelsKey[2], 1);
    }
}
