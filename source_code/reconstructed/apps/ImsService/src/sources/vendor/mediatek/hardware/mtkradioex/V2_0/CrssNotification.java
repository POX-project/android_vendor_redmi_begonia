package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class CrssNotification {
    public int code = 0;
    public int type = 0;
    public String number = new String();
    public String alphaid = new String();
    public int cli_validity = 0;

    public static final ArrayList<CrssNotification> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<CrssNotification> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 48, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            CrssNotification crssNotification = new CrssNotification();
            crssNotification.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 48);
            arrayList.add(crssNotification);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<CrssNotification> arrayList) {
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
        if (obj == null || obj.getClass() != CrssNotification.class) {
            return false;
        }
        CrssNotification crssNotification = (CrssNotification) obj;
        return this.code == crssNotification.code && this.type == crssNotification.type && HidlSupport.deepEquals(this.number, crssNotification.number) && HidlSupport.deepEquals(this.alphaid, crssNotification.alphaid) && this.cli_validity == crssNotification.cli_validity;
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.code))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.type))), Integer.valueOf(HidlSupport.deepHashCode(this.number)), Integer.valueOf(HidlSupport.deepHashCode(this.alphaid)), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.cli_validity))));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.code = hwBlob.getInt32(j + 0);
        this.type = hwBlob.getInt32(j + 4);
        String string = hwBlob.getString(j + 8);
        this.number = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 8 + 0, false);
        String string2 = hwBlob.getString(j + 24);
        this.alphaid = string2;
        hwParcel.readEmbeddedBuffer(string2.getBytes().length + 1, hwBlob.handle(), j + 24 + 0, false);
        this.cli_validity = hwBlob.getInt32(j + 40);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(48L), 0L);
    }

    public final String toString() {
        return "{.code = " + this.code + ", .type = " + this.type + ", .number = " + this.number + ", .alphaid = " + this.alphaid + ", .cli_validity = " + this.cli_validity + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(0 + j, this.code);
        hwBlob.putInt32(4 + j, this.type);
        hwBlob.putString(8 + j, this.number);
        hwBlob.putString(24 + j, this.alphaid);
        hwBlob.putInt32(40 + j, this.cli_validity);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(48);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
