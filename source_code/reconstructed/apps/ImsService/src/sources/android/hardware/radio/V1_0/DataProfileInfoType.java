package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class DataProfileInfoType {
    public static final int COMMON = 0;
    public static final int THREE_GPP = 1;
    public static final int THREE_GPP2 = 2;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("COMMON");
        if ((i & 1) == 1) {
            arrayList.add("THREE_GPP");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("THREE_GPP2");
            i2 |= 2;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "COMMON";
        }
        if (i == 1) {
            return "THREE_GPP";
        }
        if (i == 2) {
            return "THREE_GPP2";
        }
        return "0x" + Integer.toHexString(i);
    }
}
