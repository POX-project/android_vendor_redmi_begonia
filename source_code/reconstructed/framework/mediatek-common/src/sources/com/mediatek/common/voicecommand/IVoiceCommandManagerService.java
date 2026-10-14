package com.mediatek.common.voicecommand;

import android.os.Binder;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IVoiceCommandManagerService extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.voicecommand.IVoiceCommandManagerService";

    public static class Default implements IVoiceCommandManagerService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.voicecommand.IVoiceCommandManagerService
        public int registerListener(String str, IVoiceCommandListener iVoiceCommandListener) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.common.voicecommand.IVoiceCommandManagerService
        public int sendCommand(String str, int i, int i2, Bundle bundle) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.common.voicecommand.IVoiceCommandManagerService
        public int unregisterListener(String str, IVoiceCommandListener iVoiceCommandListener) throws RemoteException {
            return 0;
        }
    }

    public static abstract class Stub extends Binder implements IVoiceCommandManagerService {
        static final int TRANSACTION_registerListener = 1;
        static final int TRANSACTION_sendCommand = 3;
        static final int TRANSACTION_unregisterListener = 2;

        private static class Proxy implements IVoiceCommandManagerService {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return IVoiceCommandManagerService.DESCRIPTOR;
            }

            @Override // com.mediatek.common.voicecommand.IVoiceCommandManagerService
            public int registerListener(String str, IVoiceCommandListener iVoiceCommandListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceCommandManagerService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeStrongInterface(iVoiceCommandListener);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voicecommand.IVoiceCommandManagerService
            public int sendCommand(String str, int i, int i2, Bundle bundle) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceCommandManagerService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeTypedObject(bundle, 0);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voicecommand.IVoiceCommandManagerService
            public int unregisterListener(String str, IVoiceCommandListener iVoiceCommandListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceCommandManagerService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeStrongInterface(iVoiceCommandListener);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IVoiceCommandManagerService.DESCRIPTOR);
        }

        public static IVoiceCommandManagerService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IVoiceCommandManagerService.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IVoiceCommandManagerService)) ? new Proxy(iBinder) : (IVoiceCommandManagerService) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IVoiceCommandManagerService.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IVoiceCommandManagerService.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            String string = parcel.readString();
                            IVoiceCommandListener iVoiceCommandListenerAsInterface = IVoiceCommandListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            int iRegisterListener = registerListener(string, iVoiceCommandListenerAsInterface);
                            parcel2.writeNoException();
                            parcel2.writeInt(iRegisterListener);
                            return true;
                        case 2:
                            String string2 = parcel.readString();
                            IVoiceCommandListener iVoiceCommandListenerAsInterface2 = IVoiceCommandListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            int iUnregisterListener = unregisterListener(string2, iVoiceCommandListenerAsInterface2);
                            parcel2.writeNoException();
                            parcel2.writeInt(iUnregisterListener);
                            return true;
                        case 3:
                            String string3 = parcel.readString();
                            int i3 = parcel.readInt();
                            int i4 = parcel.readInt();
                            Bundle bundle = (Bundle) parcel.readTypedObject(Bundle.CREATOR);
                            parcel.enforceNoDataAvail();
                            int iSendCommand = sendCommand(string3, i3, i4, bundle);
                            parcel2.writeNoException();
                            parcel2.writeInt(iSendCommand);
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    int registerListener(String str, IVoiceCommandListener iVoiceCommandListener) throws RemoteException;

    int sendCommand(String str, int i, int i2, Bundle bundle) throws RemoteException;

    int unregisterListener(String str, IVoiceCommandListener iVoiceCommandListener) throws RemoteException;
}
