package android.hardware.radio.V1_1;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class KeepaliveType {
    public static final int NATT_IPV4 = 0;
    public static final int NATT_IPV6 = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("NATT_IPV4");
        if ((i & 1) == 1) {
            arrayList.add("NATT_IPV6");
            i2 = 0 | 1;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "NATT_IPV4";
        }
        if (i == 1) {
            return "NATT_IPV6";
        }
        return "0x" + Integer.toHexString(i);
    }
}
