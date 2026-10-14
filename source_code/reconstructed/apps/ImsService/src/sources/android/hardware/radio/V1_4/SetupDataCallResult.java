package android.hardware.radio.V1_4;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class SetupDataCallResult {
    public int cause = 0;
    public int suggestedRetryTime = 0;
    public int cid = 0;
    public int active = 0;
    public int type = 0;
    public String ifname = new String();
    public ArrayList<String> addresses = new ArrayList<>();
    public ArrayList<String> dnses = new ArrayList<>();
    public ArrayList<String> gateways = new ArrayList<>();
    public ArrayList<String> pcscf = new ArrayList<>();
    public int mtu = 0;

    public static final ArrayList<SetupDataCallResult> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<SetupDataCallResult> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 112, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            SetupDataCallResult setupDataCallResult = new SetupDataCallResult();
            setupDataCallResult.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 112);
            arrayList.add(setupDataCallResult);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<SetupDataCallResult> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 112);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 112);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != SetupDataCallResult.class) {
            return false;
        }
        SetupDataCallResult setupDataCallResult = (SetupDataCallResult) obj;
        return this.cause == setupDataCallResult.cause && this.suggestedRetryTime == setupDataCallResult.suggestedRetryTime && this.cid == setupDataCallResult.cid && this.active == setupDataCallResult.active && this.type == setupDataCallResult.type && HidlSupport.deepEquals(this.ifname, setupDataCallResult.ifname) && HidlSupport.deepEquals(this.addresses, setupDataCallResult.addresses) && HidlSupport.deepEquals(this.dnses, setupDataCallResult.dnses) && HidlSupport.deepEquals(this.gateways, setupDataCallResult.gateways) && HidlSupport.deepEquals(this.pcscf, setupDataCallResult.pcscf) && this.mtu == setupDataCallResult.mtu;
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.cause))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.suggestedRetryTime))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.cid))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.active))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.type))), Integer.valueOf(HidlSupport.deepHashCode(this.ifname)), Integer.valueOf(HidlSupport.deepHashCode(this.addresses)), Integer.valueOf(HidlSupport.deepHashCode(this.dnses)), Integer.valueOf(HidlSupport.deepHashCode(this.gateways)), Integer.valueOf(HidlSupport.deepHashCode(this.pcscf)), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.mtu))));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.cause = hwBlob.getInt32(j + 0);
        this.suggestedRetryTime = hwBlob.getInt32(j + 4);
        this.cid = hwBlob.getInt32(j + 8);
        this.active = hwBlob.getInt32(j + 12);
        this.type = hwBlob.getInt32(j + 16);
        String string = hwBlob.getString(j + 24);
        this.ifname = string;
        hwParcel.readEmbeddedBuffer(string.getBytes().length + 1, hwBlob.handle(), j + 24 + 0, false);
        int int32 = hwBlob.getInt32(j + 40 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 16, hwBlob.handle(), j + 40 + 0, true);
        this.addresses.clear();
        for (int i = 0; i < int32; i++) {
            new String();
            String string2 = embeddedBuffer.getString(i * 16);
            hwParcel.readEmbeddedBuffer(string2.getBytes().length + 1, embeddedBuffer.handle(), (i * 16) + 0, false);
            this.addresses.add(string2);
        }
        int int33 = hwBlob.getInt32(j + 56 + 8);
        HwBlob embeddedBuffer2 = hwParcel.readEmbeddedBuffer(int33 * 16, hwBlob.handle(), j + 56 + 0, true);
        this.dnses.clear();
        for (int i2 = 0; i2 < int33; i2++) {
            new String();
            String string3 = embeddedBuffer2.getString(i2 * 16);
            hwParcel.readEmbeddedBuffer(string3.getBytes().length + 1, embeddedBuffer2.handle(), (i2 * 16) + 0, false);
            this.dnses.add(string3);
        }
        int int34 = hwBlob.getInt32(j + 72 + 8);
        HwBlob embeddedBuffer3 = hwParcel.readEmbeddedBuffer(int34 * 16, hwBlob.handle(), j + 72 + 0, true);
        this.gateways.clear();
        for (int i3 = 0; i3 < int34; i3++) {
            new String();
            String string4 = embeddedBuffer3.getString(i3 * 16);
            hwParcel.readEmbeddedBuffer(string4.getBytes().length + 1, embeddedBuffer3.handle(), (i3 * 16) + 0, false);
            this.gateways.add(string4);
        }
        int int35 = hwBlob.getInt32(j + 88 + 8);
        HwBlob embeddedBuffer4 = hwParcel.readEmbeddedBuffer(int35 * 16, hwBlob.handle(), j + 88 + 0, true);
        this.pcscf.clear();
        for (int i4 = 0; i4 < int35; i4++) {
            new String();
            String string5 = embeddedBuffer4.getString(i4 * 16);
            hwParcel.readEmbeddedBuffer(string5.getBytes().length + 1, embeddedBuffer4.handle(), (i4 * 16) + 0, false);
            this.pcscf.add(string5);
        }
        this.mtu = hwBlob.getInt32(j + 104);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(112L), 0L);
    }

    public final String toString() {
        return "{.cause = " + DataCallFailCause.toString(this.cause) + ", .suggestedRetryTime = " + this.suggestedRetryTime + ", .cid = " + this.cid + ", .active = " + DataConnActiveStatus.toString(this.active) + ", .type = " + PdpProtocolType.toString(this.type) + ", .ifname = " + this.ifname + ", .addresses = " + this.addresses + ", .dnses = " + this.dnses + ", .gateways = " + this.gateways + ", .pcscf = " + this.pcscf + ", .mtu = " + this.mtu + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(j + 0, this.cause);
        hwBlob.putInt32(j + 4, this.suggestedRetryTime);
        hwBlob.putInt32(j + 8, this.cid);
        hwBlob.putInt32(j + 12, this.active);
        hwBlob.putInt32(j + 16, this.type);
        hwBlob.putString(j + 24, this.ifname);
        int size = this.addresses.size();
        hwBlob.putInt32(j + 40 + 8, size);
        hwBlob.putBool(j + 40 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 16);
        for (int i = 0; i < size; i++) {
            hwBlob2.putString(i * 16, this.addresses.get(i));
        }
        hwBlob.putBlob(j + 40 + 0, hwBlob2);
        int size2 = this.dnses.size();
        hwBlob.putInt32(j + 56 + 8, size2);
        hwBlob.putBool(j + 56 + 12, false);
        HwBlob hwBlob3 = new HwBlob(size2 * 16);
        for (int i2 = 0; i2 < size2; i2++) {
            hwBlob3.putString(i2 * 16, this.dnses.get(i2));
        }
        hwBlob.putBlob(j + 56 + 0, hwBlob3);
        int size3 = this.gateways.size();
        hwBlob.putInt32(j + 72 + 8, size3);
        hwBlob.putBool(j + 72 + 12, false);
        HwBlob hwBlob4 = new HwBlob(size3 * 16);
        for (int i3 = 0; i3 < size3; i3++) {
            hwBlob4.putString(i3 * 16, this.gateways.get(i3));
        }
        hwBlob.putBlob(j + 72 + 0, hwBlob4);
        int size4 = this.pcscf.size();
        hwBlob.putInt32(j + 88 + 8, size4);
        hwBlob.putBool(j + 88 + 12, false);
        HwBlob hwBlob5 = new HwBlob(size4 * 16);
        for (int i4 = 0; i4 < size4; i4++) {
            hwBlob5.putString(i4 * 16, this.pcscf.get(i4));
        }
        hwBlob.putBlob(j + 88 + 0, hwBlob5);
        hwBlob.putInt32(j + 104, this.mtu);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(112);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
