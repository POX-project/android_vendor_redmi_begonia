package com.mediatek.internal.telecom;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.telecom.ConnectionRequest;
import android.telecom.Logging.Session;
import android.telecom.PhoneAccountHandle;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkConnectionService extends IInterface {

    public static class Default implements IMtkConnectionService {
        @Override // com.mediatek.internal.telecom.IMtkConnectionService
        public void addMtkConnectionServiceAdapter(IMtkConnectionServiceAdapter iMtkConnectionServiceAdapter) throws RemoteException {
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.internal.telecom.IMtkConnectionService
        public void clearMtkConnectionServiceAdapter() throws RemoteException {
        }

        @Override // com.mediatek.internal.telecom.IMtkConnectionService
        public void createConference(PhoneAccountHandle phoneAccountHandle, String str, ConnectionRequest connectionRequest, List<String> list, boolean z, Session.Info info) throws RemoteException {
        }

        @Override // com.mediatek.internal.telecom.IMtkConnectionService
        public IBinder getBinder() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.internal.telecom.IMtkConnectionService
        public void hangupAll(String str) throws RemoteException {
        }

        @Override // com.mediatek.internal.telecom.IMtkConnectionService
        public void inviteConferenceParticipants(String str, List<String> list) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IMtkConnectionService {
        private static final String DESCRIPTOR = "com.mediatek.internal.telecom.IMtkConnectionService";
        static final int TRANSACTION_addMtkConnectionServiceAdapter = 2;
        static final int TRANSACTION_clearMtkConnectionServiceAdapter = 3;
        static final int TRANSACTION_createConference = 6;
        static final int TRANSACTION_getBinder = 1;
        static final int TRANSACTION_hangupAll = 4;
        static final int TRANSACTION_inviteConferenceParticipants = 5;

        private static class Proxy implements IMtkConnectionService {
            public static IMtkConnectionService sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.internal.telecom.IMtkConnectionService
            public void addMtkConnectionServiceAdapter(IMtkConnectionServiceAdapter iMtkConnectionServiceAdapter) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iMtkConnectionServiceAdapter != null ? iMtkConnectionServiceAdapter.asBinder() : null);
                    if (this.mRemote.transact(2, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().addMtkConnectionServiceAdapter(iMtkConnectionServiceAdapter);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.internal.telecom.IMtkConnectionService
            public void clearMtkConnectionServiceAdapter() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (this.mRemote.transact(Stub.TRANSACTION_clearMtkConnectionServiceAdapter, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().clearMtkConnectionServiceAdapter();
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telecom.IMtkConnectionService
            public void createConference(PhoneAccountHandle phoneAccountHandle, String str, ConnectionRequest connectionRequest, List<String> list, boolean z, Session.Info info) throws Throwable {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (phoneAccountHandle != null) {
                        parcelObtain.writeInt(1);
                        phoneAccountHandle.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    try {
                        parcelObtain.writeString(str);
                        if (connectionRequest != null) {
                            parcelObtain.writeInt(1);
                            connectionRequest.writeToParcel(parcelObtain, 0);
                        } else {
                            parcelObtain.writeInt(0);
                        }
                        try {
                            parcelObtain.writeStringList(list);
                            parcelObtain.writeInt(z ? 1 : 0);
                            if (info != null) {
                                parcelObtain.writeInt(1);
                                info.writeToParcel(parcelObtain, 0);
                            } else {
                                parcelObtain.writeInt(0);
                            }
                            try {
                                if (this.mRemote.transact(Stub.TRANSACTION_createConference, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                                    parcelObtain.recycle();
                                } else {
                                    Stub.getDefaultImpl().createConference(phoneAccountHandle, str, connectionRequest, list, z, info);
                                    parcelObtain.recycle();
                                }
                            } catch (Throwable th) {
                                th = th;
                                parcelObtain.recycle();
                                throw th;
                            }
                        } catch (Throwable th2) {
                            th = th2;
                        }
                    } catch (Throwable th3) {
                        th = th3;
                        parcelObtain.recycle();
                        throw th;
                    }
                } catch (Throwable th4) {
                    th = th4;
                }
            }

            @Override // com.mediatek.internal.telecom.IMtkConnectionService
            public IBinder getBinder() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getBinder();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readStrongBinder();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.internal.telecom.IMtkConnectionService
            public void hangupAll(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    if (this.mRemote.transact(4, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().hangupAll(str);
                } finally {
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.internal.telecom.IMtkConnectionService
            public void inviteConferenceParticipants(String str, List<String> list) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeStringList(list);
                    if (this.mRemote.transact(Stub.TRANSACTION_inviteConferenceParticipants, parcelObtain, null, 1) || Stub.getDefaultImpl() == null) {
                        return;
                    }
                    Stub.getDefaultImpl().inviteConferenceParticipants(str, list);
                } finally {
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IMtkConnectionService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkConnectionService)) ? new Proxy(iBinder) : (IMtkConnectionService) iInterfaceQueryLocalInterface;
        }

        public static IMtkConnectionService getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMtkConnectionService iMtkConnectionService) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMtkConnectionService == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMtkConnectionService;
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
                    IBinder binder = getBinder();
                    parcel2.writeNoException();
                    parcel2.writeStrongBinder(binder);
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    addMtkConnectionServiceAdapter(IMtkConnectionServiceAdapter.Stub.asInterface(parcel.readStrongBinder()));
                    return true;
                case TRANSACTION_clearMtkConnectionServiceAdapter /* 3 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    clearMtkConnectionServiceAdapter();
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    hangupAll(parcel.readString());
                    return true;
                case TRANSACTION_inviteConferenceParticipants /* 5 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    inviteConferenceParticipants(parcel.readString(), parcel.createStringArrayList());
                    return true;
                case TRANSACTION_createConference /* 6 */:
                    parcel.enforceInterface(DESCRIPTOR);
                    createConference(parcel.readInt() != 0 ? (PhoneAccountHandle) PhoneAccountHandle.CREATOR.createFromParcel(parcel) : null, parcel.readString(), parcel.readInt() != 0 ? (ConnectionRequest) ConnectionRequest.CREATOR.createFromParcel(parcel) : null, parcel.createStringArrayList(), parcel.readInt() != 0, parcel.readInt() != 0 ? (Session.Info) Session.Info.CREATOR.createFromParcel(parcel) : null);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    void addMtkConnectionServiceAdapter(IMtkConnectionServiceAdapter iMtkConnectionServiceAdapter) throws RemoteException;

    void clearMtkConnectionServiceAdapter() throws RemoteException;

    void createConference(PhoneAccountHandle phoneAccountHandle, String str, ConnectionRequest connectionRequest, List<String> list, boolean z, Session.Info info) throws RemoteException;

    IBinder getBinder() throws RemoteException;

    void hangupAll(String str) throws RemoteException;

    void inviteConferenceParticipants(String str, List<String> list) throws RemoteException;
}
