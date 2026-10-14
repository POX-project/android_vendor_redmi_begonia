package com.mediatek.gnssdebugreport;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IDebugReportCallback extends IInterface {

    public static class Default implements IDebugReportCallback {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.gnssdebugreport.IDebugReportCallback
        public void onDebugReportAvailable(Bundle bundle) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IDebugReportCallback {
        private static final String DESCRIPTOR = "com.mediatek.gnssdebugreport.IDebugReportCallback";
        static final int TRANSACTION_onDebugReportAvailable = 1;

        private static class Proxy implements IDebugReportCallback {
            public static IDebugReportCallback sDefaultImpl;
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

            @Override // com.mediatek.gnssdebugreport.IDebugReportCallback
            public void onDebugReportAvailable(Bundle bundle) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (bundle != null) {
                        parcelObtain.writeInt(1);
                        bundle.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().onDebugReportAvailable(bundle);
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

        public static IDebugReportCallback asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IDebugReportCallback)) ? new Proxy(iBinder) : (IDebugReportCallback) iInterfaceQueryLocalInterface;
        }

        public static IDebugReportCallback getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IDebugReportCallback iDebugReportCallback) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iDebugReportCallback == null) {
                return false;
            }
            Proxy.sDefaultImpl = iDebugReportCallback;
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
            onDebugReportAvailable(parcel.readInt() != 0 ? (Bundle) Bundle.CREATOR.createFromParcel(parcel) : null);
            parcel2.writeNoException();
            return true;
        }
    }

    void onDebugReportAvailable(Bundle bundle) throws RemoteException;
}
