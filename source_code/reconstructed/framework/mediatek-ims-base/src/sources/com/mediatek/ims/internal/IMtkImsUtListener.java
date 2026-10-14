package com.mediatek.ims.internal;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import android.telephony.ims.ImsCallForwardInfo;
import com.mediatek.ims.MtkImsCallForwardInfo;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkImsUtListener extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.ims.internal.IMtkImsUtListener";

    public static class Default implements IMtkImsUtListener {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.ims.internal.IMtkImsUtListener
        public void utConfigurationCallForwardInTimeSlotQueried(IMtkImsUt iMtkImsUt, int i, MtkImsCallForwardInfo[] mtkImsCallForwardInfoArr) throws RemoteException {
        }

        @Override // com.mediatek.ims.internal.IMtkImsUtListener
        public void utConfigurationCallForwardQueried(IMtkImsUt iMtkImsUt, int i, ImsCallForwardInfo[] imsCallForwardInfoArr) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IMtkImsUtListener {
        static final int TRANSACTION_utConfigurationCallForwardInTimeSlotQueried = 1;
        static final int TRANSACTION_utConfigurationCallForwardQueried = 2;

        private static class Proxy implements IMtkImsUtListener {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return IMtkImsUtListener.DESCRIPTOR;
            }

            @Override // com.mediatek.ims.internal.IMtkImsUtListener
            public void utConfigurationCallForwardInTimeSlotQueried(IMtkImsUt iMtkImsUt, int i, MtkImsCallForwardInfo[] mtkImsCallForwardInfoArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUtListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsUt);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeTypedArray(mtkImsCallForwardInfoArr, 0);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.ims.internal.IMtkImsUtListener
            public void utConfigurationCallForwardQueried(IMtkImsUt iMtkImsUt, int i, ImsCallForwardInfo[] imsCallForwardInfoArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IMtkImsUtListener.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iMtkImsUt);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeTypedArray(imsCallForwardInfoArr, 0);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IMtkImsUtListener.DESCRIPTOR);
        }

        public static IMtkImsUtListener asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IMtkImsUtListener.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkImsUtListener)) ? new Proxy(iBinder) : (IMtkImsUtListener) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IMtkImsUtListener.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IMtkImsUtListener.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            IMtkImsUt iMtkImsUtAsInterface = IMtkImsUt.Stub.asInterface(parcel.readStrongBinder());
                            int i3 = parcel.readInt();
                            MtkImsCallForwardInfo[] mtkImsCallForwardInfoArr = (MtkImsCallForwardInfo[]) parcel.createTypedArray(MtkImsCallForwardInfo.CREATOR);
                            parcel.enforceNoDataAvail();
                            utConfigurationCallForwardInTimeSlotQueried(iMtkImsUtAsInterface, i3, mtkImsCallForwardInfoArr);
                            parcel2.writeNoException();
                            return true;
                        case 2:
                            IMtkImsUt iMtkImsUtAsInterface2 = IMtkImsUt.Stub.asInterface(parcel.readStrongBinder());
                            int i4 = parcel.readInt();
                            ImsCallForwardInfo[] imsCallForwardInfoArr = (ImsCallForwardInfo[]) parcel.createTypedArray(ImsCallForwardInfo.CREATOR);
                            parcel.enforceNoDataAvail();
                            utConfigurationCallForwardQueried(iMtkImsUtAsInterface2, i4, imsCallForwardInfoArr);
                            parcel2.writeNoException();
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void utConfigurationCallForwardInTimeSlotQueried(IMtkImsUt iMtkImsUt, int i, MtkImsCallForwardInfo[] mtkImsCallForwardInfoArr) throws RemoteException;

    void utConfigurationCallForwardQueried(IMtkImsUt iMtkImsUt, int i, ImsCallForwardInfo[] imsCallForwardInfoArr) throws RemoteException;
}
