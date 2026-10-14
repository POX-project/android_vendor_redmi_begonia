package vendor.mediatek.hardware.mtkradioex.V2_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class CallInfoType {
    public static final int MT_CALL_DIAL_IMS_STK = 100;
    public static final int MT_CALL_GWSD = 10;
    public static final int MT_CALL_MISSED = 2;
    public static final int MT_CALL_NONE = 0;
    public static final int MT_CALL_NUMREDIRECT = 3;
    public static final int MT_CALL_REJECTED = 1;
    public static final int MT_CALL_RQ = 4;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("MT_CALL_NONE");
        if ((i & 1) == 1) {
            arrayList.add("MT_CALL_REJECTED");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("MT_CALL_MISSED");
            i2 |= 2;
        }
        if ((i & 3) == 3) {
            arrayList.add("MT_CALL_NUMREDIRECT");
            i2 |= 3;
        }
        if ((i & 4) == 4) {
            arrayList.add("MT_CALL_RQ");
            i2 |= 4;
        }
        if ((i & 10) == 10) {
            arrayList.add("MT_CALL_GWSD");
            i2 |= 10;
        }
        if ((i & 100) == 100) {
            arrayList.add("MT_CALL_DIAL_IMS_STK");
            i2 |= 100;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "MT_CALL_NONE";
        }
        if (i == 1) {
            return "MT_CALL_REJECTED";
        }
        if (i == 2) {
            return "MT_CALL_MISSED";
        }
        if (i == 3) {
            return "MT_CALL_NUMREDIRECT";
        }
        if (i == 4) {
            return "MT_CALL_RQ";
        }
        if (i == 10) {
            return "MT_CALL_GWSD";
        }
        if (i == 100) {
            return "MT_CALL_DIAL_IMS_STK";
        }
        return "0x" + Integer.toHexString(i);
    }
}
