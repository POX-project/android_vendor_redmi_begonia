package com.mediatek.xcap.auth;

import android.os.Build;
import android.os.SystemProperties;
import android.text.TextUtils;
import android.util.Log;
import com.android.internal.util.HexDump;
import com.mediatek.xcap.client.XcapClient;
import com.mediatek.xcap.header.WwwAuthHeader;
import java.io.UnsupportedEncodingException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Date;

/* JADX INFO: loaded from: classes.dex */
public class AkaDigestAuth {
    private static final String AKA_SPLITTER = "-";
    private static final String AKA_VERSION = "AKAv";
    private static final String ALGORITHM_NAME_MD5 = "MD5";
    private static final String ALGORITHM_NAME_MD5_SESS = "MD5-sess";
    private static final String ALGORITHM_NAME_UNSPECIFIED = "";
    private static final String HEADER_VALUE_FORMAT_WITH_RESPONSE = "Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", qop=%s, nc=%s, cnonce=\"%s\", response=\"%s\", opaque=\"%s\"";
    private static final String HEADER_VALUE_FORMAT_WITH_RESPONSE2 = "Digest username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", qop=%s, nc=%s, cnonce=\"%s\", response=\"%s\"";
    private static final char[] HEXADECIMAL;
    private static final String ISO_8859_1 = "ISO-8859-1";
    private static final String PROP_FORCE_DEBUG_KEY = "persist.vendor.log.tag.tel_dbg";
    private static final String QOP_AUTH_BOTH = "auth, auth-int";
    private static final String QOP_AUTH_INT_NAME = "auth-int";
    private static final String QOP_AUTH_NAME = "auth";
    private static final String QOP_UNSPECIFIED = "";
    private static final String QUOTE = "\"";
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, "user");
    private static final String SEPARATOR = ":";
    private static final String TAG = "AkaDigestAuth";
    private static final boolean TELDBG;
    private static final String US_ASCII = "US-ASCII";
    private String mAlgorithm;
    private String mAuts;
    private String mCharSet;
    private String mCnonce;
    private String mEntityBody;
    MessageDigest mMd5Helper;
    private String mMethod;
    private String mNc;
    private String mNonce;
    private String mOpaque;
    private String mPassword;
    private String mQop;
    private String mRealm;
    private String mResponse;
    private String mUri;
    private String mUsername;

    static {
        TELDBG = SystemProperties.getInt(PROP_FORCE_DEBUG_KEY, 0) == 1;
        HEXADECIMAL = new char[]{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    }

    public AkaDigestAuth(WwwAuthHeader wwwAuthHeader, String str, String str2, String str3, String str4, String str5, String str6, String str7) {
        initMd5();
        String qop = wwwAuthHeader.getQop();
        this.mQop = qop;
        if (qop.indexOf(QOP_AUTH_NAME) != -1 && this.mQop.indexOf(QOP_AUTH_INT_NAME) != -1) {
            this.mQop = QOP_AUTH_INT_NAME;
        }
        if (wwwAuthHeader.getAlgorithm() != null) {
            this.mAlgorithm = wwwAuthHeader.getAlgorithm();
        } else {
            this.mAlgorithm = "";
        }
        this.mUsername = str;
        this.mRealm = wwwAuthHeader.getRealm();
        this.mPassword = str3;
        this.mAuts = str2;
        this.mNonce = wwwAuthHeader.getNonce();
        this.mOpaque = wwwAuthHeader.getOpaque();
        this.mUri = str4;
        this.mNc = str5;
        this.mMethod = str6;
        this.mCnonce = createCNonce();
        this.mEntityBody = str7;
        this.mResponse = "";
        this.mCharSet = ISO_8859_1;
    }

    private AkaDigestAuth(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9, String str10, String str11, String str12, String str13) {
        initMd5();
        this.mQop = str6;
        this.mAlgorithm = str7;
        this.mUsername = str;
        this.mRealm = str8;
        this.mPassword = str3;
        this.mAuts = str2;
        this.mNonce = str9;
        this.mOpaque = str10;
        this.mUri = str4;
        this.mNc = str5;
        this.mMethod = str12;
        this.mCnonce = str11;
        this.mEntityBody = str13;
        this.mResponse = "";
        this.mCharSet = ISO_8859_1;
    }

    private String calculateHA1(String str, String str2, String str3, String str4, String str5, String str6) {
        String str7;
        if (!SENLOG || TELDBG) {
            Log.i(TAG, "run calculateHA1:" + str + "/" + str2 + "/" + str3 + "/" + str4 + "/" + str5 + "/" + str6);
        } else {
            Log.i(TAG, "run calculateHA1:" + str + "/[hidden]/" + str3 + "/" + str4 + "/" + str5 + "/" + str6);
        }
        if (str.endsWith("") || str.endsWith(ALGORITHM_NAME_MD5)) {
            Log.i(TAG, "A = username: relam : password");
            str7 = HexDump.toHexString(getBytes(str2 + SEPARATOR + str3 + SEPARATOR)) + str4;
            Log.i(TAG, "a1Res:" + str7);
        } else {
            str7 = md5(getBytes(str2 + SEPARATOR + str3 + SEPARATOR + str4)) + SEPARATOR + str5 + SEPARATOR + str6;
        }
        Log.i(TAG, "a1:" + str7);
        String strMd5 = str7 != null ? md5(HexDump.hexStringToByteArray(str7)) : null;
        Log.i(TAG, "ha1Result:" + strMd5);
        return strMd5;
    }

    private String calculateHA2(String str, String str2, String str3, String str4) {
        String str5 = null;
        Log.i(TAG, "run calculateHA2:" + str + "/" + str2 + "/Uri : " + XcapClient.encryptString(str3) + "/Body : " + XcapClient.encryptString(str4));
        if (this.mQop.equals("") || this.mQop.equals(QOP_AUTH_NAME)) {
            str5 = str2 + SEPARATOR + str3;
        } else if (this.mQop.equals(QOP_AUTH_INT_NAME)) {
            str5 = str2 + SEPARATOR + str3 + SEPARATOR + md5(getBytes(str4));
            Log.i(TAG, "a2Res:" + XcapClient.encryptString(str5));
        }
        Log.i(TAG, "a2:" + XcapClient.encryptString(str5));
        String strMd5 = md5(getBytes(str5));
        Log.i(TAG, "ha2Result:" + strMd5);
        return strMd5;
    }

    private String createCNonce() {
        String str = "" + new Date().getTime();
        Log.i(TAG, "dataStr:" + str);
        try {
            return md5(str.getBytes(US_ASCII));
        } catch (UnsupportedEncodingException e) {
            Log.e(TAG, "ue:" + e);
            return "";
        }
    }

    private String encode(byte[] bArr) {
        if (bArr.length != 16) {
            return null;
        }
        char[] cArr = new char[32];
        for (int i = 0; i < 16; i++) {
            int i2 = bArr[i] & 15;
            int i3 = (bArr[i] & 240) >> 4;
            char[] cArr2 = HEXADECIMAL;
            cArr[i * 2] = cArr2[i3];
            cArr[(i * 2) + 1] = cArr2[i2];
        }
        return new String(cArr);
    }

    private byte[] getBytes(String str) {
        try {
            Log.i(TAG, "getBytes:" + XcapClient.encryptString(str) + ", Charset : " + this.mCharSet);
            return str.getBytes(this.mCharSet);
        } catch (UnsupportedEncodingException e) {
            e.printStackTrace();
            return null;
        }
    }

    private void initMd5() {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance(ALGORITHM_NAME_MD5);
            this.mMd5Helper = messageDigest;
            messageDigest.reset();
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
        }
    }

    private String md5(byte[] bArr) {
        String strEncode = encode(this.mMd5Helper.digest(bArr));
        Log.i(TAG, "encode:" + strEncode);
        return strEncode;
    }

    public String calculateRequestDigest() {
        String strMd5 = null;
        Log.i(TAG, "mQop:" + this.mQop);
        if (this.mQop.equals(QOP_AUTH_NAME) || this.mQop.equals(QOP_AUTH_INT_NAME)) {
            String str = calculateHA1(this.mAlgorithm, this.mUsername, this.mRealm, this.mPassword, this.mNonce, this.mCnonce) + SEPARATOR + this.mNonce + SEPARATOR + this.mNc + SEPARATOR + this.mCnonce + SEPARATOR + this.mQop + SEPARATOR + calculateHA2(this.mQop, this.mMethod, this.mUri, this.mEntityBody);
            Log.i(TAG, "rawRes:" + str);
            strMd5 = md5(getBytes(str));
            Log.i(TAG, "response:" + strMd5);
        } else if (this.mQop.equals("")) {
            String str2 = calculateHA1(this.mAlgorithm, this.mUsername, this.mRealm, this.mPassword, this.mNonce, this.mCnonce) + SEPARATOR + this.mNonce + SEPARATOR + calculateHA2(this.mQop, this.mMethod, this.mUri, this.mEntityBody);
            Log.i(TAG, "rawRes:" + str2);
            strMd5 = md5(getBytes(str2));
            Log.i(TAG, "response:" + strMd5);
        } else {
            Log.e(TAG, "Unsupported qop value, qop=" + this.mQop);
        }
        this.mResponse = strMd5;
        return strMd5;
    }

    public String createAuthorHeaderValue() {
        String str = this.mOpaque;
        StringBuilder sb = str != null ? new StringBuilder(String.format(HEADER_VALUE_FORMAT_WITH_RESPONSE, this.mUsername, this.mRealm, this.mNonce, this.mUri, this.mQop, this.mNc, this.mCnonce, this.mResponse, str, this.mAlgorithm)) : new StringBuilder(String.format(HEADER_VALUE_FORMAT_WITH_RESPONSE2, this.mUsername, this.mRealm, this.mNonce, this.mUri, this.mQop, this.mNc, this.mCnonce, this.mResponse, this.mAlgorithm));
        String str2 = this.mAlgorithm;
        if (str2 != null && str2.length() > 0) {
            sb.append(", algorithm=" + this.mAlgorithm);
        }
        String str3 = this.mAuts;
        if (str3 != null && str3.length() > 0) {
            sb.append(", auts=\"" + this.mAuts + QUOTE);
        }
        return sb.toString();
    }
}
