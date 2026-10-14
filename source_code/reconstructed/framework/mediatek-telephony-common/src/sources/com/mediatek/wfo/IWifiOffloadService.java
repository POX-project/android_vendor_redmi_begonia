package com.mediatek.wfo;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IWifiOffloadService extends IInterface {

    public static class Default implements IWifiOffloadService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public void factoryReset() throws RemoteException {
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public DisconnectCause getDisconnectCause(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public String[] getMccMncAllowList(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public int getRatType(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public boolean isWifiConnected() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public void registerForHandoverEvent(IWifiOffloadListener iWifiOffloadListener) throws RemoteException {
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public void setEpdgFqdn(int i, String str, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public boolean setMccMncAllowList(String[] strArr) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public boolean setWifiOff() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public void unregisterForHandoverEvent(IWifiOffloadListener iWifiOffloadListener) throws RemoteException {
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public void updateCallState(int i, int i2, int i3, int i4) throws RemoteException {
        }

        @Override // com.mediatek.wfo.IWifiOffloadService
        public void updateRadioState(int i, int i2) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IWifiOffloadService {
        private static final String DESCRIPTOR = "com.mediatek.wfo.IWifiOffloadService";
        static final int TRANSACTION_factoryReset = 11;
        static final int TRANSACTION_getDisconnectCause = 4;
        static final int TRANSACTION_getMccMncAllowList = 10;
        static final int TRANSACTION_getRatType = 3;
        static final int TRANSACTION_isWifiConnected = 7;
        static final int TRANSACTION_registerForHandoverEvent = 1;
        static final int TRANSACTION_setEpdgFqdn = 5;
        static final int TRANSACTION_setMccMncAllowList = 9;
        static final int TRANSACTION_setWifiOff = 12;
        static final int TRANSACTION_unregisterForHandoverEvent = 2;
        static final int TRANSACTION_updateCallState = 6;
        static final int TRANSACTION_updateRadioState = 8;

        private static class Proxy implements IWifiOffloadService {
            public static IWifiOffloadService sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public void factoryReset() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(11, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().factoryReset();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public DisconnectCause getDisconnectCause(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getDisconnectCause(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? DisconnectCause.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public String[] getMccMncAllowList(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(10, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getMccMncAllowList(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public int getRatType(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getRatType(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public boolean isWifiConnected() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isWifiConnected();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public void registerForHandoverEvent(IWifiOffloadListener iWifiOffloadListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iWifiOffloadListener != null ? iWifiOffloadListener.asBinder() : null);
                    if (this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().registerForHandoverEvent(iWifiOffloadListener);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public void setEpdgFqdn(int i, String str, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setEpdgFqdn(i, str, z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public boolean setMccMncAllowList(String[] strArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStringArray(strArr);
                    if (!this.mRemote.transact(9, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setMccMncAllowList(strArr);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public boolean setWifiOff() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(12, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setWifiOff();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public void unregisterForHandoverEvent(IWifiOffloadListener iWifiOffloadListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iWifiOffloadListener != null ? iWifiOffloadListener.asBinder() : null);
                    if (this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().unregisterForHandoverEvent(iWifiOffloadListener);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public void updateCallState(int i, int i2, int i3, int i4) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    parcelObtain.writeInt(i4);
                    if (this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().updateCallState(i, i2, i3, i4);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadService
            public void updateRadioState(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(8, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().updateRadioState(i, i2);
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

        public static IWifiOffloadService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IWifiOffloadService)) ? new Proxy(iBinder) : (IWifiOffloadService) iInterfaceQueryLocalInterface;
        }

        public static IWifiOffloadService getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IWifiOffloadService iWifiOffloadService) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iWifiOffloadService == null) {
                return false;
            }
            Proxy.sDefaultImpl = iWifiOffloadService;
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
                    registerForHandoverEvent(IWifiOffloadListener.Stub.asInterface(parcel.readStrongBinder()));
                    parcel2.writeNoException();
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    unregisterForHandoverEvent(IWifiOffloadListener.Stub.asInterface(parcel.readStrongBinder()));
                    parcel2.writeNoException();
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    int ratType = getRatType(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(ratType);
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    DisconnectCause disconnectCause = getDisconnectCause(parcel.readInt());
                    parcel2.writeNoException();
                    if (disconnectCause != null) {
                        parcel2.writeInt(1);
                        disconnectCause.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    setEpdgFqdn(parcel.readInt(), parcel.readString(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    updateCallState(parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsWifiConnected = isWifiConnected();
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsWifiConnected ? 1 : 0);
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    updateRadioState(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean mccMncAllowList = setMccMncAllowList(parcel.createStringArray());
                    parcel2.writeNoException();
                    parcel2.writeInt(mccMncAllowList ? 1 : 0);
                    return true;
                case 10:
                    parcel.enforceInterface(DESCRIPTOR);
                    String[] mccMncAllowList2 = getMccMncAllowList(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeStringArray(mccMncAllowList2);
                    return true;
                case 11:
                    parcel.enforceInterface(DESCRIPTOR);
                    factoryReset();
                    parcel2.writeNoException();
                    return true;
                case 12:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean wifiOff = setWifiOff();
                    parcel2.writeNoException();
                    parcel2.writeInt(wifiOff ? 1 : 0);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    void factoryReset() throws RemoteException;

    DisconnectCause getDisconnectCause(int i) throws RemoteException;

    String[] getMccMncAllowList(int i) throws RemoteException;

    int getRatType(int i) throws RemoteException;

    boolean isWifiConnected() throws RemoteException;

    void registerForHandoverEvent(IWifiOffloadListener iWifiOffloadListener) throws RemoteException;

    void setEpdgFqdn(int i, String str, boolean z) throws RemoteException;

    boolean setMccMncAllowList(String[] strArr) throws RemoteException;

    boolean setWifiOff() throws RemoteException;

    void unregisterForHandoverEvent(IWifiOffloadListener iWifiOffloadListener) throws RemoteException;

    void updateCallState(int i, int i2, int i3, int i4) throws RemoteException;

    void updateRadioState(int i, int i2) throws RemoteException;
}
