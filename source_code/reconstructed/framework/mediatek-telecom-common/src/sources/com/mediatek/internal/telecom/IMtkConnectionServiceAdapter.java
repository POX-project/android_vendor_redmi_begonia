package com.mediatek.internal.telecom;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.telecom.ConnectionRequest;
import android.telecom.DisconnectCause;
import android.telecom.Logging.Session;
import android.telecom.ParcelableConference;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkConnectionServiceAdapter extends IInterface {

    public static class Default implements IMtkConnectionServiceAdapter {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.internal.telecom.IMtkConnectionServiceAdapter
        public void handleCreateConferenceComplete(String str, ConnectionRequest connectionRequest, ParcelableConference parcelableConference, DisconnectCause disconnectCause) throws RemoteException {
        }

        @Override // com.mediatek.internal.telecom.IMtkConnectionServiceAdapter
        public void handleCreateConnectionFail(String str, DisconnectCause disconnectCause, Session.Info info) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IMtkConnectionServiceAdapter {
        private static final String DESCRIPTOR = "com.mediatek.internal.telecom.IMtkConnectionServiceAdapter";
        static final int TRANSACTION_handleCreateConferenceComplete = 1;
        static final int TRANSACTION_handleCreateConnectionFail = 2;

        private static class Proxy implements IMtkConnectionServiceAdapter {
            public static IMtkConnectionServiceAdapter sDefaultImpl;
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

            @Override // com.mediatek.internal.telecom.IMtkConnectionServiceAdapter
            public void handleCreateConferenceComplete(String str, ConnectionRequest connectionRequest, ParcelableConference parcelableConference, DisconnectCause disconnectCause) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (connectionRequest != null) {
                        parcelObtain.writeInt(1);
                        connectionRequest.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (parcelableConference != null) {
                        parcelObtain.writeInt(1);
                        parcelableConference.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (disconnectCause != null) {
                        parcelObtain.writeInt(1);
                        disconnectCause.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(1, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().handleCreateConferenceComplete(str, connectionRequest, parcelableConference, disconnectCause);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telecom.IMtkConnectionServiceAdapter
            public void handleCreateConnectionFail(String str, DisconnectCause disconnectCause, Session.Info info) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (disconnectCause != null) {
                        parcelObtain.writeInt(1);
                        disconnectCause.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (info != null) {
                        parcelObtain.writeInt(1);
                        info.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (this.mRemote.transact(2, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().handleCreateConnectionFail(str, disconnectCause, info);
                } finally {
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IMtkConnectionServiceAdapter asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkConnectionServiceAdapter)) ? new Proxy(iBinder) : (IMtkConnectionServiceAdapter) iInterfaceQueryLocalInterface;
        }

        public static IMtkConnectionServiceAdapter getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMtkConnectionServiceAdapter iMtkConnectionServiceAdapter) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMtkConnectionServiceAdapter == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMtkConnectionServiceAdapter;
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
                handleCreateConferenceComplete(parcel.readString(), parcel.readInt() != 0 ? (ConnectionRequest) ConnectionRequest.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? (ParcelableConference) ParcelableConference.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? (DisconnectCause) DisconnectCause.CREATOR.createFromParcel(parcel) : null);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                handleCreateConnectionFail(parcel.readString(), parcel.readInt() != 0 ? (DisconnectCause) DisconnectCause.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? (Session.Info) Session.Info.CREATOR.createFromParcel(parcel) : null);
                return true;
            }
            if (i != 1598968902) {
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel2.writeString(DESCRIPTOR);
            return true;
        }
    }

    void handleCreateConferenceComplete(String str, ConnectionRequest connectionRequest, ParcelableConference parcelableConference, DisconnectCause disconnectCause) throws RemoteException;

    void handleCreateConnectionFail(String str, DisconnectCause disconnectCause, Session.Info info) throws RemoteException;
}
