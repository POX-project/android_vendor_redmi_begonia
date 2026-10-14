package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRUTasInfo extends CombinationTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_TAS_INFORMATION, MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION, MDMContentICD.MSG_TYPE_ICD_EVENT, MDMContentICD.MSG_ID_NRRC_STATE_CHANGE_EVENT};
    HashMap<Integer, String> RRCStateMapping;
    HashMap<Integer, String> TasEnableMapping;
    int antReportdLen;
    int[][] antReportsAntIndexAddrs;
    int[][] antReportsPhrAddrs;
    int[][] antReportsRsrpAddrs;
    int[][] antReportsTxPowerAddrs;
    int[][] antReportsValidAddrs;
    int[][] antStatusAddrs;
    int[][] bandAddrs;
    String bandStr;
    int[][] carrIndexAddrs;
    boolean[] ccIndexValid;
    String[] labelKeys;
    List<String[]> labelsList;
    int[] rrcStateAddrs;
    int[][] rxStateAddrs;
    int[][] statusAddrs;
    private String[] tabTitle;
    int[][] txIndex0Addrs;
    int[][] txIndex1Addrs;
    int[] txIndex1ValidAddrsV1;
    int[][] txStateAddrs;
    List<LinkedHashMap> valuesHashMap;

    public NRUTasInfo(Activity activity) {
        super(activity);
        this.labelsList = new ArrayList<String[]>() { // from class: com.mediatek.engineermode.mdmcomponent.NRUTasInfo.1
            {
                add(new String[]{"TAS Enable", "Band", "RRC status"});
                add(new String[]{"Band", "RX State", "TX State", "TX0 Index", "TX1 Index"});
                add(new String[]{"ANT Index", "TX Pwr dBm", "PHR dB", "RSRP dBm"});
            }
        };
        this.labelKeys = new String[]{"Tas Common", "Cell Info", "UL Info"};
        this.valuesHashMap = new ArrayList<LinkedHashMap>() { // from class: com.mediatek.engineermode.mdmcomponent.NRUTasInfo.2
            {
                NRUTasInfo nRUTasInfo = NRUTasInfo.this;
                add(nRUTasInfo.initHashMap(nRUTasInfo.labelsList.get(0)));
                NRUTasInfo nRUTasInfo2 = NRUTasInfo.this;
                add(nRUTasInfo2.initHashMap(nRUTasInfo2.labelsList.get(1)));
                NRUTasInfo nRUTasInfo3 = NRUTasInfo.this;
                add(nRUTasInfo3.initArrayHashMap(nRUTasInfo3.labelsList.get(2)));
            }
        };
        this.TasEnableMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.NRUTasInfo.3
            {
                put(0, "DISABLE");
                put(1, "ENABLE");
            }
        };
        this.RRCStateMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.NRUTasInfo.4
            {
                put(0, "null");
                put(1, "idleCampedOnAnyCell");
                put(2, "idleCampedNormally");
                put(3, "idlConnecting");
                put(4, "connectedNormally");
                put(5, "releasing");
                put(6, "atmptOutbndMobility");
                put(7, "atmptInbndMobility");
                put(8, "inactive");
                put(9, "endcScgAdded");
                put(10, "endcScgSuspended");
            }
        };
        String[] strArr = {"CM", "CC0", "CC1", "CC2", "CC3", "CC4", "CC5", "CC6", "CC7"};
        this.tabTitle = strArr;
        this.statusAddrs = new int[][]{new int[]{8, 0, 2}, new int[]{8, 0, 1}, new int[]{8, 0, 1}};
        this.antStatusAddrs = new int[][]{new int[]{8, 0, 2}, new int[]{8, 24, 0, 2}, new int[]{8, 24, 0, 2}};
        this.carrIndexAddrs = new int[][]{new int[]{8, 56, 0, 3}, new int[]{8, 24, 2, 3}, new int[]{8, 24, 2, 3}};
        this.txIndex0Addrs = new int[][]{new int[]{8, 56, 3, 4}, new int[]{8, 24, 5, 5}, new int[]{8, 24, 8, 8}};
        this.txIndex1ValidAddrsV1 = new int[]{8, 56, 7, 1};
        this.txIndex1Addrs = new int[][]{new int[]{8, 56, 8, 4}, new int[]{8, 24, 10, 5}, new int[]{8, 24, 16, 8}};
        this.rxStateAddrs = new int[][]{new int[0], new int[]{8, 24, 15, 5}, new int[]{8, 24, 24, 8}};
        this.txStateAddrs = new int[][]{new int[0], new int[]{8, 24, 20, 5}, new int[]{8, 24, 32, 8}};
        this.antReportdLen = 64;
        this.antReportsValidAddrs = new int[][]{new int[]{8, 56, 32, 16, 0, 1}, new int[]{8, 24, 32, 16, 0, 1}, new int[]{8, 24, 64, 16, 0, 1}};
        this.antReportsAntIndexAddrs = new int[][]{new int[]{8, 56, 32, 25, 0, 7}, new int[]{8, 24, 32, 25, 0, 7}, new int[]{8, 24, 64, 25, 0, 7}};
        this.antReportsTxPowerAddrs = new int[][]{new int[]{8, 56, 32, 0, 0, 8}, new int[]{8, 24, 32, 0, 0, 8}, new int[]{8, 24, 64, 0, 0, 8}};
        this.antReportsPhrAddrs = new int[][]{new int[]{8, 56, 32, 8, 0, 8}, new int[]{8, 24, 32, 8, 0, 8}, new int[]{8, 24, 64, 8, 0, 8}};
        this.antReportsRsrpAddrs = new int[][]{new int[]{8, 56, 32, 32, 0, 16}, new int[]{8, 24, 32, 32, 0, 16}, new int[]{8, 24, 64, 32, 0, 16}};
        this.bandAddrs = new int[][]{new int[0], new int[0], new int[0], new int[0], new int[0], new int[]{8, 49, 7}, new int[]{8, 49, 7}, new int[]{8, 49, 7}, new int[]{8, 46, 7}, new int[]{8, 46, 7}, new int[]{8, 46, 7}, new int[]{8, 46, 8}, new int[]{8, 46, 8}};
        this.rrcStateAddrs = new int[]{8, 0, 8};
        this.bandStr = "";
        this.ccIndexValid = new boolean[]{false, false, false, false, false, false, false, false};
        initTableComponent(strArr);
        clearData();
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
        arrayList.add(this.labelKeys[2]);
        return arrayList;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "8. NR EM Component";
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // com.mediatek.engineermode.mdmcomponent.CombinationTableComponent
    LinkedHashMap<String, LinkedHashMap> getHashMapLabels(int i) {
        LinkedHashMap<String, LinkedHashMap> linkedHashMap = new LinkedHashMap<>();
        switch (i) {
            case 0:
                linkedHashMap.put(this.labelKeys[0], this.valuesHashMap.get(0));
                return linkedHashMap;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
                linkedHashMap.put(this.labelKeys[1], this.valuesHashMap.get(1));
                linkedHashMap.put(this.labelKeys[2], this.valuesHashMap.get(2));
                return linkedHashMap;
            default:
                return linkedHashMap;
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR UTAS Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.CombinationTableComponent
    boolean isLabelArrayType(String str) {
        return getArrayTypeKey().contains(str);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        int i;
        ByteBuffer byteBuffer;
        int i2;
        String str2;
        int i3;
        ByteBuffer byteBuffer2 = (ByteBuffer) obj;
        String str3 = "EmInfo/MDMComponent";
        if (str.equals(MDMContentICD.MSG_ID_NRRC_STATE_CHANGE_EVENT)) {
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer2, this.rrcStateAddrs[0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer2, this.rrcStateAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + fieldValueIcd);
            setHashMapKeyValues(this.labelKeys[0], 0, this.labelsList.get(0)[2], getValueByMapping(this.RRCStateMapping, fieldValueIcd));
            addData(this.labelKeys[0], 0);
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION)) {
            int[][] iArr = this.bandAddrs;
            int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer2, iArr[iArr.length - 1][0]);
            if (fieldValueIcdVersion2 >= 6) {
                int fieldValueIcd2 = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion2, this.bandAddrs);
                this.bandStr = fieldValueIcd2 + "";
                Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", values = " + fieldValueIcd2);
                setHashMapKeyValues(this.labelKeys[0], 0, this.labelsList.get(0)[1], Integer.valueOf(fieldValueIcd2));
                addData(this.labelKeys[0], 0);
            } else {
                Elog.e("EmInfo/MDMComponent", getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", this version is error, return");
            }
            return;
        }
        int[][] iArr2 = this.statusAddrs;
        int fieldValueIcdVersion3 = getFieldValueIcdVersion(byteBuffer2, iArr2[iArr2.length - 1][0]);
        int fieldValueIcd3 = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, this.statusAddrs);
        int fieldValueIcd4 = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, this.antStatusAddrs);
        int fieldValueIcd5 = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, this.carrIndexAddrs);
        this.ccIndexValid[fieldValueIcd5] = true;
        int fieldValueIcd6 = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, this.txIndex0Addrs);
        int fieldValueIcd7 = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, this.txIndex1Addrs);
        int fieldValueIcd8 = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, this.rxStateAddrs);
        int fieldValueIcd9 = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, this.txStateAddrs);
        int[] iArr3 = new int[5];
        int[] iArr4 = new int[5];
        int[] iArr5 = new int[5];
        String str4 = "";
        int[] iArr6 = new int[5];
        int i4 = fieldValueIcd7;
        int[] iArr7 = new int[5];
        int i5 = fieldValueIcd6;
        String[] strArr = new String[5];
        String[] strArr2 = new String[5];
        String[] strArr3 = new String[5];
        String[] strArr4 = new String[5];
        if (fieldValueIcd4 == 0) {
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion3 + ", condition = " + fieldValueIcd4 + ", " + fieldValueIcd5);
            return;
        }
        int i6 = 0;
        int i7 = 0;
        while (i7 < 5) {
            int[][] iArr8 = this.antReportsValidAddrs;
            String str5 = str3;
            int length = (fieldValueIcdVersion3 <= iArr8.length ? fieldValueIcdVersion3 : iArr8.length) - 1;
            int[][] iArr9 = this.antReportsValidAddrs;
            iArr9[length][4] = i7 * 64;
            iArr3[i7] = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, iArr9);
            if (iArr3[i7] == 0) {
                str2 = str4;
                i3 = i4;
                i = i5;
                byteBuffer = byteBuffer2;
            } else {
                int[][] iArr10 = this.antReportsAntIndexAddrs;
                iArr10[length][4] = i7 * 64;
                iArr4[i7] = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, iArr10);
                int[][] iArr11 = this.antReportsTxPowerAddrs;
                iArr11[length][4] = i7 * 64;
                iArr5[i7] = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, iArr11, true);
                int[][] iArr12 = this.antReportsPhrAddrs;
                iArr12[length][4] = i7 * 64;
                iArr6[i7] = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, iArr12, true);
                int[][] iArr13 = this.antReportsRsrpAddrs;
                iArr13[length][4] = i7 * 64;
                iArr7[i7] = getFieldValueIcd(byteBuffer2, fieldValueIcdVersion3, iArr13, true);
                i = i5;
                if (iArr4[i7] != i || fieldValueIcd4 == 0) {
                    byteBuffer = byteBuffer2;
                    i2 = i4;
                    if (iArr4[i7] != i2 || fieldValueIcd4 < 2) {
                        str2 = str4;
                        i3 = i2;
                        strArr[i6] = str2;
                        strArr4[i6] = str2;
                    }
                    strArr3[i6] = iArr4[i7] + str2;
                    strArr2[i6] = str2 + iArr7[i7];
                    i6++;
                } else {
                    byteBuffer = byteBuffer2;
                    i2 = i4;
                }
                StringBuilder sb = new StringBuilder();
                str2 = str4;
                sb.append(str2);
                i3 = i2;
                sb.append(iArr6[i7]);
                strArr[i6] = sb.toString();
                strArr4[i6] = iArr5[i7] + str2;
                strArr3[i6] = iArr4[i7] + str2;
                strArr2[i6] = str2 + iArr7[i7];
                i6++;
            }
            i7++;
            i4 = i3;
            byteBuffer2 = byteBuffer;
            iArr3 = iArr3;
            str4 = str2;
            i5 = i;
            str3 = str5;
        }
        String str6 = str3;
        Object objValueOf = str4;
        int i8 = i4;
        int i9 = i5;
        Elog.d(str6, icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion3 + ", conditions = " + fieldValueIcd4 + ", " + fieldValueIcd5 + "," + Arrays.toString(this.antReportsValidAddrs) + ", values = " + fieldValueIcd3 + ", " + fieldValueIcd8 + ", " + fieldValueIcd9 + ", " + i9 + ", " + i8 + ", " + Arrays.toString(iArr4) + ", " + Arrays.toString(iArr5) + ", " + Arrays.toString(strArr) + ", " + Arrays.toString(strArr2));
        setHashMapKeyValues(this.labelKeys[0], 0, this.labelsList.get(0)[0], getValueByMapping(this.TasEnableMapping, fieldValueIcd3));
        addData(this.labelKeys[0], 0);
        setHashMapKeyValues(this.labelKeys[1], fieldValueIcd5 + 1, this.labelsList.get(1)[0], this.bandStr);
        setHashMapKeyValues(this.labelKeys[1], fieldValueIcd5 + 1, this.labelsList.get(1)[1], Integer.valueOf(fieldValueIcd8));
        setHashMapKeyValues(this.labelKeys[1], fieldValueIcd5 + 1, this.labelsList.get(1)[2], Integer.valueOf(fieldValueIcd9));
        setHashMapKeyValues(this.labelKeys[1], fieldValueIcd5 + 1, this.labelsList.get(1)[3], fieldValueIcd4 == 0 ? objValueOf : Integer.valueOf(i9));
        String str7 = this.labelKeys[1];
        int i10 = fieldValueIcd5 + 1;
        String str8 = this.labelsList.get(1)[4];
        if (fieldValueIcd4 >= 2) {
            objValueOf = Integer.valueOf(i8);
        }
        setHashMapKeyValues(str7, i10, str8, objValueOf);
        addData(this.labelKeys[1], fieldValueIcd5 + 1);
        setHashMapKeyValues(this.labelKeys[2], fieldValueIcd5 + 1, this.labelsList.get(2)[0], strArr3);
        setHashMapKeyValues(this.labelKeys[2], fieldValueIcd5 + 1, this.labelsList.get(2)[1], strArr4);
        setHashMapKeyValues(this.labelKeys[2], fieldValueIcd5 + 1, this.labelsList.get(2)[2], strArr);
        String[] strArr5 = strArr2;
        setHashMapKeyValues(this.labelKeys[2], fieldValueIcd5 + 1, this.labelsList.get(2)[3], strArr5);
        addData(this.labelKeys[2], fieldValueIcd5 + 1);
        int i11 = 0;
        while (true) {
            boolean[] zArr = this.ccIndexValid;
            if (i11 >= zArr.length) {
                return;
            }
            if (!zArr[i11]) {
                setHashMapKeyArrays(this.labelKeys[1], i11 + 1, initArrayHashMap(this.labelsList.get(1)));
                setHashMapKeyArrays(this.labelKeys[2], i11 + 1, initArrayHashMap(this.labelsList.get(2)));
                addData(this.labelKeys[1], i11 + 1);
                addData(this.labelKeys[2], i11 + 1);
            }
            i11++;
            iArr5 = iArr5;
            strArr5 = strArr5;
        }
    }
}
