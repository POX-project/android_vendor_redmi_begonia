package com.mediatek.common.voicecommand;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IVoiceWakeupInteractionCallback extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.voicecommand.IVoiceWakeupInteractionCallback";

    public static class Default implements IVoiceWakeupInteractionCallback {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.voicecommand.IVoiceWakeupInteractionCallback
        public void onVoiceWakeupDetected(int i) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IVoiceWakeupInteractionCallback {
        static final int TRANSACTION_onVoiceWakeupDetected = 1;

        private static class Proxy implements IVoiceWakeupInteractionCallback {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return IVoiceWakeupInteractionCallback.DESCRIPTOR;
            }

            @Override // com.mediatek.common.voicecommand.IVoiceWakeupInteractionCallback
            public void onVoiceWakeupDetected(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceWakeupInteractionCallback.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IVoiceWakeupInteractionCallback.DESCRIPTOR);
        }

        public static IVoiceWakeupInteractionCallback asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IVoiceWakeupInteractionCallback.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IVoiceWakeupInteractionCallback)) ? new Proxy(iBinder) : (IVoiceWakeupInteractionCallback) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IVoiceWakeupInteractionCallback.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IVoiceWakeupInteractionCallback.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            int i3 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            onVoiceWakeupDetected(i3);
                            parcel2.writeNoException();
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void onVoiceWakeupDetected(int i) throws RemoteException;
}
