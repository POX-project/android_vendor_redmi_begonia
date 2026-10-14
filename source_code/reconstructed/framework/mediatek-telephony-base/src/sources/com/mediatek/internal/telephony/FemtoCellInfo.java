package com.mediatek.internal.telephony;

import android.os.Parcel;
import android.os.Parcelable;
import android.telephony.CellSignalStrengthCdma;
import android.telephony.CellSignalStrengthGsm;
import android.telephony.CellSignalStrengthLte;
import android.telephony.CellSignalStrengthNr;
import android.telephony.CellSignalStrengthTdscdma;
import android.telephony.CellSignalStrengthWcdma;
import android.telephony.SignalStrength;

/* JADX INFO: loaded from: classes.dex */
public class FemtoCellInfo implements Parcelable {
    public static final Parcelable.Creator<FemtoCellInfo> CREATOR = new Parcelable.Creator<FemtoCellInfo>() { // from class: com.mediatek.internal.telephony.FemtoCellInfo.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public FemtoCellInfo createFromParcel(Parcel parcel) {
            return new FemtoCellInfo(parcel.readInt(), parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readInt(), parcel.readInt() == 1, parcel.readInt());
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public FemtoCellInfo[] newArray(int i) {
            return new FemtoCellInfo[i];
        }
    };
    public static final int CSG_ICON_TYPE_ALLOWED = 1;
    public static final int CSG_ICON_TYPE_NOT_ALLOWED = 0;
    public static final int CSG_ICON_TYPE_OPERATOR = 2;
    public static final int CSG_ICON_TYPE_OPERATOR_UNAUTHORIZED = 3;
    public static final int SIGNAL_STRENGTH_GOOD = 3;
    public static final int SIGNAL_STRENGTH_GREAT = 4;
    public static final int SIGNAL_STRENGTH_MODERATE = 2;
    public static final int SIGNAL_STRENGTH_NONE_OR_UNKNOWN = 0;
    public static final int SIGNAL_STRENGTH_POOR = 1;
    public static final int STATE_CONNECTED = 0;
    public static final int STATE_DISCONNECTED = 1;
    private boolean con;
    private int csgIconType;
    private int csgId;
    private String homeNodeBName;
    private String operatorAlphaLong;
    private String operatorNumeric;
    private int rat;
    private int sig;

    public FemtoCellInfo(int i, int i2, String str, String str2, String str3, int i3, boolean z, int i4) {
        this.rat = 0;
        this.con = false;
        this.csgId = i;
        this.csgIconType = i2;
        this.homeNodeBName = str;
        this.operatorNumeric = str2;
        this.operatorAlphaLong = str3;
        this.rat = i3;
        this.con = z;
        this.sig = i4;
    }

    private int updateLevel() {
        int i = this.rat;
        if (i == 14) {
            return new SignalStrength(new CellSignalStrengthCdma(), new CellSignalStrengthGsm(), new CellSignalStrengthWcdma(), new CellSignalStrengthTdscdma(), new CellSignalStrengthLte(99, this.sig, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE), new CellSignalStrengthNr()).getLevel();
        }
        if (i == 3) {
            return new SignalStrength(new CellSignalStrengthCdma(), new CellSignalStrengthGsm(), new CellSignalStrengthWcdma(this.sig, Integer.MAX_VALUE, Integer.MAX_VALUE, Integer.MAX_VALUE), new CellSignalStrengthTdscdma(), new CellSignalStrengthLte(), new CellSignalStrengthNr()).getLevel();
        }
        return 0;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public int getConnectionState() {
        return this.con ? 0 : 1;
    }

    public int getCsgIconType() {
        return this.csgIconType;
    }

    public int getCsgId() {
        return this.csgId;
    }

    public int getCsgRat() {
        return this.rat;
    }

    public String getHomeNodeBName() {
        return this.homeNodeBName;
    }

    public String getOperatorAlphaLong() {
        return this.operatorAlphaLong;
    }

    public String getOperatorNumeric() {
        return this.operatorNumeric;
    }

    public int getSignalLevel() {
        return updateLevel();
    }

    public String toString() {
        return "FemtoCellInfo " + this.csgId + "/" + this.csgIconType + "/" + this.homeNodeBName + "/" + this.operatorNumeric + "/" + this.operatorAlphaLong + "/" + this.rat + "/" + this.con + "/" + this.sig + "/" + getSignalLevel();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.csgId);
        parcel.writeInt(this.csgIconType);
        parcel.writeString(this.homeNodeBName);
        parcel.writeString(this.operatorNumeric);
        parcel.writeString(this.operatorAlphaLong);
        parcel.writeInt(this.rat);
        parcel.writeInt(this.con ? 1 : 0);
        parcel.writeInt(this.sig);
    }
}
