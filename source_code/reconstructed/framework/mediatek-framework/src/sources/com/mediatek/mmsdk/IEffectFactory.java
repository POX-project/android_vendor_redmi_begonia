package com.mediatek.mmsdk;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface IEffectFactory extends IInterface {

    public static class Default implements IEffectFactory {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.mmsdk.IEffectFactory
        public int createCallbackClient(EffectHalVersion effectHalVersion, BinderHolder binderHolder) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectFactory
        public int createEffectHal(EffectHalVersion effectHalVersion, BinderHolder binderHolder) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectFactory
        public int createEffectHalClient(EffectHalVersion effectHalVersion, BinderHolder binderHolder) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectFactory
        public int getAllSupportedEffectHal(List<String> list) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectFactory
        public int getSupportedVersion(String str, List<EffectHalVersion> list) throws RemoteException {
            return 0;
        }
    }

    public static abstract class Stub extends Binder implements IEffectFactory {
        private static final String DESCRIPTOR = "com.mediatek.mmsdk.IEffectFactory";
        static final int TRANSACTION_createCallbackClient = 1;
        static final int TRANSACTION_createEffectHal = 2;
        static final int TRANSACTION_createEffectHalClient = 3;
        static final int TRANSACTION_getAllSupportedEffectHal = 5;
        static final int TRANSACTION_getSupportedVersion = 4;

        private static class Proxy implements IEffectFactory {
            public static IEffectFactory sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.mmsdk.IEffectFactory
            public int createCallbackClient(EffectHalVersion effectHalVersion, BinderHolder binderHolder) throws RemoteException {
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
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().createCallbackClient(effectHalVersion, binderHolder);
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

            @Override // com.mediatek.mmsdk.IEffectFactory
            public int createEffectHal(EffectHalVersion effectHalVersion, BinderHolder binderHolder) throws RemoteException {
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
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().createEffectHal(effectHalVersion, binderHolder);
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

            @Override // com.mediatek.mmsdk.IEffectFactory
            public int createEffectHalClient(EffectHalVersion effectHalVersion, BinderHolder binderHolder) throws RemoteException {
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
                        return Stub.getDefaultImpl().createEffectHalClient(effectHalVersion, binderHolder);
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

            @Override // com.mediatek.mmsdk.IEffectFactory
            public int getAllSupportedEffectHal(List<String> list) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAllSupportedEffectHal(list);
                    }
                    parcelObtain2.readException();
                    int i = parcelObtain2.readInt();
                    parcelObtain2.readStringList(list);
                    return i;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.mmsdk.IEffectFactory
            public int getSupportedVersion(String str, List<EffectHalVersion> list) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSupportedVersion(str, list);
                    }
                    parcelObtain2.readException();
                    int i = parcelObtain2.readInt();
                    parcelObtain2.readTypedList(list, EffectHalVersion.CREATOR);
                    return i;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IEffectFactory asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IEffectFactory)) ? new Proxy(iBinder) : (IEffectFactory) iInterfaceQueryLocalInterface;
        }

        public static IEffectFactory getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IEffectFactory iEffectFactory) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iEffectFactory == null) {
                return false;
            }
            Proxy.sDefaultImpl = iEffectFactory;
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
                EffectHalVersion effectHalVersionCreateFromParcel = parcel.readInt() != 0 ? EffectHalVersion.CREATOR.createFromParcel(parcel) : null;
                BinderHolder binderHolder = new BinderHolder();
                int iCreateCallbackClient = createCallbackClient(effectHalVersionCreateFromParcel, binderHolder);
                parcel2.writeNoException();
                parcel2.writeInt(iCreateCallbackClient);
                parcel2.writeInt(1);
                binderHolder.writeToParcel(parcel2, 1);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                EffectHalVersion effectHalVersionCreateFromParcel2 = parcel.readInt() != 0 ? EffectHalVersion.CREATOR.createFromParcel(parcel) : null;
                BinderHolder binderHolder2 = new BinderHolder();
                int iCreateEffectHal = createEffectHal(effectHalVersionCreateFromParcel2, binderHolder2);
                parcel2.writeNoException();
                parcel2.writeInt(iCreateEffectHal);
                parcel2.writeInt(1);
                binderHolder2.writeToParcel(parcel2, 1);
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(DESCRIPTOR);
                EffectHalVersion effectHalVersionCreateFromParcel3 = parcel.readInt() != 0 ? EffectHalVersion.CREATOR.createFromParcel(parcel) : null;
                BinderHolder binderHolder3 = new BinderHolder();
                int iCreateEffectHalClient = createEffectHalClient(effectHalVersionCreateFromParcel3, binderHolder3);
                parcel2.writeNoException();
                parcel2.writeInt(iCreateEffectHalClient);
                parcel2.writeInt(1);
                binderHolder3.writeToParcel(parcel2, 1);
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(DESCRIPTOR);
                String string = parcel.readString();
                ArrayList arrayList = new ArrayList();
                int supportedVersion = getSupportedVersion(string, arrayList);
                parcel2.writeNoException();
                parcel2.writeInt(supportedVersion);
                parcel2.writeTypedList(arrayList);
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
            ArrayList arrayList2 = new ArrayList();
            int allSupportedEffectHal = getAllSupportedEffectHal(arrayList2);
            parcel2.writeNoException();
            parcel2.writeInt(allSupportedEffectHal);
            parcel2.writeStringList(arrayList2);
            return true;
        }
    }

    int createCallbackClient(EffectHalVersion effectHalVersion, BinderHolder binderHolder) throws RemoteException;

    int createEffectHal(EffectHalVersion effectHalVersion, BinderHolder binderHolder) throws RemoteException;

    int createEffectHalClient(EffectHalVersion effectHalVersion, BinderHolder binderHolder) throws RemoteException;

    int getAllSupportedEffectHal(List<String> list) throws RemoteException;

    int getSupportedVersion(String str, List<EffectHalVersion> list) throws RemoteException;
}
