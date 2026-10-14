package org.ifaa.android.manager;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IIFAAService extends IInterface {

    public static abstract class Stub extends Binder implements IIFAAService {
        public Stub() {
            attachInterface(this, "org.ifaa.android.manager.IIFAAService");
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface("org.ifaa.android.manager.IIFAAService");
                byte[] bArrProcessCmd_v2 = processCmd_v2(parcel.createByteArray());
                parcel2.writeNoException();
                parcel2.writeByteArray(bArrProcessCmd_v2);
                return true;
            }
            if (i != 2) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString("org.ifaa.android.manager.IIFAAService");
                return true;
            }
            parcel.enforceInterface("org.ifaa.android.manager.IIFAAService");
            int[] iDList = getIDList(parcel.readInt());
            parcel2.writeNoException();
            parcel2.writeIntArray(iDList);
            return true;
        }
    }

    int[] getIDList(int i) throws RemoteException;

    byte[] processCmd_v2(byte[] bArr) throws RemoteException;
}
