package com.mediatek.internal.telephony;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IMtkTelephonyRegistryEx extends IInterface {

    public static class Default implements IMtkTelephonyRegistryEx {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }
    }

    public static abstract class Stub extends Binder implements IMtkTelephonyRegistryEx {
        private static final String DESCRIPTOR = "com.mediatek.internal.telephony.IMtkTelephonyRegistryEx";

        private static class Proxy implements IMtkTelephonyRegistryEx {
            public static IMtkTelephonyRegistryEx sDefaultImpl;
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
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static IMtkTelephonyRegistryEx asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IMtkTelephonyRegistryEx)) ? new Proxy(iBinder) : (IMtkTelephonyRegistryEx) iInterfaceQueryLocalInterface;
        }

        public static IMtkTelephonyRegistryEx getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IMtkTelephonyRegistryEx iMtkTelephonyRegistryEx) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iMtkTelephonyRegistryEx == null) {
                return false;
            }
            Proxy.sDefaultImpl = iMtkTelephonyRegistryEx;
            return true;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i != 1598968902) {
                return super.onTransact(i, parcel, parcel2, i2);
            }
            parcel2.writeString(DESCRIPTOR);
            return true;
        }
    }
}
