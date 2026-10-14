package android.hardware.radio.V1_0;

import android.hardware.radio.V1_5.UtranBands;
import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class CellInfo {
    public int cellInfoType = 0;
    public boolean registered = false;
    public int timeStampType = 0;
    public long timeStamp = 0;
    public ArrayList<CellInfoGsm> gsm = new ArrayList<>();
    public ArrayList<CellInfoCdma> cdma = new ArrayList<>();
    public ArrayList<CellInfoLte> lte = new ArrayList<>();
    public ArrayList<CellInfoWcdma> wcdma = new ArrayList<>();
    public ArrayList<CellInfoTdscdma> tdscdma = new ArrayList<>();

    public static final ArrayList<CellInfo> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<CellInfo> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * UtranBands.BAND_D, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            CellInfo cellInfo = new CellInfo();
            cellInfo.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * UtranBands.BAND_D);
            arrayList.add(cellInfo);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<CellInfo> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * UtranBands.BAND_D);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * UtranBands.BAND_D);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != CellInfo.class) {
            return false;
        }
        CellInfo cellInfo = (CellInfo) obj;
        return this.cellInfoType == cellInfo.cellInfoType && this.registered == cellInfo.registered && this.timeStampType == cellInfo.timeStampType && this.timeStamp == cellInfo.timeStamp && HidlSupport.deepEquals(this.gsm, cellInfo.gsm) && HidlSupport.deepEquals(this.cdma, cellInfo.cdma) && HidlSupport.deepEquals(this.lte, cellInfo.lte) && HidlSupport.deepEquals(this.wcdma, cellInfo.wcdma) && HidlSupport.deepEquals(this.tdscdma, cellInfo.tdscdma);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.cellInfoType))), Integer.valueOf(HidlSupport.deepHashCode(Boolean.valueOf(this.registered))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.timeStampType))), Integer.valueOf(HidlSupport.deepHashCode(Long.valueOf(this.timeStamp))), Integer.valueOf(HidlSupport.deepHashCode(this.gsm)), Integer.valueOf(HidlSupport.deepHashCode(this.cdma)), Integer.valueOf(HidlSupport.deepHashCode(this.lte)), Integer.valueOf(HidlSupport.deepHashCode(this.wcdma)), Integer.valueOf(HidlSupport.deepHashCode(this.tdscdma)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.cellInfoType = hwBlob.getInt32(j + 0);
        this.registered = hwBlob.getBool(j + 4);
        this.timeStampType = hwBlob.getInt32(j + 8);
        this.timeStamp = hwBlob.getInt64(j + 16);
        int int32 = hwBlob.getInt32(j + 24 + 8);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 64, hwBlob.handle(), j + 24 + 0, true);
        this.gsm.clear();
        for (int i = 0; i < int32; i++) {
            CellInfoGsm cellInfoGsm = new CellInfoGsm();
            cellInfoGsm.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 64);
            this.gsm.add(cellInfoGsm);
        }
        int int33 = hwBlob.getInt32(j + 40 + 8);
        HwBlob embeddedBuffer2 = hwParcel.readEmbeddedBuffer(int33 * 40, hwBlob.handle(), j + 40 + 0, true);
        this.cdma.clear();
        for (int i2 = 0; i2 < int33; i2++) {
            CellInfoCdma cellInfoCdma = new CellInfoCdma();
            cellInfoCdma.readEmbeddedFromParcel(hwParcel, embeddedBuffer2, i2 * 40);
            this.cdma.add(cellInfoCdma);
        }
        int int34 = hwBlob.getInt32(j + 56 + 8);
        HwBlob embeddedBuffer3 = hwParcel.readEmbeddedBuffer(int34 * 72, hwBlob.handle(), j + 56 + 0, true);
        this.lte.clear();
        for (int i3 = 0; i3 < int34; i3++) {
            CellInfoLte cellInfoLte = new CellInfoLte();
            cellInfoLte.readEmbeddedFromParcel(hwParcel, embeddedBuffer3, i3 * 72);
            this.lte.add(cellInfoLte);
        }
        int int35 = hwBlob.getInt32(j + 72 + 8);
        HwBlob embeddedBuffer4 = hwParcel.readEmbeddedBuffer(int35 * 56, hwBlob.handle(), j + 72 + 0, true);
        this.wcdma.clear();
        for (int i4 = 0; i4 < int35; i4++) {
            CellInfoWcdma cellInfoWcdma = new CellInfoWcdma();
            cellInfoWcdma.readEmbeddedFromParcel(hwParcel, embeddedBuffer4, i4 * 56);
            this.wcdma.add(cellInfoWcdma);
        }
        int int36 = hwBlob.getInt32(j + 88 + 8);
        HwBlob embeddedBuffer5 = hwParcel.readEmbeddedBuffer(int36 * 56, hwBlob.handle(), j + 88 + 0, true);
        this.tdscdma.clear();
        for (int i5 = 0; i5 < int36; i5++) {
            CellInfoTdscdma cellInfoTdscdma = new CellInfoTdscdma();
            cellInfoTdscdma.readEmbeddedFromParcel(hwParcel, embeddedBuffer5, i5 * 56);
            this.tdscdma.add(cellInfoTdscdma);
        }
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(104L), 0L);
    }

    public final String toString() {
        return "{.cellInfoType = " + CellInfoType.toString(this.cellInfoType) + ", .registered = " + this.registered + ", .timeStampType = " + TimeStampType.toString(this.timeStampType) + ", .timeStamp = " + this.timeStamp + ", .gsm = " + this.gsm + ", .cdma = " + this.cdma + ", .lte = " + this.lte + ", .wcdma = " + this.wcdma + ", .tdscdma = " + this.tdscdma + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt32(j + 0, this.cellInfoType);
        hwBlob.putBool(j + 4, this.registered);
        hwBlob.putInt32(j + 8, this.timeStampType);
        hwBlob.putInt64(j + 16, this.timeStamp);
        int size = this.gsm.size();
        hwBlob.putInt32(j + 24 + 8, size);
        hwBlob.putBool(j + 24 + 12, false);
        HwBlob hwBlob2 = new HwBlob(size * 64);
        for (int i = 0; i < size; i++) {
            this.gsm.get(i).writeEmbeddedToBlob(hwBlob2, i * 64);
        }
        hwBlob.putBlob(j + 24 + 0, hwBlob2);
        int size2 = this.cdma.size();
        hwBlob.putInt32(j + 40 + 8, size2);
        hwBlob.putBool(j + 40 + 12, false);
        HwBlob hwBlob3 = new HwBlob(size2 * 40);
        for (int i2 = 0; i2 < size2; i2++) {
            this.cdma.get(i2).writeEmbeddedToBlob(hwBlob3, i2 * 40);
        }
        hwBlob.putBlob(j + 40 + 0, hwBlob3);
        int size3 = this.lte.size();
        hwBlob.putInt32(j + 56 + 8, size3);
        hwBlob.putBool(j + 56 + 12, false);
        HwBlob hwBlob4 = new HwBlob(size3 * 72);
        for (int i3 = 0; i3 < size3; i3++) {
            this.lte.get(i3).writeEmbeddedToBlob(hwBlob4, i3 * 72);
        }
        hwBlob.putBlob(j + 56 + 0, hwBlob4);
        int size4 = this.wcdma.size();
        hwBlob.putInt32(j + 72 + 8, size4);
        hwBlob.putBool(j + 72 + 12, false);
        HwBlob hwBlob5 = new HwBlob(size4 * 56);
        for (int i4 = 0; i4 < size4; i4++) {
            this.wcdma.get(i4).writeEmbeddedToBlob(hwBlob5, i4 * 56);
        }
        hwBlob.putBlob(j + 72 + 0, hwBlob5);
        int size5 = this.tdscdma.size();
        hwBlob.putInt32(j + 88 + 8, size5);
        hwBlob.putBool(j + 88 + 12, false);
        HwBlob hwBlob6 = new HwBlob(size5 * 56);
        for (int i5 = 0; i5 < size5; i5++) {
            this.tdscdma.get(i5).writeEmbeddedToBlob(hwBlob6, i5 * 56);
        }
        hwBlob.putBlob(j + 88 + 0, hwBlob6);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(UtranBands.BAND_D);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
