package org.mipay.android.manager;

import android.app.Service;
import android.content.Intent;
import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import vendor.xiaomi.hardware.tidaservice.V1_1.ITidaService;

/* JADX INFO: loaded from: classes.dex */
public class MipayService extends Service {
    private ITidaService mService;
    private final IBinder mTidaBinder = new MipayServiceStub(this);

    private final class MipayServiceStub extends IMipayService.Stub {
        MipayServiceStub(MipayService mipayService) {
            new WeakReference(mipayService);
        }

        @Override // org.mipay.android.manager.IMipayService
        public boolean contains(int i, String str) {
            boolean zContains_1_1 = false;
            try {
                MipayService.this.initService();
                if (MipayService.this.mService != null) {
                    zContains_1_1 = MipayService.this.mService.contains_1_1(i, str);
                } else {
                    Log.e("MipayService", "ITidaService not found");
                }
            } catch (RemoteException e) {
                Log.e("MipayService", "transact fail. " + e);
            }
            return zContains_1_1;
        }

        @Override // org.mipay.android.manager.IMipayService
        public int generateKeyPair(int i, String str, String str2) {
            int iGenerateKeyPair_1_1 = -1;
            try {
                MipayService.this.initService();
                if (MipayService.this.mService != null) {
                    iGenerateKeyPair_1_1 = MipayService.this.mService.generateKeyPair_1_1(i, str, str2);
                } else {
                    Log.e("MipayService", "ITidaService not found");
                }
            } catch (RemoteException e) {
                Log.e("MipayService", "transact fail. " + e);
            }
            return iGenerateKeyPair_1_1;
        }

        @Override // org.mipay.android.manager.IMipayService
        public String getFpIds() {
            String fpIds = "";
            try {
                MipayService.this.initService();
                if (MipayService.this.mService != null) {
                    fpIds = MipayService.this.mService.getFpIds();
                } else {
                    Log.e("MipayService", "ITidaService not found");
                }
            } catch (RemoteException e) {
                Log.e("MipayService", "transact fail. " + e);
            }
            return fpIds;
        }

        @Override // org.mipay.android.manager.IMipayService
        public int removeAllKey(int i) {
            int iRemoveAllKey_1_1 = -1;
            try {
                MipayService.this.initService();
                if (MipayService.this.mService != null) {
                    iRemoveAllKey_1_1 = MipayService.this.mService.removeAllKey_1_1(i);
                } else {
                    Log.e("MipayService", "ITidaService not found");
                }
            } catch (RemoteException e) {
                Log.e("MipayService", "transact fail. " + e);
            }
            return iRemoveAllKey_1_1;
        }

        @Override // org.mipay.android.manager.IMipayService
        public byte[] sign() {
            try {
                MipayService.this.initService();
                if (MipayService.this.mService == null) {
                    Log.e("MipayService", "ITidaService not found");
                    Log.e("MipayService", "sign fail, return null");
                    return null;
                }
                ArrayList<Byte> arrayListSign = MipayService.this.mService.sign();
                int size = arrayListSign.size();
                byte[] bArr = new byte[size];
                for (int i = 0; i < size; i++) {
                    bArr[i] = arrayListSign.get(i).byteValue();
                }
                return bArr;
            } catch (RemoteException e) {
                Log.e("MipayService", "transact fail. " + e);
            }
        }

        @Override // org.mipay.android.manager.IMipayService
        public int signInit(int i, String str, String str2) {
            int iSignInit_1_1 = -1;
            try {
                MipayService.this.initService();
                if (MipayService.this.mService != null) {
                    iSignInit_1_1 = MipayService.this.mService.signInit_1_1(i, str, str2);
                } else {
                    Log.e("MipayService", "ITidaService not found");
                }
            } catch (RemoteException e) {
                Log.e("MipayService", "transact fail. " + e);
            }
            return iSignInit_1_1;
        }

        @Override // org.mipay.android.manager.IMipayService
        public int signUpdate(int i, String str) {
            int iSignUpdate_1_1 = -1;
            try {
                MipayService.this.initService();
                if (MipayService.this.mService != null) {
                    iSignUpdate_1_1 = MipayService.this.mService.signUpdate_1_1(i, str);
                } else {
                    Log.e("MipayService", "ITidaService not found");
                }
            } catch (RemoteException e) {
                Log.e("MipayService", "transact fail. " + e);
            }
            return iSignUpdate_1_1;
        }
    }

    public MipayService() {
        Log.v("MipayService", "MipayService");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void initService() throws RemoteException {
        if (this.mService == null) {
            this.mService = ITidaService.getService();
        } else {
            Log.i("MipayService", "mService is not null, skip initService.");
        }
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        Log.v("MipayService", "OnBind");
        return this.mTidaBinder;
    }

    @Override // android.app.Service
    public void onCreate() {
        Log.v("MipayService", "OnCreate");
        super.onCreate();
    }

    @Override // android.app.Service
    public void onDestroy() {
        Log.v("MipayService", "onDestroy");
        this.mService = null;
    }
}
