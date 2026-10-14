package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class HardwareConfigType {
    public static final int MODEM = 0;
    public static final int SIM = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("MODEM");
        if ((i & 1) == 1) {
            arrayList.add("SIM");
            i2 = 0 | 1;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "MODEM";
        }
        if (i == 1) {
            return "SIM";
        }
        return "0x" + Integer.toHexString(i);
    }
}
