package com.mediatek.common.omadm;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.ParcelFileDescriptor;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IOmadmManager extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.omadm.IOmadmManager";

    public static class Default implements IOmadmManager {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.omadm.IOmadmManager
        public ParcelFileDescriptor inputStream(String str) throws RemoteException {
            return null;
        }
    }

    public static abstract class Stub extends Binder implements IOmadmManager {
        static final int TRANSACTION_inputStream = 1;

        private static class Proxy implements IOmadmManager {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return IOmadmManager.DESCRIPTOR;
            }

            @Override // com.mediatek.common.omadm.IOmadmManager
            public ParcelFileDescriptor inputStream(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IOmadmManager.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return (ParcelFileDescriptor) parcelObtain2.readTypedObject(ParcelFileDescriptor.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IOmadmManager.DESCRIPTOR);
        }

        public static IOmadmManager asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IOmadmManager.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IOmadmManager)) ? new Proxy(iBinder) : (IOmadmManager) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IOmadmManager.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IOmadmManager.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            String string = parcel.readString();
                            parcel.enforceNoDataAvail();
                            ParcelFileDescriptor parcelFileDescriptorInputStream = inputStream(string);
                            parcel2.writeNoException();
                            parcel2.writeTypedObject(parcelFileDescriptorInputStream, 1);
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    ParcelFileDescriptor inputStream(String str) throws RemoteException;
}
