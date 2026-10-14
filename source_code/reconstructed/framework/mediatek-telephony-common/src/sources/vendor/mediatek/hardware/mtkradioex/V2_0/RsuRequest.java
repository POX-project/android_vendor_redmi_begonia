package vendor.mediatek.hardware.mtkradioex.V2_0;

import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public final class RsuRequest {
    public static final int RSU_REQUEST_GET_LOCK_STATUS = 5;
    public static final int RSU_REQUEST_GET_LOCK_VERSION = 3;
    public static final int RSU_REQUEST_GET_SHARED_KEY = 1;
    public static final int RSU_REQUEST_INIT_REQUEST = 0;
    public static final int RSU_REQUEST_RESET_LOCK_DATA = 4;
    public static final int RSU_REQUEST_UNLOCK_TIMER = 50;
    public static final int RSU_REQUEST_UPDATE_LOCK_DATA = 2;

    public static final String dumpBitfield(int i) {
        ArrayList arrayList = new ArrayList();
        int i2 = 0;
        arrayList.add("RSU_REQUEST_INIT_REQUEST");
        if ((i & 1) == 1) {
            arrayList.add("RSU_REQUEST_GET_SHARED_KEY");
            i2 = 0 | 1;
        }
        if ((i & 2) == 2) {
            arrayList.add("RSU_REQUEST_UPDATE_LOCK_DATA");
            i2 |= 2;
        }
        if ((i & 3) == 3) {
            arrayList.add("RSU_REQUEST_GET_LOCK_VERSION");
            i2 |= 3;
        }
        if ((i & 4) == 4) {
            arrayList.add("RSU_REQUEST_RESET_LOCK_DATA");
            i2 |= 4;
        }
        if ((i & 5) == 5) {
            arrayList.add("RSU_REQUEST_GET_LOCK_STATUS");
            i2 |= 5;
        }
        if ((i & 50) == 50) {
            arrayList.add("RSU_REQUEST_UNLOCK_TIMER");
            i2 |= 50;
        }
        if (i != i2) {
            arrayList.add("0x" + Integer.toHexString((~i2) & i));
        }
        return String.join(" | ", arrayList);
    }

    public static final String toString(int i) {
        if (i == 0) {
            return "RSU_REQUEST_INIT_REQUEST";
        }
        if (i == 1) {
            return "RSU_REQUEST_GET_SHARED_KEY";
        }
        if (i == 2) {
            return "RSU_REQUEST_UPDATE_LOCK_DATA";
        }
        if (i == 3) {
            return "RSU_REQUEST_GET_LOCK_VERSION";
        }
        if (i == 4) {
            return "RSU_REQUEST_RESET_LOCK_DATA";
        }
        if (i == 5) {
            return "RSU_REQUEST_GET_LOCK_STATUS";
        }
        if (i == 50) {
            return "RSU_REQUEST_UNLOCK_TIMER";
        }
        return "0x" + Integer.toHexString(i);
    }
}
