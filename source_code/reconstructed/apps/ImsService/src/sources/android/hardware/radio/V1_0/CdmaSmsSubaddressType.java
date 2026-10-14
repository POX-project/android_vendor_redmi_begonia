package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class CdmaSmsSubaddressType {
    public static final int NSAP = 0;
    public static final int USER_SPECIFIED = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("NSAP");
        if ((i & 1) == 1) {
            arrayList.add("USER_SPECIFIED");
            i2 = 0 | 1;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "NSAP";
        }
        if (i == 1) {
            return "USER_SPECIFIED";
        }
        return "0x" + Integer.toHexString(i);
    }
}
