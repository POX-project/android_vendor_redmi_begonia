package com.mediatek.internal.telephony.ims;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class MtkTftParameter implements Parcelable {
    public static final Parcelable.Creator<MtkTftParameter> CREATOR = new Parcelable.Creator<MtkTftParameter>() { // from class: com.mediatek.internal.telephony.ims.MtkTftParameter.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkTftParameter createFromParcel(Parcel parcel) {
            return MtkTftParameter.readFrom(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkTftParameter[] newArray(int i) {
            return new MtkTftParameter[i];
        }
    };
    public ArrayList<Integer> mLinkedPacketFilterIdList;

    public MtkTftParameter(ArrayList<Integer> arrayList) {
        this.mLinkedPacketFilterIdList = arrayList;
    }

    public static MtkTftParameter readFrom(Parcel parcel) {
        int i = parcel.readInt();
        ArrayList arrayList = new ArrayList();
        for (int i2 = 0; i2 < i; i2++) {
            arrayList.add(Integer.valueOf(parcel.readInt()));
        }
        return new MtkTftParameter(arrayList);
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        StringBuffer stringBuffer = new StringBuffer("LinkedPacketFilterIdList[");
        Iterator<Integer> it = this.mLinkedPacketFilterIdList.iterator();
        while (it.hasNext()) {
            stringBuffer.append(it.next() + " ");
        }
        stringBuffer.append("]");
        return stringBuffer.toString();
    }

    public void writeTo(Parcel parcel) {
        parcel.writeInt(this.mLinkedPacketFilterIdList.size());
        Iterator<Integer> it = this.mLinkedPacketFilterIdList.iterator();
        while (it.hasNext()) {
            parcel.writeInt(it.next().intValue());
        }
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        writeTo(parcel);
    }
}
