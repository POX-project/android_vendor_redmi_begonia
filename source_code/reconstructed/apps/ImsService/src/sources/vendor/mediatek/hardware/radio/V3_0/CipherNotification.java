package vendor.mediatek.hardware.radio.V3_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class CipherNotification {
    public String simCipherStatus = new String();
    public String sessionStatus = new String();
    public String csStatus = new String();
    public String psStatus = new String();

    public static final ArrayList<CipherNotification> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<CipherNotification> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 64, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            CipherNotification cipherNotification = new CipherNotification();
            cipherNotification.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 64);
            arrayList.add(cipherNotification);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<CipherNotification> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 64);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 64);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != CipherNotification.class) {
            return false;
        }
        CipherNotification cipherNotification = (CipherNotification) obj;
        return HidlSupport.deepEquals(this.simCipherStatus, cipherNotification.simCipherStatus) && HidlSupport.deepEquals(this.sessionStatus, cipherNotification.sessionStatus) && HidlSupport.deepEquals(this.csStatus, cipherNotification.csStatus) && HidlSupport.deepEquals(this.psStatus, cipherNotification.psStatus);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(this.simCipherStatus)), Integer.valueOf(HidlSupport.deepHashCode(this.sessionStatus)), Integer.valueOf(HidlSupport.deepHashCode(this.csStatus)), Integer.valueOf(HidlSupport.deepHashCode(this.psStatus)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        String string = hwBlob.getString(j + 0);
        this.simCipherStatus = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 0 + 0, false);
        String string2 = hwBlob.getString(j + 16);
        this.sessionStatus = string2;
        hwParcel.readEmbeddedBuffer(string2.getBytes().length + 1, hwBlob.handle(), j + 16 + 0, false);
        String string3 = hwBlob.getString(j + 32);
        this.csStatus = string3;
        hwParcel.readEmbeddedBuffer(string3.getBytes().length + 1, hwBlob.handle(), j + 32 + 0, false);
        String string4 = hwBlob.getString(j + 48);
        this.psStatus = string4;
        hwParcel.readEmbeddedBuffer(string4.getBytes().length + 1, hwBlob.handle(), j + 48 + 0, false);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(64L), 0L);
    }

    public final String toString() {
        return "{.simCipherStatus = " + this.simCipherStatus + ", .sessionStatus = " + this.sessionStatus + ", .csStatus = " + this.csStatus + ", .psStatus = " + this.psStatus + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putString(0 + j, this.simCipherStatus);
        hwBlob.putString(16 + j, this.sessionStatus);
        hwBlob.putString(32 + j, this.csStatus);
        hwBlob.putString(48 + j, this.psStatus);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(64);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
