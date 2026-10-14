package com.mediatek.internal.telephony.phb;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkIccPhoneBook extends IInterface {

    public static class Default implements IMtkIccPhoneBook {
        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public boolean addContactToGroup(int i, int i2, int i3) throws RemoteException {
            return false;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int[] getAdnRecordsCapacity() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int[] getAdnRecordsCapacityForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public List<MtkAdnRecord> getAdnRecordsInEf(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public List<MtkAdnRecord> getAdnRecordsInEfForSubscriber(int i, int i2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int getAnrCount(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int getEmailCount(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public UsimPBMemInfo[] getPhonebookMemStorageExt(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int getSneRecordLen(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int getUpbDone(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public String getUsimAasById(int i, int i2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public List<AlphaTag> getUsimAasList(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int getUsimAasMaxCount(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int getUsimAasMaxNameLen(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public String getUsimGroupById(int i, int i2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public List<UsimGroup> getUsimGroups(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int getUsimGrpMaxCount(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int getUsimGrpMaxNameLen(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int hasExistGroup(int i, String str) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public boolean hasSne(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int insertUsimAas(int i, String str) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int insertUsimGroup(int i, String str) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public boolean isAdnAccessible(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public boolean isPhbReady(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public boolean moveContactFromGroupsToGroups(int i, int i2, int[] iArr, int[] iArr2) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public boolean removeContactFromGroup(int i, int i2, int i3) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public boolean removeUsimAasById(int i, int i2, int i3) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public boolean removeUsimGroupById(int i, int i2) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int updateAdnRecordsInEfByIndexWithError(int i, int i2, String str, String str2, int i3, String str3) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int updateAdnRecordsInEfBySearchWithError(int i, int i2, String str, String str2, String str3, String str4, String str5) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public boolean updateContactToGroups(int i, int i2, int[] iArr) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public boolean updateUsimAas(int i, int i2, int i3, String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int updateUsimGroup(int i, int i2, String str) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int updateUsimPBRecordsByIndexWithError(int i, int i2, MtkAdnRecord mtkAdnRecord, int i3) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int updateUsimPBRecordsBySearchWithError(int i, int i2, MtkAdnRecord mtkAdnRecord, MtkAdnRecord mtkAdnRecord2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int updateUsimPBRecordsInEfByIndexWithError(int i, int i2, String str, String str2, String str3, String str4, String[] strArr, int i3) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
        public int updateUsimPBRecordsInEfBySearchWithError(int i, int i2, String str, String str2, String str3, String str4, String[] strArr, String str5, String str6, String str7, String str8, String[] strArr2) throws RemoteException {
            return 0;
        }
    }

    public static abstract class Stub extends Binder implements IMtkIccPhoneBook {
        private static final String DESCRIPTOR = "com.mediatek.internal.telephony.phb.IMtkIccPhoneBook";
        static final int TRANSACTION_addContactToGroup = 15;
        static final int TRANSACTION_getAdnRecordsCapacity = 36;
        static final int TRANSACTION_getAdnRecordsCapacityForSubscriber = 37;
        static final int TRANSACTION_getAdnRecordsInEf = 1;
        static final int TRANSACTION_getAdnRecordsInEfForSubscriber = 2;
        static final int TRANSACTION_getAnrCount = 25;
        static final int TRANSACTION_getEmailCount = 26;
        static final int TRANSACTION_getPhonebookMemStorageExt = 34;
        static final int TRANSACTION_getSneRecordLen = 32;
        static final int TRANSACTION_getUpbDone = 35;
        static final int TRANSACTION_getUsimAasById = 23;
        static final int TRANSACTION_getUsimAasList = 22;
        static final int TRANSACTION_getUsimAasMaxCount = 27;
        static final int TRANSACTION_getUsimAasMaxNameLen = 28;
        static final int TRANSACTION_getUsimGroupById = 11;
        static final int TRANSACTION_getUsimGroups = 10;
        static final int TRANSACTION_getUsimGrpMaxCount = 21;
        static final int TRANSACTION_getUsimGrpMaxNameLen = 20;
        static final int TRANSACTION_hasExistGroup = 19;
        static final int TRANSACTION_hasSne = 31;
        static final int TRANSACTION_insertUsimAas = 24;
        static final int TRANSACTION_insertUsimGroup = 13;
        static final int TRANSACTION_isAdnAccessible = 33;
        static final int TRANSACTION_isPhbReady = 9;
        static final int TRANSACTION_moveContactFromGroupsToGroups = 18;
        static final int TRANSACTION_removeContactFromGroup = 16;
        static final int TRANSACTION_removeUsimAasById = 30;
        static final int TRANSACTION_removeUsimGroupById = 12;
        static final int TRANSACTION_updateAdnRecordsInEfByIndexWithError = 5;
        static final int TRANSACTION_updateAdnRecordsInEfBySearchWithError = 3;
        static final int TRANSACTION_updateContactToGroups = 17;
        static final int TRANSACTION_updateUsimAas = 29;
        static final int TRANSACTION_updateUsimGroup = 14;
        static final int TRANSACTION_updateUsimPBRecordsByIndexWithError = 7;
        static final int TRANSACTION_updateUsimPBRecordsBySearchWithError = 8;
        static final int TRANSACTION_updateUsimPBRecordsInEfByIndexWithError = 6;
        static final int TRANSACTION_updateUsimPBRecordsInEfBySearchWithError = 4;

        private static class Proxy implements IMtkIccPhoneBook {
            public static IMtkIccPhoneBook sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public boolean addContactToGroup(int i, int i2, int i3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    if (!this.mRemote.transact(15, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().addContactToGroup(i, i2, i3);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int[] getAdnRecordsCapacity() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getAdnRecordsCapacity, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAdnRecordsCapacity();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createIntArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int[] getAdnRecordsCapacityForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getAdnRecordsCapacityForSubscriber, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAdnRecordsCapacityForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createIntArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public List<MtkAdnRecord> getAdnRecordsInEf(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAdnRecordsInEf(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(MtkAdnRecord.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public List<MtkAdnRecord> getAdnRecordsInEfForSubscriber(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAdnRecordsInEfForSubscriber(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(MtkAdnRecord.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int getAnrCount(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(25, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAnrCount(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int getEmailCount(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(26, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getEmailCount(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public UsimPBMemInfo[] getPhonebookMemStorageExt(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getPhonebookMemStorageExt, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getPhonebookMemStorageExt(i);
                    }
                    parcelObtain2.readException();
                    return (UsimPBMemInfo[]) parcelObtain2.createTypedArray(UsimPBMemInfo.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int getSneRecordLen(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(32, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSneRecordLen(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int getUpbDone(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(Stub.TRANSACTION_getUpbDone, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUpbDone(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public String getUsimAasById(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(23, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimAasById(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public List<AlphaTag> getUsimAasList(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(22, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimAasList(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(AlphaTag.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int getUsimAasMaxCount(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(27, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimAasMaxCount(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int getUsimAasMaxNameLen(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(28, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimAasMaxNameLen(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public String getUsimGroupById(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(11, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimGroupById(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public List<UsimGroup> getUsimGroups(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(10, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimGroups(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(UsimGroup.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int getUsimGrpMaxCount(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(21, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimGrpMaxCount(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int getUsimGrpMaxNameLen(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(20, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getUsimGrpMaxNameLen(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int hasExistGroup(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(19, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().hasExistGroup(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public boolean hasSne(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(31, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().hasSne(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int insertUsimAas(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(24, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().insertUsimAas(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int insertUsimGroup(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(13, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().insertUsimGroup(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public boolean isAdnAccessible(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(33, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isAdnAccessible(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public boolean isPhbReady(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(9, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isPhbReady(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public boolean moveContactFromGroupsToGroups(int i, int i2, int[] iArr, int[] iArr2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeIntArray(iArr);
                    parcelObtain.writeIntArray(iArr2);
                    if (!this.mRemote.transact(18, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().moveContactFromGroupsToGroups(i, i2, iArr, iArr2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public boolean removeContactFromGroup(int i, int i2, int i3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    if (!this.mRemote.transact(16, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().removeContactFromGroup(i, i2, i3);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public boolean removeUsimAasById(int i, int i2, int i3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    if (!this.mRemote.transact(30, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().removeUsimAasById(i, i2, i3);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public boolean removeUsimGroupById(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(12, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().removeUsimGroupById(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int updateAdnRecordsInEfByIndexWithError(int i, int i2, String str, String str2, int i3, String str3) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        try {
                            parcelObtain.writeInt(i2);
                            try {
                                parcelObtain.writeString(str);
                                try {
                                    parcelObtain.writeString(str2);
                                    try {
                                        parcelObtain.writeInt(i3);
                                        try {
                                            parcelObtain.writeString(str3);
                                            if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                                                int iUpdateAdnRecordsInEfByIndexWithError = Stub.getDefaultImpl().updateAdnRecordsInEfByIndexWithError(i, i2, str, str2, i3, str3);
                                                parcelObtain2.recycle();
                                                parcelObtain.recycle();
                                                return iUpdateAdnRecordsInEfByIndexWithError;
                                            }
                                            parcelObtain2.readException();
                                            int i4 = parcelObtain2.readInt();
                                            parcelObtain2.recycle();
                                            parcelObtain.recycle();
                                            return i4;
                                        } catch (Throwable th) {
                                            th = th;
                                            parcelObtain2.recycle();
                                            parcelObtain.recycle();
                                            throw th;
                                        }
                                    } catch (Throwable th2) {
                                        th = th2;
                                        parcelObtain2.recycle();
                                        parcelObtain.recycle();
                                        throw th;
                                    }
                                } catch (Throwable th3) {
                                    th = th3;
                                    parcelObtain2.recycle();
                                    parcelObtain.recycle();
                                    throw th;
                                }
                            } catch (Throwable th4) {
                                th = th4;
                                parcelObtain2.recycle();
                                parcelObtain.recycle();
                                throw th;
                            }
                        } catch (Throwable th5) {
                            th = th5;
                            parcelObtain2.recycle();
                            parcelObtain.recycle();
                            throw th;
                        }
                    } catch (Throwable th6) {
                        th = th6;
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        throw th;
                    }
                } catch (Throwable th7) {
                    th = th7;
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int updateAdnRecordsInEfBySearchWithError(int i, int i2, String str, String str2, String str3, String str4, String str5) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        try {
                            parcelObtain.writeInt(i2);
                            try {
                                parcelObtain.writeString(str);
                                try {
                                    parcelObtain.writeString(str2);
                                    try {
                                        parcelObtain.writeString(str3);
                                        parcelObtain.writeString(str4);
                                        parcelObtain.writeString(str5);
                                        if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                                            int iUpdateAdnRecordsInEfBySearchWithError = Stub.getDefaultImpl().updateAdnRecordsInEfBySearchWithError(i, i2, str, str2, str3, str4, str5);
                                            parcelObtain2.recycle();
                                            parcelObtain.recycle();
                                            return iUpdateAdnRecordsInEfBySearchWithError;
                                        }
                                        parcelObtain2.readException();
                                        int i3 = parcelObtain2.readInt();
                                        parcelObtain2.recycle();
                                        parcelObtain.recycle();
                                        return i3;
                                    } catch (Throwable th) {
                                        th = th;
                                        parcelObtain2.recycle();
                                        parcelObtain.recycle();
                                        throw th;
                                    }
                                } catch (Throwable th2) {
                                    th = th2;
                                    parcelObtain2.recycle();
                                    parcelObtain.recycle();
                                    throw th;
                                }
                            } catch (Throwable th3) {
                                th = th3;
                                parcelObtain2.recycle();
                                parcelObtain.recycle();
                                throw th;
                            }
                        } catch (Throwable th4) {
                            th = th4;
                            parcelObtain2.recycle();
                            parcelObtain.recycle();
                            throw th;
                        }
                    } catch (Throwable th5) {
                        th = th5;
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        throw th;
                    }
                } catch (Throwable th6) {
                    th = th6;
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public boolean updateContactToGroups(int i, int i2, int[] iArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeIntArray(iArr);
                    if (!this.mRemote.transact(17, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().updateContactToGroups(i, i2, iArr);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public boolean updateUsimAas(int i, int i2, int i3, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(29, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().updateUsimAas(i, i2, i3, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int updateUsimGroup(int i, int i2, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(14, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().updateUsimGroup(i, i2, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int updateUsimPBRecordsByIndexWithError(int i, int i2, MtkAdnRecord mtkAdnRecord, int i3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (mtkAdnRecord != null) {
                        parcelObtain.writeInt(1);
                        mtkAdnRecord.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeInt(i3);
                    if (!this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().updateUsimPBRecordsByIndexWithError(i, i2, mtkAdnRecord, i3);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int updateUsimPBRecordsBySearchWithError(int i, int i2, MtkAdnRecord mtkAdnRecord, MtkAdnRecord mtkAdnRecord2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (mtkAdnRecord != null) {
                        parcelObtain.writeInt(1);
                        mtkAdnRecord.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (mtkAdnRecord2 != null) {
                        parcelObtain.writeInt(1);
                        mtkAdnRecord2.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(8, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().updateUsimPBRecordsBySearchWithError(i, i2, mtkAdnRecord, mtkAdnRecord2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int updateUsimPBRecordsInEfByIndexWithError(int i, int i2, String str, String str2, String str3, String str4, String[] strArr, int i3) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        try {
                            parcelObtain.writeInt(i2);
                            try {
                                parcelObtain.writeString(str);
                                try {
                                    parcelObtain.writeString(str2);
                                    parcelObtain.writeString(str3);
                                    parcelObtain.writeString(str4);
                                    parcelObtain.writeStringArray(strArr);
                                    parcelObtain.writeInt(i3);
                                    if (!this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                                        int iUpdateUsimPBRecordsInEfByIndexWithError = Stub.getDefaultImpl().updateUsimPBRecordsInEfByIndexWithError(i, i2, str, str2, str3, str4, strArr, i3);
                                        parcelObtain2.recycle();
                                        parcelObtain.recycle();
                                        return iUpdateUsimPBRecordsInEfByIndexWithError;
                                    }
                                    parcelObtain2.readException();
                                    int i4 = parcelObtain2.readInt();
                                    parcelObtain2.recycle();
                                    parcelObtain.recycle();
                                    return i4;
                                } catch (Throwable th) {
                                    th = th;
                                    parcelObtain2.recycle();
                                    parcelObtain.recycle();
                                    throw th;
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                parcelObtain2.recycle();
                                parcelObtain.recycle();
                                throw th;
                            }
                        } catch (Throwable th3) {
                            th = th3;
                            parcelObtain2.recycle();
                            parcelObtain.recycle();
                            throw th;
                        }
                    } catch (Throwable th4) {
                        th = th4;
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        throw th;
                    }
                } catch (Throwable th5) {
                    th = th5;
                }
            }

            @Override // com.mediatek.internal.telephony.phb.IMtkIccPhoneBook
            public int updateUsimPBRecordsInEfBySearchWithError(int i, int i2, String str, String str2, String str3, String str4, String[] strArr, String str5, String str6, String str7, String str8, String[] strArr2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeString(str3);
                    parcelObtain.writeString(str4);
                    parcelObtain.writeStringArray(strArr);
                    parcelObtain.writeString(str5);
                    parcelObtain.writeString(str6);
                    parcelObtain.writeString(str7);
                    parcelObtain.writeString(str8);
                    parcelObtain.writeStringArray(strArr2);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().updateUsimPBRecordsInEfBySearchWithError(i, i2, str, str2, str3, str4, strArr, str5, str6, str7, str8, strArr2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IMtkIccPhoneBook asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkIccPhoneBook)) ? new Proxy(iBinder) : (IMtkIccPhoneBook) iInterfaceQueryLocalInterface;
        }

        public static IMtkIccPhoneBook getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMtkIccPhoneBook iMtkIccPhoneBook) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMtkIccPhoneBook == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMtkIccPhoneBook;
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
                    List<MtkAdnRecord> adnRecordsInEf = getAdnRecordsInEf(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeTypedList(adnRecordsInEf);
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    List<MtkAdnRecord> adnRecordsInEfForSubscriber = getAdnRecordsInEfForSubscriber(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeTypedList(adnRecordsInEfForSubscriber);
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iUpdateAdnRecordsInEfBySearchWithError = updateAdnRecordsInEfBySearchWithError(parcel.readInt(), parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iUpdateAdnRecordsInEfBySearchWithError);
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iUpdateUsimPBRecordsInEfBySearchWithError = updateUsimPBRecordsInEfBySearchWithError(parcel.readInt(), parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.createStringArray(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.createStringArray());
                    parcel2.writeNoException();
                    parcel2.writeInt(iUpdateUsimPBRecordsInEfBySearchWithError);
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iUpdateAdnRecordsInEfByIndexWithError = updateAdnRecordsInEfByIndexWithError(parcel.readInt(), parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iUpdateAdnRecordsInEfByIndexWithError);
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iUpdateUsimPBRecordsInEfByIndexWithError = updateUsimPBRecordsInEfByIndexWithError(parcel.readInt(), parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.createStringArray(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(iUpdateUsimPBRecordsInEfByIndexWithError);
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iUpdateUsimPBRecordsByIndexWithError = updateUsimPBRecordsByIndexWithError(parcel.readInt(), parcel.readInt(), parcel.readInt() != 0 ? MtkAdnRecord.CREATOR.createFromParcel(parcel) : null, parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(iUpdateUsimPBRecordsByIndexWithError);
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iUpdateUsimPBRecordsBySearchWithError = updateUsimPBRecordsBySearchWithError(parcel.readInt(), parcel.readInt(), parcel.readInt() != 0 ? MtkAdnRecord.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? MtkAdnRecord.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    parcel2.writeInt(iUpdateUsimPBRecordsBySearchWithError);
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsPhbReady = isPhbReady(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsPhbReady ? 1 : 0);
                    return true;
                case 10:
                    parcel.enforceInterface(DESCRIPTOR);
                    List<UsimGroup> usimGroups = getUsimGroups(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeTypedList(usimGroups);
                    return true;
                case 11:
                    parcel.enforceInterface(DESCRIPTOR);
                    String usimGroupById = getUsimGroupById(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(usimGroupById);
                    return true;
                case 12:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zRemoveUsimGroupById = removeUsimGroupById(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zRemoveUsimGroupById ? 1 : 0);
                    return true;
                case 13:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iInsertUsimGroup = insertUsimGroup(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iInsertUsimGroup);
                    return true;
                case 14:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iUpdateUsimGroup = updateUsimGroup(parcel.readInt(), parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iUpdateUsimGroup);
                    return true;
                case 15:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zAddContactToGroup = addContactToGroup(parcel.readInt(), parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zAddContactToGroup ? 1 : 0);
                    return true;
                case 16:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zRemoveContactFromGroup = removeContactFromGroup(parcel.readInt(), parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zRemoveContactFromGroup ? 1 : 0);
                    return true;
                case 17:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zUpdateContactToGroups = updateContactToGroups(parcel.readInt(), parcel.readInt(), parcel.createIntArray());
                    parcel2.writeNoException();
                    parcel2.writeInt(zUpdateContactToGroups ? 1 : 0);
                    return true;
                case 18:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zMoveContactFromGroupsToGroups = moveContactFromGroupsToGroups(parcel.readInt(), parcel.readInt(), parcel.createIntArray(), parcel.createIntArray());
                    parcel2.writeNoException();
                    parcel2.writeInt(zMoveContactFromGroupsToGroups ? 1 : 0);
                    return true;
                case 19:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iHasExistGroup = hasExistGroup(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iHasExistGroup);
                    return true;
                case 20:
                    parcel.enforceInterface(DESCRIPTOR);
                    int usimGrpMaxNameLen = getUsimGrpMaxNameLen(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(usimGrpMaxNameLen);
                    return true;
                case 21:
                    parcel.enforceInterface(DESCRIPTOR);
                    int usimGrpMaxCount = getUsimGrpMaxCount(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(usimGrpMaxCount);
                    return true;
                case 22:
                    parcel.enforceInterface(DESCRIPTOR);
                    List<AlphaTag> usimAasList = getUsimAasList(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeTypedList(usimAasList);
                    return true;
                case 23:
                    parcel.enforceInterface(DESCRIPTOR);
                    String usimAasById = getUsimAasById(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(usimAasById);
                    return true;
                case 24:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iInsertUsimAas = insertUsimAas(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(iInsertUsimAas);
                    return true;
                case 25:
                    parcel.enforceInterface(DESCRIPTOR);
                    int anrCount = getAnrCount(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(anrCount);
                    return true;
                case 26:
                    parcel.enforceInterface(DESCRIPTOR);
                    int emailCount = getEmailCount(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(emailCount);
                    return true;
                case 27:
                    parcel.enforceInterface(DESCRIPTOR);
                    int usimAasMaxCount = getUsimAasMaxCount(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(usimAasMaxCount);
                    return true;
                case 28:
                    parcel.enforceInterface(DESCRIPTOR);
                    int usimAasMaxNameLen = getUsimAasMaxNameLen(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(usimAasMaxNameLen);
                    return true;
                case 29:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zUpdateUsimAas = updateUsimAas(parcel.readInt(), parcel.readInt(), parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(zUpdateUsimAas ? 1 : 0);
                    return true;
                case 30:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zRemoveUsimAasById = removeUsimAasById(parcel.readInt(), parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zRemoveUsimAasById ? 1 : 0);
                    return true;
                case 31:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zHasSne = hasSne(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zHasSne ? 1 : 0);
                    return true;
                case 32:
                    parcel.enforceInterface(DESCRIPTOR);
                    int sneRecordLen = getSneRecordLen(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(sneRecordLen);
                    return true;
                case 33:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsAdnAccessible = isAdnAccessible(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsAdnAccessible ? 1 : 0);
                    return true;
                case TRANSACTION_getPhonebookMemStorageExt /* 34 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    UsimPBMemInfo[] phonebookMemStorageExt = getPhonebookMemStorageExt(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeTypedArray(phonebookMemStorageExt, 1);
                    return true;
                case TRANSACTION_getUpbDone /* 35 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int upbDone = getUpbDone(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(upbDone);
                    return true;
                case TRANSACTION_getAdnRecordsCapacity /* 36 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int[] adnRecordsCapacity = getAdnRecordsCapacity();
                    parcel2.writeNoException();
                    parcel2.writeIntArray(adnRecordsCapacity);
                    return true;
                case TRANSACTION_getAdnRecordsCapacityForSubscriber /* 37 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    int[] adnRecordsCapacityForSubscriber = getAdnRecordsCapacityForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeIntArray(adnRecordsCapacityForSubscriber);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    boolean addContactToGroup(int i, int i2, int i3) throws RemoteException;

    int[] getAdnRecordsCapacity() throws RemoteException;

    int[] getAdnRecordsCapacityForSubscriber(int i) throws RemoteException;

    List<MtkAdnRecord> getAdnRecordsInEf(int i) throws RemoteException;

    List<MtkAdnRecord> getAdnRecordsInEfForSubscriber(int i, int i2) throws RemoteException;

    int getAnrCount(int i) throws RemoteException;

    int getEmailCount(int i) throws RemoteException;

    UsimPBMemInfo[] getPhonebookMemStorageExt(int i) throws RemoteException;

    int getSneRecordLen(int i) throws RemoteException;

    int getUpbDone(int i) throws RemoteException;

    String getUsimAasById(int i, int i2) throws RemoteException;

    List<AlphaTag> getUsimAasList(int i) throws RemoteException;

    int getUsimAasMaxCount(int i) throws RemoteException;

    int getUsimAasMaxNameLen(int i) throws RemoteException;

    String getUsimGroupById(int i, int i2) throws RemoteException;

    List<UsimGroup> getUsimGroups(int i) throws RemoteException;

    int getUsimGrpMaxCount(int i) throws RemoteException;

    int getUsimGrpMaxNameLen(int i) throws RemoteException;

    int hasExistGroup(int i, String str) throws RemoteException;

    boolean hasSne(int i) throws RemoteException;

    int insertUsimAas(int i, String str) throws RemoteException;

    int insertUsimGroup(int i, String str) throws RemoteException;

    boolean isAdnAccessible(int i) throws RemoteException;

    boolean isPhbReady(int i) throws RemoteException;

    boolean moveContactFromGroupsToGroups(int i, int i2, int[] iArr, int[] iArr2) throws RemoteException;

    boolean removeContactFromGroup(int i, int i2, int i3) throws RemoteException;

    boolean removeUsimAasById(int i, int i2, int i3) throws RemoteException;

    boolean removeUsimGroupById(int i, int i2) throws RemoteException;

    int updateAdnRecordsInEfByIndexWithError(int i, int i2, String str, String str2, int i3, String str3) throws RemoteException;

    int updateAdnRecordsInEfBySearchWithError(int i, int i2, String str, String str2, String str3, String str4, String str5) throws RemoteException;

    boolean updateContactToGroups(int i, int i2, int[] iArr) throws RemoteException;

    boolean updateUsimAas(int i, int i2, int i3, String str) throws RemoteException;

    int updateUsimGroup(int i, int i2, String str) throws RemoteException;

    int updateUsimPBRecordsByIndexWithError(int i, int i2, MtkAdnRecord mtkAdnRecord, int i3) throws RemoteException;

    int updateUsimPBRecordsBySearchWithError(int i, int i2, MtkAdnRecord mtkAdnRecord, MtkAdnRecord mtkAdnRecord2) throws RemoteException;

    int updateUsimPBRecordsInEfByIndexWithError(int i, int i2, String str, String str2, String str3, String str4, String[] strArr, int i3) throws RemoteException;

    int updateUsimPBRecordsInEfBySearchWithError(int i, int i2, String str, String str2, String str3, String str4, String[] strArr, String str5, String str6, String str7, String str8, String[] strArr2) throws RemoteException;
}
