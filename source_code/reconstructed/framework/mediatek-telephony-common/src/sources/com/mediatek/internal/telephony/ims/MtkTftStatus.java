package com.mediatek.internal.telephony.ims;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class MtkTftStatus implements Parcelable {
    public static final Parcelable.Creator<MtkTftStatus> CREATOR = new Parcelable.Creator<MtkTftStatus>() { // from class: com.mediatek.internal.telephony.ims.MtkTftStatus.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkTftStatus createFromParcel(Parcel parcel) {
            return MtkTftStatus.readFrom(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkTftStatus[] newArray(int i) {
            return new MtkTftStatus[i];
        }
    };
    public static final int OPCODE_ADD_PF = 3;
    public static final int OPCODE_CREATE_NEW_TFT = 1;
    public static final int OPCODE_DELETE_PF = 5;
    public static final int OPCODE_DELETE_TFT = 2;
    public static final int OPCODE_NOTFT_OP = 6;
    public static final int OPCODE_REPLACE_PF = 4;
    public static final int OPCODE_RESERVED = 7;
    public static final int OPCODE_SPARE = 0;
    public ArrayList<MtkPacketFilterInfo> mMtkPacketFilterInfoList;
    public MtkTftParameter mMtkTftParameter;
    public int mOperation;

    public MtkTftStatus(int i, ArrayList<MtkPacketFilterInfo> arrayList, MtkTftParameter mtkTftParameter) {
        this.mOperation = -1;
        this.mOperation = i;
        this.mMtkPacketFilterInfoList = arrayList;
        this.mMtkTftParameter = mtkTftParameter;
    }

    public static MtkTftStatus readFrom(Parcel parcel) {
        int i = parcel.readInt();
        int i2 = parcel.readInt();
        ArrayList arrayList = new ArrayList();
        for (int i3 = 0; i3 < i2; i3++) {
            arrayList.add(MtkPacketFilterInfo.readFrom(parcel));
        }
        return new MtkTftStatus(i, arrayList, MtkTftParameter.readFrom(parcel));
    }

    @Override // android.os.Parcelable
    public int describeContents() {
        return 0;
    }

    public String toString() {
        StringBuffer stringBuffer = new StringBuffer("operation=" + this.mOperation + " [PacketFilterInfo");
        Iterator<MtkPacketFilterInfo> it = this.mMtkPacketFilterInfoList.iterator();
        while (it.hasNext()) {
            stringBuffer.append(it.next().toString());
        }
        stringBuffer.append("], TftParameter[" + this.mMtkTftParameter + "]]");
        return stringBuffer.toString();
    }

    public void writeTo(Parcel parcel) {
        parcel.writeInt(this.mOperation);
        parcel.writeInt(this.mMtkPacketFilterInfoList.size());
        Iterator<MtkPacketFilterInfo> it = this.mMtkPacketFilterInfoList.iterator();
        while (it.hasNext()) {
            it.next().writeTo(parcel);
        }
        this.mMtkTftParameter.writeTo(parcel);
    }

    @Override // android.os.Parcelable
    public void writeToParcel(Parcel parcel, int i) {
        writeTo(parcel);
    }
}
