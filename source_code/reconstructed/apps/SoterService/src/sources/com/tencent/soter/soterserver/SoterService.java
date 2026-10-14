package com.tencent.soter.soterserver;

import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import vendor.microtrust.hardware.soter.V1_0.ISoter;

/* JADX INFO: loaded from: classes.dex */
public class SoterService extends Service {
    private final IBinder mBinder = new ServiceStub(this);

    private final class ServiceStub extends ISoterService.Stub {
        ServiceStub(SoterService soterService) {
            new WeakReference(soterService);
        }

        @Override // com.tencent.soter.soterserver.ISoterService
        public String aidlAuth() throws RemoteException {
            return null;
        }

        @Override // com.tencent.soter.soterserver.ISoterService
        public SoterSignResult finishSign(long j) throws RemoteException {
            Log.i("SoterService", "finishSignImp in");
            final SoterSignResult soterSignResult = new SoterSignResult();
            if (j == 0) {
                soterSignResult.resultCode = -204;
            }
            try {
                ISoter service = ISoter.getService();
                if (service != null) {
                    Log.i("SoterService", "start initSign");
                    service.finishSign(j, new ISoter.finishSignCallback() { // from class: com.tencent.soter.soterserver.SoterService.ServiceStub.4
                        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter.finishSignCallback
                        public void onValues(int i, ArrayList<Byte> arrayList, int i2) {
                            SoterSignResult soterSignResult2 = soterSignResult;
                            soterSignResult2.resultCode = i;
                            soterSignResult2.exportData = SoterService.this.listTobyte(arrayList);
                            soterSignResult.exportDataLength = i2;
                        }
                    });
                } else {
                    Log.e("SoterService", "soterService is null");
                }
            } catch (Exception e) {
                Log.e("SoterService", e.toString());
            }
            Log.i("SoterService", "finishSignImp errcode:" + soterSignResult.resultCode);
            return soterSignResult;
        }

        @Override // com.tencent.soter.soterserver.ISoterService
        public int generateAppSecureKey(int i) throws RemoteException {
            Log.i("SoterService", "generateAppSecureKey in");
            int iGenerateAskKeyPair = -200;
            try {
                ISoter service = ISoter.getService();
                if (service != null) {
                    Log.i("SoterService", "start generateAppSecureKey");
                    iGenerateAskKeyPair = service.generateAskKeyPair(Binder.getCallingUid());
                } else {
                    Log.e("SoterService", "soterService is null");
                }
            } catch (Exception e) {
                Log.e("SoterService", e.toString());
            }
            Log.i("SoterService", "generateAppSecureKey errcode:" + iGenerateAskKeyPair);
            return iGenerateAskKeyPair;
        }

        @Override // com.tencent.soter.soterserver.ISoterService
        public int generateAuthKey(int i, String str) throws RemoteException {
            Log.i("SoterService", "generateAuthKey in");
            if (str == null || str.length() == 0) {
                return -202;
            }
            int iGenerateAuthKeyPair = -200;
            try {
                ISoter service = ISoter.getService();
                if (service != null) {
                    Log.i("SoterService", "start generateAuthKey");
                    iGenerateAuthKeyPair = service.generateAuthKeyPair(Binder.getCallingUid(), str);
                } else {
                    Log.e("SoterService", "soterService is null");
                }
            } catch (Exception e) {
                Log.e("SoterService", e.toString());
            }
            Log.i("SoterService", "generateAuthKey errcode:" + iGenerateAuthKeyPair);
            return iGenerateAuthKeyPair;
        }

        @Override // com.tencent.soter.soterserver.ISoterService
        public SoterExportResult getAppSecureKey(int i) throws RemoteException {
            Log.i("SoterService", "getAppSecureKeyImp in");
            final SoterExportResult soterExportResult = new SoterExportResult();
            soterExportResult.resultCode = -1000;
            try {
                ISoter service = ISoter.getService();
                if (service != null) {
                    Log.i("SoterService", "start exportAskPublicKey");
                    service.exportAskPublicKey(Binder.getCallingUid(), new ISoter.exportAskPublicKeyCallback() { // from class: com.tencent.soter.soterserver.SoterService.ServiceStub.1
                        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter.exportAskPublicKeyCallback
                        public void onValues(int i2, ArrayList<Byte> arrayList, int i3) {
                            SoterExportResult soterExportResult2 = soterExportResult;
                            soterExportResult2.resultCode = i2;
                            soterExportResult2.exportData = SoterService.this.listTobyte(arrayList);
                            soterExportResult.exportDataLength = i3;
                        }
                    });
                }
            } catch (Exception e) {
                soterExportResult.resultCode = -200;
                Log.e("SoterService", "exception" + e.toString());
            }
            return soterExportResult;
        }

        @Override // com.tencent.soter.soterserver.ISoterService
        public SoterExportResult getAuthKey(int i, String str) throws RemoteException {
            Log.i("SoterService", "getAuthKey in");
            final SoterExportResult soterExportResult = new SoterExportResult();
            soterExportResult.resultCode = -1000;
            if (str == null || str.length() == 0) {
                soterExportResult.resultCode = -202;
                return soterExportResult;
            }
            try {
                ISoter service = ISoter.getService();
                if (service != null) {
                    Log.i("SoterService", "start exportAuthKeyPublicKey");
                    service.exportAuthKeyPublicKey(Binder.getCallingUid(), str, new ISoter.exportAuthKeyPublicKeyCallback() { // from class: com.tencent.soter.soterserver.SoterService.ServiceStub.2
                        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter.exportAuthKeyPublicKeyCallback
                        public void onValues(int i2, ArrayList<Byte> arrayList, int i3) {
                            SoterExportResult soterExportResult2 = soterExportResult;
                            soterExportResult2.resultCode = i2;
                            soterExportResult2.exportData = SoterService.this.listTobyte(arrayList);
                            soterExportResult.exportDataLength = i3;
                        }
                    });
                }
            } catch (Exception e) {
                Log.e("SoterService", e.toString());
            }
            Log.i("SoterService", "exportAuthKeyPublicKey errcode:" + soterExportResult.resultCode);
            return soterExportResult;
        }

        @Override // com.tencent.soter.soterserver.ISoterService
        public SoterDeviceResult getDeviceId() throws RemoteException {
            Log.i("SoterService", "getDeviceIdImp in");
            final SoterDeviceResult soterDeviceResult = new SoterDeviceResult();
            try {
                ISoter service = ISoter.getService();
                if (service != null) {
                    Log.i("SoterService", "start getDeviceId");
                    service.getDeviceId(new ISoter.getDeviceIdCallback() { // from class: com.tencent.soter.soterserver.SoterService.ServiceStub.5
                        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter.getDeviceIdCallback
                        public void onValues(int i, ArrayList<Byte> arrayList, int i2) {
                            SoterDeviceResult soterDeviceResult2 = soterDeviceResult;
                            soterDeviceResult2.resultCode = i;
                            soterDeviceResult2.exportData = SoterService.this.listTobyte(arrayList);
                            soterDeviceResult.exportDataLength = i2;
                        }
                    });
                } else {
                    Log.e("SoterService", "soterService is null");
                }
            } catch (Exception e) {
                Log.e("SoterService", e.toString());
            }
            Log.i("SoterService", "getDeviceId errcode:" + soterDeviceResult.resultCode);
            return soterDeviceResult;
        }

        @Override // com.tencent.soter.soterserver.ISoterService
        public int getVersion() throws RemoteException {
            return 2;
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override // com.tencent.soter.soterserver.ISoterService
        public boolean hasAskAlready(int i) throws RemoteException {
            String str = "SoterService";
            Log.v("SoterService", "hasAskAlready called");
            int i2 = -1000;
            i2 = -1000;
            try {
                ISoter service = ISoter.getService();
                if (service != null) {
                    Log.i("SoterService", "start hasAskAlready");
                    int iHasAskAlready = service.hasAskAlready(Binder.getCallingUid());
                    i2 = iHasAskAlready;
                    str = iHasAskAlready;
                } else {
                    Log.e("SoterService", "soterService is null");
                    str = str;
                }
            } catch (Exception e) {
                Log.e(str, e.toString());
            }
            return i2 == 0;
        }

        /* JADX WARN: Multi-variable type inference failed */
        @Override // com.tencent.soter.soterserver.ISoterService
        public boolean hasAuthKey(int i, String str) throws RemoteException {
            String str2 = "SoterService";
            Log.i("SoterService", "hasAuthKey in");
            if (str == null || str.length() == 0) {
                Log.d("SoterService", "kname is null");
                return false;
            }
            int i2 = -1000;
            i2 = -1000;
            try {
                ISoter service = ISoter.getService();
                if (service != null) {
                    Log.i("SoterService", "start hasAuthKeyImp");
                    int iHasAuthKey = service.hasAuthKey(Binder.getCallingUid(), str);
                    i2 = iHasAuthKey;
                    str2 = iHasAuthKey;
                } else {
                    Log.e("SoterService", "soterService is null");
                    str2 = str2;
                }
            } catch (Exception e) {
                Log.e(str2, e.toString());
            }
            return i2 == 0;
        }

        @Override // com.tencent.soter.soterserver.ISoterService
        public SoterSessionResult initSigh(int i, String str, String str2) throws RemoteException {
            Log.i("SoterService", "initSigh in");
            final SoterSessionResult soterSessionResult = new SoterSessionResult();
            if (str == null || str.length() == 0) {
                soterSessionResult.resultCode = -202;
                return soterSessionResult;
            }
            if (str2 == null || str2.length() == 0) {
                soterSessionResult.resultCode = -203;
                return soterSessionResult;
            }
            try {
                ISoter service = ISoter.getService();
                if (service != null) {
                    Log.i("SoterService", "start initSign");
                    service.initSign(Binder.getCallingUid(), str, str2, new ISoter.initSignCallback(this) { // from class: com.tencent.soter.soterserver.SoterService.ServiceStub.3
                        @Override // vendor.microtrust.hardware.soter.V1_0.ISoter.initSignCallback
                        public void onValues(int i2, long j) {
                            SoterSessionResult soterSessionResult2 = soterSessionResult;
                            soterSessionResult2.session = j;
                            soterSessionResult2.resultCode = i2;
                        }
                    });
                }
            } catch (Exception e) {
                Log.e("SoterService", e.toString());
            }
            Log.i("SoterService", "initSign errcode:" + soterSessionResult.resultCode);
            return soterSessionResult;
        }

        @Override // com.tencent.soter.soterserver.ISoterService
        public int removeAllAuthKey(int i) throws RemoteException {
            Log.i("SoterService", "removeAllAuthKey in");
            int iRemoveAllUidKey = -200;
            try {
                ISoter service = ISoter.getService();
                if (service != null) {
                    Log.i("SoterService", "start removeAllAuthKey");
                    iRemoveAllUidKey = service.removeAllUidKey(Binder.getCallingUid());
                } else {
                    Log.e("SoterService", "soterService is null");
                }
            } catch (Exception e) {
                Log.e("SoterService", e.toString());
            }
            Log.i("SoterService", "removeAllAuthKeyImp errcode:" + iRemoveAllUidKey);
            return iRemoveAllUidKey;
        }

        @Override // com.tencent.soter.soterserver.ISoterService
        public int removeAuthKey(int i, String str) throws RemoteException {
            Log.i("SoterService", "removeAuthKey in");
            if (str == null || str.length() == 0) {
                return -202;
            }
            int iRemoveAuthKey = -200;
            try {
                ISoter service = ISoter.getService();
                if (service != null) {
                    Log.i("SoterService", "start removeAuthKey");
                    iRemoveAuthKey = service.removeAuthKey(Binder.getCallingUid(), str);
                } else {
                    Log.e("SoterService", "soterService is null");
                }
            } catch (Exception e) {
                Log.e("SoterService", e.toString());
            }
            Log.i("SoterService", "removeAuthKeyImp errcode:" + iRemoveAuthKey);
            return iRemoveAuthKey;
        }
    }

    public static class UserAppUninstallReceiver extends BroadcastReceiver {
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Log.i("SoterService", "onReceive in");
            if (intent.getAction().equals("android.intent.action.PACKAGE_FULLY_REMOVED")) {
                int intExtra = intent.getIntExtra("android.intent.extra.UID", 0);
                boolean booleanExtra = intent.getBooleanExtra("android.intent.extra.REPLACING", false);
                Log.i("SoterService", "install: isReplacing = " + booleanExtra);
                Log.i("SoterService", "install: uid = " + intExtra);
                if (booleanExtra) {
                    return;
                }
                Log.i("SoterService", "begin to use uid to remove ask");
                try {
                    ISoter service = ISoter.getService();
                    if (service != null) {
                        Log.i("SoterService", "start removeAllAuthKey");
                        service.removeAllUidKey(intExtra);
                    } else {
                        Log.e("SoterService", "soterService is null");
                    }
                } catch (Exception e) {
                    Log.e("SoterService", e.toString());
                }
            }
        }
    }

    public SoterService() {
        Log.v("SoterService", "SoterService");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public byte[] listTobyte(List<Byte> list) {
        if (list == null || list.size() == 0) {
            return null;
        }
        byte[] bArr = new byte[list.size()];
        int i = 0;
        Iterator<Byte> it = list.iterator();
        while (it.hasNext()) {
            bArr[i] = it.next().byteValue();
            i++;
        }
        return bArr;
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        Log.v("SoterService", "OnBind");
        return this.mBinder;
    }

    @Override // android.app.Service
    public void onCreate() {
        Log.v("SoterService", "OnCreate");
        super.onCreate();
    }

    @Override // android.app.Service
    public void onDestroy() {
        Log.v("SoterService", "onDestroy");
    }
}
