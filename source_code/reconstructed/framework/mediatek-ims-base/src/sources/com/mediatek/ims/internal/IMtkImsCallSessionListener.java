package com.mediatek.ims.internal;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.telephony.ims.ImsCallProfile;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkImsCallSessionListener extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.ims.internal.IMtkImsCallSessionListener";

    public static class Default implements IMtkImsCallSessionListener {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
        public void callSessionBusy(IMtkImsCallSession iMtkImsCallSession) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
        public void callSessionCalling(IMtkImsCallSession iMtkImsCallSession) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
        public void callSessionMergeComplete(IMtkImsCallSession iMtkImsCallSession) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
        public void callSessionMergeStarted(IMtkImsCallSession iMtkImsCallSession, IMtkImsCallSession iMtkImsCallSession2, ImsCallProfile imsCallProfile) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
        public void callSessionNotificationRingtoneReceived(IMtkImsCallSession iMtkImsCallSession, int i, String str) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
        public void callSessionRedialEcc(IMtkImsCallSession iMtkImsCallSession, boolean z) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
        public void callSessionRinging(IMtkImsCallSession iMtkImsCallSession, ImsCallProfile imsCallProfile) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
        public void callSessionRttEventReceived(IMtkImsCallSession iMtkImsCallSession, int i) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
        public void callSessionTextCapabilityChanged(IMtkImsCallSession iMtkImsCallSession, int i, int i2, int i3, int i4) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
        public void callSessionVideoRingtoneEventReceived(IMtkImsCallSession iMtkImsCallSession, int i, String str) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IMtkImsCallSessionListener {
        static final int TRANSACTION_callSessionBusy = 7;
        static final int TRANSACTION_callSessionCalling = 8;
        static final int TRANSACTION_callSessionMergeComplete = 4;
        static final int TRANSACTION_callSessionMergeStarted = 3;
        static final int TRANSACTION_callSessionNotificationRingtoneReceived = 10;
        static final int TRANSACTION_callSessionRedialEcc = 5;
        static final int TRANSACTION_callSessionRinging = 6;
        static final int TRANSACTION_callSessionRttEventReceived = 2;
        static final int TRANSACTION_callSessionTextCapabilityChanged = 1;
        static final int TRANSACTION_callSessionVideoRingtoneEventReceived = 9;

        private static class Proxy implements IMtkImsCallSessionListener {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
            public void callSessionBusy(IMtkImsCallSession iMtkImsCallSession) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSessionListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsCallSession);
                    this.mRemote.transact(7, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
            public void callSessionCalling(IMtkImsCallSession iMtkImsCallSession) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSessionListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsCallSession);
                    this.mRemote.transact(Stub.TRANSACTION_callSessionCalling, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
            public void callSessionMergeComplete(IMtkImsCallSession iMtkImsCallSession) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSessionListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsCallSession);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
            public void callSessionMergeStarted(IMtkImsCallSession iMtkImsCallSession, IMtkImsCallSession iMtkImsCallSession2, ImsCallProfile imsCallProfile) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSessionListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsCallSession);
                    parcelObtain.writeStrongInterface(iMtkImsCallSession2);
                    parcelObtain.writeTypedObject(imsCallProfile, 0);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
            public void callSessionNotificationRingtoneReceived(IMtkImsCallSession iMtkImsCallSession, int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSessionListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsCallSession);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(Stub.TRANSACTION_callSessionNotificationRingtoneReceived, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
            public void callSessionRedialEcc(IMtkImsCallSession iMtkImsCallSession, boolean z) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSessionListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsCallSession);
                    parcelObtain.writeBoolean(z);
                    this.mRemote.transact(5, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
            public void callSessionRinging(IMtkImsCallSession iMtkImsCallSession, ImsCallProfile imsCallProfile) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSessionListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsCallSession);
                    parcelObtain.writeTypedObject(imsCallProfile, 0);
                    this.mRemote.transact(6, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
            public void callSessionRttEventReceived(IMtkImsCallSession iMtkImsCallSession, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSessionListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsCallSession);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
            public void callSessionTextCapabilityChanged(IMtkImsCallSession iMtkImsCallSession, int i, int i2, int i3, int i4) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSessionListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsCallSession);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeInt(i3);
                    parcelObtain.writeInt(i4);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsCallSessionListener
            public void callSessionVideoRingtoneEventReceived(IMtkImsCallSession iMtkImsCallSession, int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsCallSessionListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsCallSession);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(Stub.TRANSACTION_callSessionVideoRingtoneEventReceived, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return IMtkImsCallSessionListener.DESCRIPTOR;
            }
        }

        public Stub() {
            attachInterface(this, IMtkImsCallSessionListener.DESCRIPTOR);
        }

        public static IMtkImsCallSessionListener asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IMtkImsCallSessionListener.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkImsCallSessionListener)) ? new Proxy(iBinder) : (IMtkImsCallSessionListener) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IMtkImsCallSessionListener.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IMtkImsCallSessionListener.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            IMtkImsCallSession iMtkImsCallSessionAsInterface = IMtkImsCallSession.Stub.asInterface(parcel.readStrongBinder());
                            int i3 = parcel.readInt();
                            int i4 = parcel.readInt();
                            int i5 = parcel.readInt();
                            int i6 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            callSessionTextCapabilityChanged(iMtkImsCallSessionAsInterface, i3, i4, i5, i6);
                            parcel2.writeNoException();
                            return true;
                        case 2:
                            IMtkImsCallSession iMtkImsCallSessionAsInterface2 = IMtkImsCallSession.Stub.asInterface(parcel.readStrongBinder());
                            int i7 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            callSessionRttEventReceived(iMtkImsCallSessionAsInterface2, i7);
                            parcel2.writeNoException();
                            return true;
                        case 3:
                            IMtkImsCallSession iMtkImsCallSessionAsInterface3 = IMtkImsCallSession.Stub.asInterface(parcel.readStrongBinder());
                            IMtkImsCallSession iMtkImsCallSessionAsInterface4 = IMtkImsCallSession.Stub.asInterface(parcel.readStrongBinder());
                            ImsCallProfile imsCallProfile = (ImsCallProfile) parcel.readTypedObject(ImsCallProfile.CREATOR);
                            parcel.enforceNoDataAvail();
                            callSessionMergeStarted(iMtkImsCallSessionAsInterface3, iMtkImsCallSessionAsInterface4, imsCallProfile);
                            parcel2.writeNoException();
                            return true;
                        case 4:
                            IMtkImsCallSession iMtkImsCallSessionAsInterface5 = IMtkImsCallSession.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            callSessionMergeComplete(iMtkImsCallSessionAsInterface5);
                            parcel2.writeNoException();
                            return true;
                        case 5:
                            IMtkImsCallSession iMtkImsCallSessionAsInterface6 = IMtkImsCallSession.Stub.asInterface(parcel.readStrongBinder());
                            boolean z = parcel.readBoolean();
                            parcel.enforceNoDataAvail();
                            callSessionRedialEcc(iMtkImsCallSessionAsInterface6, z);
                            parcel2.writeNoException();
                            return true;
                        case 6:
                            IMtkImsCallSession iMtkImsCallSessionAsInterface7 = IMtkImsCallSession.Stub.asInterface(parcel.readStrongBinder());
                            ImsCallProfile imsCallProfile2 = (ImsCallProfile) parcel.readTypedObject(ImsCallProfile.CREATOR);
                            parcel.enforceNoDataAvail();
                            callSessionRinging(iMtkImsCallSessionAsInterface7, imsCallProfile2);
                            parcel2.writeNoException();
                            return true;
                        case 7:
                            IMtkImsCallSession iMtkImsCallSessionAsInterface8 = IMtkImsCallSession.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            callSessionBusy(iMtkImsCallSessionAsInterface8);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_callSessionCalling /* 8 */:
                            IMtkImsCallSession iMtkImsCallSessionAsInterface9 = IMtkImsCallSession.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            callSessionCalling(iMtkImsCallSessionAsInterface9);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_callSessionVideoRingtoneEventReceived /* 9 */:
                            IMtkImsCallSession iMtkImsCallSessionAsInterface10 = IMtkImsCallSession.Stub.asInterface(parcel.readStrongBinder());
                            int i8 = parcel.readInt();
                            String string = parcel.readString();
                            parcel.enforceNoDataAvail();
                            callSessionVideoRingtoneEventReceived(iMtkImsCallSessionAsInterface10, i8, string);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_callSessionNotificationRingtoneReceived /* 10 */:
                            IMtkImsCallSession iMtkImsCallSessionAsInterface11 = IMtkImsCallSession.Stub.asInterface(parcel.readStrongBinder());
                            int i9 = parcel.readInt();
                            String string2 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            callSessionNotificationRingtoneReceived(iMtkImsCallSessionAsInterface11, i9, string2);
                            parcel2.writeNoException();
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void callSessionBusy(IMtkImsCallSession iMtkImsCallSession) throws RemoteException;

    void callSessionCalling(IMtkImsCallSession iMtkImsCallSession) throws RemoteException;

    void callSessionMergeComplete(IMtkImsCallSession iMtkImsCallSession) throws RemoteException;

    void callSessionMergeStarted(IMtkImsCallSession iMtkImsCallSession, IMtkImsCallSession iMtkImsCallSession2, ImsCallProfile imsCallProfile) throws RemoteException;

    void callSessionNotificationRingtoneReceived(IMtkImsCallSession iMtkImsCallSession, int i, String str) throws RemoteException;

    void callSessionRedialEcc(IMtkImsCallSession iMtkImsCallSession, boolean z) throws RemoteException;

    void callSessionRinging(IMtkImsCallSession iMtkImsCallSession, ImsCallProfile imsCallProfile) throws RemoteException;

    void callSessionRttEventReceived(IMtkImsCallSession iMtkImsCallSession, int i) throws RemoteException;

    void callSessionTextCapabilityChanged(IMtkImsCallSession iMtkImsCallSession, int i, int i2, int i3, int i4) throws RemoteException;

    void callSessionVideoRingtoneEventReceived(IMtkImsCallSession iMtkImsCallSession, int i, String str) throws RemoteException;
}
