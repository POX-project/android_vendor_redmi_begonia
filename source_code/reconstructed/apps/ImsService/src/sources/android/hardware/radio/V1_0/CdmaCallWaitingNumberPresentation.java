package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class CdmaCallWaitingNumberPresentation {
    public static final int ALLOWED = 0;
    public static final int RESTRICTED = 1;
    public static final int UNKNOWN = 2;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("ALLOWED");
        if ((i & 1) == 1) {
            arrayList.add("RESTRICTED");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("UNKNOWN");
            i2 |= 2;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "ALLOWED";
        }
        if (i == 1) {
            return "RESTRICTED";
        }
        if (i == 2) {
            return "UNKNOWN";
        }
        return "0x" + Integer.toHexString(i);
    }
}
