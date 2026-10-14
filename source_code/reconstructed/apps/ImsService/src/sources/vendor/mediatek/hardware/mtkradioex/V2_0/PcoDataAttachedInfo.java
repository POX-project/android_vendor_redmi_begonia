package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class PcoDataAttachedInfo {
    public int cid = 0;
    public String apnName = new String();
    public String bearerProto = new String();
    public int pcoId = 0;
    public ArrayList<Byte> contents = new ArrayList<>();

    public static final ArrayList<PcoDataAttachedInfo> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<PcoDataAttachedInfo> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 64, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            PcoDataAttachedInfo pcoDataAttachedInfo = new PcoDataAttachedInfo();
            pcoDataAttachedInfo.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 64);
            arrayList.add(pcoDataAttachedInfo);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<PcoDataAttachedInfo> arrayList) {
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
        if (obj == null || obj.getClass() != PcoDataAttachedInfo.class) {
            return false;
        }
        PcoDataAttachedInfo pcoDataAttachedInfo = (PcoDataAttachedInfo) obj;
        return this.cid == pcoDataAttachedInfo.cid && HidlSupport.deepEquals(this.apnName, pcoDataAttachedInfo.apnName) && HidlSupport.deepEquals(this.bearerProto, pcoDataAttachedInfo.bearerProto) && this.pcoId == pcoDataAttachedInfo.pcoId && HidlSupport.deepEquals(this.contents, pcoDataAttachedInfo.contents);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.cid))), Integer.valueOf(HidlSupport.deepHashCode(this.apnName)), Integer.valueOf(HidlSupport.deepHashCode(this.bearerProto)), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.pcoId))), Integer.valueOf(HidlSupport.deepHashCode(this.contents)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.cid = hwBlob.getInt32(j + 0);
        String string = hwBlob.getString(j + 8);
        this.apnName = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 8 + 0, false);
        String string2 = hwBlob.getString(j + 24);
        this.bearerProto = string2;
        hwParcel.readEmbeddedBuffer(string2.getBytes().length + 1, hwBlob.handle(), j + 24 + 0, false);
        this.pcoId = hwBlob.getInt32(j + 40);
        int int32 = hwBlob.getInt32(j + 48 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 1, hwBlob.handle(), j + 48 + 0, true);
        this.contents.clear();
        for (int i = 0; i < int32; i++) {
            this.contents.add(Byte.valueOf(embeddedBuffer.getInt8(i * 1)));
        }
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(64L), 0L);
    }

    public final String toString() {
        return "{.cid = " + this.cid + ", .apnName = " + this.apnName + ", .bearerProto = " + this.bearerProto + ", .pcoId = " + this.pcoId + ", .contents = " + this.contents + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(j + 0, this.cid);
        hwBlob.putString(j + 8, this.apnName);
        hwBlob.putString(24 + j, this.bearerProto);
        hwBlob.putInt32(40 + j, this.pcoId);
        int size = this.contents.size();
        hwBlob.putInt32(j + 48 + 8, size);
        hwBlob.putBool(j + 48 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 1);
        for (int i = 0; i < size; i++) {
            hwBlob2.putInt8(i * 1, this.contents.get(i).byteValue());
        }
        hwBlob.putBlob(48 + j + 0, hwBlob2);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(64);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
