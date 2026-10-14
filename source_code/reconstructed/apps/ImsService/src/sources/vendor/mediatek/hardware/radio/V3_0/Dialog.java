package vendor.mediatek.hardware.radio.V3_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class Dialog {
    public int dialogId = 0;
    public int callState = 0;
    public int callType = 0;
    public boolean isPullable = false;
    public boolean isCallHeld = false;
    public String address = new String();

    public static final ArrayList<Dialog> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<Dialog> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 32, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            Dialog dialog = new Dialog();
            dialog.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 32);
            arrayList.add(dialog);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<Dialog> arrayList) {
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
        if (obj == null || obj.getClass() != Dialog.class) {
            return false;
        }
        Dialog dialog = (Dialog) obj;
        return this.dialogId == dialog.dialogId && this.callState == dialog.callState && this.callType == dialog.callType && this.isPullable == dialog.isPullable && this.isCallHeld == dialog.isCallHeld && HidlSupport.deepEquals(this.address, dialog.address);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.dialogId))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.callState))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.callType))), Integer.valueOf(HidlSupport.deepHashCode(Boolean.valueOf(this.isPullable))), Integer.valueOf(HidlSupport.deepHashCode(Boolean.valueOf(this.isCallHeld))), Integer.valueOf(HidlSupport.deepHashCode(this.address)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.dialogId = hwBlob.getInt32(j + 0);
        this.callState = hwBlob.getInt32(j + 4);
        this.callType = hwBlob.getInt32(j + 8);
        this.isPullable = hwBlob.getBool(j + 12);
        this.isCallHeld = hwBlob.getBool(j + 13);
        String string = hwBlob.getString(j + 16);
        this.address = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 16 + 0, false);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(32L), 0L);
    }

    public final String toString() {
        return "{.dialogId = " + this.dialogId + ", .callState = " + this.callState + ", .callType = " + this.callType + ", .isPullable = " + this.isPullable + ", .isCallHeld = " + this.isCallHeld + ", .address = " + this.address + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(0 + j, this.dialogId);
        hwBlob.putInt32(4 + j, this.callState);
        hwBlob.putInt32(8 + j, this.callType);
        hwBlob.putBool(12 + j, this.isPullable);
        hwBlob.putBool(13 + j, this.isCallHeld);
        hwBlob.putString(16 + j, this.address);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(32);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
