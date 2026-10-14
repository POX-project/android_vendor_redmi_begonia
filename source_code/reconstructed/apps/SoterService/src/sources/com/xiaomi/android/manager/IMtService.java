package com.xiaomi.android.manager;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IMtService extends IInterface {

    public static abstract class Stub extends Binder implements IMtService {
        public Stub() {
            attachInterface(this, "com.xiaomi.android.manager.IMtService");
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface("com.xiaomi.android.manager.IMtService");
                int iWidevineGetVersion = widevineGetVersion();
                parcel2.writeNoException();
                parcel2.writeInt(iWidevineGetVersion);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface("com.xiaomi.android.manager.IMtService");
                byte[] bArrWidevinePrepare = widevinePrepare();
                parcel2.writeNoException();
                parcel2.writeByteArray(bArrWidevinePrepare);
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface("com.xiaomi.android.manager.IMtService");
                int iWidevineLoad = widevineLoad(parcel.createByteArray(), parcel.createByteArray());
                parcel2.writeNoException();
                parcel2.writeInt(iWidevineLoad);
                return true;
            }
            if (i != 4) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString("com.xiaomi.android.manager.IMtService");
                return true;
            }
            parcel.enforceInterface("com.xiaomi.android.manager.IMtService");
            byte[] bArrWidevineDump = widevineDump();
            parcel2.writeNoException();
            parcel2.writeByteArray(bArrWidevineDump);
            return true;
        }
    }

    byte[] widevineDump() throws RemoteException;

    int widevineGetVersion() throws RemoteException;

    int widevineLoad(byte[] bArr, byte[] bArr2) throws RemoteException;

    byte[] widevinePrepare() throws RemoteException;
}
