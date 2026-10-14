package com.mediatek.mmsdk;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IMemory extends IInterface {

    public static class Default implements IMemory {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.mmsdk.IMemory
        public IMemoryHeap getMemory(int i, int i2) throws RemoteException {
            return null;
        }
    }

    public static abstract class Stub extends Binder implements IMemory {
        private static final String DESCRIPTOR = "com.mediatek.mmsdk.IMemory";
        static final int TRANSACTION_getMemory = 1;

        private static class Proxy implements IMemory {
            public static IMemory sDefaultImpl;
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

            @Override // com.mediatek.mmsdk.IMemory
            public IMemoryHeap getMemory(int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getMemory(i, i2);
                    }
                    parcelObtain2.readException();
                    return IMemoryHeap.Stub.asInterface(parcelObtain2.readStrongBinder());
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IMemory asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMemory)) ? new Proxy(iBinder) : (IMemory) iInterfaceQueryLocalInterface;
        }

        public static IMemory getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMemory iMemory) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMemory == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMemory;
            return true;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i != 1) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            IMemoryHeap memory = getMemory(parcel.readInt(), parcel.readInt());
            parcel2.writeNoException();
            parcel2.writeStrongBinder(memory != null ? memory.asBinder() : null);
            return true;
        }
    }

    IMemoryHeap getMemory(int i, int i2) throws RemoteException;
}
