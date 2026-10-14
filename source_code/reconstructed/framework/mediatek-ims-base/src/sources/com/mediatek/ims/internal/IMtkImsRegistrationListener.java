package com.mediatek.ims.internal;

import android.net.Uri;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.telephony.ims.ImsReasonInfo;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkImsRegistrationListener extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.ims.internal.IMtkImsRegistrationListener";

    public static class Default implements IMtkImsRegistrationListener {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsRegistrationListener
        public void onRedirectIncomingCallIndication(int i, String[] strArr) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsRegistrationListener
        public void onRegistrationErrorCodeIndication(int i) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsRegistrationListener
        public void onRegistrationImsStateChanged(int i, Uri[] uriArr, int i2, ImsReasonInfo imsReasonInfo) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IMtkImsRegistrationListener {
        static final int TRANSACTION_onRedirectIncomingCallIndication = 2;
        static final int TRANSACTION_onRegistrationErrorCodeIndication = 3;
        static final int TRANSACTION_onRegistrationImsStateChanged = 1;

        private static class Proxy implements IMtkImsRegistrationListener {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return IMtkImsRegistrationListener.DESCRIPTOR;
            }

            @Override // com.mediatek.ims.internal.IMtkImsRegistrationListener
            public void onRedirectIncomingCallIndication(int i, String[] strArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsRegistrationListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeStringArray(strArr);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsRegistrationListener
            public void onRegistrationErrorCodeIndication(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsRegistrationListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsRegistrationListener
            public void onRegistrationImsStateChanged(int i, Uri[] uriArr, int i2, ImsReasonInfo imsReasonInfo) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsRegistrationListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeTypedArray(uriArr, 0);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeTypedObject(imsReasonInfo, 0);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IMtkImsRegistrationListener.DESCRIPTOR);
        }

        public static IMtkImsRegistrationListener asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IMtkImsRegistrationListener.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkImsRegistrationListener)) ? new Proxy(iBinder) : (IMtkImsRegistrationListener) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IMtkImsRegistrationListener.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IMtkImsRegistrationListener.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            int i3 = parcel.readInt();
                            Uri[] uriArr = (Uri[]) parcel.createTypedArray(Uri.CREATOR);
                            int i4 = parcel.readInt();
                            ImsReasonInfo imsReasonInfo = (ImsReasonInfo) parcel.readTypedObject(ImsReasonInfo.CREATOR);
                            parcel.enforceNoDataAvail();
                            onRegistrationImsStateChanged(i3, uriArr, i4, imsReasonInfo);
                            parcel2.writeNoException();
                            return true;
                        case 2:
                            int i5 = parcel.readInt();
                            String[] strArrCreateStringArray = parcel.createStringArray();
                            parcel.enforceNoDataAvail();
                            onRedirectIncomingCallIndication(i5, strArrCreateStringArray);
                            parcel2.writeNoException();
                            return true;
                        case 3:
                            int i6 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            onRegistrationErrorCodeIndication(i6);
                            parcel2.writeNoException();
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void onRedirectIncomingCallIndication(int i, String[] strArr) throws RemoteException;

    void onRegistrationErrorCodeIndication(int i) throws RemoteException;

    void onRegistrationImsStateChanged(int i, Uri[] uriArr, int i2, ImsReasonInfo imsReasonInfo) throws RemoteException;
}
