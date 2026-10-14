package android.hardware.radio.V1_4;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class EmergencyCallRouting {
    public static final int EMERGENCY = 1;
    public static final int NORMAL = 2;
    public static final int UNKNOWN = 0;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("UNKNOWN");
        if ((i & 1) == 1) {
            arrayList.add("EMERGENCY");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("NORMAL");
            i2 |= 2;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "UNKNOWN";
        }
        if (i == 1) {
            return "EMERGENCY";
        }
        if (i == 2) {
            return "NORMAL";
        }
        return "0x" + Integer.toHexString(i);
    }
}
