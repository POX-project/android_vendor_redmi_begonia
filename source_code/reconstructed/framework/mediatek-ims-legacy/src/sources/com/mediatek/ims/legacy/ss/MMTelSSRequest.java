package com.mediatek.ims.legacy.ss;

import android.os.AsyncResult;
import android.os.Message;
import android.os.Parcel;
import android.telephony.Rlog;
import com.android.internal.telephony.CommandException;

/* JADX INFO: compiled from: MMTelSSTransport.java */
/* JADX INFO: loaded from: classes.dex */
class MMTelSSRequest {
    static final String LOG_TAG = "MMTelSSReq";
    private static final int MAX_POOL_SIZE = 4;
    MMTelSSRequest mNext;
    int mRequest;
    Message mResult;
    int mSerial;
    Parcel mp;
    Object requestParm;
    static int sNextSerial = 0;
    static Object sSerialMonitor = new Object();
    private static Object sPoolSync = new Object();
    private static MMTelSSRequest sPool = null;
    private static int sPoolSize = 0;

    private MMTelSSRequest() {
    }

    static MMTelSSRequest obtain(int i, Message message) {
        MMTelSSRequest mMTelSSRequest = null;
        synchronized (sPoolSync) {
            if (sPool != null) {
                mMTelSSRequest = sPool;
                sPool = mMTelSSRequest.mNext;
                mMTelSSRequest.mNext = null;
                sPoolSize--;
            }
        }
        MMTelSSRequest mMTelSSRequest2 = mMTelSSRequest == null ? new MMTelSSRequest() : mMTelSSRequest;
        synchronized (sSerialMonitor) {
            int i2 = sNextSerial;
            sNextSerial = i2 + 1;
            mMTelSSRequest2.mSerial = i2;
        }
        mMTelSSRequest2.mRequest = i;
        mMTelSSRequest2.mResult = message;
        mMTelSSRequest2.mp = Parcel.obtain();
        if (message != null && message.getTarget() == null) {
            throw new NullPointerException("Message target must not be null");
        }
        mMTelSSRequest2.mp.writeInt(i);
        mMTelSSRequest2.mp.writeInt(mMTelSSRequest2.mSerial);
        return mMTelSSRequest2;
    }

    static void resetSerial() {
        synchronized (sSerialMonitor) {
            sNextSerial = 0;
        }
    }

    void onError(int i, Object obj) {
        CommandException commandExceptionFromRilErrno = CommandException.fromRilErrno(i);
        Rlog.d(LOG_TAG, serialString() + "< " + MMTelSSTransport.requestToString(this.mRequest) + " error: " + commandExceptionFromRilErrno);
        Message message = this.mResult;
        if (message != null) {
            AsyncResult.forMessage(message, obj, commandExceptionFromRilErrno);
            this.mResult.sendToTarget();
        }
        Parcel parcel = this.mp;
        if (parcel != null) {
            parcel.recycle();
            this.mp = null;
        }
    }

    void release() {
        synchronized (sPoolSync) {
            if (sPoolSize < 4) {
                this.mNext = sPool;
                sPool = this;
                sPoolSize++;
                this.mResult = null;
            }
        }
    }

    String serialString() {
        StringBuilder sb = new StringBuilder(8);
        String string = Integer.toString(this.mSerial);
        sb.append('[');
        int length = string.length();
        for (int i = 0; i < 4 - length; i++) {
            sb.append('0');
        }
        sb.append(string);
        sb.append(']');
        return sb.toString();
    }
}
