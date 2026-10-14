package android.hardware.radio.V1_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class SuppServiceClass {
    public static final int DATA = 2;
    public static final int DATA_ASYNC = 32;
    public static final int DATA_SYNC = 16;
    public static final int FAX = 4;
    public static final int MAX = 128;
    public static final int NONE = 0;
    public static final int PACKET = 64;
    public static final int PAD = 128;
    public static final int SMS = 8;
    public static final int VOICE = 1;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("NONE");
        if ((i & 1) == 1) {
            arrayList.add("VOICE");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("DATA");
            i2 |= 2;
        }
        if ((i & 4) == 4) {
            arrayList.add("FAX");
            i2 |= 4;
        }
        if ((i & 8) == 8) {
            arrayList.add("SMS");
            i2 |= 8;
        }
        if ((i & 16) == 16) {
            arrayList.add("DATA_SYNC");
            i2 |= 16;
        }
        if ((i & 32) == 32) {
            arrayList.add("DATA_ASYNC");
            i2 |= 32;
        }
        if ((i & 64) == 64) {
            arrayList.add("PACKET");
            i2 |= 64;
        }
        if ((i & 128) == 128) {
            arrayList.add("PAD");
            i2 |= 128;
        }
        if ((i & 128) == 128) {
            arrayList.add("MAX");
            i2 |= 128;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "NONE";
        }
        if (i == 1) {
            return "VOICE";
        }
        if (i == 2) {
            return "DATA";
        }
        if (i == 4) {
            return "FAX";
        }
        if (i == 8) {
            return "SMS";
        }
        if (i == 16) {
            return "DATA_SYNC";
        }
        if (i == 32) {
            return "DATA_ASYNC";
        }
        if (i == 64) {
            return "PACKET";
        }
        if (i == 128) {
            return "PAD";
        }
        if (i == 128) {
            return "MAX";
        }
        return "0x" + Integer.toHexString(i);
    }
}
