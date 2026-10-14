package com.mediatek.internal.telephony.dataconnection;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class PlmnMvnoData implements Parcelable {
    public static final Parcelable.Creator<PlmnMvnoData> CREATOR = new Parcelable.Creator() { // from class: com.mediatek.internal.telephony.dataconnection.PlmnMvnoData.1
        @Override // android.os.Parcelable.Creator
        public PlmnMvnoData createFromParcel(Parcel parcel) {
            return new PlmnMvnoData(parcel);
        }

        @Override // android.os.Parcelable.Creator
        public PlmnMvnoData[] newArray(int i) {
            return new PlmnMvnoData[i];
        }
    };
    private final String m_cdmaImsi;
    private final String m_cdmaPlmn;
    private final String m_cdmaSpn;
    private final String m_gid1;
    private final String m_gsmImsi;
    private final String m_gsmPlmn;
    private final String m_gsmSpn;
    private final String m_impi;
    private final String m_pnn;

    public PlmnMvnoData(Parcel parcel) {
        this.m_gsmPlmn = parcel.readString();
        this.m_cdmaPlmn = parcel.readString();
        this.m_gsmSpn = parcel.readString();
        this.m_cdmaSpn = parcel.readString();
        this.m_gsmImsi = parcel.readString();
        this.m_cdmaImsi = parcel.readString();
        this.m_gid1 = parcel.readString();
        this.m_pnn = parcel.readString();
        this.m_impi = parcel.readString();
    }

    public PlmnMvnoData(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9) {
        this.m_gsmPlmn = str;
        this.m_cdmaPlmn = str2;
        this.m_gsmSpn = str3;
        this.m_cdmaSpn = str4;
        this.m_gsmImsi = str5;
        this.m_cdmaImsi = str6;
        this.m_gid1 = str7;
        this.m_pnn = str8;
        this.m_impi = str9;
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String getCdmaImsi() {
        return this.m_cdmaImsi;
    }

    public String getCdmaNumeric() {
        return this.m_cdmaPlmn;
    }

    public String getCdmaSpn() {
        return this.m_cdmaSpn;
    }

    public String getGid1() {
        return this.m_gid1;
    }

    public String getGsmImsi() {
        return this.m_gsmImsi;
    }

    public String getGsmNumeric() {
        return this.m_gsmPlmn;
    }

    public String getGsmSpn() {
        return this.m_gsmSpn;
    }

    public String getImpi() {
        return this.m_impi;
    }

    public String getPnn() {
        return this.m_pnn;
    }

    public String toString() {
        return "PlmnMvnoData(xxx)";
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.m_gsmPlmn);
        parcel.writeString(this.m_cdmaPlmn);
        parcel.writeString(this.m_gsmSpn);
        parcel.writeString(this.m_cdmaSpn);
        parcel.writeString(this.m_gsmImsi);
        parcel.writeString(this.m_cdmaImsi);
        parcel.writeString(this.m_gid1);
        parcel.writeString(this.m_pnn);
        parcel.writeString(this.m_impi);
    }
}
