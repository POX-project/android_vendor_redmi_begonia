package vendor.xiaomi.hardware.misys.V1_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class IFileListResult {
    public int value = 0;
    public ArrayList<IFileInfo> fileList = new ArrayList<>();

    public static final ArrayList<IFileListResult> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<IFileListResult> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 24, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            IFileListResult iFileListResult = new IFileListResult();
            iFileListResult.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 24);
            arrayList.add(iFileListResult);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<IFileListResult> arrayList) {
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
        if (obj == null || obj.getClass() != IFileListResult.class) {
            return false;
        }
        IFileListResult iFileListResult = (IFileListResult) obj;
        return this.value == iFileListResult.value && HidlSupport.deepEquals(this.fileList, iFileListResult.fileList);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.value))), Integer.valueOf(HidlSupport.deepHashCode(this.fileList)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.value = hwBlob.getInt32(j + 0);
        int int32 = hwBlob.getInt32(j + 8 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 32, hwBlob.handle(), j + 8 + 0, true);
        this.fileList.clear();
        for (int i = 0; i < int32; i++) {
            IFileInfo iFileInfo = new IFileInfo();
            iFileInfo.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 32);
            this.fileList.add(iFileInfo);
        }
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(24L), 0L);
    }

    public final String toString() {
        return "{.value = " + IResultValue.toString(this.value) + ", .fileList = " + this.fileList + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(j + 0, this.value);
        int size = this.fileList.size();
        hwBlob.putInt32(j + 8 + 8, size);
        hwBlob.putBool(j + 8 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 32);
        for (int i = 0; i < size; i++) {
            this.fileList.get(i).writeEmbeddedToBlob(hwBlob2, i * 32);
        }
        hwBlob.putBlob(8 + j + 0, hwBlob2);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(24);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
