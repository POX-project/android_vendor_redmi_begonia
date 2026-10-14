package android.hardware.radio.V1_1;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class ScanType {
    public static final int ONE_SHOT = 0;
    public static final int PERIODIC = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("ONE_SHOT");
        if ((i & 1) == 1) {
            arrayList.add("PERIODIC");
            i2 = 0 | 1;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "ONE_SHOT";
        }
        if (i == 1) {
            return "PERIODIC";
        }
        return "0x" + Integer.toHexString(i);
    }
}
