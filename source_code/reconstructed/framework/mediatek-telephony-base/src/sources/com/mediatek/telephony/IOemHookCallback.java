package com.mediatek.telephony;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IOemHookCallback extends IInterface {

    public static class Default implements IOemHookCallback {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.telephony.IOemHookCallback
        public void onAtCmdResp(int i, long j, String str) throws RemoteException {
        }

        @Override // com.mediatek.telephony.IOemHookCallback
        public void onAtUrcInd(int i, String str) throws RemoteException {
        }

        @Override // com.mediatek.telephony.IOemHookCallback
        public void onError(String str) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IOemHookCallback {
        private static final String DESCRIPTOR = "com.mediatek.telephony.IOemHookCallback";
        static final int TRANSACTION_onAtCmdResp = 1;
        static final int TRANSACTION_onAtUrcInd = 2;
        static final int TRANSACTION_onError = 3;

        private static class Proxy implements IOemHookCallback {
            public static IOemHookCallback sDefaultImpl;
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

            @Override // com.mediatek.telephony.IOemHookCallback
            public void onAtCmdResp(int i, long j, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeLong(j);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(1, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onAtCmdResp(i, j, str);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.telephony.IOemHookCallback
            public void onAtUrcInd(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(2, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onAtUrcInd(i, str);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.telephony.IOemHookCallback
            public void onError(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(3, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().onError(str);
                } finally {
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IOemHookCallback asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IOemHookCallback)) ? new Proxy(iBinder) : (IOemHookCallback) iInterfaceQueryLocalInterface;
        }

        public static IOemHookCallback getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IOemHookCallback iOemHookCallback) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iOemHookCallback == null) {
                return false;
            }
            Proxy.sDefaultImpl = iOemHookCallback;
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
                onAtCmdResp(parcel.readInt(), parcel.readLong(), parcel.readString());
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                onAtUrcInd(parcel.readInt(), parcel.readString());
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(DESCRIPTOR);
                onError(parcel.readString());
                return true;
            }
            if (i != 1598968902) {
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel2.writeString(DESCRIPTOR);
            return true;
        }
    }

    void onAtCmdResp(int i, long j, String str) throws RemoteException;

    void onAtUrcInd(int i, String str) throws RemoteException;

    void onError(String str) throws RemoteException;
}
