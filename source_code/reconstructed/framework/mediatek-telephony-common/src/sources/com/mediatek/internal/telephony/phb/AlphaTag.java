package com.mediatek.internal.telephony.phb;

import android.os.Parcel;
import android.os.Parcelable;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public class AlphaTag implements Parcelable {
    public static final Parcelable.Creator<AlphaTag> CREATOR = new Parcelable.Creator<AlphaTag>() { // from class: com.mediatek.internal.telephony.phb.AlphaTag.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public AlphaTag createFromParcel(Parcel parcel) {
            return new AlphaTag(parcel.readInt(), parcel.readString(), parcel.readInt());
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public AlphaTag[] newArray(int i) {
            return new AlphaTag[i];
        }
    };
    static final String LOG_TAG = "AlphaTag";
    String mAlphaTag;
    int mPbrIndex;
    int mRecordNumber;

    public AlphaTag(int i, String str, int i2) {
        this.mAlphaTag = null;
        this.mRecordNumber = i;
        this.mAlphaTag = str;
        this.mPbrIndex = i2;
    }

    private static boolean stringCompareNullEqualsEmpty(String str, String str2) {
        if (str == str2) {
            return true;
        }
        if (str == null) {
            str = "";
        }
        if (str2 == null) {
            str2 = "";
        }
        return str.equals(str2);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String getAlphaTag() {
        return this.mAlphaTag;
    }

    public int getPbrIndex() {
        return this.mPbrIndex;
    }

    public int getRecordIndex() {
        return this.mRecordNumber;
    }

    public boolean isEmpty() {
        return TextUtils.isEmpty(this.mAlphaTag);
    }

    public boolean isEqual(AlphaTag alphaTag) {
        return stringCompareNullEqualsEmpty(this.mAlphaTag, alphaTag.mAlphaTag);
    }

    public void setAlphaTag(String str) {
        this.mAlphaTag = str;
    }

    public void setPbrIndex(int i) {
        this.mPbrIndex = i;
    }

    public void setRecordIndex(int i) {
        this.mRecordNumber = i;
    }

    public String toString() {
        return "AlphaTag: '" + this.mRecordNumber + "' '" + this.mAlphaTag + "' '" + this.mPbrIndex + "'";
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.mRecordNumber);
        parcel.writeString(this.mAlphaTag);
        parcel.writeInt(this.mPbrIndex);
    }
}
