package vendor.mediatek.hardware.mtkradioex.V2_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class ImsRegStatusReportType {
    public static final int IMS_REGISTERED = 1;
    public static final int IMS_REGISTERING = 0;
    public static final int IMS_REGISTER_FAIL = 2;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("IMS_REGISTERING");
        if ((i & 1) == 1) {
            arrayList.add("IMS_REGISTERED");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("IMS_REGISTER_FAIL");
            i2 |= 2;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "IMS_REGISTERING";
        }
        if (i == 1) {
            return "IMS_REGISTERED";
        }
        if (i == 2) {
            return "IMS_REGISTER_FAIL";
        }
        return "0x" + Integer.toHexString(i);
    }
}
