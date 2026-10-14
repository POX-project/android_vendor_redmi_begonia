package vendor.mediatek.hardware.radio.V3_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class ImsConfParticipant {
    public String user_addr = new String();
    public String end_point = new String();
    public String entity = new String();
    public String display_text = new String();
    public String status = new String();

    public static final ArrayList<ImsConfParticipant> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<ImsConfParticipant> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 80, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            ImsConfParticipant imsConfParticipant = new ImsConfParticipant();
            imsConfParticipant.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 80);
            arrayList.add(imsConfParticipant);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<ImsConfParticipant> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 80);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 80);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != ImsConfParticipant.class) {
            return false;
        }
        ImsConfParticipant imsConfParticipant = (ImsConfParticipant) obj;
        return HidlSupport.deepEquals(this.user_addr, imsConfParticipant.user_addr) && HidlSupport.deepEquals(this.end_point, imsConfParticipant.end_point) && HidlSupport.deepEquals(this.entity, imsConfParticipant.entity) && HidlSupport.deepEquals(this.display_text, imsConfParticipant.display_text) && HidlSupport.deepEquals(this.status, imsConfParticipant.status);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(this.user_addr)), Integer.valueOf(HidlSupport.deepHashCode(this.end_point)), Integer.valueOf(HidlSupport.deepHashCode(this.entity)), Integer.valueOf(HidlSupport.deepHashCode(this.display_text)), Integer.valueOf(HidlSupport.deepHashCode(this.status)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        String string = hwBlob.getString(j + 0);
        this.user_addr = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 0 + 0, false);
        String string2 = hwBlob.getString(j + 16);
        this.end_point = string2;
        hwParcel.readEmbeddedBuffer(string2.getBytes().length + 1, hwBlob.handle(), j + 16 + 0, false);
        String string3 = hwBlob.getString(j + 32);
        this.entity = string3;
        hwParcel.readEmbeddedBuffer(string3.getBytes().length + 1, hwBlob.handle(), j + 32 + 0, false);
        String string4 = hwBlob.getString(j + 48);
        this.display_text = string4;
        hwParcel.readEmbeddedBuffer(string4.getBytes().length + 1, hwBlob.handle(), j + 48 + 0, false);
        String string5 = hwBlob.getString(j + 64);
        this.status = string5;
        hwParcel.readEmbeddedBuffer(string5.getBytes().length + 1, hwBlob.handle(), j + 64 + 0, false);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(80L), 0L);
    }

    public final String toString() {
        return "{.user_addr = " + this.user_addr + ", .end_point = " + this.end_point + ", .entity = " + this.entity + ", .display_text = " + this.display_text + ", .status = " + this.status + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putString(0 + j, this.user_addr);
        hwBlob.putString(16 + j, this.end_point);
        hwBlob.putString(32 + j, this.entity);
        hwBlob.putString(48 + j, this.display_text);
        hwBlob.putString(64 + j, this.status);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(80);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
