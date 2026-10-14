package com.mediatek.advcam;

import android.hardware.camera2.CaptureRequest;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IAdvCamService extends IInterface {

    public static class Default implements IAdvCamService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.advcam.IAdvCamService
        public int setConfigureParam(int i, CaptureRequest captureRequest) throws RemoteException {
            return 0;
        }
    }

    public static abstract class Stub extends Binder implements IAdvCamService {
        private static final String DESCRIPTOR = "com.mediatek.advcam.IAdvCamService";
        static final int TRANSACTION_setConfigureParam = 1;

        private static class Proxy implements IAdvCamService {
            public static IAdvCamService sDefaultImpl;
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

            @Override // com.mediatek.advcam.IAdvCamService
            public int setConfigureParam(int i, CaptureRequest captureRequest) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (captureRequest != null) {
                        parcelObtain.writeInt(1);
                        captureRequest.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setConfigureParam(i, captureRequest);
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

        public static IAdvCamService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IAdvCamService)) ? new Proxy(iBinder) : (IAdvCamService) iInterfaceQueryLocalInterface;
        }

        public static IAdvCamService getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IAdvCamService iAdvCamService) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iAdvCamService == null) {
                return false;
            }
            Proxy.sDefaultImpl = iAdvCamService;
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
            int configureParam = setConfigureParam(parcel.readInt(), parcel.readInt() != 0 ? (CaptureRequest) CaptureRequest.CREATOR.createFromParcel(parcel) : null);
            parcel2.writeNoException();
            parcel2.writeInt(configureParam);
            return true;
        }
    }

    int setConfigureParam(int i, CaptureRequest captureRequest) throws RemoteException;
}
