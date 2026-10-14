package com.mediatek.mmsdk;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class TrasformOptions implements Parcelable {
    public static final Parcelable.Creator<TrasformOptions> CREATOR = new Parcelable.Creator<TrasformOptions>() { // from class: com.mediatek.mmsdk.TrasformOptions.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public TrasformOptions createFromParcel(Parcel parcel) {
            return new TrasformOptions(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public TrasformOptions[] newArray(int i) {
            return new TrasformOptions[i];
        }
    };
    private int encQuality;
    private int isDither;
    private Parcelable rect;
    private int sharpnessLevel;
    private int transform;

    private TrasformOptions(Parcel parcel) {
        this.rect = parcel.readParcelable(null);
        this.transform = parcel.readInt();
        this.encQuality = parcel.readInt();
        this.isDither = parcel.readInt();
        this.sharpnessLevel = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public void readFromParcel(Parcel parcel) {
        this.rect = parcel.readParcelable(null);
        this.transform = parcel.readInt();
        this.encQuality = parcel.readInt();
        this.isDither = parcel.readInt();
        this.sharpnessLevel = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeParcelable(this.rect, i);
        parcel.writeInt(this.transform);
        parcel.writeInt(this.encQuality);
        parcel.writeInt(this.isDither);
        parcel.writeInt(this.sharpnessLevel);
    }
}
