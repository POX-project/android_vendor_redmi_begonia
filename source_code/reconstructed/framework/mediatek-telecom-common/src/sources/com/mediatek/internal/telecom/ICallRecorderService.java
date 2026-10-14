package com.mediatek.internal.telecom;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface ICallRecorderService extends IInterface {

    public static class Default implements ICallRecorderService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.internal.telecom.ICallRecorderService
        public void setCallback(ICallRecorderCallback iCallRecorderCallback) throws RemoteException {
        }

        @Override // com.mediatek.internal.telecom.ICallRecorderService
        public void startVoiceRecord() throws RemoteException {
        }

        @Override // com.mediatek.internal.telecom.ICallRecorderService
        public void stopVoiceRecord() throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements ICallRecorderService {
        private static final String DESCRIPTOR = "com.mediatek.internal.telecom.ICallRecorderService";
        static final int TRANSACTION_setCallback = 3;
        static final int TRANSACTION_startVoiceRecord = 1;
        static final int TRANSACTION_stopVoiceRecord = 2;

        private static class Proxy implements ICallRecorderService {
            public static ICallRecorderService sDefaultImpl;
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

            @Override // com.mediatek.internal.telecom.ICallRecorderService
            public void setCallback(ICallRecorderCallback iCallRecorderCallback) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iCallRecorderCallback != null ? iCallRecorderCallback.asBinder() : null);
                    if (this.mRemote.transact(Stub.TRANSACTION_setCallback, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().setCallback(iCallRecorderCallback);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telecom.ICallRecorderService
            public void startVoiceRecord() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(1, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().startVoiceRecord();
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telecom.ICallRecorderService
            public void stopVoiceRecord() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(2, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().stopVoiceRecord();
                } finally {
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static ICallRecorderService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof ICallRecorderService)) ? new Proxy(iBinder) : (ICallRecorderService) iInterfaceQueryLocalInterface;
        }

        public static ICallRecorderService getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(ICallRecorderService iCallRecorderService) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iCallRecorderService == null) {
                return false;
            }
            Proxy.sDefaultImpl = iCallRecorderService;
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
                startVoiceRecord();
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                stopVoiceRecord();
                return true;
            }
            if (i == TRANSACTION_setCallback) {
                parcel.enforceInterface(DESCRIPTOR);
                setCallback(ICallRecorderCallback.Stub.asInterface(parcel.readStrongBinder()));
                return true;
            }
            if (i != 1598968902) {
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel2.writeString(DESCRIPTOR);
            return true;
        }
    }

    void setCallback(ICallRecorderCallback iCallRecorderCallback) throws RemoteException;

    void startVoiceRecord() throws RemoteException;

    void stopVoiceRecord() throws RemoteException;
}
