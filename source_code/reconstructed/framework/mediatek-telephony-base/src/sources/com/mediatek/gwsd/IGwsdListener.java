package com.mediatek.gwsd;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IGwsdListener extends IInterface {

    public static class Default implements IGwsdListener {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onAddListenered(int i, String str) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onAutoRejectModeChanged(int i, String str) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onCallValidTimerChanged(int i, String str) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onIgnoreSameNumberIntervalChanged(int i, String str) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onSyncGwsdInfoFinished(int i, String str) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onSystemStateChanged(int i) throws RemoteException {
        }

        @Override // com.mediatek.gwsd.IGwsdListener
        public void onUserSelectionModeChanged(int i, String str) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IGwsdListener {
        private static final String DESCRIPTOR = "com.mediatek.gwsd.IGwsdListener";
        static final int TRANSACTION_onAddListenered = 1;
        static final int TRANSACTION_onAutoRejectModeChanged = 3;
        static final int TRANSACTION_onCallValidTimerChanged = 6;
        static final int TRANSACTION_onIgnoreSameNumberIntervalChanged = 7;
        static final int TRANSACTION_onSyncGwsdInfoFinished = 4;
        static final int TRANSACTION_onSystemStateChanged = 5;
        static final int TRANSACTION_onUserSelectionModeChanged = 2;

        private static class Proxy implements IGwsdListener {
            public static IGwsdListener sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.gwsd.IGwsdListener
            public void onAddListenered(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().onAddListenered(i, str);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdListener
            public void onAutoRejectModeChanged(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().onAutoRejectModeChanged(i, str);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdListener
            public void onCallValidTimerChanged(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().onCallValidTimerChanged(i, str);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdListener
            public void onIgnoreSameNumberIntervalChanged(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().onIgnoreSameNumberIntervalChanged(i, str);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdListener
            public void onSyncGwsdInfoFinished(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().onSyncGwsdInfoFinished(i, str);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdListener
            public void onSystemStateChanged(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().onSystemStateChanged(i);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gwsd.IGwsdListener
            public void onUserSelectionModeChanged(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().onUserSelectionModeChanged(i, str);
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

        public static IGwsdListener asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IGwsdListener)) ? new Proxy(iBinder) : (IGwsdListener) iInterfaceQueryLocalInterface;
        }

        public static IGwsdListener getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IGwsdListener iGwsdListener) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iGwsdListener == null) {
                return false;
            }
            Proxy.sDefaultImpl = iGwsdListener;
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
                    onAddListenered(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    onUserSelectionModeChanged(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    onAutoRejectModeChanged(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    onSyncGwsdInfoFinished(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    onSystemStateChanged(parcel.readInt());
                    parcel2.writeNoException();
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    onCallValidTimerChanged(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    onIgnoreSameNumberIntervalChanged(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    void onAddListenered(int i, String str) throws RemoteException;

    void onAutoRejectModeChanged(int i, String str) throws RemoteException;

    void onCallValidTimerChanged(int i, String str) throws RemoteException;

    void onIgnoreSameNumberIntervalChanged(int i, String str) throws RemoteException;

    void onSyncGwsdInfoFinished(int i, String str) throws RemoteException;

    void onSystemStateChanged(int i) throws RemoteException;

    void onUserSelectionModeChanged(int i, String str) throws RemoteException;
}
