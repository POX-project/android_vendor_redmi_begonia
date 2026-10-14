package com.mediatek.common.ppl;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IPplManager extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.ppl.IPplManager";

    public static class Default implements IPplManager {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.ppl.IPplManager
        public void lock() throws RemoteException {
        }

        @Override // com.mediatek.common.ppl.IPplManager
        public int needLock() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.common.ppl.IPplManager
        public void resetPassword() throws RemoteException {
        }

        @Override // com.mediatek.common.ppl.IPplManager
        public boolean unlock(String str) throws RemoteException {
            return false;
        }
    }

    public static abstract class Stub extends Binder implements IPplManager {
        static final int TRANSACTION_lock = 3;
        static final int TRANSACTION_needLock = 2;
        static final int TRANSACTION_resetPassword = 1;
        static final int TRANSACTION_unlock = 4;

        private static class Proxy implements IPplManager {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return IPplManager.DESCRIPTOR;
            }

            @Override // com.mediatek.common.ppl.IPplManager
            public void lock() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IPplManager.DESCRIPTOR);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.ppl.IPplManager
            public int needLock() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IPplManager.DESCRIPTOR);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.ppl.IPplManager
            public void resetPassword() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IPplManager.DESCRIPTOR);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.ppl.IPplManager
            public boolean unlock(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IPplManager.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IPplManager.DESCRIPTOR);
        }

        public static IPplManager asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IPplManager.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IPplManager)) ? new Proxy(iBinder) : (IPplManager) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IPplManager.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IPplManager.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            resetPassword();
                            parcel2.writeNoException();
                            return true;
                        case 2:
                            int iNeedLock = needLock();
                            parcel2.writeNoException();
                            parcel2.writeInt(iNeedLock);
                            return true;
                        case 3:
                            lock();
                            parcel2.writeNoException();
                            return true;
                        case 4:
                            String string = parcel.readString();
                            parcel.enforceNoDataAvail();
                            boolean zUnlock = unlock(string);
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zUnlock);
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void lock() throws RemoteException;

    int needLock() throws RemoteException;

    void resetPassword() throws RemoteException;

    boolean unlock(String str) throws RemoteException;
}
