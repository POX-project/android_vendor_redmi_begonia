package android.hardware.radio.V1_1;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class KeepaliveStatusCode {
    public static final int ACTIVE = 0;
    public static final int INACTIVE = 1;
    public static final int PENDING = 2;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("ACTIVE");
        if ((i & 1) == 1) {
            arrayList.add("INACTIVE");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("PENDING");
            i2 |= 2;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "ACTIVE";
        }
        if (i == 1) {
            return "INACTIVE";
        }
        if (i == 2) {
            return "PENDING";
        }
        return "0x" + Integer.toHexString(i);
    }
}
