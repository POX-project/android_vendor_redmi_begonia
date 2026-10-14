package com.mediatek.wfo;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class DisconnectCause implements Parcelable {
    public static final Parcelable.Creator<DisconnectCause> CREATOR = new Parcelable.Creator<DisconnectCause>() { // from class: com.mediatek.wfo.DisconnectCause.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public DisconnectCause createFromParcel(Parcel parcel) {
            return new DisconnectCause(parcel.readInt(), parcel.readInt());
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public DisconnectCause[] newArray(int i) {
            return new DisconnectCause[i];
        }
    };
    private int errorCause;
    private int subErrorCause;

    public DisconnectCause(int i, int i2) {
        this.errorCause = i;
        this.subErrorCause = i2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public int getErrorCause() {
        return this.errorCause;
    }

    public int getSubErrorCause() {
        return this.subErrorCause;
    }

    public String toString() {
        return "DisconnectCause {errorCause=" + this.errorCause + ", subErrorCause=" + this.subErrorCause + "}";
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.errorCause);
        parcel.writeInt(this.subErrorCause);
    }
}
