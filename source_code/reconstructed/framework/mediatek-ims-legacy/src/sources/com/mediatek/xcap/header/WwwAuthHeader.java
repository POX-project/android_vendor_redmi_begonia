package com.mediatek.xcap.header;

import android.util.Log;

/* JADX INFO: loaded from: classes.dex */
public class WwwAuthHeader {
    private static final String ALGO = "algorithm";
    private static final String DIGEST_SCHEME = "Digest";
    private static final String NONCE = "nonce";
    private static final String OPAQUE = "opaque";
    private static final String QOP = "qop";
    private static final String QOP_AUTH = "auth";
    private static final String QOP_AUTH_INT = "auth-int";
    private static final String REALM = "realm";
    private static final String TAG = "WwwAuthenticateHeader";
    private String mAlgorithm;
    private String mNonce;
    private String mOpaque;
    private String mQop;
    private String mRealm;
    private String mSchemeName;

    protected WwwAuthHeader(String str, String str2, String str3, String str4, String str5, String str6) {
        this.mSchemeName = str;
        this.mRealm = str2;
        this.mNonce = str3;
        this.mAlgorithm = str4;
        this.mQop = str5;
        this.mOpaque = str6;
    }

    public static WwwAuthHeader parse(String str) {
        WwwAuthHeader wwwAuthHeader = null;
        String str2 = str;
        int length = 0;
        while (length < str2.length()) {
            int i = length;
            int iSkipUntil = HeaderParser.skipUntil(str2, length, " ");
            String strTrim = str2.substring(i, iSkipUntil).trim();
            int iSkipWhitespace = HeaderParser.skipWhitespace(str2, iSkipUntil);
            String strSubstring = str2.substring(iSkipWhitespace);
            length = iSkipWhitespace + strSubstring.length();
            String str3 = str2;
            String str4 = null;
            String str5 = null;
            String str6 = null;
            String str7 = null;
            int i2 = 0;
            String str8 = null;
            for (String str9 : strSubstring.split(",")) {
                System.out.println("field[" + i2 + "]: " + str9);
                String[] strArrSplit = str9.trim().split("=");
                if (strArrSplit.length < 2) {
                    System.out.println("No support:" + str9);
                } else {
                    String str10 = strArrSplit[0];
                    String strSubstring2 = strArrSplit.length > 2 ? str9.trim().substring(str10.length() + 1) : strArrSplit[1];
                    if (strSubstring2.indexOf("\"") >= 0) {
                        strSubstring2 = HeaderParser.getQuoteString(strSubstring2, str10, 0);
                    }
                    if (REALM.equals(str10)) {
                        str8 = strSubstring2;
                    } else if (!"uri".equals(str10)) {
                        if (ALGO.equals(str10)) {
                            str5 = strSubstring2;
                        } else if (!"domain".equals(str10)) {
                            if (NONCE.equals(str10)) {
                                str4 = strSubstring2;
                            } else if (!"stale".equals(str10)) {
                                if (QOP.equals(str10)) {
                                    str6 = strSubstring2;
                                } else if (OPAQUE.equals(str10)) {
                                    str7 = strSubstring2;
                                }
                            }
                        }
                    }
                }
                i2++;
            }
            wwwAuthHeader = new WwwAuthHeader(strTrim, str8, str4, str5, str6, str7);
            str2 = str3;
        }
        Log.d(TAG, "Dump:" + wwwAuthHeader);
        return wwwAuthHeader;
    }

    public String getAlgorithm() {
        return this.mAlgorithm;
    }

    public String getNonce() {
        return this.mNonce;
    }

    public String getOpaque() {
        return this.mOpaque;
    }

    public String getQop() {
        return this.mQop;
    }

    public String getRealm() {
        return this.mRealm;
    }

    public String getSchemeName() {
        return this.mSchemeName;
    }

    public void setAlgorithm(String str) {
        this.mAlgorithm = str;
    }

    public void setNonce(String str) {
        this.mNonce = str;
    }

    public void setOpaque(String str) {
        this.mOpaque = str;
    }

    public void setQop(String str) {
        this.mQop = str;
    }

    public void setRealm(String str) {
        this.mRealm = str;
    }

    public void setSchemeName(String str) {
        this.mSchemeName = str;
    }

    public String toString() {
        return "WwwAuthHeader [realm=" + this.mRealm + ", schema name=" + this.mSchemeName + ", nonce=" + this.mNonce + ", algorithm=" + this.mAlgorithm + ", qop=" + this.mQop + ", opaque=" + this.mOpaque + "]";
    }
}
