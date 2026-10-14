package vendor.mediatek.hardware.mdmonitor.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public final class MtkModemBinType {
    public static final int MTK_MODEM_BIN_TYPE_ALL_ICD_JSON = 1;
    public static final int MTK_MODEM_BIN_TYPE_LAYOUT_DESC = 0;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("MTK_MODEM_BIN_TYPE_LAYOUT_DESC");
        if ((i & 1) == 1) {
            arrayList.add("MTK_MODEM_BIN_TYPE_ALL_ICD_JSON");
            i2 = 0 | 1;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "MTK_MODEM_BIN_TYPE_LAYOUT_DESC";
        }
        if (i == 1) {
            return "MTK_MODEM_BIN_TYPE_ALL_ICD_JSON";
        }
        return "0x" + Integer.toHexString(i);
    }
}
