package android.hardware.radio.V1_4;

import android.hardware.radio.V1_2.CellConnectionStatus;
import android.hardware.radio.V1_2.CellInfoCdma;
import android.hardware.radio.V1_2.CellInfoGsm;
import android.hardware.radio.V1_2.CellInfoTdscdma;
import android.hardware.radio.V1_2.CellInfoWcdma;
import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import com.mediatek.ims.ImsCallSessionProxy;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class CellInfo {
    public boolean isRegistered = false;
    public int connectionStatus = 0;
    public Info info = new Info();

    public static final class Info {
        private byte hidl_d = 0;
        private Object hidl_o;

        public static final class hidl_discriminator {
            public static final byte cdma = 1;
            public static final byte gsm = 0;
            public static final byte lte = 4;
            public static final byte nr = 5;
            public static final byte tdscdma = 3;
            public static final byte wcdma = 2;

            private hidl_discriminator() {
            }

            public static final String getName(byte b) {
                if (b == 0) {
                    return "gsm";
                }
                if (b == 1) {
                    return "cdma";
                }
                if (b == 2) {
                    return "wcdma";
                }
                if (b == 3) {
                    return "tdscdma";
                }
                if (b != 4) {
                    return b != 5 ? "Unknown" : "nr";
                }
                return "lte";
            }
        }

        public Info() {
            this.hidl_o = null;
            this.hidl_o = new CellInfoGsm();
        }

        public static final ArrayList<Info> readVectorFromParcel(HwParcel hwParcel) {
            ArrayList<Info> arrayList = new ArrayList<>();
            HwBlob buffer = hwParcel.readBuffer(16L);
            int int32 = buffer.getInt32(8L);
            HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 128, buffer.handle(), 0L, true);
            arrayList.clear();
            for (int i = 0; i < int32; i++) {
                Info info = new Info();
                info.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 128);
                arrayList.add(info);
            }
            return arrayList;
        }

        public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<Info> arrayList) {
            HwBlob hwBlob = new HwBlob(16);
            int size = arrayList.size();
            hwBlob.putInt32(8L, size);
            hwBlob.putBool(12L, false);
            HwBlob hwBlob2 = new HwBlob(size * 128);
            for (int i = 0; i < size; i++) {
                arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 128);
            }
            hwBlob.putBlob(0L, hwBlob2);
            hwParcel.writeBuffer(hwBlob);
        }

        public CellInfoCdma cdma() {
            if (this.hidl_d == 1) {
                Object obj = this.hidl_o;
                if (obj == null || CellInfoCdma.class.isInstance(obj)) {
                    return (CellInfoCdma) this.hidl_o;
                }
                throw new Error("Union is in a corrupted state.");
            }
            Object obj2 = this.hidl_o;
            throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
        }

        public void cdma(CellInfoCdma cellInfoCdma) {
            this.hidl_d = (byte) 1;
            this.hidl_o = cellInfoCdma;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj == null || obj.getClass() != Info.class) {
                return false;
            }
            Info info = (Info) obj;
            return this.hidl_d == info.hidl_d && HidlSupport.deepEquals(this.hidl_o, info.hidl_o);
        }

        public byte getDiscriminator() {
            return this.hidl_d;
        }

        public CellInfoGsm gsm() {
            if (this.hidl_d == 0) {
                Object obj = this.hidl_o;
                if (obj == null || CellInfoGsm.class.isInstance(obj)) {
                    return (CellInfoGsm) this.hidl_o;
                }
                throw new Error("Union is in a corrupted state.");
            }
            Object obj2 = this.hidl_o;
            throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
        }

        public void gsm(CellInfoGsm cellInfoGsm) {
            this.hidl_d = (byte) 0;
            this.hidl_o = cellInfoGsm;
        }

        public final int hashCode() {
            return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(this.hidl_o)), Integer.valueOf(Objects.hashCode(Byte.valueOf(this.hidl_d))));
        }

        public CellInfoLte lte() {
            if (this.hidl_d == 4) {
                Object obj = this.hidl_o;
                if (obj == null || CellInfoLte.class.isInstance(obj)) {
                    return (CellInfoLte) this.hidl_o;
                }
                throw new Error("Union is in a corrupted state.");
            }
            Object obj2 = this.hidl_o;
            throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
        }

        public void lte(CellInfoLte cellInfoLte) {
            this.hidl_d = (byte) 4;
            this.hidl_o = cellInfoLte;
        }

        public CellInfoNr nr() {
            if (this.hidl_d == 5) {
                Object obj = this.hidl_o;
                if (obj == null || CellInfoNr.class.isInstance(obj)) {
                    return (CellInfoNr) this.hidl_o;
                }
                throw new Error("Union is in a corrupted state.");
            }
            Object obj2 = this.hidl_o;
            throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
        }

        public void nr(CellInfoNr cellInfoNr) {
            this.hidl_d = (byte) 5;
            this.hidl_o = cellInfoNr;
        }

        public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
            byte int8 = hwBlob.getInt8(0 + j);
            this.hidl_d = int8;
            if (int8 == 0) {
                CellInfoGsm cellInfoGsm = new CellInfoGsm();
                this.hidl_o = cellInfoGsm;
                cellInfoGsm.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
                return;
            }
            if (int8 == 1) {
                CellInfoCdma cellInfoCdma = new CellInfoCdma();
                this.hidl_o = cellInfoCdma;
                cellInfoCdma.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
                return;
            }
            if (int8 == 2) {
                CellInfoWcdma cellInfoWcdma = new CellInfoWcdma();
                this.hidl_o = cellInfoWcdma;
                cellInfoWcdma.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
                return;
            }
            if (int8 == 3) {
                CellInfoTdscdma cellInfoTdscdma = new CellInfoTdscdma();
                this.hidl_o = cellInfoTdscdma;
                cellInfoTdscdma.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
            } else if (int8 == 4) {
                CellInfoLte cellInfoLte = new CellInfoLte();
                this.hidl_o = cellInfoLte;
                cellInfoLte.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
            } else if (int8 == 5) {
                CellInfoNr cellInfoNr = new CellInfoNr();
                this.hidl_o = cellInfoNr;
                cellInfoNr.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
            } else {
                throw new IllegalStateException("Unknown union discriminator (value: " + ((int) this.hidl_d) + ").");
            }
        }

        public final void readFromParcel(HwParcel hwParcel) {
            readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(128L), 0L);
        }

        public CellInfoTdscdma tdscdma() {
            if (this.hidl_d == 3) {
                Object obj = this.hidl_o;
                if (obj == null || CellInfoTdscdma.class.isInstance(obj)) {
                    return (CellInfoTdscdma) this.hidl_o;
                }
                throw new Error("Union is in a corrupted state.");
            }
            Object obj2 = this.hidl_o;
            throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
        }

        public void tdscdma(CellInfoTdscdma cellInfoTdscdma) {
            this.hidl_d = (byte) 3;
            this.hidl_o = cellInfoTdscdma;
        }

        public final String toString() {
            StringBuilder sb = new StringBuilder();
            sb.append("{");
            byte b = this.hidl_d;
            if (b == 0) {
                sb.append(".gsm = ");
                sb.append(gsm());
            } else if (b == 1) {
                sb.append(".cdma = ");
                sb.append(cdma());
            } else if (b == 2) {
                sb.append(".wcdma = ");
                sb.append(wcdma());
            } else if (b == 3) {
                sb.append(".tdscdma = ");
                sb.append(tdscdma());
            } else if (b == 4) {
                sb.append(".lte = ");
                sb.append(lte());
            } else {
                if (b != 5) {
                    throw new Error("Unknown union discriminator (value: " + ((int) this.hidl_d) + ").");
                }
                sb.append(".nr = ");
                sb.append(nr());
            }
            sb.append("}");
            return sb.toString();
        }

        public CellInfoWcdma wcdma() {
            if (this.hidl_d == 2) {
                Object obj = this.hidl_o;
                if (obj == null || CellInfoWcdma.class.isInstance(obj)) {
                    return (CellInfoWcdma) this.hidl_o;
                }
                throw new Error("Union is in a corrupted state.");
            }
            Object obj2 = this.hidl_o;
            throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
        }

        public void wcdma(CellInfoWcdma cellInfoWcdma) {
            this.hidl_d = (byte) 2;
            this.hidl_o = cellInfoWcdma;
        }

        public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
            hwBlob.putInt8(0 + j, this.hidl_d);
            byte b = this.hidl_d;
            if (b == 0) {
                gsm().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            }
            if (b == 1) {
                cdma().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            }
            if (b == 2) {
                wcdma().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            }
            if (b == 3) {
                tdscdma().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            }
            if (b == 4) {
                lte().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            }
            if (b == 5) {
                nr().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            }
            throw new Error("Unknown union discriminator (value: " + ((int) this.hidl_d) + ").");
        }

        public final void writeToParcel(HwParcel hwParcel) {
            HwBlob hwBlob = new HwBlob(128);
            writeEmbeddedToBlob(hwBlob, 0L);
            hwParcel.writeBuffer(hwBlob);
        }
    }

    public static final ArrayList<CellInfo> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<CellInfo> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            CellInfo cellInfo = new CellInfo();
            cellInfo.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME);
            arrayList.add(cellInfo);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<CellInfo> arrayList) {
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
        if (obj == null || obj.getClass() != CellInfo.class) {
            return false;
        }
        CellInfo cellInfo = (CellInfo) obj;
        return this.isRegistered == cellInfo.isRegistered && this.connectionStatus == cellInfo.connectionStatus && HidlSupport.deepEquals(this.info, cellInfo.info);
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(Boolean.valueOf(this.isRegistered))), Integer.valueOf(HidlSupport.deepHashCode(Integer.valueOf(this.connectionStatus))), Integer.valueOf(HidlSupport.deepHashCode(this.info)));
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        this.isRegistered = hwBlob.getBool(0 + j);
        this.connectionStatus = hwBlob.getInt32(4 + j);
        this.info.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(136L), 0L);
    }

    public final String toString() {
        return "{.isRegistered = " + this.isRegistered + ", .connectionStatus = " + CellConnectionStatus.toString(this.connectionStatus) + ", .info = " + this.info + "}";
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putBool(0 + j, this.isRegistered);
        hwBlob.putInt32(4 + j, this.connectionStatus);
        this.info.writeEmbeddedToBlob(hwBlob, 8 + j);
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(ImsCallSessionProxy.CALL_INFO_MSG_TYPE_REMOTE_RESUME);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
