package com.mediatek.internal.telephony;

import android.content.Context;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;
import android.os.Message;
import android.telephony.Rlog;
import android.telephony.ims.ImsCallForwardInfo;
import android.telephony.ims.ImsSsInfo;
import com.android.ims.ImsException;
import com.android.ims.ImsManager;
import com.android.ims.ImsUtInterface;
import com.android.internal.telephony.CallForwardInfo;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.Phone;
import com.mediatek.ims.MtkImsCallForwardInfo;
import com.mediatek.ims.MtkImsUt;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class MtkSSRequestDecisionMaker {
    private static final int CLEAR_DELAY_TIMEOUT = 10000;
    private static final int EVENT_SS_CLEAR_TEMP_VOLTE_USER_FLAG = 3;
    private static final int EVENT_SS_RESPONSE = 2;
    private static final int EVENT_SS_SEND = 1;
    static final String LOG_TAG = "MtkSSDecisonMaker";
    private static final int SS_REQUEST_GET_CALL_BARRING = 3;
    private static final int SS_REQUEST_GET_CALL_FORWARD = 1;
    private static final int SS_REQUEST_GET_CALL_FORWARD_TIME_SLOT = 15;
    private static final int SS_REQUEST_GET_CALL_WAITING = 5;
    private static final int SS_REQUEST_GET_CLIP = 9;
    private static final int SS_REQUEST_GET_CLIR = 7;
    private static final int SS_REQUEST_GET_COLP = 13;
    private static final int SS_REQUEST_GET_COLR = 11;
    private static final int SS_REQUEST_SET_CALL_BARRING = 4;
    private static final int SS_REQUEST_SET_CALL_FORWARD = 2;
    private static final int SS_REQUEST_SET_CALL_FORWARD_TIME_SLOT = 16;
    private static final int SS_REQUEST_SET_CALL_WAITING = 6;
    private static final int SS_REQUEST_SET_CLIP = 10;
    private static final int SS_REQUEST_SET_CLIR = 8;
    private static final int SS_REQUEST_SET_COLP = 14;
    private static final int SS_REQUEST_SET_COLR = 12;
    private CommandsInterface mCi;
    private ImsManager mImsManager;
    private boolean mIsTempVolteUser;
    private Phone mPhone;
    private int mPhoneId;
    private HandlerThread mSSHandlerThread;
    private SSRequestHandler mSSRequestHandler;

    class SSRequestHandler extends Handler implements Runnable {
        public SSRequestHandler(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                MtkSSRequestDecisionMaker.this.processSendRequest(message.obj);
                return;
            }
            if (i == 2) {
                MtkSSRequestDecisionMaker.this.processResponse(message.obj);
                return;
            }
            if (i == 3) {
                MtkSSRequestDecisionMaker.this.mIsTempVolteUser = false;
                return;
            }
            Rlog.d(MtkSSRequestDecisionMaker.LOG_TAG, "MtkSSRequestDecisionMaker:msg.what=" + message.what);
        }

        @Override // java.lang.Runnable
        public void run() {
        }
    }

    public MtkSSRequestDecisionMaker(Context context, Phone phone) {
        this.mPhone = phone;
        this.mCi = phone.mCi;
        this.mPhoneId = phone.getPhoneId();
        this.mImsManager = ImsManager.getInstance(this.mPhone.getContext(), this.mPhone.getPhoneId());
    }

    private int getActionFromCFAction(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 1;
        }
        if (i != 3) {
            return i != 4 ? -1 : 4;
        }
        return 3;
    }

    private int getCBTypeFromFacility(String str) {
        if ("AO".equals(str)) {
            return 2;
        }
        if ("OI".equals(str)) {
            return 3;
        }
        if ("OX".equals(str)) {
            return 4;
        }
        if ("AI".equals(str)) {
            return 1;
        }
        if ("IR".equals(str)) {
            return 5;
        }
        if ("AB".equals(str)) {
            return 7;
        }
        if ("AG".equals(str)) {
            return 8;
        }
        return "AC".equals(str) ? 9 : 0;
    }

    private int getCFReasonFromCondition(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 1;
        }
        if (i == 2) {
            return 2;
        }
        if (i != 4) {
            return i != 5 ? 3 : 5;
        }
        return 4;
    }

    private CallForwardInfo getCallForwardInfo(ImsCallForwardInfo imsCallForwardInfo) {
        CallForwardInfo callForwardInfo = new CallForwardInfo();
        callForwardInfo.status = imsCallForwardInfo.mStatus;
        callForwardInfo.reason = getCFReasonFromCondition(imsCallForwardInfo.mCondition);
        callForwardInfo.serviceClass = imsCallForwardInfo.mServiceClass;
        callForwardInfo.toa = imsCallForwardInfo.mToA;
        callForwardInfo.number = imsCallForwardInfo.mNumber;
        callForwardInfo.timeSeconds = imsCallForwardInfo.mTimeSeconds;
        return callForwardInfo;
    }

    private CommandException getCommandException(ImsException imsException) {
        if (imsException.getCode() != 61449) {
            Rlog.d(LOG_TAG, "getCommandException GENERIC_FAILURE");
            return new CommandException(CommandException.Error.GENERIC_FAILURE);
        }
        if (this.mPhone.isEnableXcapHttpResponse409()) {
            Rlog.d(LOG_TAG, "getCommandException UT_XCAP_409_CONFLICT");
            return new CommandException(CommandException.Error.OEM_ERROR_25);
        }
        Rlog.d(LOG_TAG, "getCommandException GENERIC_FAILURE");
        return new CommandException(CommandException.Error.GENERIC_FAILURE);
    }

    private int getConditionFromCFReason(int i) {
        if (i == 0) {
            return 0;
        }
        if (i == 1) {
            return 1;
        }
        if (i == 2) {
            return 2;
        }
        if (i == 3) {
            return 3;
        }
        if (i != 4) {
            return i != 5 ? -1 : 5;
        }
        return 4;
    }

    private MtkCallForwardInfo getMtkCallForwardInfo(MtkImsCallForwardInfo mtkImsCallForwardInfo) {
        MtkCallForwardInfo mtkCallForwardInfo = new MtkCallForwardInfo();
        mtkCallForwardInfo.status = mtkImsCallForwardInfo.mStatus;
        mtkCallForwardInfo.reason = getCFReasonFromCondition(mtkImsCallForwardInfo.mCondition);
        mtkCallForwardInfo.serviceClass = mtkImsCallForwardInfo.mServiceClass;
        mtkCallForwardInfo.toa = mtkImsCallForwardInfo.mToA;
        mtkCallForwardInfo.number = mtkImsCallForwardInfo.mNumber;
        mtkCallForwardInfo.timeSeconds = mtkImsCallForwardInfo.mTimeSeconds;
        mtkCallForwardInfo.timeSlot = mtkImsCallForwardInfo.mTimeSlot;
        return mtkCallForwardInfo;
    }

    private int getPhoneId() {
        int phoneId = this.mPhone.getPhoneId();
        this.mPhoneId = phoneId;
        return phoneId;
    }

    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    private ImsUtInterface getUtInterface() throws ImsException {
        if (this.mImsManager == null) {
            throw new ImsException("no ims manager", 0);
        }
        int phoneId = this.mPhone.getPhoneId() + 1;
        return this.mImsManager.getSupplementaryServiceConfiguration();
    }

    private int[] handleCbQueryResult(ImsSsInfo[] imsSsInfoArr) {
        return new int[]{imsSsInfoArr[0].mStatus};
    }

    private int[] handleCwQueryResult(ImsSsInfo[] imsSsInfoArr) {
        int[] iArr = {0, 0};
        if (imsSsInfoArr[0].mStatus == 1) {
            iArr[0] = 1;
            iArr[1] = 1;
        }
        return iArr;
    }

    private MtkCallForwardInfo[] imsCFInfoExToCFInfoEx(MtkImsCallForwardInfo[] mtkImsCallForwardInfoArr) {
        MtkCallForwardInfo[] mtkCallForwardInfoArr;
        if (mtkImsCallForwardInfoArr == null || mtkImsCallForwardInfoArr.length == 0) {
            Rlog.d(LOG_TAG, "No CFInfoEx exist .");
            mtkCallForwardInfoArr = new MtkCallForwardInfo[0];
        } else {
            mtkCallForwardInfoArr = new MtkCallForwardInfo[mtkImsCallForwardInfoArr.length];
            int length = mtkImsCallForwardInfoArr.length;
            for (int i = 0; i < length; i++) {
                mtkCallForwardInfoArr[i] = getMtkCallForwardInfo(mtkImsCallForwardInfoArr[i]);
            }
        }
        Rlog.d(LOG_TAG, "imsCFInfoExToCFInfoEx finish.");
        return mtkCallForwardInfoArr;
    }

    private CallForwardInfo[] imsCFInfoToCFInfo(ImsCallForwardInfo[] imsCallForwardInfoArr) {
        CallForwardInfo[] callForwardInfoArr;
        if (imsCallForwardInfoArr == null || imsCallForwardInfoArr.length == 0) {
            Rlog.d(LOG_TAG, "No CFInfo exist .");
            callForwardInfoArr = new CallForwardInfo[0];
        } else {
            callForwardInfoArr = new CallForwardInfo[imsCallForwardInfoArr.length];
            int length = imsCallForwardInfoArr.length;
            for (int i = 0; i < length; i++) {
                callForwardInfoArr[i] = getCallForwardInfo(imsCallForwardInfoArr[i]);
            }
        }
        Rlog.d(LOG_TAG, "imsCFInfoToCFInfo finish.");
        return callForwardInfoArr;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:18:0x008e A[PHI: r1 r3 r4
      0x008e: PHI (r1v37 android.os.Message) = 
      (r1v18 android.os.Message)
      (r1v18 android.os.Message)
      (r1v18 android.os.Message)
      (r1v36 android.os.Message)
      (r1v36 android.os.Message)
      (r1v39 android.os.Message)
      (r1v39 android.os.Message)
     binds: [B:204:0x04cf, B:206:0x04d5, B:212:0x04f2, B:31:0x00d5, B:33:0x00de, B:6:0x0051, B:8:0x0057] A[DONT_GENERATE, DONT_INLINE]
      0x008e: PHI (r3v32 java.lang.Object) = 
      (r3v0 java.lang.Object)
      (r3v0 java.lang.Object)
      (r3v0 java.lang.Object)
      (r3v29 java.lang.Object)
      (r3v29 java.lang.Object)
      (r3v0 java.lang.Object)
      (r3v0 java.lang.Object)
     binds: [B:204:0x04cf, B:206:0x04d5, B:212:0x04f2, B:31:0x00d5, B:33:0x00de, B:6:0x0051, B:8:0x0057] A[DONT_GENERATE, DONT_INLINE]
      0x008e: PHI (r4v57 com.android.internal.telephony.CommandException) = 
      (r4v0 com.android.internal.telephony.CommandException)
      (r4v0 com.android.internal.telephony.CommandException)
      (r4v0 com.android.internal.telephony.CommandException)
      (r4v55 com.android.internal.telephony.CommandException)
      (r4v55 com.android.internal.telephony.CommandException)
      (r4v0 com.android.internal.telephony.CommandException)
      (r4v0 com.android.internal.telephony.CommandException)
     binds: [B:204:0x04cf, B:206:0x04d5, B:212:0x04f2, B:31:0x00d5, B:33:0x00de, B:6:0x0051, B:8:0x0057] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:331:0x07f5  */
    /* JADX WARN: Code duplicated, block: B:383:0x0921 A[PHI: r1 r3 r18
      0x0921: PHI (r1v7 android.os.Message) = 
      (r1v4 android.os.Message)
      (r1v4 android.os.Message)
      (r1v4 android.os.Message)
      (r1v9 android.os.Message)
      (r1v9 android.os.Message)
     binds: [B:353:0x08bb, B:371:0x08fc, B:372:0x08fe, B:293:0x06e9, B:295:0x06ef] A[DONT_GENERATE, DONT_INLINE]
      0x0921: PHI (r3v10 java.lang.Object) = 
      (r3v0 java.lang.Object)
      (r3v0 java.lang.Object)
      (r3v0 java.lang.Object)
      (r3v11 java.lang.Object)
      (r3v11 java.lang.Object)
     binds: [B:353:0x08bb, B:371:0x08fc, B:372:0x08fe, B:293:0x06e9, B:295:0x06ef] A[DONT_GENERATE, DONT_INLINE]
      0x0921: PHI (r18v3 com.android.internal.telephony.CommandException) = 
      (r18v1 com.android.internal.telephony.CommandException)
      (r18v1 com.android.internal.telephony.CommandException)
      (r18v1 com.android.internal.telephony.CommandException)
      (r18v5 com.android.internal.telephony.CommandException)
      (r18v5 com.android.internal.telephony.CommandException)
     binds: [B:353:0x08bb, B:371:0x08fc, B:372:0x08fe, B:293:0x06e9, B:295:0x06ef] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Code duplicated, block: B:402:0x09b6  */
    /* JADX WARN: Code duplicated, block: B:407:0x09cc  */
    /* JADX WARN: Code duplicated, block: B:409:0x09cf  */
    /* JADX WARN: Code duplicated, block: B:413:0x09f7  */
    public void processResponse(Object obj) {
        CommandException commandException;
        CommandException commandException2;
        CommandException commandExceptionCheckUiccApplicationForCB;
        int iIntValue;
        Message message;
        Message message2 = null;
        AsyncResult asyncResult = (AsyncResult) obj;
        Object objImsCFInfoToCFInfo = asyncResult.result;
        CommandException commandException3 = asyncResult.exception;
        ArrayList arrayList = (ArrayList) asyncResult.userObj;
        Integer num = (Integer) arrayList.get(0);
        Rlog.d(LOG_TAG, "processResponse, request = " + num);
        switch (num.intValue()) {
            case 1:
                int iIntValue2 = ((Integer) arrayList.get(1)).intValue();
                int iIntValue3 = ((Integer) arrayList.get(2)).intValue();
                String str = (String) arrayList.get(3);
                message2 = (Message) arrayList.get(4);
                if (asyncResult.exception == null || !(asyncResult.exception instanceof ImsException)) {
                    commandException = commandException3;
                } else {
                    ImsException imsException = asyncResult.exception;
                    if (imsException.getCode() == 61446) {
                        this.mPhone.setCsFallbackStatus(2);
                        if (!this.mPhone.isNotSupportUtToCS()) {
                            Rlog.d(LOG_TAG, "mCi.queryCallForwardStatus.");
                            this.mCi.queryCallForwardStatus(iIntValue2, iIntValue3, str, message2);
                        } else {
                            Rlog.d(LOG_TAG, "isNotSupportUtToCS.");
                            commandException = new CommandException(CommandException.Error.OPERATION_NOT_ALLOWED);
                            objImsCFInfoToCFInfo = null;
                        }
                    } else if (imsException.getCode() != 61447) {
                        commandException = commandException3;
                    } else if (!this.mPhone.isNotSupportUtToCS()) {
                        Rlog.d(LOG_TAG, "mCi.queryCallForwardStatus.");
                        this.mCi.queryCallForwardStatus(iIntValue2, iIntValue3, str, message2);
                    } else {
                        Rlog.d(LOG_TAG, "isNotSupportUtToCS.");
                        commandException = new CommandException(CommandException.Error.OPERATION_NOT_ALLOWED);
                        objImsCFInfoToCFInfo = null;
                    }
                }
                if (objImsCFInfoToCFInfo != null) {
                    Rlog.d(LOG_TAG, "SS_REQUEST_GET_CALL_FORWARD cfinfo check.");
                    if (objImsCFInfoToCFInfo instanceof ImsCallForwardInfo[]) {
                        objImsCFInfoToCFInfo = imsCFInfoToCFInfo((ImsCallForwardInfo[]) objImsCFInfoToCFInfo);
                        commandException3 = commandException;
                    } else {
                        commandException3 = commandException;
                    }
                } else {
                    commandException3 = commandException;
                }
                if (commandException3 != null && (commandException3 instanceof ImsException)) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 2:
                commandException2 = commandException3;
                int iIntValue4 = ((Integer) arrayList.get(1)).intValue();
                int iIntValue5 = ((Integer) arrayList.get(2)).intValue();
                int iIntValue6 = ((Integer) arrayList.get(3)).intValue();
                String str2 = (String) arrayList.get(4);
                int iIntValue7 = ((Integer) arrayList.get(5)).intValue();
                message2 = (Message) arrayList.get(6);
                if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                    ImsException imsException2 = asyncResult.exception;
                    if (imsException2.getCode() == 61446) {
                        this.mCi.setCallForward(iIntValue4, iIntValue5, iIntValue6, str2, iIntValue7, message2);
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException2.getCode() == 61447) {
                        this.mCi.setCallForward(iIntValue4, iIntValue5, iIntValue6, str2, iIntValue7, message2);
                    }
                }
                if (asyncResult.exception != null) {
                    commandException3 = commandException2;
                } else {
                    if (this.mPhone.getPhoneType() == 1) {
                        MtkGsmCdmaPhone mtkGsmCdmaPhone = this.mPhone;
                        if ((mtkGsmCdmaPhone instanceof MtkGsmCdmaPhone) && mtkGsmCdmaPhone.isSupportSaveCFNumber()) {
                            if (iIntValue4 == 1 || iIntValue4 == 3) {
                                if (!this.mPhone.applyCFSharePreference(iIntValue5, str2)) {
                                    Rlog.d(LOG_TAG, "applySharePreference false.");
                                }
                            } else if (iIntValue4 == 4) {
                                this.mPhone.clearCFSharePreference(iIntValue5);
                            }
                        }
                    }
                    if (this.mPhone.queryCFUAgainAfterSet() && iIntValue5 == 0) {
                        if (objImsCFInfoToCFInfo == null) {
                            Rlog.d(LOG_TAG, "arResult is null.");
                        } else if (objImsCFInfoToCFInfo instanceof ImsCallForwardInfo[]) {
                            objImsCFInfoToCFInfo = imsCFInfoToCFInfo((ImsCallForwardInfo[]) objImsCFInfoToCFInfo);
                        } else if (objImsCFInfoToCFInfo instanceof CallForwardInfo[]) {
                        }
                        commandException3 = commandException2;
                    } else {
                        commandException3 = commandException2;
                    }
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 3:
                String str3 = (String) arrayList.get(1);
                String str4 = (String) arrayList.get(2);
                int iIntValue8 = ((Integer) arrayList.get(3)).intValue();
                message2 = (Message) arrayList.get(4);
                if (asyncResult.exception == null || !(asyncResult.exception instanceof ImsException)) {
                    commandExceptionCheckUiccApplicationForCB = commandException3;
                } else {
                    ImsException imsException3 = asyncResult.exception;
                    if (imsException3.getCode() == 61446 || imsException3.getCode() == 61447) {
                        commandExceptionCheckUiccApplicationForCB = this.mPhone.checkUiccApplicationForCB();
                        if (commandExceptionCheckUiccApplicationForCB == null) {
                            this.mCi.queryFacilityLockForApp(str3, str4, iIntValue8, this.mPhone.getUiccCardApplication().getAid(), message2);
                            if (imsException3.getCode() == 61446) {
                                this.mPhone.setCsFallbackStatus(2);
                            }
                        }
                        break;
                    } else if (imsException3.getCode() == 61448 && this.mPhone.isOpTransferXcap404()) {
                        Rlog.d(LOG_TAG, "processResponse CODE_UT_XCAP_404_NOT_FOUND");
                        commandExceptionCheckUiccApplicationForCB = new CommandException(CommandException.Error.NO_SUCH_ELEMENT);
                    } else {
                        commandExceptionCheckUiccApplicationForCB = commandException3;
                    }
                }
                if (objImsCFInfoToCFInfo != null) {
                    Rlog.d(LOG_TAG, "SS_REQUEST_GET_CALL_BARRING ssinfo check.");
                    if (objImsCFInfoToCFInfo instanceof ImsSsInfo[]) {
                        objImsCFInfoToCFInfo = handleCbQueryResult((ImsSsInfo[]) asyncResult.result);
                    }
                }
                if (this.mPhone.isOpNotSupportOCB(str3)) {
                    CommandException commandException4 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                    objImsCFInfoToCFInfo = null;
                    this.mIsTempVolteUser = true;
                    this.mSSRequestHandler.sendMessageDelayed(this.mSSRequestHandler.obtainMessage(3), 10000L);
                    commandException3 = commandException4;
                } else {
                    commandException3 = commandExceptionCheckUiccApplicationForCB;
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 4:
                commandException2 = commandException3;
                String str5 = (String) arrayList.get(1);
                boolean zBooleanValue = ((Boolean) arrayList.get(2)).booleanValue();
                String str6 = (String) arrayList.get(3);
                int iIntValue9 = ((Integer) arrayList.get(4)).intValue();
                message2 = (Message) arrayList.get(5);
                if (this.mPhone.isOpNotSupportOCB(str5)) {
                    objImsCFInfoToCFInfo = null;
                    commandException2 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                }
                if (asyncResult.exception == null || !(asyncResult.exception instanceof ImsException)) {
                    commandException3 = commandException2;
                } else {
                    ImsException imsException4 = asyncResult.exception;
                    if (imsException4.getCode() == 61446) {
                        this.mCi.setFacilityLock(str5, zBooleanValue, str6, iIntValue9, message2);
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException4.getCode() == 61447) {
                        this.mCi.setFacilityLock(str5, zBooleanValue, str6, iIntValue9, message2);
                    } else {
                        if (imsException4.getCode() == 61448 && this.mPhone.isOpTransferXcap404()) {
                            Rlog.d(LOG_TAG, "processResponse CODE_UT_XCAP_404_NOT_FOUND");
                            commandException2 = new CommandException(CommandException.Error.NO_SUCH_ELEMENT);
                        }
                        commandException3 = commandException2;
                    }
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 5:
                boolean z = false;
                MtkGsmCdmaPhone mtkGsmCdmaPhone2 = this.mPhone;
                if ((mtkGsmCdmaPhone2 instanceof MtkGsmCdmaPhone) && mtkGsmCdmaPhone2.getTbcwMode() == 0) {
                    z = true;
                }
                if (z && !this.mPhone.isOpNwCW()) {
                    MtkGsmCdmaPhone mtkGsmCdmaPhone3 = this.mPhone;
                    Integer num2 = (Integer) arrayList.get(0);
                    boolean zBooleanValue2 = false;
                    if (num2.intValue() == 5) {
                        iIntValue = ((Integer) arrayList.get(1)).intValue();
                        message = (Message) arrayList.get(2);
                    } else {
                        zBooleanValue2 = ((Boolean) arrayList.get(1)).booleanValue();
                        iIntValue = ((Integer) arrayList.get(2)).intValue();
                        message = (Message) arrayList.get(3);
                    }
                    ImsException imsException5 = null;
                    if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                        imsException5 = (ImsException) asyncResult.exception;
                    }
                    if (asyncResult.exception == null) {
                        mtkGsmCdmaPhone3.setTbcwMode(1);
                        mtkGsmCdmaPhone3.setTbcwToEnabledOnIfDisabled();
                        if (num2.intValue() != 5) {
                            mtkGsmCdmaPhone3.setTerminalBasedCallWaiting(zBooleanValue2, message);
                        } else {
                            mtkGsmCdmaPhone3.getTerminalBasedCallWaiting(message);
                        }
                    } else if (imsException5 != null && imsException5.getCode() == 61446) {
                        mtkGsmCdmaPhone3.setTbcwMode(2);
                        mtkGsmCdmaPhone3.setSSPropertyThroughHidl(mtkGsmCdmaPhone3.getPhoneId(), "persist.vendor.radio.terminal-based.cw", "disabled_tbcw");
                        this.mPhone.setCsFallbackStatus(2);
                        if (this.mPhone.isNotSupportUtToCS()) {
                            Rlog.d(LOG_TAG, "isNotSupportUtToCS.");
                            CommandException commandException5 = new CommandException(CommandException.Error.OPERATION_NOT_ALLOWED);
                            if (message != null) {
                                AsyncResult.forMessage(message, (Object) null, commandException5);
                                message.sendToTarget();
                            }
                        } else if (num2.intValue() != 5) {
                            this.mCi.setCallWaiting(zBooleanValue2, iIntValue, message);
                        } else {
                            this.mCi.queryCallWaiting(iIntValue, message);
                        }
                    } else if (imsException5 == null || imsException5.getCode() != 61447) {
                        mtkGsmCdmaPhone3.setTbcwToEnabledOnIfDisabled();
                        if (num2.intValue() != 5) {
                            mtkGsmCdmaPhone3.setTerminalBasedCallWaiting(zBooleanValue2, message);
                        } else {
                            mtkGsmCdmaPhone3.getTerminalBasedCallWaiting(message);
                        }
                    } else if (this.mPhone.isNotSupportUtToCS()) {
                        Rlog.d(LOG_TAG, "isNotSupportUtToCS.");
                        CommandException commandException6 = new CommandException(CommandException.Error.OPERATION_NOT_ALLOWED);
                        if (message != null) {
                            AsyncResult.forMessage(message, (Object) null, commandException6);
                            message.sendToTarget();
                        }
                    } else if (num2.intValue() != 5) {
                        this.mCi.setCallWaiting(zBooleanValue2, iIntValue, message);
                    } else {
                        this.mCi.queryCallWaiting(iIntValue, message);
                    }
                } else {
                    Rlog.d(LOG_TAG, "processResponse: SS_REQUEST_GET_CALL_WAITING");
                    int iIntValue10 = ((Integer) arrayList.get(1)).intValue();
                    message2 = (Message) arrayList.get(2);
                    if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                        ImsException imsException6 = asyncResult.exception;
                        if (imsException6.getCode() == 61446) {
                            this.mCi.queryCallWaiting(iIntValue10, message2);
                            this.mPhone.setCsFallbackStatus(2);
                        } else if (imsException6.getCode() == 61447) {
                            this.mCi.queryCallWaiting(iIntValue10, message2);
                        }
                    }
                    if (objImsCFInfoToCFInfo != null) {
                        Rlog.d(LOG_TAG, "SS_REQUEST_GET_CALL_WAITING ssinfo check.");
                        if (objImsCFInfoToCFInfo instanceof ImsSsInfo[]) {
                            objImsCFInfoToCFInfo = handleCwQueryResult((ImsSsInfo[]) asyncResult.result);
                        }
                    }
                    commandException3 = commandException3;
                    if (commandException3 != null) {
                        Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                        commandException3 = getCommandException((ImsException) commandException3);
                    }
                    if (message2 != null) {
                        AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                        message2.sendToTarget();
                    }
                }
                break;
            case 6:
                boolean zBooleanValue3 = ((Boolean) arrayList.get(1)).booleanValue();
                int iIntValue11 = ((Integer) arrayList.get(2)).intValue();
                message2 = (Message) arrayList.get(3);
                if (asyncResult.exception != null) {
                    if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                        ImsException imsException7 = asyncResult.exception;
                        if (imsException7.getCode() == 61446) {
                            this.mCi.setCallWaiting(zBooleanValue3, iIntValue11, message2);
                            this.mPhone.setCsFallbackStatus(2);
                        } else if (imsException7.getCode() == 61447) {
                            this.mCi.setCallWaiting(zBooleanValue3, iIntValue11, message2);
                        }
                    }
                    if (commandException3 != null) {
                        Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                        commandException3 = getCommandException((ImsException) commandException3);
                    }
                    if (message2 != null) {
                        AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                        message2.sendToTarget();
                    }
                } else {
                    MtkGsmCdmaPhone mtkGsmCdmaPhone4 = this.mPhone;
                    mtkGsmCdmaPhone4.setTbcwMode(1);
                    mtkGsmCdmaPhone4.setTbcwToEnabledOnIfDisabled();
                    mtkGsmCdmaPhone4.setTerminalBasedCallWaiting(zBooleanValue3, message2);
                }
                break;
            case 7:
                message2 = (Message) arrayList.get(1);
                if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                    ImsException imsException8 = asyncResult.exception;
                    if (imsException8.getCode() == 61446) {
                        this.mCi.getCLIR(message2);
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException8.getCode() == 61447) {
                        this.mCi.getCLIR(message2);
                    }
                }
                if (this.mPhone.isOpNotSupportCallIdentity()) {
                    commandException3 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                    objImsCFInfoToCFInfo = null;
                } else {
                    int[] compatArray = new int[2];
                    if (asyncResult.exception == null) {
                        ImsSsInfo imsSsInfo = (ImsSsInfo) objImsCFInfoToCFInfo;
                        if (imsSsInfo != null) {
                            compatArray = imsSsInfo.getCompatArray(8);
                        }
                        int[] savedClirSetting = this.mPhone.getSavedClirSetting();
                        if (savedClirSetting[0] == 0) {
                            Rlog.d(LOG_TAG, "Set clirInfo[0] to default");
                            compatArray[0] = savedClirSetting[0];
                        }
                        Rlog.d(LOG_TAG, "SS_REQUEST_GET_CLIR: CLIR param n=" + compatArray[0] + " m=" + compatArray[1]);
                    }
                    objImsCFInfoToCFInfo = compatArray;
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 8:
                int iIntValue12 = ((Integer) arrayList.get(1)).intValue();
                message2 = (Message) arrayList.get(2);
                if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                    ImsException imsException9 = asyncResult.exception;
                    if (imsException9.getCode() == 61446) {
                        this.mCi.setCLIR(iIntValue12, message2);
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException9.getCode() == 61447) {
                        this.mCi.setCLIR(iIntValue12, message2);
                    }
                }
                if (this.mPhone.isOpNotSupportCallIdentity()) {
                    commandException3 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                    objImsCFInfoToCFInfo = null;
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 9:
                message2 = (Message) arrayList.get(1);
                if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                    ImsException imsException10 = asyncResult.exception;
                    if (imsException10.getCode() == 61446) {
                        this.mCi.queryCLIP(message2);
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException10.getCode() == 61447) {
                        this.mCi.queryCLIP(message2);
                    }
                }
                if (this.mPhone.isOpNotSupportCallIdentity()) {
                    commandException3 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                    objImsCFInfoToCFInfo = null;
                } else {
                    int[] iArr = {0};
                    if (asyncResult.exception == null) {
                        if (objImsCFInfoToCFInfo instanceof ImsSsInfo) {
                            ImsSsInfo imsSsInfo2 = (ImsSsInfo) objImsCFInfoToCFInfo;
                            if (imsSsInfo2 != null) {
                                Rlog.d(LOG_TAG, "ImsSsInfo mStatus = " + imsSsInfo2.mStatus);
                                iArr[0] = imsSsInfo2.mStatus;
                            }
                        } else {
                            Rlog.e(LOG_TAG, "SS_REQUEST_GET_CLIP: arResult is not ImsSsInfo!");
                        }
                    }
                    objImsCFInfoToCFInfo = iArr;
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 10:
                int iIntValue13 = ((Integer) arrayList.get(1)).intValue();
                message2 = (Message) arrayList.get(2);
                if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                    ImsException imsException11 = asyncResult.exception;
                    if (imsException11.getCode() == 61446) {
                        this.mPhone.mMtkCi.setCLIP(iIntValue13, message2);
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException11.getCode() == 61447) {
                        this.mPhone.mMtkCi.setCLIP(iIntValue13, message2);
                    }
                }
                if (this.mPhone.isOpNotSupportCallIdentity()) {
                    commandException3 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                    objImsCFInfoToCFInfo = null;
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 11:
                message2 = (Message) arrayList.get(1);
                if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                    ImsException imsException12 = asyncResult.exception;
                    if (imsException12.getCode() == 61446) {
                        this.mPhone.mMtkCi.getCOLR(message2);
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException12.getCode() == 61447) {
                        this.mPhone.mMtkCi.getCOLR(message2);
                    }
                }
                if (this.mPhone.isOpNotSupportCallIdentity()) {
                    commandException3 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                    objImsCFInfoToCFInfo = null;
                } else {
                    int[] iArr2 = {0};
                    if (asyncResult.exception == null) {
                        if (objImsCFInfoToCFInfo instanceof ImsSsInfo) {
                            ImsSsInfo imsSsInfo3 = (ImsSsInfo) objImsCFInfoToCFInfo;
                            if (imsSsInfo3 != null) {
                                Rlog.d(LOG_TAG, "ImsSsInfo mStatus = " + imsSsInfo3.mStatus);
                                iArr2[0] = imsSsInfo3.mStatus;
                            }
                        } else {
                            Rlog.e(LOG_TAG, "SS_REQUEST_GET_COLR: arResult is not ImsSsInfo!");
                        }
                    }
                    objImsCFInfoToCFInfo = iArr2;
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 12:
                int iIntValue14 = ((Integer) arrayList.get(1)).intValue();
                message2 = (Message) arrayList.get(2);
                if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                    ImsException imsException13 = asyncResult.exception;
                    if (imsException13.getCode() == 61446) {
                        this.mPhone.mMtkCi.setCOLR(iIntValue14, message2);
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException13.getCode() == 61447) {
                        this.mPhone.mMtkCi.setCOLR(iIntValue14, message2);
                    }
                }
                if (this.mPhone.isOpNotSupportCallIdentity()) {
                    commandException3 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                    objImsCFInfoToCFInfo = null;
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 13:
                message2 = (Message) arrayList.get(1);
                if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                    ImsException imsException14 = asyncResult.exception;
                    if (imsException14.getCode() == 61446) {
                        this.mPhone.mMtkCi.getCOLP(message2);
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException14.getCode() == 61447) {
                        this.mPhone.mMtkCi.getCOLP(message2);
                    }
                }
                if (this.mPhone.isOpNotSupportCallIdentity()) {
                    commandException3 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                    objImsCFInfoToCFInfo = null;
                } else {
                    int[] iArr3 = {0};
                    if (asyncResult.exception == null) {
                        if (objImsCFInfoToCFInfo instanceof ImsSsInfo) {
                            ImsSsInfo imsSsInfo4 = (ImsSsInfo) objImsCFInfoToCFInfo;
                            if (imsSsInfo4 != null) {
                                Rlog.d(LOG_TAG, "ImsSsInfo mStatus = " + imsSsInfo4.mStatus);
                                iArr3[0] = imsSsInfo4.mStatus;
                            }
                        } else {
                            Rlog.e(LOG_TAG, "SS_REQUEST_GET_COLP: arResult is not ImsSsInfo!");
                        }
                    }
                    objImsCFInfoToCFInfo = iArr3;
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 14:
                int iIntValue15 = ((Integer) arrayList.get(1)).intValue();
                message2 = (Message) arrayList.get(2);
                if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                    ImsException imsException15 = asyncResult.exception;
                    if (imsException15.getCode() == 61446) {
                        this.mPhone.mMtkCi.setCOLP(iIntValue15, message2);
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException15.getCode() == 61447) {
                        this.mPhone.mMtkCi.setCOLP(iIntValue15, message2);
                    }
                }
                if (this.mPhone.isOpNotSupportCallIdentity()) {
                    commandException3 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                    objImsCFInfoToCFInfo = null;
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 15:
                message2 = (Message) arrayList.get(3);
                if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                    ImsException imsException16 = asyncResult.exception;
                    if (imsException16.getCode() == 61446) {
                        commandException3 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                        objImsCFInfoToCFInfo = null;
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException16.getCode() == 61447) {
                        if (message2 != null) {
                            AsyncResult.forMessage(message2, (Object) null, new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED));
                            message2.sendToTarget();
                        }
                    }
                }
                if (objImsCFInfoToCFInfo != null) {
                    Rlog.d(LOG_TAG, "SS_REQUEST_GET_CALL_FORWARD_TIME_SLOT cfinfoEx check.");
                    if (objImsCFInfoToCFInfo instanceof MtkImsCallForwardInfo[]) {
                        objImsCFInfoToCFInfo = imsCFInfoExToCFInfoEx((MtkImsCallForwardInfo[]) objImsCFInfoToCFInfo);
                    }
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            case 16:
                message2 = (Message) arrayList.get(7);
                if (asyncResult.exception != null && (asyncResult.exception instanceof ImsException)) {
                    ImsException imsException17 = asyncResult.exception;
                    if (imsException17.getCode() == 61446) {
                        commandException3 = new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED);
                        objImsCFInfoToCFInfo = null;
                        this.mPhone.setCsFallbackStatus(2);
                    } else if (imsException17.getCode() == 61447) {
                        if (message2 != null) {
                            AsyncResult.forMessage(message2, (Object) null, new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED));
                            message2.sendToTarget();
                        }
                    }
                    break;
                }
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
            default:
                if (commandException3 != null) {
                    Rlog.d(LOG_TAG, "processResponse, imsException.getCode = " + ((ImsException) commandException3).getCode());
                    commandException3 = getCommandException((ImsException) commandException3);
                }
                if (message2 != null) {
                    AsyncResult.forMessage(message2, objImsCFInfoToCFInfo, commandException3);
                    message2.sendToTarget();
                }
                break;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX INFO: Thrown type has an unknown type hierarchy: com.android.ims.ImsException */
    /* JADX WARN: Code duplicated, block: B:244:0x0527  */
    public void processSendRequest(Object obj) {
        Message message;
        Message message2;
        String cFPreviousDialNumber;
        String str;
        Message message3;
        Message message4;
        ArrayList arrayList = (ArrayList) obj;
        Integer num = (Integer) arrayList.get(0);
        Message messageObtainMessage = this.mSSRequestHandler.obtainMessage(2, arrayList);
        Rlog.d(LOG_TAG, "processSendRequest, request = " + num);
        switch (num.intValue()) {
            case 1:
                int iIntValue = ((Integer) arrayList.get(1)).intValue();
                int iIntValue2 = ((Integer) arrayList.get(2)).intValue();
                message = (Message) arrayList.get(4);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn() && this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        getUtInterface().queryCFForServiceClass(getConditionFromCFReason(iIntValue), (String) null, iIntValue2, messageObtainMessage);
                    } catch (ImsException e) {
                        sendGenericErrorResponse(message);
                    }
                } else {
                    sendRadioNotAvailable(message);
                }
                break;
            case 2:
                int iIntValue3 = ((Integer) arrayList.get(1)).intValue();
                int iIntValue4 = ((Integer) arrayList.get(2)).intValue();
                int iIntValue5 = ((Integer) arrayList.get(3)).intValue();
                String str2 = (String) arrayList.get(4);
                int iIntValue6 = ((Integer) arrayList.get(5)).intValue();
                message2 = (Message) arrayList.get(6);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    if ((str2 == null || str2.isEmpty()) && this.mPhone.getPhoneType() == 1) {
                        MtkGsmCdmaPhone mtkGsmCdmaPhone = this.mPhone;
                        if ((mtkGsmCdmaPhone instanceof MtkGsmCdmaPhone) && mtkGsmCdmaPhone.isSupportSaveCFNumber() && !((iIntValue3 != 1 && iIntValue3 != 3) || (cFPreviousDialNumber = this.mPhone.getCFPreviousDialNumber(iIntValue4)) == null || cFPreviousDialNumber.isEmpty())) {
                            str = cFPreviousDialNumber;
                        } else {
                            str = str2;
                        }
                    } else {
                        str = str2;
                    }
                    try {
                        ImsUtInterface utInterface = getUtInterface();
                        int actionFromCFAction = getActionFromCFAction(iIntValue3);
                        message2 = message2;
                        try {
                            utInterface.updateCallForward(actionFromCFAction, getConditionFromCFReason(iIntValue4), str, iIntValue5, iIntValue6, messageObtainMessage);
                        } catch (ImsException e2) {
                            sendGenericErrorResponse(message2);
                        }
                    } catch (ImsException e3) {
                        message2 = message2;
                    }
                } else {
                    sendRadioNotAvailable(message2);
                }
                break;
            case 3:
                String str3 = (String) arrayList.get(1);
                int iIntValue7 = ((Integer) arrayList.get(3)).intValue();
                message = (Message) arrayList.get(4);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn() && this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    if (this.mPhone.isOpNotSupportOCB(str3)) {
                        if (!this.mIsTempVolteUser) {
                            str3 = "AI";
                        } else if (message != null) {
                            AsyncResult.forMessage(message, (Object) null, new CommandException(CommandException.Error.REQUEST_NOT_SUPPORTED));
                            message.sendToTarget();
                        }
                    }
                    try {
                        getUtInterface().queryCallBarring(getCBTypeFromFacility(str3), messageObtainMessage, iIntValue7);
                    } catch (ImsException e4) {
                        sendGenericErrorResponse(message);
                    }
                } else {
                    sendRadioNotAvailable(message);
                }
                break;
            case 4:
                String str4 = (String) arrayList.get(1);
                boolean zBooleanValue = ((Boolean) arrayList.get(2)).booleanValue();
                int iIntValue8 = ((Integer) arrayList.get(4)).intValue();
                Message message5 = (Message) arrayList.get(5);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn() && this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        getUtInterface().updateCallBarring(getCBTypeFromFacility(str4), zBooleanValue ? 1 : 0, messageObtainMessage, (String[]) null, iIntValue8);
                    } catch (ImsException e5) {
                        sendGenericErrorResponse(message5);
                    }
                } else {
                    sendRadioNotAvailable(message5);
                }
                break;
            case 5:
                ((Integer) arrayList.get(1)).intValue();
                message3 = (Message) arrayList.get(2);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn() && this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        getUtInterface().queryCallWaiting(messageObtainMessage);
                    } catch (ImsException e6) {
                        sendGenericErrorResponse(message3);
                    }
                } else {
                    sendRadioNotAvailable(message3);
                }
                break;
            case 6:
                boolean zBooleanValue2 = ((Boolean) arrayList.get(1)).booleanValue();
                int iIntValue9 = ((Integer) arrayList.get(2)).intValue();
                message4 = (Message) arrayList.get(3);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn() && this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        ImsUtInterface utInterface2 = getUtInterface();
                        if (this.mPhone.isOpNwCW()) {
                            utInterface2.updateCallWaiting(zBooleanValue2, iIntValue9, messageObtainMessage);
                        } else {
                            utInterface2.queryCallWaiting(messageObtainMessage);
                        }
                    } catch (ImsException e7) {
                        sendGenericErrorResponse(message4);
                    }
                } else {
                    sendRadioNotAvailable(message4);
                }
                break;
            case 7:
                message2 = (Message) arrayList.get(1);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        getUtInterface().queryCLIR(messageObtainMessage);
                    } catch (ImsException e8) {
                        sendGenericErrorResponse(message2);
                    }
                } else {
                    sendRadioNotAvailable(message2);
                }
                break;
            case 8:
                int iIntValue10 = ((Integer) arrayList.get(1)).intValue();
                message3 = (Message) arrayList.get(2);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn() && this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        ImsUtInterface utInterface3 = getUtInterface();
                        if (this.mPhone.isOpNotSupportCallIdentity()) {
                            Rlog.d(LOG_TAG, "Silent queryCLIR");
                            utInterface3.queryCLIR(messageObtainMessage);
                        } else {
                            utInterface3.updateCLIR(iIntValue10, messageObtainMessage);
                        }
                    } catch (ImsException e9) {
                        sendGenericErrorResponse(message3);
                    }
                } else {
                    sendRadioNotAvailable(message3);
                }
                break;
            case 9:
                message2 = (Message) arrayList.get(1);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn() && this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        getUtInterface().queryCLIP(messageObtainMessage);
                    } catch (ImsException e10) {
                        sendGenericErrorResponse(message2);
                    }
                } else {
                    sendRadioNotAvailable(message2);
                }
                break;
            case 10:
                int iIntValue11 = ((Integer) arrayList.get(1)).intValue();
                message3 = (Message) arrayList.get(2);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn() && this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        ImsUtInterface utInterface4 = getUtInterface();
                        if (this.mPhone.isOpNotSupportCallIdentity()) {
                            Rlog.d(LOG_TAG, "Silent queryCLIP");
                            utInterface4.queryCLIP(messageObtainMessage);
                        } else {
                            utInterface4.updateCLIP(iIntValue11 != 0, messageObtainMessage);
                        }
                    } catch (ImsException e11) {
                        sendGenericErrorResponse(message3);
                    }
                } else {
                    sendRadioNotAvailable(message3);
                }
                break;
            case 11:
                message2 = (Message) arrayList.get(1);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        getUtInterface().queryCOLR(messageObtainMessage);
                    } catch (ImsException e12) {
                        sendGenericErrorResponse(message2);
                    }
                } else {
                    sendRadioNotAvailable(message2);
                }
                break;
            case 12:
                int iIntValue12 = ((Integer) arrayList.get(1)).intValue();
                message3 = (Message) arrayList.get(2);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        ImsUtInterface utInterface5 = getUtInterface();
                        if (this.mPhone.isOpNotSupportCallIdentity()) {
                            Rlog.d(LOG_TAG, "Silent queryCOLR");
                            utInterface5.queryCOLR(messageObtainMessage);
                        } else {
                            utInterface5.updateCOLR(iIntValue12, messageObtainMessage);
                        }
                    } catch (ImsException e13) {
                        sendGenericErrorResponse(message3);
                    }
                } else {
                    sendRadioNotAvailable(message3);
                }
                break;
            case 13:
                message2 = (Message) arrayList.get(1);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        getUtInterface().queryCOLP(messageObtainMessage);
                    } catch (ImsException e14) {
                        sendGenericErrorResponse(message2);
                    }
                } else {
                    sendRadioNotAvailable(message2);
                }
                break;
            case 14:
                int iIntValue13 = ((Integer) arrayList.get(1)).intValue();
                message3 = (Message) arrayList.get(2);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        ImsUtInterface utInterface6 = getUtInterface();
                        if (this.mPhone.isOpNotSupportCallIdentity()) {
                            Rlog.d(LOG_TAG, "Silent queryCOLP");
                            utInterface6.queryCOLP(messageObtainMessage);
                        } else {
                            utInterface6.updateCOLP(iIntValue13 != 0, messageObtainMessage);
                        }
                    } catch (ImsException e15) {
                        sendGenericErrorResponse(message3);
                    }
                } else {
                    sendRadioNotAvailable(message3);
                }
                break;
            case 15:
                int iIntValue14 = ((Integer) arrayList.get(1)).intValue();
                ((Integer) arrayList.get(2)).intValue();
                message4 = (Message) arrayList.get(3);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        getUtInterface().queryCallForwardInTimeSlot(getConditionFromCFReason(iIntValue14), messageObtainMessage);
                    } catch (ImsException e16) {
                        sendGenericErrorResponse(message4);
                    }
                } else {
                    sendRadioNotAvailable(message4);
                }
                break;
            case 16:
                int iIntValue15 = ((Integer) arrayList.get(1)).intValue();
                int iIntValue16 = ((Integer) arrayList.get(2)).intValue();
                ((Integer) arrayList.get(3)).intValue();
                String str5 = (String) arrayList.get(4);
                int iIntValue17 = ((Integer) arrayList.get(5)).intValue();
                long[] jArr = (long[]) arrayList.get(6);
                message2 = (Message) arrayList.get(7);
                if (this.mPhone.isRadioAvailable() && this.mPhone.isRadioOn()) {
                    try {
                        MtkImsUt utInterface7 = getUtInterface();
                        int actionFromCFAction2 = getActionFromCFAction(iIntValue15);
                        message2 = message2;
                        try {
                            utInterface7.updateCallForwardInTimeSlot(actionFromCFAction2, getConditionFromCFReason(iIntValue16), str5, iIntValue17, jArr, messageObtainMessage);
                        } catch (ImsException e17) {
                            sendGenericErrorResponse(message2);
                        }
                    } catch (ImsException e18) {
                        message2 = message2;
                    }
                } else {
                    sendRadioNotAvailable(message2);
                }
                break;
        }
    }

    private void sendRadioNotAvailable(Message message) {
        Rlog.d(LOG_TAG, "sendRadioNotAvailable");
        if (message != null) {
            AsyncResult.forMessage(message, (Object) null, new CommandException(CommandException.Error.RADIO_NOT_AVAILABLE));
            message.sendToTarget();
        }
    }

    public void dispose() {
        Rlog.d(LOG_TAG, "dispose.");
        this.mSSHandlerThread.getLooper().quit();
    }

    public void getCLIP(Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(9));
        arrayList.add(message);
        send(arrayList);
    }

    public void getCLIR(Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(7));
        arrayList.add(message);
        send(arrayList);
    }

    public void getCOLP(Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(13));
        arrayList.add(message);
        send(arrayList);
    }

    public void getCOLR(Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(11));
        arrayList.add(message);
        send(arrayList);
    }

    public void queryCallForwardInTimeSlotStatus(int i, int i2, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(15));
        arrayList.add(new Integer(i));
        arrayList.add(new Integer(i2));
        arrayList.add(message);
        send(arrayList);
    }

    public void queryCallForwardStatus(int i, int i2, String str, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(1));
        arrayList.add(new Integer(i));
        arrayList.add(new Integer(i2));
        arrayList.add(str);
        arrayList.add(message);
        send(arrayList);
    }

    public void queryCallWaiting(int i, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(5));
        arrayList.add(new Integer(i));
        arrayList.add(message);
        send(arrayList);
    }

    public void queryFacilityLock(String str, String str2, int i, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(3));
        arrayList.add(str);
        arrayList.add(str2);
        arrayList.add(new Integer(i));
        arrayList.add(message);
        send(arrayList);
    }

    void send(ArrayList<Object> arrayList) {
        this.mSSRequestHandler.obtainMessage(1, arrayList).sendToTarget();
    }

    void sendGenericErrorResponse(Message message) {
        Rlog.d(LOG_TAG, "sendErrorResponse");
        if (message != null) {
            AsyncResult.forMessage(message, (Object) null, new CommandException(CommandException.Error.GENERIC_FAILURE));
            message.sendToTarget();
        }
    }

    public void setCLIP(int i, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(10));
        arrayList.add(new Integer(i));
        arrayList.add(message);
        send(arrayList);
    }

    public void setCLIR(int i, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(8));
        arrayList.add(new Integer(i));
        arrayList.add(message);
        send(arrayList);
    }

    public void setCOLP(int i, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(14));
        arrayList.add(new Integer(i));
        arrayList.add(message);
        send(arrayList);
    }

    public void setCOLR(int i, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(12));
        arrayList.add(new Integer(i));
        arrayList.add(message);
        send(arrayList);
    }

    public void setCallForward(int i, int i2, int i3, String str, int i4, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(2));
        arrayList.add(new Integer(i));
        arrayList.add(new Integer(i2));
        arrayList.add(new Integer(i3));
        arrayList.add(str);
        arrayList.add(new Integer(i4));
        arrayList.add(message);
        send(arrayList);
    }

    public void setCallForwardInTimeSlot(int i, int i2, int i3, String str, int i4, long[] jArr, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(16));
        arrayList.add(new Integer(i));
        arrayList.add(new Integer(i2));
        arrayList.add(new Integer(i3));
        arrayList.add(str);
        arrayList.add(new Integer(i4));
        arrayList.add(jArr);
        arrayList.add(message);
        send(arrayList);
    }

    public void setCallWaiting(boolean z, int i, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(6));
        arrayList.add(new Boolean(z));
        arrayList.add(new Integer(i));
        arrayList.add(message);
        send(arrayList);
    }

    public void setFacilityLock(String str, boolean z, String str2, int i, Message message) {
        ArrayList<Object> arrayList = new ArrayList<>();
        arrayList.add(new Integer(4));
        arrayList.add(str);
        arrayList.add(new Boolean(z));
        arrayList.add(str2);
        arrayList.add(new Integer(i));
        arrayList.add(message);
        send(arrayList);
    }

    public void starThread() {
        HandlerThread handlerThread = new HandlerThread("SSRequestHandler");
        this.mSSHandlerThread = handlerThread;
        handlerThread.start();
        this.mSSRequestHandler = new SSRequestHandler(this.mSSHandlerThread.getLooper());
    }
}
