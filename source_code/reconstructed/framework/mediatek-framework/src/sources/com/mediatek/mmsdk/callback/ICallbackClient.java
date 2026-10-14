package com.mediatek.mmsdk.callback;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.view.Surface;
import com.mediatek.mmsdk.BaseParameters;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface ICallbackClient extends IInterface {

    public static class Default implements ICallbackClient {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.mmsdk.callback.ICallbackClient
        public int setOutputSurfaces(List<Surface> list, List<BaseParameters> list2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.callback.ICallbackClient
        public long start() throws RemoteException {
            return 0L;
        }

        @Override // com.mediatek.mmsdk.callback.ICallbackClient
        public long stop() throws RemoteException {
            return 0L;
        }
    }

    public static abstract class Stub extends Binder implements ICallbackClient {
        private static final String DESCRIPTOR = "com.mediatek.mmsdk.callback.ICallbackClient";
        static final int TRANSACTION_setOutputSurfaces = 3;
        static final int TRANSACTION_start = 1;
        static final int TRANSACTION_stop = 2;

        private static class Proxy implements ICallbackClient {
            public static ICallbackClient sDefaultImpl;
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

            @Override // com.mediatek.mmsdk.callback.ICallbackClient
            public int setOutputSurfaces(List<Surface> list, List<BaseParameters> list2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeTypedList(list);
                    parcelObtain.writeTypedList(list2);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setOutputSurfaces(list, list2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.callback.ICallbackClient
            public long start() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().start();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readLong();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.callback.ICallbackClient
            public long stop() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().stop();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readLong();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static ICallbackClient asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof ICallbackClient)) ? new Proxy(iBinder) : (ICallbackClient) iInterfaceQueryLocalInterface;
        }

        public static ICallbackClient getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(ICallbackClient iCallbackClient) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iCallbackClient == null) {
                return false;
            }
            Proxy.sDefaultImpl = iCallbackClient;
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
                long jStart = start();
                parcel2.writeNoException();
                parcel2.writeLong(jStart);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                long jStop = stop();
                parcel2.writeNoException();
                parcel2.writeLong(jStop);
                return true;
            }
            if (i != 3) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            int outputSurfaces = setOutputSurfaces(parcel.createTypedArrayList(Surface.CREATOR), parcel.createTypedArrayList(BaseParameters.CREATOR));
            parcel2.writeNoException();
            parcel2.writeInt(outputSurfaces);
            return true;
        }
    }

    int setOutputSurfaces(List<Surface> list, List<BaseParameters> list2) throws RemoteException;

    long start() throws RemoteException;

    long stop() throws RemoteException;
}
