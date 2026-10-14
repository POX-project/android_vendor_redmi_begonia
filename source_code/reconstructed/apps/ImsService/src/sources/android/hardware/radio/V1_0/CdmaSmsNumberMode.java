package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class CdmaSmsNumberMode {
    public static final int DATA_NETWORK = 1;
    public static final int NOT_DATA_NETWORK = 0;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("NOT_DATA_NETWORK");
        if ((i & 1) == 1) {
            arrayList.add("DATA_NETWORK");
            i2 = 0 | 1;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "NOT_DATA_NETWORK";
        }
        if (i == 1) {
            return "DATA_NETWORK";
        }
        return "0x" + Integer.toHexString(i);
    }
}
