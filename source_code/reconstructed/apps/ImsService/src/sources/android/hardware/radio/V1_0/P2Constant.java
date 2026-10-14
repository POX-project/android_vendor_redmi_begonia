package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class P2Constant {
    public static final int NO_P2 = -1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        if ((i & (-1)) == -1) {
            arrayList.add("NO_P2");
            i2 = 0 | (-1);
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == -1) {
            return "NO_P2";
        }
        return "0x" + Integer.toHexString(i);
    }
}
