package com.mediatek.internal.telephony.ims;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class MtkQosStatus implements Parcelable {
    public static final Parcelable.Creator<MtkQosStatus> CREATOR = new Parcelable.Creator<MtkQosStatus>() { // from class: com.mediatek.internal.telephony.ims.MtkQosStatus.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkQosStatus createFromParcel(Parcel parcel) {
            return MtkQosStatus.readFrom(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkQosStatus[] newArray(int i) {
            return new MtkQosStatus[i];
        }
    };
    public int mDlGbr;
    public int mDlMbr;
    public int mQci;
    public int mUlGbr;
    public int mUlMbr;

    public MtkQosStatus(int i, int i2, int i3, int i4, int i5) {
        this.mQci = i;
        this.mDlGbr = i2;
        this.mUlGbr = i3;
        this.mDlMbr = i4;
        this.mUlMbr = i5;
    }

    public static MtkQosStatus readFrom(Parcel parcel) {
        return new MtkQosStatus(parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt());
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        return "[qci=" + this.mQci + ", dlGbr=" + this.mDlGbr + ", ulGbr=" + this.mUlGbr + ", dlMbr=" + this.mDlMbr + ", ulMbr=" + this.mUlMbr + "]";
    }

    public void writeTo(Parcel parcel) {
        parcel.writeInt(this.mQci);
        parcel.writeInt(this.mDlGbr);
        parcel.writeInt(this.mUlGbr);
        parcel.writeInt(this.mDlMbr);
        parcel.writeInt(this.mUlMbr);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        writeTo(parcel);
    }
}
