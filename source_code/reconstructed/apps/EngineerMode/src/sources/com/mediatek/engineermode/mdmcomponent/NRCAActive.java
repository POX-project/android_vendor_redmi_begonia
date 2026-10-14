package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class NRCAActive extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION, MDMContentICD.MSG_TYPE_ICD_EVENT, MDMContentICD.MSG_ID_NL2_MAC_CARRIER_AGGREGATION_EVENT};
    int[] caAddrs;
    int sCellNum;
    int[] sCellNumAddrs;

    public NRCAActive(Activity activity) {
        super(activity);
        this.caAddrs = new int[]{8, 0, 1};
        this.sCellNumAddrs = new int[]{8, 213, 3};
        this.sCellNum = -1;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "8. NR EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"DL CA State"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "NR CA Active";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION)) {
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, this.sCellNumAddrs[0]);
            this.sCellNum = fieldValueIcdVersion >= 8 ? getFieldValueIcd(byteBuffer, this.sCellNumAddrs) : this.sCellNum;
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", values = " + this.sCellNum);
            return;
        }
        int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, this.caAddrs[0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, this.caAddrs);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", condition = " + this.sCellNum + ", values = " + fieldValueIcd);
        if (this.sCellNum > 0) {
            setData(0, fieldValueIcd == 1 ? "Configured" : "Active");
        } else {
            setData(0, "Release");
        }
    }
}
