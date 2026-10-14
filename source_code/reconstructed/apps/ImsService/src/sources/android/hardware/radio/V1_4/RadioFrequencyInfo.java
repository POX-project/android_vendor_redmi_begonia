package android.hardware.radio.V1_4;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class RadioFrequencyInfo {
    private byte hidl_d = 0;
    private Object hidl_o;

    public static final class hidl_discriminator {
        public static final byte channelNumber = 1;
        public static final byte range = 0;

        private hidl_discriminator() {
        }

        public static final String getName(byte b) {
            if (b != 0) {
                return b != 1 ? "Unknown" : "channelNumber";
            }
            return "range";
        }
    }

    public RadioFrequencyInfo() {
        this.hidl_o = null;
        this.hidl_o = 0;
    }

    public static final ArrayList<RadioFrequencyInfo> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<RadioFrequencyInfo> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 8, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            RadioFrequencyInfo radioFrequencyInfo = new RadioFrequencyInfo();
            radioFrequencyInfo.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 8);
            arrayList.add(radioFrequencyInfo);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<RadioFrequencyInfo> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 8);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 8);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public int channelNumber() {
        if (this.hidl_d == 1) {
            Object obj = this.hidl_o;
            if (obj == null || Integer.class.isInstance(obj)) {
                return ((Integer) this.hidl_o).intValue();
            }
            throw new Error("Union is in a corrupted state.");
        }
        Object obj2 = this.hidl_o;
        throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
    }

    public void channelNumber(int i) {
        this.hidl_d = (byte) 1;
        this.hidl_o = Integer.valueOf(i);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != RadioFrequencyInfo.class) {
            return false;
        }
        RadioFrequencyInfo radioFrequencyInfo = (RadioFrequencyInfo) obj;
        return this.hidl_d == radioFrequencyInfo.hidl_d && HidlSupport.deepEquals(this.hidl_o, radioFrequencyInfo.hidl_o);
    }

    public byte getDiscriminator() {
        return this.hidl_d;
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(this.hidl_o)), Integer.valueOf(Objects.hashCode(Byte.valueOf(this.hidl_d))));
    }

    public int range() {
        if (this.hidl_d == 0) {
            Object obj = this.hidl_o;
            if (obj == null || Integer.class.isInstance(obj)) {
                return ((Integer) this.hidl_o).intValue();
            }
            throw new Error("Union is in a corrupted state.");
        }
        Object obj2 = this.hidl_o;
        throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
    }

    public void range(int i) {
        this.hidl_d = (byte) 0;
        this.hidl_o = Integer.valueOf(i);
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        byte int8 = hwBlob.getInt8(0 + j);
        this.hidl_d = int8;
        if (int8 == 0) {
            this.hidl_o = 0;
            this.hidl_o = Integer.valueOf(hwBlob.getInt32(4 + j));
        } else if (int8 == 1) {
            this.hidl_o = 0;
            this.hidl_o = Integer.valueOf(hwBlob.getInt32(4 + j));
        } else {
            throw new IllegalStateException("Unknown union discriminator (value: " + ((int) this.hidl_d) + ").");
        }
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(8L), 0L);
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("{");
        byte b = this.hidl_d;
        if (b == 0) {
            sb.append(".range = ");
            sb.append(FrequencyRange.toString(range()));
        } else {
            if (b != 1) {
                throw new Error("Unknown union discriminator (value: " + ((int) this.hidl_d) + ").");
            }
            sb.append(".channelNumber = ");
            sb.append(channelNumber());
        }
        sb.append("}");
        return sb.toString();
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt8(0 + j, this.hidl_d);
        byte b = this.hidl_d;
        if (b == 0) {
            hwBlob.putInt32(4 + j, range());
            return;
        }
        if (b == 1) {
            hwBlob.putInt32(4 + j, channelNumber());
            return;
        }
        throw new Error("Unknown union discriminator (value: " + ((int) this.hidl_d) + ").");
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(8);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
