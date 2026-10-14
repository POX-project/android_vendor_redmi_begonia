package com.mediatek.mmsdk;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class HandDetectionEvent implements Parcelable {
    public static final Parcelable.Creator<HandDetectionEvent> CREATOR = new Parcelable.Creator<HandDetectionEvent>() { // from class: com.mediatek.mmsdk.HandDetectionEvent.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public HandDetectionEvent createFromParcel(Parcel parcel) {
            return new HandDetectionEvent(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public HandDetectionEvent[] newArray(int i) {
            return new HandDetectionEvent[i];
        }
    };
    private Parcelable boundBox;
    private float confidence;
    private int id;
    private int pose;

    private HandDetectionEvent(Parcel parcel) {
        this.boundBox = parcel.readParcelable(null);
        this.confidence = parcel.readFloat();
        this.id = parcel.readInt();
        this.pose = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public void readFromParcel(Parcel parcel) {
        this.boundBox = parcel.readParcelable(null);
        this.confidence = parcel.readFloat();
        this.id = parcel.readInt();
        this.pose = parcel.readInt();
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeParcelable(this.boundBox, i);
        parcel.writeFloat(this.confidence);
        parcel.writeInt(this.id);
        parcel.writeInt(this.pose);
    }
}
