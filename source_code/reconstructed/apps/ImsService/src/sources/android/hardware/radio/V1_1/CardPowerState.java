package android.hardware.radio.V1_1;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class CardPowerState {
    public static final int POWER_DOWN = 0;
    public static final int POWER_UP = 1;
    public static final int POWER_UP_PASS_THROUGH = 2;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("POWER_DOWN");
        if ((i & 1) == 1) {
            arrayList.add("POWER_UP");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("POWER_UP_PASS_THROUGH");
            i2 |= 2;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "POWER_DOWN";
        }
        if (i == 1) {
            return "POWER_UP";
        }
        if (i == 2) {
            return "POWER_UP_PASS_THROUGH";
        }
        return "0x" + Integer.toHexString(i);
    }
}
