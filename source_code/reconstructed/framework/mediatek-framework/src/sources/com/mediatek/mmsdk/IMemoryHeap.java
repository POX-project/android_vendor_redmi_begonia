package com.mediatek.mmsdk;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IMemoryHeap extends IInterface {

    public static class Default implements IMemoryHeap {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.mmsdk.IMemoryHeap
        public int getBase() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IMemoryHeap
        public int getFlags() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IMemoryHeap
        public int getHeapID(int i, int i2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IMemoryHeap
        public int getOffset() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IMemoryHeap
        public int getSize() throws RemoteException {
            return 0;
        }
    }

    public static abstract class Stub extends Binder implements IMemoryHeap {
        private static final String DESCRIPTOR = "com.mediatek.mmsdk.IMemoryHeap";
        static final int TRANSACTION_getBase = 2;
        static final int TRANSACTION_getFlags = 4;
        static final int TRANSACTION_getHeapID = 1;
        static final int TRANSACTION_getOffset = 5;
        static final int TRANSACTION_getSize = 3;

        private static class Proxy implements IMemoryHeap {
            public static IMemoryHeap sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.mmsdk.IMemoryHeap
            public int getBase() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getBase();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IMemoryHeap
            public int getFlags() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getFlags();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IMemoryHeap
            public int getHeapID(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getHeapID(i, i2);
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

            @Override // com.mediatek.mmsdk.IMemoryHeap
            public int getOffset() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getOffset();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IMemoryHeap
            public int getSize() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSize();
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

        public static IMemoryHeap asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMemoryHeap)) ? new Proxy(iBinder) : (IMemoryHeap) iInterfaceQueryLocalInterface;
        }

        public static IMemoryHeap getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMemoryHeap iMemoryHeap) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMemoryHeap == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMemoryHeap;
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
                int heapID = getHeapID(parcel.readInt(), parcel.readInt());
                parcel2.writeNoException();
                parcel2.writeInt(heapID);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                int base = getBase();
                parcel2.writeNoException();
                parcel2.writeInt(base);
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(DESCRIPTOR);
                int size = getSize();
                parcel2.writeNoException();
                parcel2.writeInt(size);
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(DESCRIPTOR);
                int flags = getFlags();
                parcel2.writeNoException();
                parcel2.writeInt(flags);
                return true;
            }
            if (i != 5) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            int offset = getOffset();
            parcel2.writeNoException();
            parcel2.writeInt(offset);
            return true;
        }
    }

    int getBase() throws RemoteException;

    int getFlags() throws RemoteException;

    int getHeapID(int i, int i2) throws RemoteException;

    int getOffset() throws RemoteException;

    int getSize() throws RemoteException;
}
