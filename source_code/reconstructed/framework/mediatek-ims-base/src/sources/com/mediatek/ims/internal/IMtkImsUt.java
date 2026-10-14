package com.mediatek.ims.internal;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Message;
import android.os.Messenger;
import android.os.Parcel;
import android.os.RemoteException;
import com.android.ims.internal.IImsUt;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkImsUt extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.ims.internal.IMtkImsUt";

    public static class Default implements IMtkImsUt {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsUt
        public String getUtIMPUFromNetwork() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsUt
        public IImsUt getUtInterface(int i) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsUt
        public String getXcapConflictErrorMessage() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsUt
        public boolean isSupportCFT() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.ims.internal.IMtkImsUt
        public void processECT(Message message, Messenger messenger) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsUt
        public int queryCFForServiceClass(int i, String str, int i2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsUt
        public int queryCallForwardInTimeSlot(int i) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsUt
        public void setListener(IMtkImsUtListener iMtkImsUtListener) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsUt
        public void setupXcapUserAgentString(String str) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsUt
        public int updateCallBarringForServiceClass(String str, int i, int i2, String[] strArr, int i3) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.ims.internal.IMtkImsUt
        public int updateCallForwardInTimeSlot(int i, int i2, String str, int i3, long[] jArr) throws RemoteException {
            return 0;
        }
    }

    public static abstract class Stub extends Binder implements IMtkImsUt {
        static final int TRANSACTION_getUtIMPUFromNetwork = 3;
        static final int TRANSACTION_getUtInterface = 2;
        static final int TRANSACTION_getXcapConflictErrorMessage = 10;
        static final int TRANSACTION_isSupportCFT = 8;
        static final int TRANSACTION_processECT = 7;
        static final int TRANSACTION_queryCFForServiceClass = 11;
        static final int TRANSACTION_queryCallForwardInTimeSlot = 4;
        static final int TRANSACTION_setListener = 1;
        static final int TRANSACTION_setupXcapUserAgentString = 9;
        static final int TRANSACTION_updateCallBarringForServiceClass = 6;
        static final int TRANSACTION_updateCallForwardInTimeSlot = 5;

        private static class Proxy implements IMtkImsUt {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return IMtkImsUt.DESCRIPTOR;
            }

            @Override // com.mediatek.ims.internal.IMtkImsUt
            public String getUtIMPUFromNetwork() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUt.DESCRIPTOR);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsUt
            public IImsUt getUtInterface(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUt.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return IImsUt.Stub.asInterface(parcelObtain2.readStrongBinder());
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsUt
            public String getXcapConflictErrorMessage() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUt.DESCRIPTOR);
                    this.mRemote.transact(Stub.TRANSACTION_getXcapConflictErrorMessage, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsUt
            public boolean isSupportCFT() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUt.DESCRIPTOR);
                    this.mRemote.transact(Stub.TRANSACTION_isSupportCFT, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsUt
            public void processECT(Message message, Messenger messenger) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUt.DESCRIPTOR);
                    parcelObtain.writeTypedObject(message, 0);
                    parcelObtain.writeTypedObject(messenger, 0);
                    this.mRemote.transact(7, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsUt
            public int queryCFForServiceClass(int i, String str, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUt.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i2);
                    this.mRemote.transact(Stub.TRANSACTION_queryCFForServiceClass, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsUt
            public int queryCallForwardInTimeSlot(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUt.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsUt
            public void setListener(IMtkImsUtListener iMtkImsUtListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUt.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsUtListener);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsUt
            public void setupXcapUserAgentString(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUt.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(Stub.TRANSACTION_setupXcapUserAgentString, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsUt
            public int updateCallBarringForServiceClass(String str, int i, int i2, String[] strArr, int i3) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUt.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeStringArray(strArr);
                    parcelObtain.writeInt(i3);
                    this.mRemote.transact(6, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsUt
            public int updateCallForwardInTimeSlot(int i, int i2, String str, int i3, long[] jArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUt.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i3);
                    parcelObtain.writeLongArray(jArr);
                    this.mRemote.transact(5, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IMtkImsUt.DESCRIPTOR);
        }

        public static IMtkImsUt asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IMtkImsUt.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkImsUt)) ? new Proxy(iBinder) : (IMtkImsUt) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IMtkImsUt.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IMtkImsUt.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            IMtkImsUtListener iMtkImsUtListenerAsInterface = IMtkImsUtListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            setListener(iMtkImsUtListenerAsInterface);
                            parcel2.writeNoException();
                            return true;
                        case 2:
                            int i3 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            IImsUt utInterface = getUtInterface(i3);
                            parcel2.writeNoException();
                            parcel2.writeStrongInterface(utInterface);
                            return true;
                        case 3:
                            String utIMPUFromNetwork = getUtIMPUFromNetwork();
                            parcel2.writeNoException();
                            parcel2.writeString(utIMPUFromNetwork);
                            return true;
                        case 4:
                            int i4 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int iQueryCallForwardInTimeSlot = queryCallForwardInTimeSlot(i4);
                            parcel2.writeNoException();
                            parcel2.writeInt(iQueryCallForwardInTimeSlot);
                            return true;
                        case 5:
                            int i5 = parcel.readInt();
                            int i6 = parcel.readInt();
                            String string = parcel.readString();
                            int i7 = parcel.readInt();
                            long[] jArrCreateLongArray = parcel.createLongArray();
                            parcel.enforceNoDataAvail();
                            int iUpdateCallForwardInTimeSlot = updateCallForwardInTimeSlot(i5, i6, string, i7, jArrCreateLongArray);
                            parcel2.writeNoException();
                            parcel2.writeInt(iUpdateCallForwardInTimeSlot);
                            return true;
                        case 6:
                            String string2 = parcel.readString();
                            int i8 = parcel.readInt();
                            int i9 = parcel.readInt();
                            String[] strArrCreateStringArray = parcel.createStringArray();
                            int i10 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int iUpdateCallBarringForServiceClass = updateCallBarringForServiceClass(string2, i8, i9, strArrCreateStringArray, i10);
                            parcel2.writeNoException();
                            parcel2.writeInt(iUpdateCallBarringForServiceClass);
                            return true;
                        case 7:
                            Message message = (Message) parcel.readTypedObject(Message.CREATOR);
                            Messenger messenger = (Messenger) parcel.readTypedObject(Messenger.CREATOR);
                            parcel.enforceNoDataAvail();
                            processECT(message, messenger);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_isSupportCFT /* 8 */:
                            boolean zIsSupportCFT = isSupportCFT();
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zIsSupportCFT);
                            return true;
                        case TRANSACTION_setupXcapUserAgentString /* 9 */:
                            String string3 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            setupXcapUserAgentString(string3);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_getXcapConflictErrorMessage /* 10 */:
                            String xcapConflictErrorMessage = getXcapConflictErrorMessage();
                            parcel2.writeNoException();
                            parcel2.writeString(xcapConflictErrorMessage);
                            return true;
                        case TRANSACTION_queryCFForServiceClass /* 11 */:
                            int i11 = parcel.readInt();
                            String string4 = parcel.readString();
                            int i12 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            int iQueryCFForServiceClass = queryCFForServiceClass(i11, string4, i12);
                            parcel2.writeNoException();
                            parcel2.writeInt(iQueryCFForServiceClass);
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    String getUtIMPUFromNetwork() throws RemoteException;

    IImsUt getUtInterface(int i) throws RemoteException;

    String getXcapConflictErrorMessage() throws RemoteException;

    boolean isSupportCFT() throws RemoteException;

    void processECT(Message message, Messenger messenger) throws RemoteException;

    int queryCFForServiceClass(int i, String str, int i2) throws RemoteException;

    int queryCallForwardInTimeSlot(int i) throws RemoteException;

    void setListener(IMtkImsUtListener iMtkImsUtListener) throws RemoteException;

    void setupXcapUserAgentString(String str) throws RemoteException;

    int updateCallBarringForServiceClass(String str, int i, int i2, String[] strArr, int i3) throws RemoteException;

    int updateCallForwardInTimeSlot(int i, int i2, String str, int i3, long[] jArr) throws RemoteException;
}
