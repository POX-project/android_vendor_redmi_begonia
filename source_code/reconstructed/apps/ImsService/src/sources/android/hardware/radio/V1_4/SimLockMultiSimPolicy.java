package android.hardware.radio.V1_4;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class SimLockMultiSimPolicy {
    public static final int NO_MULTISIM_POLICY = 0;
    public static final int ONE_VALID_SIM_MUST_BE_PRESENT = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("NO_MULTISIM_POLICY");
        if ((i & 1) == 1) {
            arrayList.add("ONE_VALID_SIM_MUST_BE_PRESENT");
            i2 = 0 | 1;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "NO_MULTISIM_POLICY";
        }
        if (i == 1) {
            return "ONE_VALID_SIM_MUST_BE_PRESENT";
        }
        return "0x" + Integer.toHexString(i);
    }
}
