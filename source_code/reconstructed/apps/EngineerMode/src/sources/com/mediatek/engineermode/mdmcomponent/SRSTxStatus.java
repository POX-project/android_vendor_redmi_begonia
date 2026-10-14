package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.HashMap;

/* JADX INFO: compiled from: MDMComponentICD.java */
/* JADX INFO: loaded from: classes.dex */
class SRSTxStatus extends NormalTableComponent {
    private static final String[] EM_TYPES = {MDMContentICD.MSG_TYPE_ICD_RECORD, MDMContentICD.MSG_ID_NL1_SRS_TX_INFORMATION, MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION, MDMContentICD.MSG_ID_EL1_SRS_TX_INFORMATION};
    int[] ltesrsTriggerTypeAddrs;
    int[][] srsResourceUsageAddrs;
    int[][] srsTriggerTypeAddrs;
    HashMap<Integer, String> srsTriggerTypeMapping;

    public SRSTxStatus(Activity activity) {
        super(activity);
        this.srsTriggerTypeAddrs = new int[][]{new int[]{8, 24, 64, 2}, new int[]{8, 24, 54, 2}, new int[]{8, 24, 54, 2}};
        this.srsResourceUsageAddrs = new int[][]{new int[]{8, 664, 4, 2}, new int[]{8, 664, 4, 2}, new int[]{8, 664, 4, 2}, new int[]{8, 664, 4, 2}, new int[]{8, 664, 4, 2}, new int[]{8, 696, 4, 2}, new int[]{8, 696, 4, 2}, new int[]{8, 696, 4, 2}, new int[]{8, 952, 4, 2}, new int[]{8, 952, 4, 2}, new int[]{8, 952, 4, 2}, new int[]{8, 984, 4, 2}, new int[]{8, 984, 4, 2}};
        this.ltesrsTriggerTypeAddrs = new int[]{8, 24, 64, 2};
        this.srsTriggerTypeMapping = new HashMap<Integer, String>() { // from class: com.mediatek.engineermode.mdmcomponent.SRSTxStatus.1
            {
                put(0, "Type 0");
                put(1, "Type 1 DCI0");
                put(1, "Type 1 DCI1A2B2C");
                put(1, "Type 1 DCI4");
            }
        };
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "9. Tx Antenna Info";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent
    String[] getLabels() {
        return new String[]{"NR Trigger Type", "NR Antenna Switch support", "LTE Trigger Type"};
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "SRS Tx Status";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return true;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        String str2;
        ByteBuffer byteBuffer = (ByteBuffer) obj;
        if (str.equals(MDMContentICD.MSG_ID_NL1_SRS_TX_INFORMATION)) {
            int[][] iArr = this.srsTriggerTypeAddrs;
            int fieldValueIcdVersion = getFieldValueIcdVersion(byteBuffer, iArr[iArr.length - 1][0]);
            int[][] iArr2 = this.srsTriggerTypeAddrs;
            int fieldValueIcd = getFieldValueIcd(byteBuffer, iArr2[(fieldValueIcdVersion < iArr2.length ? fieldValueIcdVersion : iArr2.length) - 1]);
            String[] strArr = icdLogInfo;
            StringBuilder sb = new StringBuilder();
            sb.append(getName());
            sb.append(" update,name id = ");
            sb.append(str);
            sb.append(", version = ");
            sb.append(fieldValueIcdVersion);
            sb.append(", condition = ");
            sb.append(fieldValueIcd);
            sb.append(", values = ");
            String str3 = "periodic";
            if (fieldValueIcd == 0) {
                str2 = "periodic";
            } else {
                str2 = "aperiodic: " + fieldValueIcd;
            }
            sb.append(str2);
            Elog.d("EmInfo/MDMComponent", strArr, sb.toString());
            if (fieldValueIcd != 0) {
                str3 = "aperiodic: " + fieldValueIcd;
            }
            setData(0, str3);
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_NL1_PHYSICAL_CONFIGURATION)) {
            int[][] iArr3 = this.srsResourceUsageAddrs;
            int fieldValueIcdVersion2 = getFieldValueIcdVersion(byteBuffer, iArr3[iArr3.length - 1][0]);
            int fieldValueIcd2 = getFieldValueIcd(byteBuffer, fieldValueIcdVersion2, this.srsResourceUsageAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion2 + ", values = " + fieldValueIcd2);
            setData(1, Integer.valueOf(fieldValueIcd2));
            return;
        }
        if (str.equals(MDMContentICD.MSG_ID_EL1_SRS_TX_INFORMATION)) {
            int[][] iArr4 = this.srsTriggerTypeAddrs;
            int fieldValueIcdVersion3 = getFieldValueIcdVersion(byteBuffer, iArr4[iArr4.length - 1][0]);
            int fieldValueIcd3 = getFieldValueIcd(byteBuffer, this.ltesrsTriggerTypeAddrs);
            Elog.d("EmInfo/MDMComponent", icdLogInfo, getName() + " update,name id = " + str + ", version = " + fieldValueIcdVersion3 + ", condition = " + fieldValueIcd3);
            setData(2, getValueByMapping(this.srsTriggerTypeMapping, fieldValueIcd3));
        }
    }
}
