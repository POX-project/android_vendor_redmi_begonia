package com.mediatek.internal.telephony.cat;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX INFO: loaded from: classes.dex */
public class DefaultBearerDesc extends BearerDesc {
    public static final Parcelable.Creator<DefaultBearerDesc> CREATOR = new Parcelable.Creator<DefaultBearerDesc>() { // from class: com.mediatek.internal.telephony.cat.DefaultBearerDesc.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public DefaultBearerDesc createFromParcel(Parcel parcel) {
            return new DefaultBearerDesc(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public DefaultBearerDesc[] newArray(int i) {
            return new DefaultBearerDesc[i];
        }
    };

    public DefaultBearerDesc() {
        this.bearerType = 3;
    }

    private DefaultBearerDesc(Parcel parcel) {
        this.bearerType = parcel.readInt();
    }

    @Override // com.mediatek.internal.telephony.cat.BearerDesc, android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.bearerType);
    }
}
