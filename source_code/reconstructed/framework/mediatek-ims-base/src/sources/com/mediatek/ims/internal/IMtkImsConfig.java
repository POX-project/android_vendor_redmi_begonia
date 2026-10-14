package com.mediatek.ims.internal;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import com.android.ims.ImsConfigListener;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkImsConfig extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.ims.internal.IMtkImsConfig";

    public static class Default implements IMtkImsConfig {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public void getFeatureValue(int i, int i2, ImsConfigListener imsConfigListener) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public int getImsResCapability(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public String getProvisionedStringValue(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public int getProvisionedValue(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public void getVideoQuality(ImsConfigListener imsConfigListener) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public void setFeatureValue(int i, int i2, int i3, ImsConfigListener imsConfigListener) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public void setImsResCapability(int i, int i2) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public int[] setModemImsCfg(String[] strArr, String[] strArr2, int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public int[] setModemImsIwlanCfg(String[] strArr, String[] strArr2, int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public int[] setModemImsWoCfg(String[] strArr, String[] strArr2, int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public void setMultiFeatureValues(int[] iArr, int[] iArr2, int[] iArr3, ImsConfigListener imsConfigListener) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public int setProvisionedStringValue(int i, String str) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public int setProvisionedValue(int i, int i2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public void setVideoQuality(int i, ImsConfigListener imsConfigListener) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public void setVoltePreference(int i) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsConfig
        public void setWfcMode(int i) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IMtkImsConfig {
        static final int TRANSACTION_getFeatureValue = 5;
        static final int TRANSACTION_getImsResCapability = 11;
        static final int TRANSACTION_getProvisionedStringValue = 2;
        static final int TRANSACTION_getProvisionedValue = 1;
        static final int TRANSACTION_getVideoQuality = 8;
        static final int TRANSACTION_setFeatureValue = 6;
        static final int TRANSACTION_setImsResCapability = 10;
        static final int TRANSACTION_setModemImsCfg = 14;
        static final int TRANSACTION_setModemImsIwlanCfg = 16;
        static final int TRANSACTION_setModemImsWoCfg = 15;
        static final int TRANSACTION_setMultiFeatureValues = 7;
        static final int TRANSACTION_setProvisionedStringValue = 4;
        static final int TRANSACTION_setProvisionedValue = 3;
        static final int TRANSACTION_setVideoQuality = 9;
        static final int TRANSACTION_setVoltePreference = 13;
        static final int TRANSACTION_setWfcMode = 12;

        private static class Proxy implements IMtkImsConfig {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public void getFeatureValue(int i, int i2, ImsConfigListener imsConfigListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeStrongInterface(imsConfigListener);
                    this.mRemote.transact(5, parcelObtain, null, 1);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public int getImsResCapability(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_getImsResCapability, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return IMtkImsConfig.DESCRIPTOR;
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public String getProvisionedStringValue(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public int getProvisionedValue(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public void getVideoQuality(ImsConfigListener imsConfigListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(imsConfigListener);
                    this.mRemote.transact(Stub.TRANSACTION_getVideoQuality, parcelObtain, null, 1);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public void setFeatureValue(int i, int i2, int i3, ImsConfigListener imsConfigListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    parcelObtain.writeStrongInterface(imsConfigListener);
                    this.mRemote.transact(6, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public void setImsResCapability(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    this.mRemote.transact(Stub.TRANSACTION_setImsResCapability, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public int[] setModemImsCfg(String[] strArr, String[] strArr2, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeStringArray(strArr);
                    parcelObtain.writeStringArray(strArr2);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_setModemImsCfg, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.createIntArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public int[] setModemImsIwlanCfg(String[] strArr, String[] strArr2, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeStringArray(strArr);
                    parcelObtain.writeStringArray(strArr2);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_setModemImsIwlanCfg, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.createIntArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public int[] setModemImsWoCfg(String[] strArr, String[] strArr2, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeStringArray(strArr);
                    parcelObtain.writeStringArray(strArr2);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_setModemImsWoCfg, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.createIntArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public void setMultiFeatureValues(int[] iArr, int[] iArr2, int[] iArr3, ImsConfigListener imsConfigListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeIntArray(iArr);
                    parcelObtain.writeIntArray(iArr2);
                    parcelObtain.writeIntArray(iArr3);
                    parcelObtain.writeStrongInterface(imsConfigListener);
                    this.mRemote.transact(7, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public int setProvisionedStringValue(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public int setProvisionedValue(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public void setVideoQuality(int i, ImsConfigListener imsConfigListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeStrongInterface(imsConfigListener);
                    this.mRemote.transact(Stub.TRANSACTION_setVideoQuality, parcelObtain, null, 1);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public void setVoltePreference(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_setVoltePreference, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsConfig
            public void setWfcMode(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsConfig.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_setWfcMode, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IMtkImsConfig.DESCRIPTOR);
        }

        public static IMtkImsConfig asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IMtkImsConfig.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkImsConfig)) ? new Proxy(iBinder) : (IMtkImsConfig) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IMtkImsConfig.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IMtkImsConfig.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            int i3 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int provisionedValue = getProvisionedValue(i3);
                            parcel2.writeNoException();
                            parcel2.writeInt(provisionedValue);
                            return true;
                        case 2:
                            int i4 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            String provisionedStringValue = getProvisionedStringValue(i4);
                            parcel2.writeNoException();
                            parcel2.writeString(provisionedStringValue);
                            return true;
                        case 3:
                            int i5 = parcel.readInt();
                            int i6 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int provisionedValue2 = setProvisionedValue(i5, i6);
                            parcel2.writeNoException();
                            parcel2.writeInt(provisionedValue2);
                            return true;
                        case 4:
                            int i7 = parcel.readInt();
                            String string = parcel.readString();
                            parcel.enforceNoDataAvail();
                            int provisionedStringValue2 = setProvisionedStringValue(i7, string);
                            parcel2.writeNoException();
                            parcel2.writeInt(provisionedStringValue2);
                            return true;
                        case 5:
                            int i8 = parcel.readInt();
                            int i9 = parcel.readInt();
                            ImsConfigListener imsConfigListenerAsInterface = ImsConfigListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            getFeatureValue(i8, i9, imsConfigListenerAsInterface);
                            return true;
                        case 6:
                            int i10 = parcel.readInt();
                            int i11 = parcel.readInt();
                            int i12 = parcel.readInt();
                            ImsConfigListener imsConfigListenerAsInterface2 = ImsConfigListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            setFeatureValue(i10, i11, i12, imsConfigListenerAsInterface2);
                            parcel2.writeNoException();
                            return true;
                        case 7:
                            int[] iArrCreateIntArray = parcel.createIntArray();
                            int[] iArrCreateIntArray2 = parcel.createIntArray();
                            int[] iArrCreateIntArray3 = parcel.createIntArray();
                            ImsConfigListener imsConfigListenerAsInterface3 = ImsConfigListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            setMultiFeatureValues(iArrCreateIntArray, iArrCreateIntArray2, iArrCreateIntArray3, imsConfigListenerAsInterface3);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_getVideoQuality /* 8 */:
                            ImsConfigListener imsConfigListenerAsInterface4 = ImsConfigListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            getVideoQuality(imsConfigListenerAsInterface4);
                            return true;
                        case TRANSACTION_setVideoQuality /* 9 */:
                            int i13 = parcel.readInt();
                            ImsConfigListener imsConfigListenerAsInterface5 = ImsConfigListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            setVideoQuality(i13, imsConfigListenerAsInterface5);
                            return true;
                        case TRANSACTION_setImsResCapability /* 10 */:
                            int i14 = parcel.readInt();
                            int i15 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            setImsResCapability(i14, i15);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_getImsResCapability /* 11 */:
                            int i16 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int imsResCapability = getImsResCapability(i16);
                            parcel2.writeNoException();
                            parcel2.writeInt(imsResCapability);
                            return true;
                        case TRANSACTION_setWfcMode /* 12 */:
                            int i17 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            setWfcMode(i17);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_setVoltePreference /* 13 */:
                            int i18 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            setVoltePreference(i18);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_setModemImsCfg /* 14 */:
                            String[] strArrCreateStringArray = parcel.createStringArray();
                            String[] strArrCreateStringArray2 = parcel.createStringArray();
                            int i19 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int[] modemImsCfg = setModemImsCfg(strArrCreateStringArray, strArrCreateStringArray2, i19);
                            parcel2.writeNoException();
                            parcel2.writeIntArray(modemImsCfg);
                            return true;
                        case TRANSACTION_setModemImsWoCfg /* 15 */:
                            String[] strArrCreateStringArray3 = parcel.createStringArray();
                            String[] strArrCreateStringArray4 = parcel.createStringArray();
                            int i20 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int[] modemImsWoCfg = setModemImsWoCfg(strArrCreateStringArray3, strArrCreateStringArray4, i20);
                            parcel2.writeNoException();
                            parcel2.writeIntArray(modemImsWoCfg);
                            return true;
                        case TRANSACTION_setModemImsIwlanCfg /* 16 */:
                            String[] strArrCreateStringArray5 = parcel.createStringArray();
                            String[] strArrCreateStringArray6 = parcel.createStringArray();
                            int i21 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int[] modemImsIwlanCfg = setModemImsIwlanCfg(strArrCreateStringArray5, strArrCreateStringArray6, i21);
                            parcel2.writeNoException();
                            parcel2.writeIntArray(modemImsIwlanCfg);
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void getFeatureValue(int i, int i2, ImsConfigListener imsConfigListener) throws RemoteException;

    int getImsResCapability(int i) throws RemoteException;

    String getProvisionedStringValue(int i) throws RemoteException;

    int getProvisionedValue(int i) throws RemoteException;

    void getVideoQuality(ImsConfigListener imsConfigListener) throws RemoteException;

    void setFeatureValue(int i, int i2, int i3, ImsConfigListener imsConfigListener) throws RemoteException;

    void setImsResCapability(int i, int i2) throws RemoteException;

    int[] setModemImsCfg(String[] strArr, String[] strArr2, int i) throws RemoteException;

    int[] setModemImsIwlanCfg(String[] strArr, String[] strArr2, int i) throws RemoteException;

    int[] setModemImsWoCfg(String[] strArr, String[] strArr2, int i) throws RemoteException;

    void setMultiFeatureValues(int[] iArr, int[] iArr2, int[] iArr3, ImsConfigListener imsConfigListener) throws RemoteException;

    int setProvisionedStringValue(int i, String str) throws RemoteException;

    int setProvisionedValue(int i, int i2) throws RemoteException;

    void setVideoQuality(int i, ImsConfigListener imsConfigListener) throws RemoteException;

    void setVoltePreference(int i) throws RemoteException;

    void setWfcMode(int i) throws RemoteException;
}
