package vendor.mediatek.hardware.radio.V3_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class Tft {
    public int operation = 0;
    public int pfNumber = 0;
    public ArrayList<PktFilter> pfList = new ArrayList<>();
    public TftParameter tftParameter = new TftParameter();

    public static final ArrayList<Tft> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<Tft> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 48, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            Tft tft = new Tft();
            tft.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 48);
            arrayList.add(tft);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<Tft> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 48);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 48);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != Tft.class) {
            return false;
        }
        Tft tft = (Tft) obj;
        return this.operation == tft.operation && this.pfNumber == tft.pfNumber && HidlSupport.deepEquals(this.pfList, tft.pfList) && HidlSupport.deepEquals(this.tftParameter, tft.tftParameter);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.operation))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.pfNumber))), Integer.valueOf(HidlSupport.deepHashCode(this.pfList)), Integer.valueOf(HidlSupport.deepHashCode(this.tftParameter)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.operation = hwBlob.getInt32(j + 0);
        this.pfNumber = hwBlob.getInt32(j + 4);
        int int32 = hwBlob.getInt32(j + 8 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 96, hwBlob.handle(), j + 8 + 0, true);
        this.pfList.clear();
        for (int i = 0; i < int32; i++) {
            PktFilter pktFilter = new PktFilter();
            pktFilter.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 96);
            this.pfList.add(pktFilter);
        }
        this.tftParameter.readEmbeddedFromParcel(hwParcel, hwBlob, j + 24);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(48L), 0L);
    }

    public final String toString() {
        return "{.operation = " + this.operation + ", .pfNumber = " + this.pfNumber + ", .pfList = " + this.pfList + ", .tftParameter = " + this.tftParameter + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(j + 0, this.operation);
        hwBlob.putInt32(4 + j, this.pfNumber);
        int size = this.pfList.size();
        hwBlob.putInt32(j + 8 + 8, size);
        hwBlob.putBool(j + 8 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 96);
        for (int i = 0; i < size; i++) {
            this.pfList.get(i).writeEmbeddedToBlob(hwBlob2, i * 96);
        }
        hwBlob.putBlob(8 + j + 0, hwBlob2);
        this.tftParameter.writeEmbeddedToBlob(hwBlob, 24 + j);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(48);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
