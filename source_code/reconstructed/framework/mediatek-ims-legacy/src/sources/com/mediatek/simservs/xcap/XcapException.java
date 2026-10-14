package com.mediatek.simservs.xcap;

import android.util.Log;
import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public class XcapException extends Exception {
    public static final int AUTHENTICATION_EXCEPTION = 9;
    public static final int AUTH_CHALLENGE_EXCEPTION = 6;
    public static final int CONNECTION_POOL_TIMEOUT_EXCEPTION = 1;
    public static final int CONNECT_TIMEOUT_EXCEPTION = 2;
    public static final int CREDENTIALS_NOT_AVAILABLE_EXCEPTION = 7;
    public static final int HTTP_EXCEPTION = 14;
    public static final int HTTP_RECOVERABL_EEXCEPTION = 4;
    public static final int INVALID_CREDENTIALS_EXCEPTION = 8;
    public static final int MALFORMED_CHALLENGE_EXCEPTION = 5;
    public static final int MALFORMED_COOKIE_EXCEPTION = 10;
    public static final int NO_EXCEPTION = 0;
    public static final int NO_HTTP_RESPONSE_EXCEPTION = 3;
    public static final int PROTOCOL_EXCEPTION = 13;
    public static final int REDIRECT_EXCEPTION = 11;
    public static final int URI_EXCEPTION = 12;
    private static final long serialVersionUID = 1;
    private int mExceptionCode;
    private int mHttpErrorCode;
    private boolean mIsConnectionError;
    private String mXcapErrorMessage;

    public XcapException(int i) {
        this.mHttpErrorCode = 0;
        this.mExceptionCode = 0;
        this.mIsConnectionError = false;
        this.mHttpErrorCode = i;
    }

    public XcapException(int i, String str) {
        this.mHttpErrorCode = 0;
        this.mExceptionCode = 0;
        this.mIsConnectionError = false;
        this.mHttpErrorCode = i;
        this.mXcapErrorMessage = str;
    }

    public XcapException(IOException iOException) {
        this.mHttpErrorCode = 0;
        this.mExceptionCode = 0;
        this.mIsConnectionError = false;
        if ("GBA hit HTTP 403 Forbidden".equals(iOException.getMessage())) {
            this.mHttpErrorCode = 403;
        } else if (!"GBA hit HTTP 400 Bad Request".equals(iOException.getMessage())) {
            this.mIsConnectionError = true;
        } else {
            Log.i("XcapException", "IOException 400 bad request");
            this.mHttpErrorCode = 400;
        }
    }

    public String getErrorMessage() {
        return this.mXcapErrorMessage;
    }

    public int getExceptionCodeCode() {
        return this.mExceptionCode;
    }

    public int getHttpErrorCode() {
        return this.mHttpErrorCode;
    }

    public boolean isConnectionError() {
        return this.mIsConnectionError;
    }
}
