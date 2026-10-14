package com.mediatek.mmsdk;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IEffectUpdateListener extends IInterface {

    public static class Default implements IEffectUpdateListener {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.mmsdk.IEffectUpdateListener
        public void onEffectUpdated(IEffectUser iEffectUser, int i) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IEffectUpdateListener {
        private static final String DESCRIPTOR = "com.mediatek.mmsdk.IEffectUpdateListener";
        static final int TRANSACTION_onEffectUpdated = 1;

        private static class Proxy implements IEffectUpdateListener {
            public static IEffectUpdateListener sDefaultImpl;
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

            @Override // com.mediatek.mmsdk.IEffectUpdateListener
            public void onEffectUpdated(IEffectUser iEffectUser, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iEffectUser != null ? iEffectUser.asBinder() : null);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().onEffectUpdated(iEffectUser, i);
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

        public static IEffectUpdateListener asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IEffectUpdateListener)) ? new Proxy(iBinder) : (IEffectUpdateListener) iInterfaceQueryLocalInterface;
        }

        public static IEffectUpdateListener getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IEffectUpdateListener iEffectUpdateListener) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iEffectUpdateListener == null) {
                return false;
            }
            Proxy.sDefaultImpl = iEffectUpdateListener;
            return true;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i != 1) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            onEffectUpdated(IEffectUser.Stub.asInterface(parcel.readStrongBinder()), parcel.readInt());
            parcel2.writeNoException();
            return true;
        }
    }

    void onEffectUpdated(IEffectUser iEffectUser, int i) throws RemoteException;
}
