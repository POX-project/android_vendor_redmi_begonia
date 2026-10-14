package com.mediatek.common.voicecommand;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IVoiceCommandListener extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.voicecommand.IVoiceCommandListener";

    public static class Default implements IVoiceCommandListener {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.voicecommand.IVoiceCommandListener
        public void onVoiceCommandNotified(int i, int i2, Bundle bundle) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IVoiceCommandListener {
        static final int TRANSACTION_onVoiceCommandNotified = 1;

        private static class Proxy implements IVoiceCommandListener {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return IVoiceCommandListener.DESCRIPTOR;
            }

            @Override // com.mediatek.common.voicecommand.IVoiceCommandListener
            public void onVoiceCommandNotified(int i, int i2, Bundle bundle) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceCommandListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeTypedObject(bundle, 0);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IVoiceCommandListener.DESCRIPTOR);
        }

        public static IVoiceCommandListener asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IVoiceCommandListener.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IVoiceCommandListener)) ? new Proxy(iBinder) : (IVoiceCommandListener) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IVoiceCommandListener.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IVoiceCommandListener.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            int i3 = parcel.readInt();
                            int i4 = parcel.readInt();
                            Bundle bundle = (Bundle) parcel.readTypedObject(Bundle.CREATOR);
                            parcel.enforceNoDataAvail();
                            onVoiceCommandNotified(i3, i4, bundle);
                            parcel2.writeNoException();
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void onVoiceCommandNotified(int i, int i2, Bundle bundle) throws RemoteException;
}
