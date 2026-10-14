package com.mediatek.gwsd;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IGwsdService extends IInterface {

    public static class Default implements IGwsdService {
        @Override // com.mediatek.gwsd.IGwsdService
        public void addListener(int i, IGwsdListener iGwsdListener) throws RemoteException {
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.gwsd.IGwsdService
        public boolean isDataAvailableForGwsdDualSim(boolean z) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.gwsd.IGwsdService
        public void removeListener(int i) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdService
        public void setAutoRejectModeEnabled(int i, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdService
        public void setCallValidTimer(int i, int i2) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdService
        public void setGwsdDualSimEnabled(boolean z) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdService
        public void setIgnoreSameNumberInterval(int i, int i2) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdService
        public void setUserModeEnabled(int i, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdService
        public void syncGwsdInfo(int i, boolean z, boolean z2) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IGwsdService {
        private static final String DESCRIPTOR = "com.mediatek.gwsd.IGwsdService";
        static final int TRANSACTION_addListener = 1;
        static final int TRANSACTION_isDataAvailableForGwsdDualSim = 9;
        static final int TRANSACTION_removeListener = 2;
        static final int TRANSACTION_setAutoRejectModeEnabled = 4;
        static final int TRANSACTION_setCallValidTimer = 6;
        static final int TRANSACTION_setGwsdDualSimEnabled = 8;
        static final int TRANSACTION_setIgnoreSameNumberInterval = 7;
        static final int TRANSACTION_setUserModeEnabled = 3;
        static final int TRANSACTION_syncGwsdInfo = 5;

        private static class Proxy implements IGwsdService {
            public static IGwsdService sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.gwsd.IGwsdService
            public void addListener(int i, IGwsdListener iGwsdListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeStrongBinder(iGwsdListener != null ? iGwsdListener.asBinder() : null);
                    if (this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().addListener(i, iGwsdListener);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.gwsd.IGwsdService
            public boolean isDataAvailableForGwsdDualSim(boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (!this.mRemote.transact(9, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isDataAvailableForGwsdDualSim(z);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdService
            public void removeListener(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().removeListener(i);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdService
            public void setAutoRejectModeEnabled(int i, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setAutoRejectModeEnabled(i, z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdService
            public void setCallValidTimer(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setCallValidTimer(i, i2);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdService
            public void setGwsdDualSimEnabled(boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(8, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setGwsdDualSimEnabled(z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdService
            public void setIgnoreSameNumberInterval(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setIgnoreSameNumberInterval(i, i2);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdService
            public void setUserModeEnabled(int i, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setUserModeEnabled(i, z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdService
            public void syncGwsdInfo(int i, boolean z, boolean z2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    int i2 = 1;
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (!z2) {
                        i2 = 0;
                    }
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().syncGwsdInfo(i, z, z2);
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

        public static IGwsdService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IGwsdService)) ? new Proxy(iBinder) : (IGwsdService) iInterfaceQueryLocalInterface;
        }

        public static IGwsdService getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IGwsdService iGwsdService) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iGwsdService == null) {
                return false;
            }
            Proxy.sDefaultImpl = iGwsdService;
            return true;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1598968902) {
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            switch (i) {
                case 1:
                    parcel.enforceInterface(DESCRIPTOR);
                    addListener(parcel.readInt(), IGwsdListener.Stub.asInterface(parcel.readStrongBinder()));
                    parcel2.writeNoException();
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    removeListener(parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    setUserModeEnabled(parcel.readInt(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    setAutoRejectModeEnabled(parcel.readInt(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    syncGwsdInfo(parcel.readInt(), parcel.readInt() != 0, parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    setCallValidTimer(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    setIgnoreSameNumberInterval(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    setGwsdDualSimEnabled(parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsDataAvailableForGwsdDualSim = isDataAvailableForGwsdDualSim(parcel.readInt() != 0);
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsDataAvailableForGwsdDualSim ? 1 : 0);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    void addListener(int i, IGwsdListener iGwsdListener) throws RemoteException;

    boolean isDataAvailableForGwsdDualSim(boolean z) throws RemoteException;

    void removeListener(int i) throws RemoteException;

    void setAutoRejectModeEnabled(int i, boolean z) throws RemoteException;

    void setCallValidTimer(int i, int i2) throws RemoteException;

    void setGwsdDualSimEnabled(boolean z) throws RemoteException;

    void setIgnoreSameNumberInterval(int i, int i2) throws RemoteException;

    void setUserModeEnabled(int i, boolean z) throws RemoteException;

    void syncGwsdInfo(int i, boolean z, boolean z2) throws RemoteException;
}
