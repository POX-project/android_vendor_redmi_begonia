package android.hardware.radio.V1_5;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import com.mediatek.ims.ImsCallSessionProxy;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class CellIdentityWcdma {
    public android.hardware.radio.V1_2.CellIdentityWcdma base = new android.hardware.radio.V1_2.CellIdentityWcdma();
    public ArrayList<String> additionalPlmns = new ArrayList<>();
    public OptionalCsgInfo optionalCsgInfo = new OptionalCsgInfo();

    public static final ArrayList<CellIdentityWcdma> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<CellIdentityWcdma> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            CellIdentityWcdma cellIdentityWcdma = new CellIdentityWcdma();
            cellIdentityWcdma.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME);
            arrayList.add(cellIdentityWcdma);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<CellIdentityWcdma> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != CellIdentityWcdma.class) {
            return false;
        }
        CellIdentityWcdma cellIdentityWcdma = (CellIdentityWcdma) obj;
        return HidlSupport.deepEquals(this.base, cellIdentityWcdma.base) && HidlSupport.deepEquals(this.additionalPlmns, cellIdentityWcdma.additionalPlmns) && HidlSupport.deepEquals(this.optionalCsgInfo, cellIdentityWcdma.optionalCsgInfo);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(this.base)), Integer.valueOf(HidlSupport.deepHashCode(this.additionalPlmns)), Integer.valueOf(HidlSupport.deepHashCode(this.optionalCsgInfo)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.base.readEmbeddedFromParcel(hwParcel, hwBlob, j + 0);
        int int32 = hwBlob.getInt32(j + 80 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 16, hwBlob.handle(), j + 80 + 0, true);
        this.additionalPlmns.clear();
        for (int i = 0; i < int32; i++) {
            new String();
            String string = embeddedBuffer.getString(i * 16);
            hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, embeddedBuffer.handle(), (i * 16) + 0, false);
            this.additionalPlmns.add(string);
        }
        this.optionalCsgInfo.readEmbeddedFromParcel(hwParcel, hwBlob, j + 96);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(136L), 0L);
    }

    public final String toString() {
        return "{.base = " + this.base + ", .additionalPlmns = " + this.additionalPlmns + ", .optionalCsgInfo = " + this.optionalCsgInfo + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        this.base.writeEmbeddedToBlob(hwBlob, j + 0);
        int size = this.additionalPlmns.size();
        hwBlob.putInt32(j + 80 + 8, size);
        hwBlob.putBool(j + 80 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 16);
        for (int i = 0; i < size; i++) {
            hwBlob2.putString(i * 16, this.additionalPlmns.get(i));
        }
        hwBlob.putBlob(80 + j + 0, hwBlob2);
        this.optionalCsgInfo.writeEmbeddedToBlob(hwBlob, 96 + j);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
