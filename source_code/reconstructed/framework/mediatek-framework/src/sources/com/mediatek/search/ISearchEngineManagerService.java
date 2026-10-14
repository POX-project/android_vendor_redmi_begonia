package com.mediatek.search;

import android.os.Binder;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.RemoteException;
import com.mediatek.common.search.SearchEngine;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface ISearchEngineManagerService extends IInterface {

    public static class Default implements ISearchEngineManagerService {
        @Override // android.os.IInterface
        public IBinder asBinder() {
            return null;
        }

        @Override // com.mediatek.search.ISearchEngineManagerService
        public List<SearchEngine> getAvailables() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.search.ISearchEngineManagerService
        public SearchEngine getBestMatch(String str, String str2) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.search.ISearchEngineManagerService
        public SearchEngine getDefault() throws RemoteException {
            return null;
        }

        @Override // com.mediatek.search.ISearchEngineManagerService
        public SearchEngine getSearchEngine(int i, String str) throws RemoteException {
            return null;
        }

        @Override // com.mediatek.search.ISearchEngineManagerService
        public boolean setDefault(SearchEngine searchEngine) throws RemoteException {
            return false;
        }
    }

    public static abstract class Stub extends Binder implements ISearchEngineManagerService {
        private static final String DESCRIPTOR = "com.mediatek.search.ISearchEngineManagerService";
        static final int TRANSACTION_getAvailables = 1;
        static final int TRANSACTION_getBestMatch = 3;
        static final int TRANSACTION_getDefault = 2;
        static final int TRANSACTION_getSearchEngine = 4;
        static final int TRANSACTION_setDefault = 5;

        private static class Proxy implements ISearchEngineManagerService {
            public static ISearchEngineManagerService sDefaultImpl;
            private IBinder mRemote;

            Proxy(IBinder iBinder) {
                this.mRemote = iBinder;
            }

            @Override // android.os.IInterface
            public IBinder asBinder() {
                return this.mRemote;
            }

            @Override // com.mediatek.search.ISearchEngineManagerService
            public List<SearchEngine> getAvailables() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(1, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getAvailables();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.createTypedArrayList(SearchEngine.CREATOR);
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.search.ISearchEngineManagerService
            public SearchEngine getBestMatch(String str, String str2) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeString(str);
                    parcelObtain.writeString(str2);
                    if (!this.mRemote.transact(3, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getBestMatch(str, str2);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (SearchEngine) SearchEngine.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.search.ISearchEngineManagerService
            public SearchEngine getDefault() throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (!this.mRemote.transact(2, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getDefault();
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (SearchEngine) SearchEngine.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            public String getInterfaceDescriptor() {
                return Stub.DESCRIPTOR;
            }

            @Override // com.mediatek.search.ISearchEngineManagerService
            public SearchEngine getSearchEngine(int i, String str) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    parcelObtain.writeInt(i);
                    parcelObtain.writeString(str);
                    if (!this.mRemote.transact(4, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().getSearchEngine(i, str);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0 ? (SearchEngine) SearchEngine.CREATOR.createFromParcel(parcelObtain2) : null;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }

            @Override // com.mediatek.search.ISearchEngineManagerService
            public boolean setDefault(SearchEngine searchEngine) throws RemoteException {
                Parcel parcelObtain = Parcel.obtain();
                Parcel parcelObtain2 = Parcel.obtain();
                try {
                    parcelObtain.writeInterfaceToken(Stub.DESCRIPTOR);
                    if (searchEngine != null) {
                        parcelObtain.writeInt(1);
                        searchEngine.writeToParcel(parcelObtain, 0);
                    } else {
                        parcelObtain.writeInt(0);
                    }
                    if (!this.mRemote.transact(5, parcelObtain, parcelObtain2, 0) && Stub.getDefaultImpl() != null) {
                        return Stub.getDefaultImpl().setDefault(searchEngine);
                    }
                    parcelObtain2.readException();
                    return parcelObtain2.readInt() != 0;
                } finally {
                    parcelObtain2.recycle();
                    parcelObtain.recycle();
                }
            }
        }

        public Stub() {
            attachInterface(this, DESCRIPTOR);
        }

        public static ISearchEngineManagerService asInterface(IBinder iBinder) {
            if (iBinder == null) {
                return null;
            }
            IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface(DESCRIPTOR);
            return (iInterfaceQueryLocalInterface == null || !(iInterfaceQueryLocalInterface instanceof ISearchEngineManagerService)) ? new Proxy(iBinder) : (ISearchEngineManagerService) iInterfaceQueryLocalInterface;
        }

        public static ISearchEngineManagerService getDefaultImpl() {
            return Proxy.sDefaultImpl;
        }

        public static boolean setDefaultImpl(ISearchEngineManagerService iSearchEngineManagerService) {
            if (Proxy.sDefaultImpl != null) {
                throw new IllegalStateException("setDefaultImpl() called twice");
            }
            if (iSearchEngineManagerService == null) {
                return false;
            }
            Proxy.sDefaultImpl = iSearchEngineManagerService;
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
                List<SearchEngine> availables = getAvailables();
                parcel2.writeNoException();
                parcel2.writeTypedList(availables);
                return true;
            }
            if (i == 2) {
                parcel.enforceInterface(DESCRIPTOR);
                SearchEngine searchEngine = getDefault();
                parcel2.writeNoException();
                if (searchEngine != null) {
                    parcel2.writeInt(1);
                    searchEngine.writeToParcel(parcel2, 1);
                } else {
                    parcel2.writeInt(0);
                }
                return true;
            }
            if (i == 3) {
                parcel.enforceInterface(DESCRIPTOR);
                SearchEngine bestMatch = getBestMatch(parcel.readString(), parcel.readString());
                parcel2.writeNoException();
                if (bestMatch != null) {
                    parcel2.writeInt(1);
                    bestMatch.writeToParcel(parcel2, 1);
                } else {
                    parcel2.writeInt(0);
                }
                return true;
            }
            if (i == 4) {
                parcel.enforceInterface(DESCRIPTOR);
                SearchEngine searchEngine2 = getSearchEngine(parcel.readInt(), parcel.readString());
                parcel2.writeNoException();
                if (searchEngine2 != null) {
                    parcel2.writeInt(1);
                    searchEngine2.writeToParcel(parcel2, 1);
                } else {
                    parcel2.writeInt(0);
                }
                return true;
            }
            if (i != 5) {
                if (i != 1598968902) {
                    return super.onTransact(i, parcel, parcel2, i2);
                }
                parcel2.writeString(DESCRIPTOR);
                return true;
            }
            parcel.enforceInterface(DESCRIPTOR);
            boolean z = setDefault(parcel.readInt() != 0 ? (SearchEngine) SearchEngine.CREATOR.createFromParcel(parcel) : null);
            parcel2.writeNoException();
            parcel2.writeInt(z ? 1 : 0);
            return true;
        }
    }

    List<SearchEngine> getAvailables() throws RemoteException;

    SearchEngine getBestMatch(String str, String str2) throws RemoteException;

    SearchEngine getDefault() throws RemoteException;

    SearchEngine getSearchEngine(int i, String str) throws RemoteException;

    boolean setDefault(SearchEngine searchEngine) throws RemoteException;
}
