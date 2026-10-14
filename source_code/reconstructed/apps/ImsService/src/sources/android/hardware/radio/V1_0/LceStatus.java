package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class LceStatus {
    public static final int ACTIVE = 2;
    public static final int NOT_SUPPORTED = 0;
    public static final int STOPPED = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("NOT_SUPPORTED");
        if ((i & 1) == 1) {
            arrayList.add("STOPPED");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("ACTIVE");
            i2 |= 2;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "NOT_SUPPORTED";
        }
        if (i == 1) {
            return "STOPPED";
        }
        if (i == 2) {
            return "ACTIVE";
        }
        return "0x" + Integer.toHexString(i);
    }
}
