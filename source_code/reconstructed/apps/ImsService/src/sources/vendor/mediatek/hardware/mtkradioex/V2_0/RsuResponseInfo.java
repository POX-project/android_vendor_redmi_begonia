package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class RsuResponseInfo {
    public int opId = 0;
    public int requestId = 0;
    public int errCode = 0;
    public String data = new String();
    public long time = 0;
    public int version = 0;
    public int status = 0;
    public int reserveInt1 = 0;
    public int reserveInt2 = 0;
    public String reserveString1 = new String();

    public static final ArrayList<RsuResponseInfo> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<RsuResponseInfo> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 72, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            RsuResponseInfo rsuResponseInfo = new RsuResponseInfo();
            rsuResponseInfo.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 72);
            arrayList.add(rsuResponseInfo);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<RsuResponseInfo> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 72);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 72);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != RsuResponseInfo.class) {
            return false;
        }
        RsuResponseInfo rsuResponseInfo = (RsuResponseInfo) obj;
        return this.opId == rsuResponseInfo.opId && this.requestId == rsuResponseInfo.requestId && this.errCode == rsuResponseInfo.errCode && HidlSupport.deepEquals(this.data, rsuResponseInfo.data) && this.time == rsuResponseInfo.time && this.version == rsuResponseInfo.version && this.status == rsuResponseInfo.status && this.reserveInt1 == rsuResponseInfo.reserveInt1 && this.reserveInt2 == rsuResponseInfo.reserveInt2 && HidlSupport.deepEquals(this.reserveString1, rsuResponseInfo.reserveString1);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.opId))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.requestId))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.errCode))), Integer.valueOf(HidlSupport.deepHashCode(this.data)), Integer.valueOf(HidlSupport.deepHashCode(Long.valueOf(this.time))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.version))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.status))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.reserveInt1))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.reserveInt2))), Integer.valueOf(HidlSupport.deepHashCode(this.reserveString1)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.opId = hwBlob.getInt32(j + 0);
        this.requestId = hwBlob.getInt32(j + 4);
        this.errCode = hwBlob.getInt32(j + 8);
        String string = hwBlob.getString(j + 16);
        this.data = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 16 + 0, false);
        this.time = hwBlob.getInt64(j + 32);
        this.version = hwBlob.getInt32(j + 40);
        this.status = hwBlob.getInt32(j + 44);
        this.reserveInt1 = hwBlob.getInt32(j + 48);
        this.reserveInt2 = hwBlob.getInt32(j + 52);
        String string2 = hwBlob.getString(j + 56);
        this.reserveString1 = string2;
        hwParcel.readEmbeddedBuffer(string2.getBytes().length + 1, hwBlob.handle(), j + 56 + 0, false);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(72L), 0L);
    }

    public final String toString() {
        return "{.opId = " + this.opId + ", .requestId = " + this.requestId + ", .errCode = " + this.errCode + ", .data = " + this.data + ", .time = " + this.time + ", .version = " + this.version + ", .status = " + this.status + ", .reserveInt1 = " + this.reserveInt1 + ", .reserveInt2 = " + this.reserveInt2 + ", .reserveString1 = " + this.reserveString1 + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(0 + j, this.opId);
        hwBlob.putInt32(4 + j, this.requestId);
        hwBlob.putInt32(8 + j, this.errCode);
        hwBlob.putString(16 + j, this.data);
        hwBlob.putInt64(32 + j, this.time);
        hwBlob.putInt32(40 + j, this.version);
        hwBlob.putInt32(44 + j, this.status);
        hwBlob.putInt32(48 + j, this.reserveInt1);
        hwBlob.putInt32(52 + j, this.reserveInt2);
        hwBlob.putString(56 + j, this.reserveString1);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(72);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
