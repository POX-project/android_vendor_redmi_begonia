package android.hardware.radio.V1_1;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class RadioAccessSpecifier {
    public int radioAccessNetwork = 0;
    public ArrayList<Integer> geranBands = new ArrayList<>();
    public ArrayList<Integer> utranBands = new ArrayList<>();
    public ArrayList<Integer> eutranBands = new ArrayList<>();
    public ArrayList<Integer> channels = new ArrayList<>();

    public static final ArrayList<RadioAccessSpecifier> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<RadioAccessSpecifier> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 72, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            RadioAccessSpecifier radioAccessSpecifier = new RadioAccessSpecifier();
            radioAccessSpecifier.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 72);
            arrayList.add(radioAccessSpecifier);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<RadioAccessSpecifier> arrayList) {
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
        if (obj == null || obj.getClass() != RadioAccessSpecifier.class) {
            return false;
        }
        RadioAccessSpecifier radioAccessSpecifier = (RadioAccessSpecifier) obj;
        return this.radioAccessNetwork == radioAccessSpecifier.radioAccessNetwork && HidlSupport.deepEquals(this.geranBands, radioAccessSpecifier.geranBands) && HidlSupport.deepEquals(this.utranBands, radioAccessSpecifier.utranBands) && HidlSupport.deepEquals(this.eutranBands, radioAccessSpecifier.eutranBands) && HidlSupport.deepEquals(this.channels, radioAccessSpecifier.channels);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.radioAccessNetwork))), Integer.valueOf(HidlSupport.deepHashCode(this.geranBands)), Integer.valueOf(HidlSupport.deepHashCode(this.utranBands)), Integer.valueOf(HidlSupport.deepHashCode(this.eutranBands)), Integer.valueOf(HidlSupport.deepHashCode(this.channels)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.radioAccessNetwork = hwBlob.getInt32(j + 0);
        int int32 = hwBlob.getInt32(j + 8 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 4, hwBlob.handle(), j + 8 + 0, true);
        this.geranBands.clear();
        for (int i = 0; i < int32; i++) {
            this.geranBands.add(Integer.valueOf(embeddedBuffer.getInt32(i * 4)));
        }
        int int33 = hwBlob.getInt32(j + 24 + 8);
        HwBlob embeddedBuffer2 = hwParcel.readEmbeddedBuffer(int33 * 4, hwBlob.handle(), j + 24 + 0, true);
        this.utranBands.clear();
        for (int i2 = 0; i2 < int33; i2++) {
            this.utranBands.add(Integer.valueOf(embeddedBuffer2.getInt32(i2 * 4)));
        }
        int int34 = hwBlob.getInt32(j + 40 + 8);
        HwBlob embeddedBuffer3 = hwParcel.readEmbeddedBuffer(int34 * 4, hwBlob.handle(), j + 40 + 0, true);
        this.eutranBands.clear();
        for (int i3 = 0; i3 < int34; i3++) {
            this.eutranBands.add(Integer.valueOf(embeddedBuffer3.getInt32(i3 * 4)));
        }
        int int35 = hwBlob.getInt32(j + 56 + 8);
        HwBlob embeddedBuffer4 = hwParcel.readEmbeddedBuffer(int35 * 4, hwBlob.handle(), j + 56 + 0, true);
        this.channels.clear();
        for (int i4 = 0; i4 < int35; i4++) {
            this.channels.add(Integer.valueOf(embeddedBuffer4.getInt32(i4 * 4)));
        }
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(72L), 0L);
    }

    public final String toString() {
        return "{.radioAccessNetwork = " + RadioAccessNetworks.toString(this.radioAccessNetwork) + ", .geranBands = " + this.geranBands + ", .utranBands = " + this.utranBands + ", .eutranBands = " + this.eutranBands + ", .channels = " + this.channels + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(j + 0, this.radioAccessNetwork);
        int size = this.geranBands.size();
        hwBlob.putInt32(j + 8 + 8, size);
        hwBlob.putBool(j + 8 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 4);
        for (int i = 0; i < size; i++) {
            hwBlob2.putInt32(i * 4, this.geranBands.get(i).intValue());
        }
        hwBlob.putBlob(j + 8 + 0, hwBlob2);
        int size2 = this.utranBands.size();
        hwBlob.putInt32(j + 24 + 8, size2);
        hwBlob.putBool(j + 24 + 12, false);
        HwBlob hwBlob3 = new HwBlob(size2 * 4);
        for (int i2 = 0; i2 < size2; i2++) {
            hwBlob3.putInt32(i2 * 4, this.utranBands.get(i2).intValue());
        }
        hwBlob.putBlob(j + 24 + 0, hwBlob3);
        int size3 = this.eutranBands.size();
        hwBlob.putInt32(j + 40 + 8, size3);
        hwBlob.putBool(j + 40 + 12, false);
        HwBlob hwBlob4 = new HwBlob(size3 * 4);
        for (int i3 = 0; i3 < size3; i3++) {
            hwBlob4.putInt32(i3 * 4, this.eutranBands.get(i3).intValue());
        }
        hwBlob.putBlob(j + 40 + 0, hwBlob4);
        int size4 = this.channels.size();
        hwBlob.putInt32(j + 56 + 8, size4);
        hwBlob.putBool(j + 56 + 12, false);
        HwBlob hwBlob5 = new HwBlob(size4 * 4);
        for (int i4 = 0; i4 < size4; i4++) {
            hwBlob5.putInt32(i4 * 4, this.channels.get(i4).intValue());
        }
        hwBlob.putBlob(j + 56 + 0, hwBlob5);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(72);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
