package vendor.xiaomi.hardware.misys.V1_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class IFileInfo {
    public String name = new String();
    public long mtime = 0;
    public long fileSize = 0;

    public static final ArrayList<IFileInfo> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<IFileInfo> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 32, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            IFileInfo iFileInfo = new IFileInfo();
            iFileInfo.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 32);
            arrayList.add(iFileInfo);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<IFileInfo> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 32);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 32);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != IFileInfo.class) {
            return false;
        }
        IFileInfo iFileInfo = (IFileInfo) obj;
        return HidlSupport.deepEquals(this.name, iFileInfo.name) && this.mtime == iFileInfo.mtime && this.fileSize == iFileInfo.fileSize;
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(this.name)), Integer.valueOf(HidlSupport.deepHashCode(Long.valueOf(this.mtime))), Integer.valueOf(HidlSupport.deepHashCode(Long.valueOf(this.fileSize))));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        String string = hwBlob.getString(j + 0);
        this.name = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 0 + 0, false);
        this.mtime = hwBlob.getInt64(16 + j);
        this.fileSize = hwBlob.getInt64(24 + j);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(32L), 0L);
    }

    public final String toString() {
        return "{.name = " + this.name + ", .mtime = " + this.mtime + ", .fileSize = " + this.fileSize + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putString(0 + j, this.name);
        hwBlob.putInt64(16 + j, this.mtime);
        hwBlob.putInt64(24 + j, this.fileSize);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(32);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
