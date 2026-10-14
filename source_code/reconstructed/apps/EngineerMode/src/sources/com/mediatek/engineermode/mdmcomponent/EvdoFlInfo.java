package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;
import java.text.DecimalFormat;

/* JADX INFO: compiled from: MDMComponentC2k.java */
/* JADX INFO: loaded from: classes.dex */
class EvdoFlInfo extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_EM_C2K_L4_EVDO_FL_INFO_IND};

    public EvdoFlInfo(Activity activity) {
        super(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "7. CDMA EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"c_i", "drcAverageValue", "ftcCrcErrorCount", "ftcTotalCount", "syncCrcErrorRatio"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "EVDO FL info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        Msg msg = (Msg) obj;
        int fieldValue = getFieldValue(msg, "c_i", true);
        int fieldValue2 = getFieldValue(msg, "drcAverageValue");
        int fieldValue3 = getFieldValue(msg, "ftcCrcErrorCount");
        int fieldValue4 = getFieldValue(msg, "ftcTotalCount");
        int fieldValue5 = getFieldValue(msg, "syncCrcErrorRatio");
        String str2 = new DecimalFormat("#0.00").format(fieldValue / 64.0f);
        Elog.d("EmInfo/MDMComponent", "syncCrcErrorRatio = " + fieldValue5);
        clearData();
        addData(str2);
        addData(Integer.valueOf(fieldValue2));
        addData(Integer.valueOf(fieldValue3));
        addData(Integer.valueOf(fieldValue4));
        addData(Integer.valueOf(fieldValue5));
        notifyDataSetChanged();
    }
}
