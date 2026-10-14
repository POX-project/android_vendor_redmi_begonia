package com.mediatek.ims.internal;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.telephony.ims.ImsCallProfile;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkImsCallSession extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.ims.internal.IMtkImsCallSession";

    public static class Default implements IMtkImsCallSession {
        @Override // com.mediatek.ims.internal.IMtkImsCallSession
        public void approveEccRedial(boolean z) throws RemoteException {
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSession
        public void callTerminated() throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSession
        public void close() throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSession
        public String getCallId() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSession
        public ImsCallProfile getCallProfile() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSession
        public String getHeaderCallId() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSession
        public boolean isIncomingCallMultiparty() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSession
        public void removeLastParticipant() throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSession
        public void resume() throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSession
        public void setImsCallMode(int i) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSession
        public void videoRingtoneOperation(int i, String str) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IMtkImsCallSession {
        static final int TRANSACTION_approveEccRedial = 10;
        static final int TRANSACTION_callTerminated = 6;
        static final int TRANSACTION_close = 1;
        static final int TRANSACTION_getCallId = 2;
        static final int TRANSACTION_getCallProfile = 3;
        static final int TRANSACTION_getHeaderCallId = 7;
        static final int TRANSACTION_isIncomingCallMultiparty = 4;
        static final int TRANSACTION_removeLastParticipant = 8;
        static final int TRANSACTION_resume = 5;
        static final int TRANSACTION_setImsCallMode = 9;
        static final int TRANSACTION_videoRingtoneOperation = 11;

        private static class Proxy implements IMtkImsCallSession {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSession
            public void approveEccRedial(boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSession.DESCRIPTOR);
                    parcelObtain.writeBoolean(z);
                    this.mRemote.transact(Stub.TRANSACTION_approveEccRedial, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSession
            public void callTerminated() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSession.DESCRIPTOR);
                    this.mRemote.transact(6, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSession
            public void close() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSession.DESCRIPTOR);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSession
            public String getCallId() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSession.DESCRIPTOR);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSession
            public ImsCallProfile getCallProfile() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSession.DESCRIPTOR);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return (ImsCallProfile) parcelObtain2.readTypedObject(ImsCallProfile.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSession
            public String getHeaderCallId() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSession.DESCRIPTOR);
                    this.mRemote.transact(7, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return IMtkImsCallSession.DESCRIPTOR;
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSession
            public boolean isIncomingCallMultiparty() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSession.DESCRIPTOR);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSession
            public void removeLastParticipant() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSession.DESCRIPTOR);
                    this.mRemote.transact(Stub.TRANSACTION_removeLastParticipant, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSession
            public void resume() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSession.DESCRIPTOR);
                    this.mRemote.transact(5, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSession
            public void setImsCallMode(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSession.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_setImsCallMode, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSession
            public void videoRingtoneOperation(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSession.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(Stub.TRANSACTION_videoRingtoneOperation, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IMtkImsCallSession.DESCRIPTOR);
        }

        public static IMtkImsCallSession asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IMtkImsCallSession.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkImsCallSession)) ? new Proxy(iBinder) : (IMtkImsCallSession) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IMtkImsCallSession.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IMtkImsCallSession.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            close();
                            parcel2.writeNoException();
                            return true;
                        case 2:
                            String callId = getCallId();
                            parcel2.writeNoException();
                            parcel2.writeString(callId);
                            return true;
                        case 3:
                            ImsCallProfile callProfile = getCallProfile();
                            parcel2.writeNoException();
                            parcel2.writeTypedObject(callProfile, 1);
                            return true;
                        case 4:
                            boolean zIsIncomingCallMultiparty = isIncomingCallMultiparty();
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zIsIncomingCallMultiparty);
                            return true;
                        case 5:
                            resume();
                            parcel2.writeNoException();
                            return true;
                        case 6:
                            callTerminated();
                            parcel2.writeNoException();
                            return true;
                        case 7:
                            String headerCallId = getHeaderCallId();
                            parcel2.writeNoException();
                            parcel2.writeString(headerCallId);
                            return true;
                        case TRANSACTION_removeLastParticipant /* 8 */:
                            removeLastParticipant();
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_setImsCallMode /* 9 */:
                            int i3 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            setImsCallMode(i3);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_approveEccRedial /* 10 */:
                            boolean z = parcel.readBoolean();
                            parcel.enforceNoDataAvail();
                            approveEccRedial(z);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_videoRingtoneOperation /* 11 */:
                            int i4 = parcel.readInt();
                            String string = parcel.readString();
                            parcel.enforceNoDataAvail();
                            videoRingtoneOperation(i4, string);
                            parcel2.writeNoException();
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void approveEccRedial(boolean z) throws RemoteException;

    void callTerminated() throws RemoteException;

    void close() throws RemoteException;

    String getCallId() throws RemoteException;

    ImsCallProfile getCallProfile() throws RemoteException;

    String getHeaderCallId() throws RemoteException;

    boolean isIncomingCallMultiparty() throws RemoteException;

    void removeLastParticipant() throws RemoteException;

    void resume() throws RemoteException;

    void setImsCallMode(int i) throws RemoteException;

    void videoRingtoneOperation(int i, String str) throws RemoteException;
}
