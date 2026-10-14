package com.mediatek.internal.telephony.gsm;

import android.R;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Message;
import android.os.ResultReceiver;
import android.os.SystemProperties;
import android.telephony.PhoneNumberUtils;
import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import android.text.SpannableStringBuilder;
import android.text.TextUtils;
import com.android.internal.telephony.CallForwardInfo;
import com.android.internal.telephony.CallStateException;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.MmiCode;
import com.android.internal.telephony.gsm.GsmMmiCode;
import com.android.internal.telephony.gsm.GsmMmiCodeInjector;
import com.android.internal.telephony.uicc.IccCardApplicationStatus;
import com.android.internal.telephony.uicc.UiccCardApplication;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import com.mediatek.internal.telephony.MtkSSRequestDecisionMaker;
import com.mediatek.internal.telephony.MtkSuppServHelper;
import com.mediatek.internal.telephony.MtkSuppServManager;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import java.util.regex.Matcher;
import vendor.xiaomi.hardware.misys.V1_0.IResultValue;

/* JADX INFO: loaded from: classes.dex */
public final class MtkGsmMmiCode extends GsmMmiCode {
    static final String CNAPMmi = "Calling Name Presentation";
    static final int EVENT_GET_COLP_COMPLETE = 9;
    static final int EVENT_GET_COLR_COMPLETE = 8;
    static final String LOG_TAG = "MtkGsmMmiCode";
    static final String SC_CNAP = "300";
    static final String SC_COLP = "76";
    static final String SC_COLR = "77";
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER);
    private MtkSSRequestDecisionMaker mMtkSSReqDecisionMaker;
    MtkGsmCdmaPhone mPhone;
    private boolean mUserInitiatedMMI;

    public MtkGsmMmiCode(MtkGsmCdmaPhone mtkGsmCdmaPhone, UiccCardApplication uiccCardApplication) {
        super(mtkGsmCdmaPhone, uiccCardApplication);
        this.mUserInitiatedMMI = false;
        this.mPhone = mtkGsmCdmaPhone;
        this.mMtkSSReqDecisionMaker = mtkGsmCdmaPhone.getMtkSSRequestDecisionMaker();
    }

    private CharSequence createQueryCnapResultMessage(int i, int i2) {
        Rlog.d(LOG_TAG, "createQueryCnapResultMessage, status = " + i + ", provisioned = " + i2);
        StringBuilder sb = new StringBuilder();
        if (i2 == 0 || i2 != 1) {
            sb.append(this.mContext.getText(R.string.permdesc_statusBar));
        } else if (i == 0) {
            sb.append(this.mContext.getText(R.string.permdesc_startForegroundServicesFromBackground));
        } else if (i == 1) {
            sb.append(this.mContext.getText(R.string.permdesc_startReviewPermissionDecisions));
        }
        Rlog.d(LOG_TAG, "CNAP_sb = " + ((Object) sb));
        return sb;
    }

    public static boolean isUtMmiCode(String str, MtkGsmCdmaPhone mtkGsmCdmaPhone, UiccCardApplication uiccCardApplication) {
        MtkGsmMmiCode mtkGsmMmiCodeNewFromDialString = newFromDialString(str, mtkGsmCdmaPhone, uiccCardApplication);
        return (mtkGsmMmiCodeNewFromDialString == null || mtkGsmMmiCodeNewFromDialString.isTemporaryModeCLIR() || mtkGsmMmiCodeNewFromDialString.isShortCode() || mtkGsmMmiCodeNewFromDialString.mDialingNumber != null || mtkGsmMmiCodeNewFromDialString.mSc == null || (!mtkGsmMmiCodeNewFromDialString.mSc.equals("30") && !mtkGsmMmiCodeNewFromDialString.mSc.equals("31") && !mtkGsmMmiCodeNewFromDialString.mSc.equals(SC_COLP) && !mtkGsmMmiCodeNewFromDialString.mSc.equals(SC_COLR) && !isServiceCodeCallForwarding(mtkGsmMmiCodeNewFromDialString.mSc) && !isServiceCodeCallBarring(mtkGsmMmiCodeNewFromDialString.mSc) && !mtkGsmMmiCodeNewFromDialString.mSc.equals("43"))) ? false : true;
    }

    public static MtkGsmMmiCode newFromDialString(String str, MtkGsmCdmaPhone mtkGsmCdmaPhone, UiccCardApplication uiccCardApplication) {
        return newFromDialString(str, mtkGsmCdmaPhone, uiccCardApplication, null);
    }

    public static MtkGsmMmiCode newFromDialString(String str, MtkGsmCdmaPhone mtkGsmCdmaPhone, UiccCardApplication uiccCardApplication, ResultReceiver resultReceiver) {
        MtkGsmMmiCode mtkGsmMmiCode = null;
        Rlog.d(LOG_TAG, "newFromDialString, dialstring = " + MtkSuppServHelper.encryptString(str));
        if (GsmMmiCodeInjector.isVodafoneFACs(mtkGsmCdmaPhone, str)) {
            Rlog.d(LOG_TAG, "dialString is FACs, GsmMmiCode return null");
            return null;
        }
        String strExtractNetworkPortionAlt = PhoneNumberUtils.extractNetworkPortionAlt(PhoneNumberUtils.stripSeparators(str));
        if (!(strExtractNetworkPortionAlt.startsWith("*") || strExtractNetworkPortionAlt.startsWith("#") || strExtractNetworkPortionAlt.endsWith("#")) && strExtractNetworkPortionAlt.length() > 2) {
            Rlog.d(LOG_TAG, "Not belong to MMI format.");
            return null;
        }
        if (mtkGsmCdmaPhone.getServiceState().getVoiceRoaming() && mtkGsmCdmaPhone.supportsConversionOfCdmaCallerIdMmiCodesWhileRoaming()) {
            str = convertCdmaMmiCodesTo3gppMmiCodes(str);
        }
        Matcher matcher = sPatternSuppService.matcher(str);
        if (matcher.matches()) {
            mtkGsmMmiCode = new MtkGsmMmiCode(mtkGsmCdmaPhone, uiccCardApplication);
            mtkGsmMmiCode.mPoundString = makeEmptyNull(matcher.group(1));
            mtkGsmMmiCode.mAction = makeEmptyNull(matcher.group(2));
            mtkGsmMmiCode.mSc = makeEmptyNull(matcher.group(3));
            mtkGsmMmiCode.mSia = makeEmptyNull(matcher.group(5));
            mtkGsmMmiCode.mSib = makeEmptyNull(matcher.group(7));
            mtkGsmMmiCode.mSic = makeEmptyNull(matcher.group(9));
            mtkGsmMmiCode.mPwd = makeEmptyNull(matcher.group(11));
            mtkGsmMmiCode.mDialingNumber = makeEmptyNull(matcher.group(12));
            if (mtkGsmMmiCode.mDialingNumber != null && mtkGsmMmiCode.mDialingNumber.endsWith("#") && str.endsWith("#")) {
                mtkGsmMmiCode = new MtkGsmMmiCode(mtkGsmCdmaPhone, uiccCardApplication);
                mtkGsmMmiCode.mPoundString = str;
            } else if (mtkGsmMmiCode.isFacToDial()) {
                mtkGsmMmiCode = null;
            }
        } else if (str.endsWith("#")) {
            mtkGsmMmiCode = new MtkGsmMmiCode(mtkGsmCdmaPhone, uiccCardApplication);
            mtkGsmMmiCode.mPoundString = str;
        } else if (isTwoDigitShortCode(mtkGsmCdmaPhone.getContext(), mtkGsmCdmaPhone.getSubId(), str)) {
            mtkGsmMmiCode = null;
        } else if (isShortCode(str, mtkGsmCdmaPhone)) {
            mtkGsmMmiCode = new MtkGsmMmiCode(mtkGsmCdmaPhone, uiccCardApplication);
            mtkGsmMmiCode.mDialingNumber = str;
        }
        if (mtkGsmMmiCode != null) {
            mtkGsmMmiCode.mCallbackReceiver = resultReceiver;
        }
        return mtkGsmMmiCode;
    }

    public static MtkGsmMmiCode newFromUssdUserInput(String str, MtkGsmCdmaPhone mtkGsmCdmaPhone, UiccCardApplication uiccCardApplication) {
        MtkGsmMmiCode mtkGsmMmiCode = new MtkGsmMmiCode(mtkGsmCdmaPhone, uiccCardApplication);
        mtkGsmMmiCode.mMessage = str;
        mtkGsmMmiCode.mState = MmiCode.State.PENDING;
        mtkGsmMmiCode.mIsPendingUSSD = true;
        return mtkGsmMmiCode;
    }

    public static MtkGsmMmiCode newNetworkInitiatedUssdError(String str, boolean z, MtkGsmCdmaPhone mtkGsmCdmaPhone, UiccCardApplication uiccCardApplication) {
        MtkGsmMmiCode mtkGsmMmiCode = new MtkGsmMmiCode(mtkGsmCdmaPhone, uiccCardApplication);
        if (str == null || str.length() <= 0) {
            mtkGsmMmiCode.mMessage = mtkGsmMmiCode.mContext.getText(R.string.keyboardview_keycode_delete);
        } else {
            mtkGsmMmiCode.mMessage = str;
        }
        mtkGsmMmiCode.mIsUssdRequest = z;
        mtkGsmMmiCode.mState = MmiCode.State.FAILED;
        return mtkGsmMmiCode;
    }

    private void onGetColpComplete(AsyncResult asyncResult) {
        StringBuilder sb = new StringBuilder(getScString());
        sb.append("\n");
        if (asyncResult.exception != null) {
            this.mState = MmiCode.State.FAILED;
            sb.append(getErrorMessage(asyncResult));
        } else {
            int i = ((int[]) asyncResult.result)[1];
            if (i == 0) {
                sb.append(this.mContext.getText(R.string.permdesc_statusBar));
                this.mState = MmiCode.State.COMPLETE;
            } else if (i == 1) {
                sb.append(this.mContext.getText(134545420));
                this.mState = MmiCode.State.COMPLETE;
            } else if (i == 2) {
                sb.append(this.mContext.getText(134545421));
                this.mState = MmiCode.State.COMPLETE;
            }
        }
        this.mMessage = sb;
        this.mPhone.onMMIDone(this);
    }

    private void onGetColrComplete(AsyncResult asyncResult) {
        StringBuilder sb = new StringBuilder(getScString());
        sb.append("\n");
        if (asyncResult.exception != null) {
            this.mState = MmiCode.State.FAILED;
            sb.append(getErrorMessage(asyncResult));
        } else {
            int i = ((int[]) asyncResult.result)[0];
            if (i == 0) {
                sb.append(this.mContext.getText(R.string.permdesc_statusBar));
                this.mState = MmiCode.State.COMPLETE;
            } else if (i == 1) {
                sb.append(this.mContext.getText(134545420));
                this.mState = MmiCode.State.COMPLETE;
            } else if (i == 2) {
                sb.append(this.mContext.getText(R.string.keyboardview_keycode_delete));
                this.mState = MmiCode.State.FAILED;
            }
        }
        this.mMessage = sb;
        this.mPhone.onMMIDone(this);
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

    protected CharSequence createQueryCallBarringResultMessage(int i) {
        StringBuilder sb = new StringBuilder(this.mContext.getText(R.string.permdesc_startViewAppFeatures));
        for (int i2 = 1; i2 <= 512; i2 <<= 1) {
            if ((i2 & i) != 0) {
                sb.append("\n");
                sb.append(serviceClassToCFString(i2 & i));
            }
        }
        return sb;
    }

    protected CharSequence createQueryCallWaitingResultMessage(int i) {
        StringBuilder sb = new StringBuilder(this.mContext.getText(R.string.permdesc_startViewAppFeatures));
        for (int i2 = 1; i2 <= 512; i2 <<= 1) {
            if ((i2 & i) != 0) {
                sb.append("\n");
                sb.append(serviceClassToCFString(i2 & i));
            }
        }
        return sb;
    }

    protected CharSequence getErrorMessage(AsyncResult asyncResult) {
        if (asyncResult.exception instanceof CommandException) {
            CommandException.Error commandError = asyncResult.exception.getCommandError();
            if (commandError == CommandException.Error.OEM_ERROR_25 || commandError == CommandException.Error.OEM_ERROR_6 || commandError == CommandException.Error.OEM_ERROR_24 || commandError == CommandException.Error.OEM_ERROR_23 || commandError == CommandException.Error.OEM_ERROR_22) {
                if (!supportMdAutoSetupIms()) {
                    return this.mContext.getText(R.string.keyboardview_keycode_delete);
                }
                Rlog.i(LOG_TAG, "getErrorMessage, OEM_ERROR");
                MtkSuppServHelper suppServHelper = MtkSuppServManager.getSuppServHelper(this.mPhone.getPhoneId());
                if (suppServHelper != null) {
                    String xCAPErrorMessageFromSysProp = suppServHelper.getXCAPErrorMessageFromSysProp(commandError);
                    return (xCAPErrorMessageFromSysProp == null || xCAPErrorMessageFromSysProp.isEmpty()) ? this.mContext.getText(R.string.keyboardview_keycode_delete) : xCAPErrorMessageFromSysProp;
                }
            } else {
                if (commandError == CommandException.Error.OEM_ERROR_5) {
                    Rlog.i(LOG_TAG, "getErrorMessage, OEM_ERROR_5 CALL_BARRED");
                    return this.mContext.getText(134545416);
                }
                if (commandError == CommandException.Error.FDN_CHECK_FAILURE) {
                    Rlog.i(LOG_TAG, "getErrorMessage, FDN_CHECK_FAILURE");
                    return this.mContext.getText(134545415);
                }
            }
        }
        return super.getErrorMessage(asyncResult);
    }

    protected CharSequence getScString() {
        return (this.mSc == null || !this.mSc.equals(SC_CNAP)) ? super.getScString() : CNAPMmi;
    }

    public boolean getUserInitiatedMMI() {
        return this.mUserInitiatedMMI;
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:596)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    void handleCLIP() {
        Rlog.d(LOG_TAG, "processCode: is CLIP");
        if (!isActivate() && !isDeactivate()) {
            if (!isInterrogate()) {
                throw new RuntimeException("Invalid or Unsupported MMI Code");
            }
            if (supportMdAutoSetupIms()) {
                this.mPhone.mMtkCi.queryCLIP(obtainMessage(5, this));
                return;
            }
            if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
                this.mMtkSSReqDecisionMaker.getCLIP(obtainMessage(5, this));
                return;
            }
            if (this.mPhone.getCsFallbackStatus() == 1) {
                this.mPhone.setCsFallbackStatus(0);
            }
            this.mPhone.mCi.queryCLIP(obtainMessage(5, this));
            return;
        }
        boolean zIsActivate = isActivate();
        if (supportMdAutoSetupIms()) {
            this.mPhone.mMtkCi.setCLIP(zIsActivate ? 1 : 0, obtainMessage(1, this));
        } else if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
            this.mMtkSSReqDecisionMaker.setCLIP(zIsActivate ? 1 : 0, obtainMessage(1, this));
        } else {
            if (this.mPhone.getCsFallbackStatus() == 1) {
                this.mPhone.setCsFallbackStatus(0);
            }
            this.mPhone.mMtkCi.setCLIP(zIsActivate ? 1 : 0, obtainMessage(1, this));
        }
    }

    void handleCLIR() {
        Rlog.d(LOG_TAG, "processCode: is CLIR");
        if (isActivate() || isDeactivate()) {
            int i = isActivate() ? 1 : 2;
            if (supportMdAutoSetupIms()) {
                this.mPhone.mCi.setCLIR(i, obtainMessage(1, this));
                return;
            }
            if (this.mPhone.isOpTbClir()) {
                this.mPhone.mCi.setCLIR(i, obtainMessage(1, this));
                return;
            }
            if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
                this.mMtkSSReqDecisionMaker.setCLIR(1, obtainMessage(1, this));
                return;
            }
            if (this.mPhone.getCsFallbackStatus() == 1) {
                this.mPhone.setCsFallbackStatus(0);
            }
            this.mPhone.mCi.setCLIR(i, obtainMessage(1, this));
            return;
        }
        if (!isInterrogate()) {
            throw new RuntimeException("Invalid or Unsupported MMI Code");
        }
        if (supportMdAutoSetupIms()) {
            this.mPhone.mCi.getCLIR(obtainMessage(2, this));
            return;
        }
        if (this.mPhone.isOpTbClir()) {
            this.mPhone.mCi.getCLIR(obtainMessage(2, this));
            return;
        }
        if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
            this.mMtkSSReqDecisionMaker.getCLIR(obtainMessage(2, this));
            return;
        }
        if (this.mPhone.getCsFallbackStatus() == 1) {
            this.mPhone.setCsFallbackStatus(0);
        }
        this.mPhone.mCi.getCLIR(obtainMessage(2, this));
    }

    void handleCNAP(String str) {
        Rlog.d(LOG_TAG, "processCode: is CNAP");
        if (!isInterrogate()) {
            throw new RuntimeException("Invalid or Unsupported MMI Code");
        }
        if (this.mPhone.getCsFallbackStatus() == 1) {
            this.mPhone.setCsFallbackStatus(0);
        }
        this.mPhone.mMtkCi.sendCNAP(str, obtainMessage(5, this));
    }

    void handleCOLP() {
        Rlog.d(LOG_TAG, "processCode: is COLP");
        if (!isInterrogate()) {
            throw new RuntimeException("Invalid or Unsupported MMI Code");
        }
        if (supportMdAutoSetupIms()) {
            this.mPhone.mMtkCi.getCOLP(obtainMessage(9, this));
            return;
        }
        if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
            this.mMtkSSReqDecisionMaker.getCOLP(obtainMessage(9, this));
            return;
        }
        if (this.mPhone.getCsFallbackStatus() == 1) {
            this.mPhone.setCsFallbackStatus(0);
        }
        this.mPhone.mMtkCi.getCOLP(obtainMessage(9, this));
    }

    void handleCOLR() {
        Rlog.d(LOG_TAG, "processCode: is COLR");
        if (!isInterrogate()) {
            throw new RuntimeException("Invalid or Unsupported MMI Code");
        }
        if (supportMdAutoSetupIms()) {
            this.mPhone.mMtkCi.getCOLR(obtainMessage(8, this));
            return;
        }
        if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
            this.mMtkSSReqDecisionMaker.getCOLR(obtainMessage(8, this));
            return;
        }
        if (this.mPhone.getCsFallbackStatus() == 1) {
            this.mPhone.setCsFallbackStatus(0);
        }
        this.mPhone.mMtkCi.getCOLR(obtainMessage(8, this));
    }

    void handleCW() {
        Rlog.d(LOG_TAG, "processCode: is CW");
        int iSiToServiceClass = siToServiceClass(this.mSia);
        Rlog.d(LOG_TAG, "CW serviceClass = " + iSiToServiceClass);
        if (supportMdAutoSetupIms()) {
            if (isActivate() || isDeactivate()) {
                this.mPhone.mCi.setCallWaiting(isActivate(), iSiToServiceClass, obtainMessage(1, this));
                return;
            } else {
                if (!isInterrogate()) {
                    throw new RuntimeException("Invalid or Unsupported MMI Code");
                }
                this.mPhone.mCi.queryCallWaiting(iSiToServiceClass, obtainMessage(5, this));
                return;
            }
        }
        int tbcwMode = this.mPhone.getTbcwMode();
        if (!isActivate() && !isDeactivate()) {
            if (!isInterrogate()) {
                throw new RuntimeException("Invalid or Unsupported MMI Code");
            }
            if (tbcwMode == 1 && !this.mPhone.isOpNwCW()) {
                this.mPhone.getTerminalBasedCallWaiting(obtainMessage(5, this));
                return;
            }
            if (tbcwMode == 2 || tbcwMode == 3) {
                if (this.mPhone.getCsFallbackStatus() == 1) {
                    this.mPhone.setCsFallbackStatus(0);
                }
                this.mPhone.mCi.queryCallWaiting(iSiToServiceClass, obtainMessage(5, this));
                return;
            } else {
                Rlog.d(LOG_TAG, "processCode getCallWaiting");
                if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
                    this.mMtkSSReqDecisionMaker.queryCallWaiting(iSiToServiceClass, obtainMessage(5, this));
                    return;
                } else {
                    this.mPhone.mCi.queryCallWaiting(iSiToServiceClass, obtainMessage(5, this));
                    return;
                }
            }
        }
        if (tbcwMode != 1 || this.mPhone.isOpNwCW()) {
            if (tbcwMode == 2 || tbcwMode == 3) {
                if (this.mPhone.getCsFallbackStatus() == 1) {
                    this.mPhone.setCsFallbackStatus(0);
                }
                this.mPhone.mCi.setCallWaiting(isActivate(), iSiToServiceClass, obtainMessage(1, isActivate() ? 1 : 0, -1, this));
                return;
            } else {
                Rlog.d(LOG_TAG, "processCode setCallWaiting");
                if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
                    this.mMtkSSReqDecisionMaker.setCallWaiting(isActivate(), iSiToServiceClass, obtainMessage(1, this));
                    return;
                } else {
                    this.mPhone.mCi.setCallWaiting(isActivate(), iSiToServiceClass, obtainMessage(1, this));
                    return;
                }
            }
        }
        String telephonyProperty = TelephonyManager.getTelephonyProperty(this.mPhone.getPhoneId(), "persist.vendor.radio.terminal-based.cw", "disabled_tbcw");
        Rlog.d(LOG_TAG, "setTerminal-based CallWaiting(): tbcwStatus = " + telephonyProperty + ", enable = " + isActivate());
        if (!telephonyProperty.equals("disabled_tbcw")) {
            this.mPhone.setTerminalBasedCallWaiting(isActivate(), obtainMessage(1, this));
        } else {
            Rlog.d(LOG_TAG, "setCallWaiting() by NW.");
            this.mPhone.mCi.setCallWaiting(isActivate(), iSiToServiceClass, obtainMessage(1, this));
        }
    }

    void handleCallBarring() {
        Rlog.d(LOG_TAG, "processCode: is CB");
        String str = this.mSia;
        int iSiToServiceClass = siToServiceClass(this.mSib);
        String strScToBarringFacility = scToBarringFacility(this.mSc);
        if (isInterrogate()) {
            if (supportMdAutoSetupIms()) {
                this.mPhone.mCi.queryFacilityLock(strScToBarringFacility, str, iSiToServiceClass, obtainMessage(5, this));
                return;
            }
            if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
                this.mMtkSSReqDecisionMaker.queryFacilityLock(strScToBarringFacility, str, iSiToServiceClass, obtainMessage(5, this));
                return;
            }
            if (this.mPhone.getCsFallbackStatus() == 1) {
                this.mPhone.setCsFallbackStatus(0);
            }
            if (this.mPhone.getUiccCardApplication() != null) {
                this.mPhone.mCi.queryFacilityLockForApp(strScToBarringFacility, str, iSiToServiceClass, this.mPhone.getUiccCardApplication().getAid(), obtainMessage(5, this));
                return;
            }
            Rlog.d(LOG_TAG, "handleCallBarring: getUiccCardApplication() == null");
            Message messageObtainMessage = obtainMessage(5, this);
            AsyncResult.forMessage(messageObtainMessage, (Object) null, new CommandException(CommandException.Error.GENERIC_FAILURE));
            messageObtainMessage.sendToTarget();
            return;
        }
        if (!isActivate() && !isDeactivate()) {
            throw new RuntimeException("Invalid or Unsupported MMI Code");
        }
        if (supportMdAutoSetupIms()) {
            this.mPhone.mCi.setFacilityLock(strScToBarringFacility, isActivate(), str, iSiToServiceClass, obtainMessage(1, this));
            return;
        }
        if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
            this.mMtkSSReqDecisionMaker.setFacilityLock(strScToBarringFacility, isActivate(), str, iSiToServiceClass, obtainMessage(1, this));
            return;
        }
        if (this.mPhone.getCsFallbackStatus() == 1) {
            this.mPhone.setCsFallbackStatus(0);
        }
        if (this.mPhone.getUiccCardApplication() != null) {
            this.mPhone.mCi.setFacilityLockForApp(strScToBarringFacility, isActivate(), str, iSiToServiceClass, this.mPhone.getUiccCardApplication().getAid(), obtainMessage(1, this));
            return;
        }
        Rlog.d(LOG_TAG, "handleCallBarring: getUiccCardApplication() == null");
        Message messageObtainMessage2 = obtainMessage(1, this);
        AsyncResult.forMessage(messageObtainMessage2, (Object) null, new CommandException(CommandException.Error.GENERIC_FAILURE));
        messageObtainMessage2.sendToTarget();
    }

    void handleCallForward() {
        int i;
        Rlog.d(LOG_TAG, "processCode: is CF");
        String str = this.mSia;
        int iSiToServiceClass = siToServiceClass(this.mSib);
        int iScToCallForwardReason = scToCallForwardReason(this.mSc);
        int iSiToTime = siToTime(this.mSic);
        if (isInterrogate()) {
            if (supportMdAutoSetupIms()) {
                this.mPhone.mCi.queryCallForwardStatus(iScToCallForwardReason, iSiToServiceClass, str, obtainMessage(3, this));
                return;
            }
            if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
                this.mMtkSSReqDecisionMaker.queryCallForwardStatus(iScToCallForwardReason, iSiToServiceClass, str, obtainMessage(3, this));
                return;
            }
            if (this.mPhone.getCsFallbackStatus() == 1) {
                this.mPhone.setCsFallbackStatus(0);
            }
            this.mPhone.mCi.queryCallForwardStatus(iScToCallForwardReason, iSiToServiceClass, str, obtainMessage(3, this));
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
        boolean zIsVoiceUnconditionalForwarding = isVoiceUnconditionalForwarding(iScToCallForwardReason, iSiToServiceClass);
        int i2 = (i == 1 || i == 3) ? 1 : 0;
        Rlog.d(LOG_TAG, "is CF setCallForward");
        if (supportMdAutoSetupIms()) {
            this.mPhone.mCi.setCallForward(i, iScToCallForwardReason, iSiToServiceClass, str, iSiToTime, obtainMessage(6, zIsVoiceUnconditionalForwarding ? 1 : 0, i2, this));
            return;
        }
        if (this.mPhone.getCsFallbackStatus() == 0 && this.mPhone.isGsmUtSupport()) {
            this.mMtkSSReqDecisionMaker.setCallForward(i, iScToCallForwardReason, iSiToServiceClass, str, iSiToTime, obtainMessage(6, zIsVoiceUnconditionalForwarding ? 1 : 0, i2, this));
            return;
        }
        if (this.mPhone.getCsFallbackStatus() == 1) {
            this.mPhone.setCsFallbackStatus(0);
        }
        this.mPhone.mCi.setCallForward(i, iScToCallForwardReason, iSiToServiceClass, str, iSiToTime, obtainMessage(6, zIsVoiceUnconditionalForwarding ? 1 : 0, i2, this));
    }

    void handleChangeBarringPassward() {
        Rlog.d(LOG_TAG, "processCode: is Change PWD");
        String str = this.mSib;
        String str2 = this.mSic;
        if (!isActivate() && !isRegister()) {
            throw new RuntimeException("Invalid or Unsupported MMI Code");
        }
        this.mAction = "**";
        String strScToBarringFacility = this.mSia == null ? "AB" : scToBarringFacility(this.mSia);
        if (str == null || str2 == null || this.mPwd == null) {
            handlePasswordError(R.string.lockscreen_glogin_checking_password);
            return;
        }
        if (this.mPwd.length() != str2.length() || str.length() != 4 || this.mPwd.length() != 4) {
            handlePasswordError(R.string.lockscreen_glogin_checking_password);
        } else {
            if (!this.mPhone.isDuringImsCall()) {
                this.mPhone.mMtkCi.changeBarringPassword(strScToBarringFacility, str, str2, this.mPwd, obtainMessage(1, this));
                return;
            }
            Message messageObtainMessage = obtainMessage(1, this);
            AsyncResult.forMessage(messageObtainMessage, (Object) null, new CommandException(CommandException.Error.GENERIC_FAILURE));
            messageObtainMessage.sendToTarget();
        }
    }

    public void handleMessage(Message message) {
        int i = message.what;
        boolean z = false;
        if (i == 1) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            if (!supportMdAutoSetupIms() && this.mSc.equals("43") && this.mPhone.getTbcwMode() == 3 && asyncResult.exception == null) {
                this.mPhone.setTerminalBasedCallWaiting(message.arg1 == 1, null);
            }
            onSetComplete(message, asyncResult);
            return;
        }
        if (i != 5) {
            if (i != 6) {
                if (i == 8) {
                    onGetColrComplete((AsyncResult) message.obj);
                    return;
                } else if (i != 9) {
                    super.handleMessage(message);
                    return;
                } else {
                    onGetColpComplete((AsyncResult) message.obj);
                    return;
                }
            }
            AsyncResult asyncResult2 = (AsyncResult) message.obj;
            if (asyncResult2.exception == null && message.arg1 == 1) {
                boolean z2 = message.arg2 == 1;
                if (this.mIccRecords != null) {
                    this.mPhone.setVoiceCallForwardingFlag(1, z2, this.mDialingNumber);
                    this.mPhone.saveTimeSlot(null);
                }
            }
            onSetComplete(message, asyncResult2);
            return;
        }
        AsyncResult asyncResult3 = (AsyncResult) message.obj;
        if (!supportMdAutoSetupIms() && this.mSc.equals("43") && this.mPhone.getTbcwMode() == 3) {
            Rlog.d(LOG_TAG, "TBCW_WITH_CS");
            if (asyncResult3.exception == null) {
                int[] iArr = (int[]) asyncResult3.result;
                try {
                    Rlog.d(LOG_TAG, "EVENT_GET_CALL_WAITING_FOR_CS_TB cwArray[0]:cwArray[1] = " + iArr[0] + ":" + iArr[1]);
                    if (iArr[0] == 1 && (iArr[1] & 1) == 1) {
                        z = true;
                    }
                    this.mPhone.setTerminalBasedCallWaiting(z, null);
                } catch (ArrayIndexOutOfBoundsException e) {
                    Rlog.e(LOG_TAG, "EVENT_GET_CALL_WAITING_FOR_CS_TB: improper result: err =" + e.getMessage());
                }
            }
        }
        onQueryComplete(asyncResult3);
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
        if (callForwardInfoArr.length == 0) {
            sb.append(this.mContext.getText(R.string.permdesc_startForegroundServicesFromBackground));
            if (this.mIccRecords != null) {
                this.mPhone.setVoiceCallForwardingFlag(1, false, null);
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
                            if (callForwardInfoArr[i2].reason == 0 && (callForwardInfoArr[i2].serviceClass & i) == 1 && this.mIccRecords != null) {
                                this.mPhone.setVoiceCallForwardingFlag(1, callForwardInfoArr[i2].status == 1, null);
                            }
                        }
                    }
                }
            }
            sb.append((CharSequence) spannableStringBuilder);
        }
        this.mState = MmiCode.State.COMPLETE;
        this.mMessage = sb;
        Rlog.d(LOG_TAG, "onQueryCfComplete: mmi=" + this);
        this.mPhone.onMMIDone(this);
    }

    protected void onQueryComplete(AsyncResult asyncResult) {
        StringBuilder sb = new StringBuilder(getScString());
        sb.append("\n");
        if (asyncResult.exception == null) {
            int[] iArr = (int[]) asyncResult.result;
            if (iArr.length != 0 && this.mSc.equals(SC_CNAP)) {
                Rlog.d(LOG_TAG, "onQueryComplete_CNAP");
                sb.append(createQueryCnapResultMessage(iArr[0], iArr[1]));
                this.mMessage = sb;
                this.mState = MmiCode.State.COMPLETE;
                this.mPhone.onMMIDone(this);
                return;
            }
        }
        super.onQueryComplete(asyncResult);
    }

    protected void onSetComplete(Message message, AsyncResult asyncResult) {
        StringBuilder sb = new StringBuilder(getScString());
        sb.append("\n");
        if (asyncResult.exception != null) {
            this.mState = MmiCode.State.FAILED;
            if ((asyncResult.exception instanceof CommandException) && asyncResult.exception.getCommandError() == CommandException.Error.REQUEST_NOT_SUPPORTED && (this.mSc.equals("31") || this.mSc.equals("30"))) {
                sb.append(this.mContext.getText(R.string.keyboardview_keycode_delete));
                this.mMessage = sb;
                this.mPhone.onMMIDone(this);
                return;
            }
        }
        super.onSetComplete(message, asyncResult);
    }

    public void processCode() throws CallStateException {
        try {
            if (!supportMdAutoSetupIms() && (this.mPhone.isDuringVoLteCall() || this.mPhone.isDuringImsEccCall())) {
                Rlog.d(LOG_TAG, "Stop CS MMI during IMS Ecc Call or VoLTE call");
                if (this.mPhone.getCsFallbackStatus() == 1) {
                    this.mPhone.setCsFallbackStatus(0);
                }
                StringBuilder sb = new StringBuilder(getScString());
                sb.append("\n");
                this.mState = MmiCode.State.FAILED;
                sb.append(this.mContext.getText(R.string.keyboardview_keycode_delete));
                this.mMessage = sb;
                this.mPhone.onMMIDone(this);
                return;
            }
            if (isShortCode()) {
                Rlog.d(LOG_TAG, "isShortCode");
                sendUssd(this.mDialingNumber);
            } else if (this.mDialingNumber != null) {
                Rlog.w(LOG_TAG, "Special USSD Support:" + this.mPoundString + this.mDialingNumber);
                StringBuilder sb2 = new StringBuilder();
                sb2.append(this.mPoundString);
                sb2.append(this.mDialingNumber);
                sendUssd(sb2.toString());
            } else if (this.mSc != null && this.mSc.equals(SC_CNAP) && isInterrogate()) {
                if (this.mPoundString != null) {
                    handleCNAP(this.mPoundString);
                }
            } else if (this.mSc != null && this.mSc.equals("30")) {
                handleCLIP();
            } else if (this.mSc != null && this.mSc.equals("31")) {
                handleCLIR();
            } else if (this.mSc != null && this.mSc.equals(SC_COLP)) {
                handleCOLP();
            } else if (this.mSc != null && this.mSc.equals(SC_COLR)) {
                handleCOLR();
            } else if (isServiceCodeCallForwarding(this.mSc)) {
                handleCallForward();
            } else if (isServiceCodeCallBarring(this.mSc)) {
                handleCallBarring();
            } else if (this.mSc != null && this.mSc.equals("03")) {
                handleChangeBarringPassward();
            } else if (this.mSc != null && this.mSc.equals("43")) {
                handleCW();
            } else if (isPinPukCommand()) {
                String str = this.mSia;
                String str2 = this.mSib;
                int length = str2.length();
                if (!isRegister()) {
                    throw new RuntimeException("Ivalid register/action=" + this.mAction);
                }
                if (!str2.equals(this.mSic)) {
                    handlePasswordError(R.string.keyboard_shortcut_group_applications_browser);
                } else if (length < 4 || length > 8) {
                    handlePasswordError(R.string.face_error_no_space);
                } else if (this.mSc.equals("04") && this.mUiccApplication != null && this.mUiccApplication.getState() == IccCardApplicationStatus.AppState.APPSTATE_PUK) {
                    handlePasswordError(R.string.keyguard_accessibility_password_unlock);
                } else {
                    if (this.mUiccApplication == null) {
                        throw new RuntimeException("No application mUiccApplicaiton is null");
                    }
                    Rlog.d(LOG_TAG, "process mmi service code using UiccApp sc=" + this.mSc);
                    if (this.mSc.equals("04")) {
                        this.mUiccApplication.changeIccLockPassword(str, str2, obtainMessage(1, this));
                    } else if (this.mSc.equals("042")) {
                        this.mUiccApplication.changeIccFdnPassword(str, str2, obtainMessage(1, this));
                    } else if (this.mSc.equals("05")) {
                        this.mUiccApplication.supplyPuk(str, str2, obtainMessage(1, this));
                    } else {
                        if (!this.mSc.equals("052")) {
                            throw new RuntimeException("uicc unsupported service code=" + this.mSc);
                        }
                        this.mUiccApplication.supplyPuk2(str, str2, obtainMessage(1, this));
                    }
                }
            } else {
                if (this.mPoundString == null) {
                    throw new RuntimeException("Invalid or Unsupported MMI Code");
                }
                if (this.mPhone.getCsFallbackStatus() == 1) {
                    this.mPhone.setCsFallbackStatus(0);
                }
                sendUssd(this.mPoundString);
            }
        } catch (RuntimeException e) {
            this.mState = MmiCode.State.FAILED;
            e.printStackTrace();
            Rlog.d(LOG_TAG, "exc.toString() = " + e.toString());
            Rlog.d(LOG_TAG, "procesCode: mState = FAILED");
            this.mMessage = this.mContext.getText(R.string.keyboardview_keycode_delete);
            this.mPhone.onMMIDone(this);
        }
    }

    protected CharSequence serviceClassToCFString(int i) {
        Rlog.d(LOG_TAG, "serviceClassToCFString, serviceClass = " + i);
        return (i == 256 || i == 512) ? this.mContext.getText(134545476) : super.serviceClassToCFString(i);
    }

    public void setUserInitiatedMMI(boolean z) {
        this.mUserInitiatedMMI = z;
    }
}
