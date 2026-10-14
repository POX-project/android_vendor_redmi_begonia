package com.mediatek.internal.telephony.imsphone;

import android.R;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Bundle;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.ResultReceiver;
import android.os.SystemProperties;
import android.telecom.Log;
import android.telephony.CarrierConfigManager;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import android.telephony.ims.ImsSsInfo;
import android.text.SpannableStringBuilder;
import android.text.TextUtils;
import com.android.ims.ImsException;
import com.android.internal.telephony.CallForwardInfo;
import com.android.internal.telephony.CallStateException;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.MmiCode;
import com.android.internal.telephony.gsm.GsmMmiCode;
import com.android.internal.telephony.imsphone.ImsPhone;
import com.android.internal.telephony.imsphone.ImsPhoneMmiCode;
import com.android.internal.util.ArrayUtils;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import com.mediatek.internal.telephony.MtkSuppServHelper;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import java.util.regex.Matcher;
import vendor.xiaomi.hardware.misys.V1_0.IResultValue;

/* JADX INFO: loaded from: classes.dex */
public final class MtkImsPhoneMmiCode extends ImsPhoneMmiCode {
    private static final int DIALOG_DISPLAY_TIME = 1000;
    static final String LOG_TAG = "MtkImsPhoneMmiCode";
    private static final String SC_CFNotRegister = "68";
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER);
    private long processTime;

    public MtkImsPhoneMmiCode(ImsPhone imsPhone) {
        super(imsPhone);
        this.processTime = 0L;
    }

    private boolean checkIfOPSupportCallerID() {
        if (supportMdAutoSetupIms() || !this.mPhone.mDefaultPhone.isOpNotSupportCallIdentity()) {
            return true;
        }
        handleGeneralError();
        return false;
    }

    private CharSequence createQueryCallBarringResultMessage(int i) {
        StringBuilder sb = new StringBuilder(this.mContext.getText(R.string.permdesc_startViewAppFeatures));
        for (int i2 = 1; i2 <= 512; i2 <<= 1) {
            if ((i2 & i) != 0) {
                sb.append("\n");
                sb.append(serviceClassToCFString(i2 & i));
            }
        }
        return sb;
    }

    private void handleGeneralError() {
        this.mState = MmiCode.State.FAILED;
        StringBuilder sb = new StringBuilder(getScString());
        sb.append("\n");
        sb.append(this.mContext.getText(R.string.keyboardview_keycode_delete));
        this.mMessage = sb;
        checkProcessTime();
        this.mPhone.onMMIDone(this);
    }

    private boolean isFacToDial() {
        PersistableBundle configForSubId = ((CarrierConfigManager) this.mPhone.getContext().getSystemService("carrier_config")).getConfigForSubId(this.mPhone.getSubId());
        if (configForSubId != null) {
            String[] stringArray = configForSubId.getStringArray("feature_access_codes_string_array");
            if (!ArrayUtils.isEmpty(stringArray)) {
                for (String str : stringArray) {
                    if (str.equals(this.mSc)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    protected static boolean isServiceCodeCallForwarding(String str) {
        return str != null && (str.equals("21") || str.equals("67") || str.equals("61") || str.equals("62") || str.equals("002") || str.equals("004") || str.equals(SC_CFNotRegister));
    }

    public static boolean isUtMmiCode(String str, ImsPhone imsPhone) {
        MtkImsPhoneMmiCode mtkImsPhoneMmiCodeNewFromDialString = newFromDialString(str, imsPhone);
        return (mtkImsPhoneMmiCodeNewFromDialString == null || mtkImsPhoneMmiCodeNewFromDialString.isTemporaryModeCLIR() || mtkImsPhoneMmiCodeNewFromDialString.isShortCode() || mtkImsPhoneMmiCodeNewFromDialString.mDialingNumber != null || mtkImsPhoneMmiCodeNewFromDialString.mSc == null || (!mtkImsPhoneMmiCodeNewFromDialString.mSc.equals("30") && !mtkImsPhoneMmiCodeNewFromDialString.mSc.equals("31") && !mtkImsPhoneMmiCodeNewFromDialString.mSc.equals("76") && !mtkImsPhoneMmiCodeNewFromDialString.mSc.equals("77") && !isServiceCodeCallForwarding(mtkImsPhoneMmiCodeNewFromDialString.mSc) && !isServiceCodeCallBarring(mtkImsPhoneMmiCodeNewFromDialString.mSc) && !mtkImsPhoneMmiCodeNewFromDialString.mSc.equals("43") && !mtkImsPhoneMmiCodeNewFromDialString.mSc.equals("156") && !mtkImsPhoneMmiCodeNewFromDialString.mSc.equals("157"))) ? false : true;
    }

    public static MtkImsPhoneMmiCode newFromDialString(String str, ImsPhone imsPhone) {
        return newFromDialString(str, imsPhone, null);
    }

    public static MtkImsPhoneMmiCode newFromDialString(String str, ImsPhone imsPhone, ResultReceiver resultReceiver) {
        Rlog.d(LOG_TAG, "newFromDialString, dialstring = " + Log.pii(str));
        if (!(str.startsWith("*") || str.startsWith("#") || str.endsWith("#")) && str.length() > 2) {
            Rlog.d(LOG_TAG, "Not belong to MMI format.");
            return null;
        }
        Matcher matcher = sPatternSuppService.matcher(str);
        if (!matcher.matches()) {
            if (str.endsWith("#")) {
                MtkImsPhoneMmiCode mtkImsPhoneMmiCode = new MtkImsPhoneMmiCode(imsPhone);
                mtkImsPhoneMmiCode.mPoundString = str;
                return mtkImsPhoneMmiCode;
            }
            if (GsmMmiCode.isTwoDigitShortCode(imsPhone.getContext(), imsPhone.getSubId(), str) || !isShortCode(str, imsPhone)) {
                return null;
            }
            MtkImsPhoneMmiCode mtkImsPhoneMmiCode2 = new MtkImsPhoneMmiCode(imsPhone);
            mtkImsPhoneMmiCode2.mDialingNumber = str;
            return mtkImsPhoneMmiCode2;
        }
        MtkImsPhoneMmiCode mtkImsPhoneMmiCode3 = new MtkImsPhoneMmiCode(imsPhone);
        mtkImsPhoneMmiCode3.mPoundString = makeEmptyNull(matcher.group(1));
        mtkImsPhoneMmiCode3.mAction = makeEmptyNull(matcher.group(2));
        mtkImsPhoneMmiCode3.mSc = makeEmptyNull(matcher.group(3));
        mtkImsPhoneMmiCode3.mSia = makeEmptyNull(matcher.group(5));
        mtkImsPhoneMmiCode3.mSib = makeEmptyNull(matcher.group(7));
        mtkImsPhoneMmiCode3.mSic = makeEmptyNull(matcher.group(9));
        mtkImsPhoneMmiCode3.mPwd = makeEmptyNull(matcher.group(11));
        mtkImsPhoneMmiCode3.mDialingNumber = makeEmptyNull(matcher.group(12));
        mtkImsPhoneMmiCode3.mCallbackReceiver = resultReceiver;
        if (mtkImsPhoneMmiCode3.mDialingNumber != null && mtkImsPhoneMmiCode3.mDialingNumber.endsWith("#") && str.endsWith("#")) {
            MtkImsPhoneMmiCode mtkImsPhoneMmiCode4 = new MtkImsPhoneMmiCode(imsPhone);
            mtkImsPhoneMmiCode4.mPoundString = str;
            return mtkImsPhoneMmiCode4;
        }
        if (mtkImsPhoneMmiCode3.isFacToDial()) {
            return null;
        }
        return mtkImsPhoneMmiCode3;
    }

    public static MtkImsPhoneMmiCode newFromUssdUserInput(String str, MtkImsPhone mtkImsPhone) {
        MtkImsPhoneMmiCode mtkImsPhoneMmiCode = new MtkImsPhoneMmiCode(mtkImsPhone);
        mtkImsPhoneMmiCode.mMessage = str;
        mtkImsPhoneMmiCode.mState = MmiCode.State.PENDING;
        mtkImsPhoneMmiCode.mIsPendingUSSD = true;
        return mtkImsPhoneMmiCode;
    }

    public static MtkImsPhoneMmiCode newNetworkInitiatedUssd(String str, boolean z, MtkImsPhone mtkImsPhone) {
        MtkImsPhoneMmiCode mtkImsPhoneMmiCode = new MtkImsPhoneMmiCode(mtkImsPhone);
        mtkImsPhoneMmiCode.mMessage = str;
        mtkImsPhoneMmiCode.mIsUssdRequest = z;
        if (z) {
            mtkImsPhoneMmiCode.mIsPendingUSSD = true;
            mtkImsPhoneMmiCode.mState = MmiCode.State.PENDING;
        } else {
            mtkImsPhoneMmiCode.mState = MmiCode.State.COMPLETE;
        }
        return mtkImsPhoneMmiCode;
    }

    public static MtkImsPhoneMmiCode newNetworkInitiatedUssdError(String str, MtkImsPhone mtkImsPhone) {
        MtkImsPhoneMmiCode mtkImsPhoneMmiCode = new MtkImsPhoneMmiCode(mtkImsPhone);
        if (str == null || str.length() <= 0) {
            mtkImsPhoneMmiCode.mMessage = mtkImsPhoneMmiCode.mContext.getText(R.string.keyboardview_keycode_delete);
        } else {
            mtkImsPhoneMmiCode.mMessage = str;
        }
        mtkImsPhoneMmiCode.mIsUssdRequest = false;
        mtkImsPhoneMmiCode.mState = MmiCode.State.FAILED;
        return mtkImsPhoneMmiCode;
    }

    private String removeLastErrorCode(CharSequence charSequence) {
        return new StringBuilder(new StringBuilder(charSequence).reverse().toString().replaceFirst("\\)[0-9]{5}\\(", "")).reverse().toString();
    }

    protected static int scToCallForwardReason(String str) {
        if (str == null) {
            throw new RuntimeException("invalid call forward sc");
        }
        if (str.equals("002")) {
            return 4;
        }
        if (str.equals("21")) {
            return 0;
        }
        if (str.equals("67")) {
            return 1;
        }
        if (str.equals("62")) {
            return 3;
        }
        if (str.equals("61")) {
            return 2;
        }
        if (str.equals("004")) {
            return 5;
        }
        if (str.equals(SC_CFNotRegister)) {
            return 6;
        }
        throw new RuntimeException("invalid call forward sc");
    }

    private static int siToServiceClass(String str) {
        if (str == null || str.length() == 0) {
            return 0;
        }
        int i = Integer.parseInt(str, 10);
        if (i == 16) {
            return 8;
        }
        if (i == 99) {
            return 64;
        }
        switch (i) {
            case 10:
                return 13;
            case 11:
                return 1;
            case 12:
                return 12;
            case 13:
                return 4;
            default:
                switch (i) {
                    case 19:
                        return 5;
                    case 20:
                        return 48;
                    case 21:
                        return 160;
                    case IResultValue.MISYS_EINVAL /* 22 */:
                        return 80;
                    default:
                        switch (i) {
                            case IResultValue.MISYS_EMFILE /* 24 */:
                                return 528;
                            case IResultValue.MISYS_ENOTTY /* 25 */:
                                return 32;
                            case IResultValue.MISYS_ETXTBSY /* 26 */:
                                return 17;
                            default:
                                throw new RuntimeException("unsupported MMI service code " + str);
                        }
                }
        }
    }

    private boolean supportMdAutoSetupIms() {
        return SystemProperties.get("ro.vendor.md_auto_setup_ims").equals("1");
    }

    private boolean triggerMmiCodeCsfb(Message message) {
        AsyncResult asyncResult;
        if (supportMdAutoSetupIms() || this.mPhone.mDefaultPhone.isNotSupportUtToCS() || (asyncResult = (AsyncResult) message.obj) == null || asyncResult.exception == null) {
            return false;
        }
        if (asyncResult.exception instanceof CommandException) {
            CommandException commandException = asyncResult.exception;
            if (commandException.getCommandError() == CommandException.Error.OPERATION_NOT_ALLOWED) {
                Rlog.d(LOG_TAG, "handleMessage(): CommandException.Error.UT_XCAP_403_FORBIDDEN");
                ((MtkImsPhone) this.mPhone).handleMmiCodeCsfb(61446, this);
                return true;
            }
            if (commandException.getCommandError() != CommandException.Error.OEM_ERROR_3) {
                return false;
            }
            Rlog.d(LOG_TAG, "handleMessage(): CommandException.Error.UT_UNKNOWN_HOST");
            ((MtkImsPhone) this.mPhone).handleMmiCodeCsfb(61447, this);
            return true;
        }
        if (!(asyncResult.exception instanceof ImsException)) {
            return false;
        }
        ImsException imsException = asyncResult.exception;
        if (imsException.getCode() == 61446) {
            Rlog.d(LOG_TAG, "handleMessage(): ImsReasonInfo.CODE_UT_XCAP_403_FORBIDDEN");
            ((MtkImsPhone) this.mPhone).handleMmiCodeCsfb(61446, this);
            return true;
        }
        if (imsException.getCode() != 61447) {
            return false;
        }
        Rlog.d(LOG_TAG, "handleMessage(): ImsReasonInfo.CODE_UT_UNKNOWN_HOST");
        ((MtkImsPhone) this.mPhone).handleMmiCodeCsfb(61447, this);
        return true;
    }

    void checkProcessTime() {
        if (System.currentTimeMillis() - this.processTime < 1000) {
            try {
                Thread.sleep(1000L);
            } catch (InterruptedException e) {
            }
        }
    }

    protected CharSequence getErrorMessage(AsyncResult asyncResult) {
        if (asyncResult.exception instanceof CommandException) {
            CommandException commandException = asyncResult.exception;
            String message = commandException.getMessage();
            if (commandException.getCommandError() == CommandException.Error.OEM_ERROR_1 && message != null && !message.isEmpty()) {
                String strRemoveLastErrorCode = removeLastErrorCode(message);
                Rlog.d(LOG_TAG, "getErrorMessage, errorMsg = " + strRemoveLastErrorCode);
                return strRemoveLastErrorCode;
            }
        }
        return super.getErrorMessage(asyncResult);
    }

    protected CharSequence getImsErrorMessage(AsyncResult asyncResult) {
        ImsException imsException = asyncResult.exception;
        CharSequence mmiErrorMessage = getMmiErrorMessage(asyncResult);
        if (mmiErrorMessage != null) {
            return mmiErrorMessage;
        }
        if (imsException.getMessage() == null) {
            return getErrorMessage(asyncResult);
        }
        String strRemoveLastErrorCode = removeLastErrorCode(imsException.getMessage());
        Rlog.d(LOG_TAG, "getImsErrorMessage, errorMsg = " + strRemoveLastErrorCode);
        return strRemoveLastErrorCode;
    }

    protected CharSequence getMmiErrorMessage(AsyncResult asyncResult) {
        if (asyncResult.exception instanceof ImsException) {
            Rlog.d(LOG_TAG, "getMmiErrorMessage, ims error code = " + asyncResult.exception.getCode());
            int code = asyncResult.exception.getCode();
            if (code == 241) {
                return this.mContext.getText(R.string.keyboardview_keycode_enter);
            }
            if (code != 61449) {
                switch (code) {
                    case 822:
                        return this.mContext.getText(R.string.permlab_bluetooth_scan);
                    case 823:
                        return this.mContext.getText(R.string.permlab_broadcastSticky);
                    case 824:
                        return this.mContext.getText(R.string.permlab_bodySensors_background);
                    case 825:
                        return this.mContext.getText(R.string.permlab_bodySensors);
                    default:
                        return this.mContext.getText(R.string.keyboardview_keycode_delete);
                }
            }
            String message = asyncResult.exception.getMessage();
            if (message == null || message.isEmpty()) {
                return this.mContext.getText(R.string.keyboardview_keycode_delete);
            }
            String strRemoveLastErrorCode = removeLastErrorCode(message);
            Rlog.d(LOG_TAG, "Ims errorMessage = " + strRemoveLastErrorCode);
            return strRemoveLastErrorCode;
        }
        if (asyncResult.exception instanceof CommandException) {
            CommandException commandException = asyncResult.exception;
            Rlog.d(LOG_TAG, "getMmiErrorMessage, error code = " + commandException.getCommandError());
            if (commandException.getCommandError() == CommandException.Error.FDN_CHECK_FAILURE) {
                return this.mContext.getText(R.string.keyboardview_keycode_enter);
            }
            if (commandException.getCommandError() == CommandException.Error.SS_MODIFIED_TO_DIAL) {
                return this.mContext.getText(R.string.permlab_bluetooth_scan);
            }
            if (commandException.getCommandError() == CommandException.Error.SS_MODIFIED_TO_USSD) {
                return this.mContext.getText(R.string.permlab_broadcastSticky);
            }
            if (commandException.getCommandError() == CommandException.Error.SS_MODIFIED_TO_SS) {
                return this.mContext.getText(R.string.permlab_bodySensors_background);
            }
            if (commandException.getCommandError() == CommandException.Error.SS_MODIFIED_TO_DIAL_VIDEO) {
                return this.mContext.getText(R.string.permlab_bodySensors);
            }
            if (commandException.getCommandError() == CommandException.Error.OEM_ERROR_25 || commandException.getCommandError() == CommandException.Error.OEM_ERROR_6 || commandException.getCommandError() == CommandException.Error.OEM_ERROR_24 || commandException.getCommandError() == CommandException.Error.OEM_ERROR_23 || commandException.getCommandError() == CommandException.Error.OEM_ERROR_22) {
                String message2 = commandException.getMessage();
                if (message2 == null || message2.isEmpty()) {
                    return this.mContext.getText(R.string.keyboardview_keycode_delete);
                }
                String strRemoveLastErrorCode2 = removeLastErrorCode(message2);
                Rlog.d(LOG_TAG, "errorMessage = " + strRemoveLastErrorCode2);
                return strRemoveLastErrorCode2;
            }
        }
        return this.mContext.getText(R.string.keyboardview_keycode_delete);
    }

    void handleCLIP() {
        Rlog.d(LOG_TAG, "processCode: is CLIP");
        if (checkIfOPSupportCallerID()) {
            if (isInterrogate()) {
                try {
                    this.mPhone.mCT.getUtInterface().queryCLIP(obtainMessage(7, this));
                } catch (ImsException e) {
                    Rlog.d(LOG_TAG, "Could not get UT handle for queryCLIP.");
                }
            } else {
                if (!isActivate() && !isDeactivate()) {
                    throw new RuntimeException("Invalid or Unsupported MMI Code");
                }
                try {
                    this.mPhone.mCT.getUtInterface().updateCLIP(isActivate(), obtainMessage(0, this));
                } catch (ImsException e2) {
                    Rlog.d(LOG_TAG, "Could not get UT handle for updateCLIP.");
                }
            }
        }
    }

    void handleCLIR() {
        Rlog.d(LOG_TAG, "processCode: is CLIR");
        if (checkIfOPSupportCallerID()) {
            if (isActivate()) {
                if (!supportMdAutoSetupIms() && this.mPhone.mDefaultPhone.isOpTbClir()) {
                    this.mPhone.mDefaultPhone.mCi.setCLIR(1, obtainMessage(0, 1, 0, this));
                    return;
                }
                try {
                    this.mPhone.mCT.getUtInterface().updateCLIR(1, obtainMessage(0, 1, 0, this));
                    return;
                } catch (ImsException e) {
                    Rlog.d(LOG_TAG, "Could not get UT handle for updateCLIR.");
                    return;
                }
            }
            if (isDeactivate()) {
                if (!supportMdAutoSetupIms() && this.mPhone.mDefaultPhone.isOpTbClir()) {
                    this.mPhone.mDefaultPhone.mCi.setCLIR(2, obtainMessage(0, 2, 0, this));
                    return;
                }
                try {
                    this.mPhone.mCT.getUtInterface().updateCLIR(2, obtainMessage(0, 2, 0, this));
                    return;
                } catch (ImsException e2) {
                    Rlog.d(LOG_TAG, "Could not get UT handle for updateCLIR.");
                    return;
                }
            }
            if (!isInterrogate()) {
                throw new RuntimeException("Invalid or Unsupported MMI Code");
            }
            if (supportMdAutoSetupIms() || !this.mPhone.mDefaultPhone.isOpTbClir()) {
                try {
                    this.mPhone.mCT.getUtInterface().queryCLIR(obtainMessage(6, this));
                } catch (ImsException e3) {
                    Rlog.d(LOG_TAG, "Could not get UT handle for queryCLIR.");
                }
            } else {
                Message messageObtainMessage = obtainMessage(6, this);
                if (messageObtainMessage != null) {
                    int[] savedClirSetting = this.mPhone.mDefaultPhone.getSavedClirSetting();
                    AsyncResult.forMessage(messageObtainMessage, new ImsSsInfo.Builder(-1).setClirOutgoingState(savedClirSetting[0]).setClirInterrogationStatus(savedClirSetting[1]).build(), (Throwable) null);
                    messageObtainMessage.sendToTarget();
                }
            }
        }
    }

    void handleCOLP() {
        Rlog.d(LOG_TAG, "processCode: is COLP");
        if (checkIfOPSupportCallerID()) {
            if (isInterrogate()) {
                try {
                    this.mPhone.mCT.getUtInterface().queryCOLP(obtainMessage(7, this));
                } catch (ImsException e) {
                    Rlog.d(LOG_TAG, "Could not get UT handle for queryCOLP.");
                }
            } else {
                if (!isActivate() && !isDeactivate()) {
                    throw new RuntimeException("Invalid or Unsupported MMI Code");
                }
                try {
                    this.mPhone.mCT.getUtInterface().updateCOLP(isActivate(), obtainMessage(0, this));
                } catch (ImsException e2) {
                    Rlog.d(LOG_TAG, "Could not get UT handle for updateCOLP.");
                }
            }
        }
    }

    void handleCOLR() {
        Rlog.d(LOG_TAG, "processCode: is COLR");
        if (checkIfOPSupportCallerID()) {
            if (isActivate()) {
                try {
                    this.mPhone.mCT.getUtInterface().updateCOLR(1, obtainMessage(0, this));
                } catch (ImsException e) {
                    Rlog.d(LOG_TAG, "Could not get UT handle for updateCOLR.");
                }
            } else if (isDeactivate()) {
                try {
                    this.mPhone.mCT.getUtInterface().updateCOLR(0, obtainMessage(0, this));
                } catch (ImsException e2) {
                    Rlog.d(LOG_TAG, "Could not get UT handle for updateCOLR.");
                }
            } else {
                if (!isInterrogate()) {
                    throw new RuntimeException("Invalid or Unsupported MMI Code");
                }
                try {
                    this.mPhone.mCT.getUtInterface().queryCOLR(obtainMessage(7, this));
                } catch (ImsException e3) {
                    Rlog.d(LOG_TAG, "Could not get UT handle for queryCOLR.");
                }
            }
        }
    }

    void handleCW() {
        Rlog.d(LOG_TAG, "processCode: is CW");
        int iSiToServiceClass = siToServiceClass(this.mSia);
        if (supportMdAutoSetupIms()) {
            if (isActivate() || isDeactivate()) {
                this.mPhone.setCallWaiting(isActivate(), iSiToServiceClass, obtainMessage(0, this));
                return;
            } else {
                if (!isInterrogate()) {
                    throw new RuntimeException("Invalid or Unsupported MMI Code");
                }
                this.mPhone.getCallWaiting(obtainMessage(3, this));
                return;
            }
        }
        int tbcwMode = this.mPhone.mDefaultPhone.getTbcwMode();
        if (isActivate() || isDeactivate()) {
            if (this.mPhone.mDefaultPhone.isOpNwCW()) {
                Rlog.d(LOG_TAG, "setCallWaiting() by Ut interface.");
                this.mPhone.setCallWaiting(isActivate(), iSiToServiceClass, obtainMessage(0, this));
                return;
            }
            if (tbcwMode == 3) {
                this.mPhone.mDefaultPhone.mCi.setCallWaiting(isActivate(), iSiToServiceClass, obtainMessage(0, isActivate() ? 1 : 0, -1, this));
                return;
            }
            String telephonyProperty = TelephonyManager.getTelephonyProperty(this.mPhone.mDefaultPhone.getPhoneId(), "persist.vendor.radio.terminal-based.cw", "disabled_tbcw");
            Rlog.d(LOG_TAG, "setTerminal-based CallWaiting(): tbcwStatus = " + telephonyProperty + ", enable = " + isActivate());
            if (!telephonyProperty.equals("disabled_tbcw")) {
                this.mPhone.mDefaultPhone.setTerminalBasedCallWaiting(isActivate(), obtainMessage(0, this));
                return;
            } else {
                Rlog.d(LOG_TAG, "setCallWaiting() by Ut interface.");
                this.mPhone.setCallWaiting(isActivate(), iSiToServiceClass, obtainMessage(0, this));
                return;
            }
        }
        if (!isInterrogate()) {
            throw new RuntimeException("Invalid or Unsupported MMI Code");
        }
        int tbcwMode2 = this.mPhone.mDefaultPhone.getTbcwMode();
        if (this.mPhone.mDefaultPhone.isOpNwCW()) {
            Rlog.d(LOG_TAG, "getCallWaiting() by Ut interface.");
            this.mPhone.getCallWaiting(obtainMessage(3, this));
            return;
        }
        if (tbcwMode2 == 3) {
            this.mPhone.mDefaultPhone.mCi.queryCallWaiting(iSiToServiceClass, obtainMessage(3, this));
            return;
        }
        String telephonyProperty2 = TelephonyManager.getTelephonyProperty(this.mPhone.mDefaultPhone.getPhoneId(), "persist.vendor.radio.terminal-based.cw", "disabled_tbcw");
        Rlog.d(LOG_TAG, "SC_WAIT isInterrogate() tbcwStatus = " + telephonyProperty2);
        if ("enabled_tbcw_on".equals(telephonyProperty2)) {
            Message messageObtainMessage = obtainMessage(3, null);
            AsyncResult.forMessage(messageObtainMessage, new int[]{1, 1}, (Throwable) null);
            sendMessage(messageObtainMessage);
        } else if (!"enabled_tbcw_off".equals(telephonyProperty2)) {
            Rlog.d(LOG_TAG, "getCallWaiting() by Ut interface.");
            this.mPhone.getCallWaiting(obtainMessage(3, this));
        } else {
            Message messageObtainMessage2 = obtainMessage(3, null);
            AsyncResult.forMessage(messageObtainMessage2, new int[]{0, 0}, (Throwable) null);
            sendMessage(messageObtainMessage2);
        }
    }

    void handleCallBarring() {
        Rlog.d(LOG_TAG, "processCode: is CB");
        String str = this.mSia;
        String strScToBarringFacility = scToBarringFacility(this.mSc);
        int iSiToServiceClass = siToServiceClass(this.mSib);
        if (isInterrogate()) {
            this.mPhone.getCallBarring(strScToBarringFacility, str, obtainMessage(7, this), iSiToServiceClass);
        } else {
            if (!isActivate() && !isDeactivate()) {
                throw new RuntimeException("Invalid or Unsupported MMI Code");
            }
            this.mPhone.setCallBarring(strScToBarringFacility, isActivate(), str, obtainMessage(0, this), iSiToServiceClass);
        }
    }

    void handleCallBarringACR() {
        Rlog.d(LOG_TAG, "processCode: is CB (ACR)");
        int i = 0;
        String str = this.mSia;
        int iSiToServiceClass = siToServiceClass(this.mSib);
        try {
            if (isInterrogate()) {
                this.mPhone.mCT.getUtInterface().queryCallBarring(6, obtainMessage(10, this));
                return;
            }
            if (isActivate()) {
                i = 1;
            } else if (isDeactivate()) {
                i = 0;
            }
            this.mPhone.mCT.getUtInterface().updateCallBarring(str, 6, i, obtainMessage(0, this), (String[]) null, iSiToServiceClass);
        } catch (ImsException e) {
            Rlog.d(LOG_TAG, "Could not get UT handle for ICBa.");
        }
    }

    void handleCallBarringSpecificMT() {
        Rlog.d(LOG_TAG, "processCode: is CB (specifc MT)");
        try {
            if (isInterrogate()) {
                this.mPhone.mCT.getUtInterface().queryCallBarring(10, obtainMessage(10, this));
            } else {
                processIcbMmiCodeForUpdate();
            }
        } catch (ImsException e) {
            Rlog.d(LOG_TAG, "Could not get UT handle for ICB.");
        }
    }

    void handleCallForward() {
        int i;
        Rlog.d(LOG_TAG, "processCode: is CF");
        String str = this.mSia;
        int iScToCallForwardReason = scToCallForwardReason(this.mSc);
        int iSiToServiceClass = siToServiceClass(this.mSib);
        int iSiToTime = siToTime(this.mSic);
        int i2 = 1;
        if (isInterrogate()) {
            if (iSiToServiceClass != 0 && (this.mPhone.mDefaultPhone instanceof MtkGsmCdmaPhone)) {
                this.mPhone.mDefaultPhone.setServiceClass(iSiToServiceClass);
            }
            this.mPhone.getCallForwardingOption(iScToCallForwardReason, obtainMessage(1, this));
            return;
        }
        if (isActivate()) {
            if (isEmptyOrNull(str)) {
                this.mIsCallFwdReg = false;
                i = 1;
            } else {
                this.mIsCallFwdReg = true;
                i = 3;
            }
        } else if (isDeactivate()) {
            i = 0;
        } else if (isRegister()) {
            i = 3;
        } else {
            if (!isErasure()) {
                throw new RuntimeException("invalid action");
            }
            i = 4;
        }
        int i3 = ((iScToCallForwardReason == 0 || iScToCallForwardReason == 4) && ((iSiToServiceClass & 1) != 0 || iSiToServiceClass == 0)) ? 1 : 0;
        if (i != 1 && i != 3) {
            i2 = 0;
        }
        int i4 = i2;
        Rlog.d(LOG_TAG, "is CF setCallForward");
        if (this.mPhone.mDefaultPhone.isOpReregisterForCF()) {
            Rlog.i(LOG_TAG, "Set ims dereg to ON.");
            SystemProperties.set(MtkGsmCdmaPhone.IMS_DEREG_PROP, "1");
        }
        this.mPhone.setCallForwardingOption(i, iScToCallForwardReason, str, iSiToServiceClass, iSiToTime, obtainMessage(4, i3, i4, this));
    }

    public void handleMessage(Message message) {
        if (triggerMmiCodeCsfb(message)) {
            return;
        }
        int i = message.what;
        if (i == 0) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            if (!supportMdAutoSetupIms() && this.mSc.equals("43") && this.mPhone.mDefaultPhone.getTbcwMode() == 3 && asyncResult.exception == null) {
                this.mPhone.mDefaultPhone.setTerminalBasedCallWaiting(message.arg1 == 1, null);
            }
            onSetComplete(message, asyncResult);
            return;
        }
        if (i != 4) {
            super.handleMessage(message);
            return;
        }
        AsyncResult asyncResult2 = (AsyncResult) message.obj;
        if (asyncResult2.exception == null && message.arg1 == 1) {
            boolean z = message.arg2 == 1;
            if (this.mPhone.mDefaultPhone.queryCFUAgainAfterSet()) {
                if (asyncResult2.result != null) {
                    CallForwardInfo[] callForwardInfoArr = (CallForwardInfo[]) asyncResult2.result;
                    if (callForwardInfoArr == null || callForwardInfoArr.length == 0) {
                        Rlog.i(LOG_TAG, "cfInfo is null or length is 0.");
                    } else {
                        for (int i2 = 0; i2 < callForwardInfoArr.length; i2++) {
                            if ((callForwardInfoArr[i2].serviceClass & 1) != 0) {
                                if (callForwardInfoArr[i2].status != 1) {
                                    Rlog.i(LOG_TAG, "Set CF_DISABLE, serviceClass: " + callForwardInfoArr[i2].serviceClass);
                                    z = false;
                                    break;
                                }
                                Rlog.i(LOG_TAG, "Set CF_ENABLE, serviceClass: " + callForwardInfoArr[i2].serviceClass);
                                z = true;
                                break;
                            }
                        }
                    }
                } else {
                    Rlog.i(LOG_TAG, "ar.result is null.");
                }
            }
            Rlog.i(LOG_TAG, "EVENT_SET_CFF_COMPLETE: cffEnabled:" + z + ", mDialingNumber=" + this.mDialingNumber + ", mIccRecords=" + this.mIccRecords);
            if (this.mIccRecords != null) {
                this.mPhone.mDefaultPhone.setVoiceCallForwardingFlag(1, z, this.mDialingNumber);
                ((MtkImsPhone) this.mPhone).saveTimeSlot(null);
            }
        }
        onSetComplete(message, asyncResult2);
    }

    public boolean isSupportedOverImsPhone() {
        if (isShortCode()) {
            return true;
        }
        if (this.mDialingNumber != null) {
            return false;
        }
        if (this.mSc != null && this.mSc.equals("300")) {
            return false;
        }
        if (!isServiceCodeCallForwarding(this.mSc) && !isServiceCodeCallBarring(this.mSc) && ((this.mSc == null || !this.mSc.equals("43")) && ((this.mSc == null || !this.mSc.equals("31")) && ((this.mSc == null || !this.mSc.equals("30")) && ((this.mSc == null || !this.mSc.equals("77")) && ((this.mSc == null || !this.mSc.equals("76")) && ((this.mSc == null || !this.mSc.equals("156")) && (this.mSc == null || !this.mSc.equals("157"))))))))) {
            return !isPinPukCommand() && (this.mSc == null || !(this.mSc.equals("03") || this.mSc.equals("30") || this.mSc.equals("31"))) && this.mPoundString != null;
        }
        if (supportMdAutoSetupIms()) {
            try {
                int iSiToServiceClass = siToServiceClass(this.mSib);
                if ((iSiToServiceClass & 1) == 0 && (iSiToServiceClass & 512) == 0 && iSiToServiceClass != 0) {
                    return false;
                }
                Rlog.d(LOG_TAG, "isSupportedOverImsPhone(), return true!");
                return true;
            } catch (RuntimeException e) {
                Rlog.d(LOG_TAG, "Invalid service class " + e);
            }
        } else if (this.mPhone.isVolteEnabled() || (this.mPhone.isWifiCallingEnabled() && this.mPhone.mDefaultPhone.isWFCUtSupport())) {
            try {
                int iSiToServiceClass2 = siToServiceClass(this.mSib);
                if ((iSiToServiceClass2 & 1) == 0 && (iSiToServiceClass2 & 512) == 0 && iSiToServiceClass2 != 0) {
                }
                Rlog.d(LOG_TAG, "isSupportedOverImsPhone(), return true!");
                return true;
            } catch (RuntimeException e2) {
                Rlog.d(LOG_TAG, "exc.toString() = " + e2.toString());
            }
        }
        return false;
    }

    protected CharSequence makeCFQueryResultMessage(CallForwardInfo callForwardInfo, int i) {
        CharSequence text;
        String[] strArr = {"{0}", "{1}", "{2}"};
        CharSequence[] charSequenceArr = new CharSequence[3];
        boolean z = callForwardInfo.reason == 2 && callForwardInfo.timeSeconds >= 0;
        if (callForwardInfo.status == 1) {
            text = z ? this.mContext.getText(R.string.capability_desc_canPerformGestures) : this.mContext.getText(R.string.capability_desc_canControlMagnification);
        } else if (callForwardInfo.status == 0 && isEmptyOrNull(callForwardInfo.number)) {
            text = this.mContext.getText(R.string.capability_desc_canRequestFilterKeyEvents);
        } else {
            text = z ? this.mContext.getText(R.string.capability_desc_canRetrieveWindowContent) : this.mContext.getText(R.string.capability_desc_canRequestTouchExploration);
        }
        charSequenceArr[0] = serviceClassToCFString(callForwardInfo.serviceClass & i);
        charSequenceArr[1] = PhoneNumberUtils.stringFromStringAndTOA(callForwardInfo.number, callForwardInfo.toa);
        charSequenceArr[2] = Integer.toString(callForwardInfo.timeSeconds);
        if (callForwardInfo.reason == 0 && (callForwardInfo.serviceClass & i) == 1) {
            boolean z2 = callForwardInfo.status == 1;
            if (this.mIccRecords != null) {
                this.mPhone.setVoiceCallForwardingFlag(1, z2, callForwardInfo.number);
            }
        }
        return TextUtils.replace(text, strArr, charSequenceArr);
    }

    protected void onQueryCfComplete(AsyncResult asyncResult) {
        StringBuilder sb = new StringBuilder(getScString());
        sb.append("\n");
        if (asyncResult.exception != null) {
            super.onQueryCfComplete(asyncResult);
            return;
        }
        CallForwardInfo[] callForwardInfoArr = (CallForwardInfo[]) asyncResult.result;
        if (callForwardInfoArr == null || callForwardInfoArr.length == 0) {
            sb.append(this.mContext.getText(R.string.permdesc_startForegroundServicesFromBackground));
            if (this.mIccRecords != null) {
                this.mPhone.setVoiceCallForwardingFlag(1, false, (String) null);
            }
        } else {
            SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder();
            for (int i = 1; i <= 512; i <<= 1) {
                if (i != 256) {
                    int length = callForwardInfoArr.length;
                    for (int i2 = 0; i2 < length; i2++) {
                        if ((callForwardInfoArr[i2].serviceClass & i) != 0) {
                            spannableStringBuilder.append(makeCFQueryResultMessage(callForwardInfoArr[i2], i));
                            spannableStringBuilder.append((CharSequence) "\n");
                        }
                    }
                }
            }
            sb.append((CharSequence) spannableStringBuilder);
        }
        this.mState = MmiCode.State.COMPLETE;
        this.mMessage = sb;
        Rlog.d(LOG_TAG, "onQueryCfComplete: mmi=" + this);
        checkProcessTime();
        this.mPhone.onMMIDone(this);
    }

    protected void onSuppSvcQueryComplete(AsyncResult asyncResult) {
        if (!isServiceCodeCallBarring(this.mSc) || asyncResult.exception != null || (asyncResult.result instanceof Bundle)) {
            super.onSuppSvcQueryComplete(asyncResult);
            return;
        }
        StringBuilder sb = new StringBuilder(getScString());
        sb.append("\n");
        Rlog.d(LOG_TAG, "onSuppSvcQueryComplete: Received Call Barring Response.");
        int[] iArr = (int[]) asyncResult.result;
        if (iArr[0] == 0) {
            sb.append(this.mContext.getText(R.string.permdesc_startForegroundServicesFromBackground));
        } else {
            sb.append(createQueryCallBarringResultMessage(iArr[0]));
        }
        this.mState = MmiCode.State.COMPLETE;
        this.mMessage = sb;
        Rlog.d(LOG_TAG, "onSuppSvcQueryComplete mmi=" + this);
        checkProcessTime();
        this.mPhone.onMMIDone(this);
    }

    public void processCode() throws CallStateException {
        try {
            if (!supportMdAutoSetupIms() && this.mPhone.mDefaultPhone.getCsFallbackStatus() != 0) {
                Rlog.d(LOG_TAG, "processCode(): getCsFallbackStatus(): CS Fallback!");
                ((MtkImsPhone) this.mPhone).removeMmi(this);
                throw new CallStateException("cs_fallback");
            }
            this.processTime = System.currentTimeMillis();
            if (isShortCode()) {
                Rlog.d(LOG_TAG, "processCode: isShortCode");
                Rlog.d(LOG_TAG, "processCode: Sending short code '" + this.mDialingNumber + "' over CS pipe.");
                throw new CallStateException("cs_fallback");
            }
            if (isServiceCodeCallForwarding(this.mSc)) {
                handleCallForward();
            } else if (isServiceCodeCallBarring(this.mSc)) {
                handleCallBarring();
            } else if (this.mSc != null && this.mSc.equals("31")) {
                handleCLIR();
            } else if (this.mSc != null && this.mSc.equals("30")) {
                handleCLIP();
            } else if (this.mSc != null && this.mSc.equals("76")) {
                handleCOLP();
            } else if (this.mSc != null && this.mSc.equals("77")) {
                handleCOLR();
            } else if (this.mSc != null && this.mSc.equals("156")) {
                handleCallBarringSpecificMT();
            } else if (this.mSc != null && this.mSc.equals("157")) {
                handleCallBarringACR();
            } else if (this.mSc != null && this.mSc.equals("43")) {
                handleCW();
            } else {
                if (this.mPoundString == null) {
                    throw new RuntimeException("Invalid or Unsupported MMI Code");
                }
                if (this.mPhone.getDefaultPhone().getServiceStateTracker().mSS.getState() == 0) {
                    Rlog.i(LOG_TAG, "processCode: Sending ussd string '" + Rlog.pii(LOG_TAG, this.mPoundString) + "' over CS pipe.");
                    throw new CallStateException("cs_fallback");
                }
                Rlog.i(LOG_TAG, "processCode: CS is out of service, sending ussd string '" + Rlog.pii(LOG_TAG, this.mPoundString) + "' over IMS pipe.");
                sendUssd(this.mPoundString);
            }
        } catch (RuntimeException e) {
            e.printStackTrace();
            Rlog.d(LOG_TAG, "procesCode: mState = FAILED");
            this.mState = MmiCode.State.FAILED;
            this.mMessage = this.mContext.getText(R.string.keyboardview_keycode_delete);
            checkProcessTime();
            this.mPhone.onMMIDone(this);
        }
    }

    protected CharSequence serviceClassToCFString(int i) {
        Rlog.d(LOG_TAG, "serviceClassToCFString, serviceClass = " + i);
        return (i == 256 || i == 512) ? this.mContext.getText(134545476) : super.serviceClassToCFString(i);
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("MtkImsPhoneMmiCode {");
        sb.append("State=" + getState());
        if (this.mAction != null) {
            sb.append(" action=" + this.mAction);
        }
        if (this.mSc != null) {
            sb.append(" sc=" + this.mSc);
        }
        if (this.mSia != null) {
            sb.append(" sia=" + MtkSuppServHelper.encryptString(this.mSia));
        }
        if (this.mSib != null) {
            sb.append(" sib=" + MtkSuppServHelper.encryptString(this.mSib));
        }
        if (this.mSic != null) {
            sb.append(" sic=" + MtkSuppServHelper.encryptString(this.mSic));
        }
        if (this.mPoundString != null) {
            sb.append(" poundString=" + Rlog.pii(LOG_TAG, this.mPoundString));
        }
        if (this.mDialingNumber != null) {
            sb.append(" dialingNumber=" + Rlog.pii(LOG_TAG, this.mDialingNumber));
        }
        if (this.mPwd != null) {
            sb.append(" pwd=" + Rlog.pii(LOG_TAG, this.mPwd));
        }
        if (this.mCallbackReceiver != null) {
            sb.append(" hasReceiver");
        }
        sb.append("}");
        return sb.toString();
    }
}
