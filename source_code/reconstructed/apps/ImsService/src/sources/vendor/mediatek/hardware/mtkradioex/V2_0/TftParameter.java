package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class TftParameter {
    public int linkedPfNumber = 0;
    public ArrayList<Integer> linkedPfList = new ArrayList<>();

    public static final ArrayList<TftParameter> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<TftParameter> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 24, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            TftParameter tftParameter = new TftParameter();
            tftParameter.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 24);
            arrayList.add(tftParameter);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<TftParameter> arrayList) {
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
        if (obj == null || obj.getClass() != TftParameter.class) {
            return false;
        }
        TftParameter tftParameter = (TftParameter) obj;
        return this.linkedPfNumber == tftParameter.linkedPfNumber && HidlSupport.deepEquals(this.linkedPfList, tftParameter.linkedPfList);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.linkedPfNumber))), Integer.valueOf(HidlSupport.deepHashCode(this.linkedPfList)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.linkedPfNumber = hwBlob.getInt32(j + 0);
        int int32 = hwBlob.getInt32(j + 8 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 4, hwBlob.handle(), j + 8 + 0, true);
        this.linkedPfList.clear();
        for (int i = 0; i < int32; i++) {
            this.linkedPfList.add(Integer.valueOf(embeddedBuffer.getInt32(i * 4)));
        }
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(24L), 0L);
    }

    public final String toString() {
        return "{.linkedPfNumber = " + this.linkedPfNumber + ", .linkedPfList = " + this.linkedPfList + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(j + 0, this.linkedPfNumber);
        int size = this.linkedPfList.size();
        hwBlob.putInt32(j + 8 + 8, size);
        hwBlob.putBool(j + 8 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 4);
        for (int i = 0; i < size; i++) {
            hwBlob2.putInt32(i * 4, this.linkedPfList.get(i).intValue());
        }
        hwBlob.putBlob(8 + j + 0, hwBlob2);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(24);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
