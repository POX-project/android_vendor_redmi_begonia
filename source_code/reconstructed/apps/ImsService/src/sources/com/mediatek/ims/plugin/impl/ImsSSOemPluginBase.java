package com.mediatek.ims.plugin.impl;

import android.content.Context;
import android.hardware.radio.V1_0.LastCallFailCause;
import android.os.SystemProperties;
import android.telephony.ims.ImsReasonInfo;
import android.util.Log;
import com.android.internal.telephony.CommandException;
import com.mediatek.ims.plugin.ImsSSOemPlugin;

/* JADX INFO: loaded from: classes.dex */
public class ImsSSOemPluginBase implements ImsSSOemPlugin {
    private static final boolean DBG = true;
    public static final String ERROR_MSG_PROP_PREFIX = "vendor.gsm.radio.ss.errormsg.";
    private static final String TAG = "ImsSSOemPluginBase";
    private Context mContext;

    /* JADX INFO: renamed from: com.mediatek.ims.plugin.impl.ImsSSOemPluginBase$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$android$internal$telephony$CommandException$Error;

        static {
            int[] iArr = new int[CommandException.Error.values().length];
            $SwitchMap$com$android$internal$telephony$CommandException$Error = iArr;
            try {
                iArr[CommandException.Error.OEM_ERROR_25.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_6.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_24.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_23.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$CommandException$Error[CommandException.Error.OEM_ERROR_22.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
        }
    }

    public ImsSSOemPluginBase(Context context) {
        this.mContext = context;
    }

    @Override // com.mediatek.ims.plugin.ImsSSOemPlugin
    public ImsReasonInfo commandExceptionToReason(CommandException commandException, int i) {
        CommandException.Error commandError = commandException.getCommandError();
        Log.d(TAG, "commandException: " + commandError);
        if (commandError == CommandException.Error.OEM_ERROR_2) {
            return new ImsReasonInfo(LastCallFailCause.OEM_CAUSE_6, 0);
        }
        if (commandError == CommandException.Error.OEM_ERROR_3) {
            return new ImsReasonInfo(LastCallFailCause.OEM_CAUSE_7, 0);
        }
        if (commandError == CommandException.Error.OEM_ERROR_4) {
            return new ImsReasonInfo(LastCallFailCause.OEM_CAUSE_8, 0);
        }
        if (commandError == CommandException.Error.OEM_ERROR_25) {
            return new ImsReasonInfo(LastCallFailCause.OEM_CAUSE_9, 0, getXCAPErrorMessageFromSysProp(CommandException.Error.OEM_ERROR_25, i));
        }
        if (commandError == CommandException.Error.OEM_ERROR_7) {
            return new ImsReasonInfo(LastCallFailCause.OEM_CAUSE_10, 0);
        }
        if (commandError == CommandException.Error.OEM_ERROR_6) {
            return new ImsReasonInfo(61456, 0, getXCAPErrorMessageFromSysProp(CommandException.Error.OEM_ERROR_6, i));
        }
        if (commandError == CommandException.Error.OEM_ERROR_24) {
            return new ImsReasonInfo(61457, 0, getXCAPErrorMessageFromSysProp(CommandException.Error.OEM_ERROR_24, i));
        }
        if (commandError == CommandException.Error.OEM_ERROR_23) {
            return new ImsReasonInfo(61458, 0, getXCAPErrorMessageFromSysProp(CommandException.Error.OEM_ERROR_23, i));
        }
        if (commandError == CommandException.Error.OEM_ERROR_22) {
            return new ImsReasonInfo(61459, 0, getXCAPErrorMessageFromSysProp(CommandException.Error.OEM_ERROR_22, i));
        }
        if (commandError == CommandException.Error.REQUEST_NOT_SUPPORTED) {
            return new ImsReasonInfo(801, 0);
        }
        if (commandError == CommandException.Error.RADIO_NOT_AVAILABLE) {
            return new ImsReasonInfo(802, 0);
        }
        if (commandError == CommandException.Error.PASSWORD_INCORRECT) {
            return new ImsReasonInfo(821, 0);
        }
        return commandError == CommandException.Error.FDN_CHECK_FAILURE ? new ImsReasonInfo(LastCallFailCause.FDN_BLOCKED, 0) : new ImsReasonInfo(804, 0);
    }

    @Override // com.mediatek.ims.plugin.ImsSSOemPlugin
    public int getVolteSubDisableConstant() {
        return 2;
    }

    @Override // com.mediatek.ims.plugin.ImsSSOemPlugin
    public int getVolteSubEnableConstant() {
        return 1;
    }

    @Override // com.mediatek.ims.plugin.ImsSSOemPlugin
    public int getVolteSubUnknownConstant() {
        return 0;
    }

    @Override // com.mediatek.ims.plugin.ImsSSOemPlugin
    public String getVolteSubscriptionKey() {
        return "volte_subscription";
    }

    @Override // com.mediatek.ims.plugin.ImsSSOemPlugin
    public String getXCAPErrorMessageFromSysProp(CommandException.Error error, int i) {
        String str;
        String str2 = ERROR_MSG_PROP_PREFIX + i;
        String str3 = "";
        int i2 = 0;
        String str4 = SystemProperties.get(str2 + ".0", "");
        while (!str4.equals("")) {
            str3 = str3 + str4;
            i2++;
            str4 = SystemProperties.get(str2 + "." + i2, "");
        }
        Log.d(TAG, "fullErrorMsg: " + str3);
        int i3 = AnonymousClass1.$SwitchMap$com$android$internal$telephony$CommandException$Error[error.ordinal()];
        if (i3 == 1) {
            str = "409";
        } else if (i3 == 2) {
            str = "412";
        } else if (i3 == 3) {
            str = "415";
        } else if (i3 == 4) {
            str = "500";
        } else {
            if (i3 != 5) {
                Log.d(TAG, "errorMsg: " + ((String) null));
                return null;
            }
            str = "503";
        }
        if (!str3.startsWith(str)) {
            Log.d(TAG, "errorMsg: " + ((String) null));
            return null;
        }
        String strSubstring = str3.substring(str.length() + 1);
        Log.d(TAG, "errorMsg: " + strSubstring);
        return strSubstring;
    }

    @Override // com.mediatek.ims.plugin.ImsSSOemPlugin
    public String getXcapQueryCarrierConfigKey() {
        return "mtk_carrier_ss_xcap_query";
    }
}
