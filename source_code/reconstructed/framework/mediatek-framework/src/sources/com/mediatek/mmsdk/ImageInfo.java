package com.mediatek.mmsdk;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class ImageInfo implements Parcelable {
    public static final Parcelable.Creator<ImageInfo> CREATOR = new Parcelable.Creator<ImageInfo>() { // from class: com.mediatek.mmsdk.ImageInfo.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public ImageInfo createFromParcel(Parcel parcel) {
            return new ImageInfo(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public ImageInfo[] newArray(int i) {
            return new ImageInfo[i];
        }
    };
    private int format;
    private int height;
    private int numOfPlane;
    private int[] stride;
    private int width;

    private ImageInfo(Parcel parcel) {
        this.format = parcel.readInt();
        this.width = parcel.readInt();
        this.height = parcel.readInt();
        this.numOfPlane = parcel.readInt();
        this.stride = new int[]{parcel.readInt(), 0, 0};
        this.stride[1] = parcel.readInt();
        this.stride[2] = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public void readFromParcel(Parcel parcel) {
        this.format = parcel.readInt();
        this.width = parcel.readInt();
        this.height = parcel.readInt();
        this.numOfPlane = parcel.readInt();
        this.stride[0] = parcel.readInt();
        this.stride[1] = parcel.readInt();
        this.stride[2] = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.format);
        parcel.writeInt(this.width);
        parcel.writeInt(this.height);
        parcel.writeInt(this.numOfPlane);
        parcel.writeInt(this.stride[0]);
        parcel.writeInt(this.stride[1]);
        parcel.writeInt(this.stride[2]);
    }
}
