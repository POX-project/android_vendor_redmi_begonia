package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class RadioCapabilityStatus {
    public static final int FAIL = 2;
    public static final int NONE = 0;
    public static final int SUCCESS = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("NONE");
        if ((i & 1) == 1) {
            arrayList.add("SUCCESS");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("FAIL");
            i2 |= 2;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "NONE";
        }
        if (i == 1) {
            return "SUCCESS";
        }
        if (i == 2) {
            return "FAIL";
        }
        return "0x" + Integer.toHexString(i);
    }
}
