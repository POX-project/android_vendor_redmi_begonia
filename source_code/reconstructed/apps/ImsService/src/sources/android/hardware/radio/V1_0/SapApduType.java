package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class SapApduType {
    public static final int APDU = 0;
    public static final int APDU7816 = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("APDU");
        if ((i & 1) == 1) {
            arrayList.add("APDU7816");
            i2 = 0 | 1;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "APDU";
        }
        if (i == 1) {
            return "APDU7816";
        }
        return "0x" + Integer.toHexString(i);
    }
}
