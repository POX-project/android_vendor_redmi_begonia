package com.mediatek.internal.telephony.dataconnection;

import android.os.Parcel;
import android.os.Parcelable;
import java.net.InetAddress;

/* JADX INFO: loaded from: classes.dex */
public class CpaConnectionInfo implements Parcelable {
    public static final Parcelable.Creator<CpaConnectionInfo> CREATOR = new Parcelable.Creator<CpaConnectionInfo>() { // from class: com.mediatek.internal.telephony.dataconnection.CpaConnectionInfo.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public CpaConnectionInfo createFromParcel(Parcel parcel) {
            return new CpaConnectionInfo(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public CpaConnectionInfo[] newArray(int i) {
            return new CpaConnectionInfo[i];
        }
    };
    public InetAddress[] dnsAddresses;
    public InetAddress localAddress;

    public CpaConnectionInfo() {
        this.localAddress = null;
        this.dnsAddresses = null;
    }

    private CpaConnectionInfo(Parcel parcel) {
        this.localAddress = null;
        this.dnsAddresses = null;
        readFromParcel(parcel);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public void readFromParcel(Parcel parcel) {
        this.localAddress = (InetAddress) parcel.readSerializable();
        int i = parcel.readInt();
        if (i <= 0) {
            this.dnsAddresses = null;
            return;
        }
        this.dnsAddresses = new InetAddress[i];
        for (int i2 = 0; i2 < i; i2++) {
            this.dnsAddresses[i2] = (InetAddress) parcel.readSerializable();
        }
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeSerializable(this.localAddress);
        InetAddress[] inetAddressArr = this.dnsAddresses;
        if (inetAddressArr == null) {
            parcel.writeInt(0);
            return;
        }
        parcel.writeInt(inetAddressArr.length);
        int i2 = 0;
        while (true) {
            InetAddress[] inetAddressArr2 = this.dnsAddresses;
            if (i2 >= inetAddressArr2.length) {
                return;
            }
            parcel.writeSerializable(inetAddressArr2[i2]);
            i2++;
        }
    }
}
