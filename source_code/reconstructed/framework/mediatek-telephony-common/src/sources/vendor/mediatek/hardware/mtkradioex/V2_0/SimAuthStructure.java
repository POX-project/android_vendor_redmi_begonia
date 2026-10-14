package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class SimAuthStructure {
    public int sessionId = 0;
    public int mode = 0;
    public String param1 = new String();
    public String param2 = new String();
    public int tag = 0;

    public static final ArrayList<SimAuthStructure> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<SimAuthStructure> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 48, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            SimAuthStructure simAuthStructure = new SimAuthStructure();
            simAuthStructure.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 48);
            arrayList.add(simAuthStructure);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<SimAuthStructure> arrayList) {
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
        if (obj == null || obj.getClass() != SimAuthStructure.class) {
            return false;
        }
        SimAuthStructure simAuthStructure = (SimAuthStructure) obj;
        return this.sessionId == simAuthStructure.sessionId && this.mode == simAuthStructure.mode && HidlSupport.deepEquals(this.param1, simAuthStructure.param1) && HidlSupport.deepEquals(this.param2, simAuthStructure.param2) && this.tag == simAuthStructure.tag;
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.sessionId))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.mode))), Integer.valueOf(HidlSupport.deepHashCode(this.param1)), Integer.valueOf(HidlSupport.deepHashCode(this.param2)), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.tag))));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.sessionId = hwBlob.getInt32(j + 0);
        this.mode = hwBlob.getInt32(j + 4);
        String string = hwBlob.getString(j + 8);
        this.param1 = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 8 + 0, false);
        String string2 = hwBlob.getString(j + 24);
        this.param2 = string2;
        hwParcel.readEmbeddedBuffer(string2.getBytes().length + 1, hwBlob.handle(), j + 24 + 0, false);
        this.tag = hwBlob.getInt32(j + 40);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(48L), 0L);
    }

    public final String toString() {
        return "{.sessionId = " + this.sessionId + ", .mode = " + this.mode + ", .param1 = " + this.param1 + ", .param2 = " + this.param2 + ", .tag = " + this.tag + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(0 + j, this.sessionId);
        hwBlob.putInt32(4 + j, this.mode);
        hwBlob.putString(8 + j, this.param1);
        hwBlob.putString(24 + j, this.param2);
        hwBlob.putInt32(40 + j, this.tag);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(48);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
