package com.mediatek.internal.telecom;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.telecom.PhoneAccount;
import android.telecom.PhoneAccountHandle;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkTelecomService extends IInterface {

    public static class Default implements IMtkTelecomService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.internal.telecom.IMtkTelecomService
        public List<PhoneAccountHandle> getAllPhoneAccountHandlesIncludingVirtual() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telecom.IMtkTelecomService
        public List<PhoneAccount> getAllPhoneAccountsIncludingVirtual() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telecom.IMtkTelecomService
        public boolean isInCall(String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telecom.IMtkTelecomService
        public boolean isInVideoCall(String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telecom.IMtkTelecomService
        public boolean isInVolteCall(String str) throws RemoteException {
            return false;
        }
    }

    public static abstract class Stub extends Binder implements IMtkTelecomService {
        private static final String DESCRIPTOR = "com.mediatek.internal.telecom.IMtkTelecomService";
        static final int TRANSACTION_getAllPhoneAccountHandlesIncludingVirtual = 4;
        static final int TRANSACTION_getAllPhoneAccountsIncludingVirtual = 3;
        static final int TRANSACTION_isInCall = 5;
        static final int TRANSACTION_isInVideoCall = 1;
        static final int TRANSACTION_isInVolteCall = 2;

        private static class Proxy implements IMtkTelecomService {
            public static IMtkTelecomService sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.internal.telecom.IMtkTelecomService
            public List<PhoneAccountHandle> getAllPhoneAccountHandlesIncludingVirtual() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAllPhoneAccountHandlesIncludingVirtual();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(PhoneAccountHandle.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telecom.IMtkTelecomService
            public List<PhoneAccount> getAllPhoneAccountsIncludingVirtual() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getAllPhoneAccountsIncludingVirtual, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAllPhoneAccountsIncludingVirtual();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(PhoneAccount.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.internal.telecom.IMtkTelecomService
            public boolean isInCall(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(Stub.TRANSACTION_isInCall, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isInCall(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telecom.IMtkTelecomService
            public boolean isInVideoCall(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isInVideoCall(str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telecom.IMtkTelecomService
            public boolean isInVolteCall(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isInVolteCall(str);
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

        public static IMtkTelecomService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkTelecomService)) ? new Proxy(iBinder) : (IMtkTelecomService) iInterfaceQueryLocalInterface;
        }

        public static IMtkTelecomService getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMtkTelecomService iMtkTelecomService) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMtkTelecomService == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMtkTelecomService;
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
                boolean zIsInVideoCall = isInVideoCall(parcel.readString());
                parcel2.writeNoException();
                parcel2.writeInt(zIsInVideoCall ? 1 : 0);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                boolean zIsInVolteCall = isInVolteCall(parcel.readString());
                parcel2.writeNoException();
                parcel2.writeInt(zIsInVolteCall ? 1 : 0);
                return true;
            }
            if (i == TRANSACTION_getAllPhoneAccountsIncludingVirtual) {
                parcel.enforceInterface(DESCRIPTOR);
                List<PhoneAccount> allPhoneAccountsIncludingVirtual = getAllPhoneAccountsIncludingVirtual();
                parcel2.writeNoException();
                parcel2.writeTypedList(allPhoneAccountsIncludingVirtual);
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(DESCRIPTOR);
                List<PhoneAccountHandle> allPhoneAccountHandlesIncludingVirtual = getAllPhoneAccountHandlesIncludingVirtual();
                parcel2.writeNoException();
                parcel2.writeTypedList(allPhoneAccountHandlesIncludingVirtual);
                return true;
            }
            if (i != TRANSACTION_isInCall) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            boolean zIsInCall = isInCall(parcel.readString());
            parcel2.writeNoException();
            parcel2.writeInt(zIsInCall ? 1 : 0);
            return true;
        }
    }

    List<PhoneAccountHandle> getAllPhoneAccountHandlesIncludingVirtual() throws RemoteException;

    List<PhoneAccount> getAllPhoneAccountsIncludingVirtual() throws RemoteException;

    boolean isInCall(String str) throws RemoteException;

    boolean isInVideoCall(String str) throws RemoteException;

    boolean isInVolteCall(String str) throws RemoteException;
}
