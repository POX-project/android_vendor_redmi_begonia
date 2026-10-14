package com.mediatek.ims;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsCallForwardInfo implements Parcelable {
    public static final Parcelable.Creator<MtkImsCallForwardInfo> CREATOR = new Parcelable.Creator<MtkImsCallForwardInfo>() { // from class: com.mediatek.ims.MtkImsCallForwardInfo.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkImsCallForwardInfo createFromParcel(Parcel parcel) {
            return new MtkImsCallForwardInfo(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkImsCallForwardInfo[] newArray(int i) {
            return new MtkImsCallForwardInfo[i];
        }
    };
    public int mCondition;
    public String mNumber;
    public int mServiceClass;
    public int mStatus;
    public int mTimeSeconds;
    public long[] mTimeSlot;
    public int mToA;

    public MtkImsCallForwardInfo() {
    }

    public MtkImsCallForwardInfo(Parcel parcel) {
        readFromParcel(parcel);
    }

    private void readFromParcel(Parcel parcel) {
        this.mCondition = parcel.readInt();
        this.mStatus = parcel.readInt();
        this.mServiceClass = parcel.readInt();
        this.mToA = parcel.readInt();
        this.mNumber = parcel.readString();
        this.mTimeSeconds = parcel.readInt();
        long[] jArr = new long[2];
        this.mTimeSlot = jArr;
        try {
            parcel.readLongArray(jArr);
        } catch (RuntimeException e) {
            this.mTimeSlot = null;
        }
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        return super.toString() + ", Condition: " + this.mCondition + ", Status: " + (this.mStatus == 0 ? "disabled" : "enabled") + ", ServiceClass: " + this.mServiceClass + ", ToA: " + this.mToA + ", Number=" + this.mNumber + ", Time (seconds): " + this.mTimeSeconds + ", timeSlot: " + Arrays.toString(this.mTimeSlot);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.mCondition);
        parcel.writeInt(this.mStatus);
        parcel.writeInt(this.mServiceClass);
        parcel.writeInt(this.mToA);
        parcel.writeString(this.mNumber);
        parcel.writeInt(this.mTimeSeconds);
        parcel.writeLongArray(this.mTimeSlot);
    }
}
