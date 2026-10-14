package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class SapDisconnectType {
    public static final int GRACEFUL = 0;
    public static final int IMMEDIATE = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("GRACEFUL");
        if ((i & 1) == 1) {
            arrayList.add("IMMEDIATE");
            i2 = 0 | 1;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "GRACEFUL";
        }
        if (i == 1) {
            return "IMMEDIATE";
        }
        return "0x" + Integer.toHexString(i);
    }
}
