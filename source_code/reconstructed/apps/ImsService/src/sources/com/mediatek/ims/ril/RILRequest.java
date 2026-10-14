package com.mediatek.ims.ril;

import android.os.AsyncResult;
import android.os.Message;
import android.os.SystemClock;
import android.os.WorkSource;
import android.telephony.Rlog;
import com.android.internal.telephony.CommandException;
import java.util.Random;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: compiled from: ImsRILAdapter.java */
/* JADX INFO: loaded from: classes.dex */
class RILRequest {
    static final String LOG_TAG = "IMS-RilRequest";
    private static final int MAX_POOL_SIZE = 4;
    String mClientId;
    RILRequest mNext;
    int mRequest;
    Message mResult;
    int mSerial;
    long mStartTimeMs;
    int mWakeLockType;
    WorkSource mWorkSource;
    static Random sRandom = new Random();
    static AtomicInteger sNextSerial = new AtomicInteger(0);
    private static Object sPoolSync = new Object();
    private static RILRequest sPool = null;
    private static int sPoolSize = 0;

    private RILRequest() {
    }

    static RILRequest obtain(int i, Message message) {
        RILRequest rILRequest = null;
        synchronized (sPoolSync) {
            if (sPool != null) {
                rILRequest = sPool;
                sPool = rILRequest.mNext;
                rILRequest.mNext = null;
                sPoolSize--;
            }
        }
        if (rILRequest == null) {
            rILRequest = new RILRequest();
        }
        rILRequest.mSerial = sNextSerial.getAndIncrement();
        rILRequest.mRequest = i;
        rILRequest.mResult = message;
        rILRequest.mWakeLockType = -1;
        rILRequest.mWorkSource = null;
        rILRequest.mStartTimeMs = SystemClock.elapsedRealtime();
        if (message == null || message.getTarget() != null) {
            return rILRequest;
        }
        throw new NullPointerException("Message target must not be null");
    }

    static RILRequest obtain(int i, Message message, WorkSource workSource) {
        RILRequest rILRequestObtain = obtain(i, message);
        if (workSource != null) {
            rILRequestObtain.mWorkSource = workSource;
            rILRequestObtain.mClientId = String.valueOf(workSource.get(0)) + ":" + workSource.getName(0);
        } else {
            Rlog.e(LOG_TAG, "null workSource " + i);
        }
        return rILRequestObtain;
    }

    static void resetSerial() {
        sNextSerial.set(sRandom.nextInt());
    }

    void onError(int i, Object obj) {
        CommandException commandExceptionFromRilErrno = CommandException.fromRilErrno(i);
        Rlog.d(LOG_TAG, serialString() + "< " + ImsRILAdapter.requestToString(this.mRequest) + " error: " + commandExceptionFromRilErrno + " ret=" + ImsRILAdapter.retToString(this.mRequest, obj));
        Message message = this.mResult;
        if (message != null) {
            AsyncResult.forMessage(message, obj, commandExceptionFromRilErrno);
            this.mResult.sendToTarget();
        }
    }

    void release() {
        synchronized (sPoolSync) {
            if (sPoolSize < 4) {
                this.mNext = sPool;
                sPool = this;
                sPoolSize++;
                this.mResult = null;
                if (this.mWakeLockType != -1 && this.mWakeLockType == 0) {
                    Rlog.e(LOG_TAG, "RILRequest releasing with held wake lock: " + serialString());
                }
            }
        }
    }

    String serialString() {
        StringBuilder sb = new StringBuilder(8);
        String string = Long.toString((((long) this.mSerial) - (-2147483648L)) % 10000);
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
