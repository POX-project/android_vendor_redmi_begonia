package com.mediatek.internal.telecom;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface ICallRecorderCallback extends IInterface {

    public static class Default implements ICallRecorderCallback {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.internal.telecom.ICallRecorderCallback
        public void onRecordEvent(int i, String str) throws RemoteException {
        }

        @Override // com.mediatek.internal.telecom.ICallRecorderCallback
        public void onRecordStateChanged(int i) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements ICallRecorderCallback {
        private static final String DESCRIPTOR = "com.mediatek.internal.telecom.ICallRecorderCallback";
        static final int TRANSACTION_onRecordEvent = 2;
        static final int TRANSACTION_onRecordStateChanged = 1;

        private static class Proxy implements ICallRecorderCallback {
            public static ICallRecorderCallback sDefaultImpl;
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

            @Override // com.mediatek.internal.telecom.ICallRecorderCallback
            public void onRecordEvent(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(2, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onRecordEvent(i, str);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telecom.ICallRecorderCallback
            public void onRecordStateChanged(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(1, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onRecordStateChanged(i);
                } finally {
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static ICallRecorderCallback asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof ICallRecorderCallback)) ? new Proxy(iBinder) : (ICallRecorderCallback) iInterfaceQueryLocalInterface;
        }

        public static ICallRecorderCallback getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(ICallRecorderCallback iCallRecorderCallback) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iCallRecorderCallback == null) {
                return false;
            }
            Proxy.sDefaultImpl = iCallRecorderCallback;
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
                onRecordStateChanged(parcel.readInt());
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                onRecordEvent(parcel.readInt(), parcel.readString());
                return true;
            }
            if (i != 1598968902) {
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel2.writeString(DESCRIPTOR);
            return true;
        }
    }

    void onRecordEvent(int i, String str) throws RemoteException;

    void onRecordStateChanged(int i) throws RemoteException;
}
