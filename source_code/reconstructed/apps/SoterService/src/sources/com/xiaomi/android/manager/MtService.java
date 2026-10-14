package com.xiaomi.android.manager;

import android.app.Service;
import android.content.Intent;
import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;
import java.lang.ref.WeakReference;
import vendor.xiaomi.hardware.mtdservice.V1_1.IMTService;

/* JADX INFO: loaded from: classes.dex */
public class MtService extends Service {
    private final IBinder mMtBinder = new MtServiceStub(this, this);

    private final class MtServiceStub extends IMtService.Stub {
        private IMTService mService = null;

        MtServiceStub(MtService mtService, MtService mtService2) {
            new WeakReference(mtService2);
        }

        private IMTService getInstance() throws RemoteException {
            if (this.mService == null) {
                try {
                    this.mService = IMTService.getService();
                } catch (RemoteException e) {
                    Log.e("MTServiceJava", "obtain mtservice fail: " + e);
                    throw e;
                }
            }
            return this.mService;
        }

        @Override // com.xiaomi.android.manager.IMtService
        public byte[] widevineDump() {
            try {
                return getInstance().widevine_dump().getBytes();
            } catch (RemoteException e) {
                Log.e("MTServiceJava", "widevineDump fail: " + e);
                return null;
            }
        }

        @Override // com.xiaomi.android.manager.IMtService
        public int widevineGetVersion() {
            try {
                return getInstance().widevine_get_version();
            } catch (RemoteException e) {
                Log.e("MTServiceJava", "widevineGetVersion fail: " + e);
                return 0;
            }
        }

        @Override // com.xiaomi.android.manager.IMtService
        public int widevineLoad(byte[] bArr, byte[] bArr2) {
            try {
                return getInstance().widevine_load(new String(bArr), new String(bArr2));
            } catch (RemoteException e) {
                Log.e("MTServiceJava", "widevineLoad fail: " + e);
                return -1;
            }
        }

        @Override // com.xiaomi.android.manager.IMtService
        public byte[] widevinePrepare() {
            try {
                return getInstance().widevine_prepare().getBytes();
            } catch (RemoteException e) {
                Log.e("MTServiceJava", "widevinePrepare fail: " + e);
                return null;
            }
        }
    }

    public MtService() {
        Log.v("MTServiceJava", "MtService");
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        Log.v("MTServiceJava", "OnCreate");
        return this.mMtBinder;
    }

    @Override // android.app.Service
    public void onCreate() {
        Log.v("MTServiceJava", "OnCreate");
        super.onCreate();
    }

    @Override // android.app.Service
    public void onDestroy() {
        Log.v("MTServiceJava", "OnDestroy");
        super.onDestroy();
    }
}
