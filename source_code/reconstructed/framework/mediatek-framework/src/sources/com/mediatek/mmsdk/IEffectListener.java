package com.mediatek.mmsdk;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IEffectListener extends IInterface {

    public static class Default implements IEffectListener {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onAborted(IEffectHalClient iEffectHalClient, BaseParameters baseParameters) throws RemoteException {
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onCompleted(IEffectHalClient iEffectHalClient, BaseParameters baseParameters, long j) throws RemoteException {
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onFailed(IEffectHalClient iEffectHalClient, BaseParameters baseParameters) throws RemoteException {
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onInputFrameProcessed(IEffectHalClient iEffectHalClient, BaseParameters baseParameters, BaseParameters baseParameters2) throws RemoteException {
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onOutputFrameProcessed(IEffectHalClient iEffectHalClient, BaseParameters baseParameters, BaseParameters baseParameters2) throws RemoteException {
        }

        @Override // com.mediatek.mmsdk.IEffectListener
        public void onPrepared(IEffectHalClient iEffectHalClient, BaseParameters baseParameters) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IEffectListener {
        private static final String DESCRIPTOR = "com.mediatek.mmsdk.IEffectListener";
        static final int TRANSACTION_onAborted = 5;
        static final int TRANSACTION_onCompleted = 4;
        static final int TRANSACTION_onFailed = 6;
        static final int TRANSACTION_onInputFrameProcessed = 2;
        static final int TRANSACTION_onOutputFrameProcessed = 3;
        static final int TRANSACTION_onPrepared = 1;

        private static class Proxy implements IEffectListener {
            public static IEffectListener sDefaultImpl;
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

            @Override // com.mediatek.mmsdk.IEffectListener
            public void onAborted(IEffectHalClient iEffectHalClient, BaseParameters baseParameters) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iEffectHalClient != null ? iEffectHalClient.asBinder() : null);
                    if (baseParameters != null) {
                        parcelObtain.writeInt(1);
                        baseParameters.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(5, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onAborted(iEffectHalClient, baseParameters);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectListener
            public void onCompleted(IEffectHalClient iEffectHalClient, BaseParameters baseParameters, long j) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iEffectHalClient != null ? iEffectHalClient.asBinder() : null);
                    if (baseParameters != null) {
                        parcelObtain.writeInt(1);
                        baseParameters.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeLong(j);
                    if (this.mRemote.transact(4, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onCompleted(iEffectHalClient, baseParameters, j);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectListener
            public void onFailed(IEffectHalClient iEffectHalClient, BaseParameters baseParameters) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iEffectHalClient != null ? iEffectHalClient.asBinder() : null);
                    if (baseParameters != null) {
                        parcelObtain.writeInt(1);
                        baseParameters.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(6, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onFailed(iEffectHalClient, baseParameters);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectListener
            public void onInputFrameProcessed(IEffectHalClient iEffectHalClient, BaseParameters baseParameters, BaseParameters baseParameters2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iEffectHalClient != null ? iEffectHalClient.asBinder() : null);
                    if (baseParameters != null) {
                        parcelObtain.writeInt(1);
                        baseParameters.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (baseParameters2 != null) {
                        parcelObtain.writeInt(1);
                        baseParameters2.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(2, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onInputFrameProcessed(iEffectHalClient, baseParameters, baseParameters2);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectListener
            public void onOutputFrameProcessed(IEffectHalClient iEffectHalClient, BaseParameters baseParameters, BaseParameters baseParameters2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iEffectHalClient != null ? iEffectHalClient.asBinder() : null);
                    if (baseParameters != null) {
                        parcelObtain.writeInt(1);
                        baseParameters.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (baseParameters2 != null) {
                        parcelObtain.writeInt(1);
                        baseParameters2.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(3, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onOutputFrameProcessed(iEffectHalClient, baseParameters, baseParameters2);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectListener
            public void onPrepared(IEffectHalClient iEffectHalClient, BaseParameters baseParameters) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iEffectHalClient != null ? iEffectHalClient.asBinder() : null);
                    if (baseParameters != null) {
                        parcelObtain.writeInt(1);
                        baseParameters.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(1, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onPrepared(iEffectHalClient, baseParameters);
                } finally {
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IEffectListener asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IEffectListener)) ? new Proxy(iBinder) : (IEffectListener) iInterfaceQueryLocalInterface;
        }

        public static IEffectListener getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IEffectListener iEffectListener) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iEffectListener == null) {
                return false;
            }
            Proxy.sDefaultImpl = iEffectListener;
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
                    onPrepared(IEffectHalClient.Stub.asInterface(parcel.readStrongBinder()), parcel.readInt() != 0 ? BaseParameters.CREATOR.createFromParcel(parcel) : null);
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    onInputFrameProcessed(IEffectHalClient.Stub.asInterface(parcel.readStrongBinder()), parcel.readInt() != 0 ? BaseParameters.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? BaseParameters.CREATOR.createFromParcel(parcel) : null);
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    onOutputFrameProcessed(IEffectHalClient.Stub.asInterface(parcel.readStrongBinder()), parcel.readInt() != 0 ? BaseParameters.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? BaseParameters.CREATOR.createFromParcel(parcel) : null);
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    onCompleted(IEffectHalClient.Stub.asInterface(parcel.readStrongBinder()), parcel.readInt() != 0 ? BaseParameters.CREATOR.createFromParcel(parcel) : null, parcel.readLong());
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    onAborted(IEffectHalClient.Stub.asInterface(parcel.readStrongBinder()), parcel.readInt() != 0 ? BaseParameters.CREATOR.createFromParcel(parcel) : null);
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    onFailed(IEffectHalClient.Stub.asInterface(parcel.readStrongBinder()), parcel.readInt() != 0 ? BaseParameters.CREATOR.createFromParcel(parcel) : null);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    void onAborted(IEffectHalClient iEffectHalClient, BaseParameters baseParameters) throws RemoteException;

    void onCompleted(IEffectHalClient iEffectHalClient, BaseParameters baseParameters, long j) throws RemoteException;

    void onFailed(IEffectHalClient iEffectHalClient, BaseParameters baseParameters) throws RemoteException;

    void onInputFrameProcessed(IEffectHalClient iEffectHalClient, BaseParameters baseParameters, BaseParameters baseParameters2) throws RemoteException;

    void onOutputFrameProcessed(IEffectHalClient iEffectHalClient, BaseParameters baseParameters, BaseParameters baseParameters2) throws RemoteException;

    void onPrepared(IEffectHalClient iEffectHalClient, BaseParameters baseParameters) throws RemoteException;
}
