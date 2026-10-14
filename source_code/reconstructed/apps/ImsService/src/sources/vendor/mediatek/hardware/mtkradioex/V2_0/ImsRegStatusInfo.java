package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class ImsRegStatusInfo {
    public int report_type = 0;
    public int account_id = 0;
    public int expire_time = 0;
    public int error_code = 0;
    public String uri = new String();
    public String error_msg = new String();

    public static final ArrayList<ImsRegStatusInfo> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<ImsRegStatusInfo> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 48, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            ImsRegStatusInfo imsRegStatusInfo = new ImsRegStatusInfo();
            imsRegStatusInfo.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 48);
            arrayList.add(imsRegStatusInfo);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<ImsRegStatusInfo> arrayList) {
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
        if (obj == null || obj.getClass() != ImsRegStatusInfo.class) {
            return false;
        }
        ImsRegStatusInfo imsRegStatusInfo = (ImsRegStatusInfo) obj;
        return this.report_type == imsRegStatusInfo.report_type && this.account_id == imsRegStatusInfo.account_id && this.expire_time == imsRegStatusInfo.expire_time && this.error_code == imsRegStatusInfo.error_code && HidlSupport.deepEquals(this.uri, imsRegStatusInfo.uri) && HidlSupport.deepEquals(this.error_msg, imsRegStatusInfo.error_msg);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.report_type))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.account_id))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.expire_time))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.error_code))), Integer.valueOf(HidlSupport.deepHashCode(this.uri)), Integer.valueOf(HidlSupport.deepHashCode(this.error_msg)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.report_type = hwBlob.getInt32(j + 0);
        this.account_id = hwBlob.getInt32(j + 4);
        this.expire_time = hwBlob.getInt32(j + 8);
        this.error_code = hwBlob.getInt32(j + 12);
        String string = hwBlob.getString(j + 16);
        this.uri = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 16 + 0, false);
        String string2 = hwBlob.getString(j + 32);
        this.error_msg = string2;
        hwParcel.readEmbeddedBuffer(string2.getBytes().length + 1, hwBlob.handle(), j + 32 + 0, false);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(48L), 0L);
    }

    public final String toString() {
        return "{.report_type = " + this.report_type + ", .account_id = " + this.account_id + ", .expire_time = " + this.expire_time + ", .error_code = " + this.error_code + ", .uri = " + this.uri + ", .error_msg = " + this.error_msg + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(0 + j, this.report_type);
        hwBlob.putInt32(4 + j, this.account_id);
        hwBlob.putInt32(8 + j, this.expire_time);
        hwBlob.putInt32(12 + j, this.error_code);
        hwBlob.putString(16 + j, this.uri);
        hwBlob.putString(32 + j, this.error_msg);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(48);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
