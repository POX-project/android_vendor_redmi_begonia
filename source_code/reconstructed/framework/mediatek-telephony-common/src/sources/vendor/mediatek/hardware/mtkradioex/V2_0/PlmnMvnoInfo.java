package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class PlmnMvnoInfo {
    public String gsmPlmn = new String();
    public String cdmaPlmn = new String();
    public String gsmSpn = new String();
    public String cdmaSpn = new String();
    public String gsmImsi = new String();
    public String cdmaImsi = new String();
    public String gid1 = new String();
    public String pnn = new String();
    public String impi = new String();

    public static final ArrayList<PlmnMvnoInfo> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<PlmnMvnoInfo> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 144, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            PlmnMvnoInfo plmnMvnoInfo = new PlmnMvnoInfo();
            plmnMvnoInfo.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 144);
            arrayList.add(plmnMvnoInfo);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<PlmnMvnoInfo> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 144);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 144);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != PlmnMvnoInfo.class) {
            return false;
        }
        PlmnMvnoInfo plmnMvnoInfo = (PlmnMvnoInfo) obj;
        return HidlSupport.deepEquals(this.gsmPlmn, plmnMvnoInfo.gsmPlmn) && HidlSupport.deepEquals(this.cdmaPlmn, plmnMvnoInfo.cdmaPlmn) && HidlSupport.deepEquals(this.gsmSpn, plmnMvnoInfo.gsmSpn) && HidlSupport.deepEquals(this.cdmaSpn, plmnMvnoInfo.cdmaSpn) && HidlSupport.deepEquals(this.gsmImsi, plmnMvnoInfo.gsmImsi) && HidlSupport.deepEquals(this.cdmaImsi, plmnMvnoInfo.cdmaImsi) && HidlSupport.deepEquals(this.gid1, plmnMvnoInfo.gid1) && HidlSupport.deepEquals(this.pnn, plmnMvnoInfo.pnn) && HidlSupport.deepEquals(this.impi, plmnMvnoInfo.impi);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(this.gsmPlmn)), Integer.valueOf(HidlSupport.deepHashCode(this.cdmaPlmn)), Integer.valueOf(HidlSupport.deepHashCode(this.gsmSpn)), Integer.valueOf(HidlSupport.deepHashCode(this.cdmaSpn)), Integer.valueOf(HidlSupport.deepHashCode(this.gsmImsi)), Integer.valueOf(HidlSupport.deepHashCode(this.cdmaImsi)), Integer.valueOf(HidlSupport.deepHashCode(this.gid1)), Integer.valueOf(HidlSupport.deepHashCode(this.pnn)), Integer.valueOf(HidlSupport.deepHashCode(this.impi)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        String string = hwBlob.getString(j + 0);
        this.gsmPlmn = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 0 + 0, false);
        String string2 = hwBlob.getString(j + 16);
        this.cdmaPlmn = string2;
        hwParcel.readEmbeddedBuffer(string2.getBytes().length + 1, hwBlob.handle(), j + 16 + 0, false);
        String string3 = hwBlob.getString(j + 32);
        this.gsmSpn = string3;
        hwParcel.readEmbeddedBuffer(string3.getBytes().length + 1, hwBlob.handle(), j + 32 + 0, false);
        String string4 = hwBlob.getString(j + 48);
        this.cdmaSpn = string4;
        hwParcel.readEmbeddedBuffer(string4.getBytes().length + 1, hwBlob.handle(), j + 48 + 0, false);
        String string5 = hwBlob.getString(j + 64);
        this.gsmImsi = string5;
        hwParcel.readEmbeddedBuffer(string5.getBytes().length + 1, hwBlob.handle(), j + 64 + 0, false);
        String string6 = hwBlob.getString(j + 80);
        this.cdmaImsi = string6;
        hwParcel.readEmbeddedBuffer(string6.getBytes().length + 1, hwBlob.handle(), j + 80 + 0, false);
        String string7 = hwBlob.getString(j + 96);
        this.gid1 = string7;
        hwParcel.readEmbeddedBuffer(string7.getBytes().length + 1, hwBlob.handle(), j + 96 + 0, false);
        String string8 = hwBlob.getString(j + 112);
        this.pnn = string8;
        hwParcel.readEmbeddedBuffer(string8.getBytes().length + 1, hwBlob.handle(), j + 112 + 0, false);
        String string9 = hwBlob.getString(j + 128);
        this.impi = string9;
        hwParcel.readEmbeddedBuffer(string9.getBytes().length + 1, hwBlob.handle(), j + 128 + 0, false);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(144L), 0L);
    }

    public final String toString() {
        return "{.gsmPlmn = " + this.gsmPlmn + ", .cdmaPlmn = " + this.cdmaPlmn + ", .gsmSpn = " + this.gsmSpn + ", .cdmaSpn = " + this.cdmaSpn + ", .gsmImsi = " + this.gsmImsi + ", .cdmaImsi = " + this.cdmaImsi + ", .gid1 = " + this.gid1 + ", .pnn = " + this.pnn + ", .impi = " + this.impi + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putString(0 + j, this.gsmPlmn);
        hwBlob.putString(16 + j, this.cdmaPlmn);
        hwBlob.putString(32 + j, this.gsmSpn);
        hwBlob.putString(48 + j, this.cdmaSpn);
        hwBlob.putString(64 + j, this.gsmImsi);
        hwBlob.putString(80 + j, this.cdmaImsi);
        hwBlob.putString(96 + j, this.gid1);
        hwBlob.putString(112 + j, this.pnn);
        hwBlob.putString(128 + j, this.impi);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(144);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
