package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class LteUTasInfo extends CombinationTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_EL1_STATUS_IND};
    HashMap<Integer, String> RRCStateMapping;
    HashMap<Integer, String> TasEnableMapping;
    String[] labelKeys;
    List<String[]> labelsList;
    private String[] tabTitle;
    List<LinkedHashMap> valuesHashMap;

    public LteUTasInfo(Activity activity) {
        super(activity);
        this.labelsList = new ArrayList<String[]>() { // from class: com.mediatek.engineermode.mdmcomponent.LteUTasInfo.1
            {
                add(new String[]{"TAS Enable", "Switch state", "TX Power", "RRC status"});
                add(new String[]{"Band", "TX Index"});
                add(new String[]{"ANT Index", "TX Pwr dBm", "PHR dB", "RSRP dBm"});
            }
        };
        this.labelKeys = new String[]{"Tas Common", "Cell Info", "UL Info"};
        this.valuesHashMap = new ArrayList<LinkedHashMap>() { // from class: com.mediatek.engineermode.mdmcomponent.LteUTasInfo.2
            {
                LteUTasInfo lteUTasInfo = LteUTasInfo.this;
                add(lteUTasInfo.initHashMap(lteUTasInfo.labelsList.get(0)));
                LteUTasInfo lteUTasInfo2 = LteUTasInfo.this;
                add(lteUTasInfo2.initHashMap(lteUTasInfo2.labelsList.get(1)));
                LteUTasInfo lteUTasInfo3 = LteUTasInfo.this;
                add(lteUTasInfo3.initArrayHashMap(lteUTasInfo3.labelsList.get(2)));
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.LteUTasInfo.3
            {
                put(0, "DISABLE");
                put(1, "ENABLE");
            }
        };
        this.RRCStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.LteUTasInfo.4
            {
                put(0, "RRC Idle");
                put(1, "RRC Connected");
                put(2, "-");
            }
        };
        String[] strArr = {"Common", "CC0", "CC1", "CC2"};
        this.tabTitle = strArr;
        initTableComponent(strArr);
    }

    public void addDataToList(ArrayList<int[]> arrayList, int[] iArr) {
        for (int i = 0; i < iArr.length; i++) {
            if (arrayList.get(i) == null) {
                arrayList.add(i, new int[]{iArr[i]});
            } else {
                int[] iArrCopyOf = Arrays.copyOf(arrayList.get(i), arrayList.get(i).length + 1);
                iArrCopyOf[iArrCopyOf.length - 1] = iArr[i];
                arrayList.add(i, iArrCopyOf);
            }
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationTableComponent
    ArrayList<String> getArrayTypeKey() {
        ArrayList<String> arrayList = new ArrayList<>();
        arrayList.add("UL Info");
        return arrayList;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationTableComponent
    LinkedHashMap<String, LinkedHashMap> getHashMapLabels(int i) {
        LinkedHashMap<String, LinkedHashMap> linkedHashMap = new LinkedHashMap<>();
        if (i == 0) {
            linkedHashMap.put(this.labelKeys[0], this.valuesHashMap.get(0));
        } else if (i == 1 || i == 2 || i == 3) {
            linkedHashMap.put(this.labelKeys[1], this.valuesHashMap.get(1));
            linkedHashMap.put(this.labelKeys[2], this.valuesHashMap.get(2));
        }
        return linkedHashMap;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "LTE UTAS Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationTableComponent
    boolean isLabelArrayType(String str) {
        return getArrayTypeKey().contains(str);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    /* JADX WARN: Code duplicated, block: B:101:0x04c3  */
    /* JADX WARN: Code duplicated, block: B:102:0x04c8  */
    /* JADX WARN: Code duplicated, block: B:99:0x04bb  */
    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        int i;
        StringBuilder sb;
        String str2;
        StringBuilder sb2;
        int[] iArr;
        StringBuilder sb3;
        String str3;
        StringBuilder sb4;
        StringBuilder sb5;
        StringBuilder sb6;
        StringBuilder sb7;
        Msg msg = (Msg) obj;
        clearData();
        String str4 = "ul_info";
        String str5 = "cell_info";
        setInfoValid(getFieldValue(msg, "ul_info[0].utas_info_valid"));
        if (isInfoValid()) {
            int fieldValue = getFieldValue(msg, MDMContent.DL_CC_COUNT);
            int fieldValue2 = getFieldValue(msg, MDMContent.UL_CC_COUNT);
            String str6 = "";
            if (fieldValue > 0) {
                int fieldValue3 = getFieldValue(msg, "ul_info[0]." + MDMContent.EL1_STATUS_IND_TAS_STATUS);
                Object obj2 = (fieldValue3 < 0 || fieldValue3 > 1) ? this.TasEnableMapping.get(2) + "-(" + fieldValue3 + ")" : (String) this.TasEnableMapping.get(Integer.valueOf(fieldValue3));
                int fieldValue4 = getFieldValue(msg, "ul_info[0]." + MDMContent.EL1_STATUS_IND_UTAS_SWITCH_STATE);
                if (fieldValue4 < 0 || fieldValue4 > 31) {
                    sb7 = new StringBuilder();
                    sb7.append("-(");
                    sb7.append(fieldValue4);
                    sb7.append(")");
                } else {
                    sb7 = new StringBuilder();
                    sb7.append("");
                    sb7.append(fieldValue4);
                }
                Object string = sb7.toString();
                int fieldValue5 = getFieldValue(msg, "ul_info[0]." + MDMContent.EL1_STATUS_IND_UTAS_TX_POWER, true);
                i = 0;
                setHashMapKeyValues(this.labelKeys[0], 0, this.labelsList.get(0), new String[]{obj2, string, (fieldValue5 < -50 || fieldValue5 > 33) ? "-(" + fieldValue5 + ")" : fieldValue5 + "dBm", (fieldValue == 1 && fieldValue2 == 0) ? (String) this.RRCStateMapping.get(0) : (String) ((fieldValue < 1 || fieldValue2 < 1) ? this.RRCStateMapping.get(2) : this.RRCStateMapping.get(1))});
            } else {
                i = 0;
                setHashMapKeyValues(this.labelKeys[0], 0, initHashMap(this.labelsList.get(0)));
            }
            addData(this.labelKeys[i], i);
            int[] iArr2 = new int[3];
            int[] iArr3 = new int[3];
            Object[] objArr = new String[3];
            Object[] objArr2 = new String[3];
            String[][] strArr = (String[][]) Array.newInstance((Class<?>) String.class, 3, 5);
            String[][] strArr2 = (String[][]) Array.newInstance((Class<?>) String.class, 3, 5);
            String[][] strArr3 = (String[][]) Array.newInstance((Class<?>) String.class, 3, 5);
            String[][] strArr4 = (String[][]) Array.newInstance((Class<?>) String.class, 3, 5);
            iArr2[0] = fieldValue2 >= 1 ? 1 : 0;
            iArr3[0] = fieldValue >= 1 ? 1 : 0;
            int i2 = 0;
            while (true) {
                int i3 = fieldValue;
                if (i2 >= 3) {
                    break;
                }
                StringBuilder sb8 = new StringBuilder();
                sb8.append(str5);
                int i4 = fieldValue2;
                sb8.append("[");
                sb8.append(i2);
                String[][] strArr5 = strArr4;
                sb8.append("].");
                String[][] strArr6 = strArr2;
                sb8.append("band");
                int fieldValue6 = getFieldValue(msg, sb8.toString());
                StringBuilder sb9 = new StringBuilder();
                sb9.append(str5);
                sb9.append("[");
                sb9.append(i2);
                sb9.append("].");
                String str7 = str5;
                sb9.append(MDMContent.EL1_STATUS_IND_UL_CC_IDX);
                int fieldValue7 = getFieldValue(msg, sb9.toString(), true);
                StringBuilder sb10 = new StringBuilder();
                sb10.append(str4);
                sb10.append("[");
                sb10.append(i2);
                sb10.append("].");
                String[][] strArr7 = strArr;
                sb10.append(MDMContent.EL1_STATUS_IND_UTAS_CUR_ANT_IDX);
                int fieldValue8 = getFieldValue(msg, sb10.toString());
                StringBuilder sb11 = new StringBuilder();
                sb11.append(str4);
                sb11.append("[");
                sb11.append(i2);
                sb11.append("].");
                Object[] objArr3 = objArr2;
                sb11.append(MDMContent.EL1_STATUS_IND_UTAS_TX_ACTIVATED);
                int fieldValue9 = getFieldValue(msg, sb11.toString());
                if (i2 > 0) {
                    iArr2[i2] = (fieldValue7 == -1 || fieldValue9 != 1) ? 0 : 1;
                    iArr3[i2] = iArr2[i2];
                }
                int fieldValue10 = getFieldValue(msg, str4 + "[" + i2 + "]." + MDMContent.EL1_STATUS_IND_UTAS_MAX_ANT_IDX_CNT);
                Elog.d("EmInfo/MDMComponent", "tab: " + (i2 + 1) + ", " + fieldValue8 + ", " + iArr2[i2] + ":" + iArr3[i2]);
                if (fieldValue6 < 0 || fieldValue6 > 255) {
                    sb = new StringBuilder();
                    sb.append("-(");
                    sb.append(fieldValue6);
                    sb.append(")");
                } else {
                    sb = new StringBuilder();
                    sb.append("Band ");
                    sb.append(fieldValue6);
                }
                objArr[i2] = sb.toString();
                if (fieldValue8 < 0 || fieldValue8 > 10) {
                    str2 = str6;
                    sb2 = new StringBuilder();
                    sb2.append("-(");
                    sb2.append(fieldValue8);
                    sb2.append(")");
                } else {
                    sb2 = new StringBuilder();
                    str2 = str6;
                    sb2.append(str2);
                    sb2.append(fieldValue8);
                }
                objArr3[i2] = sb2.toString();
                int i5 = 0;
                while (true) {
                    int i6 = fieldValue6;
                    if (i5 < 5) {
                        StringBuilder sb12 = new StringBuilder();
                        sb12.append(str4);
                        sb12.append("[");
                        sb12.append(i2);
                        sb12.append("].");
                        int i7 = fieldValue8;
                        sb12.append(MDMContent.EL1_STATUS_IND_UTAS_PARTIAL_BLANK);
                        sb12.append("[");
                        sb12.append(i5);
                        sb12.append("]");
                        int fieldValue11 = getFieldValue(msg, sb12.toString());
                        Object[] objArr4 = objArr;
                        StringBuilder sb13 = new StringBuilder();
                        sb13.append(str4);
                        sb13.append("[");
                        sb13.append(i2);
                        sb13.append("].");
                        int[] iArr4 = iArr3;
                        sb13.append(MDMContent.EL1_STATUS_IND_UTAS_ANT_IDX);
                        sb13.append("[");
                        sb13.append(i5);
                        sb13.append("]");
                        int fieldValue12 = getFieldValue(msg, sb13.toString());
                        String[] strArr8 = strArr7[i2];
                        if (fieldValue12 >= 0) {
                            iArr = iArr2;
                            if (fieldValue12 <= 10) {
                                sb3 = new StringBuilder();
                                sb3.append(fieldValue12);
                                sb3.append(str2);
                            }
                            strArr8[i5] = sb3.toString();
                            if (fieldValue11 != 1 || i5 >= fieldValue10) {
                                String[] strArr9 = strArr7[i2];
                                if (i5 < fieldValue10) {
                                    str3 = strArr7[i2][i5];
                                } else {
                                    str3 = str2;
                                }
                                strArr9[i5] = str3;
                                strArr6[i2][i5] = str2;
                                strArr3[i2][i5] = str2;
                                strArr5[i2][i5] = str2;
                            } else {
                                int fieldValue13 = getFieldValue(msg, str4 + "[" + i2 + "]." + MDMContent.EL1_STATUS_IND_UTAS_TX_PWR + "[" + i5 + "]", true);
                                int fieldValue14 = getFieldValue(msg, str4 + "[" + i2 + "]." + MDMContent.EL1_STATUS_IND_UTAS_PHR + "[" + i5 + "]", true);
                                int fieldValue15 = getFieldValue(msg, str4 + "[" + i2 + "]." + MDMContent.EL1_STATUS_IND_UTAS_RSRP + "[" + i5 + "]", true);
                                String[] strArr10 = strArr6[i2];
                                if (fieldValue13 < -50 || fieldValue13 > 33) {
                                    sb4 = new StringBuilder();
                                    sb4.append("-(");
                                    sb4.append(fieldValue13);
                                    sb4.append(")");
                                } else {
                                    sb4 = new StringBuilder();
                                    sb4.append(fieldValue13);
                                    sb4.append(str2);
                                }
                                strArr10[i5] = sb4.toString();
                                String[] strArr11 = strArr3[i2];
                                if (fieldValue14 < -50 || fieldValue14 > 33) {
                                    sb5 = new StringBuilder();
                                    sb5.append("-(");
                                    sb5.append(fieldValue14);
                                    sb5.append(")");
                                } else {
                                    sb5 = new StringBuilder();
                                    sb5.append(fieldValue14);
                                    sb5.append(str2);
                                }
                                strArr11[i5] = sb5.toString();
                                String[] strArr12 = strArr5[i2];
                                if (fieldValue15 < -140 || fieldValue15 > 18) {
                                    sb6 = new StringBuilder();
                                    sb6.append("-(");
                                    sb6.append(fieldValue15);
                                    sb6.append(")");
                                } else {
                                    sb6 = new StringBuilder();
                                    sb6.append(fieldValue15);
                                    sb6.append(str2);
                                }
                                strArr12[i5] = sb6.toString();
                            }
                            i5++;
                            fieldValue6 = i6;
                            fieldValue8 = i7;
                            objArr = objArr4;
                            iArr3 = iArr4;
                            iArr2 = iArr;
                            str4 = str4;
                        } else {
                            iArr = iArr2;
                        }
                        sb3 = new StringBuilder();
                        sb3.append("-(");
                        sb3.append(fieldValue12);
                        sb3.append(")");
                        strArr8[i5] = sb3.toString();
                        if (fieldValue11 != 1) {
                            String[] strArr13 = strArr7[i2];
                            if (i5 < fieldValue10) {
                                str3 = strArr7[i2][i5];
                            } else {
                                str3 = str2;
                            }
                            strArr13[i5] = str3;
                            strArr6[i2][i5] = str2;
                            strArr3[i2][i5] = str2;
                            strArr5[i2][i5] = str2;
                        } else {
                            String[] strArr14 = strArr7[i2];
                            if (i5 < fieldValue10) {
                                str3 = strArr7[i2][i5];
                            } else {
                                str3 = str2;
                            }
                            strArr14[i5] = str3;
                            strArr6[i2][i5] = str2;
                            strArr3[i2][i5] = str2;
                            strArr5[i2][i5] = str2;
                        }
                        i5++;
                        fieldValue6 = i6;
                        fieldValue8 = i7;
                        objArr = objArr4;
                        iArr3 = iArr4;
                        iArr2 = iArr;
                        str4 = str4;
                    }
                }
                i2++;
                str6 = str2;
                fieldValue = i3;
                fieldValue2 = i4;
                strArr4 = strArr5;
                strArr2 = strArr6;
                str5 = str7;
                strArr = strArr7;
                objArr2 = objArr3;
            }
            String[][] strArr15 = strArr4;
            int[] iArr5 = iArr2;
            int[] iArr6 = iArr3;
            Object[] objArr5 = objArr;
            Object[] objArr6 = objArr2;
            String[][] strArr16 = strArr;
            String[][] strArr17 = strArr2;
            Object obj3 = str6;
            if (iArr5[1] == 0 && iArr5[2] == 1) {
                iArr6[1] = 1;
                iArr5[1] = 1;
                iArr6[2] = 0;
                iArr5[2] = 0;
                objArr5[1] = objArr5[2];
                objArr6[1] = objArr6[2];
                strArr16[1] = strArr16[2];
                strArr17[1] = strArr17[2];
                strArr3[1] = strArr3[2];
                strArr15[1] = strArr15[2];
            }
            for (int i8 = 0; i8 < 3; i8++) {
                setHashMapKeyValues(this.labelKeys[1], i8 + 1, this.labelsList.get(1)[0], iArr6[i8] == 1 ? objArr5[i8] : obj3);
                String[] strArr18 = null;
                setHashMapKeyValues(this.labelKeys[2], i8 + 1, this.labelsList.get(2)[0], iArr6[i8] == 1 ? strArr16[i8] : null);
                setHashMapKeyValues(this.labelKeys[2], i8 + 1, this.labelsList.get(2)[3], iArr6[i8] == 1 ? strArr15[i8] : null);
                setHashMapKeyValues(this.labelKeys[1], i8 + 1, this.labelsList.get(1)[1], iArr6[i8] == 1 ? objArr6[i8] : obj3);
                setHashMapKeyValues(this.labelKeys[2], i8 + 1, this.labelsList.get(2)[1], iArr5[i8] == 1 ? strArr17[i8] : null);
                String str8 = this.labelKeys[2];
                int i9 = i8 + 1;
                String str9 = this.labelsList.get(2)[2];
                if (iArr5[i8] == 1) {
                    strArr18 = strArr3[i8];
                }
                setHashMapKeyValues(str8, i9, str9, strArr18);
                addData(this.labelKeys[1], i8 + 1);
                addData(this.labelKeys[2], i8 + 1);
            }
        }
    }
}
