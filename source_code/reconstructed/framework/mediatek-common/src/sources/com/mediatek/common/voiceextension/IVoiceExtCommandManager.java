package com.mediatek.common.voiceextension;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.ParcelFileDescriptor;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IVoiceExtCommandManager extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.voiceextension.IVoiceExtCommandManager";

    public static class Default implements IVoiceExtCommandManager {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public int createCommandSet(String str) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public int deleteCommandSet(String str) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public String getCommandSetSelected() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public String[] getCommandSets() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public String[] getCommands() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public int isCommandSetCreated(String str) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public void pauseRecognition() throws RemoteException {
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public int registerListener(IVoiceExtCommandListener iVoiceExtCommandListener) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public void resumeRecognition() throws RemoteException {
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public int selectCurrentCommandSet(String str) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public void setCommandsFile(ParcelFileDescriptor parcelFileDescriptor, int i, int i2) throws RemoteException {
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public void setCommandsStrArray(String[] strArr) throws RemoteException {
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public void startRecognition() throws RemoteException {
        }

        @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
        public void stopRecognition() throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements IVoiceExtCommandManager {
        static final int TRANSACTION_createCommandSet = 1;
        static final int TRANSACTION_deleteCommandSet = 4;
        static final int TRANSACTION_getCommandSetSelected = 3;
        static final int TRANSACTION_getCommandSets = 10;
        static final int TRANSACTION_getCommands = 9;
        static final int TRANSACTION_isCommandSetCreated = 2;
        static final int TRANSACTION_pauseRecognition = 13;
        static final int TRANSACTION_registerListener = 8;
        static final int TRANSACTION_resumeRecognition = 14;
        static final int TRANSACTION_selectCurrentCommandSet = 5;
        static final int TRANSACTION_setCommandsFile = 7;
        static final int TRANSACTION_setCommandsStrArray = 6;
        static final int TRANSACTION_startRecognition = 11;
        static final int TRANSACTION_stopRecognition = 12;

        private static class Proxy implements IVoiceExtCommandManager {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public int createCommandSet(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public int deleteCommandSet(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public String getCommandSetSelected() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readString();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public String[] getCommandSets() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    this.mRemote.transact(10, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public String[] getCommands() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    this.mRemote.transact(9, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return IVoiceExtCommandManager.DESCRIPTOR;
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public int isCommandSetCreated(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public void pauseRecognition() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    this.mRemote.transact(13, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public int registerListener(IVoiceExtCommandListener iVoiceExtCommandListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iVoiceExtCommandListener);
                    this.mRemote.transact(8, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public void resumeRecognition() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    this.mRemote.transact(14, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public int selectCurrentCommandSet(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(5, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public void setCommandsFile(ParcelFileDescriptor parcelFileDescriptor, int i, int i2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    parcelObtain.writeTypedObject(parcelFileDescriptor, 0);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeInt(i2);
                    this.mRemote.transact(7, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public void setCommandsStrArray(String[] strArr) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    parcelObtain.writeStringArray(strArr);
                    this.mRemote.transact(6, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public void startRecognition() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    this.mRemote.transact(11, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.voiceextension.IVoiceExtCommandManager
            public void stopRecognition() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(IVoiceExtCommandManager.DESCRIPTOR);
                    this.mRemote.transact(12, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, IVoiceExtCommandManager.DESCRIPTOR);
        }

        public static IVoiceExtCommandManager asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(IVoiceExtCommandManager.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IVoiceExtCommandManager)) ? new Proxy(iBinder) : (IVoiceExtCommandManager) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(IVoiceExtCommandManager.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(IVoiceExtCommandManager.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            String string = parcel.readString();
                            parcel.enforceNoDataAvail();
                            int iCreateCommandSet = createCommandSet(string);
                            parcel2.writeNoException();
                            parcel2.writeInt(iCreateCommandSet);
                            return true;
                        case 2:
                            String string2 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            int iIsCommandSetCreated = isCommandSetCreated(string2);
                            parcel2.writeNoException();
                            parcel2.writeInt(iIsCommandSetCreated);
                            return true;
                        case 3:
                            String commandSetSelected = getCommandSetSelected();
                            parcel2.writeNoException();
                            parcel2.writeString(commandSetSelected);
                            return true;
                        case 4:
                            String string3 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            int iDeleteCommandSet = deleteCommandSet(string3);
                            parcel2.writeNoException();
                            parcel2.writeInt(iDeleteCommandSet);
                            return true;
                        case 5:
                            String string4 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            int iSelectCurrentCommandSet = selectCurrentCommandSet(string4);
                            parcel2.writeNoException();
                            parcel2.writeInt(iSelectCurrentCommandSet);
                            return true;
                        case 6:
                            String[] strArrCreateStringArray = parcel.createStringArray();
                            parcel.enforceNoDataAvail();
                            setCommandsStrArray(strArrCreateStringArray);
                            parcel2.writeNoException();
                            return true;
                        case 7:
                            ParcelFileDescriptor parcelFileDescriptor = (ParcelFileDescriptor) parcel.readTypedObject(ParcelFileDescriptor.CREATOR);
                            int i3 = parcel.readInt();
                            int i4 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            setCommandsFile(parcelFileDescriptor, i3, i4);
                            parcel2.writeNoException();
                            return true;
                        case 8:
                            IVoiceExtCommandListener iVoiceExtCommandListenerAsInterface = IVoiceExtCommandListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            int iRegisterListener = registerListener(iVoiceExtCommandListenerAsInterface);
                            parcel2.writeNoException();
                            parcel2.writeInt(iRegisterListener);
                            return true;
                        case 9:
                            String[] commands = getCommands();
                            parcel2.writeNoException();
                            parcel2.writeStringArray(commands);
                            return true;
                        case 10:
                            String[] commandSets = getCommandSets();
                            parcel2.writeNoException();
                            parcel2.writeStringArray(commandSets);
                            return true;
                        case 11:
                            startRecognition();
                            parcel2.writeNoException();
                            return true;
                        case 12:
                            stopRecognition();
                            parcel2.writeNoException();
                            return true;
                        case 13:
                            pauseRecognition();
                            parcel2.writeNoException();
                            return true;
                        case 14:
                            resumeRecognition();
                            parcel2.writeNoException();
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    int createCommandSet(String str) throws RemoteException;

    int deleteCommandSet(String str) throws RemoteException;

    String getCommandSetSelected() throws RemoteException;

    String[] getCommandSets() throws RemoteException;

    String[] getCommands() throws RemoteException;

    int isCommandSetCreated(String str) throws RemoteException;

    void pauseRecognition() throws RemoteException;

    int registerListener(IVoiceExtCommandListener iVoiceExtCommandListener) throws RemoteException;

    void resumeRecognition() throws RemoteException;

    int selectCurrentCommandSet(String str) throws RemoteException;

    void setCommandsFile(ParcelFileDescriptor parcelFileDescriptor, int i, int i2) throws RemoteException;

    void setCommandsStrArray(String[] strArr) throws RemoteException;

    void startRecognition() throws RemoteException;

    void stopRecognition() throws RemoteException;
}
