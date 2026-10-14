package com.mediatek.dm;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IDmService extends IInterface {

    public static class Default implements IDmService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.dm.IDmService
        public int getDmSupported() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.dm.IDmService
        public boolean getImcProvision(int i, int i2) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.dm.IDmService
        public boolean setImcProvision(int i, int i2, int i3) throws RemoteException {
            return false;
        }
    }

    public static abstract class Stub extends Binder implements IDmService {
        private static final String DESCRIPTOR = "com.mediatek.dm.IDmService";
        static final int TRANSACTION_getDmSupported = 1;
        static final int TRANSACTION_getImcProvision = 2;
        static final int TRANSACTION_setImcProvision = 3;

        private static class Proxy implements IDmService {
            public static IDmService sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.dm.IDmService
            public int getDmSupported() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getDmSupported();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.dm.IDmService
            public boolean getImcProvision(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getImcProvision(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.dm.IDmService
            public boolean setImcProvision(int i, int i2, int i3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setImcProvision(i, i2, i3);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IDmService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IDmService)) ? new Proxy(iBinder) : (IDmService) iInterfaceQueryLocalInterface;
        }

        public static IDmService getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IDmService iDmService) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iDmService == null) {
                return false;
            }
            Proxy.sDefaultImpl = iDmService;
            return true;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1) {
                parcel.enforceInterface(DESCRIPTOR);
                int dmSupported = getDmSupported();
                parcel2.writeNoException();
                parcel2.writeInt(dmSupported);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                boolean imcProvision = getImcProvision(parcel.readInt(), parcel.readInt());
                parcel2.writeNoException();
                parcel2.writeInt(imcProvision ? 1 : 0);
                return true;
            }
            if (i != 3) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            boolean imcProvision2 = setImcProvision(parcel.readInt(), parcel.readInt(), parcel.readInt());
            parcel2.writeNoException();
            parcel2.writeInt(imcProvision2 ? 1 : 0);
            return true;
        }
    }

    int getDmSupported() throws RemoteException;

    boolean getImcProvision(int i, int i2) throws RemoteException;

    boolean setImcProvision(int i, int i2, int i3) throws RemoteException;
}
