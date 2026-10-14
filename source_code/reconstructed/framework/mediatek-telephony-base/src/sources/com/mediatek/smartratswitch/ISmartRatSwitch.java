package com.mediatek.smartratswitch;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface ISmartRatSwitch extends IInterface {

    public static class Default implements ISmartRatSwitch {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.smartratswitch.ISmartRatSwitch
        public void configWokingMode(int i) throws RemoteException {
        }

        @Override // com.mediatek.smartratswitch.ISmartRatSwitch
        public void forceDisable5G(boolean z) throws RemoteException {
        }

        @Override // com.mediatek.smartratswitch.ISmartRatSwitch
        public void forceEnable5G(boolean z) throws RemoteException {
        }

        @Override // com.mediatek.smartratswitch.ISmartRatSwitch
        public int getLastOperation() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.smartratswitch.ISmartRatSwitch
        public void resetKeepRatDuration() throws RemoteException {
        }

        @Override // com.mediatek.smartratswitch.ISmartRatSwitch
        public void resetNextTput(String str) throws RemoteException {
        }

        @Override // com.mediatek.smartratswitch.ISmartRatSwitch
        public void setCustAppProperty(String str, int i) throws RemoteException {
        }

        @Override // com.mediatek.smartratswitch.ISmartRatSwitch
        public void setKeepRatDuration(int i) throws RemoteException {
        }

        @Override // com.mediatek.smartratswitch.ISmartRatSwitch
        public void setNextTput(String str, int i, int i2) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements ISmartRatSwitch {
        private static final String DESCRIPTOR = "com.mediatek.smartratswitch.ISmartRatSwitch";
        static final int TRANSACTION_configWokingMode = 5;
        static final int TRANSACTION_forceDisable5G = 4;
        static final int TRANSACTION_forceEnable5G = 3;
        static final int TRANSACTION_getLastOperation = 2;
        static final int TRANSACTION_resetKeepRatDuration = 7;
        static final int TRANSACTION_resetNextTput = 9;
        static final int TRANSACTION_setCustAppProperty = 1;
        static final int TRANSACTION_setKeepRatDuration = 6;
        static final int TRANSACTION_setNextTput = 8;

        private static class Proxy implements ISmartRatSwitch {
            public static ISmartRatSwitch sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.smartratswitch.ISmartRatSwitch
            public void configWokingMode(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().configWokingMode(i);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.smartratswitch.ISmartRatSwitch
            public void forceDisable5G(boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().forceDisable5G(z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.smartratswitch.ISmartRatSwitch
            public void forceEnable5G(boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().forceEnable5G(z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.smartratswitch.ISmartRatSwitch
            public int getLastOperation() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getLastOperation();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.smartratswitch.ISmartRatSwitch
            public void resetKeepRatDuration() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().resetKeepRatDuration();
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.smartratswitch.ISmartRatSwitch
            public void resetNextTput(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(9, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().resetNextTput(str);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.smartratswitch.ISmartRatSwitch
            public void setCustAppProperty(String str, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setCustAppProperty(str, i);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.smartratswitch.ISmartRatSwitch
            public void setKeepRatDuration(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setKeepRatDuration(i);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.smartratswitch.ISmartRatSwitch
            public void setNextTput(String str, int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(8, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setNextTput(str, i, i2);
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

        public static ISmartRatSwitch asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof ISmartRatSwitch)) ? new Proxy(iBinder) : (ISmartRatSwitch) iInterfaceQueryLocalInterface;
        }

        public static ISmartRatSwitch getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(ISmartRatSwitch iSmartRatSwitch) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iSmartRatSwitch == null) {
                return false;
            }
            Proxy.sDefaultImpl = iSmartRatSwitch;
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
                    setCustAppProperty(parcel.readString(), parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    int lastOperation = getLastOperation();
                    parcel2.writeNoException();
                    parcel2.writeInt(lastOperation);
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    forceEnable5G(parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    forceDisable5G(parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    configWokingMode(parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    setKeepRatDuration(parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    resetKeepRatDuration();
                    parcel2.writeNoException();
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    setNextTput(parcel.readString(), parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    resetNextTput(parcel.readString());
                    parcel2.writeNoException();
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    void configWokingMode(int i) throws RemoteException;

    void forceDisable5G(boolean z) throws RemoteException;

    void forceEnable5G(boolean z) throws RemoteException;

    int getLastOperation() throws RemoteException;

    void resetKeepRatDuration() throws RemoteException;

    void resetNextTput(String str) throws RemoteException;

    void setCustAppProperty(String str, int i) throws RemoteException;

    void setKeepRatDuration(int i) throws RemoteException;

    void setNextTput(String str, int i, int i2) throws RemoteException;
}
