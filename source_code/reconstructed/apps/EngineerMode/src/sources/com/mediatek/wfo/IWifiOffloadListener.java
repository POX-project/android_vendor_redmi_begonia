package com.mediatek.wfo;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes3.dex */
public interface IWifiOffloadListener extends IInterface {

    public static class Default implements IWifiOffloadListener {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.wfo.IWifiOffloadListener
        public void onAllowWifiOff() throws RemoteException {
        }

        @Override // com.mediatek.wfo.IWifiOffloadListener
        public void onHandover(int i, int i2, int i3) throws RemoteException {
        }

        @Override // com.mediatek.wfo.IWifiOffloadListener
        public void onRequestImsSwitch(int i, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.wfo.IWifiOffloadListener
        public void onRoveOut(int i, boolean z, int i2) throws RemoteException {
        }

        @Override // com.mediatek.wfo.IWifiOffloadListener
        public void onWfcStateChanged(int i, int i2) throws RemoteException {
        }

        @Override // com.mediatek.wfo.IWifiOffloadListener
        public void onWifiPdnOOSStateChanged(int i, int i2) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IWifiOffloadListener {
        private static final String DESCRIPTOR = "com.mediatek.wfo.IWifiOffloadListener";
        static final int TRANSACTION_onAllowWifiOff = 5;
        static final int TRANSACTION_onHandover = 1;
        static final int TRANSACTION_onRequestImsSwitch = 3;
        static final int TRANSACTION_onRoveOut = 2;
        static final int TRANSACTION_onWfcStateChanged = 6;
        static final int TRANSACTION_onWifiPdnOOSStateChanged = 4;

        private static class Proxy implements IWifiOffloadListener {
            public static IWifiOffloadListener sDefaultImpl;
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

            @Override // com.mediatek.wfo.IWifiOffloadListener
            public void onAllowWifiOff() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(5, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onAllowWifiOff();
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadListener
            public void onHandover(int i, int i2, int i3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    if (this.mRemote.transact(1, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onHandover(i, i2, i3);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadListener
            public void onRequestImsSwitch(int i, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(3, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onRequestImsSwitch(i, z);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadListener
            public void onRoveOut(int i, boolean z, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(z ? 1 : 0);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(2, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onRoveOut(i, z, i2);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadListener
            public void onWfcStateChanged(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(6, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onWfcStateChanged(i, i2);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.wfo.IWifiOffloadListener
            public void onWifiPdnOOSStateChanged(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(4, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onWifiPdnOOSStateChanged(i, i2);
                } finally {
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IWifiOffloadListener asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IWifiOffloadListener)) ? new Proxy(iBinder) : (IWifiOffloadListener) iInterfaceQueryLocalInterface;
        }

        public static IWifiOffloadListener getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IWifiOffloadListener iWifiOffloadListener) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iWifiOffloadListener == null) {
                return false;
            }
            Proxy.sDefaultImpl = iWifiOffloadListener;
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
                    onHandover(parcel.readInt(), parcel.readInt(), parcel.readInt());
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    onRoveOut(parcel.readInt(), parcel.readInt() != 0, parcel.readInt());
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    onRequestImsSwitch(parcel.readInt(), parcel.readInt() != 0);
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    onWifiPdnOOSStateChanged(parcel.readInt(), parcel.readInt());
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    onAllowWifiOff();
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    onWfcStateChanged(parcel.readInt(), parcel.readInt());
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    void onAllowWifiOff() throws RemoteException;

    void onHandover(int i, int i2, int i3) throws RemoteException;

    void onRequestImsSwitch(int i, boolean z) throws RemoteException;

    void onRoveOut(int i, boolean z, int i2) throws RemoteException;

    void onWfcStateChanged(int i, int i2) throws RemoteException;

    void onWifiPdnOOSStateChanged(int i, int i2) throws RemoteException;
}
