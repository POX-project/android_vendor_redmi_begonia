package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.mdml.Msg;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class HsDschServingCellUmtsFdd extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_MEME_DCH_H_SERVING_CELL_INFO_IND};

    public HsDschServingCellUmtsFdd(Activity activity) {
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
        return new String[]{"HS-DSCH Serving Cell"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "HS-DSCH Serving cell (UMTS FDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, MDMContent.FDD_EM_MEME_DCH_H_SERVING_HSDSCH_UARFCN);
        int fieldValue2 = getFieldValue(msg, MDMContent.FDD_EM_MEME_DCH_H_SERVING_HSDSCH_PSC);
        StringBuilder sb = new StringBuilder();
        sb.append("");
        sb.append(fieldValue == 65535 ? "-" : Integer.valueOf(fieldValue));
        String string = sb.toString();
        StringBuilder sb2 = new StringBuilder();
        sb2.append(string);
        sb2.append(" / ");
        sb2.append(fieldValue2 != 65535 ? Integer.valueOf(fieldValue2) : "-");
        String string2 = sb2.toString();
        clearData();
        addData(string2);
    }
}
