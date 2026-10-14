package com.mediatek.mmsdk;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IFeatureManager extends IInterface {

    public static class Default implements IFeatureManager {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.mmsdk.IFeatureManager
        public int getEffectFactory(BinderHolder binderHolder) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IFeatureManager
        public String getParameter(String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.mmsdk.IFeatureManager
        public int setParameter(String str, String str2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IFeatureManager
        public int setUp(EffectHalVersion effectHalVersion) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IFeatureManager
        public int tearDown(EffectHalVersion effectHalVersion) throws RemoteException {
            return 0;
        }
    }

    public static abstract class Stub extends Binder implements IFeatureManager {
        private static final String DESCRIPTOR = "com.mediatek.mmsdk.IFeatureManager";
        static final int TRANSACTION_getEffectFactory = 5;
        static final int TRANSACTION_getParameter = 2;
        static final int TRANSACTION_setParameter = 1;
        static final int TRANSACTION_setUp = 3;
        static final int TRANSACTION_tearDown = 4;

        private static class Proxy implements IFeatureManager {
            public static IFeatureManager sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.mmsdk.IFeatureManager
            public int getEffectFactory(BinderHolder binderHolder) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getEffectFactory(binderHolder);
                    }
                    parcelObtain2.readException();
                    int i = parcelObtain2.readInt();
                    if (parcelObtain2.readInt() != 0) {
                        binderHolder.readFromParcel(parcelObtain2);
                    }
                    return i;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.mmsdk.IFeatureManager
            public String getParameter(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getParameter(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IFeatureManager
            public int setParameter(String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setParameter(str, str2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IFeatureManager
            public int setUp(EffectHalVersion effectHalVersion) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (effectHalVersion != null) {
                        parcelObtain.writeInt(1);
                        effectHalVersion.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setUp(effectHalVersion);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IFeatureManager
            public int tearDown(EffectHalVersion effectHalVersion) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (effectHalVersion != null) {
                        parcelObtain.writeInt(1);
                        effectHalVersion.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().tearDown(effectHalVersion);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IFeatureManager asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IFeatureManager)) ? new Proxy(iBinder) : (IFeatureManager) iInterfaceQueryLocalInterface;
        }

        public static IFeatureManager getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IFeatureManager iFeatureManager) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iFeatureManager == null) {
                return false;
            }
            Proxy.sDefaultImpl = iFeatureManager;
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
                int parameter = setParameter(parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                parcel2.writeInt(parameter);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                String parameter2 = getParameter(parcel.readString());
                parcel2.writeNoException();
                parcel2.writeString(parameter2);
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(DESCRIPTOR);
                int up = setUp(parcel.readInt() != 0 ? EffectHalVersion.CREATOR.createFromParcel(parcel) : null);
                parcel2.writeNoException();
                parcel2.writeInt(up);
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(DESCRIPTOR);
                int iTearDown = tearDown(parcel.readInt() != 0 ? EffectHalVersion.CREATOR.createFromParcel(parcel) : null);
                parcel2.writeNoException();
                parcel2.writeInt(iTearDown);
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
            BinderHolder binderHolder = new BinderHolder();
            int effectFactory = getEffectFactory(binderHolder);
            parcel2.writeNoException();
            parcel2.writeInt(effectFactory);
            parcel2.writeInt(1);
            binderHolder.writeToParcel(parcel2, 1);
            return true;
        }
    }

    int getEffectFactory(BinderHolder binderHolder) throws RemoteException;

    String getParameter(String str) throws RemoteException;

    int setParameter(String str, String str2) throws RemoteException;

    int setUp(EffectHalVersion effectHalVersion) throws RemoteException;

    int tearDown(EffectHalVersion effectHalVersion) throws RemoteException;
}
