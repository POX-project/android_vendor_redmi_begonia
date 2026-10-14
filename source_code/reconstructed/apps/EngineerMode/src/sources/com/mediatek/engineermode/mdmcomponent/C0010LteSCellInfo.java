package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: renamed from: com.mediatek.engineermode.mdmcomponent.LteSCellInfo, reason: case insensitive filesystem */
/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class C0010LteSCellInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_ERRC_MOB_MEAS_INTRARAT_INFO_IND};

    public C0010LteSCellInfo(Activity activity) {
        super(activity);
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
        return new String[]{"PCI", "EARFCN (Band)", "SINR", "RSRP", "RSRQ"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "Secondary Cell Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2;
        Msg msg = (Msg) obj;
        long fieldValue = getFieldValue(msg, "scell_info_list.scell_info[0].earfcn");
        int fieldValue2 = getFieldValue(msg, "scell_info_list.scell_info[0].pci");
        int fieldValue3 = getFieldValue(msg, "scell_info_list.scell_info[0].rsrp", true);
        int fieldValue4 = getFieldValue(msg, "scell_info_list.scell_info[0].rsrq", true);
        int fieldValue5 = getFieldValue(msg, "scell_info_list.scell_info[0].rs_snr_in_qdb", true);
        int fieldValue6 = getFieldValue(msg, "scell_info_list.scell_info[0].serv_lte_band");
        Elog.d("EmInfo/MDMComponent", "band = " + fieldValue6);
        clearData();
        Object[] objArr = new Object[1];
        objArr[0] = fieldValue == -1 ? "" : Integer.valueOf(fieldValue2);
        addData(objArr);
        if (fieldValue == -1) {
            str2 = "";
        } else {
            str2 = "EARFCN: " + fieldValue + " (Band " + fieldValue6 + ")";
        }
        addData(str2);
        Object[] objArr2 = new Object[1];
        objArr2[0] = fieldValue3 == -1 ? "" : Float.valueOf(fieldValue3 / 4.0f);
        addData(objArr2);
        Object[] objArr3 = new Object[1];
        objArr3[0] = fieldValue4 == -1 ? "" : Float.valueOf(fieldValue4 / 4.0f);
        addData(objArr3);
        Object[] objArr4 = new Object[1];
        objArr4[0] = fieldValue5 != -1 ? Float.valueOf(fieldValue5 / 4.0f) : "";
        addData(objArr4);
    }
}
