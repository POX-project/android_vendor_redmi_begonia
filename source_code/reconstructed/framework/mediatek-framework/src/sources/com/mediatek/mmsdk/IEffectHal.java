package com.mediatek.mmsdk;

import android.graphics.GraphicBuffer;
import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface IEffectHal extends IInterface {

    public static class Default implements IEffectHal {
        @Override // com.mediatek.mmsdk.IEffectHal
        public int abort(BaseParameters baseParameters) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int addInputFrame(GraphicBuffer graphicBuffer, BaseParameters baseParameters) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int addOutputFrame(GraphicBuffer graphicBuffer, BaseParameters baseParameters) throws RemoteException {
            return 0;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int configure() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int getCaptureRequirement(BaseParameters baseParameters) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int getNameVersion(EffectHalVersion effectHalVersion) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int init() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int prepare() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int release() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int setEffectListener(IEffectListener iEffectListener) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int setParameter(String str, String str2) throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public long start() throws RemoteException {
            return 0L;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int unconfigure() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.mmsdk.IEffectHal
        public int uninit() throws RemoteException {
            return 0;
        }
    }

    public static abstract class Stub extends Binder implements IEffectHal {
        private static final String DESCRIPTOR = "com.mediatek.mmsdk.IEffectHal";
        static final int TRANSACTION_abort = 6;
        static final int TRANSACTION_addInputFrame = 13;
        static final int TRANSACTION_addOutputFrame = 14;
        static final int TRANSACTION_configure = 3;
        static final int TRANSACTION_getCaptureRequirement = 10;
        static final int TRANSACTION_getNameVersion = 7;
        static final int TRANSACTION_init = 1;
        static final int TRANSACTION_prepare = 11;
        static final int TRANSACTION_release = 12;
        static final int TRANSACTION_setEffectListener = 8;
        static final int TRANSACTION_setParameter = 9;
        static final int TRANSACTION_start = 5;
        static final int TRANSACTION_unconfigure = 4;
        static final int TRANSACTION_uninit = 2;

        private static class Proxy implements IEffectHal {
            public static IEffectHal sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int abort(BaseParameters baseParameters) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (baseParameters != null) {
                        parcelObtain.writeInt(1);
                        baseParameters.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(6, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().abort(baseParameters);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int addInputFrame(GraphicBuffer graphicBuffer, BaseParameters baseParameters) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (graphicBuffer != null) {
                        parcelObtain.writeInt(1);
                        graphicBuffer.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (baseParameters != null) {
                        parcelObtain.writeInt(1);
                        baseParameters.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(13, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().addInputFrame(graphicBuffer, baseParameters);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int addOutputFrame(GraphicBuffer graphicBuffer, BaseParameters baseParameters) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (graphicBuffer != null) {
                        parcelObtain.writeInt(1);
                        graphicBuffer.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (baseParameters != null) {
                        parcelObtain.writeInt(1);
                        baseParameters.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(14, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().addOutputFrame(graphicBuffer, baseParameters);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int configure() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().configure();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int getCaptureRequirement(BaseParameters baseParameters) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(10, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getCaptureRequirement(baseParameters);
                    }
                    parcelObtain2.readException();
                    int i = parcelObtain2.readInt();
                    if (parcelObtain2.readInt() != 0) {
                        baseParameters.readFromParcel(parcelObtain2);
                    }
                    return i;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int getNameVersion(EffectHalVersion effectHalVersion) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(7, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getNameVersion(effectHalVersion);
                    }
                    parcelObtain2.readException();
                    int i = parcelObtain2.readInt();
                    if (parcelObtain2.readInt() != 0) {
                        effectHalVersion.readFromParcel(parcelObtain2);
                    }
                    return i;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int init() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().init();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int prepare() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(11, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().prepare();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int release() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(12, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().release();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int setEffectListener(IEffectListener iEffectListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeStrongBinder(iEffectListener != null ? iEffectListener.asBinder() : null);
                    if (!this.mRemote.transact(8, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setEffectListener(iEffectListener);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int setParameter(String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(9, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setParameter(str, str2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public long start() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().start();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readLong();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int unconfigure() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().unconfigure();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.mmsdk.IEffectHal
            public int uninit() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().uninit();
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

        public static IEffectHal asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof IEffectHal)) ? new Proxy(iBinder) : (IEffectHal) iInterfaceQueryLocalInterface;
        }

        public static IEffectHal getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(IEffectHal iEffectHal) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iEffectHal == null) {
                return false;
            }
            Proxy.sDefaultImpl = iEffectHal;
            return true;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i == 1598968902) {
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            switch (i) {
                case 1:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iInit = init();
                    parcel2.writeNoException();
                    parcel2.writeInt(iInit);
                    return true;
                case 2:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iUninit = uninit();
                    parcel2.writeNoException();
                    parcel2.writeInt(iUninit);
                    return true;
                case 3:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iConfigure = configure();
                    parcel2.writeNoException();
                    parcel2.writeInt(iConfigure);
                    return true;
                case 4:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iUnconfigure = unconfigure();
                    parcel2.writeNoException();
                    parcel2.writeInt(iUnconfigure);
                    return true;
                case 5:
                    parcel.enforceInterface(DESCRIPTOR);
                    long jStart = start();
                    parcel2.writeNoException();
                    parcel2.writeLong(jStart);
                    return true;
                case 6:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iAbort = abort(parcel.readInt() != 0 ? BaseParameters.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    parcel2.writeInt(iAbort);
                    return true;
                case 7:
                    parcel.enforceInterface(DESCRIPTOR);
                    EffectHalVersion effectHalVersion = new EffectHalVersion();
                    int nameVersion = getNameVersion(effectHalVersion);
                    parcel2.writeNoException();
                    parcel2.writeInt(nameVersion);
                    parcel2.writeInt(1);
                    effectHalVersion.writeToParcel(parcel2, 1);
                    return true;
                case 8:
                    parcel.enforceInterface(DESCRIPTOR);
                    int effectListener = setEffectListener(IEffectListener.Stub.asInterface(parcel.readStrongBinder()));
                    parcel2.writeNoException();
                    parcel2.writeInt(effectListener);
                    return true;
                case 9:
                    parcel.enforceInterface(DESCRIPTOR);
                    int parameter = setParameter(parcel.readString(), parcel.readString());
                    parcel2.writeNoException();
                    parcel2.writeInt(parameter);
                    return true;
                case 10:
                    parcel.enforceInterface(DESCRIPTOR);
                    BaseParameters baseParameters = new BaseParameters();
                    int captureRequirement = getCaptureRequirement(baseParameters);
                    parcel2.writeNoException();
                    parcel2.writeInt(captureRequirement);
                    parcel2.writeInt(1);
                    baseParameters.writeToParcel(parcel2, 1);
                    return true;
                case 11:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iPrepare = prepare();
                    parcel2.writeNoException();
                    parcel2.writeInt(iPrepare);
                    return true;
                case 12:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iRelease = release();
                    parcel2.writeNoException();
                    parcel2.writeInt(iRelease);
                    return true;
                case 13:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iAddInputFrame = addInputFrame(parcel.readInt() != 0 ? (GraphicBuffer) GraphicBuffer.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? BaseParameters.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    parcel2.writeInt(iAddInputFrame);
                    return true;
                case 14:
                    parcel.enforceInterface(DESCRIPTOR);
                    int iAddOutputFrame = addOutputFrame(parcel.readInt() != 0 ? (GraphicBuffer) GraphicBuffer.CREATOR.createFromParcel(parcel) : null, parcel.readInt() != 0 ? BaseParameters.CREATOR.createFromParcel(parcel) : null);
                    parcel2.writeNoException();
                    parcel2.writeInt(iAddOutputFrame);
                    return true;
                default:
                    return super.onTransact(i, parcel, parcel2, i2);
            }
        }
    }

    int abort(BaseParameters baseParameters) throws RemoteException;

    int addInputFrame(GraphicBuffer graphicBuffer, BaseParameters baseParameters) throws RemoteException;

    int addOutputFrame(GraphicBuffer graphicBuffer, BaseParameters baseParameters) throws RemoteException;

    int configure() throws RemoteException;

    int getCaptureRequirement(BaseParameters baseParameters) throws RemoteException;

    int getNameVersion(EffectHalVersion effectHalVersion) throws RemoteException;

    int init() throws RemoteException;

    int prepare() throws RemoteException;

    int release() throws RemoteException;

    int setEffectListener(IEffectListener iEffectListener) throws RemoteException;

    int setParameter(String str, String str2) throws RemoteException;

    long start() throws RemoteException;

    int unconfigure() throws RemoteException;

    int uninit() throws RemoteException;
}
