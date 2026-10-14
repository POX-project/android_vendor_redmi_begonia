package com.mediatek.gnssdebugreport;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IGnssDebugReportService extends IInterface {

    public static class Default implements IGnssDebugReportService {
        @Override // com.mediatek.gnssdebugreport.IGnssDebugReportService
        public void addListener(IDebugReportCallback iDebugReportCallback) throws RemoteException {
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.gnssdebugreport.IGnssDebugReportService
        public void removeListener(IDebugReportCallback iDebugReportCallback) throws RemoteException {
        }

        @Override // com.mediatek.gnssdebugreport.IGnssDebugReportService
        public boolean startDebug(IDebugReportCallback iDebugReportCallback) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.gnssdebugreport.IGnssDebugReportService
        public boolean stopDebug(IDebugReportCallback iDebugReportCallback) throws RemoteException {
            return false;
        }
    }

    public static abstract class Stub extends Binder implements IGnssDebugReportService {
        private static final String DESCRIPTOR = "com.mediatek.gnssdebugreport.IGnssDebugReportService";
        static final int TRANSACTION_addListener = 3;
        static final int TRANSACTION_removeListener = 4;
        static final int TRANSACTION_startDebug = 1;
        static final int TRANSACTION_stopDebug = 2;

        private static class Proxy implements IGnssDebugReportService {
            public static IGnssDebugReportService sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.gnssdebugreport.IGnssDebugReportService
            public void addListener(IDebugReportCallback iDebugReportCallback) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iDebugReportCallback != null ? iDebugReportCallback.asBinder() : null);
                    if (this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().addListener(iDebugReportCallback);
                    }
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

            @Override // com.mediatek.gnssdebugreport.IGnssDebugReportService
            public void removeListener(IDebugReportCallback iDebugReportCallback) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iDebugReportCallback != null ? iDebugReportCallback.asBinder() : null);
                    if (this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().removeListener(iDebugReportCallback);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gnssdebugreport.IGnssDebugReportService
            public boolean startDebug(IDebugReportCallback iDebugReportCallback) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iDebugReportCallback != null ? iDebugReportCallback.asBinder() : null);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().startDebug(iDebugReportCallback);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gnssdebugreport.IGnssDebugReportService
            public boolean stopDebug(IDebugReportCallback iDebugReportCallback) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iDebugReportCallback != null ? iDebugReportCallback.asBinder() : null);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().stopDebug(iDebugReportCallback);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IGnssDebugReportService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IGnssDebugReportService)) ? new Proxy(iBinder) : (IGnssDebugReportService) iInterfaceQueryLocalInterface;
        }

        public static IGnssDebugReportService getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IGnssDebugReportService iGnssDebugReportService) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iGnssDebugReportService == null) {
                return false;
            }
            Proxy.sDefaultImpl = iGnssDebugReportService;
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
                boolean zStartDebug = startDebug(IDebugReportCallback.Stub.asInterface(parcel.readStrongBinder()));
                parcel2.writeNoException();
                parcel2.writeInt(zStartDebug ? 1 : 0);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                boolean zStopDebug = stopDebug(IDebugReportCallback.Stub.asInterface(parcel.readStrongBinder()));
                parcel2.writeNoException();
                parcel2.writeInt(zStopDebug ? 1 : 0);
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(DESCRIPTOR);
                addListener(IDebugReportCallback.Stub.asInterface(parcel.readStrongBinder()));
                parcel2.writeNoException();
                return true;
            }
            if (i != 4) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            removeListener(IDebugReportCallback.Stub.asInterface(parcel.readStrongBinder()));
            parcel2.writeNoException();
            return true;
        }
    }

    void addListener(IDebugReportCallback iDebugReportCallback) throws RemoteException;

    void removeListener(IDebugReportCallback iDebugReportCallback) throws RemoteException;

    boolean startDebug(IDebugReportCallback iDebugReportCallback) throws RemoteException;

    boolean stopDebug(IDebugReportCallback iDebugReportCallback) throws RemoteException;
}
