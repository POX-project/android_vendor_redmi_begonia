package com.mediatek.internal.telephony;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Message;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkPhoneSubInfoEx extends IInterface {

    public static class Default implements IMtkPhoneSubInfoEx {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public String getIsimDomainForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public String getIsimGbabp() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public String getIsimGbabpForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public String getIsimImpiForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public String[] getIsimImpuForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public String getIsimIstForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public String[] getIsimPcscfForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public byte[] getIsimPsismsc() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public byte[] getIsimPsismscForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public String getLine1PhoneNumberForSubscriber(int i, String str, String str2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public int getMncLength() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public int getMncLengthForSubscriber(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public String getUsimGbabp() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public String getUsimGbabpForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public byte[] getUsimPsismsc() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public byte[] getUsimPsismscForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public boolean getUsimService(int i, String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public boolean getUsimServiceForSubscriber(int i, int i2, String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public byte[] getUsimSmsp() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public byte[] getUsimSmspForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public void setIsimGbabp(String str, Message message) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public void setIsimGbabpForSubscriber(int i, String str, Message message) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public void setUsimGbabp(String str, Message message) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
        public void setUsimGbabpForSubscriber(int i, String str, Message message) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IMtkPhoneSubInfoEx {
        private static final String DESCRIPTOR = "com.mediatek.internal.telephony.IMtkPhoneSubInfoEx";
        static final int TRANSACTION_getIsimDomainForSubscriber = 18;
        static final int TRANSACTION_getIsimGbabp = 6;
        static final int TRANSACTION_getIsimGbabpForSubscriber = 7;
        static final int TRANSACTION_getIsimImpiForSubscriber = 17;
        static final int TRANSACTION_getIsimImpuForSubscriber = 19;
        static final int TRANSACTION_getIsimIstForSubscriber = 20;
        static final int TRANSACTION_getIsimPcscfForSubscriber = 21;
        static final int TRANSACTION_getIsimPsismsc = 22;
        static final int TRANSACTION_getIsimPsismscForSubscriber = 23;
        static final int TRANSACTION_getLine1PhoneNumberForSubscriber = 24;
        static final int TRANSACTION_getMncLength = 15;
        static final int TRANSACTION_getMncLengthForSubscriber = 16;
        static final int TRANSACTION_getUsimGbabp = 2;
        static final int TRANSACTION_getUsimGbabpForSubscriber = 3;
        static final int TRANSACTION_getUsimPsismsc = 11;
        static final int TRANSACTION_getUsimPsismscForSubscriber = 12;
        static final int TRANSACTION_getUsimService = 1;
        static final int TRANSACTION_getUsimServiceForSubscriber = 10;
        static final int TRANSACTION_getUsimSmsp = 13;
        static final int TRANSACTION_getUsimSmspForSubscriber = 14;
        static final int TRANSACTION_setIsimGbabp = 8;
        static final int TRANSACTION_setIsimGbabpForSubscriber = 9;
        static final int TRANSACTION_setUsimGbabp = 4;
        static final int TRANSACTION_setUsimGbabpForSubscriber = 5;

        private static class Proxy implements IMtkPhoneSubInfoEx {
            public static IMtkPhoneSubInfoEx sDefaultImpl;
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

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public String getIsimDomainForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(18, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIsimDomainForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public String getIsimGbabp() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIsimGbabp();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public String getIsimGbabpForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIsimGbabpForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public String getIsimImpiForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(17, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIsimImpiForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public String[] getIsimImpuForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(19, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIsimImpuForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public String getIsimIstForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(20, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIsimIstForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public String[] getIsimPcscfForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(21, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIsimPcscfForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public byte[] getIsimPsismsc() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(22, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIsimPsismsc();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createByteArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public byte[] getIsimPsismscForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(23, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getIsimPsismscForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createByteArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public String getLine1PhoneNumberForSubscriber(int i, String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(24, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getLine1PhoneNumberForSubscriber(i, str, str2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public int getMncLength() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(15, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getMncLength();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public int getMncLengthForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(16, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getMncLengthForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public String getUsimGbabp() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimGbabp();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public String getUsimGbabpForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimGbabpForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public byte[] getUsimPsismsc() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(11, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimPsismsc();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createByteArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public byte[] getUsimPsismscForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(12, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimPsismscForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createByteArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public boolean getUsimService(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimService(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public boolean getUsimServiceForSubscriber(int i, int i2, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(10, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimServiceForSubscriber(i, i2, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public byte[] getUsimSmsp() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(13, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimSmsp();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createByteArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public byte[] getUsimSmspForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(14, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimSmspForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createByteArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public void setIsimGbabp(String str, Message message) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (message != null) {
                        parcelObtain.writeInt(1);
                        message.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(8, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setIsimGbabp(str, message);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public void setIsimGbabpForSubscriber(int i, String str, Message message) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (message != null) {
                        parcelObtain.writeInt(1);
                        message.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(9, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setIsimGbabpForSubscriber(i, str, message);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public void setUsimGbabp(String str, Message message) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (message != null) {
                        parcelObtain.writeInt(1);
                        message.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setUsimGbabp(str, message);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkPhoneSubInfoEx
            public void setUsimGbabpForSubscriber(int i, String str, Message message) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (message != null) {
                        parcelObtain.writeInt(1);
                        message.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setUsimGbabpForSubscriber(i, str, message);
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

        public static IMtkPhoneSubInfoEx asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkPhoneSubInfoEx)) ? new Proxy(iBinder) : (IMtkPhoneSubInfoEx) iInterfaceQueryLocalInterface;
        }

        public static IMtkPhoneSubInfoEx getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMtkPhoneSubInfoEx iMtkPhoneSubInfoEx) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMtkPhoneSubInfoEx == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMtkPhoneSubInfoEx;
            return true;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1598968902) {
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            switch (i) {
                case 1:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean usimService = getUsimService(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(usimService ? 1 : 0);
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    String usimGbabp = getUsimGbabp();
                    parcel2.writeNoException();
                    parcel2.writeString(usimGbabp);
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    String usimGbabpForSubscriber = getUsimGbabpForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(usimGbabpForSubscriber);
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    setUsimGbabp(parcel.readString(), parcel.readInt() != 0 ? (Message) Message.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    setUsimGbabpForSubscriber(parcel.readInt(), parcel.readString(), parcel.readInt() != 0 ? (Message) Message.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    String isimGbabp = getIsimGbabp();
                    parcel2.writeNoException();
                    parcel2.writeString(isimGbabp);
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    String isimGbabpForSubscriber = getIsimGbabpForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(isimGbabpForSubscriber);
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    setIsimGbabp(parcel.readString(), parcel.readInt() != 0 ? (Message) Message.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    setIsimGbabpForSubscriber(parcel.readInt(), parcel.readString(), parcel.readInt() != 0 ? (Message) Message.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 10:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean usimServiceForSubscriber = getUsimServiceForSubscriber(parcel.readInt(), parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(usimServiceForSubscriber ? 1 : 0);
                    return true;
                case 11:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] usimPsismsc = getUsimPsismsc();
                    parcel2.writeNoException();
                    parcel2.writeByteArray(usimPsismsc);
                    return true;
                case 12:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] usimPsismscForSubscriber = getUsimPsismscForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeByteArray(usimPsismscForSubscriber);
                    return true;
                case 13:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] usimSmsp = getUsimSmsp();
                    parcel2.writeNoException();
                    parcel2.writeByteArray(usimSmsp);
                    return true;
                case 14:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] usimSmspForSubscriber = getUsimSmspForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeByteArray(usimSmspForSubscriber);
                    return true;
                case 15:
                    parcel.enforceInterface(DESCRIPTOR);
                    int mncLength = getMncLength();
                    parcel2.writeNoException();
                    parcel2.writeInt(mncLength);
                    return true;
                case 16:
                    parcel.enforceInterface(DESCRIPTOR);
                    int mncLengthForSubscriber = getMncLengthForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(mncLengthForSubscriber);
                    return true;
                case 17:
                    parcel.enforceInterface(DESCRIPTOR);
                    String isimImpiForSubscriber = getIsimImpiForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(isimImpiForSubscriber);
                    return true;
                case 18:
                    parcel.enforceInterface(DESCRIPTOR);
                    String isimDomainForSubscriber = getIsimDomainForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(isimDomainForSubscriber);
                    return true;
                case 19:
                    parcel.enforceInterface(DESCRIPTOR);
                    String[] isimImpuForSubscriber = getIsimImpuForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeStringArray(isimImpuForSubscriber);
                    return true;
                case 20:
                    parcel.enforceInterface(DESCRIPTOR);
                    String isimIstForSubscriber = getIsimIstForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(isimIstForSubscriber);
                    return true;
                case 21:
                    parcel.enforceInterface(DESCRIPTOR);
                    String[] isimPcscfForSubscriber = getIsimPcscfForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeStringArray(isimPcscfForSubscriber);
                    return true;
                case 22:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] isimPsismsc = getIsimPsismsc();
                    parcel2.writeNoException();
                    parcel2.writeByteArray(isimPsismsc);
                    return true;
                case 23:
                    parcel.enforceInterface(DESCRIPTOR);
                    byte[] isimPsismscForSubscriber = getIsimPsismscForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeByteArray(isimPsismscForSubscriber);
                    return true;
                case 24:
                    parcel.enforceInterface(DESCRIPTOR);
                    String line1PhoneNumberForSubscriber = getLine1PhoneNumberForSubscriber(parcel.readInt(), parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeString(line1PhoneNumberForSubscriber);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    String getIsimDomainForSubscriber(int i) throws RemoteException;

    String getIsimGbabp() throws RemoteException;

    String getIsimGbabpForSubscriber(int i) throws RemoteException;

    String getIsimImpiForSubscriber(int i) throws RemoteException;

    String[] getIsimImpuForSubscriber(int i) throws RemoteException;

    String getIsimIstForSubscriber(int i) throws RemoteException;

    String[] getIsimPcscfForSubscriber(int i) throws RemoteException;

    byte[] getIsimPsismsc() throws RemoteException;

    byte[] getIsimPsismscForSubscriber(int i) throws RemoteException;

    String getLine1PhoneNumberForSubscriber(int i, String str, String str2) throws RemoteException;

    int getMncLength() throws RemoteException;

    int getMncLengthForSubscriber(int i) throws RemoteException;

    String getUsimGbabp() throws RemoteException;

    String getUsimGbabpForSubscriber(int i) throws RemoteException;

    byte[] getUsimPsismsc() throws RemoteException;

    byte[] getUsimPsismscForSubscriber(int i) throws RemoteException;

    boolean getUsimService(int i, String str) throws RemoteException;

    boolean getUsimServiceForSubscriber(int i, int i2, String str) throws RemoteException;

    byte[] getUsimSmsp() throws RemoteException;

    byte[] getUsimSmspForSubscriber(int i) throws RemoteException;

    void setIsimGbabp(String str, Message message) throws RemoteException;

    void setIsimGbabpForSubscriber(int i, String str, Message message) throws RemoteException;

    void setUsimGbabp(String str, Message message) throws RemoteException;

    void setUsimGbabpForSubscriber(int i, String str, Message message) throws RemoteException;
}
