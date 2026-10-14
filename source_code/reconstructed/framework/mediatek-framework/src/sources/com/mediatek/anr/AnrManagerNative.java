package com.mediatek.anr;

import android.os.Binder;
import android.os.IBinder;
import android.os.Parcel;
import android.os.RemoteException;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes.dex */
public abstract class AnrManagerNative extends Binder implements IAnrManager {
    private static Method sGetService = getServiceManagerMethod("getService", new Class[]{String.class});
    private static final Singleton<IAnrManager> gDefault = new Singleton<IAnrManager>() { // from class: com.mediatek.anr.AnrManagerNative.1
        /* JADX INFO: Access modifiers changed from: protected */
        /* JADX WARN: Can't rename method to resolve collision */
        @Override // com.mediatek.anr.AnrManagerNative.Singleton
        public IAnrManager create() {
            IBinder iBinder = null;
            try {
                iBinder = (IBinder) AnrManagerNative.sGetService.invoke(null, "anrmanager");
            } catch (Exception e) {
            }
            return AnrManagerNative.asInterface(iBinder);
        }
    };

    static abstract class Singleton<T> {
        private T mInstance;

        Singleton() {
        }

        protected abstract T create();

        public final T get() {
            T t;
            synchronized (this) {
                if (this.mInstance == null) {
                    this.mInstance = create();
                }
                t = this.mInstance;
            }
            return t;
        }
    }

    public AnrManagerNative() {
        attachInterface(this, IAnrManager.descriptor);
    }

    public static IAnrManager asInterface(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IAnrManager iAnrManager = (IAnrManager) iBinder.queryLocalInterface(IAnrManager.descriptor);
        return iAnrManager != null ? iAnrManager : new AnrManagerProxy(iBinder);
    }

    public static IAnrManager getDefault() {
        return gDefault.get();
    }

    private static Method getServiceManagerMethod(String str, Class[] clsArr) {
        try {
            return Class.forName("android.os.ServiceManager").getDeclaredMethod(str, clsArr);
        } catch (Exception e) {
            return null;
        }
    }

    @Override // android.os.IInterface
    public IBinder asBinder() {
        return this;
    }

    @Override // android.os.Binder
    public boolean onTransact(int i, Parcel parcel, Parcel parcel2, int i2) throws RemoteException {
        if (i != 2) {
            return super.onTransact(i, parcel, parcel2, i2);
        }
        parcel.enforceInterface(IAnrManager.descriptor);
        informMessageDump(parcel.readString(), parcel.readInt());
        return true;
    }
}
