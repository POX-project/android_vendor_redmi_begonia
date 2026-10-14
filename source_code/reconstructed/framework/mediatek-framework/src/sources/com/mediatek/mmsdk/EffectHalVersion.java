package com.mediatek.mmsdk;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class EffectHalVersion implements Parcelable {
    public static final Parcelable.Creator<EffectHalVersion> CREATOR = new Parcelable.Creator<EffectHalVersion>() { // from class: com.mediatek.mmsdk.EffectHalVersion.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public EffectHalVersion createFromParcel(Parcel parcel) {
            return new EffectHalVersion(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public EffectHalVersion[] newArray(int i) {
            return new EffectHalVersion[i];
        }
    };
    private int mMajor;
    private int mMinor;
    private String mName;

    public EffectHalVersion() {
        this.mName = "Null";
        this.mMajor = 0;
        this.mMinor = 0;
    }

    private EffectHalVersion(Parcel parcel) {
        this.mName = parcel.readString();
        this.mMajor = parcel.readInt();
        this.mMinor = parcel.readInt();
    }

    public EffectHalVersion(String str, int i, int i2) {
        this.mName = str;
        this.mMajor = i;
        this.mMinor = i2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public int getMajor() {
        return this.mMajor;
    }

    public int getMinor() {
        return this.mMinor;
    }

    public String getName() {
        return this.mName;
    }

    public void readFromParcel(Parcel parcel) {
        this.mName = parcel.readString();
        this.mMajor = parcel.readInt();
        this.mMinor = parcel.readInt();
    }

    public void setMajor(int i) {
        this.mMajor = i;
    }

    public void setMinor(int i) {
        this.mMinor = i;
    }

    public void setName(String str) {
        this.mName = str;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.mName);
        parcel.writeInt(this.mMajor);
        parcel.writeInt(this.mMinor);
    }
}
