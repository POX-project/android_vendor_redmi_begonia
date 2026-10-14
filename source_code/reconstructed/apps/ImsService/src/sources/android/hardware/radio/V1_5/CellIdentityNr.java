package android.hardware.radio.V1_5;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class CellIdentityNr {
    public android.hardware.radio.V1_4.CellIdentityNr base = new android.hardware.radio.V1_4.CellIdentityNr();
    public ArrayList<String> additionalPlmns = new ArrayList<>();
    public ArrayList<Integer> bands = new ArrayList<>();

    public static final ArrayList<CellIdentityNr> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<CellIdentityNr> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 120, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            CellIdentityNr cellIdentityNr = new CellIdentityNr();
            cellIdentityNr.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 120);
            arrayList.add(cellIdentityNr);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<CellIdentityNr> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 120);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 120);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != CellIdentityNr.class) {
            return false;
        }
        CellIdentityNr cellIdentityNr = (CellIdentityNr) obj;
        return HidlSupport.deepEquals(this.base, cellIdentityNr.base) && HidlSupport.deepEquals(this.additionalPlmns, cellIdentityNr.additionalPlmns) && HidlSupport.deepEquals(this.bands, cellIdentityNr.bands);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(this.base)), Integer.valueOf(HidlSupport.deepHashCode(this.additionalPlmns)), Integer.valueOf(HidlSupport.deepHashCode(this.bands)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.base.readEmbeddedFromParcel(hwParcel, hwBlob, j + 0);
        int int32 = hwBlob.getInt32(j + 88 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 16, hwBlob.handle(), j + 88 + 0, true);
        this.additionalPlmns.clear();
        for (int i = 0; i < int32; i++) {
            new String();
            String string = embeddedBuffer.getString(i * 16);
            hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, embeddedBuffer.handle(), (i * 16) + 0, false);
            this.additionalPlmns.add(string);
        }
        int int33 = hwBlob.getInt32(j + 104 + 8);
        HwBlob embeddedBuffer2 = hwParcel.readEmbeddedBuffer(int33 * 4, hwBlob.handle(), j + 104 + 0, true);
        this.bands.clear();
        for (int i2 = 0; i2 < int33; i2++) {
            this.bands.add(Integer.valueOf(embeddedBuffer2.getInt32(i2 * 4)));
        }
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(120L), 0L);
    }

    public final String toString() {
        return "{.base = " + this.base + ", .additionalPlmns = " + this.additionalPlmns + ", .bands = " + this.bands + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        this.base.writeEmbeddedToBlob(hwBlob, j + 0);
        int size = this.additionalPlmns.size();
        hwBlob.putInt32(j + 88 + 8, size);
        hwBlob.putBool(j + 88 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 16);
        for (int i = 0; i < size; i++) {
            hwBlob2.putString(i * 16, this.additionalPlmns.get(i));
        }
        hwBlob.putBlob(j + 88 + 0, hwBlob2);
        int size2 = this.bands.size();
        hwBlob.putInt32(j + 104 + 8, size2);
        hwBlob.putBool(j + 104 + 12, false);
        HwBlob hwBlob3 = new HwBlob(size2 * 4);
        for (int i2 = 0; i2 < size2; i2++) {
            hwBlob3.putInt32(i2 * 4, this.bands.get(i2).intValue());
        }
        hwBlob.putBlob(j + 104 + 0, hwBlob3);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(120);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
