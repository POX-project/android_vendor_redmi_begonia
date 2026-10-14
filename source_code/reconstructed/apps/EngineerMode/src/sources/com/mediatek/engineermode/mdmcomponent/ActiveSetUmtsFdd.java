package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;
import java.util.Arrays;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class ActiveSetUmtsFdd extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND};

    public ActiveSetUmtsFdd(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "3. UMTS FDD EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.ArrayTableComponent
    String[] getLabels() {
        return new String[]{"Active Set Information: "};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Active Set Information (UMTS FDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg;
        String str2;
        int i;
        String str3;
        Msg msg2 = (Msg) obj;
        int fieldValue = getFieldValue(msg2, "num_cells");
        clearData();
        int i2 = 0;
        if (str.equals(MDMContent.MSG_ID_FDD_EM_MEME_DCH_UMTS_CELL_INFO_IND)) {
            String str4 = "umts_cell_list[";
            int i3 = 0;
            while (i3 < fieldValue) {
                int fieldValue2 = getFieldValue(msg2, str4 + i3 + "].cell_type");
                StringBuilder sb = new StringBuilder();
                sb.append("cellType = ");
                sb.append(fieldValue2);
                Elog.d("EmInfo/MDMComponent", sb.toString());
                if (fieldValue2 == 0) {
                    int fieldValue3 = getFieldValue(msg2, str4 + i3 + "].UARFCN");
                    int fieldValue4 = getFieldValue(msg2, str4 + i3 + "]." + MDMContent.FDD_EM_MEME_DCH_UMTS_PSC);
                    long fieldValue5 = getFieldValue(msg2, str4 + i3 + "].RSCP", true);
                    long fieldValue6 = getFieldValue(msg2, str4 + i3 + "]." + MDMContent.FDD_EM_MEME_DCH_UMTS_ECN0, true);
                    int fieldValue7 = getFieldValue(msg2, str4 + i3 + "].lac");
                    int fieldValue8 = getFieldValue(msg2, str4 + i3 + "].rac");
                    int fieldValue9 = getFieldValue(msg2, str4 + i3 + "]." + MDMContent.FDD_EM_MEME_DCH_UMTS_CELL_IDENTITY);
                    int fieldValue10 = getFieldValue(msg2, str4 + i3 + "]." + MDMContent.FDD_EM_MEME_DCH_UMTS_NUM_PLMN_ID);
                    String[] strArr = new String[fieldValue10];
                    int i4 = 0;
                    while (true) {
                        i = fieldValue8;
                        str3 = "[";
                        if (i4 >= fieldValue10) {
                            break;
                        }
                        int i5 = fieldValue10;
                        StringBuilder sb2 = new StringBuilder();
                        sb2.append(str4);
                        sb2.append(i3);
                        sb2.append("].");
                        int i6 = fieldValue7;
                        sb2.append(MDMContent.FDD_EM_MEME_DCH_UMTS_PLMN_ID_LIST);
                        sb2.append("[");
                        sb2.append(i4);
                        sb2.append("].");
                        String string = sb2.toString();
                        StringBuilder sb3 = new StringBuilder();
                        sb3.append(string);
                        int i7 = fieldValue4;
                        sb3.append("mcc");
                        strArr[i4] = ("" + getFieldValue(msg2, sb3.toString())) + String.format("%02d", Integer.valueOf(getFieldValue(msg2, string + "mnc")));
                        i4++;
                        fieldValue8 = i;
                        fieldValue10 = i5;
                        fieldValue7 = i6;
                        fieldValue4 = i7;
                    }
                    int i8 = fieldValue7;
                    int i9 = fieldValue4;
                    int fieldValue11 = getFieldValue(msg2, str4 + i3 + "].num_ura_id");
                    int[] iArr = new int[fieldValue11];
                    int i10 = 0;
                    while (i10 < fieldValue11) {
                        StringBuilder sb4 = new StringBuilder();
                        sb4.append(str4);
                        sb4.append(i3);
                        sb4.append("].");
                        int i11 = fieldValue11;
                        sb4.append("uraIdentity");
                        sb4.append(str3);
                        sb4.append(i10);
                        sb4.append("].");
                        String string2 = sb4.toString();
                        StringBuilder sb5 = new StringBuilder();
                        sb5.append(string2);
                        String str5 = str4;
                        sb5.append("stringData");
                        String str6 = str3;
                        sb5.append("[0]");
                        int fieldValue12 = getFieldValue(msg2, sb5.toString());
                        int fieldValue13 = getFieldValue(msg2, string2 + "stringData[1]");
                        StringBuilder sb6 = new StringBuilder();
                        sb6.append("stringData0 = ");
                        sb6.append(fieldValue12);
                        Elog.d("EmInfo/MDMComponent", sb6.toString());
                        Elog.d("EmInfo/MDMComponent", "stringData1 = " + fieldValue13);
                        iArr[i10] = (fieldValue12 << 8) | fieldValue13;
                        i10++;
                        fieldValue11 = i11;
                        str4 = str5;
                        str3 = str6;
                        msg2 = msg2;
                    }
                    msg = msg2;
                    str2 = str4;
                    addData("ActiveSetUmtsFdd(" + i2 + "): ");
                    i2++;
                    addData("uarfcn", "psc", "plmn", "lac", "rac");
                    addData(Integer.valueOf(fieldValue3), Integer.valueOf(i9), Arrays.toString(strArr), Integer.valueOf(i8), Integer.valueOf(i));
                    addData("ura", MDMContent.CELL_ID, "rscp", "ecn0", "-");
                    addData(Arrays.toString(iArr), Integer.valueOf(fieldValue9), Long.valueOf(fieldValue5), Long.valueOf(fieldValue6), "-");
                } else {
                    msg = msg2;
                    str2 = str4;
                }
                i3++;
                fieldValue = fieldValue;
                str4 = str2;
                msg2 = msg;
            }
        }
    }
}
