package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.Rlog;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.Phone;
import com.mediatek.internal.telephony.imsphone.MtkImsPhone;
import java.util.Vector;

/* JADX INFO: loaded from: classes.dex */
public class MtkSuppServQueueHelper {
    private static final boolean DBG = true;
    private static final int EVENT_SS_RESPONSE = 2;
    private static final int EVENT_SS_SEND = 1;
    public static final String LOG_TAG = "SuppServQueueHelper";
    private static MtkSuppServQueueHelper instance = null;
    private static Object pausedSync = new Object();
    private Context mContext;
    private SuppServQueueHelperHandler mHandler;
    private Phone[] mPhones;

    class SuppServQueueHelperHandler extends Handler implements Runnable {
        private static final int QUERY_OVER_GSM = 0;
        private static final int QUERY_OVER_GSM_OVER_UT = 1;
        private static final int QUERY_OVER_IMS = 2;
        private boolean paused;
        private Vector<Message> requestBuffer;

        public SuppServQueueHelperHandler(Looper looper) {
            super(looper);
            this.requestBuffer = new Vector<>();
            this.paused = false;
        }

        private boolean isMDSupportIMSSuppServ() {
            return SystemProperties.get("ro.vendor.md_auto_setup_ims").equals("1");
        }

        private boolean isVoiceInService(MtkGsmCdmaPhone mtkGsmCdmaPhone) {
            return (mtkGsmCdmaPhone.mSST == null || mtkGsmCdmaPhone.mSST.mSS == null || mtkGsmCdmaPhone.mSST.mSS.getState() != 0) ? false : true;
        }

        private void processRequest(Object obj, int i) {
            MtkSuppSrvRequest mtkSuppSrvRequest = (MtkSuppSrvRequest) obj;
            mtkSuppSrvRequest.mParcel.setDataPosition(0);
            Message messageObtainMessage = MtkSuppServQueueHelper.this.mHandler.obtainMessage(2, mtkSuppSrvRequest);
            Rlog.d(MtkSuppServQueueHelper.LOG_TAG, "processRequest(), ss.mRequestCode = " + mtkSuppSrvRequest.mRequestCode + ", ss.mResultCallback = " + mtkSuppSrvRequest.mResultCallback + ", phoneId = " + i);
            int i2 = mtkSuppSrvRequest.mRequestCode;
            if (i2 == 3) {
                MtkSuppServQueueHelper.this.mPhones[i].setOutgoingCallerIdDisplayInternal(mtkSuppSrvRequest.mParcel.readInt(), messageObtainMessage);
            }
            if (i2 == 4) {
                MtkSuppServQueueHelper.this.mPhones[i].getOutgoingCallerIdDisplayInternal(messageObtainMessage);
                return;
            }
            if (i2 == 18) {
                queryCallForwardingOption(i, mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.mParcel.readInt() == 1, messageObtainMessage);
                return;
            }
            switch (i2) {
                case 9:
                    MtkSuppServQueueHelper.this.mPhones[i].setCallBarringInternal(mtkSuppSrvRequest.mParcel.readString(), mtkSuppSrvRequest.mParcel.readInt() == 1, mtkSuppSrvRequest.mParcel.readString(), messageObtainMessage, mtkSuppSrvRequest.mParcel.readInt());
                    break;
                case 10:
                    MtkSuppServQueueHelper.this.mPhones[i].getCallBarringInternal(mtkSuppSrvRequest.mParcel.readString(), mtkSuppSrvRequest.mParcel.readString(), messageObtainMessage, mtkSuppSrvRequest.mParcel.readInt());
                    break;
                case 11:
                    MtkSuppServQueueHelper.this.mPhones[i].setCallForwardingOptionInternal(mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.mParcel.readString(), mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.mParcel.readInt(), messageObtainMessage);
                    break;
                case 12:
                    MtkSuppServQueueHelper.this.mPhones[i].getCallForwardingOptionInternal(mtkSuppSrvRequest.mParcel.readInt(), mtkSuppSrvRequest.mParcel.readInt(), messageObtainMessage);
                    break;
                case 13:
                    MtkSuppServQueueHelper.this.mPhones[i].setCallWaitingInternal(mtkSuppSrvRequest.mParcel.readInt() == 1, messageObtainMessage);
                    break;
                case 14:
                    MtkSuppServQueueHelper.this.mPhones[i].getCallWaitingInternal(messageObtainMessage);
                    break;
                default:
                    Rlog.d(MtkSuppServQueueHelper.LOG_TAG, "processRequest(), no match mRequestCode");
                    break;
            }
        }

        private void processResponse(Object obj) {
            AsyncResult asyncResult = (AsyncResult) obj;
            MtkSuppSrvRequest mtkSuppSrvRequest = (MtkSuppSrvRequest) asyncResult.userObj;
            Message message = mtkSuppSrvRequest.mResultCallback;
            Rlog.d(MtkSuppServQueueHelper.LOG_TAG, "processResponse, resp = " + message + " , ar.result = " + asyncResult.result + " , ar.exception = " + asyncResult.exception);
            if (message != null) {
                AsyncResult.forMessage(message, asyncResult.result, asyncResult.exception);
                message.sendToTarget();
            }
            mtkSuppSrvRequest.setResultCallback(null);
            mtkSuppSrvRequest.mParcel.recycle();
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Rlog.d(MtkSuppServQueueHelper.LOG_TAG, "handleMessage(), msg.what = " + message.what + " , paused = " + this.paused);
            int i = message.what;
            if (i == 1) {
                synchronized (MtkSuppServQueueHelper.pausedSync) {
                    if (this.paused) {
                        Rlog.d(MtkSuppServQueueHelper.LOG_TAG, "A SS request ongoing, add it into the queue");
                        Message message2 = new Message();
                        message2.copyFrom(message);
                        this.requestBuffer.add(message2);
                    } else {
                        processRequest(message.obj, message.arg1);
                        this.paused = true;
                    }
                }
                return;
            }
            if (i != 2) {
                Rlog.d(MtkSuppServQueueHelper.LOG_TAG, "handleMessage(), msg.what must be SEND or RESPONSE");
                return;
            }
            synchronized (MtkSuppServQueueHelper.pausedSync) {
                processResponse(message.obj);
                this.paused = false;
                if (this.requestBuffer.size() > 0) {
                    Message messageElementAt = this.requestBuffer.elementAt(0);
                    this.requestBuffer.removeElementAt(0);
                    sendMessage(messageElementAt);
                }
            }
        }

        public void queryCallForwardingOption(int i, int i2, boolean z, Message message) {
            Rlog.d(MtkSuppServQueueHelper.LOG_TAG, "queryCallForwardingOption, reason: " + i2 + ", withTimeSlot: " + z);
            if (i2 == 0) {
                if (isVoiceInService((MtkGsmCdmaPhone) MtkSuppServQueueHelper.this.mPhones[i])) {
                    MtkSuppServQueueHelper.this.mPhones[i].mCi.queryCallForwardStatus(0, 1, (String) null, message);
                    return;
                } else {
                    AsyncResult.forMessage(message, (Object) null, new CommandException(CommandException.Error.GENERIC_FAILURE));
                    message.sendToTarget();
                    return;
                }
            }
            if (i2 != 1) {
                if (i2 != 2) {
                    return;
                }
                MtkImsPhone imsPhone = MtkSuppServQueueHelper.this.mPhones[i].getImsPhone();
                if (z) {
                    imsPhone.getCallForwardInTimeSlot(0, message);
                    return;
                } else {
                    imsPhone.getCallForwardingOption(0, message);
                    return;
                }
            }
            if (z) {
                if (isMDSupportIMSSuppServ()) {
                    MtkSuppServQueueHelper.this.mPhones[i].mMtkCi.queryCallForwardInTimeSlotStatus(0, 1, message);
                    return;
                } else {
                    MtkSuppServQueueHelper.this.mPhones[i].getMtkSSRequestDecisionMaker().queryCallForwardInTimeSlotStatus(0, 1, message);
                    return;
                }
            }
            if (isMDSupportIMSSuppServ()) {
                MtkSuppServQueueHelper.this.mPhones[i].mCi.queryCallForwardStatus(0, 1, (String) null, message);
            } else {
                MtkSuppServQueueHelper.this.mPhones[i].getMtkSSRequestDecisionMaker().queryCallForwardStatus(0, 1, null, message);
            }
        }

        @Override // java.lang.Runnable
        public void run() {
        }
    }

    private MtkSuppServQueueHelper(Context context, Phone[] phoneArr) {
        this.mContext = context;
        this.mPhones = phoneArr;
    }

    private void addRequest(MtkSuppSrvRequest mtkSuppSrvRequest, int i) {
        SuppServQueueHelperHandler suppServQueueHelperHandler = this.mHandler;
        if (suppServQueueHelperHandler != null) {
            suppServQueueHelperHandler.obtainMessage(1, i, 0, mtkSuppSrvRequest).sendToTarget();
        }
    }

    public static MtkSuppServQueueHelper makeSuppServQueueHelper(Context context, Phone[] phoneArr) {
        if (context == null || phoneArr == null) {
            return null;
        }
        MtkSuppServQueueHelper mtkSuppServQueueHelper = instance;
        if (mtkSuppServQueueHelper == null) {
            Rlog.d(LOG_TAG, "Create MtkSuppServQueueHelper singleton instance, phones.length = " + phoneArr.length);
            instance = new MtkSuppServQueueHelper(context, phoneArr);
        } else {
            mtkSuppServQueueHelper.mContext = context;
            mtkSuppServQueueHelper.mPhones = phoneArr;
        }
        return instance;
    }

    public void dispose() {
        Rlog.d(LOG_TAG, "dispose.");
    }

    public void getCallBarring(String str, String str2, int i, Message message, int i2) {
        MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(10, message);
        mtkSuppSrvRequestObtain.mParcel.writeString(str);
        mtkSuppSrvRequestObtain.mParcel.writeString(str2);
        mtkSuppSrvRequestObtain.mParcel.writeInt(i);
        addRequest(mtkSuppSrvRequestObtain, i2);
    }

    public void getCallForwardingOption(int i, int i2, Message message, int i3) {
        MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(18, message);
        mtkSuppSrvRequestObtain.mParcel.writeInt(i);
        mtkSuppSrvRequestObtain.mParcel.writeInt(i2);
        addRequest(mtkSuppSrvRequestObtain, i3);
    }

    public void getCallForwardingOptionForServiceClass(int i, int i2, Message message, int i3) {
        MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(12, message);
        mtkSuppSrvRequestObtain.mParcel.writeInt(i);
        mtkSuppSrvRequestObtain.mParcel.writeInt(i2);
        addRequest(mtkSuppSrvRequestObtain, i3);
    }

    public void getCallWaiting(Message message, int i) {
        addRequest(MtkSuppSrvRequest.obtain(14, message), i);
    }

    public void getOutgoingCallerIdDisplay(Message message, int i) {
        addRequest(MtkSuppSrvRequest.obtain(4, message), i);
    }

    public void init(Looper looper) {
        Rlog.d(LOG_TAG, "Initialize SuppServQueueHelper!");
        this.mHandler = new SuppServQueueHelperHandler(looper);
    }

    public void setCallBarring(String str, boolean z, String str2, int i, Message message, int i2) {
        MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(9, message);
        mtkSuppSrvRequestObtain.mParcel.writeString(str);
        mtkSuppSrvRequestObtain.mParcel.writeInt(z ? 1 : 0);
        mtkSuppSrvRequestObtain.mParcel.writeString(str2);
        mtkSuppSrvRequestObtain.mParcel.writeInt(i);
        addRequest(mtkSuppSrvRequestObtain, i2);
    }

    public void setCallForwardingOptionForServiceClass(int i, int i2, String str, int i3, int i4, Message message, int i5) {
        MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(11, message);
        mtkSuppSrvRequestObtain.mParcel.writeInt(i);
        mtkSuppSrvRequestObtain.mParcel.writeInt(i2);
        mtkSuppSrvRequestObtain.mParcel.writeString(str);
        mtkSuppSrvRequestObtain.mParcel.writeInt(i3);
        mtkSuppSrvRequestObtain.mParcel.writeInt(i4);
        addRequest(mtkSuppSrvRequestObtain, i5);
    }

    public void setCallWaiting(boolean z, Message message, int i) {
        MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(13, message);
        mtkSuppSrvRequestObtain.mParcel.writeInt(z ? 1 : 0);
        addRequest(mtkSuppSrvRequestObtain, i);
    }

    public void setOutgoingCallerIdDisplay(int i, Message message, int i2) {
        MtkSuppSrvRequest mtkSuppSrvRequestObtain = MtkSuppSrvRequest.obtain(3, message);
        mtkSuppSrvRequestObtain.mParcel.writeInt(i);
        addRequest(mtkSuppSrvRequestObtain, i2);
    }
}
