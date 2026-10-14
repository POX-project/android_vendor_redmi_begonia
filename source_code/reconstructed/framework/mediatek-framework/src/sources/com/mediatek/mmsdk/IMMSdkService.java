package com.mediatek.mmsdk;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IMMSdkService extends IInterface {

    public static class Default implements IMMSdkService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.mmsdk.IMMSdkService
        public int connectFeatureManager(BinderHolder binderHolder) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IMMSdkService
        public int existCallbackClient() throws RemoteException {
            return 0;
        }
    }

    public static abstract class Stub extends Binder implements IMMSdkService {
        private static final String DESCRIPTOR = "com.mediatek.mmsdk.IMMSdkService";
        static final int TRANSACTION_connectFeatureManager = 1;
        static final int TRANSACTION_existCallbackClient = 2;

        private static class Proxy implements IMMSdkService {
            public static IMMSdkService sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.mmsdk.IMMSdkService
            public int connectFeatureManager(BinderHolder binderHolder) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().connectFeatureManager(binderHolder);
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

            @Override // com.mediatek.mmsdk.IMMSdkService
            public int existCallbackClient() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().existCallbackClient();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IMMSdkService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMMSdkService)) ? new Proxy(iBinder) : (IMMSdkService) iInterfaceQueryLocalInterface;
        }

        public static IMMSdkService getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMMSdkService iMMSdkService) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMMSdkService == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMMSdkService;
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
                BinderHolder binderHolder = new BinderHolder();
                int iConnectFeatureManager = connectFeatureManager(binderHolder);
                parcel2.writeNoException();
                parcel2.writeInt(iConnectFeatureManager);
                parcel2.writeInt(1);
                binderHolder.writeToParcel(parcel2, 1);
                return true;
            }
            if (i != 2) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            int iExistCallbackClient = existCallbackClient();
            parcel2.writeNoException();
            parcel2.writeInt(iExistCallbackClient);
            return true;
        }
    }

    int connectFeatureManager(BinderHolder binderHolder) throws RemoteException;

    int existCallbackClient() throws RemoteException;
}
