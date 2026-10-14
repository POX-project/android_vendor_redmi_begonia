package com.mediatek.internal.telephony.cat;

import android.os.Parcel;
import android.os.Parcelable;
import com.android.internal.telephony.cat.Menu;

/* JADX INFO: loaded from: classes.dex */
public class MtkMenu extends Menu {
    public static final Parcelable.Creator<MtkMenu> CREATOR = new Parcelable.Creator<MtkMenu>() { // from class: com.mediatek.internal.telephony.cat.MtkMenu.1
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkMenu createFromParcel(Parcel parcel) {
            return new MtkMenu(parcel);
        }

        /* JADX WARN: Can't rename method to resolve collision */
        @Override // android.os.Parcelable.Creator
        public MtkMenu[] newArray(int i) {
            return new MtkMenu[i];
        }
    };
    public int mFromMD;
    public byte[] nextActionIndicator;

    public MtkMenu() {
        this.nextActionIndicator = null;
        this.mFromMD = 0;
    }

    private MtkMenu(Parcel parcel) {
        super(parcel);
        this.mFromMD = parcel.readInt();
        int i = parcel.readInt();
        if (i <= 0) {
            this.nextActionIndicator = null;
        } else {
            byte[] bArr = new byte[i];
            this.nextActionIndicator = bArr;
            parcel.readByteArray(bArr);
        }
        MtkCatLog.d("[MtkMenu]", "Menu: " + this.mFromMD);
    }

    public int getSetUpMenuFlag() {
        return this.mFromMD;
    }

    public void setSetUpMenuFlag(int i) {
        this.mFromMD = i;
    }

    public void writeToParcel(Parcel parcel, int i) {
        super.writeToParcel(parcel, i);
        parcel.writeInt(this.mFromMD);
        byte[] bArr = this.nextActionIndicator;
        parcel.writeInt(bArr == null ? -1 : bArr.length);
        byte[] bArr2 = this.nextActionIndicator;
        if (bArr2 != null && bArr2.length > 0) {
            parcel.writeByteArray(bArr2);
        }
        MtkCatLog.w("[MtkMenu]", "writeToParcel: " + this.mFromMD);
    }
}
