package android.hardware.radio.V1_5;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class AddressProperty {
    public static final int DEPRECATED = 32;
    public static final int NONE = 0;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("NONE");
        if ((i & 32) == 32) {
            arrayList.add("DEPRECATED");
            i2 = 0 | 32;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "NONE";
        }
        if (i == 32) {
            return "DEPRECATED";
        }
        return "0x" + Integer.toHexString(i);
    }
}
