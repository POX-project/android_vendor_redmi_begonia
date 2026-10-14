package com.mediatek.datashaping;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IDataShapingManager extends IInterface {

    public static class Default implements IDataShapingManager {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.datashaping.IDataShapingManager
        public void disableDataShaping() throws RemoteException {
        }

        @Override // com.mediatek.datashaping.IDataShapingManager
        public void enableDataShaping() throws RemoteException {
        }

        @Override // com.mediatek.datashaping.IDataShapingManager
        public boolean isDataShapingWhitelistApp(String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.datashaping.IDataShapingManager
        public boolean openLteDataUpLinkGate(boolean z) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.datashaping.IDataShapingManager
        public void setDeviceIdleMode(boolean z) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IDataShapingManager {
        private static final String DESCRIPTOR = "com.mediatek.datashaping.IDataShapingManager";
        static final int TRANSACTION_disableDataShaping = 2;
        static final int TRANSACTION_enableDataShaping = 1;
        static final int TRANSACTION_isDataShapingWhitelistApp = 5;
        static final int TRANSACTION_openLteDataUpLinkGate = 3;
        static final int TRANSACTION_setDeviceIdleMode = 4;

        private static class Proxy implements IDataShapingManager {
            public static IDataShapingManager sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.datashaping.IDataShapingManager
            public void disableDataShaping() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().disableDataShaping();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.datashaping.IDataShapingManager
            public void enableDataShaping() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().enableDataShaping();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.datashaping.IDataShapingManager
            public boolean isDataShapingWhitelistApp(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isDataShapingWhitelistApp(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.datashaping.IDataShapingManager
            public boolean openLteDataUpLinkGate(boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().openLteDataUpLinkGate(z);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.datashaping.IDataShapingManager
            public void setDeviceIdleMode(boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setDeviceIdleMode(z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IDataShapingManager asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IDataShapingManager)) ? new Proxy(iBinder) : (IDataShapingManager) iInterfaceQueryLocalInterface;
        }

        public static IDataShapingManager getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IDataShapingManager iDataShapingManager) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iDataShapingManager == null) {
                return false;
            }
            Proxy.sDefaultImpl = iDataShapingManager;
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
                enableDataShaping();
                parcel2.writeNoException();
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                disableDataShaping();
                parcel2.writeNoException();
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(DESCRIPTOR);
                boolean zOpenLteDataUpLinkGate = openLteDataUpLinkGate(parcel.readInt() != 0);
                parcel2.writeNoException();
                parcel2.writeInt(zOpenLteDataUpLinkGate ? 1 : 0);
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(DESCRIPTOR);
                setDeviceIdleMode(parcel.readInt() != 0);
                parcel2.writeNoException();
                return true;
            }
            if (i != 5) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            boolean zIsDataShapingWhitelistApp = isDataShapingWhitelistApp(parcel.readString());
            parcel2.writeNoException();
            parcel2.writeInt(zIsDataShapingWhitelistApp ? 1 : 0);
            return true;
        }
    }

    void disableDataShaping() throws RemoteException;

    void enableDataShaping() throws RemoteException;

    boolean isDataShapingWhitelistApp(String str) throws RemoteException;

    boolean openLteDataUpLinkGate(boolean z) throws RemoteException;

    void setDeviceIdleMode(boolean z) throws RemoteException;
}
