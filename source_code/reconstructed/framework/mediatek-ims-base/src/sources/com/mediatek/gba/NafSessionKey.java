package com.mediatek.gba;

import android.os.Parcel;
import android.os.Parcelable;
import android.util.Base64;

/* JADX INFO: loaded from: classes.dex */
public class NafSessionKey implements Parcelable {
    public static final Parcelable.Creator<NafSessionKey> CREATOR = new Parcelable.Creator<NafSessionKey>() { // from class: com.mediatek.gba.NafSessionKey.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public NafSessionKey createFromParcel(Parcel parcel) {
            NafSessionKey nafSessionKey = new NafSessionKey();
            String string = parcel.readString();
            if (string != null) {
                nafSessionKey.setBtid(string);
            }
            byte[] bArrCreateByteArray = parcel.createByteArray();
            if (bArrCreateByteArray != null) {
                nafSessionKey.setKey(bArrCreateByteArray);
            }
            String string2 = parcel.readString();
            if (string2 != null) {
                nafSessionKey.setKeylifetime(string2);
            }
            String string3 = parcel.readString();
            if (string3 != null) {
                nafSessionKey.setNafKeyName(string3);
            }
            String string4 = parcel.readString();
            if (string4 != null) {
                nafSessionKey.setAuthHeader(string4);
            }
            parcel.readInt();
            String string5 = parcel.readString();
            if (string5 != null) {
                nafSessionKey.setException(new IllegalStateException(string5));
            }
            return nafSessionKey;
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public NafSessionKey[] newArray(int i) {
            return new NafSessionKey[i];
        }
    };
    private String mAuthHeader;
    private String mBtid;
    private Exception mException;
    private byte[] mKey;
    private String mKeylifetime;
    private byte[] mNafId;
    private String mNafKeyName;

    public NafSessionKey() {
    }

    public NafSessionKey(String str, byte[] bArr, String str2) {
        this.mBtid = str;
        this.mKey = bArr;
        this.mKeylifetime = str2;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String getAuthHeader() {
        return this.mAuthHeader;
    }

    public byte[] getBase64Key() {
        return Base64.encode(this.mKey, 2);
    }

    public String getBtid() {
        return this.mBtid;
    }

    public Exception getException() {
        return this.mException;
    }

    public byte[] getKey() {
        return this.mKey;
    }

    public String getKeylifetime() {
        return this.mKeylifetime;
    }

    public byte[] getNafId() {
        return this.mNafId;
    }

    public String getNafKeyName() {
        return this.mNafKeyName;
    }

    public void setAuthHeader(String str) {
        this.mAuthHeader = str;
    }

    public void setBtid(String str) {
        this.mBtid = str;
    }

    public void setException(Exception exc) {
        this.mException = exc;
    }

    public void setKey(byte[] bArr) {
        this.mKey = bArr;
    }

    public void setKeylifetime(String str) {
        this.mKeylifetime = str;
    }

    public void setNafId(byte[] bArr) {
        this.mNafId = bArr;
    }

    public void setNafKeyName(String str) {
        this.mNafKeyName = str;
    }

    public String toString() {
        String string;
        synchronized (this) {
            StringBuilder sb = new StringBuilder("NafSessionKey -");
            sb.append(" btid: " + this.mBtid);
            sb.append(" keylifetime: " + this.mKeylifetime);
            sb.append(" nafkeyname: " + this.mNafKeyName);
            sb.append(" authheader: " + this.mAuthHeader);
            string = sb.toString();
        }
        return string;
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.mBtid);
        parcel.writeByteArray(this.mKey);
        parcel.writeString(this.mKeylifetime);
        parcel.writeString(this.mNafKeyName);
        parcel.writeString(this.mAuthHeader);
        Exception exc = this.mException;
        if (exc != null) {
            parcel.writeException(exc);
        }
    }
}
