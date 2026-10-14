package com.mediatek.common.voiceextension;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IVoiceExtCommandListener extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.voiceextension.IVoiceExtCommandListener";

    public static class Default implements IVoiceExtCommandListener {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
        public void onCommandRecognized(int i, int i2, String str) throws RemoteException {
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
        public void onError(int i) throws RemoteException {
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
        public void onPauseRecognition(int i) throws RemoteException {
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
        public void onResumeRecognition(int i) throws RemoteException {
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
        public void onSetCommands(int i) throws RemoteException {
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
        public void onStartRecognition(int i) throws RemoteException {
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
        public void onStopRecognition(int i) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IVoiceExtCommandListener {
        static final int TRANSACTION_onCommandRecognized = 5;
        static final int TRANSACTION_onError = 6;
        static final int TRANSACTION_onPauseRecognition = 3;
        static final int TRANSACTION_onResumeRecognition = 4;
        static final int TRANSACTION_onSetCommands = 7;
        static final int TRANSACTION_onStartRecognition = 1;
        static final int TRANSACTION_onStopRecognition = 2;

        private static class Proxy implements IVoiceExtCommandListener {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            public String getInterfaceDescriptor() {
                return IVoiceExtCommandListener.DESCRIPTOR;
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
            public void onCommandRecognized(int i, int i2, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(5, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
            public void onError(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(6, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
            public void onPauseRecognition(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
            public void onResumeRecognition(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
            public void onSetCommands(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(7, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
            public void onStartRecognition(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandListener
            public void onStopRecognition(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandListener.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IVoiceExtCommandListener.DESCRIPTOR);
        }

        public static IVoiceExtCommandListener asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IVoiceExtCommandListener.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IVoiceExtCommandListener)) ? new Proxy(iBinder) : (IVoiceExtCommandListener) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IVoiceExtCommandListener.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IVoiceExtCommandListener.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            int i3 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            onStartRecognition(i3);
                            parcel2.writeNoException();
                            return true;
                        case 2:
                            int i4 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            onStopRecognition(i4);
                            parcel2.writeNoException();
                            return true;
                        case 3:
                            int i5 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            onPauseRecognition(i5);
                            parcel2.writeNoException();
                            return true;
                        case 4:
                            int i6 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            onResumeRecognition(i6);
                            parcel2.writeNoException();
                            return true;
                        case 5:
                            int i7 = parcel.readInt();
                            int i8 = parcel.readInt();
                            String string = parcel.readString();
                            parcel.enforceNoDataAvail();
                            onCommandRecognized(i7, i8, string);
                            parcel2.writeNoException();
                            return true;
                        case 6:
                            int i9 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            onError(i9);
                            parcel2.writeNoException();
                            return true;
                        case 7:
                            int i10 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            onSetCommands(i10);
                            parcel2.writeNoException();
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void onCommandRecognized(int i, int i2, String str) throws RemoteException;

    void onError(int i) throws RemoteException;

    void onPauseRecognition(int i) throws RemoteException;

    void onResumeRecognition(int i) throws RemoteException;

    void onSetCommands(int i) throws RemoteException;

    void onStartRecognition(int i) throws RemoteException;

    void onStopRecognition(int i) throws RemoteException;
}
