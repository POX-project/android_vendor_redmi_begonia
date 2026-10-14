package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.AsyncResult;
import android.os.Process;
import android.provider.CallLog;
import android.telecom.PhoneAccountHandle;
import android.telecom.TelecomManager;
import android.telephony.SubscriptionManager;
import com.android.internal.telephony.Connection;
import com.android.internal.telephony.PhoneConstants;
import com.android.telephony.Rlog;
import java.util.Date;
import java.util.ListIterator;

/* JADX INFO: loaded from: classes.dex */
public final class MtkGsmCdmaCallTrackerHelper implements MtkIncomingCallChecker.OnCheckCompleteListener {
    protected static final int EVENT_CALL_STATE_CHANGE = 2;
    protected static final int EVENT_CALL_WAITING_INFO_CDMA = 15;
    protected static final int EVENT_CONFERENCE_RESULT = 11;
    protected static final int EVENT_DIAL_CALL_RESULT = 1002;
    protected static final int EVENT_ECT_RESULT = 13;
    protected static final int EVENT_EXIT_ECM_RESPONSE_CDMA = 14;
    protected static final int EVENT_GET_LAST_CALL_FAIL_CAUSE = 5;
    protected static final int EVENT_HANG_UP_RESULT = 1003;
    protected static final int EVENT_INCOMING_CALL_INDICATION = 1000;
    protected static final int EVENT_MTK_BASE = 1000;
    protected static final int EVENT_OPERATION_COMPLETE = 4;
    protected static final int EVENT_POLL_CALLS_RESULT = 1;
    protected static final int EVENT_RADIO_AVAILABLE = 9;
    protected static final int EVENT_RADIO_NOT_AVAILABLE = 10;
    protected static final int EVENT_RADIO_OFF_OR_NOT_AVAILABLE = 1001;
    protected static final int EVENT_REPOLL_AFTER_DELAY = 3;
    protected static final int EVENT_SEPARATE_RESULT = 12;
    protected static final int EVENT_SWITCH_RESULT = 8;
    protected static final int EVENT_THREE_WAY_DIAL_BLANK_FLASH = 20;
    protected static final int EVENT_THREE_WAY_DIAL_L2_RESULT_CDMA = 16;
    static final String LOG_TAG = "GsmCallTkrHlpr";
    private static final int MT_CALL_GWSD = 10;
    private static final int MT_CALL_MISSED = 2;
    private static final int MT_CALL_NUMREDIRECT = 3;
    private static final int MT_CALL_REJECTED = 1;
    private Context mContext;
    private MtkGsmCdmaCallTracker mMtkTracker;
    private boolean mContainForwardingAddress = false;
    private String mForwardingAddress = null;
    private int mForwardingAddressCallId = 0;
    private MtkIncomingCallChecker mIncomingCallChecker = null;
    private boolean mIsGwsdCall = false;

    public MtkGsmCdmaCallTrackerHelper(Context context, MtkGsmCdmaCallTracker mtkGsmCdmaCallTracker) {
        this.mContext = context;
        this.mMtkTracker = mtkGsmCdmaCallTracker;
    }

    private void addCallLog(Context context, String str, String str2, int i) {
        PhoneAccountHandle phoneAccountHandle = null;
        ListIterator<PhoneAccountHandle> listIterator = TelecomManager.from(context).getCallCapablePhoneAccounts().listIterator();
        while (listIterator.hasNext()) {
            PhoneAccountHandle next = listIterator.next();
            String id = next.getId();
            if (id != null && id.equals(str)) {
                phoneAccountHandle = next;
                break;
            }
        }
        String str3 = str2 == null ? "" : str2;
        CallLog.Calls.addCall(null, context, str3, (str3 == null || str3.equals("")) ? 2 : 1, i, 0, phoneAccountHandle, new Date().getTime(), 0, new Long(0L));
    }

    public void CallIndicationEnd() {
        int iMyPid = Process.myPid();
        if (Process.getThreadPriority(iMyPid) != 0) {
            Process.setThreadPriority(iMyPid, 0);
            logD("Current priority = " + Process.getThreadPriority(iMyPid));
        }
    }

    public void CallIndicationProcess(AsyncResult asyncResult) {
        CallIndicationProcess(asyncResult, false, false);
    }

    public void CallIndicationProcess(AsyncResult asyncResult, boolean z, boolean z2) {
        int i;
        int i2;
        int i3;
        int i4 = 0;
        String[] strArr = (String[]) asyncResult.result;
        int i5 = Integer.parseInt(strArr[0]);
        String str = strArr[1];
        Integer.parseInt(strArr[3]);
        int i6 = Integer.parseInt(strArr[4]);
        int subId = this.mMtkTracker.getPhone().getSubId();
        int i7 = 1;
        logD("CallIndicationProcess 0 callId " + i5 + " seqNumber " + i6 + "(subId=" + subId + ", isIncomingNumberChecked=" + z + ", isBlocked=" + z2 + ")");
        this.mForwardingAddress = null;
        if (strArr[5] != null && strArr[5].length() > 0) {
            this.mContainForwardingAddress = false;
            this.mForwardingAddress = strArr[5];
            this.mForwardingAddressCallId = i5;
            logD("EAIC message contains forwarding address - " + this.mForwardingAddress + "," + i5);
        }
        if (this.mMtkTracker.mState == PhoneConstants.State.RINGING) {
            i4 = 1;
            i7 = 1;
        }
        if (i4 != 0) {
            i = i7;
        } else {
            if (z) {
                if (z2) {
                    i4 = 1;
                    i = 16;
                }
            } else if (SubscriptionManager.isValidSubscriptionId(subId) && MtkIncomingCallChecker.isMtkEnhancedCallBlockingEnabled(this.mContext, subId)) {
                MtkIncomingCallChecker mtkIncomingCallChecker = new MtkIncomingCallChecker("" + i5 + "_" + i6, asyncResult);
                this.mIncomingCallChecker = mtkIncomingCallChecker;
                if (mtkIncomingCallChecker.startIncomingCallNumberCheck(this.mContext, subId, str, this)) {
                    logD("startIncomingCallNumberCheck true. start check (callId_seqNo=" + i5 + "_" + i6 + ", subId=" + subId + ", number=" + str + ")");
                    return;
                }
                logE("startIncomingCallNumberCheck false, and flow continues. (callId_seqNo=" + i5 + "_" + i6 + ", subId=" + subId + ", number=" + str + ")");
            }
            i = i7;
        }
        if (i4 == 0) {
            int iMyPid = Process.myPid();
            Process.setThreadPriority(iMyPid, -10);
            logD("Adjust the priority of process - " + iMyPid + " to " + Process.getThreadPriority(iMyPid));
            if (this.mForwardingAddress != null) {
                this.mContainForwardingAddress = true;
            }
            i3 = 5;
            i2 = 3;
            this.mMtkTracker.mMtkCi.setCallIndication(i4, i5, i6, -1, null);
        } else {
            i2 = 3;
            i3 = 5;
        }
        if (i4 == 1) {
            if (i == 1) {
                this.mMtkTracker.mMtkCi.setCallIndication(i4, i5, i6, -1, null);
                return;
            }
            this.mMtkTracker.mMtkCi.setCallIndication(i4, i5, i6, i, null);
            if (i == 16) {
                addCallLog(this.mContext, this.mMtkTracker.mPhone.getIccSerialNumber(), str, i3);
            } else {
                addCallLog(this.mContext, this.mMtkTracker.mPhone.getIccSerialNumber(), str, i2);
            }
        }
    }

    public void LogState() {
        int i = 0;
        int maxConnections = this.mMtkTracker.getMaxConnections();
        for (int i2 = 0; i2 < maxConnections; i2++) {
            if (this.mMtkTracker.mConnections[i2] != null) {
                i++;
                logI("* conn id " + (this.mMtkTracker.mConnections[i2].mIndex + 1) + " existed");
            }
        }
        logI("* GsmCT has " + i + " connection");
    }

    public void LogerMessage(int i) {
        if (i == 1) {
            logD("handle EVENT_POLL_CALLS_RESULT");
        }
        if (i == 2) {
            logD("handle EVENT_CALL_STATE_CHANGE");
            return;
        }
        if (i == 3) {
            logD("handle EVENT_REPOLL_AFTER_DELAY");
            return;
        }
        if (i == 4) {
            logD("handle EVENT_OPERATION_COMPLETE");
            return;
        }
        if (i == 5) {
            logD("handle EVENT_GET_LAST_CALL_FAIL_CAUSE");
            return;
        }
        switch (i) {
            case 8:
                logD("handle EVENT_SWITCH_RESULT");
                break;
            case 9:
                logD("handle EVENT_RADIO_AVAILABLE");
                break;
            case 10:
                logD("handle EVENT_RADIO_NOT_AVAILABLE");
                break;
            case 11:
                logD("handle EVENT_CONFERENCE_RESULT");
                break;
            case 12:
                logD("handle EVENT_SEPARATE_RESULT");
                break;
            case 13:
                logD("handle EVENT_ECT_RESULT");
                break;
            default:
                switch (i) {
                    case 1000:
                        logD("handle EVENT_INCOMING_CALL_INDICATION");
                        break;
                    case 1001:
                        logD("handle EVENT_RADIO_OFF_OR_NOT_AVAILABLE");
                        break;
                    case 1002:
                        logD("handle EVENT_DIAL_CALL_RESULT");
                        break;
                    case 1003:
                        logD("handle EVENT_HANG_UP_RESULT");
                        break;
                    default:
                        logD("handle XXXXX");
                        break;
                }
                break;
        }
    }

    public void clearForwardingAddressVariables(int i) {
        if (this.mContainForwardingAddress && this.mForwardingAddressCallId == i + 1) {
            this.mContainForwardingAddress = false;
            this.mForwardingAddress = null;
            this.mForwardingAddressCallId = 0;
        }
    }

    public int getCurrentTotalConnections() {
        int i = 0;
        for (int i2 = 0; i2 < this.mMtkTracker.getMaxConnections(); i2++) {
            if (this.mMtkTracker.mConnections[i2] != null) {
                i++;
            }
        }
        return i;
    }

    public void handleCallAdditionalInfo(AsyncResult asyncResult) {
        String[] strArr = (String[]) asyncResult.result;
        int i = Integer.parseInt(strArr[0]);
        if (i != 2 && i != 1 && i != 3 && i != 10) {
            logD("handleCallAdditionalInfo not handle event");
            return;
        }
        String str = strArr[1];
        logD("handleCallAdditionalInfo type:" + i + " mode:" + Integer.parseInt(strArr[2]));
        if (i == 1) {
            addCallLog(this.mContext, this.mMtkTracker.mPhone.getIccSerialNumber(), str, 5);
            return;
        }
        if (i == 2) {
            addCallLog(this.mContext, this.mMtkTracker.mPhone.getIccSerialNumber(), str, 3);
            return;
        }
        if (i != 3) {
            if (i != 10) {
                return;
            }
            this.mIsGwsdCall = true;
            return;
        }
        String str2 = strArr[3];
        int i2 = Integer.parseInt(strArr[4]);
        this.mForwardingAddress = null;
        if (str2 == null || str2.length() <= 0) {
            return;
        }
        this.mContainForwardingAddress = true;
        this.mForwardingAddress = str2;
        this.mForwardingAddressCallId = i2;
        logD("Forwarding address: " + this.mForwardingAddress + "," + i2);
    }

    public boolean isGwsdCall() {
        return this.mIsGwsdCall;
    }

    void logD(String str) {
        Rlog.d(LOG_TAG, str + " (slot " + this.mMtkTracker.mPhone.getPhoneId() + ")");
    }

    void logE(String str) {
        Rlog.e(LOG_TAG, str + " (slot " + this.mMtkTracker.mPhone.getPhoneId() + ")");
    }

    void logI(String str) {
        Rlog.i(LOG_TAG, str + " (slot " + this.mMtkTracker.mPhone.getPhoneId() + ")");
    }

    void logW(String str) {
        Rlog.w(LOG_TAG, str + " (slot " + this.mMtkTracker.mPhone.getPhoneId() + ")");
    }

    @Override // com.mediatek.internal.telephony.MtkIncomingCallChecker.OnCheckCompleteListener
    public void onCheckComplete(boolean z, Object obj) {
        CallIndicationProcess(obj != null ? (AsyncResult) obj : null, true, z);
    }

    public void setForwardingAddressToConnection(int i, Connection connection) {
        String str;
        if (this.mContainForwardingAddress && (str = this.mForwardingAddress) != null && this.mForwardingAddressCallId == i + 1) {
            ((MtkGsmCdmaConnection) connection).setForwardingAddress(str);
            logD("Store forwarding address - " + this.mForwardingAddress);
            logD("Get forwarding address - " + ((MtkGsmCdmaConnection) connection).getForwardingAddress());
            clearForwardingAddressVariables(i);
        }
    }

    public void setGwsdCall(boolean z) {
        this.mIsGwsdCall = z;
    }
}
