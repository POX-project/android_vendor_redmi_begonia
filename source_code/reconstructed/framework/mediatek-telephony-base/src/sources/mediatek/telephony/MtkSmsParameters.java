package mediatek.telephony;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class MtkSmsParameters implements Parcelable {
    public static final Parcelable.Creator<MtkSmsParameters> CREATOR = new Parcelable.Creator<MtkSmsParameters>() { // from class: mediatek.telephony.MtkSmsParameters.1
        @Override // android.os.Parcelable.Creator
        public MtkSmsParameters createFromParcel(Parcel parcel) {
            return new MtkSmsParameters(parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt());
        }

        @Override // android.os.Parcelable.Creator
        public MtkSmsParameters[] newArray(int i) {
            return new MtkSmsParameters[i];
        }
    };
    public int dcs;
    public int format;
    public int pid;
    public int vp;

    public MtkSmsParameters(int i, int i2, int i3, int i4) {
        this.format = i;
        this.vp = i2;
        this.pid = i3;
        this.dcs = i4;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder(50);
        sb.append("[");
        sb.append(this.format);
        sb.append(", ");
        sb.append(this.vp);
        sb.append(", ");
        sb.append(this.pid);
        sb.append(", ");
        sb.append(this.dcs);
        sb.append("]");
        return sb.toString();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.format);
        parcel.writeInt(this.vp);
        parcel.writeInt(this.pid);
        parcel.writeInt(this.dcs);
    }
}
