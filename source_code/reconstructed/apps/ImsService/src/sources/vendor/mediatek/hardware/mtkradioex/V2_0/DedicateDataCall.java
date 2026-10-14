package vendor.mediatek.hardware.mtkradioex.V2_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import com.mediatek.ims.ImsCallSessionProxy;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class DedicateDataCall {
    public int ddcId = 0;
    public int interfaceId = 0;
    public int primaryCid = 0;
    public int cid = 0;
    public int active = 0;
    public int signalingFlag = 0;
    public int bearerId = 0;
    public int failCause = 0;
    public int hasQos = 0;
    public Qos qos = new Qos();
    public int hasTft = 0;
    public Tft tft = new Tft();
    public int hasPcscf = 0;
    public String pcscf = new String();

    public static final ArrayList<DedicateDataCall> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<DedicateDataCall> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            DedicateDataCall dedicateDataCall = new DedicateDataCall();
            dedicateDataCall.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME);
            arrayList.add(dedicateDataCall);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<DedicateDataCall> arrayList) {
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
        if (obj == null || obj.getClass() != DedicateDataCall.class) {
            return false;
        }
        DedicateDataCall dedicateDataCall = (DedicateDataCall) obj;
        return this.ddcId == dedicateDataCall.ddcId && this.interfaceId == dedicateDataCall.interfaceId && this.primaryCid == dedicateDataCall.primaryCid && this.cid == dedicateDataCall.cid && this.active == dedicateDataCall.active && this.signalingFlag == dedicateDataCall.signalingFlag && this.bearerId == dedicateDataCall.bearerId && this.failCause == dedicateDataCall.failCause && this.hasQos == dedicateDataCall.hasQos && HidlSupport.deepEquals(this.qos, dedicateDataCall.qos) && this.hasTft == dedicateDataCall.hasTft && HidlSupport.deepEquals(this.tft, dedicateDataCall.tft) && this.hasPcscf == dedicateDataCall.hasPcscf && HidlSupport.deepEquals(this.pcscf, dedicateDataCall.pcscf);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.ddcId))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.interfaceId))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.primaryCid))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.cid))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.active))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.signalingFlag))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.bearerId))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.failCause))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.hasQos))), Integer.valueOf(HidlSupport.deepHashCode(this.qos)), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.hasTft))), Integer.valueOf(HidlSupport.deepHashCode(this.tft)), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.hasPcscf))), Integer.valueOf(HidlSupport.deepHashCode(this.pcscf)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.ddcId = hwBlob.getInt32(j + 0);
        this.interfaceId = hwBlob.getInt32(j + 4);
        this.primaryCid = hwBlob.getInt32(j + 8);
        this.cid = hwBlob.getInt32(j + 12);
        this.active = hwBlob.getInt32(j + 16);
        this.signalingFlag = hwBlob.getInt32(j + 20);
        this.bearerId = hwBlob.getInt32(j + 24);
        this.failCause = hwBlob.getInt32(j + 28);
        this.hasQos = hwBlob.getInt32(j + 32);
        this.qos.readEmbeddedFromParcel(hwParcel, hwBlob, j + 36);
        this.hasTft = hwBlob.getInt32(j + 56);
        this.tft.readEmbeddedFromParcel(hwParcel, hwBlob, j + 64);
        this.hasPcscf = hwBlob.getInt32(j + 112);
        String string = hwBlob.getString(j + 120);
        this.pcscf = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 120 + 0, false);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(136L), 0L);
    }

    public final String toString() {
        return "{.ddcId = " + this.ddcId + ", .interfaceId = " + this.interfaceId + ", .primaryCid = " + this.primaryCid + ", .cid = " + this.cid + ", .active = " + this.active + ", .signalingFlag = " + this.signalingFlag + ", .bearerId = " + this.bearerId + ", .failCause = " + this.failCause + ", .hasQos = " + this.hasQos + ", .qos = " + this.qos + ", .hasTft = " + this.hasTft + ", .tft = " + this.tft + ", .hasPcscf = " + this.hasPcscf + ", .pcscf = " + this.pcscf + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(0 + j, this.ddcId);
        hwBlob.putInt32(4 + j, this.interfaceId);
        hwBlob.putInt32(8 + j, this.primaryCid);
        hwBlob.putInt32(12 + j, this.cid);
        hwBlob.putInt32(16 + j, this.active);
        hwBlob.putInt32(20 + j, this.signalingFlag);
        hwBlob.putInt32(24 + j, this.bearerId);
        hwBlob.putInt32(28 + j, this.failCause);
        hwBlob.putInt32(32 + j, this.hasQos);
        this.qos.writeEmbeddedToBlob(hwBlob, 36 + j);
        hwBlob.putInt32(56 + j, this.hasTft);
        this.tft.writeEmbeddedToBlob(hwBlob, 64 + j);
        hwBlob.putInt32(112 + j, this.hasPcscf);
        hwBlob.putString(120 + j, this.pcscf);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
