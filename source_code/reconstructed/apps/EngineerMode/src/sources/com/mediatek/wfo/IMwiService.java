package com.mediatek.wfo;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes3.dex */
public interface IMwiService extends IInterface {

    public static class Default implements IMwiService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.wfo.IMwiService
        public IWifiOffloadService getWfcHandlerInterface() throws RemoteException {
            return null;
        }
    }

    public static abstract class Stub extends Binder implements IMwiService {
        private static final String DESCRIPTOR = "com.mediatek.wfo.IMwiService";
        static final int TRANSACTION_getWfcHandlerInterface = 1;

        private static class Proxy implements IMwiService {
            public static IMwiService sDefaultImpl;
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

            @Override // com.mediatek.wfo.IMwiService
            public IWifiOffloadService getWfcHandlerInterface() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getWfcHandlerInterface();
                    }
                    parcelObtain2.readException();
                    return IWifiOffloadService.Stub.asInterface(parcelObtain2.readStrongBinder());
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IMwiService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMwiService)) ? new Proxy(iBinder) : (IMwiService) iInterfaceQueryLocalInterface;
        }

        public static IMwiService getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMwiService iMwiService) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMwiService == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMwiService;
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
            IWifiOffloadService wfcHandlerInterface = getWfcHandlerInterface();
            parcel2.writeNoException();
            parcel2.writeStrongBinder(wfcHandlerInterface != null ? wfcHandlerInterface.asBinder() : null);
            return true;
        }
    }

    IWifiOffloadService getWfcHandlerInterface() throws RemoteException;
}
