package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class DRDSDS extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_MULTISIM_INFORMATION};
    int[][] drAllowedAddr;
    HashMap<Integer, String> drAllowedMapping;

    public DRDSDS(Activity activity) {
        super(activity);
        this.drAllowedAddr = new int[][]{new int[]{8, 0, 1}};
        this.drAllowedMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.DRDSDS.1
            {
                put(0, "not allowed");
                put(1, " allowed");
            }
        };
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
        return new String[]{"DR Allowed"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "DR-DSDS";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_NRRC_RLF_EVENT)) {
            int[][] iArr = this.drAllowedAddr;
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
            int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.drAllowedAddr);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", value = " + fieldValueIcd);
            setData(0, getValueByMapping(this.drAllowedMapping, fieldValueIcd));
        }
    }
}
