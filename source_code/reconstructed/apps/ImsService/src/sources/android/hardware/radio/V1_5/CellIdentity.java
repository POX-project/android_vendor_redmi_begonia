package android.hardware.radio.V1_5;

import android.hardware.radio.V1_2.CellIdentityCdma;
import android.hidl.safe_union.V1_0.Monostate;
import android.os.HidlSupport;
import android.os.HwBlob;
import android.os.HwParcel;
import java.util.ArrayList;
import java.util.Objects;

/* JADX INFO: loaded from: classes.dex */
public final class CellIdentity {
    private byte hidl_d = 0;
    private Object hidl_o;

    public static final class hidl_discriminator {
        public static final byte cdma = 4;
        public static final byte gsm = 1;
        public static final byte lte = 5;
        public static final byte noinit = 0;
        public static final byte nr = 6;
        public static final byte tdscdma = 3;
        public static final byte wcdma = 2;

        private hidl_discriminator() {
        }

        public static final String getName(byte b) {
            switch (b) {
                case 0:
                    return "noinit";
                case 1:
                    return "gsm";
                case 2:
                    return "wcdma";
                case 3:
                    return "tdscdma";
                case 4:
                    return "cdma";
                case 5:
                    return "lte";
                case 6:
                    return "nr";
                default:
                    return "Unknown";
            }
        }
    }

    public CellIdentity() {
        this.hidl_o = null;
        this.hidl_o = new Monostate();
    }

    public static final ArrayList<CellIdentity> readVectorFromParcel(HwParcel hwParcel) {
        ArrayList<CellIdentity> arrayList = new ArrayList<>();
        HwBlob buffer = hwParcel.readBuffer(16L);
        int int32 = buffer.getInt32(8L);
        HwBlob embeddedBuffer = hwParcel.readEmbeddedBuffer(int32 * 168, buffer.handle(), 0L, true);
        arrayList.clear();
        for (int i = 0; i < int32; i++) {
            CellIdentity cellIdentity = new CellIdentity();
            cellIdentity.readEmbeddedFromParcel(hwParcel, embeddedBuffer, i * 168);
            arrayList.add(cellIdentity);
        }
        return arrayList;
    }

    public static final void writeVectorToParcel(HwParcel hwParcel, ArrayList<CellIdentity> arrayList) {
        HwBlob hwBlob = new HwBlob(16);
        int size = arrayList.size();
        hwBlob.putInt32(8L, size);
        hwBlob.putBool(12L, false);
        HwBlob hwBlob2 = new HwBlob(size * 168);
        for (int i = 0; i < size; i++) {
            arrayList.get(i).writeEmbeddedToBlob(hwBlob2, i * 168);
        }
        hwBlob.putBlob(0L, hwBlob2);
        hwParcel.writeBuffer(hwBlob);
    }

    public CellIdentityCdma cdma() {
        if (this.hidl_d == 4) {
            Object obj = this.hidl_o;
            if (obj == null || CellIdentityCdma.class.isInstance(obj)) {
                return (CellIdentityCdma) this.hidl_o;
            }
            throw new Error("Union is in a corrupted state.");
        }
        Object obj2 = this.hidl_o;
        throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
    }

    public void cdma(CellIdentityCdma cellIdentityCdma) {
        this.hidl_d = (byte) 4;
        this.hidl_o = cellIdentityCdma;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || obj.getClass() != CellIdentity.class) {
            return false;
        }
        CellIdentity cellIdentity = (CellIdentity) obj;
        return this.hidl_d == cellIdentity.hidl_d && HidlSupport.deepEquals(this.hidl_o, cellIdentity.hidl_o);
    }

    public byte getDiscriminator() {
        return this.hidl_d;
    }

    public CellIdentityGsm gsm() {
        if (this.hidl_d == 1) {
            Object obj = this.hidl_o;
            if (obj == null || CellIdentityGsm.class.isInstance(obj)) {
                return (CellIdentityGsm) this.hidl_o;
            }
            throw new Error("Union is in a corrupted state.");
        }
        Object obj2 = this.hidl_o;
        throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
    }

    public void gsm(CellIdentityGsm cellIdentityGsm) {
        this.hidl_d = (byte) 1;
        this.hidl_o = cellIdentityGsm;
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(HidlSupport.deepHashCode(this.hidl_o)), Integer.valueOf(Objects.hashCode(Byte.valueOf(this.hidl_d))));
    }

    public CellIdentityLte lte() {
        if (this.hidl_d == 5) {
            Object obj = this.hidl_o;
            if (obj == null || CellIdentityLte.class.isInstance(obj)) {
                return (CellIdentityLte) this.hidl_o;
            }
            throw new Error("Union is in a corrupted state.");
        }
        Object obj2 = this.hidl_o;
        throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
    }

    public void lte(CellIdentityLte cellIdentityLte) {
        this.hidl_d = (byte) 5;
        this.hidl_o = cellIdentityLte;
    }

    public Monostate noinit() {
        if (this.hidl_d == 0) {
            Object obj = this.hidl_o;
            if (obj == null || Monostate.class.isInstance(obj)) {
                return (Monostate) this.hidl_o;
            }
            throw new Error("Union is in a corrupted state.");
        }
        Object obj2 = this.hidl_o;
        throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
    }

    public void noinit(Monostate monostate) {
        this.hidl_d = (byte) 0;
        this.hidl_o = monostate;
    }

    public CellIdentityNr nr() {
        if (this.hidl_d == 6) {
            Object obj = this.hidl_o;
            if (obj == null || CellIdentityNr.class.isInstance(obj)) {
                return (CellIdentityNr) this.hidl_o;
            }
            throw new Error("Union is in a corrupted state.");
        }
        Object obj2 = this.hidl_o;
        throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
    }

    public void nr(CellIdentityNr cellIdentityNr) {
        this.hidl_d = (byte) 6;
        this.hidl_o = cellIdentityNr;
    }

    public final void readEmbeddedFromParcel(HwParcel hwParcel, HwBlob hwBlob, long j) {
        byte int8 = hwBlob.getInt8(0 + j);
        this.hidl_d = int8;
        switch (int8) {
            case 0:
                Monostate monostate = new Monostate();
                this.hidl_o = monostate;
                monostate.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
                return;
            case 1:
                CellIdentityGsm cellIdentityGsm = new CellIdentityGsm();
                this.hidl_o = cellIdentityGsm;
                cellIdentityGsm.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
                return;
            case 2:
                CellIdentityWcdma cellIdentityWcdma = new CellIdentityWcdma();
                this.hidl_o = cellIdentityWcdma;
                cellIdentityWcdma.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
                return;
            case 3:
                CellIdentityTdscdma cellIdentityTdscdma = new CellIdentityTdscdma();
                this.hidl_o = cellIdentityTdscdma;
                cellIdentityTdscdma.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
                return;
            case 4:
                CellIdentityCdma cellIdentityCdma = new CellIdentityCdma();
                this.hidl_o = cellIdentityCdma;
                cellIdentityCdma.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
                return;
            case 5:
                CellIdentityLte cellIdentityLte = new CellIdentityLte();
                this.hidl_o = cellIdentityLte;
                cellIdentityLte.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
                return;
            case 6:
                CellIdentityNr cellIdentityNr = new CellIdentityNr();
                this.hidl_o = cellIdentityNr;
                cellIdentityNr.readEmbeddedFromParcel(hwParcel, hwBlob, 8 + j);
                return;
            default:
                throw new IllegalStateException("Unknown union discriminator (value: " + ((int) this.hidl_d) + ").");
        }
    }

    public final void readFromParcel(HwParcel hwParcel) {
        readEmbeddedFromParcel(hwParcel, hwParcel.readBuffer(168L), 0L);
    }

    public CellIdentityTdscdma tdscdma() {
        if (this.hidl_d == 3) {
            Object obj = this.hidl_o;
            if (obj == null || CellIdentityTdscdma.class.isInstance(obj)) {
                return (CellIdentityTdscdma) this.hidl_o;
            }
            throw new Error("Union is in a corrupted state.");
        }
        Object obj2 = this.hidl_o;
        throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
    }

    public void tdscdma(CellIdentityTdscdma cellIdentityTdscdma) {
        this.hidl_d = (byte) 3;
        this.hidl_o = cellIdentityTdscdma;
    }

    public final String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("{");
        switch (this.hidl_d) {
            case 0:
                sb.append(".noinit = ");
                sb.append(noinit());
                break;
            case 1:
                sb.append(".gsm = ");
                sb.append(gsm());
                break;
            case 2:
                sb.append(".wcdma = ");
                sb.append(wcdma());
                break;
            case 3:
                sb.append(".tdscdma = ");
                sb.append(tdscdma());
                break;
            case 4:
                sb.append(".cdma = ");
                sb.append(cdma());
                break;
            case 5:
                sb.append(".lte = ");
                sb.append(lte());
                break;
            case 6:
                sb.append(".nr = ");
                sb.append(nr());
                break;
            default:
                throw new Error("Unknown union discriminator (value: " + ((int) this.hidl_d) + ").");
        }
        sb.append("}");
        return sb.toString();
    }

    public CellIdentityWcdma wcdma() {
        if (this.hidl_d == 2) {
            Object obj = this.hidl_o;
            if (obj == null || CellIdentityWcdma.class.isInstance(obj)) {
                return (CellIdentityWcdma) this.hidl_o;
            }
            throw new Error("Union is in a corrupted state.");
        }
        Object obj2 = this.hidl_o;
        throw new IllegalStateException("Read access to inactive union components is disallowed. Discriminator value is " + ((int) this.hidl_d) + " (corresponding to " + hidl_discriminator.getName(this.hidl_d) + "), and hidl_o is of type " + (obj2 != null ? obj2.getClass().getName() : "null") + ".");
    }

    public void wcdma(CellIdentityWcdma cellIdentityWcdma) {
        this.hidl_d = (byte) 2;
        this.hidl_o = cellIdentityWcdma;
    }

    public final void writeEmbeddedToBlob(HwBlob hwBlob, long j) {
        hwBlob.putInt8(0 + j, this.hidl_d);
        switch (this.hidl_d) {
            case 0:
                noinit().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            case 1:
                gsm().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            case 2:
                wcdma().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            case 3:
                tdscdma().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            case 4:
                cdma().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            case 5:
                lte().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            case 6:
                nr().writeEmbeddedToBlob(hwBlob, 8 + j);
                return;
            default:
                throw new Error("Unknown union discriminator (value: " + ((int) this.hidl_d) + ").");
        }
    }

    public final void writeToParcel(HwParcel hwParcel) {
        HwBlob hwBlob = new HwBlob(168);
        writeEmbeddedToBlob(hwBlob, 0L);
        hwParcel.writeBuffer(hwBlob);
    }
}
