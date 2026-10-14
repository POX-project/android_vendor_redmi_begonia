package com.mediatek.ims;

import android.os.Message;
import android.os.RemoteException;
import android.telephony.Rlog;
import android.telephony.ims.ImsCallForwardInfo;
import android.telephony.ims.ImsReasonInfo;
import com.android.ims.ImsException;
import com.android.ims.ImsUt;
import com.android.ims.internal.IImsUt;
import com.mediatek.ims.internal.IMtkImsUt;
import com.mediatek.ims.internal.IMtkImsUtListener;
import java.util.Arrays;

/* JADX INFO: loaded from: classes.dex */
public class MtkImsUt extends ImsUt {
    private static final String TAG = "MtkImsUt";
    private final IMtkImsUt miMtkUt;

    private class IMtkImsUtListenerProxy extends IMtkImsUtListener.Stub {
        private IMtkImsUtListenerProxy() {
        }

        public void utConfigurationCallForwardInTimeSlotQueried(IMtkImsUt iMtkImsUt, int i, MtkImsCallForwardInfo[] mtkImsCallForwardInfoArr) {
            Integer numValueOf = Integer.valueOf(i);
            synchronized (MtkImsUt.this.mLockObj) {
                MtkImsUt.this.sendSuccessReport((Message) MtkImsUt.this.mPendingCmds.get(numValueOf), mtkImsCallForwardInfoArr);
                MtkImsUt.this.mPendingCmds.remove(numValueOf);
            }
        }

        public void utConfigurationCallForwardQueried(IMtkImsUt iMtkImsUt, int i, ImsCallForwardInfo[] imsCallForwardInfoArr) {
            Integer numValueOf = Integer.valueOf(i);
            synchronized (MtkImsUt.this.mLockObj) {
                MtkImsUt.this.sendSuccessReport((Message) MtkImsUt.this.mPendingCmds.get(numValueOf), imsCallForwardInfoArr);
                MtkImsUt.this.mPendingCmds.remove(numValueOf);
            }
        }
    }

    public MtkImsUt(IImsUt iImsUt, IMtkImsUt iMtkImsUt) {
        super(iImsUt);
        this.miMtkUt = iMtkImsUt;
        if (iMtkImsUt != null) {
            try {
                iMtkImsUt.setListener(new IMtkImsUtListenerProxy());
            } catch (RemoteException e) {
            }
        }
    }

    public void close() {
        super.close();
    }

    public String getUtIMPUFromNetwork() throws ImsException {
        String utIMPUFromNetwork;
        log("getUtIMPUFromNetwork :: Ut = " + this.miMtkUt);
        synchronized (this.mLockObj) {
            try {
                try {
                    utIMPUFromNetwork = this.miMtkUt.getUtIMPUFromNetwork();
                } catch (RemoteException e) {
                    throw new ImsException("getUtIMPUFromNetwork()", e, 802);
                }
            } catch (Throwable th) {
                throw th;
            }
        }
        return utIMPUFromNetwork;
    }

    public String getXcapConflictErrorMessage() throws ImsException {
        String xcapConflictErrorMessage;
        log("getXcapConflictErrorMessage :: Ut = " + this.miMtkUt);
        synchronized (this.mLockObj) {
            try {
                try {
                    xcapConflictErrorMessage = this.miMtkUt.getXcapConflictErrorMessage();
                } catch (RemoteException e) {
                    throw new ImsException("getXcapConflictErrorMessage()", e, 802);
                }
            } catch (Throwable th) {
                throw th;
            }
        }
        return xcapConflictErrorMessage;
    }

    protected void log(String str) {
        Rlog.d(TAG, str);
    }

    public void queryCFForServiceClass(int i, String str, int i2, Message message) {
        log("queryCFForServiceClass :: condition=" + i + ", number=" + Rlog.pii(TAG, str) + ", serviceClass = " + i2);
        synchronized (this.mLockObj) {
            try {
                int iQueryCFForServiceClass = this.miMtkUt.queryCFForServiceClass(i, str, i2);
                if (iQueryCFForServiceClass < 0) {
                    sendFailureReport(message, new ImsReasonInfo(802, 0));
                } else {
                    this.mPendingCmds.put(Integer.valueOf(iQueryCFForServiceClass), message);
                }
            } catch (RemoteException e) {
                sendFailureReport(message, new ImsReasonInfo(802, 0));
            }
        }
    }

    public void queryCallForwardInTimeSlot(int i, Message message) {
        log("queryCallForwardInTimeSlot :: Ut = " + this.miMtkUt + ", condition = " + i);
        synchronized (this.mLockObj) {
            try {
                int iQueryCallForwardInTimeSlot = this.miMtkUt.queryCallForwardInTimeSlot(i);
                if (iQueryCallForwardInTimeSlot < 0) {
                    sendFailureReport(message, new ImsReasonInfo(802, 0));
                } else {
                    this.mPendingCmds.put(Integer.valueOf(iQueryCallForwardInTimeSlot), message);
                }
            } catch (RemoteException e) {
                sendFailureReport(message, new ImsReasonInfo(802, 0));
            }
        }
    }

    public void setupXcapUserAgentString(String str) throws ImsException {
        log("setupXcapUserAgentString :: Ut = " + this.miMtkUt);
        synchronized (this.mLockObj) {
            try {
                try {
                    this.miMtkUt.setupXcapUserAgentString(str);
                } catch (RemoteException e) {
                    throw new ImsException("setupXcapUserAgentString()", e, 802);
                }
            } catch (Throwable th) {
                throw th;
            }
        }
    }

    public void updateCallBarring(String str, int i, int i2, Message message, String[] strArr, int i3) {
        if (strArr != null) {
            String str2 = new String();
            for (String str3 : strArr) {
                str2 = str2.concat(str3 + " ");
            }
            log("updateCallBarring :: Ut=" + this.miMtkUt + ", cbType=" + i + ", action=" + i2 + ", serviceClass=" + i3 + ", barrList=" + str2);
        } else {
            log("updateCallBarring :: Ut=" + this.miMtkUt + ", cbType=" + i + ", action=" + i2 + ", serviceClass=" + i3);
        }
        synchronized (this.mLockObj) {
            try {
                int iUpdateCallBarringForServiceClass = this.miMtkUt.updateCallBarringForServiceClass(str, i, i2, strArr, i3);
                if (iUpdateCallBarringForServiceClass < 0) {
                    sendFailureReport(message, new ImsReasonInfo(802, 0));
                } else {
                    this.mPendingCmds.put(Integer.valueOf(iUpdateCallBarringForServiceClass), message);
                }
            } catch (RemoteException e) {
                sendFailureReport(message, new ImsReasonInfo(802, 0));
            }
        }
    }

    public void updateCallForwardInTimeSlot(int i, int i2, String str, int i3, long[] jArr, Message message) {
        log("updateCallForwardInTimeSlot :: Ut = " + this.miMtkUt + ", action = " + i + ", condition = " + i2 + ", number = " + str + ", timeSeconds = " + i3 + ", timeSlot = " + Arrays.toString(jArr));
        synchronized (this.mLockObj) {
            try {
                int iUpdateCallForwardInTimeSlot = this.miMtkUt.updateCallForwardInTimeSlot(i, i2, str, i3, jArr);
                if (iUpdateCallForwardInTimeSlot < 0) {
                    sendFailureReport(message, new ImsReasonInfo(802, 0));
                } else {
                    this.mPendingCmds.put(Integer.valueOf(iUpdateCallForwardInTimeSlot), message);
                }
            } catch (RemoteException e) {
                sendFailureReport(message, new ImsReasonInfo(802, 0));
            }
        }
    }
}
