package com.mediatek.internal.telephony;

import android.app.PendingIntent;
import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import com.android.internal.telephony.SmsRawData;
import java.util.List;
import mediatek.telephony.MtkSimSmsInsertStatus;
import mediatek.telephony.MtkSmsParameters;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkSms extends IInterface {

    public static class Default implements IMtkSms {
        @Override // com.mediatek.internal.telephony.IMtkSms
        public boolean activateCellBroadcastSmsForSubscriber(int i, boolean z) throws RemoteException {
            return false;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public int copyTextMessageToIccCardForSubscriber(int i, String str, String str2, String str3, List<String> list, int i2, long j) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public List<SmsRawData> getAllMessagesFromIccEfByModeForSubscriber(int i, String str, int i2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public String getCellBroadcastLangsForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public String getCellBroadcastRangesForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public SmsRawData getMessageFromIccEfForSubscriber(int i, String str, int i2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public String getScAddressForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public Bundle getScAddressWithErrorCodeForSubscriber(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public MtkSmsParameters getSmsParametersForSubscriber(int i, String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public MtkIccSmsStorageStatus getSmsSimMemoryStatusForSubscriber(int i, String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public MtkSimSmsInsertStatus insertRawMessageToIccCardForSubscriber(int i, String str, int i2, byte[] bArr, byte[] bArr2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public MtkSimSmsInsertStatus insertTextMessageToIccCardForSubscriber(int i, String str, String str2, String str3, List<String> list, int i2, long j) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public boolean isSmsReadyForSubscriber(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public boolean queryCellBroadcastSmsActivationForSubscriber(int i) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public boolean removeCellBroadcastMsgForSubscriber(int i, int i2, int i3) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public void sendDataWithOriginalPortForSubscriber(int i, String str, String str2, String str3, int i2, int i3, byte[] bArr, PendingIntent pendingIntent, PendingIntent pendingIntent2) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public void sendMultipartTextWithEncodingTypeForSubscriber(int i, String str, String str2, String str3, List<String> list, int i2, List<PendingIntent> list2, List<PendingIntent> list3, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public void sendMultipartTextWithExtraParamsForSubscriber(int i, String str, String str2, String str3, List<String> list, Bundle bundle, List<PendingIntent> list2, List<PendingIntent> list3, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public void sendTextWithEncodingTypeForSubscriber(int i, String str, String str2, String str3, String str4, int i2, PendingIntent pendingIntent, PendingIntent pendingIntent2, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public void sendTextWithExtraParamsForSubscriber(int i, String str, String str2, String str3, String str4, Bundle bundle, PendingIntent pendingIntent, PendingIntent pendingIntent2, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public boolean setCellBroadcastLangsForSubscriber(int i, String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public boolean setEtwsConfigForSubscriber(int i, int i2) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public boolean setScAddressForSubscriber(int i, String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public void setSmsMemoryStatusForSubscriber(int i, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.internal.telephony.IMtkSms
        public boolean setSmsParametersForSubscriber(int i, String str, MtkSmsParameters mtkSmsParameters) throws RemoteException {
            return false;
        }
    }

    public static abstract class Stub extends Binder implements IMtkSms {
        private static final String DESCRIPTOR = "com.mediatek.internal.telephony.IMtkSms";
        static final int TRANSACTION_activateCellBroadcastSmsForSubscriber = 17;
        static final int TRANSACTION_copyTextMessageToIccCardForSubscriber = 2;
        static final int TRANSACTION_getAllMessagesFromIccEfByModeForSubscriber = 1;
        static final int TRANSACTION_getCellBroadcastLangsForSubscriber = 22;
        static final int TRANSACTION_getCellBroadcastRangesForSubscriber = 20;
        static final int TRANSACTION_getMessageFromIccEfForSubscriber = 15;
        static final int TRANSACTION_getScAddressForSubscriber = 23;
        static final int TRANSACTION_getScAddressWithErrorCodeForSubscriber = 24;
        static final int TRANSACTION_getSmsParametersForSubscriber = 13;
        static final int TRANSACTION_getSmsSimMemoryStatusForSubscriber = 6;
        static final int TRANSACTION_insertRawMessageToIccCardForSubscriber = 10;
        static final int TRANSACTION_insertTextMessageToIccCardForSubscriber = 9;
        static final int TRANSACTION_isSmsReadyForSubscriber = 4;
        static final int TRANSACTION_queryCellBroadcastSmsActivationForSubscriber = 16;
        static final int TRANSACTION_removeCellBroadcastMsgForSubscriber = 18;
        static final int TRANSACTION_sendDataWithOriginalPortForSubscriber = 3;
        static final int TRANSACTION_sendMultipartTextWithEncodingTypeForSubscriber = 8;
        static final int TRANSACTION_sendMultipartTextWithExtraParamsForSubscriber = 12;
        static final int TRANSACTION_sendTextWithEncodingTypeForSubscriber = 7;
        static final int TRANSACTION_sendTextWithExtraParamsForSubscriber = 11;
        static final int TRANSACTION_setCellBroadcastLangsForSubscriber = 21;
        static final int TRANSACTION_setEtwsConfigForSubscriber = 19;
        static final int TRANSACTION_setScAddressForSubscriber = 25;
        static final int TRANSACTION_setSmsMemoryStatusForSubscriber = 5;
        static final int TRANSACTION_setSmsParametersForSubscriber = 14;

        private static class Proxy implements IMtkSms {
            public static IMtkSms sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public boolean activateCellBroadcastSmsForSubscriber(int i, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (!this.mRemote.transact(17, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().activateCellBroadcastSmsForSubscriber(i, z);
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

            @Override // com.mediatek.internal.telephony.IMtkSms
            public int copyTextMessageToIccCardForSubscriber(int i, String str, String str2, String str3, List<String> list, int i2, long j) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        try {
                            parcelObtain.writeString(str);
                            try {
                                parcelObtain.writeString(str2);
                                try {
                                    parcelObtain.writeString(str3);
                                    parcelObtain.writeStringList(list);
                                    parcelObtain.writeInt(i2);
                                    parcelObtain.writeLong(j);
                                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                                        int iCopyTextMessageToIccCardForSubscriber = Stub.getDefaultImpl().copyTextMessageToIccCardForSubscriber(i, str, str2, str3, list, i2, j);
                                        parcelObtain2.recycle();
                                        parcelObtain.recycle();
                                        return iCopyTextMessageToIccCardForSubscriber;
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
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public List<SmsRawData> getAllMessagesFromIccEfByModeForSubscriber(int i, String str, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAllMessagesFromIccEfByModeForSubscriber(i, str, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(SmsRawData.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public String getCellBroadcastLangsForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(22, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getCellBroadcastLangsForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public String getCellBroadcastRangesForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(20, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getCellBroadcastRangesForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public SmsRawData getMessageFromIccEfForSubscriber(int i, String str, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(15, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getMessageFromIccEfForSubscriber(i, str, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (SmsRawData) SmsRawData.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public String getScAddressForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(23, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getScAddressForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public Bundle getScAddressWithErrorCodeForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(24, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getScAddressWithErrorCodeForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (Bundle) Bundle.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public MtkSmsParameters getSmsParametersForSubscriber(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(13, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSmsParametersForSubscriber(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? MtkSmsParameters.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public MtkIccSmsStorageStatus getSmsSimMemoryStatusForSubscriber(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSmsSimMemoryStatusForSubscriber(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? MtkIccSmsStorageStatus.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public MtkSimSmsInsertStatus insertRawMessageToIccCardForSubscriber(int i, String str, int i2, byte[] bArr, byte[] bArr2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeByteArray(bArr);
                    parcelObtain.writeByteArray(bArr2);
                    if (!this.mRemote.transact(10, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().insertRawMessageToIccCardForSubscriber(i, str, i2, bArr, bArr2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? MtkSimSmsInsertStatus.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public MtkSimSmsInsertStatus insertTextMessageToIccCardForSubscriber(int i, String str, String str2, String str3, List<String> list, int i2, long j) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        try {
                            parcelObtain.writeString(str);
                            try {
                                parcelObtain.writeString(str2);
                                try {
                                    parcelObtain.writeString(str3);
                                    parcelObtain.writeStringList(list);
                                    parcelObtain.writeInt(i2);
                                    parcelObtain.writeLong(j);
                                    if (!this.mRemote.transact(9, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                                        MtkSimSmsInsertStatus mtkSimSmsInsertStatusInsertTextMessageToIccCardForSubscriber = Stub.getDefaultImpl().insertTextMessageToIccCardForSubscriber(i, str, str2, str3, list, i2, j);
                                        parcelObtain2.recycle();
                                        parcelObtain.recycle();
                                        return mtkSimSmsInsertStatusInsertTextMessageToIccCardForSubscriber;
                                    }
                                    parcelObtain2.readException();
                                    MtkSimSmsInsertStatus mtkSimSmsInsertStatusCreateFromParcel = parcelObtain2.readInt() != 0 ? MtkSimSmsInsertStatus.CREATOR.createFromParcel(parcelObtain2) : null;
                                    parcelObtain2.recycle();
                                    parcelObtain.recycle();
                                    return mtkSimSmsInsertStatusCreateFromParcel;
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

            @Override // com.mediatek.internal.telephony.IMtkSms
            public boolean isSmsReadyForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().isSmsReadyForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public boolean queryCellBroadcastSmsActivationForSubscriber(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(16, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().queryCellBroadcastSmsActivationForSubscriber(i);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public boolean removeCellBroadcastMsgForSubscriber(int i, int i2, int i3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    if (!this.mRemote.transact(18, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().removeCellBroadcastMsgForSubscriber(i, i2, i3);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public void sendDataWithOriginalPortForSubscriber(int i, String str, String str2, String str3, int i2, int i3, byte[] bArr, PendingIntent pendingIntent, PendingIntent pendingIntent2) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        parcelObtain.writeString(str);
                        parcelObtain.writeString(str2);
                        parcelObtain.writeString(str3);
                        parcelObtain.writeInt(i2);
                        parcelObtain.writeInt(i3);
                        parcelObtain.writeByteArray(bArr);
                        if (pendingIntent != null) {
                            parcelObtain.writeInt(1);
                            pendingIntent.writeToParcel(parcelObtain, 0);
                        } else {
                            parcelObtain.writeInt(0);
                        }
                        if (pendingIntent2 != null) {
                            parcelObtain.writeInt(1);
                            pendingIntent2.writeToParcel(parcelObtain, 0);
                        } else {
                            parcelObtain.writeInt(0);
                        }
                        if (this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                            parcelObtain2.readException();
                            parcelObtain2.recycle();
                            parcelObtain.recycle();
                        } else {
                            Stub.getDefaultImpl().sendDataWithOriginalPortForSubscriber(i, str, str2, str3, i2, i3, bArr, pendingIntent, pendingIntent2);
                            parcelObtain2.recycle();
                            parcelObtain.recycle();
                        }
                    } catch (Throwable th) {
                        th = th;
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        throw th;
                    }
                } catch (Throwable th2) {
                    th = th2;
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public void sendMultipartTextWithEncodingTypeForSubscriber(int i, String str, String str2, String str3, List<String> list, int i2, List<PendingIntent> list2, List<PendingIntent> list3, boolean z) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        try {
                            parcelObtain.writeString(str);
                            try {
                                parcelObtain.writeString(str2);
                                parcelObtain.writeString(str3);
                                parcelObtain.writeStringList(list);
                                parcelObtain.writeInt(i2);
                                parcelObtain.writeTypedList(list2);
                                parcelObtain.writeTypedList(list3);
                                parcelObtain.writeInt(z ? 1 : 0);
                                if (this.mRemote.transact(8, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                                    parcelObtain2.readException();
                                    parcelObtain2.recycle();
                                    parcelObtain.recycle();
                                } else {
                                    Stub.getDefaultImpl().sendMultipartTextWithEncodingTypeForSubscriber(i, str, str2, str3, list, i2, list2, list3, z);
                                    parcelObtain2.recycle();
                                    parcelObtain.recycle();
                                }
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
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public void sendMultipartTextWithExtraParamsForSubscriber(int i, String str, String str2, String str3, List<String> list, Bundle bundle, List<PendingIntent> list2, List<PendingIntent> list3, boolean z) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        try {
                            parcelObtain.writeString(str);
                            parcelObtain.writeString(str2);
                            parcelObtain.writeString(str3);
                            parcelObtain.writeStringList(list);
                            int i2 = 1;
                            if (bundle != null) {
                                parcelObtain.writeInt(1);
                                bundle.writeToParcel(parcelObtain, 0);
                            } else {
                                parcelObtain.writeInt(0);
                            }
                            parcelObtain.writeTypedList(list2);
                            parcelObtain.writeTypedList(list3);
                            if (!z) {
                                i2 = 0;
                            }
                            parcelObtain.writeInt(i2);
                            if (this.mRemote.transact(12, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                                parcelObtain2.readException();
                                parcelObtain2.recycle();
                                parcelObtain.recycle();
                            } else {
                                Stub.getDefaultImpl().sendMultipartTextWithExtraParamsForSubscriber(i, str, str2, str3, list, bundle, list2, list3, z);
                                parcelObtain2.recycle();
                                parcelObtain.recycle();
                            }
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
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public void sendTextWithEncodingTypeForSubscriber(int i, String str, String str2, String str3, String str4, int i2, PendingIntent pendingIntent, PendingIntent pendingIntent2, boolean z) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    try {
                        parcelObtain.writeInt(i);
                        parcelObtain.writeString(str);
                        parcelObtain.writeString(str2);
                        parcelObtain.writeString(str3);
                        parcelObtain.writeString(str4);
                        parcelObtain.writeInt(i2);
                        int i3 = 1;
                        if (pendingIntent != null) {
                            parcelObtain.writeInt(1);
                            pendingIntent.writeToParcel(parcelObtain, 0);
                        } else {
                            parcelObtain.writeInt(0);
                        }
                        if (pendingIntent2 != null) {
                            parcelObtain.writeInt(1);
                            pendingIntent2.writeToParcel(parcelObtain, 0);
                        } else {
                            parcelObtain.writeInt(0);
                        }
                        if (!z) {
                            i3 = 0;
                        }
                        parcelObtain.writeInt(i3);
                        if (this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                            parcelObtain2.readException();
                            parcelObtain2.recycle();
                            parcelObtain.recycle();
                        } else {
                            Stub.getDefaultImpl().sendTextWithEncodingTypeForSubscriber(i, str, str2, str3, str4, i2, pendingIntent, pendingIntent2, z);
                            parcelObtain2.recycle();
                            parcelObtain.recycle();
                        }
                    } catch (Throwable th) {
                        th = th;
                        parcelObtain2.recycle();
                        parcelObtain.recycle();
                        throw th;
                    }
                } catch (Throwable th2) {
                    th = th2;
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public void sendTextWithExtraParamsForSubscriber(int i, String str, String str2, String str3, String str4, Bundle bundle, PendingIntent pendingIntent, PendingIntent pendingIntent2, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeString(str3);
                    parcelObtain.writeString(str4);
                    int i2 = 1;
                    if (bundle != null) {
                        parcelObtain.writeInt(1);
                        bundle.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (pendingIntent != null) {
                        parcelObtain.writeInt(1);
                        pendingIntent.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (pendingIntent2 != null) {
                        parcelObtain.writeInt(1);
                        pendingIntent2.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!z) {
                        i2 = 0;
                    }
                    parcelObtain.writeInt(i2);
                    if (this.mRemote.transact(11, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().sendTextWithExtraParamsForSubscriber(i, str, str2, str3, str4, bundle, pendingIntent, pendingIntent2, z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public boolean setCellBroadcastLangsForSubscriber(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(21, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setCellBroadcastLangsForSubscriber(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public boolean setEtwsConfigForSubscriber(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(19, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setEtwsConfigForSubscriber(i, i2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public boolean setScAddressForSubscriber(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(Stub.TRANSACTION_setScAddressForSubscriber, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setScAddressForSubscriber(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public void setSmsMemoryStatusForSubscriber(int i, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(z ? 1 : 0);
                    if (this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) || Stub.getDefaultImpl() == null) {
                        parcelObtain2.readException();
                    } else {
                        Stub.getDefaultImpl().setSmsMemoryStatusForSubscriber(i, z);
                    }
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telephony.IMtkSms
            public boolean setSmsParametersForSubscriber(int i, String str, MtkSmsParameters mtkSmsParameters) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (mtkSmsParameters != null) {
                        parcelObtain.writeInt(1);
                        mtkSmsParameters.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(14, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setSmsParametersForSubscriber(i, str, mtkSmsParameters);
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

        public static IMtkSms asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkSms)) ? new Proxy(iBinder) : (IMtkSms) iInterfaceQueryLocalInterface;
        }

        public static IMtkSms getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMtkSms iMtkSms) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMtkSms == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMtkSms;
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
                    List<SmsRawData> allMessagesFromIccEfByModeForSubscriber = getAllMessagesFromIccEfByModeForSubscriber(parcel.readInt(), parcel.readString(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeTypedList(allMessagesFromIccEfByModeForSubscriber);
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iCopyTextMessageToIccCardForSubscriber = copyTextMessageToIccCardForSubscriber(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.createStringArrayList(), parcel.readInt(), parcel.readLong());
                    parcel2.writeNoException();
                    parcel2.writeInt(iCopyTextMessageToIccCardForSubscriber);
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendDataWithOriginalPortForSubscriber(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readInt(), parcel.readInt(), parcel.createByteArray(), parcel.readInt() != 0 ? (PendingIntent) PendingIntent.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? (PendingIntent) PendingIntent.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zIsSmsReadyForSubscriber = isSmsReadyForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zIsSmsReadyForSubscriber ? 1 : 0);
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    setSmsMemoryStatusForSubscriber(parcel.readInt(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    MtkIccSmsStorageStatus smsSimMemoryStatusForSubscriber = getSmsSimMemoryStatusForSubscriber(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    if (smsSimMemoryStatusForSubscriber != null) {
                        parcel2.writeInt(1);
                        smsSimMemoryStatusForSubscriber.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendTextWithEncodingTypeForSubscriber(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readInt(), parcel.readInt() != 0 ? (PendingIntent) PendingIntent.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? (PendingIntent) PendingIntent.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendMultipartTextWithEncodingTypeForSubscriber(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.createStringArrayList(), parcel.readInt(), parcel.createTypedArrayList(PendingIntent.CREATOR), parcel.createTypedArrayList(PendingIntent.CREATOR), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    MtkSimSmsInsertStatus mtkSimSmsInsertStatusInsertTextMessageToIccCardForSubscriber = insertTextMessageToIccCardForSubscriber(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.createStringArrayList(), parcel.readInt(), parcel.readLong());
                    parcel2.writeNoException();
                    if (mtkSimSmsInsertStatusInsertTextMessageToIccCardForSubscriber != null) {
                        parcel2.writeInt(1);
                        mtkSimSmsInsertStatusInsertTextMessageToIccCardForSubscriber.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 10:
                    parcel.enforceInterface(DESCRIPTOR);
                    MtkSimSmsInsertStatus mtkSimSmsInsertStatusInsertRawMessageToIccCardForSubscriber = insertRawMessageToIccCardForSubscriber(parcel.readInt(), parcel.readString(), parcel.readInt(), parcel.createByteArray(), parcel.createByteArray());
                    parcel2.writeNoException();
                    if (mtkSimSmsInsertStatusInsertRawMessageToIccCardForSubscriber != null) {
                        parcel2.writeInt(1);
                        mtkSimSmsInsertStatusInsertRawMessageToIccCardForSubscriber.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 11:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendTextWithExtraParamsForSubscriber(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.readInt() != 0 ? (Bundle) Bundle.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? (PendingIntent) PendingIntent.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? (PendingIntent) PendingIntent.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 12:
                    parcel.enforceInterface(DESCRIPTOR);
                    sendMultipartTextWithExtraParamsForSubscriber(parcel.readInt(), parcel.readString(), parcel.readString(), parcel.readString(), parcel.createStringArrayList(), parcel.readInt() != 0 ? (Bundle) Bundle.CREATOR.createFromParcel(parcel) : null, parcel.createTypedArrayList(PendingIntent.CREATOR), parcel.createTypedArrayList(PendingIntent.CREATOR), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    return true;
                case 13:
                    parcel.enforceInterface(DESCRIPTOR);
                    MtkSmsParameters smsParametersForSubscriber = getSmsParametersForSubscriber(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    if (smsParametersForSubscriber != null) {
                        parcel2.writeInt(1);
                        smsParametersForSubscriber.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 14:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean smsParametersForSubscriber2 = setSmsParametersForSubscriber(parcel.readInt(), parcel.readString(), parcel.readInt() != 0 ? MtkSmsParameters.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    parcel2.writeInt(smsParametersForSubscriber2 ? 1 : 0);
                    return true;
                case 15:
                    parcel.enforceInterface(DESCRIPTOR);
                    SmsRawData messageFromIccEfForSubscriber = getMessageFromIccEfForSubscriber(parcel.readInt(), parcel.readString(), parcel.readInt());
                    parcel2.writeNoException();
                    if (messageFromIccEfForSubscriber != null) {
                        parcel2.writeInt(1);
                        messageFromIccEfForSubscriber.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case 16:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zQueryCellBroadcastSmsActivationForSubscriber = queryCellBroadcastSmsActivationForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zQueryCellBroadcastSmsActivationForSubscriber ? 1 : 0);
                    return true;
                case 17:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zActivateCellBroadcastSmsForSubscriber = activateCellBroadcastSmsForSubscriber(parcel.readInt(), parcel.readInt() != 0);
                    parcel2.writeNoException();
                    parcel2.writeInt(zActivateCellBroadcastSmsForSubscriber ? 1 : 0);
                    return true;
                case 18:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean zRemoveCellBroadcastMsgForSubscriber = removeCellBroadcastMsgForSubscriber(parcel.readInt(), parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(zRemoveCellBroadcastMsgForSubscriber ? 1 : 0);
                    return true;
                case 19:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean etwsConfigForSubscriber = setEtwsConfigForSubscriber(parcel.readInt(), parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeInt(etwsConfigForSubscriber ? 1 : 0);
                    return true;
                case 20:
                    parcel.enforceInterface(DESCRIPTOR);
                    String cellBroadcastRangesForSubscriber = getCellBroadcastRangesForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(cellBroadcastRangesForSubscriber);
                    return true;
                case 21:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean cellBroadcastLangsForSubscriber = setCellBroadcastLangsForSubscriber(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(cellBroadcastLangsForSubscriber ? 1 : 0);
                    return true;
                case 22:
                    parcel.enforceInterface(DESCRIPTOR);
                    String cellBroadcastLangsForSubscriber2 = getCellBroadcastLangsForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(cellBroadcastLangsForSubscriber2);
                    return true;
                case 23:
                    parcel.enforceInterface(DESCRIPTOR);
                    String scAddressForSubscriber = getScAddressForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    parcel2.writeString(scAddressForSubscriber);
                    return true;
                case 24:
                    parcel.enforceInterface(DESCRIPTOR);
                    Bundle scAddressWithErrorCodeForSubscriber = getScAddressWithErrorCodeForSubscriber(parcel.readInt());
                    parcel2.writeNoException();
                    if (scAddressWithErrorCodeForSubscriber != null) {
                        parcel2.writeInt(1);
                        scAddressWithErrorCodeForSubscriber.writeToParcel(parcel2, 1);
                    } else {
                        parcel2.writeInt(0);
                    }
                    return true;
                case TRANSACTION_setScAddressForSubscriber /* 25 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    boolean scAddressForSubscriber2 = setScAddressForSubscriber(parcel.readInt(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(scAddressForSubscriber2 ? 1 : 0);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    boolean activateCellBroadcastSmsForSubscriber(int i, boolean z) throws RemoteException;

    int copyTextMessageToIccCardForSubscriber(int i, String str, String str2, String str3, List<String> list, int i2, long j) throws RemoteException;

    List<SmsRawData> getAllMessagesFromIccEfByModeForSubscriber(int i, String str, int i2) throws RemoteException;

    String getCellBroadcastLangsForSubscriber(int i) throws RemoteException;

    String getCellBroadcastRangesForSubscriber(int i) throws RemoteException;

    SmsRawData getMessageFromIccEfForSubscriber(int i, String str, int i2) throws RemoteException;

    String getScAddressForSubscriber(int i) throws RemoteException;

    Bundle getScAddressWithErrorCodeForSubscriber(int i) throws RemoteException;

    MtkSmsParameters getSmsParametersForSubscriber(int i, String str) throws RemoteException;

    MtkIccSmsStorageStatus getSmsSimMemoryStatusForSubscriber(int i, String str) throws RemoteException;

    MtkSimSmsInsertStatus insertRawMessageToIccCardForSubscriber(int i, String str, int i2, byte[] bArr, byte[] bArr2) throws RemoteException;

    MtkSimSmsInsertStatus insertTextMessageToIccCardForSubscriber(int i, String str, String str2, String str3, List<String> list, int i2, long j) throws RemoteException;

    boolean isSmsReadyForSubscriber(int i) throws RemoteException;

    boolean queryCellBroadcastSmsActivationForSubscriber(int i) throws RemoteException;

    boolean removeCellBroadcastMsgForSubscriber(int i, int i2, int i3) throws RemoteException;

    void sendDataWithOriginalPortForSubscriber(int i, String str, String str2, String str3, int i2, int i3, byte[] bArr, PendingIntent pendingIntent, PendingIntent pendingIntent2) throws RemoteException;

    void sendMultipartTextWithEncodingTypeForSubscriber(int i, String str, String str2, String str3, List<String> list, int i2, List<PendingIntent> list2, List<PendingIntent> list3, boolean z) throws RemoteException;

    void sendMultipartTextWithExtraParamsForSubscriber(int i, String str, String str2, String str3, List<String> list, Bundle bundle, List<PendingIntent> list2, List<PendingIntent> list3, boolean z) throws RemoteException;

    void sendTextWithEncodingTypeForSubscriber(int i, String str, String str2, String str3, String str4, int i2, PendingIntent pendingIntent, PendingIntent pendingIntent2, boolean z) throws RemoteException;

    void sendTextWithExtraParamsForSubscriber(int i, String str, String str2, String str3, String str4, Bundle bundle, PendingIntent pendingIntent, PendingIntent pendingIntent2, boolean z) throws RemoteException;

    boolean setCellBroadcastLangsForSubscriber(int i, String str) throws RemoteException;

    boolean setEtwsConfigForSubscriber(int i, int i2) throws RemoteException;

    boolean setScAddressForSubscriber(int i, String str) throws RemoteException;

    void setSmsMemoryStatusForSubscriber(int i, boolean z) throws RemoteException;

    boolean setSmsParametersForSubscriber(int i, String str, MtkSmsParameters mtkSmsParameters) throws RemoteException;
}
