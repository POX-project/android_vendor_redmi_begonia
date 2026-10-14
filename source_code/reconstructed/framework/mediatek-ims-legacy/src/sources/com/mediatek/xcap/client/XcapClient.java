package com.mediatek.xcap.client;

import android.content.Context;
import android.net.Network;
import android.os.Build;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.text.TextUtils;
import android.util.Log;
import com.mediatek.gba.GbaManager;
import com.mediatek.gba.NafSessionKey;
import com.mediatek.internal.telephony.MtkSubscriptionManager;
import com.mediatek.xcap.auth.AkaDigestAuth;
import com.mediatek.xcap.header.WwwAuthHeader;
import java.io.BufferedOutputStream;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.net.HttpURLConnection;
import java.net.MalformedURLException;
import java.net.ProtocolException;
import java.net.SocketTimeoutException;
import java.net.URI;
import java.net.URL;
import java.net.UnknownHostException;
import java.security.GeneralSecurityException;
import java.security.SecureRandom;
import java.security.cert.X509Certificate;
import java.util.Base64;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSession;
import javax.net.ssl.TrustManager;
import javax.net.ssl.X509TrustManager;

/* JADX INFO: loaded from: classes.dex */
public class XcapClient {
    private static final String AUTH_HDR = "WWW-Authenticate";
    public static final String METHOD_DELETE = "DELETE";
    public static final String METHOD_GET = "GET";
    public static final String METHOD_PUT = "PUT";
    private static final String[] PROPERTY_RIL_TEST_SIM;
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tag.tel_dbg";
    private static final int RETRY_COUNT_AUTH = 3;
    private static final int RETRY_COUNT_SS = 3;
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, "user");
    private static final int SOCKET_OPERATION_TIMEOUT = 60000;
    private static final int SOCKET_READ_OPERATION_TIMEOUT = 60000;
    private static final String TAG = "XcapClient";
    private static final boolean TELDBG;
    protected static final char[] hexArray;
    private static Map<Integer, String> mNafFqdnCache;
    private static int mRequestCount;
    private HttpURLConnection mConnection;
    private Context mContext;
    private XcapDebugParam mDebugParam;
    private GbaManager mGbaManager;
    private HostnameVerifier mHostnameVerifier;
    private boolean mIsHttps;
    private Network mNetwork;
    private int mPhoneId;
    private TrustManager[] mTrustAllCerts;
    private String mUserAgent;

    static {
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        mNafFqdnCache = new HashMap();
        mRequestCount = 0;
        hexArray = "0123456789abcdef".toCharArray();
        PROPERTY_RIL_TEST_SIM = new String[]{"vendor.gsm.sim.ril.testsim", "vendor.gsm.sim.ril.testsim.2", "vendor.gsm.sim.ril.testsim.3", "vendor.gsm.sim.ril.testsim.4"};
    }

    public XcapClient(Context context, int i) {
        this.mConnection = null;
        this.mDebugParam = XcapDebugParam.getInstance();
        this.mIsHttps = false;
        this.mTrustAllCerts = new TrustManager[]{new X509TrustManager() { // from class: com.mediatek.xcap.client.XcapClient.1
            @Override // javax.net.ssl.X509TrustManager
            public void checkClientTrusted(X509Certificate[] x509CertificateArr, String str) {
            }

            @Override // javax.net.ssl.X509TrustManager
            public void checkServerTrusted(X509Certificate[] x509CertificateArr, String str) {
            }

            @Override // javax.net.ssl.X509TrustManager
            public X509Certificate[] getAcceptedIssuers() {
                return new X509Certificate[0];
            }
        }};
        this.mHostnameVerifier = new HostnameVerifier() { // from class: com.mediatek.xcap.client.XcapClient.2
            @Override // javax.net.ssl.HostnameVerifier
            public boolean verify(String str, SSLSession sSLSession) {
                return true;
            }
        };
        this.mContext = context;
        this.mPhoneId = i;
        composeUserAgent();
        Log.i(TAG, "XcapClient context: " + context + " phoneId:" + i);
        initialize();
    }

    public XcapClient(Context context, Network network, int i) {
        this.mConnection = null;
        this.mDebugParam = XcapDebugParam.getInstance();
        this.mIsHttps = false;
        this.mTrustAllCerts = new TrustManager[]{new X509TrustManager() { // from class: com.mediatek.xcap.client.XcapClient.1
            @Override // javax.net.ssl.X509TrustManager
            public void checkClientTrusted(X509Certificate[] x509CertificateArr, String str) {
            }

            @Override // javax.net.ssl.X509TrustManager
            public void checkServerTrusted(X509Certificate[] x509CertificateArr, String str) {
            }

            @Override // javax.net.ssl.X509TrustManager
            public X509Certificate[] getAcceptedIssuers() {
                return new X509Certificate[0];
            }
        }};
        this.mHostnameVerifier = new HostnameVerifier() { // from class: com.mediatek.xcap.client.XcapClient.2
            @Override // javax.net.ssl.HostnameVerifier
            public boolean verify(String str, SSLSession sSLSession) {
                return true;
            }
        };
        this.mContext = context;
        this.mPhoneId = i;
        composeUserAgent();
        Log.i(TAG, "XcapClient context: " + context + " phoneId:" + i);
        if (network != null) {
            this.mNetwork = network;
        }
        initialize();
    }

    public XcapClient(Context context, String str, int i) {
        this.mConnection = null;
        this.mDebugParam = XcapDebugParam.getInstance();
        this.mIsHttps = false;
        this.mTrustAllCerts = new TrustManager[]{new X509TrustManager() { // from class: com.mediatek.xcap.client.XcapClient.1
            @Override // javax.net.ssl.X509TrustManager
            public void checkClientTrusted(X509Certificate[] x509CertificateArr, String str2) {
            }

            @Override // javax.net.ssl.X509TrustManager
            public void checkServerTrusted(X509Certificate[] x509CertificateArr, String str2) {
            }

            @Override // javax.net.ssl.X509TrustManager
            public X509Certificate[] getAcceptedIssuers() {
                return new X509Certificate[0];
            }
        }};
        this.mHostnameVerifier = new HostnameVerifier() { // from class: com.mediatek.xcap.client.XcapClient.2
            @Override // javax.net.ssl.HostnameVerifier
            public boolean verify(String str2, SSLSession sSLSession) {
                return true;
            }
        };
        this.mContext = context;
        this.mPhoneId = i;
        this.mUserAgent = str;
        Log.i(TAG, "XcapClient context: " + context + " phoneId:" + i);
        initialize();
    }

    public XcapClient(Context context, String str, Network network, int i) {
        this.mConnection = null;
        this.mDebugParam = XcapDebugParam.getInstance();
        this.mIsHttps = false;
        this.mTrustAllCerts = new TrustManager[]{new X509TrustManager() { // from class: com.mediatek.xcap.client.XcapClient.1
            @Override // javax.net.ssl.X509TrustManager
            public void checkClientTrusted(X509Certificate[] x509CertificateArr, String str2) {
            }

            @Override // javax.net.ssl.X509TrustManager
            public void checkServerTrusted(X509Certificate[] x509CertificateArr, String str2) {
            }

            @Override // javax.net.ssl.X509TrustManager
            public X509Certificate[] getAcceptedIssuers() {
                return new X509Certificate[0];
            }
        }};
        this.mHostnameVerifier = new HostnameVerifier() { // from class: com.mediatek.xcap.client.XcapClient.2
            @Override // javax.net.ssl.HostnameVerifier
            public boolean verify(String str2, SSLSession sSLSession) {
                return true;
            }
        };
        this.mContext = context;
        this.mPhoneId = i;
        this.mUserAgent = str;
        Log.i(TAG, "XcapClient context: " + context + " phoneId:" + i);
        if (network != null) {
            this.mNetwork = network;
        }
        initialize();
    }

    private void addExtraHeaders(HttpURLConnection httpURLConnection, Map<String, String> map) {
        if (map == null) {
            return;
        }
        for (String str : map.keySet()) {
            httpURLConnection.setRequestProperty(str, map.get(str));
            Log.d(TAG, "name: " + str + ", value: " + encryptString(map.get(str)));
        }
    }

    private String bytesToHex(byte[] bArr) {
        char[] cArr = new char[bArr.length * 2];
        for (int i = 0; i < bArr.length; i++) {
            int i2 = bArr[i] & 255;
            char[] cArr2 = hexArray;
            cArr[i * 2] = cArr2[i2 >>> 4];
            cArr[(i * 2) + 1] = cArr2[i2 & 15];
        }
        return new String(cArr);
    }

    private void composeUserAgent() {
        boolean z = false;
        if (ServiceManager.getService("GbaService") != null) {
            Log.i(TAG, "GbaService Enabled");
            z = true;
        }
        if (this.mDebugParam.getXcapUserAgent() != null && !this.mDebugParam.getXcapUserAgent().isEmpty()) {
            this.mUserAgent = this.mDebugParam.getXcapUserAgent();
            return;
        }
        StringBuilder sb = new StringBuilder();
        sb.append("XCAP Client");
        sb.append(z ? " 3gpp-gba" : "");
        this.mUserAgent = sb.toString();
    }

    public static String encryptString(String str) throws UnsupportedEncodingException {
        byte[] bytes;
        Base64.Encoder encoder = Base64.getEncoder();
        if (str == null) {
            return "null";
        }
        try {
            bytes = str.getBytes("UTF-8");
        } catch (Exception e) {
            e.printStackTrace();
            bytes = null;
        }
        return bytes == null ? "" : encoder.encodeToString(bytes);
    }

    /* JADX WARN: Code duplicated, block: B:138:0x02a6 A[EDGE_INSN: B:138:0x02a6->B:237:0x03ae BREAK  A[LOOP:0: B:15:0x0086->B:193:0x031b]] */
    /* JADX WARN: Code duplicated, block: B:179:0x02f5 A[Catch: all -> 0x0360, TryCatch #0 {all -> 0x0360, blocks: (B:65:0x0174, B:67:0x0180, B:70:0x018f, B:73:0x01a9, B:81:0x01bc, B:83:0x01c0, B:84:0x01c1, B:112:0x0239, B:114:0x024a, B:115:0x0259, B:177:0x02ee, B:179:0x02f5, B:181:0x02f9, B:195:0x0327, B:196:0x0328, B:198:0x032c, B:200:0x0338, B:202:0x0344, B:203:0x034c, B:205:0x034e, B:206:0x034f, B:207:0x0357, B:208:0x0358, B:209:0x035f, B:216:0x036c, B:217:0x0375, B:222:0x037f, B:223:0x0388), top: B:239:0x0174 }] */
    /* JADX WARN: Code duplicated, block: B:181:0x02f9 A[Catch: all -> 0x0360, TRY_LEAVE, TryCatch #0 {all -> 0x0360, blocks: (B:65:0x0174, B:67:0x0180, B:70:0x018f, B:73:0x01a9, B:81:0x01bc, B:83:0x01c0, B:84:0x01c1, B:112:0x0239, B:114:0x024a, B:115:0x0259, B:177:0x02ee, B:179:0x02f5, B:181:0x02f9, B:195:0x0327, B:196:0x0328, B:198:0x032c, B:200:0x0338, B:202:0x0344, B:203:0x034c, B:205:0x034e, B:206:0x034f, B:207:0x0357, B:208:0x0358, B:209:0x035f, B:216:0x036c, B:217:0x0375, B:222:0x037f, B:223:0x0388), top: B:239:0x0174 }] */
    /* JADX WARN: Code duplicated, block: B:183:0x0300 A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:192:0x0319 A[PHI: r11 r16 r19 r21
      0x0319: PHI (r11v3 int) = (r11v1 int), (r11v4 int) binds: [B:191:0x0317, B:125:0x0286] A[DONT_GENERATE, DONT_INLINE]
      0x0319: PHI (r16v9 int) = (r16v5 int), (r16v12 int) binds: [B:191:0x0317, B:125:0x0286] A[DONT_GENERATE, DONT_INLINE]
      0x0319: PHI (r19v7 java.lang.String) = (r19v5 java.lang.String), (r19v16 java.lang.String) binds: [B:191:0x0317, B:125:0x0286] A[DONT_GENERATE, DONT_INLINE]
      0x0319: PHI (r21v7 boolean) = (r21v5 boolean), (r21v26 boolean) binds: [B:191:0x0317, B:125:0x0286] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:198:0x032c A[Catch: all -> 0x0360, TryCatch #0 {all -> 0x0360, blocks: (B:65:0x0174, B:67:0x0180, B:70:0x018f, B:73:0x01a9, B:81:0x01bc, B:83:0x01c0, B:84:0x01c1, B:112:0x0239, B:114:0x024a, B:115:0x0259, B:177:0x02ee, B:179:0x02f5, B:181:0x02f9, B:195:0x0327, B:196:0x0328, B:198:0x032c, B:200:0x0338, B:202:0x0344, B:203:0x034c, B:205:0x034e, B:206:0x034f, B:207:0x0357, B:208:0x0358, B:209:0x035f, B:216:0x036c, B:217:0x0375, B:222:0x037f, B:223:0x0388), top: B:239:0x0174 }] */
    /* JADX WARN: Code duplicated, block: B:200:0x0338 A[Catch: all -> 0x0360, TryCatch #0 {all -> 0x0360, blocks: (B:65:0x0174, B:67:0x0180, B:70:0x018f, B:73:0x01a9, B:81:0x01bc, B:83:0x01c0, B:84:0x01c1, B:112:0x0239, B:114:0x024a, B:115:0x0259, B:177:0x02ee, B:179:0x02f5, B:181:0x02f9, B:195:0x0327, B:196:0x0328, B:198:0x032c, B:200:0x0338, B:202:0x0344, B:203:0x034c, B:205:0x034e, B:206:0x034f, B:207:0x0357, B:208:0x0358, B:209:0x035f, B:216:0x036c, B:217:0x0375, B:222:0x037f, B:223:0x0388), top: B:239:0x0174 }] */
    /* JADX WARN: Code duplicated, block: B:202:0x0344 A[Catch: all -> 0x0360, TryCatch #0 {all -> 0x0360, blocks: (B:65:0x0174, B:67:0x0180, B:70:0x018f, B:73:0x01a9, B:81:0x01bc, B:83:0x01c0, B:84:0x01c1, B:112:0x0239, B:114:0x024a, B:115:0x0259, B:177:0x02ee, B:179:0x02f5, B:181:0x02f9, B:195:0x0327, B:196:0x0328, B:198:0x032c, B:200:0x0338, B:202:0x0344, B:203:0x034c, B:205:0x034e, B:206:0x034f, B:207:0x0357, B:208:0x0358, B:209:0x035f, B:216:0x036c, B:217:0x0375, B:222:0x037f, B:223:0x0388), top: B:239:0x0174 }] */
    /* JADX WARN: Code duplicated, block: B:205:0x034e A[Catch: all -> 0x0360, TryCatch #0 {all -> 0x0360, blocks: (B:65:0x0174, B:67:0x0180, B:70:0x018f, B:73:0x01a9, B:81:0x01bc, B:83:0x01c0, B:84:0x01c1, B:112:0x0239, B:114:0x024a, B:115:0x0259, B:177:0x02ee, B:179:0x02f5, B:181:0x02f9, B:195:0x0327, B:196:0x0328, B:198:0x032c, B:200:0x0338, B:202:0x0344, B:203:0x034c, B:205:0x034e, B:206:0x034f, B:207:0x0357, B:208:0x0358, B:209:0x035f, B:216:0x036c, B:217:0x0375, B:222:0x037f, B:223:0x0388), top: B:239:0x0174 }] */
    /* JADX WARN: Code duplicated, block: B:206:0x034f A[Catch: all -> 0x0360, TryCatch #0 {all -> 0x0360, blocks: (B:65:0x0174, B:67:0x0180, B:70:0x018f, B:73:0x01a9, B:81:0x01bc, B:83:0x01c0, B:84:0x01c1, B:112:0x0239, B:114:0x024a, B:115:0x0259, B:177:0x02ee, B:179:0x02f5, B:181:0x02f9, B:195:0x0327, B:196:0x0328, B:198:0x032c, B:200:0x0338, B:202:0x0344, B:203:0x034c, B:205:0x034e, B:206:0x034f, B:207:0x0357, B:208:0x0358, B:209:0x035f, B:216:0x036c, B:217:0x0375, B:222:0x037f, B:223:0x0388), top: B:239:0x0174 }] */
    /* JADX WARN: Code duplicated, block: B:208:0x0358 A[Catch: all -> 0x0360, TryCatch #0 {all -> 0x0360, blocks: (B:65:0x0174, B:67:0x0180, B:70:0x018f, B:73:0x01a9, B:81:0x01bc, B:83:0x01c0, B:84:0x01c1, B:112:0x0239, B:114:0x024a, B:115:0x0259, B:177:0x02ee, B:179:0x02f5, B:181:0x02f9, B:195:0x0327, B:196:0x0328, B:198:0x032c, B:200:0x0338, B:202:0x0344, B:203:0x034c, B:205:0x034e, B:206:0x034f, B:207:0x0357, B:208:0x0358, B:209:0x035f, B:216:0x036c, B:217:0x0375, B:222:0x037f, B:223:0x0388), top: B:239:0x0174 }] */
    /* JADX WARN: Code duplicated, block: B:225:0x038b A[ADDED_TO_REGION] */
    /* JADX WARN: Code duplicated, block: B:234:0x03a4  */
    /* JADX WARN: Code duplicated, block: B:282:0x0328 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:283:0x0327 A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:286:0x031b A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:287:? A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:59:0x0156  */
    /* JADX WARN: Code duplicated, block: B:60:0x0158 A[Catch: all -> 0x02b1, IOException -> 0x02b7, ProtocolException -> 0x02bb, MalformedURLException -> 0x02c0, TRY_ENTER, TryCatch #25 {MalformedURLException -> 0x02c0, ProtocolException -> 0x02bb, IOException -> 0x02b7, all -> 0x02b1, blocks: (B:45:0x011c, B:61:0x015d, B:63:0x0169, B:60:0x0158), top: B:258:0x011c }] */
    /* JADX WARN: Code duplicated, block: B:63:0x0169 A[Catch: all -> 0x02b1, IOException -> 0x02b7, ProtocolException -> 0x02bb, MalformedURLException -> 0x02c0, TRY_LEAVE, TryCatch #25 {MalformedURLException -> 0x02c0, ProtocolException -> 0x02bb, IOException -> 0x02b7, all -> 0x02b1, blocks: (B:45:0x011c, B:61:0x015d, B:63:0x0169, B:60:0x0158), top: B:258:0x011c }] */
    /* JADX WARN: Code duplicated, block: B:66:0x017c  */
    private HttpURLConnection execute(URL url, String str, byte[] bArr, Map<String, String> map, String str2) throws Throwable {
        int i;
        Throwable th;
        String str3;
        boolean z;
        String str4;
        AkaDigestAuth akaDigestAuth;
        int responseCode;
        BufferedOutputStream bufferedOutputStream;
        String str5 = str;
        String protocol = url.getProtocol();
        boolean enableXcapTrustAll = this.mDebugParam.getEnableXcapTrustAll();
        int i2 = 0;
        boolean z2 = false;
        this.mIsHttps = "https".equals(protocol);
        if (enableXcapTrustAll) {
            try {
                SSLContext sSLContext = SSLContext.getInstance("SSL");
                i = 3;
                try {
                    sSLContext.init(null, this.mTrustAllCerts, new SecureRandom());
                    HttpsURLConnection.setDefaultSSLSocketFactory(sSLContext.getSocketFactory());
                    HttpsURLConnection.setDefaultHostnameVerifier(this.mHostnameVerifier);
                    Log.d(TAG, "set SSL");
                } catch (GeneralSecurityException e) {
                    e = e;
                    Log.e(TAG, "Execute TrustAll exception");
                    e.printStackTrace();
                }
            } catch (GeneralSecurityException e2) {
                e = e2;
                i = 3;
            }
        } else {
            i = 3;
        }
        Log.d(TAG, "execute M:" + str5 + " :" + encryptString(url.toString()));
        boolean z3 = true;
        mRequestCount = mRequestCount + 1;
        while (true) {
            if (i <= 0 || 0 != 0) {
                break;
            }
            try {
                if (this.mNetwork != null) {
                    try {
                        try {
                            this.mConnection = (HttpURLConnection) this.mNetwork.openConnection(url);
                        } catch (MalformedURLException e3) {
                            e = e3;
                            Log.e(TAG, "MalformedURLException");
                            e.printStackTrace();
                            throw e;
                        } catch (ProtocolException e4) {
                            e = e4;
                            Log.e(TAG, "ProtocolException");
                            e.printStackTrace();
                            throw e;
                        } catch (IOException e5) {
                            e = e5;
                            str3 = protocol;
                            z = enableXcapTrustAll;
                            e.printStackTrace();
                            if (!(e instanceof SocketTimeoutException)) {
                                if (e instanceof UnknownHostException) {
                                    Log.e(TAG, "Throw UnknownHostException");
                                    throw e;
                                }
                                if ("HTTP 403 Forbidden".equals(e.getMessage())) {
                                    throw new IOException("GBA hit HTTP 403 Forbidden");
                                }
                                if ("HTTP 400 Bad Request".equals(e.getMessage())) {
                                    throw new IOException("GBA hit HTTP 400 Bad Request");
                                }
                                throw e;
                            }
                            if (i - 1 <= 0) {
                                throw e;
                            }
                            Log.d(TAG, "SocketTimeoutException: wait for retry.");
                            if (0 == 0) {
                                try {
                                    Thread.sleep(5000L);
                                    Log.d(TAG, "retry once");
                                } catch (InterruptedException e6) {
                                    Log.d(TAG, "InterruptedException");
                                    e6.printStackTrace();
                                }
                            }
                            if (z2) {
                                z2 = false;
                            }
                            str5 = str;
                            protocol = str3;
                            enableXcapTrustAll = z;
                            z3 = true;
                        } catch (Throwable th2) {
                            th = th2;
                            if (0 == 0) {
                                try {
                                    Thread.sleep(5000L);
                                    Log.d(TAG, "retry once");
                                } catch (InterruptedException e7) {
                                    Log.d(TAG, "InterruptedException");
                                    e7.printStackTrace();
                                }
                            }
                            if (z2) {
                                throw th;
                            }
                            throw th;
                        }
                    } catch (MalformedURLException e8) {
                        e = e8;
                    } catch (ProtocolException e9) {
                        e = e9;
                    } catch (IOException e10) {
                        e = e10;
                        str3 = protocol;
                        z = enableXcapTrustAll;
                    } catch (Throwable th3) {
                        th = th3;
                    }
                } else {
                    this.mConnection = (HttpURLConnection) url.openConnection();
                }
                try {
                    this.mConnection.setRequestMethod(str5);
                    this.mConnection.setDoInput(z3);
                    this.mConnection.setConnectTimeout(60000);
                    this.mConnection.setReadTimeout(60000);
                    try {
                        addExtraHeaders(this.mConnection, map);
                        str3 = protocol;
                        try {
                            this.mConnection.setRequestProperty("User-Agent", this.mUserAgent);
                            this.mConnection.setRequestProperty("Accept-Encoding", "*");
                            this.mConnection.setRequestProperty("Accept", "*/*");
                            if (str2 == 0) {
                                if (bArr == null) {
                                    str4 = "";
                                } else {
                                    str4 = new String(bArr);
                                }
                                akaDigestAuth = getAkaDigestAuth(this.mConnection.getURL(), str5, str4);
                                if (akaDigestAuth != null) {
                                    akaDigestAuth.calculateRequestDigest();
                                    z = enableXcapTrustAll;
                                    this.mConnection.setRequestProperty(XcapConstants.HDR_KEY_AUTHORIZATION, akaDigestAuth.createAuthorHeaderValue());
                                } else {
                                    z = enableXcapTrustAll;
                                }
                                logRequestHeaders(this.mConnection);
                                if (METHOD_PUT.equals(str5)) {
                                    this.mConnection.setDoOutput(true);
                                    bufferedOutputStream = null;
                                    bufferedOutputStream = new BufferedOutputStream(this.mConnection.getOutputStream());
                                    bufferedOutputStream.write(bArr);
                                    bufferedOutputStream.flush();
                                    bufferedOutputStream.close();
                                }
                                responseCode = this.mConnection.getResponseCode();
                                Log.d(TAG, "execute " + this.mConnection.getRequestMethod() + ", code: " + responseCode + ", message :" + this.mConnection.getResponseMessage());
                                logResponseHeaders(this.mConnection);
                                if (responseCode != 200) {
                                }
                                if (1 == 0) {
                                    Thread.sleep(5000L);
                                    Log.d(TAG, "retry once");
                                }
                                if (z2) {
                                    break;
                                }
                                break;
                                break;
                            }
                            try {
                                this.mConnection.setRequestProperty(XcapConstants.HDR_KEY_CONTENT_TYPE, str2);
                                if (bArr == null) {
                                    str4 = "";
                                } else {
                                    str4 = new String(bArr);
                                }
                                akaDigestAuth = getAkaDigestAuth(this.mConnection.getURL(), str5, str4);
                                if (akaDigestAuth != null) {
                                    akaDigestAuth.calculateRequestDigest();
                                    z = enableXcapTrustAll;
                                    try {
                                        try {
                                            this.mConnection.setRequestProperty(XcapConstants.HDR_KEY_AUTHORIZATION, akaDigestAuth.createAuthorHeaderValue());
                                        } catch (Throwable th4) {
                                            th = th4;
                                            if (0 == 0 && !z2 && i - 1 > 0) {
                                                Thread.sleep(5000L);
                                                Log.d(TAG, "retry once");
                                            }
                                            if (z2) {
                                                throw th;
                                            }
                                            throw th;
                                        }
                                    } catch (MalformedURLException e11) {
                                        e = e11;
                                        Log.e(TAG, "MalformedURLException");
                                        e.printStackTrace();
                                        throw e;
                                    } catch (ProtocolException e12) {
                                        e = e12;
                                        Log.e(TAG, "ProtocolException");
                                        e.printStackTrace();
                                        throw e;
                                    } catch (IOException e13) {
                                        e = e13;
                                        e.printStackTrace();
                                        if (!(e instanceof SocketTimeoutException)) {
                                            if (e instanceof UnknownHostException) {
                                                Log.e(TAG, "Throw UnknownHostException");
                                                throw e;
                                            }
                                            if ("HTTP 403 Forbidden".equals(e.getMessage())) {
                                                throw new IOException("GBA hit HTTP 403 Forbidden");
                                            }
                                            if ("HTTP 400 Bad Request".equals(e.getMessage())) {
                                                throw new IOException("GBA hit HTTP 400 Bad Request");
                                            }
                                            throw e;
                                        }
                                        if (i - 1 <= 0) {
                                            throw e;
                                        }
                                        Log.d(TAG, "SocketTimeoutException: wait for retry.");
                                        if (0 == 0 && !z2 && (i = i - 1) > 0) {
                                            Thread.sleep(5000L);
                                            Log.d(TAG, "retry once");
                                        }
                                        if (z2) {
                                        }
                                        str5 = str;
                                        protocol = str3;
                                        enableXcapTrustAll = z;
                                        z3 = true;
                                    }
                                } else {
                                    z = enableXcapTrustAll;
                                }
                                logRequestHeaders(this.mConnection);
                                if (METHOD_PUT.equals(str5) && bArr != null) {
                                    this.mConnection.setDoOutput(true);
                                    bufferedOutputStream = null;
                                    try {
                                        try {
                                            bufferedOutputStream = new BufferedOutputStream(this.mConnection.getOutputStream());
                                            bufferedOutputStream.write(bArr);
                                            bufferedOutputStream.flush();
                                            bufferedOutputStream.close();
                                        } catch (IOException e14) {
                                            Log.e(TAG, "IOException");
                                            e14.printStackTrace();
                                            throw e14;
                                        }
                                    } catch (Throwable th5) {
                                        if (bufferedOutputStream != null) {
                                            bufferedOutputStream.close();
                                        }
                                        throw th5;
                                    }
                                }
                                responseCode = this.mConnection.getResponseCode();
                                Log.d(TAG, "execute " + this.mConnection.getRequestMethod() + ", code: " + responseCode + ", message :" + this.mConnection.getResponseMessage());
                                logResponseHeaders(this.mConnection);
                                if (responseCode != 200 || responseCode == 403 || responseCode == 304 || responseCode == 412 || responseCode == 201) {
                                    if (1 == 0 && !z2 && i - 1 > 0) {
                                        try {
                                            Thread.sleep(5000L);
                                            Log.d(TAG, "retry once");
                                        } catch (InterruptedException e15) {
                                            Log.d(TAG, "InterruptedException");
                                            e15.printStackTrace();
                                        }
                                    }
                                    if (z2) {
                                        break;
                                    }
                                    break;
                                }
                                if (responseCode == 409) {
                                    if (1 == 0 && !z2 && i - 1 > 0) {
                                        try {
                                            Thread.sleep(5000L);
                                            Log.d(TAG, "retry once");
                                        } catch (InterruptedException e16) {
                                            Log.d(TAG, "InterruptedException");
                                            e16.printStackTrace();
                                        }
                                    }
                                    if (!z2) {
                                        break;
                                    }
                                    break;
                                    break;
                                }
                                if (responseCode == 401) {
                                    Log.d(TAG, "HTTP status code is 401. Force to run GBA");
                                    System.setProperty("gba.auth", "401");
                                    i2++;
                                    if (i2 <= 3) {
                                        z2 = true;
                                        handle401Exception(this.mConnection.getHeaderField("WWW-Authenticate"), this.mIsHttps, "");
                                    }
                                } else {
                                    Log.d(TAG, "HTTP status code is (not 200 or 403 or 409)" + responseCode);
                                }
                                if (0 == 0 && !z2 && (i = i - 1) > 0) {
                                    try {
                                        Thread.sleep(5000L);
                                        Log.d(TAG, "retry once");
                                    } catch (InterruptedException e17) {
                                        Log.d(TAG, "InterruptedException");
                                        e17.printStackTrace();
                                    }
                                }
                                if (z2) {
                                    z2 = false;
                                }
                            } catch (MalformedURLException e18) {
                                e = e18;
                                Log.e(TAG, "MalformedURLException");
                                e.printStackTrace();
                                throw e;
                            } catch (ProtocolException e19) {
                                e = e19;
                                Log.e(TAG, "ProtocolException");
                                e.printStackTrace();
                                throw e;
                            } catch (IOException e20) {
                                e = e20;
                                z = enableXcapTrustAll;
                                e.printStackTrace();
                                if (!(e instanceof SocketTimeoutException)) {
                                    if (e instanceof UnknownHostException) {
                                        Log.e(TAG, "Throw UnknownHostException");
                                        throw e;
                                    }
                                    if ("HTTP 403 Forbidden".equals(e.getMessage())) {
                                        throw new IOException("GBA hit HTTP 403 Forbidden");
                                    }
                                    if ("HTTP 400 Bad Request".equals(e.getMessage())) {
                                        throw new IOException("GBA hit HTTP 400 Bad Request");
                                    }
                                    throw e;
                                }
                                if (i - 1 <= 0) {
                                    throw e;
                                }
                                Log.d(TAG, "SocketTimeoutException: wait for retry.");
                                if (0 == 0) {
                                    Thread.sleep(5000L);
                                    Log.d(TAG, "retry once");
                                }
                                if (z2) {
                                    z2 = false;
                                }
                                str5 = str;
                                protocol = str3;
                                enableXcapTrustAll = z;
                                z3 = true;
                            } catch (Throwable th6) {
                                th = th6;
                                if (0 == 0) {
                                    Thread.sleep(5000L);
                                    Log.d(TAG, "retry once");
                                }
                                if (z2) {
                                    throw th;
                                }
                                throw th;
                            }
                        } catch (MalformedURLException e21) {
                            e = e21;
                        } catch (ProtocolException e22) {
                            e = e22;
                        } catch (IOException e23) {
                            e = e23;
                            z = enableXcapTrustAll;
                        } catch (Throwable th7) {
                            th = th7;
                        }
                    } catch (MalformedURLException e24) {
                        e = e24;
                        Log.e(TAG, "MalformedURLException");
                        e.printStackTrace();
                        throw e;
                    } catch (ProtocolException e25) {
                        e = e25;
                        Log.e(TAG, "ProtocolException");
                        e.printStackTrace();
                        throw e;
                    } catch (IOException e26) {
                        e = e26;
                        str3 = protocol;
                        z = enableXcapTrustAll;
                        e.printStackTrace();
                        if (!(e instanceof SocketTimeoutException)) {
                            if (e instanceof UnknownHostException) {
                                Log.e(TAG, "Throw UnknownHostException");
                                throw e;
                            }
                            if ("HTTP 403 Forbidden".equals(e.getMessage())) {
                                throw new IOException("GBA hit HTTP 403 Forbidden");
                            }
                            if ("HTTP 400 Bad Request".equals(e.getMessage())) {
                                throw new IOException("GBA hit HTTP 400 Bad Request");
                            }
                            throw e;
                        }
                        if (i - 1 <= 0) {
                            throw e;
                        }
                        Log.d(TAG, "SocketTimeoutException: wait for retry.");
                        if (0 == 0) {
                            Thread.sleep(5000L);
                            Log.d(TAG, "retry once");
                        }
                        if (z2) {
                            z2 = false;
                        }
                        str5 = str;
                        protocol = str3;
                        enableXcapTrustAll = z;
                        z3 = true;
                    } catch (Throwable th8) {
                        th = th8;
                        th = th;
                        if (0 == 0) {
                            Thread.sleep(5000L);
                            Log.d(TAG, "retry once");
                        }
                        if (z2) {
                            throw th;
                        }
                        throw th;
                    }
                } catch (MalformedURLException e27) {
                    e = e27;
                    Log.e(TAG, "MalformedURLException");
                    e.printStackTrace();
                    throw e;
                } catch (ProtocolException e28) {
                    e = e28;
                    Log.e(TAG, "ProtocolException");
                    e.printStackTrace();
                    throw e;
                } catch (IOException e29) {
                    e = e29;
                    str3 = protocol;
                    z = enableXcapTrustAll;
                    e.printStackTrace();
                    if (!(e instanceof SocketTimeoutException)) {
                        if (e instanceof UnknownHostException) {
                            Log.e(TAG, "Throw UnknownHostException");
                            throw e;
                        }
                        if ("HTTP 403 Forbidden".equals(e.getMessage())) {
                            throw new IOException("GBA hit HTTP 403 Forbidden");
                        }
                        if ("HTTP 400 Bad Request".equals(e.getMessage())) {
                            throw new IOException("GBA hit HTTP 400 Bad Request");
                        }
                        throw e;
                    }
                    if (i - 1 <= 0) {
                        throw e;
                    }
                    Log.d(TAG, "SocketTimeoutException: wait for retry.");
                    if (0 == 0) {
                        Thread.sleep(5000L);
                        Log.d(TAG, "retry once");
                    }
                    if (z2) {
                        z2 = false;
                    }
                    str5 = str;
                    protocol = str3;
                    enableXcapTrustAll = z;
                    z3 = true;
                } catch (Throwable th9) {
                    th = th9;
                    th = th;
                    if (0 == 0) {
                        Thread.sleep(5000L);
                        Log.d(TAG, "retry once");
                    }
                    if (z2) {
                        throw th;
                    }
                    throw th;
                }
            } catch (MalformedURLException e30) {
                e = e30;
            } catch (ProtocolException e31) {
                e = e31;
            } catch (IOException e32) {
                e = e32;
            } catch (Throwable th10) {
                th = th10;
            }
            str5 = str;
            protocol = str3;
            enableXcapTrustAll = z;
            z3 = true;
        }
        return this.mConnection;
    }

    private AkaDigestAuth getAkaDigestAuth(URL url, String str, String str2) {
        NafSessionKey cachedKey = null;
        WwwAuthHeader wwwAuthHeader = null;
        String str3 = mNafFqdnCache.get(Integer.valueOf(this.mPhoneId));
        if (url == null) {
            return null;
        }
        byte[] nafSecureProtocolId = getNafSecureProtocolId(this.mIsHttps, "");
        if (nafSecureProtocolId == null || nafSecureProtocolId.length == 0) {
            Log.e(TAG, "uaId is invalid!");
            return null;
        }
        if (!SENLOG) {
            for (int i = 0; i < nafSecureProtocolId.length; i++) {
                Log.d(TAG, "uaId[" + i + "] = " + String.format("0x%02x", Byte.valueOf(nafSecureProtocolId[i])));
            }
        }
        int subIdUsingPhoneId = MtkSubscriptionManager.getSubIdUsingPhoneId(this.mPhoneId);
        if ("1".equals(SystemProperties.get(PROPERTY_RIL_TEST_SIM[this.mPhoneId], "0")) && mRequestCount > 1) {
            Log.d(TAG, "getAkaDigestAuth: force to run gba");
            return null;
        }
        if (str3 != null) {
            cachedKey = this.mGbaManager.getCachedKey(str3, nafSecureProtocolId, subIdUsingPhoneId);
            StringBuilder sb = new StringBuilder();
            sb.append("getAkaDigestAuth: nafFqdn=");
            sb.append(str3);
            sb.append(", mPhoneId=");
            sb.append(this.mPhoneId);
            sb.append("nafSessionKey=");
            sb.append(!SENLOG ? cachedKey : "[hidden]");
            Log.d(TAG, sb.toString());
            if (cachedKey != null && cachedKey.getAuthHeader() != null) {
                wwwAuthHeader = WwwAuthHeader.parse(cachedKey.getAuthHeader());
                Log.d(TAG, "getAkaDigestAuth: wwwAuthHeader=" + wwwAuthHeader);
            }
        }
        if (cachedKey == null || wwwAuthHeader == null) {
            return null;
        }
        String strBytesToHex = bytesToHex(android.util.Base64.encode(cachedKey.getKey(), 2));
        String str4 = String.format("%08x", Integer.valueOf(mRequestCount));
        StringBuilder sb2 = new StringBuilder();
        sb2.append("getAkaDigestAuth: password=");
        sb2.append(strBytesToHex);
        sb2.append(", nc=");
        sb2.append(str4);
        sb2.append(", url=");
        sb2.append(SENLOG ? "[hidden]" : url.getPath());
        Log.d(TAG, sb2.toString());
        return new AkaDigestAuth(wwwAuthHeader, cachedKey.getBtid(), null, strBytesToHex, url.getPath(), str4, str, str2);
    }

    private byte[] getNafSecureProtocolId(boolean z, String str) {
        StringBuilder sb = new StringBuilder();
        sb.append("getNafSecureProtocolId: protocol=");
        sb.append(z ? "https" : "http");
        sb.append(", isTlsEnabled=");
        sb.append(z);
        sb.append(", cipher = ");
        sb.append(str);
        Log.d(TAG, sb.toString());
        return this.mGbaManager.getNafSecureProtocolId(z, str);
    }

    private void handle401Exception(String str, boolean z, String str2) throws IOException {
        WwwAuthHeader wwwAuthHeader = null;
        mRequestCount = 1;
        if (str != null) {
            wwwAuthHeader = WwwAuthHeader.parse(str);
            Log.d(TAG, "handle401Exception: wwwAuthHeader=" + wwwAuthHeader);
        }
        if (str == null || wwwAuthHeader == null) {
            Log.e(TAG, "handle401Exception: authentication header has something wrong");
            return;
        }
        byte[] nafSecureProtocolId = getNafSecureProtocolId(z, str2);
        if (!SENLOG) {
            for (int i = 0; i < nafSecureProtocolId.length; i++) {
                Log.d(TAG, "uaId[" + i + "] = " + String.format("0x%02x", Byte.valueOf(nafSecureProtocolId[i])));
            }
        }
        String realm = wwwAuthHeader.getRealm();
        if (realm.length() <= 0) {
            Log.e(TAG, "handle401Exception: realm is empty string !!!");
            return;
        }
        String[] strArrSplit = realm.split(";");
        String strSubstring = strArrSplit[0].substring(strArrSplit[0].indexOf("@") + 1);
        Log.d(TAG, "handle401Exception: nafFqdn=" + strSubstring + ", mPhoneId=" + this.mPhoneId);
        mNafFqdnCache.put(Integer.valueOf(this.mPhoneId), strSubstring);
        int subIdUsingPhoneId = MtkSubscriptionManager.getSubIdUsingPhoneId(this.mPhoneId);
        String strRunGbaAuthentication = this.mGbaManager.runGbaAuthentication(strSubstring, nafSecureProtocolId, true, subIdUsingPhoneId);
        if (strRunGbaAuthentication != null && strRunGbaAuthentication.getKey() != null) {
            strRunGbaAuthentication.setAuthHeader(str);
            this.mGbaManager.updateCachedKey(strSubstring, nafSecureProtocolId, subIdUsingPhoneId, strRunGbaAuthentication);
            StringBuilder sb = new StringBuilder();
            sb.append("handle401Exception: nafSessionKey=");
            sb.append((Object) (!SENLOG ? strRunGbaAuthentication : "[hidden]"));
            Log.d(TAG, sb.toString());
            return;
        }
        Log.e(TAG, "handle401Exception: nafSessionKey Error!");
        if (strRunGbaAuthentication == null || strRunGbaAuthentication.getException() == null || !(strRunGbaAuthentication.getException() instanceof IllegalStateException)) {
            return;
        }
        String message = ((IllegalStateException) strRunGbaAuthentication.getException()).getMessage();
        if ("HTTP 403 Forbidden".equals(message)) {
            Log.i(TAG, "GBA hit 403");
            throw new IOException("HTTP 403 Forbidden");
        }
        if ("HTTP 400 Bad Request".equals(message)) {
            Log.i(TAG, "GBA hit 400");
            throw new IOException("HTTP 400 Bad Request");
        }
    }

    private void initialize() {
        this.mGbaManager = GbaManager.getDefaultGbaManager(this.mContext);
        this.mDebugParam.load();
    }

    private void logRequestHeaders(HttpURLConnection httpURLConnection) {
        Map<String, List<String>> requestProperties = httpURLConnection.getRequestProperties();
        Log.d(TAG, "Request Headers:");
        for (Map.Entry<String, List<String>> entry : requestProperties.entrySet()) {
            String key = entry.getKey();
            List<String> value = entry.getValue();
            if (value != null) {
                for (String str : value) {
                    if (!SENLOG) {
                        Log.d(TAG, key + ": " + encryptString(str));
                    }
                }
            }
        }
    }

    private void logResponseHeaders(HttpURLConnection httpURLConnection) {
        Map<String, List<String>> headerFields = httpURLConnection.getHeaderFields();
        Log.d(TAG, "Response Headers:");
        for (Map.Entry<String, List<String>> entry : headerFields.entrySet()) {
            String key = entry.getKey();
            List<String> value = entry.getValue();
            if (value != null) {
                Iterator<String> it = value.iterator();
                while (it.hasNext()) {
                    Log.d(TAG, key + ": " + encryptString(it.next()));
                }
            }
        }
    }

    public HttpURLConnection delete(URI uri) throws IOException {
        return delete(uri, null, null, null);
    }

    public HttpURLConnection delete(URI uri, Map<String, String> map) throws IOException {
        return delete(uri, map, null, null);
    }

    public HttpURLConnection delete(URI uri, Map<String, String> map, String str, String str2) throws IOException {
        return execute(uri.toURL(), METHOD_DELETE, null, map, null);
    }

    public HttpURLConnection get(URI uri, Map<String, String> map) throws IOException {
        return execute(uri.toURL(), METHOD_GET, null, map, null);
    }

    public HttpURLConnection put(URI uri, String str, String str2) throws IOException {
        Log.d(TAG, "PUT: " + encryptString(str2));
        return put(uri, str, str2.getBytes("UTF-8"), (Map<String, String>) null, (String) null, (String) null);
    }

    public HttpURLConnection put(URI uri, String str, String str2, Map<String, String> map) throws IOException {
        Log.d(TAG, "PUT: " + encryptString(str2));
        return put(uri, str, str2.getBytes("UTF-8"), map, (String) null, (String) null);
    }

    public HttpURLConnection put(URI uri, String str, String str2, Map<String, String> map, String str3, String str4) throws IOException {
        Log.d(TAG, "PUT: " + encryptString(str2));
        return put(uri, str, str2.getBytes("UTF-8"), map, str3, str4);
    }

    public HttpURLConnection put(URI uri, String str, byte[] bArr, Map<String, String> map, String str2, String str3) throws IOException {
        return execute(uri.toURL(), METHOD_PUT, bArr, map, str);
    }

    public void shutdown() {
        HttpURLConnection httpURLConnection = this.mConnection;
        if (httpURLConnection != null) {
            httpURLConnection.disconnect();
            this.mConnection = null;
        }
    }
}
