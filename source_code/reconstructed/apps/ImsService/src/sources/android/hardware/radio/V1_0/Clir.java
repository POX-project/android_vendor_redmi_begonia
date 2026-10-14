package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class Clir {
    public static final int DEFAULT = 0;
    public static final int INVOCATION = 1;
    public static final int SUPPRESSION = 2;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("DEFAULT");
        if ((i & 1) == 1) {
            arrayList.add("INVOCATION");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("SUPPRESSION");
            i2 |= 2;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "DEFAULT";
        }
        if (i == 1) {
            return "INVOCATION";
        }
        if (i == 2) {
            return "SUPPRESSION";
        }
        return "0x" + Integer.toHexString(i);
    }
}
