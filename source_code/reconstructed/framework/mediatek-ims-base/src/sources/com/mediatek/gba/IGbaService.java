package com.mediatek.gba;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IGbaService extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.gba.IGbaService";

    public static class Default implements IGbaService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.gba.IGbaService
        public NafSessionKey getCachedKey(String str, byte[] bArr, int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.gba.IGbaService
        public int getGbaSupported() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.gba.IGbaService
        public int getGbaSupportedForSubscriber(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.gba.IGbaService
        public boolean isGbaKeyExpired(String str, byte[] bArr) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.gba.IGbaService
        public boolean isGbaKeyExpiredForSubscriber(String str, byte[] bArr, int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.gba.IGbaService
        public NafSessionKey runGbaAuthentication(String str, byte[] bArr, boolean z) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.gba.IGbaService
        public NafSessionKey runGbaAuthenticationForSubscriber(String str, byte[] bArr, boolean z, int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.gba.IGbaService
        public void updateCachedKey(String str, byte[] bArr, int i, NafSessionKey nafSessionKey) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IGbaService {
        static final int TRANSACTION_getCachedKey = 7;
        static final int TRANSACTION_getGbaSupported = 1;
        static final int TRANSACTION_getGbaSupportedForSubscriber = 2;
        static final int TRANSACTION_isGbaKeyExpired = 3;
        static final int TRANSACTION_isGbaKeyExpiredForSubscriber = 4;
        static final int TRANSACTION_runGbaAuthentication = 5;
        static final int TRANSACTION_runGbaAuthenticationForSubscriber = 6;
        static final int TRANSACTION_updateCachedKey = 8;

        private static class Proxy implements IGbaService {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.gba.IGbaService
            public NafSessionKey getCachedKey(String str, byte[] bArr, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IGbaService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeByteArray(bArr);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(7, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return (NafSessionKey) parcelObtain2.readTypedObject(NafSessionKey.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gba.IGbaService
            public int getGbaSupported() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IGbaService.DESCRIPTOR);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gba.IGbaService
            public int getGbaSupportedForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IGbaService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return IGbaService.DESCRIPTOR;
            }

            @Override // com.mediatek.gba.IGbaService
            public boolean isGbaKeyExpired(String str, byte[] bArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IGbaService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeByteArray(bArr);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gba.IGbaService
            public boolean isGbaKeyExpiredForSubscriber(String str, byte[] bArr, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IGbaService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeByteArray(bArr);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gba.IGbaService
            public NafSessionKey runGbaAuthentication(String str, byte[] bArr, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IGbaService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeByteArray(bArr);
                    parcelObtain.writeBoolean(z);
                    this.mRemote.transact(5, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return (NafSessionKey) parcelObtain2.readTypedObject(NafSessionKey.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gba.IGbaService
            public NafSessionKey runGbaAuthenticationForSubscriber(String str, byte[] bArr, boolean z, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IGbaService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeByteArray(bArr);
                    parcelObtain.writeBoolean(z);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(6, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return (NafSessionKey) parcelObtain2.readTypedObject(NafSessionKey.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.gba.IGbaService
            public void updateCachedKey(String str, byte[] bArr, int i, NafSessionKey nafSessionKey) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IGbaService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeByteArray(bArr);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeTypedObject(nafSessionKey, 0);
                    this.mRemote.transact(Stub.TRANSACTION_updateCachedKey, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IGbaService.DESCRIPTOR);
        }

        public static IGbaService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IGbaService.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IGbaService)) ? new Proxy(iBinder) : (IGbaService) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IGbaService.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IGbaService.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            int gbaSupported = getGbaSupported();
                            parcel2.writeNoException();
                            parcel2.writeInt(gbaSupported);
                            return true;
                        case 2:
                            int i3 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int gbaSupportedForSubscriber = getGbaSupportedForSubscriber(i3);
                            parcel2.writeNoException();
                            parcel2.writeInt(gbaSupportedForSubscriber);
                            return true;
                        case 3:
                            String string = parcel.readString();
                            byte[] bArrCreateByteArray = parcel.createByteArray();
                            parcel.enforceNoDataAvail();
                            boolean zIsGbaKeyExpired = isGbaKeyExpired(string, bArrCreateByteArray);
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zIsGbaKeyExpired);
                            return true;
                        case 4:
                            String string2 = parcel.readString();
                            byte[] bArrCreateByteArray2 = parcel.createByteArray();
                            int i4 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            boolean zIsGbaKeyExpiredForSubscriber = isGbaKeyExpiredForSubscriber(string2, bArrCreateByteArray2, i4);
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zIsGbaKeyExpiredForSubscriber);
                            return true;
                        case 5:
                            String string3 = parcel.readString();
                            byte[] bArrCreateByteArray3 = parcel.createByteArray();
                            boolean z = parcel.readBoolean();
                            parcel.enforceNoDataAvail();
                            NafSessionKey nafSessionKeyRunGbaAuthentication = runGbaAuthentication(string3, bArrCreateByteArray3, z);
                            parcel2.writeNoException();
                            parcel2.writeTypedObject(nafSessionKeyRunGbaAuthentication, 1);
                            return true;
                        case 6:
                            String string4 = parcel.readString();
                            byte[] bArrCreateByteArray4 = parcel.createByteArray();
                            boolean z2 = parcel.readBoolean();
                            int i5 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            NafSessionKey nafSessionKeyRunGbaAuthenticationForSubscriber = runGbaAuthenticationForSubscriber(string4, bArrCreateByteArray4, z2, i5);
                            parcel2.writeNoException();
                            parcel2.writeTypedObject(nafSessionKeyRunGbaAuthenticationForSubscriber, 1);
                            return true;
                        case 7:
                            String string5 = parcel.readString();
                            byte[] bArrCreateByteArray5 = parcel.createByteArray();
                            int i6 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            NafSessionKey cachedKey = getCachedKey(string5, bArrCreateByteArray5, i6);
                            parcel2.writeNoException();
                            parcel2.writeTypedObject(cachedKey, 1);
                            return true;
                        case TRANSACTION_updateCachedKey /* 8 */:
                            String string6 = parcel.readString();
                            byte[] bArrCreateByteArray6 = parcel.createByteArray();
                            int i7 = parcel.readInt();
                            NafSessionKey nafSessionKey = (NafSessionKey) parcel.readTypedObject(NafSessionKey.CREATOR);
                            parcel.enforceNoDataAvail();
                            updateCachedKey(string6, bArrCreateByteArray6, i7, nafSessionKey);
                            parcel2.writeNoException();
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    NafSessionKey getCachedKey(String str, byte[] bArr, int i) throws RemoteException;

    int getGbaSupported() throws RemoteException;

    int getGbaSupportedForSubscriber(int i) throws RemoteException;

    boolean isGbaKeyExpired(String str, byte[] bArr) throws RemoteException;

    boolean isGbaKeyExpiredForSubscriber(String str, byte[] bArr, int i) throws RemoteException;

    NafSessionKey runGbaAuthentication(String str, byte[] bArr, boolean z) throws RemoteException;

    NafSessionKey runGbaAuthenticationForSubscriber(String str, byte[] bArr, boolean z, int i) throws RemoteException;

    void updateCachedKey(String str, byte[] bArr, int i, NafSessionKey nafSessionKey) throws RemoteException;
}
