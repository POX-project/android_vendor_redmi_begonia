package com.mediatek.ims.internal;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IVoDataService extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.ims.internal.IVoDataService";

    public static class Default implements IVoDataService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.ims.internal.IVoDataService
        public boolean getEnabled(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.ims.internal.IVoDataService
        public int getImsPdnStatus(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IVoDataService
        public void setEnabled(int i, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IVoDataService
        public void setImsPdnStatus(int i, int i2) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IVoDataService {
        static final int TRANSACTION_getEnabled = 2;
        static final int TRANSACTION_getImsPdnStatus = 4;
        static final int TRANSACTION_setEnabled = 1;
        static final int TRANSACTION_setImsPdnStatus = 3;

        private static class Proxy implements IVoDataService {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.ims.internal.IVoDataService
            public boolean getEnabled(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoDataService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IVoDataService
            public int getImsPdnStatus(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoDataService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return IVoDataService.DESCRIPTOR;
            }

            @Override // com.mediatek.ims.internal.IVoDataService
            public void setEnabled(int i, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoDataService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeBoolean(z);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IVoDataService
            public void setImsPdnStatus(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoDataService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IVoDataService.DESCRIPTOR);
        }

        public static IVoDataService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IVoDataService.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IVoDataService)) ? new Proxy(iBinder) : (IVoDataService) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IVoDataService.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IVoDataService.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            int i3 = parcel.readInt();
                            boolean z = parcel.readBoolean();
                            parcel.enforceNoDataAvail();
                            setEnabled(i3, z);
                            parcel2.writeNoException();
                            return true;
                        case 2:
                            int i4 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            boolean enabled = getEnabled(i4);
                            parcel2.writeNoException();
                            parcel2.writeBoolean(enabled);
                            return true;
                        case 3:
                            int i5 = parcel.readInt();
                            int i6 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            setImsPdnStatus(i5, i6);
                            parcel2.writeNoException();
                            return true;
                        case 4:
                            int i7 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int imsPdnStatus = getImsPdnStatus(i7);
                            parcel2.writeNoException();
                            parcel2.writeInt(imsPdnStatus);
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    boolean getEnabled(int i) throws RemoteException;

    int getImsPdnStatus(int i) throws RemoteException;

    void setEnabled(int i, boolean z) throws RemoteException;

    void setImsPdnStatus(int i, int i2) throws RemoteException;
}
