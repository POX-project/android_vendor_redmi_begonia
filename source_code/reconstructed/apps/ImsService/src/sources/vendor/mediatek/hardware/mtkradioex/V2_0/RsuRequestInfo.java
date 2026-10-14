package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class RsuRequestInfo {
    public int opId = 0;
    public int requestId = 0;
    public int requestType = 0;
    public String data = new String();
    public int reserveInt1 = 0;
    public int reserveInt2 = 0;
    public String reserveString1 = new String();

    public static final ArrayList<RsuRequestInfo> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<RsuRequestInfo> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 56, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            RsuRequestInfo rsuRequestInfo = new RsuRequestInfo();
            rsuRequestInfo.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 56);
            arrayList.add(rsuRequestInfo);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<RsuRequestInfo> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 56);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 56);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != RsuRequestInfo.class) {
            return false;
        }
        RsuRequestInfo rsuRequestInfo = (RsuRequestInfo) obj;
        return this.opId == rsuRequestInfo.opId && this.requestId == rsuRequestInfo.requestId && this.requestType == rsuRequestInfo.requestType && HidlSupport.deepEquals(this.data, rsuRequestInfo.data) && this.reserveInt1 == rsuRequestInfo.reserveInt1 && this.reserveInt2 == rsuRequestInfo.reserveInt2 && HidlSupport.deepEquals(this.reserveString1, rsuRequestInfo.reserveString1);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.opId))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.requestId))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.requestType))), Integer.valueOf(HidlSupport.deepHashCode(this.data)), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.reserveInt1))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.reserveInt2))), Integer.valueOf(HidlSupport.deepHashCode(this.reserveString1)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.opId = hwBlob.getInt32(j + 0);
        this.requestId = hwBlob.getInt32(j + 4);
        this.requestType = hwBlob.getInt32(j + 8);
        String string = hwBlob.getString(j + 16);
        this.data = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 16 + 0, false);
        this.reserveInt1 = hwBlob.getInt32(j + 32);
        this.reserveInt2 = hwBlob.getInt32(j + 36);
        String string2 = hwBlob.getString(j + 40);
        this.reserveString1 = string2;
        hwParcel.readEmbeddedBuffer(string2.getBytes().length + 1, hwBlob.handle(), j + 40 + 0, false);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(56L), 0L);
    }

    public final String toString() {
        return "{.opId = " + this.opId + ", .requestId = " + this.requestId + ", .requestType = " + this.requestType + ", .data = " + this.data + ", .reserveInt1 = " + this.reserveInt1 + ", .reserveInt2 = " + this.reserveInt2 + ", .reserveString1 = " + this.reserveString1 + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(0 + j, this.opId);
        hwBlob.putInt32(4 + j, this.requestId);
        hwBlob.putInt32(8 + j, this.requestType);
        hwBlob.putString(16 + j, this.data);
        hwBlob.putInt32(32 + j, this.reserveInt1);
        hwBlob.putInt32(36 + j, this.reserveInt2);
        hwBlob.putString(40 + j, this.reserveString1);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(56);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
