package org.ifaa.android.manager;

import android.app.Service;
import android.content.Intent;
import android.os.IBinder;
import android.os.RemoteException;
import android.util.Log;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.Arrays;
import vendor.xiaomi.hardware.mlipay.V1_1.IMlipayService;

/* JADX INFO: loaded from: classes.dex */
public class IFAAService extends Service {
    private final IBinder mIFAABinder = new IFAAServiceStub(this);
    private IMlipayService mService;

    private final class IFAAServiceStub extends IIFAAService.Stub {
        IFAAServiceStub(IFAAService iFAAService) {
            new WeakReference(iFAAService);
        }

        @Override // org.ifaa.android.manager.IIFAAService
        public int[] getIDList(int i) {
            try {
                IFAAService.this.initService();
                if (IFAAService.this.mService == null) {
                    Log.e("IFAAService", "IMlipayService not found");
                    return null;
                }
                ArrayList<Integer> arrayListIfaa_get_idlist = IFAAService.this.mService.ifaa_get_idlist(i);
                int size = arrayListIfaa_get_idlist.size();
                int[] iArr = new int[size];
                for (int i2 = 0; i2 < size; i2++) {
                    iArr[i2] = arrayListIfaa_get_idlist.get(i2).intValue();
                }
                return iArr;
            } catch (RemoteException e) {
                Log.e("IFAAService", "transact fail. " + e);
                return null;
            }
        }

        @Override // org.ifaa.android.manager.IIFAAService
        public byte[] processCmd_v2(byte[] bArr) {
            try {
                IFAAService.this.initService();
                if (IFAAService.this.mService == null) {
                    Log.e("IFAAService", "IMlipayService not found");
                    return null;
                }
                ArrayList<Byte> arrayList = new ArrayList<>(Arrays.asList(IFAAService.this.wrapArray(bArr)));
                ArrayList<Byte> arrayListInvoke_command = IFAAService.this.mService.invoke_command(arrayList, arrayList.size());
                int size = arrayListInvoke_command.size();
                byte[] bArr2 = new byte[size];
                for (int i = 0; i < size; i++) {
                    bArr2[i] = arrayListInvoke_command.get(i).byteValue();
                }
                return bArr2;
            } catch (RemoteException e) {
                Log.e("IFAAService", "transact fail. " + e);
                return null;
            }
        }
    }

    public IFAAService() {
        Log.v("IFAAService", "IFAAService");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void initService() throws RemoteException {
        if (this.mService == null) {
            this.mService = IMlipayService.getService();
        } else {
            Log.i("IFAAService", "mService is not null, skip initService");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public Byte[] wrapArray(byte[] bArr) {
        Byte[] bArr2 = new Byte[bArr.length];
        int length = bArr.length;
        int i = 0;
        int i2 = 0;
        while (i < length) {
            bArr2[i2] = Byte.valueOf(bArr[i]);
            i++;
            i2++;
        }
        return bArr2;
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        Log.v("IFAAService", "OnBind");
        return this.mIFAABinder;
    }

    @Override // android.app.Service
    public void onCreate() {
        Log.v("IFAAService", "OnCreate");
        super.onCreate();
    }

    @Override // android.app.Service
    public void onDestroy() {
        Log.v("IFAAService", "onDestroy");
        this.mService = null;
    }
}
