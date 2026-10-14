package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class OperatorStatus {
    public static final int AVAILABLE = 1;
    public static final int CURRENT = 2;
    public static final int FORBIDDEN = 3;
    public static final int UNKNOWN = 0;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("UNKNOWN");
        if ((i & 1) == 1) {
            arrayList.add("AVAILABLE");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("CURRENT");
            i2 |= 2;
        }
        if ((i & 3) == 3) {
            arrayList.add("FORBIDDEN");
            i2 |= 3;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "UNKNOWN";
        }
        if (i == 1) {
            return "AVAILABLE";
        }
        if (i == 2) {
            return "CURRENT";
        }
        if (i == 3) {
            return "FORBIDDEN";
        }
        return "0x" + Integer.toHexString(i);
    }
}
