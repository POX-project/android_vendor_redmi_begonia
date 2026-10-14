package com.mediatek.gba;

import android.content.Context;
import android.net.Network;
import android.os.Build;
import android.os.IBinder;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.SubscriptionManager;
import android.text.TextUtils;
import android.util.Log;
import com.mediatek.ims.internal.IMtkImsService;

/* JADX INFO: loaded from: classes.dex */
public final class GbaManager {
    public static final boolean DBGLOG;
    public static final byte[] DEFAULT_UA_SECURITY_PROTOCOL_ID0;
    public static final byte[] DEFAULT_UA_SECURITY_PROTOCOL_ID1;
    public static final byte[] DEFAULT_UA_SECURITY_PROTOCOL_ID2;
    public static final byte[] DEFAULT_UA_SECURITY_PROTOCOL_ID3;
    private static final byte[] DEFAULT_UA_SECURITY_PROTOCOL_ID_HTTP;
    private static final byte[] DEFAULT_UA_SECURITY_PROTOCOL_ID_TLS;
    public static final String IMS_GBA_KS_EXT_NAF = "Ks_ext_NAF";
    public static final String IMS_GBA_KS_NAF = "Ks_NAF";
    public static final int IMS_GBA_ME = 1;
    public static final int IMS_GBA_NONE = 0;
    public static final int IMS_GBA_U = 2;
    public static final String IMS_SERVICE = "ims";
    public static final String MTK_IMS_SERVICE = "mtkIms";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tel_dbg";
    public static final boolean SENLOG;
    private static final String TAG = "GbaManager";
    private static GbaManager mGbaManager;
    private static int mNetId;
    private static IGbaService mService;
    private final Context mContext;

    static {
        boolean zEquals = TextUtils.equals(Build.TYPE, "user");
        SENLOG = zEquals;
        DBGLOG = !zEquals || SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        mGbaManager = null;
        DEFAULT_UA_SECURITY_PROTOCOL_ID0 = new byte[]{1, 0, 0, 0, 0};
        DEFAULT_UA_SECURITY_PROTOCOL_ID1 = new byte[]{1, 0, 0, 0, 1};
        DEFAULT_UA_SECURITY_PROTOCOL_ID2 = new byte[]{1, 0, 0, 0, 2};
        DEFAULT_UA_SECURITY_PROTOCOL_ID3 = new byte[]{1, 0, 0, 0, 3};
        DEFAULT_UA_SECURITY_PROTOCOL_ID_HTTP = new byte[]{1, 0, 0, 0, 2};
        DEFAULT_UA_SECURITY_PROTOCOL_ID_TLS = new byte[]{1, 0, 1, 0, 47};
    }

    GbaManager(Context context) {
        this.mContext = context;
    }

    public static GbaManager getDefaultGbaManager(Context context) {
        if (context == null) {
            throw new IllegalArgumentException("context cannot be null");
        }
        synchronized (GbaManager.class) {
            if (mGbaManager == null) {
                if (!supportMdAutoSetupIms()) {
                    IBinder service = ServiceManager.getService("GbaService");
                    if (service == null) {
                        Log.i("debug", "The binder is null");
                        return null;
                    }
                    mService = IGbaService.Stub.asInterface(service);
                }
                mGbaManager = new GbaManager(context);
            }
            return mGbaManager;
        }
    }

    private NafSessionKey runNativeGba(String str, byte[] bArr, boolean z, int i, int i2) {
        IBinder service = ServiceManager.getService("mtkIms");
        if (service == null) {
            Log.e(TAG, "Service is unavailable binder is null");
            return null;
        }
        IMtkImsService iMtkImsServiceAsInterface = IMtkImsService.Stub.asInterface(service);
        if (iMtkImsServiceAsInterface == null) {
            Log.e(TAG, "Service is unavailable mImsService is null");
            return null;
        }
        try {
            return iMtkImsServiceAsInterface.runGbaAuthentication(str, bArr, z, i, i2);
        } catch (RemoteException e) {
            Log.e(TAG, "RemotaException mImsService.runGbaAuthentication()");
            return null;
        }
    }

    private static boolean supportMdAutoSetupIms() {
        return SystemProperties.get("ro.vendor.md_auto_setup_ims").equals("1");
    }

    public NafSessionKey getCachedKey(String str, byte[] bArr, int i) {
        try {
            return mService.getCachedKey(str, bArr, i);
        } catch (RemoteException e) {
            Log.e(TAG, "remote expcetion for getCachedKey");
            return null;
        }
    }

    public int getGbaSupported() {
        try {
            return mService.getGbaSupported();
        } catch (RemoteException e) {
            return 0;
        }
    }

    public int getGbaSupported(int i) {
        try {
            return mService.getGbaSupported();
        } catch (RemoteException e) {
            return 0;
        }
    }

    public byte[] getNafSecureProtocolId(boolean z, String str) {
        GbaCipherSuite byName;
        boolean z2 = DBGLOG;
        if (z2) {
            Log.d(TAG, "getNafSecureProtocolId isTls = " + z + ", cipher = " + str);
        }
        byte[] bArr = DEFAULT_UA_SECURITY_PROTOCOL_ID_TLS;
        if (!z) {
            if (z2) {
                Log.e(TAG, "Default cipherSuite");
            }
            return DEFAULT_UA_SECURITY_PROTOCOL_ID_HTTP;
        }
        if (str == null || str.length() <= 0 || (byName = GbaCipherSuite.getByName(str)) == null) {
            return bArr;
        }
        if (z2) {
            Log.d(TAG, "cipherSuite name = " + byName.getName());
        }
        byte[] code = byName.getCode();
        if (z2) {
            Log.d(TAG, "uaId = " + String.format("0x%2x", Byte.valueOf(code[0])) + ", " + String.format("0x%2x", Byte.valueOf(code[1])));
        }
        bArr[3] = code[0];
        bArr[4] = code[1];
        return bArr;
    }

    public boolean isGbaKeyExpired(String str, byte[] bArr) {
        try {
            return mService.isGbaKeyExpired(str, bArr);
        } catch (RemoteException e) {
            return true;
        }
    }

    public boolean isGbaKeyExpired(String str, byte[] bArr, int i) {
        try {
            return mService.isGbaKeyExpiredForSubscriber(str, bArr, i);
        } catch (RemoteException e) {
            return true;
        }
    }

    public NafSessionKey runGbaAuthentication(String str, byte[] bArr, boolean z) {
        try {
            if (!supportMdAutoSetupIms()) {
                return mService.runGbaAuthentication(str, bArr, z);
            }
            return runNativeGba(str, bArr, z, mNetId, SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultSubscriptionId()));
        } catch (RemoteException e) {
            return null;
        }
    }

    public NafSessionKey runGbaAuthentication(String str, byte[] bArr, boolean z, int i) {
        try {
            if (!supportMdAutoSetupIms()) {
                return mService.runGbaAuthenticationForSubscriber(str, bArr, z, i);
            }
            return runNativeGba(str, bArr, z, mNetId, SubscriptionManager.getPhoneId(i));
        } catch (RemoteException e) {
            return null;
        }
    }

    public void setNetwork(Network network) {
    }

    public void updateCachedKey(String str, byte[] bArr, int i, NafSessionKey nafSessionKey) {
        try {
            mService.updateCachedKey(str, bArr, i, nafSessionKey);
        } catch (RemoteException e) {
            Log.e(TAG, "remote expcetion for updateCachedKey");
        }
    }
}
