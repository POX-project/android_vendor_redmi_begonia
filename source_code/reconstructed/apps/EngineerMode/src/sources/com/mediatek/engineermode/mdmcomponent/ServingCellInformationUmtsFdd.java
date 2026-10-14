package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class ServingCellInformationUmtsFdd extends ArrayTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_CSCE_SERV_CELL_S_STATUS_IND};

    public ServingCellInformationUmtsFdd(Activity activity) {
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
        return new String[]{"Item", "value"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Serving Cell Information (UMTS FDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2;
        Msg msg = (Msg) obj;
        String str3 = "serv_cell.";
        clearData();
        int fieldValue = getFieldValue(msg, "serv_cell.uarfcn_DL");
        int fieldValue2 = getFieldValue(msg, "serv_cell.psc");
        int fieldValue3 = getFieldValue(msg, "serv_cell." + MDMContent.FDD_EM_CSCE_SERV_LAC_VALID);
        int fieldValue4 = getFieldValue(msg, "serv_cell.lac");
        int fieldValue5 = getFieldValue(msg, "serv_cell.rac_valid");
        int fieldValue6 = getFieldValue(msg, "serv_cell.rac");
        int fieldValue7 = getFieldValue(msg, "serv_cell.cell_identity");
        float fieldValue8 = getFieldValue(msg, "serv_cell.rscp", true) / 4096.0f;
        float fieldValue9 = getFieldValue(msg, "serv_cell.ec_no", true) / 4096.0f;
        addData("UARFCN", Integer.valueOf(fieldValue));
        addData(MDMContent.FDD_EM_MEME_DCH_UMTS_PSC, Integer.valueOf(fieldValue2));
        int fieldValue10 = 0;
        int fieldValue11 = getFieldValue(msg, "serv_cell.multi_plmn_count");
        int i = 0;
        while (true) {
            int i2 = fieldValue;
            str2 = "].";
            int i3 = fieldValue2;
            if (i >= fieldValue11) {
                break;
            }
            int i4 = fieldValue11;
            String str4 = "serv_cell.multi_plmn_id[" + i + "].";
            StringBuilder sb = new StringBuilder();
            sb.append(str4);
            sb.append("mcc");
            float f = fieldValue9;
            sb.append(1);
            String str5 = "" + getFieldValue(msg, sb.toString());
            int fieldValue12 = getFieldValue(msg, str4 + "mcc2");
            StringBuilder sb2 = new StringBuilder();
            sb2.append(str5);
            sb2.append(fieldValue12);
            String string = sb2.toString();
            int fieldValue13 = getFieldValue(msg, str4 + "mcc3");
            StringBuilder sb3 = new StringBuilder();
            sb3.append(string);
            sb3.append(fieldValue13);
            String string2 = sb3.toString();
            int fieldValue14 = getFieldValue(msg, str4 + "mnc1");
            StringBuilder sb4 = new StringBuilder();
            sb4.append(string2);
            sb4.append(fieldValue14);
            String string3 = sb4.toString();
            int fieldValue15 = getFieldValue(msg, str4 + "mnc2");
            StringBuilder sb5 = new StringBuilder();
            sb5.append(string3);
            sb5.append(fieldValue15);
            String string4 = sb5.toString();
            fieldValue10 = getFieldValue(msg, str4 + "mnc3");
            StringBuilder sb6 = new StringBuilder();
            sb6.append(string4);
            sb6.append(fieldValue10 == 15 ? "" : Integer.valueOf(fieldValue10));
            addData("PLMN[" + i + "]", sb6.toString());
            i++;
            fieldValue = i2;
            fieldValue2 = i3;
            fieldValue11 = i4;
            fieldValue9 = f;
        }
        float f2 = fieldValue9;
        Object[] objArr = new Object[2];
        objArr[0] = "LAC";
        objArr[1] = fieldValue3 == 0 ? "-" : Integer.valueOf(fieldValue4);
        addData(objArr);
        Object[] objArr2 = new Object[2];
        objArr2[0] = "RAC";
        objArr2[1] = fieldValue5 != 0 ? Integer.valueOf(fieldValue6) : "-";
        addData(objArr2);
        int fieldValue16 = getFieldValue(msg, "serv_cell.num_ura_id");
        int i5 = 0;
        while (i5 < fieldValue16) {
            String str6 = str3 + "uraIdentity[" + i5 + str2;
            StringBuilder sb7 = new StringBuilder();
            sb7.append(str6);
            sb7.append("stringData");
            String str7 = str2;
            sb7.append("[0]");
            addData("URA[" + i5 + "]", Integer.valueOf((getFieldValue(msg, sb7.toString()) << 8) | getFieldValue(msg, str6 + "stringData[1]")));
            i5++;
            str3 = str3;
            str2 = str7;
            msg = msg;
        }
        addData("Cell ID", Integer.valueOf(fieldValue7));
        addData("RSCP_CPICH Power Level", Float.valueOf(fieldValue8));
        addData("Ec/Io", Float.valueOf(f2));
    }
}
