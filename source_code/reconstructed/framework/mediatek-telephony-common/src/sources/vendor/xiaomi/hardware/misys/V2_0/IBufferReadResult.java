package vendor.xiaomi.hardware.misys.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;
import vendor.xiaomi.hardware.misys.V1_0.IResultValue;

/* JADX INFO: loaded from: classes.dex */
public final class IBufferReadResult {
    public int value = 0;
    public ArrayList<Byte> data = new ArrayList<>();

    public static final ArrayList<IBufferReadResult> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<IBufferReadResult> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 24, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            IBufferReadResult iBufferReadResult = new IBufferReadResult();
            iBufferReadResult.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 24);
            arrayList.add(iBufferReadResult);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<IBufferReadResult> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 24);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 24);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != IBufferReadResult.class) {
            return false;
        }
        IBufferReadResult iBufferReadResult = (IBufferReadResult) obj;
        return this.value == iBufferReadResult.value && HidlSupport.deepEquals(this.data, iBufferReadResult.data);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.value))), Integer.valueOf(HidlSupport.deepHashCode(this.data)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.value = hwBlob.getInt32(j + 0);
        int int32 = hwBlob.getInt32(j + 8 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 1, hwBlob.handle(), j + 8 + 0, true);
        this.data.clear();
        for (int i = 0; i < int32; i++) {
            this.data.add(Byte.valueOf(embeddedBuffer.getInt8(i * 1)));
        }
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(24L), 0L);
    }

    public final String toString() {
        return "{.value = " + IResultValue.toString(this.value) + ", .data = " + this.data + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(j + 0, this.value);
        int size = this.data.size();
        hwBlob.putInt32(j + 8 + 8, size);
        hwBlob.putBool(j + 8 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 1);
        for (int i = 0; i < size; i++) {
            hwBlob2.putInt8(i * 1, this.data.get(i).byteValue());
        }
        hwBlob.putBlob(8 + j + 0, hwBlob2);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(24);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
