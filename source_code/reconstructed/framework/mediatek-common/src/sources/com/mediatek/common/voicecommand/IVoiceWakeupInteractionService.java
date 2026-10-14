package com.mediatek.common.voicecommand;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IVoiceWakeupInteractionService extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.voicecommand.IVoiceWakeupInteractionService";

    public static class Default implements IVoiceWakeupInteractionService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.voicecommand.IVoiceWakeupInteractionService
        public void registerCallback(IVoiceWakeupInteractionCallback iVoiceWakeupInteractionCallback) throws RemoteException {
        }

        @Override // com.mediatek.common.voicecommand.IVoiceWakeupInteractionService
        public void setCurrentUserOnSwitch(int i) throws RemoteException {
        }

        @Override // com.mediatek.common.voicecommand.IVoiceWakeupInteractionService
        public boolean startRecognition() throws RemoteException {
            return false;
        }

        @Override // com.mediatek.common.voicecommand.IVoiceWakeupInteractionService
        public boolean stopRecognition() throws RemoteException {
            return false;
        }
    }

    public static abstract class Stub extends Binder implements IVoiceWakeupInteractionService {
        static final int TRANSACTION_registerCallback = 1;
        static final int TRANSACTION_setCurrentUserOnSwitch = 4;
        static final int TRANSACTION_startRecognition = 2;
        static final int TRANSACTION_stopRecognition = 3;

        private static class Proxy implements IVoiceWakeupInteractionService {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return IVoiceWakeupInteractionService.DESCRIPTOR;
            }

            @Override // com.mediatek.common.voicecommand.IVoiceWakeupInteractionService
            public void registerCallback(IVoiceWakeupInteractionCallback iVoiceWakeupInteractionCallback) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceWakeupInteractionService.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iVoiceWakeupInteractionCallback);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voicecommand.IVoiceWakeupInteractionService
            public void setCurrentUserOnSwitch(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceWakeupInteractionService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voicecommand.IVoiceWakeupInteractionService
            public boolean startRecognition() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceWakeupInteractionService.DESCRIPTOR);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voicecommand.IVoiceWakeupInteractionService
            public boolean stopRecognition() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceWakeupInteractionService.DESCRIPTOR);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IVoiceWakeupInteractionService.DESCRIPTOR);
        }

        public static IVoiceWakeupInteractionService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IVoiceWakeupInteractionService.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IVoiceWakeupInteractionService)) ? new Proxy(iBinder) : (IVoiceWakeupInteractionService) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IVoiceWakeupInteractionService.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IVoiceWakeupInteractionService.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            IVoiceWakeupInteractionCallback iVoiceWakeupInteractionCallbackAsInterface = IVoiceWakeupInteractionCallback.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            registerCallback(iVoiceWakeupInteractionCallbackAsInterface);
                            parcel2.writeNoException();
                            return true;
                        case 2:
                            boolean zStartRecognition = startRecognition();
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zStartRecognition);
                            return true;
                        case 3:
                            boolean zStopRecognition = stopRecognition();
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zStopRecognition);
                            return true;
                        case 4:
                            int i3 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            setCurrentUserOnSwitch(i3);
                            parcel2.writeNoException();
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void registerCallback(IVoiceWakeupInteractionCallback iVoiceWakeupInteractionCallback) throws RemoteException;

    void setCurrentUserOnSwitch(int i) throws RemoteException;

    boolean startRecognition() throws RemoteException;

    boolean stopRecognition() throws RemoteException;
}
