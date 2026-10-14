package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class Qos {
    public int qci = 0;
    public int dlGbr = 0;
    public int ulGbr = 0;
    public int dlMbr = 0;
    public int ulMbr = 0;

    public static final ArrayList<Qos> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<Qos> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 20, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            Qos qos = new Qos();
            qos.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 20);
            arrayList.add(qos);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<Qos> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 20);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 20);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != Qos.class) {
            return false;
        }
        Qos qos = (Qos) obj;
        return this.qci == qos.qci && this.dlGbr == qos.dlGbr && this.ulGbr == qos.ulGbr && this.dlMbr == qos.dlMbr && this.ulMbr == qos.ulMbr;
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.qci))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.dlGbr))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.ulGbr))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.dlMbr))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.ulMbr))));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.qci = hwBlob.getInt32(0 + j);
        this.dlGbr = hwBlob.getInt32(4 + j);
        this.ulGbr = hwBlob.getInt32(8 + j);
        this.dlMbr = hwBlob.getInt32(12 + j);
        this.ulMbr = hwBlob.getInt32(16 + j);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(20L), 0L);
    }

    public final String toString() {
        return "{.qci = " + this.qci + ", .dlGbr = " + this.dlGbr + ", .ulGbr = " + this.ulGbr + ", .dlMbr = " + this.dlMbr + ", .ulMbr = " + this.ulMbr + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(0 + j, this.qci);
        hwBlob.putInt32(4 + j, this.dlGbr);
        hwBlob.putInt32(8 + j, this.ulGbr);
        hwBlob.putInt32(12 + j, this.dlMbr);
        hwBlob.putInt32(16 + j, this.ulMbr);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(20);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
