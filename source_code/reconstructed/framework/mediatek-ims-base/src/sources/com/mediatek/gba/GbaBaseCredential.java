package com.mediatek.gba;

import android.content.Context;
import android.net.Network;
import android.os.IBinder;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public abstract class GbaBaseCredential {
    static final byte[] DEFAULT_UA_SECURITY_PROTOCOL_ID_HTTP = {1, 0, 0, 0, 2};
    static final byte[] DEFAULT_UA_SECURITY_PROTOCOL_ID_TLS = {1, 0, 1, 0, 47};
    protected static final char[] HEX_ARRAY = "0123456789abcdef".toCharArray();
    static final String NAFFQDN_PREFER = "original.naf.prefer";
    private static final String TAG = "GbaBaseCredential";
    protected static IGbaService sService;
    protected boolean mIsTlsEnabled;
    protected String mNafAddress;
    protected Network mNetwork;
    protected int mSubId;

    GbaBaseCredential() {
    }

    GbaBaseCredential(Context context, String str, int i) {
        this.mSubId = i;
        str = str.charAt(str.length() - 1) == '/' ? str.substring(0, str.length() - 1) : str;
        this.mIsTlsEnabled = true;
        String lowerCase = str.toLowerCase();
        this.mNafAddress = lowerCase;
        if (lowerCase.indexOf("http://") != -1) {
            this.mNafAddress = str.substring(7);
            this.mIsTlsEnabled = false;
        } else if (this.mNafAddress.indexOf("https://") != -1) {
            this.mNafAddress = str.substring(8);
            this.mIsTlsEnabled = true;
        }
        Log.d(TAG, "nafAddress:" + this.mNafAddress);
    }

    public NafSessionKey getNafSessionKey() {
        GbaCipherSuite byName;
        NafSessionKey nafSessionKeyRunGbaAuthentication = null;
        try {
            IBinder service = ServiceManager.getService("GbaService");
            if (service == null) {
                Log.i("debug", "The binder is null");
                return null;
            }
            sService = IGbaService.Stub.asInterface(service);
            try {
                byte[] bArr = DEFAULT_UA_SECURITY_PROTOCOL_ID_TLS;
                if (this.mIsTlsEnabled) {
                    String property = System.getProperty("gba.ciper.suite", "");
                    if (property.length() > 0 && (byName = GbaCipherSuite.getByName(property)) != null) {
                        byte[] code = byName.getCode();
                        bArr[3] = code[0];
                        bArr[4] = code[1];
                    }
                } else {
                    bArr = DEFAULT_UA_SECURITY_PROTOCOL_ID_HTTP;
                }
                String property2 = System.getProperty("digest.realm", "");
                String property3 = System.getProperty(NAFFQDN_PREFER, "");
                Log.i(TAG, "realm:" + property2);
                Log.i(TAG, "NAFFQDN_PREFER:" + property3);
                if (property2.length() <= 0) {
                    return null;
                }
                if (property3.length() == 0) {
                    String[] strArrSplit = property2.split(";");
                    this.mNafAddress = strArrSplit[0].substring(strArrSplit[0].indexOf("@") + 1);
                }
                Log.i(TAG, "NAF FQDN:" + this.mNafAddress);
                boolean z = false;
                Log.d(TAG, "gba.auth: " + System.getProperty("gba.auth"));
                if ("401".equals(System.getProperty("gba.auth"))) {
                    z = true;
                    System.setProperty("gba.auth", "");
                }
                Log.d(TAG, "forceRun: " + z);
                int i = this.mSubId;
                nafSessionKeyRunGbaAuthentication = -1 == i ? sService.runGbaAuthentication(this.mNafAddress, bArr, z) : sService.runGbaAuthenticationForSubscriber(this.mNafAddress, bArr, z, i);
                if (nafSessionKeyRunGbaAuthentication != null && nafSessionKeyRunGbaAuthentication.getException() != null && (nafSessionKeyRunGbaAuthentication.getException() instanceof IllegalStateException)) {
                    String message = ((IllegalStateException) nafSessionKeyRunGbaAuthentication.getException()).getMessage();
                    if ("HTTP 403 Forbidden".equals(message)) {
                        Log.i(TAG, "GBA hit 403");
                        System.setProperty("gba.auth", "403");
                    } else if ("HTTP 400 Bad Request".equals(message)) {
                        Log.i(TAG, "GBA hit 400");
                    }
                }
                return nafSessionKeyRunGbaAuthentication;
            } catch (RemoteException e) {
                e.printStackTrace();
            }
        } catch (NullPointerException e2) {
            e2.printStackTrace();
        }
    }

    public void setNetwork(Network network) {
        if (network != null) {
            Log.i(TAG, "GBA dedicated network netid:" + network);
            this.mNetwork = network;
        }
    }

    public void setSubId(int i) {
        this.mSubId = i;
    }

    public void setTlsEnabled(boolean z) {
        this.mIsTlsEnabled = z;
    }
}
