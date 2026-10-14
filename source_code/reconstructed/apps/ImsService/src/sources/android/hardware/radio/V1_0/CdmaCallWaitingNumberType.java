package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class CdmaCallWaitingNumberType {
    public static final int INTERNATIONAL = 1;
    public static final int NATIONAL = 2;
    public static final int NETWORK_SPECIFIC = 3;
    public static final int SUBSCRIBER = 4;
    public static final int UNKNOWN = 0;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("UNKNOWN");
        if ((i & 1) == 1) {
            arrayList.add("INTERNATIONAL");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("NATIONAL");
            i2 |= 2;
        }
        if ((i & 3) == 3) {
            arrayList.add("NETWORK_SPECIFIC");
            i2 |= 3;
        }
        if ((i & 4) == 4) {
            arrayList.add("SUBSCRIBER");
            i2 |= 4;
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
            return "INTERNATIONAL";
        }
        if (i == 2) {
            return "NATIONAL";
        }
        if (i == 3) {
            return "NETWORK_SPECIFIC";
        }
        if (i == 4) {
            return "SUBSCRIBER";
        }
        return "0x" + Integer.toHexString(i);
    }
}
