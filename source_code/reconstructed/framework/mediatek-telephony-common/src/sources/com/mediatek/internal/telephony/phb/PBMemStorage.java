package com.mediatek.internal.telephony.phb;

import android.os.Parcel;

/* JADX INFO: loaded from: classes.dex */
public class PBMemStorage {
    public static final int INT_NOT_SET = -1;
    public static final String STRING_NOT_SET = "";
    private String mStorage = "";
    private int mUsed = -1;
    private int mTotal = -1;

    public static PBMemStorage createFromParcel(Parcel parcel) {
        PBMemStorage pBMemStorage = new PBMemStorage();
        pBMemStorage.mStorage = parcel.readString();
        pBMemStorage.mUsed = parcel.readInt();
        pBMemStorage.mTotal = parcel.readInt();
        return pBMemStorage;
    }

    public String getStorage() {
        return this.mStorage;
    }

    public int getTotal() {
        return this.mTotal;
    }

    public int getUsed() {
        return this.mUsed;
    }

    public void setStorage(String str) {
        this.mStorage = str;
    }

    public void setTotal(int i) {
        this.mTotal = i;
    }

    public void setUsed(int i) {
        this.mUsed = i;
    }

    public String toString() {
        return super.toString() + ";storage: " + this.mStorage + ",used: " + this.mUsed + ",total:" + this.mTotal;
    }
}
