package android.hardware.radio.V1_0;

import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class CdmaInformationRecord {
    public int name = 0;
    public ArrayList<CdmaDisplayInfoRecord> display = new ArrayList<>();
    public ArrayList<CdmaNumberInfoRecord> number = new ArrayList<>();
    public ArrayList<CdmaSignalInfoRecord> signal = new ArrayList<>();
    public ArrayList<CdmaRedirectingNumberInfoRecord> redir = new ArrayList<>();
    public ArrayList<CdmaLineControlInfoRecord> lineCtrl = new ArrayList<>();
    public ArrayList<CdmaT53ClirInfoRecord> clir = new ArrayList<>();
    public ArrayList<CdmaT53AudioControlInfoRecord> audioCtrl = new ArrayList<>();

    public static final ArrayList<CdmaInformationRecord> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<CdmaInformationRecord> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 120, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            CdmaInformationRecord cdmaInformationRecord = new CdmaInformationRecord();
            cdmaInformationRecord.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 120);
            arrayList.add(cdmaInformationRecord);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<CdmaInformationRecord> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 120);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 120);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != CdmaInformationRecord.class) {
            return false;
        }
        CdmaInformationRecord cdmaInformationRecord = (CdmaInformationRecord) obj;
        return this.name == cdmaInformationRecord.name && HidlSupport.deepEquals(this.display, cdmaInformationRecord.display) && HidlSupport.deepEquals(this.number, cdmaInformationRecord.number) && HidlSupport.deepEquals(this.signal, cdmaInformationRecord.signal) && HidlSupport.deepEquals(this.redir, cdmaInformationRecord.redir) && HidlSupport.deepEquals(this.lineCtrl, cdmaInformationRecord.lineCtrl) && HidlSupport.deepEquals(this.clir, cdmaInformationRecord.clir) && HidlSupport.deepEquals(this.audioCtrl, cdmaInformationRecord.audioCtrl);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.name))), Integer.valueOf(HidlSupport.deepHashCode(this.display)), Integer.valueOf(HidlSupport.deepHashCode(this.number)), Integer.valueOf(HidlSupport.deepHashCode(this.signal)), Integer.valueOf(HidlSupport.deepHashCode(this.redir)), Integer.valueOf(HidlSupport.deepHashCode(this.lineCtrl)), Integer.valueOf(HidlSupport.deepHashCode(this.clir)), Integer.valueOf(HidlSupport.deepHashCode(this.audioCtrl)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.name = hwBlob.getInt32(j + 0);
        int int32 = hwBlob.getInt32(j + 8 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 16, hwBlob.handle(), j + 8 + 0, true);
        this.display.clear();
        for (int i = 0; i < int32; i++) {
            CdmaDisplayInfoRecord cdmaDisplayInfoRecord = new CdmaDisplayInfoRecord();
            cdmaDisplayInfoRecord.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 16);
            this.display.add(cdmaDisplayInfoRecord);
        }
        int int33 = hwBlob.getInt32(j + 24 + 8);
        HwBlob embeddedBuffer2 = hwParcel.readEmbeddedBuffer(int33 * 24, hwBlob.handle(), j + 24 + 0, true);
        this.number.clear();
        for (int i2 = 0; i2 < int33; i2++) {
            CdmaNumberInfoRecord cdmaNumberInfoRecord = new CdmaNumberInfoRecord();
            cdmaNumberInfoRecord.readEmbeddedFromParcel(hwParcel, embeddedBuffer2, i2 * 24);
            this.number.add(cdmaNumberInfoRecord);
        }
        int int34 = hwBlob.getInt32(j + 40 + 8);
        HwBlob embeddedBuffer3 = hwParcel.readEmbeddedBuffer(int34 * 4, hwBlob.handle(), j + 40 + 0, true);
        this.signal.clear();
        for (int i3 = 0; i3 < int34; i3++) {
            CdmaSignalInfoRecord cdmaSignalInfoRecord = new CdmaSignalInfoRecord();
            cdmaSignalInfoRecord.readEmbeddedFromParcel(hwParcel, embeddedBuffer3, i3 * 4);
            this.signal.add(cdmaSignalInfoRecord);
        }
        int int35 = hwBlob.getInt32(j + 56 + 8);
        HwBlob embeddedBuffer4 = hwParcel.readEmbeddedBuffer(int35 * 32, hwBlob.handle(), j + 56 + 0, true);
        this.redir.clear();
        for (int i4 = 0; i4 < int35; i4++) {
            CdmaRedirectingNumberInfoRecord cdmaRedirectingNumberInfoRecord = new CdmaRedirectingNumberInfoRecord();
            cdmaRedirectingNumberInfoRecord.readEmbeddedFromParcel(hwParcel, embeddedBuffer4, i4 * 32);
            this.redir.add(cdmaRedirectingNumberInfoRecord);
        }
        int int36 = hwBlob.getInt32(j + 72 + 8);
        HwBlob embeddedBuffer5 = hwParcel.readEmbeddedBuffer(int36 * 4, hwBlob.handle(), j + 72 + 0, true);
        this.lineCtrl.clear();
        for (int i5 = 0; i5 < int36; i5++) {
            CdmaLineControlInfoRecord cdmaLineControlInfoRecord = new CdmaLineControlInfoRecord();
            cdmaLineControlInfoRecord.readEmbeddedFromParcel(hwParcel, embeddedBuffer5, i5 * 4);
            this.lineCtrl.add(cdmaLineControlInfoRecord);
        }
        int int37 = hwBlob.getInt32(j + 88 + 8);
        HwBlob embeddedBuffer6 = hwParcel.readEmbeddedBuffer(int37 * 1, hwBlob.handle(), j + 88 + 0, true);
        this.clir.clear();
        for (int i6 = 0; i6 < int37; i6++) {
            CdmaT53ClirInfoRecord cdmaT53ClirInfoRecord = new CdmaT53ClirInfoRecord();
            cdmaT53ClirInfoRecord.readEmbeddedFromParcel(hwParcel, embeddedBuffer6, i6 * 1);
            this.clir.add(cdmaT53ClirInfoRecord);
        }
        int int38 = hwBlob.getInt32(j + 104 + 8);
        HwBlob embeddedBuffer7 = hwParcel.readEmbeddedBuffer(int38 * 2, hwBlob.handle(), j + 104 + 0, true);
        this.audioCtrl.clear();
        for (int i7 = 0; i7 < int38; i7++) {
            CdmaT53AudioControlInfoRecord cdmaT53AudioControlInfoRecord = new CdmaT53AudioControlInfoRecord();
            cdmaT53AudioControlInfoRecord.readEmbeddedFromParcel(hwParcel, embeddedBuffer7, i7 * 2);
            this.audioCtrl.add(cdmaT53AudioControlInfoRecord);
        }
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(120L), 0L);
    }

    public final String toString() {
        return "{.name = " + CdmaInfoRecName.toString(this.name) + ", .display = " + this.display + ", .number = " + this.number + ", .signal = " + this.signal + ", .redir = " + this.redir + ", .lineCtrl = " + this.lineCtrl + ", .clir = " + this.clir + ", .audioCtrl = " + this.audioCtrl + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(j + 0, this.name);
        int size = this.display.size();
        hwBlob.putInt32(j + 8 + 8, size);
        hwBlob.putBool(j + 8 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 16);
        for (int i = 0; i < size; i++) {
            this.display.get(i).writeEmbeddedToBlob(hwBlob2, i * 16);
        }
        hwBlob.putBlob(j + 8 + 0, hwBlob2);
        int size2 = this.number.size();
        hwBlob.putInt32(j + 24 + 8, size2);
        hwBlob.putBool(j + 24 + 12, false);
        HwBlob hwBlob3 = new HwBlob(size2 * 24);
        for (int i2 = 0; i2 < size2; i2++) {
            this.number.get(i2).writeEmbeddedToBlob(hwBlob3, i2 * 24);
        }
        hwBlob.putBlob(j + 24 + 0, hwBlob3);
        int size3 = this.signal.size();
        hwBlob.putInt32(j + 40 + 8, size3);
        hwBlob.putBool(j + 40 + 12, false);
        HwBlob hwBlob4 = new HwBlob(size3 * 4);
        for (int i3 = 0; i3 < size3; i3++) {
            this.signal.get(i3).writeEmbeddedToBlob(hwBlob4, i3 * 4);
        }
        hwBlob.putBlob(j + 40 + 0, hwBlob4);
        int size4 = this.redir.size();
        hwBlob.putInt32(j + 56 + 8, size4);
        hwBlob.putBool(j + 56 + 12, false);
        HwBlob hwBlob5 = new HwBlob(size4 * 32);
        for (int i4 = 0; i4 < size4; i4++) {
            this.redir.get(i4).writeEmbeddedToBlob(hwBlob5, i4 * 32);
        }
        hwBlob.putBlob(j + 56 + 0, hwBlob5);
        int size5 = this.lineCtrl.size();
        hwBlob.putInt32(j + 72 + 8, size5);
        hwBlob.putBool(j + 72 + 12, false);
        HwBlob hwBlob6 = new HwBlob(size5 * 4);
        for (int i5 = 0; i5 < size5; i5++) {
            this.lineCtrl.get(i5).writeEmbeddedToBlob(hwBlob6, i5 * 4);
        }
        hwBlob.putBlob(j + 72 + 0, hwBlob6);
        int size6 = this.clir.size();
        hwBlob.putInt32(j + 88 + 8, size6);
        hwBlob.putBool(j + 88 + 12, false);
        HwBlob hwBlob7 = new HwBlob(size6 * 1);
        for (int i6 = 0; i6 < size6; i6++) {
            this.clir.get(i6).writeEmbeddedToBlob(hwBlob7, i6 * 1);
        }
        hwBlob.putBlob(j + 88 + 0, hwBlob7);
        int size7 = this.audioCtrl.size();
        hwBlob.putInt32(j + 104 + 8, size7);
        hwBlob.putBool(j + 104 + 12, false);
        HwBlob hwBlob8 = new HwBlob(size7 * 2);
        for (int i7 = 0; i7 < size7; i7++) {
            this.audioCtrl.get(i7).writeEmbeddedToBlob(hwBlob8, i7 * 2);
        }
        hwBlob.putBlob(j + 104 + 0, hwBlob8);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(120);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
