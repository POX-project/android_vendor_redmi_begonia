package vendor.mediatek.hardware.radio.V3_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class DsbpState {
    public static final int DSBP_ENHANCEMENT_END = 0;
    public static final int DSBP_ENHANCEMENT_START = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("DSBP_ENHANCEMENT_END");
        if ((i & 1) == 1) {
            arrayList.add("DSBP_ENHANCEMENT_START");
            i2 = 0 | 1;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "DSBP_ENHANCEMENT_END";
        }
        if (i == 1) {
            return "DSBP_ENHANCEMENT_START";
        }
        return "0x" + Integer.toHexString(i);
    }
}
