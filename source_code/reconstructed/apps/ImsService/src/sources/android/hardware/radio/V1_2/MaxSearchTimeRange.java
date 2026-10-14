package android.hardware.radio.V1_2;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class MaxSearchTimeRange {
    public static final int MAX = 3600;
    public static final int MIN = 60;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        if ((i & 60) == 60) {
            arrayList.add("MIN");
            i2 = 0 | 60;
        }
        if ((i & MAX) == 3600) {
            arrayList.add("MAX");
            i2 |= MAX;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 60) {
            return "MIN";
        }
        if (i == 3600) {
            return "MAX";
        }
        return "0x" + Integer.toHexString(i);
    }
}
