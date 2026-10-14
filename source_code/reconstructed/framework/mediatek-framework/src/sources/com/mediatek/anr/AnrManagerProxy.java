package com.mediatek.anr;

import android.os.IBinder;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
class AnrManagerProxy implements IAnrManager {
    private IBinder mRemote;

    public AnrManagerProxy(IBinder iBinder) {
        this.mRemote = iBinder;
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this.mRemote;
    }

    @Override // com.mediatek.anr.IAnrManager
    public void informMessageDump(String str, int i) throws RemoteException {
        Parcel parcelObtain = Parcel.obtain();
        parcelObtain.writeInterfaceToken(IAnrManager.descriptor);
        parcelObtain.writeString(str);
        parcelObtain.writeInt(i);
        this.mRemote.transact(2, parcelObtain, null, 1);
        parcelObtain.recycle();
    }
}
