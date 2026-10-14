package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class DRBType extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_EVENT, MDMContentICD.MSG_ID_NL2_PDCP_CONFIGURATION_EVENT};
    int[][] cfgRlcEntityAddr;
    HashMap<Integer, String> cfgRlcEntityMapping;

    public DRBType(Activity activity) {
        super(activity);
        this.cfgRlcEntityAddr = new int[][]{new int[]{32, 32, 27, 2}, new int[]{32, 32, 27, 2}, new int[]{32, 32, 27, 2}};
        this.cfgRlcEntityMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.DRBType.1
            {
                put(0, "MCG");
                put(1, " SCG");
                put(2, "SPLIT");
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
        return new String[]{"DRB TYPE"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "DRB Type";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        int[][] iArr = this.cfgRlcEntityAddr;
        int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
        int fieldValueIcd = getFieldValueIcd(byteBuffer, fieldValueIcdVersion, this.cfgRlcEntityAddr);
        Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion + ", value = " + fieldValueIcd);
        setData(0, getValueByMapping(this.cfgRlcEntityMapping, fieldValueIcd));
    }
}
