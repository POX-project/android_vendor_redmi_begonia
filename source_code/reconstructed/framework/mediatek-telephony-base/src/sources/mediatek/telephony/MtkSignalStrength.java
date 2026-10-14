package mediatek.telephony;

import android.os.Parcel;
import android.os.PersistableBundle;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.SignalStrength;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class MtkSignalStrength extends SignalStrength {
    private static final boolean DBG = true;
    private static final String LOG_TAG = "MtkSignalStrength";
    public static final String PROPERTY_OPERATOR_OPTR = "persist.vendor.operator.optr";
    private int mMtkLevel;
    private int[] mMtkLteRsrpThreshold;
    private int[] mMtkLteRssnrThreshold;
    private boolean mMtkRsrpOnly;
    protected int mPhoneId;
    private static ISignalStrengthExt mSignalStrengthExt = null;
    private static String mOpId = null;

    public MtkSignalStrength(int i) {
        this.mMtkLevel = -1;
        this.mMtkRsrpOnly = false;
        this.mMtkLteRsrpThreshold = null;
        this.mMtkLteRssnrThreshold = null;
        this.mPhoneId = i;
    }

    public MtkSignalStrength(int i, SignalStrength signalStrength) {
        super(signalStrength);
        this.mMtkLevel = -1;
        this.mMtkRsrpOnly = false;
        this.mMtkLteRsrpThreshold = null;
        this.mMtkLteRssnrThreshold = null;
        this.mPhoneId = i;
        if (signalStrength instanceof MtkSignalStrength) {
            MtkSignalStrength mtkSignalStrength = (MtkSignalStrength) signalStrength;
            this.mMtkLevel = mtkSignalStrength.getMtkLevel();
            setMtkRsrpOnly(mtkSignalStrength.isMtkRsrpOnly());
            setMtkLteRsrpThreshold(mtkSignalStrength.getMtkLteRsrpThreshold());
            setMtkLteRssnrThreshold(mtkSignalStrength.getMtkLteRssnrThreshold());
        }
    }

    public MtkSignalStrength(Parcel parcel) {
        super(parcel);
        this.mMtkLevel = -1;
        this.mMtkRsrpOnly = false;
        this.mMtkLteRsrpThreshold = null;
        this.mMtkLteRssnrThreshold = null;
        this.mPhoneId = parcel.readInt();
        this.mMtkLevel = parcel.readInt();
        this.mMtkRsrpOnly = parcel.readBoolean();
        int i = parcel.readInt();
        if (i > 0) {
            int[] iArr = new int[i];
            this.mMtkLteRsrpThreshold = iArr;
            parcel.readIntArray(iArr);
        } else {
            this.mMtkLteRsrpThreshold = null;
        }
        int i2 = parcel.readInt();
        if (i2 <= 0) {
            this.mMtkLteRssnrThreshold = null;
            return;
        }
        int[] iArr2 = new int[i2];
        this.mMtkLteRssnrThreshold = iArr2;
        parcel.readIntArray(iArr2);
    }

    private static void log(String str) {
        Rlog.w(LOG_TAG, str);
    }

    private void updateMtkLteLevel(PersistableBundle persistableBundle, ServiceState serviceState) {
        int length;
        int length2;
        int i;
        if (this.mMtkLteRsrpThreshold != null) {
            if (this.mMtkRsrpOnly || this.mMtkLteRssnrThreshold != null) {
                int[] iArr = this.mMtkLteRsrpThreshold;
                int[] iArr2 = this.mMtkLteRssnrThreshold;
                boolean z = this.mMtkRsrpOnly;
                int lteEarfcnRsrpBoost = serviceState != null ? serviceState.getLteEarfcnRsrpBoost() : 0;
                int rsrp = this.mLte.getRsrp() + lteEarfcnRsrpBoost;
                if (rsrp < -140 || rsrp > -44) {
                    length = -1;
                } else {
                    length = iArr.length;
                    while (length > 0 && rsrp < iArr[length - 1]) {
                        length--;
                    }
                }
                if (z) {
                    log("updateLevel() - rsrp = " + length);
                    if (length != -1) {
                        this.mMtkLevel = length;
                        return;
                    }
                }
                int rssnr = this.mLte.getRssnr();
                if (rssnr > 300) {
                    length2 = -1;
                } else {
                    length2 = this.mMtkLteRssnrThreshold.length;
                    while (length2 > 0 && rssnr < this.mMtkLteRssnrThreshold[length2 - 1]) {
                        length2--;
                    }
                }
                log("updateLevel() - rsrp:" + rsrp + " snr:" + rssnr + " rsrpIconLevel:" + length + " snrIconLevel:" + length2 + " lteRsrpBoost:" + lteEarfcnRsrpBoost);
                if (length2 != -1 && length != -1) {
                    this.mMtkLevel = length < length2 ? length : length2;
                    return;
                }
                if (length2 != -1) {
                    this.mMtkLevel = length2;
                    return;
                }
                if (length != -1) {
                    this.mMtkLevel = length;
                    return;
                }
                int rssi = this.mLte.getRssi();
                if (rssi > -51) {
                    i = 0;
                } else if (rssi >= -89) {
                    i = 4;
                } else if (rssi >= -97) {
                    i = 3;
                } else if (rssi >= -103) {
                    i = 2;
                } else {
                    i = rssi >= -113 ? 1 : 0;
                }
                log("getLteLevel - rssi:" + rssi + " rssiIconLevel:" + i);
                this.mMtkLevel = i;
            }
        }
    }

    private boolean useMtkLevel() {
        if (!this.mLte.isValid()) {
            return false;
        }
        if (this.mMtkLteRsrpThreshold == null && this.mMtkLteRssnrThreshold == null) {
            return false;
        }
        return DBG;
    }

    @Override // android.telephony.SignalStrength
    public int getLevel() {
        return useMtkLevel() ? this.mMtkLevel : super.getLevel();
    }

    public int getLteLevel() {
        return super.getLteLevel();
    }

    public int getMtkLevel() {
        return this.mMtkLevel;
    }

    public int[] getMtkLteRsrpThreshold() {
        return this.mMtkLteRsrpThreshold;
    }

    public int[] getMtkLteRssnrThreshold() {
        return this.mMtkLteRssnrThreshold;
    }

    public int getNrLevel() {
        return this.mNr.getLevel();
    }

    public boolean isMtkRsrpOnly() {
        return this.mMtkRsrpOnly;
    }

    public void setMtkLteRsrpThreshold(int[] iArr) {
        if (iArr == null) {
            this.mMtkLteRsrpThreshold = null;
            return;
        }
        this.mMtkLteRsrpThreshold = new int[iArr.length];
        for (int i = 0; i < iArr.length; i++) {
            this.mMtkLteRsrpThreshold[i] = iArr[i];
        }
    }

    public void setMtkLteRssnrThreshold(int[] iArr) {
        if (iArr == null) {
            this.mMtkLteRssnrThreshold = null;
            return;
        }
        this.mMtkLteRssnrThreshold = new int[iArr.length];
        for (int i = 0; i < iArr.length; i++) {
            this.mMtkLteRssnrThreshold[i] = iArr[i];
        }
    }

    public void setMtkRsrpOnly(boolean z) {
        this.mMtkRsrpOnly = z;
    }

    @Override // android.telephony.SignalStrength
    public String toString() {
        return super.toString() + ", phoneId=" + this.mPhoneId + ", mMtkLevel=" + this.mMtkLevel + ", mMtkRsrpOnly=" + this.mMtkRsrpOnly + ", mMtkLteRsrpThreshold=" + Arrays.toString(this.mMtkLteRsrpThreshold) + ", mMtkLteRssnrThreshold=" + Arrays.toString(this.mMtkLteRssnrThreshold);
    }

    public void updateMtkLevel(PersistableBundle persistableBundle, ServiceState serviceState) {
        updateMtkLteLevel(persistableBundle, serviceState);
    }

    @Override // android.telephony.SignalStrength, android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        super.writeToParcel(parcel, i);
        parcel.writeInt(this.mPhoneId);
        parcel.writeInt(this.mMtkLevel);
        parcel.writeBoolean(this.mMtkRsrpOnly);
        int[] iArr = this.mMtkLteRsrpThreshold;
        int length = iArr == null ? 0 : iArr.length;
        parcel.writeInt(length);
        if (length > 0) {
            parcel.writeIntArray(this.mMtkLteRsrpThreshold);
        }
        int[] iArr2 = this.mMtkLteRssnrThreshold;
        int length2 = iArr2 != null ? iArr2.length : 0;
        parcel.writeInt(length2);
        if (length2 > 0) {
            parcel.writeIntArray(this.mMtkLteRssnrThreshold);
        }
    }
}
