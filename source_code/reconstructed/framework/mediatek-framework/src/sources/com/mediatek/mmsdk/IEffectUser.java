package com.mediatek.mmsdk;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IEffectUser extends IInterface {

    public static class Default implements IEffectUser {
        @Override // com.mediatek.mmsdk.IEffectUser
        public boolean apply(ImageInfo imageInfo, IMemory iMemory, ImageInfo imageInfo2, IMemory iMemory2) throws RemoteException {
            return false;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.mmsdk.IEffectUser
        public String getName() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.mmsdk.IEffectUser
        public boolean release() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.mmsdk.IEffectUser
        public boolean setParameter(String str, int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.mmsdk.IEffectUser
        public void setUpdateListener(IEffectUpdateListener iEffectUpdateListener) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IEffectUser {
        private static final String DESCRIPTOR = "com.mediatek.mmsdk.IEffectUser";
        static final int TRANSACTION_apply = 2;
        static final int TRANSACTION_getName = 1;
        static final int TRANSACTION_release = 5;
        static final int TRANSACTION_setParameter = 3;
        static final int TRANSACTION_setUpdateListener = 4;

        private static class Proxy implements IEffectUser {
            public static IEffectUser sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.mmsdk.IEffectUser
            public boolean apply(ImageInfo imageInfo, IMemory iMemory, ImageInfo imageInfo2, IMemory iMemory2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (imageInfo != null) {
                        parcelObtain.writeInt(1);
                        imageInfo.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeStrongBinder(iMemory != null ? iMemory.asBinder() : null);
                    if (imageInfo2 != null) {
                        parcelObtain.writeInt(1);
                        imageInfo2.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeStrongBinder(iMemory2 != null ? iMemory2.asBinder() : null);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().apply(imageInfo, iMemory, imageInfo2, iMemory2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
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

            @Override // com.mediatek.mmsdk.IEffectUser
            public String getName() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getName();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectUser
            public boolean release() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().release();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectUser
            public boolean setParameter(String str, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setParameter(str, i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectUser
            public void setUpdateListener(IEffectUpdateListener iEffectUpdateListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iEffectUpdateListener != null ? iEffectUpdateListener.asBinder() : null);
                    if (this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setUpdateListener(iEffectUpdateListener);
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

        public static IEffectUser asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IEffectUser)) ? new Proxy(iBinder) : (IEffectUser) iInterfaceQueryLocalInterface;
        }

        public static IEffectUser getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IEffectUser iEffectUser) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iEffectUser == null) {
                return false;
            }
            Proxy.sDefaultImpl = iEffectUser;
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
                String name = getName();
                parcel2.writeNoException();
                parcel2.writeString(name);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                boolean zApply = apply(parcel.readInt() != 0 ? ImageInfo.CREATOR.createFromParcel(parcel) : null, IMemory.Stub.asInterface(parcel.readStrongBinder()), parcel.readInt() != 0 ? ImageInfo.CREATOR.createFromParcel(parcel) : null, IMemory.Stub.asInterface(parcel.readStrongBinder()));
                parcel2.writeNoException();
                parcel2.writeInt(zApply ? 1 : 0);
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(DESCRIPTOR);
                boolean parameter = setParameter(parcel.readString(), parcel.readInt());
                parcel2.writeNoException();
                parcel2.writeInt(parameter ? 1 : 0);
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(DESCRIPTOR);
                setUpdateListener(IEffectUpdateListener.Stub.asInterface(parcel.readStrongBinder()));
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
            boolean zRelease = release();
            parcel2.writeNoException();
            parcel2.writeInt(zRelease ? 1 : 0);
            return true;
        }
    }

    boolean apply(ImageInfo imageInfo, IMemory iMemory, ImageInfo imageInfo2, IMemory iMemory2) throws RemoteException;

    String getName() throws RemoteException;

    boolean release() throws RemoteException;

    boolean setParameter(String str, int i) throws RemoteException;

    void setUpdateListener(IEffectUpdateListener iEffectUpdateListener) throws RemoteException;
}
