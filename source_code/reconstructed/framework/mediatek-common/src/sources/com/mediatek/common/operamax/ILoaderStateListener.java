package com.mediatek.common.operamax;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface ILoaderStateListener extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.operamax.ILoaderStateListener";

    public static class Default implements ILoaderStateListener {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.operamax.ILoaderStateListener
        public void onSavingState(int i) throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderStateListener
        public void onTunnelState(int i) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements ILoaderStateListener {
        static final int TRANSACTION_onSavingState = 2;
        static final int TRANSACTION_onTunnelState = 1;

        private static class Proxy implements ILoaderStateListener {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return ILoaderStateListener.DESCRIPTOR;
            }

            @Override // com.mediatek.common.operamax.ILoaderStateListener
            public void onSavingState(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderStateListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(2, parcelObtain, null, 1);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderStateListener
            public void onTunnelState(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderStateListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(1, parcelObtain, null, 1);
                } finally {
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, ILoaderStateListener.DESCRIPTOR);
        }

        public static ILoaderStateListener asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(ILoaderStateListener.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof ILoaderStateListener)) ? new Proxy(iBinder) : (ILoaderStateListener) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(ILoaderStateListener.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(ILoaderStateListener.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            int i3 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            onTunnelState(i3);
                            return true;
                        case 2:
                            int i4 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            onSavingState(i4);
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void onSavingState(int i) throws RemoteException;

    void onTunnelState(int i) throws RemoteException;
}
