package com.mediatek.dm;

import android.content.Context;
import android.os.IBinder;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public final class DmManager {
    private static final String TAG = "DmManager";
    private static DmManager mDmManager = null;
    private static IDmService mService;
    private final Context mContext;

    DmManager(Context context) {
        this.mContext = context;
    }

    public static DmManager getDefaultDmManager(Context context) {
        if (context == null) {
            throw new IllegalArgumentException("context cannot be null");
        }
        synchronized (DmManager.class) {
            if (mDmManager == null) {
                IBinder service = ServiceManager.getService("GbaDmService");
                if (service == null) {
                    Log.i("debug", "[getDefaultDmManager]The binder is null");
                    return null;
                }
                mService = IDmService.Stub.asInterface(service);
                mDmManager = new DmManager(context);
            }
            return mDmManager;
        }
    }

    public int getDmSupported() {
        try {
            return mService.getDmSupported();
        } catch (RemoteException e) {
            return 0;
        }
    }

    public boolean getImcProvision(int i, int i2) {
        Log.d(TAG, "DmManager getImcProvision for feature=" + i2);
        try {
            return mService.getImcProvision(i, i2);
        } catch (RemoteException e) {
            return true;
        }
    }

    public boolean setImcProvision(int i, int i2, int i3) {
        Log.d(TAG, "DmManager setImcProvision for feature=" + i2 + ", en = " + i3);
        try {
            return mService.setImcProvision(i, i2, i3);
        } catch (RemoteException e) {
            return false;
        }
    }
}
