package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class RadioState {
    public static final int OFF = 0;
    public static final int ON = 10;
    public static final int UNAVAILABLE = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("OFF");
        if ((i & 1) == 1) {
            arrayList.add("UNAVAILABLE");
            i2 = 0 | 1;
        }
        if ((i & 10) == 10) {
            arrayList.add("ON");
            i2 |= 10;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "OFF";
        }
        if (i == 1) {
            return "UNAVAILABLE";
        }
        if (i == 10) {
            return "ON";
        }
        return "0x" + Integer.toHexString(i);
    }
}
