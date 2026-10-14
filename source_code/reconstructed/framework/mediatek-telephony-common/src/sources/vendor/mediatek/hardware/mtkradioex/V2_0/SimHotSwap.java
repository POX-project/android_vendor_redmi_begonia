package vendor.mediatek.hardware.mtkradioex.V2_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class SimHotSwap {
    public static final int SIM_HOTSWAP_COMMONSLOT_NO_CHANGED = 6;
    public static final int SIM_HOTSWAP_MISSING = 3;
    public static final int SIM_HOTSWAP_PLUG_IN = 0;
    public static final int SIM_HOTSWAP_PLUG_OUT = 1;
    public static final int SIM_HOTSWAP_RECOVERY = 2;
    public static final int SIM_HOTSWAP_TRAY_PLUG_IN = 4;
    public static final int SIM_HOTSWAP_TRAY_PLUG_OUT = 5;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("SIM_HOTSWAP_PLUG_IN");
        if ((i & 1) == 1) {
            arrayList.add("SIM_HOTSWAP_PLUG_OUT");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("SIM_HOTSWAP_RECOVERY");
            i2 |= 2;
        }
        if ((i & 3) == 3) {
            arrayList.add("SIM_HOTSWAP_MISSING");
            i2 |= 3;
        }
        if ((i & 4) == 4) {
            arrayList.add("SIM_HOTSWAP_TRAY_PLUG_IN");
            i2 |= 4;
        }
        if ((i & 5) == 5) {
            arrayList.add("SIM_HOTSWAP_TRAY_PLUG_OUT");
            i2 |= 5;
        }
        if ((i & 6) == 6) {
            arrayList.add("SIM_HOTSWAP_COMMONSLOT_NO_CHANGED");
            i2 |= 6;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "SIM_HOTSWAP_PLUG_IN";
        }
        if (i == 1) {
            return "SIM_HOTSWAP_PLUG_OUT";
        }
        if (i == 2) {
            return "SIM_HOTSWAP_RECOVERY";
        }
        if (i == 3) {
            return "SIM_HOTSWAP_MISSING";
        }
        if (i == 4) {
            return "SIM_HOTSWAP_TRAY_PLUG_IN";
        }
        if (i == 5) {
            return "SIM_HOTSWAP_TRAY_PLUG_OUT";
        }
        if (i == 6) {
            return "SIM_HOTSWAP_COMMONSLOT_NO_CHANGED";
        }
        return "0x" + Integer.toHexString(i);
    }
}
