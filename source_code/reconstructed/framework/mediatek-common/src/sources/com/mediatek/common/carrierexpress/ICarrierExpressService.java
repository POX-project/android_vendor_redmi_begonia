package com.mediatek.common.carrierexpress;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public interface ICarrierExpressService extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.carrierexpress.ICarrierExpressService";

    public static class Default implements ICarrierExpressService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.carrierexpress.ICarrierExpressService
        public String getActiveOpPack() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.common.carrierexpress.ICarrierExpressService
        public Map getAllOpPackList() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.common.carrierexpress.ICarrierExpressService
        public String getOpPackFromSimInfo(String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.common.carrierexpress.ICarrierExpressService
        public List getOperatorSubIdList(String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.common.carrierexpress.ICarrierExpressService
        public void setOpPackActive(String str, String str2, int i) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements ICarrierExpressService {
        static final int TRANSACTION_getActiveOpPack = 1;
        static final int TRANSACTION_getAllOpPackList = 4;
        static final int TRANSACTION_getOpPackFromSimInfo = 2;
        static final int TRANSACTION_getOperatorSubIdList = 5;
        static final int TRANSACTION_setOpPackActive = 3;

        private static class Proxy implements ICarrierExpressService {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.common.carrierexpress.ICarrierExpressService
            public String getActiveOpPack() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ICarrierExpressService.DESCRIPTOR);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.carrierexpress.ICarrierExpressService
            public Map getAllOpPackList() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ICarrierExpressService.DESCRIPTOR);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readHashMap(getClass().getClassLoader());
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return ICarrierExpressService.DESCRIPTOR;
            }

            @Override // com.mediatek.common.carrierexpress.ICarrierExpressService
            public String getOpPackFromSimInfo(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ICarrierExpressService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.carrierexpress.ICarrierExpressService
            public List getOperatorSubIdList(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ICarrierExpressService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(5, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readArrayList(getClass().getClassLoader());
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.carrierexpress.ICarrierExpressService
            public void setOpPackActive(String str, String str2, int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ICarrierExpressService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, ICarrierExpressService.DESCRIPTOR);
        }

        public static ICarrierExpressService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(ICarrierExpressService.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof ICarrierExpressService)) ? new Proxy(iBinder) : (ICarrierExpressService) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(ICarrierExpressService.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(ICarrierExpressService.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            String activeOpPack = getActiveOpPack();
                            parcel2.writeNoException();
                            parcel2.writeString(activeOpPack);
                            return true;
                        case 2:
                            String string = parcel.readString();
                            parcel.enforceNoDataAvail();
                            String opPackFromSimInfo = getOpPackFromSimInfo(string);
                            parcel2.writeNoException();
                            parcel2.writeString(opPackFromSimInfo);
                            return true;
                        case 3:
                            String string2 = parcel.readString();
                            String string3 = parcel.readString();
                            int i3 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            setOpPackActive(string2, string3, i3);
                            parcel2.writeNoException();
                            return true;
                        case 4:
                            Map allOpPackList = getAllOpPackList();
                            parcel2.writeNoException();
                            parcel2.writeMap(allOpPackList);
                            return true;
                        case 5:
                            String string4 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            List operatorSubIdList = getOperatorSubIdList(string4);
                            parcel2.writeNoException();
                            parcel2.writeList(operatorSubIdList);
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    String getActiveOpPack() throws RemoteException;

    Map getAllOpPackList() throws RemoteException;

    String getOpPackFromSimInfo(String str) throws RemoteException;

    List getOperatorSubIdList(String str) throws RemoteException;

    void setOpPackActive(String str, String str2, int i) throws RemoteException;
}
