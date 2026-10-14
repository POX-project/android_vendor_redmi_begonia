package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class DeviceStateType {
    public static final int CHARGING_STATE = 1;
    public static final int LOW_DATA_EXPECTED = 2;
    public static final int POWER_SAVE_MODE = 0;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("POWER_SAVE_MODE");
        if ((i & 1) == 1) {
            arrayList.add("CHARGING_STATE");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("LOW_DATA_EXPECTED");
            i2 |= 2;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "POWER_SAVE_MODE";
        }
        if (i == 1) {
            return "CHARGING_STATE";
        }
        if (i == 2) {
            return "LOW_DATA_EXPECTED";
        }
        return "0x" + Integer.toHexString(i);
    }
}
