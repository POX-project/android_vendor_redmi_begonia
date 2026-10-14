package org.mipay.android.manager;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IMipayService extends IInterface {

    public static abstract class Stub extends Binder implements IMipayService {
        public Stub() {
            attachInterface(this, "org.mipay.android.manager.IMipayService");
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1598968902) {
                parcel2.writeString("org.mipay.android.manager.IMipayService");
                return true;
            }
            switch (i) {
                case 1:
                    parcel.enforceInterface("org.mipay.android.manager.IMipayService");
                    boolean zContains = contains(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(zContains ? 1 : 0);
                    return true;
                case 2:
                    parcel.enforceInterface("org.mipay.android.manager.IMipayService");
                    int iGenerateKeyPair = generateKeyPair(parcel.readInt(), parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iGenerateKeyPair);
                    return true;
                case 3:
                    parcel.enforceInterface("org.mipay.android.manager.IMipayService");
                    int iSignInit = signInit(parcel.readInt(), parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iSignInit);
                    return true;
                case 4:
                    parcel.enforceInterface("org.mipay.android.manager.IMipayService");
                    int iSignUpdate = signUpdate(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iSignUpdate);
                    return true;
                case 5:
                    parcel.enforceInterface("org.mipay.android.manager.IMipayService");
                    byte[] bArrSign = sign();
                    parcel2.writeNoException();
                    parcel2.writeByteArray(bArrSign);
                    return true;
                case 6:
                    parcel.enforceInterface("org.mipay.android.manager.IMipayService");
                    int iRemoveAllKey = removeAllKey(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(iRemoveAllKey);
                    return true;
                case 7:
                    parcel.enforceInterface("org.mipay.android.manager.IMipayService");
                    String fpIds = getFpIds();
                    parcel2.writeNoException();
                    parcel2.writeString(fpIds);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    boolean contains(int i, String str) throws RemoteException;

    int generateKeyPair(int i, String str, String str2) throws RemoteException;

    String getFpIds() throws RemoteException;

    int removeAllKey(int i) throws RemoteException;

    byte[] sign() throws RemoteException;

    int signInit(int i, String str, String str2) throws RemoteException;

    int signUpdate(int i, String str) throws RemoteException;
}
