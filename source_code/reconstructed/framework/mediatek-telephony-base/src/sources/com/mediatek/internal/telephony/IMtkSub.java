package com.mediatek.internal.telephony;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkSub extends IInterface {

    public static class Default implements IMtkSub {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSub
        public int getSubIdUsingPhoneId(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkSub
        public MtkSubscriptionInfo getSubInfo(String str, int i, String str2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSub
        public MtkSubscriptionInfo getSubInfoForIccId(String str, String str2, String str3) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSub
        public void setDefaultDataSubIdWithoutCapabilitySwitch(int i) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkSub
        public void setDefaultFallbackSubId(int i, int i2) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IMtkSub {
        private static final String DESCRIPTOR = "com.mediatek.internal.telephony.IMtkSub";
        static final int TRANSACTION_getSubIdUsingPhoneId = 3;
        static final int TRANSACTION_getSubInfo = 1;
        static final int TRANSACTION_getSubInfoForIccId = 2;
        static final int TRANSACTION_setDefaultDataSubIdWithoutCapabilitySwitch = 5;
        static final int TRANSACTION_setDefaultFallbackSubId = 4;

        private static class Proxy implements IMtkSub {
            public static IMtkSub sDefaultImpl;
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

            @Override // com.mediatek.internal.telephony.IMtkSub
            public int getSubIdUsingPhoneId(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSubIdUsingPhoneId(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSub
            public MtkSubscriptionInfo getSubInfo(String str, int i, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSubInfo(str, i, str2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? MtkSubscriptionInfo.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSub
            public MtkSubscriptionInfo getSubInfoForIccId(String str, String str2, String str3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeString(str3);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSubInfoForIccId(str, str2, str3);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? MtkSubscriptionInfo.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSub
            public void setDefaultDataSubIdWithoutCapabilitySwitch(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setDefaultDataSubIdWithoutCapabilitySwitch(i);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSub
            public void setDefaultFallbackSubId(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setDefaultFallbackSubId(i, i2);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IMtkSub asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkSub)) ? new Proxy(iBinder) : (IMtkSub) iInterfaceQueryLocalInterface;
        }

        public static IMtkSub getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMtkSub iMtkSub) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMtkSub == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMtkSub;
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
                MtkSubscriptionInfo subInfo = getSubInfo(parcel.readString(), parcel.readInt(), parcel.readString());
                parcel2.writeNoException();
                if (subInfo != null) {
                    parcel2.writeInt(1);
                    subInfo.writeToParcel(parcel2, 1);
                } else {
                    parcel2.writeInt(0);
                }
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                MtkSubscriptionInfo subInfoForIccId = getSubInfoForIccId(parcel.readString(), parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                if (subInfoForIccId != null) {
                    parcel2.writeInt(1);
                    subInfoForIccId.writeToParcel(parcel2, 1);
                } else {
                    parcel2.writeInt(0);
                }
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(DESCRIPTOR);
                int subIdUsingPhoneId = getSubIdUsingPhoneId(parcel.readInt());
                parcel2.writeNoException();
                parcel2.writeInt(subIdUsingPhoneId);
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(DESCRIPTOR);
                setDefaultFallbackSubId(parcel.readInt(), parcel.readInt());
                parcel2.writeNoException();
                return true;
            }
            if (i != 5) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            setDefaultDataSubIdWithoutCapabilitySwitch(parcel.readInt());
            parcel2.writeNoException();
            return true;
        }
    }

    int getSubIdUsingPhoneId(int i) throws RemoteException;

    MtkSubscriptionInfo getSubInfo(String str, int i, String str2) throws RemoteException;

    MtkSubscriptionInfo getSubInfoForIccId(String str, String str2, String str3) throws RemoteException;

    void setDefaultDataSubIdWithoutCapabilitySwitch(int i) throws RemoteException;

    void setDefaultFallbackSubId(int i, int i2) throws RemoteException;
}
