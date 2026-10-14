package com.mediatek.common.operamax;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;

/* JADX INFO: loaded from: classes.dex */
public interface ILoaderService extends IInterface {
    public static final String DESCRIPTOR = "com.mediatek.common.operamax.ILoaderService";

    public static class Default implements ILoaderService {
        @Override // com.mediatek.common.operamax.ILoaderService
        public void addDirectedApp(String str) throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void addDirectedHeaderField(String str, String str2) throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void addDirectedHost(String str) throws RemoteException {
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public int getCompressLevel() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public String[] getDirectedAppList() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public String[] getDirectedHeaderFieldList() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public String[] getDirectedHostList() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public int getSavingState() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public int getTunnelState() throws RemoteException {
            return 0;
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public boolean isAppDirected(String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public boolean isHeaderFieldDirected(String str, String str2) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public boolean isHostDirected(String str) throws RemoteException {
            return false;
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void launchOperaMAX() throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void registerStateListener(ILoaderStateListener iLoaderStateListener) throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void removeAllDirectedApps() throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void removeAllDirectedHeaderFields() throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void removeAllDirectedHosts() throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void removeDirectedApp(String str) throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void removeDirectedHeaderField(String str, String str2) throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void removeDirectedHost(String str) throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void setCompressLevel(int i) throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void startSaving() throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void stopSaving() throws RemoteException {
        }

        @Override // com.mediatek.common.operamax.ILoaderService
        public void unregisterStateListener(ILoaderStateListener iLoaderStateListener) throws RemoteException {
        }
    }

    public static abstract class Stub extends Binder implements ILoaderService {
        static final int TRANSACTION_addDirectedApp = 8;
        static final int TRANSACTION_addDirectedHeaderField = 18;
        static final int TRANSACTION_addDirectedHost = 13;
        static final int TRANSACTION_getCompressLevel = 24;
        static final int TRANSACTION_getDirectedAppList = 12;
        static final int TRANSACTION_getDirectedHeaderFieldList = 22;
        static final int TRANSACTION_getDirectedHostList = 17;
        static final int TRANSACTION_getSavingState = 4;
        static final int TRANSACTION_getTunnelState = 3;
        static final int TRANSACTION_isAppDirected = 11;
        static final int TRANSACTION_isHeaderFieldDirected = 21;
        static final int TRANSACTION_isHostDirected = 16;
        static final int TRANSACTION_launchOperaMAX = 7;
        static final int TRANSACTION_registerStateListener = 5;
        static final int TRANSACTION_removeAllDirectedApps = 10;
        static final int TRANSACTION_removeAllDirectedHeaderFields = 20;
        static final int TRANSACTION_removeAllDirectedHosts = 15;
        static final int TRANSACTION_removeDirectedApp = 9;
        static final int TRANSACTION_removeDirectedHeaderField = 19;
        static final int TRANSACTION_removeDirectedHost = 14;
        static final int TRANSACTION_setCompressLevel = 23;
        static final int TRANSACTION_startSaving = 1;
        static final int TRANSACTION_stopSaving = 2;
        static final int TRANSACTION_unregisterStateListener = 6;

        private static class Proxy implements ILoaderService {
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void addDirectedApp(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(8, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void addDirectedHeaderField(String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    this.mRemote.transact(18, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void addDirectedHost(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(13, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public int getCompressLevel() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(Stub.TRANSACTION_getCompressLevel, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public String[] getDirectedAppList() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(12, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public String[] getDirectedHeaderFieldList() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(22, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public String[] getDirectedHostList() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(17, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.createStringArray();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return ILoaderService.DESCRIPTOR;
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public int getSavingState() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(4, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public int getTunnelState() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(3, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readInt();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public boolean isAppDirected(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(11, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public boolean isHeaderFieldDirected(String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    this.mRemote.transact(21, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public boolean isHostDirected(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(16, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                    return parcelObtain2.readBoolean();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void launchOperaMAX() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(7, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void registerStateListener(ILoaderStateListener iLoaderStateListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iLoaderStateListener);
                    this.mRemote.transact(5, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void removeAllDirectedApps() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(10, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void removeAllDirectedHeaderFields() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(20, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void removeAllDirectedHosts() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(15, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void removeDirectedApp(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(9, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void removeDirectedHeaderField(String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    this.mRemote.transact(19, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void removeDirectedHost(String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    this.mRemote.transact(14, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void setCompressLevel(int i) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    this.mRemote.transact(Stub.TRANSACTION_setCompressLevel, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void startSaving() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(1, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void stopSaving() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    this.mRemote.transact(2, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.common.operamax.ILoaderService
            public void unregisterStateListener(ILoaderStateListener iLoaderStateListener) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(ILoaderService.DESCRIPTOR);
                    parcelObtain.writeStrongInterface(iLoaderStateListener);
                    this.mRemote.transact(6, parcelObtain, parcelObtain2, 0);
                    parcelObtain2.readException();
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, ILoaderService.DESCRIPTOR);
        }

        public static ILoaderService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(ILoaderService.DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof ILoaderService)) ? new Proxy(iBinder) : (ILoaderService) iInterfaceQueryLocalInterface;
        }

        @Override // android.os.IInterface
        public IBinder asBinder() {
            return this;
        }

        @Override // android.os.Binder
        public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
            if (i >= 1 && i <= 16777215) {
                parcel.enforceInterface(ILoaderService.DESCRIPTOR);
            }
            switch (i) {
                case 1598968902:
                    parcel2.writeString(ILoaderService.DESCRIPTOR);
                    return true;
                default:
                    switch (i) {
                        case 1:
                            startSaving();
                            parcel2.writeNoException();
                            return true;
                        case 2:
                            stopSaving();
                            parcel2.writeNoException();
                            return true;
                        case 3:
                            int tunnelState = getTunnelState();
                            parcel2.writeNoException();
                            parcel2.writeInt(tunnelState);
                            return true;
                        case 4:
                            int savingState = getSavingState();
                            parcel2.writeNoException();
                            parcel2.writeInt(savingState);
                            return true;
                        case 5:
                            ILoaderStateListener iLoaderStateListenerAsInterface = ILoaderStateListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            registerStateListener(iLoaderStateListenerAsInterface);
                            parcel2.writeNoException();
                            return true;
                        case 6:
                            ILoaderStateListener iLoaderStateListenerAsInterface2 = ILoaderStateListener.Stub.asInterface(parcel.readStrongBinder());
                            parcel.enforceNoDataAvail();
                            unregisterStateListener(iLoaderStateListenerAsInterface2);
                            parcel2.writeNoException();
                            return true;
                        case 7:
                            launchOperaMAX();
                            parcel2.writeNoException();
                            return true;
                        case 8:
                            String string = parcel.readString();
                            parcel.enforceNoDataAvail();
                            addDirectedApp(string);
                            parcel2.writeNoException();
                            return true;
                        case 9:
                            String string2 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            removeDirectedApp(string2);
                            parcel2.writeNoException();
                            return true;
                        case 10:
                            removeAllDirectedApps();
                            parcel2.writeNoException();
                            return true;
                        case 11:
                            String string3 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            boolean zIsAppDirected = isAppDirected(string3);
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zIsAppDirected);
                            return true;
                        case 12:
                            String[] directedAppList = getDirectedAppList();
                            parcel2.writeNoException();
                            parcel2.writeStringArray(directedAppList);
                            return true;
                        case 13:
                            String string4 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            addDirectedHost(string4);
                            parcel2.writeNoException();
                            return true;
                        case 14:
                            String string5 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            removeDirectedHost(string5);
                            parcel2.writeNoException();
                            return true;
                        case 15:
                            removeAllDirectedHosts();
                            parcel2.writeNoException();
                            return true;
                        case 16:
                            String string6 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            boolean zIsHostDirected = isHostDirected(string6);
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zIsHostDirected);
                            return true;
                        case 17:
                            String[] directedHostList = getDirectedHostList();
                            parcel2.writeNoException();
                            parcel2.writeStringArray(directedHostList);
                            return true;
                        case 18:
                            String string7 = parcel.readString();
                            String string8 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            addDirectedHeaderField(string7, string8);
                            parcel2.writeNoException();
                            return true;
                        case 19:
                            String string9 = parcel.readString();
                            String string10 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            removeDirectedHeaderField(string9, string10);
                            parcel2.writeNoException();
                            return true;
                        case 20:
                            removeAllDirectedHeaderFields();
                            parcel2.writeNoException();
                            return true;
                        case 21:
                            String string11 = parcel.readString();
                            String string12 = parcel.readString();
                            parcel.enforceNoDataAvail();
                            boolean zIsHeaderFieldDirected = isHeaderFieldDirected(string11, string12);
                            parcel2.writeNoException();
                            parcel2.writeBoolean(zIsHeaderFieldDirected);
                            return true;
                        case 22:
                            String[] directedHeaderFieldList = getDirectedHeaderFieldList();
                            parcel2.writeNoException();
                            parcel2.writeStringArray(directedHeaderFieldList);
                            return true;
                        case TRANSACTION_setCompressLevel /* 23 */:
                            int i3 = parcel.readInt();
                            parcel.enforceNoDataAvail();
                            setCompressLevel(i3);
                            parcel2.writeNoException();
                            return true;
                        case TRANSACTION_getCompressLevel /* 24 */:
                            int compressLevel = getCompressLevel();
                            parcel2.writeNoException();
                            parcel2.writeInt(compressLevel);
                            return true;
                        default:
                            return super.onTransact(i, parcel, parcel2, i2);
                    }
            }
        }
    }

    void addDirectedApp(String str) throws RemoteException;

    void addDirectedHeaderField(String str, String str2) throws RemoteException;

    void addDirectedHost(String str) throws RemoteException;

    int getCompressLevel() throws RemoteException;

    String[] getDirectedAppList() throws RemoteException;

    String[] getDirectedHeaderFieldList() throws RemoteException;

    String[] getDirectedHostList() throws RemoteException;

    int getSavingState() throws RemoteException;

    int getTunnelState() throws RemoteException;

    boolean isAppDirected(String str) throws RemoteException;

    boolean isHeaderFieldDirected(String str, String str2) throws RemoteException;

    boolean isHostDirected(String str) throws RemoteException;

    void launchOperaMAX() throws RemoteException;

    void registerStateListener(ILoaderStateListener iLoaderStateListener) throws RemoteException;

    void removeAllDirectedApps() throws RemoteException;

    void removeAllDirectedHeaderFields() throws RemoteException;

    void removeAllDirectedHosts() throws RemoteException;

    void removeDirectedApp(String str) throws RemoteException;

    void removeDirectedHeaderField(String str, String str2) throws RemoteException;

    void removeDirectedHost(String str) throws RemoteException;

    void setCompressLevel(int i) throws RemoteException;

    void startSaving() throws RemoteException;

    void stopSaving() throws RemoteException;

    void unregisterStateListener(ILoaderStateListener iLoaderStateListener) throws RemoteException;
}
