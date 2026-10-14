package com.mediatek.vow;

import android.hardware.soundtrigger.IRecognitionStatusCallback;
import android.hardware.soundtrigger.SoundTrigger;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IVoiceWakeupBridge extends IInterface {

    public static class Default implements IVoiceWakeupBridge {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.vow.IVoiceWakeupBridge
        public int startRecognition(int i, SoundTrigger.KeyphraseSoundModel keyphraseSoundModel, IRecognitionStatusCallback iRecognitionStatusCallback, SoundTrigger.RecognitionConfig recognitionConfig) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.vow.IVoiceWakeupBridge
        public int stopRecognition(int i, IRecognitionStatusCallback iRecognitionStatusCallback) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.vow.IVoiceWakeupBridge
        public int unloadKeyphraseModel(int i) throws RemoteException {
            return 0;
        }
    }

    public static abstract class Stub extends Binder implements IVoiceWakeupBridge {
        private static final String DESCRIPTOR = "com.mediatek.vow.IVoiceWakeupBridge";
        static final int TRANSACTION_startRecognition = 1;
        static final int TRANSACTION_stopRecognition = 2;
        static final int TRANSACTION_unloadKeyphraseModel = 3;

        private static class Proxy implements IVoiceWakeupBridge {
            public static IVoiceWakeupBridge sDefaultImpl;
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

            @Override // com.mediatek.vow.IVoiceWakeupBridge
            public int startRecognition(int i, SoundTrigger.KeyphraseSoundModel keyphraseSoundModel, IRecognitionStatusCallback iRecognitionStatusCallback, SoundTrigger.RecognitionConfig recognitionConfig) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (keyphraseSoundModel != null) {
                        parcelObtain.writeInt(1);
                        keyphraseSoundModel.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    parcelObtain.writeStrongBinder(iRecognitionStatusCallback != null ? iRecognitionStatusCallback.asBinder() : null);
                    if (recognitionConfig != null) {
                        parcelObtain.writeInt(1);
                        recognitionConfig.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().startRecognition(i, keyphraseSoundModel, iRecognitionStatusCallback, recognitionConfig);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.vow.IVoiceWakeupBridge
            public int stopRecognition(int i, IRecognitionStatusCallback iRecognitionStatusCallback) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeStrongBinder(iRecognitionStatusCallback != null ? iRecognitionStatusCallback.asBinder() : null);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().stopRecognition(i, iRecognitionStatusCallback);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.vow.IVoiceWakeupBridge
            public int unloadKeyphraseModel(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().unloadKeyphraseModel(i);
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

        public static IVoiceWakeupBridge asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IVoiceWakeupBridge)) ? new Proxy(iBinder) : (IVoiceWakeupBridge) iInterfaceQueryLocalInterface;
        }

        public static IVoiceWakeupBridge getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IVoiceWakeupBridge iVoiceWakeupBridge) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iVoiceWakeupBridge == null) {
                return false;
            }
            Proxy.sDefaultImpl = iVoiceWakeupBridge;
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
                int iStartRecognition = startRecognition(parcel.readInt(), parcel.readInt() != 0 ? (SoundTrigger.KeyphraseSoundModel) SoundTrigger.KeyphraseSoundModel.CREATOR.createFromParcel(parcel) : null, IRecognitionStatusCallback.Stub.asInterface(parcel.readStrongBinder()), parcel.readInt() != 0 ? (SoundTrigger.RecognitionConfig) SoundTrigger.RecognitionConfig.CREATOR.createFromParcel(parcel) : null);
                parcel2.writeNoException();
                parcel2.writeInt(iStartRecognition);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                int iStopRecognition = stopRecognition(parcel.readInt(), IRecognitionStatusCallback.Stub.asInterface(parcel.readStrongBinder()));
                parcel2.writeNoException();
                parcel2.writeInt(iStopRecognition);
                return true;
            }
            if (i != 3) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            int iUnloadKeyphraseModel = unloadKeyphraseModel(parcel.readInt());
            parcel2.writeNoException();
            parcel2.writeInt(iUnloadKeyphraseModel);
            return true;
        }
    }

    int startRecognition(int i, SoundTrigger.KeyphraseSoundModel keyphraseSoundModel, IRecognitionStatusCallback iRecognitionStatusCallback, SoundTrigger.RecognitionConfig recognitionConfig) throws RemoteException;

    int stopRecognition(int i, IRecognitionStatusCallback iRecognitionStatusCallback) throws RemoteException;

    int unloadKeyphraseModel(int i) throws RemoteException;
}
