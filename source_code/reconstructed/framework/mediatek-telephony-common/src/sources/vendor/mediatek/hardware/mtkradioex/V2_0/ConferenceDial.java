package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.hardware.radio.V1_0.Clir;
import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class ConferenceDial {
    public int clir = 0;
    public boolean isVideoCall = false;
    public ArrayList<String> dialNumbers = new ArrayList<>();

    public static final ArrayList<ConferenceDial> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<ConferenceDial> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 24, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            ConferenceDial conferenceDial = new ConferenceDial();
            conferenceDial.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 24);
            arrayList.add(conferenceDial);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<ConferenceDial> arrayList) {
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
        if (obj == null || obj.getClass() != ConferenceDial.class) {
            return false;
        }
        ConferenceDial conferenceDial = (ConferenceDial) obj;
        return this.clir == conferenceDial.clir && this.isVideoCall == conferenceDial.isVideoCall && HidlSupport.deepEquals(this.dialNumbers, conferenceDial.dialNumbers);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.clir))), Integer.valueOf(HidlSupport.deepHashCode(Boolean.valueOf(this.isVideoCall))), Integer.valueOf(HidlSupport.deepHashCode(this.dialNumbers)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.clir = hwBlob.getInt32(j + 0);
        this.isVideoCall = hwBlob.getBool(j + 4);
        int int32 = hwBlob.getInt32(j + 8 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 16, hwBlob.handle(), j + 8 + 0, true);
        this.dialNumbers.clear();
        for (int i = 0; i < int32; i++) {
            new String();
            String string = embeddedBuffer.getString(i * 16);
            hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, embeddedBuffer.handle(), (i * 16) + 0, false);
            this.dialNumbers.add(string);
        }
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(24L), 0L);
    }

    public final String toString() {
        return "{.clir = " + Clir.toString(this.clir) + ", .isVideoCall = " + this.isVideoCall + ", .dialNumbers = " + this.dialNumbers + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(j + 0, this.clir);
        hwBlob.putBool(4 + j, this.isVideoCall);
        int size = this.dialNumbers.size();
        hwBlob.putInt32(j + 8 + 8, size);
        hwBlob.putBool(j + 8 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 16);
        for (int i = 0; i < size; i++) {
            hwBlob2.putString(i * 16, this.dialNumbers.get(i));
        }
        hwBlob.putBlob(8 + j + 0, hwBlob2);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(24);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
