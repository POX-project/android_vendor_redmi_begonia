package com.mediatek.mmsdk;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class Rect implements Parcelable {
    public static final Parcelable.Creator<Rect> CREATOR = new Parcelable.Creator<Rect>() { // from class: com.mediatek.mmsdk.Rect.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public Rect createFromParcel(Parcel parcel) {
            return new Rect(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public Rect[] newArray(int i) {
            return new Rect[i];
        }
    };
    private int bottom;
    private int left;
    private int right;
    private int top;

    private Rect(Parcel parcel) {
        this.left = parcel.readInt();
        this.top = parcel.readInt();
        this.right = parcel.readInt();
        this.bottom = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public void readFromParcel(Parcel parcel) {
        this.left = parcel.readInt();
        this.top = parcel.readInt();
        this.right = parcel.readInt();
        this.bottom = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.left);
        parcel.writeInt(this.top);
        parcel.writeInt(this.right);
        parcel.writeInt(this.bottom);
    }
}
