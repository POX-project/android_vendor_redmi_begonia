package com.mediatek.engineermode.ims;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.RadioButton;
import android.widget.TextView;
import android.widget.Toast;
import com.android.ims.ImsManager;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import vendor.mediatek.hardware.engineermode.V1_3.IEmd;

/* JADX INFO: loaded from: classes2.dex */
public class ImsActivity extends Activity implements View.OnClickListener, AdapterView.OnItemClickListener {
    private static final int DISABLE_MODE_ADD_RULE_DEACTIVATED_TAG = 2;
    private static final int DISABLE_MODE_DELETE_RULE = 1;
    private static final String DISABLE_VOLTE_HD_CALL = "Disable VoLTE HD call";
    private static final String ENABLE_VOLTE_HD_CALL = "Enable VoLTE HD call";
    private static final int IMS_MODE_DISABLED = 0;
    private static final int IMS_MODE_ENABLED = 1;
    private static final String IMS_OVER_SGS_PREFERE_92MODEM = "ims_over_sgs_prefere_92modem";
    private static final String IMS_SIGNAL_DEFAULT = "5";
    private static final String IMS_SIGNAL_VALUE = "5";
    private static final String IMS_VOLTE_SETTING_SHAREPRE = "telephony_ims_volte_settings";
    private static final String MODE_SS_CS = "Prefer CS";
    private static final String MODE_SS_XCAP = "Prefer XCAP";
    private static final int MSG_GET_VDP = 5;
    private static final int MSG_IMS_OVER_SGS_DISABLE = 49;
    private static final int MSG_IMS_OVER_SGS_ENABLE = 48;
    private static final int MSG_QUERY_IMS_OVER_SGS_MODEM_90 = 32;
    private static final int MSG_QUERY_IMS_OVER_SGS_MODEM_91 = 33;
    private static final int MSG_QUERY_IMS_OVER_SGS_MODEM_92 = 34;
    private static final int MSG_QUERY_IMS_OVER_SGS_MODEM_93 = 35;
    private static final int MSG_SET_IMS_MODE = 6;
    private static final int MSG_SET_IMS_OVER_SGS_MODEM_90 = 16;
    private static final int MSG_SET_IMS_OVER_SGS_MODEM_91 = 17;
    private static final int MSG_SET_IMS_OVER_SGS_MODEM_92 = 18;
    private static final int MSG_SET_IMS_OVER_SGS_MODEM_93 = 19;
    private static final int MSG_SET_IMS_SIGNAL = 1;
    private static final int MSG_SET_OPERATOR_CODE = 0;
    private static final int MSG_SET_PRECONDITION = 2;
    private static final int MSG_SET_VDP = 4;
    private static final int MSG_SET_VOLTE_SETTING = 3;
    private static final String OPERATOR_CODE_DEFAULT = "0";
    private static final String OPERATOR_CODE_VALUE = "16386";
    private static final String PRECONDITION_DEFAULT = "1";
    private static final String PRECONDITION_VALUE = "0";
    private static final String PROP_DYNAMIC_SBP = "persist.vendor.radio.mtk_dsbp_support";
    private static final String PROP_IMS_MODE = "persist.vendor.radio.imstestmode";
    private static final String PROP_SMS_OVER_IMS_TEST_MODE = "persist.vendor.radio.smsformat";
    private static final String PROP_SS_CFNUM = "persist.vendor.radio.xcap.cfn";
    private static final String PROP_SS_DISABLE_METHOD = "persist.vendor.radio.ss.xrdm";
    private static final String PROP_SS_MODE = "persist.vendor.radio.ss.mode";
    private static final String SET_IMS_SIGNAL = "ims_signaling_qci";
    private static final String SET_OPERATOR_CODE = "operator_code";
    private static final String SET_PRECONDITION = "UA_call_precondition";
    private static final String SMS_FORMAT_3GPP = "3gpp";
    private static final String SMS_FORMAT_3GPP2 = "3gpp2";
    private static final String SMS_FORMAT_NONE = "none";
    private static final String TAG = "Ims/ImsActivity";
    private static final String TYPE_IP = "IP";
    private static final String TYPE_IPV4V6 = "IPV4V6";
    private static final String TYPE_IPV6 = "IPV6";
    private Button mButtonSetDynamicSbp;
    private Button mButtonSetImsFormat;
    private Button mButtonSetImsMode;
    private Button mButtonSetImsOverSGSPrefere;
    private Button mButtonSetSSDisable;
    private Button mButtonSetSSMode;
    private Button mButtonSetVdp;
    private Button mButtonSetVolte;
    private Button mButtonSetVolteCall;
    private Button mButtonSetXcapCFNum;
    private ListView mCategoryList;
    private TextView mImsMultStatus;
    private TextView mImsStatus;
    private RadioButton mRadioDynamicSbpDisabled;
    private RadioButton mRadioDynamicSbpEnabled;
    private RadioButton mRadioImsFormat3gpp;
    private RadioButton mRadioImsFormat3gpp2;
    private RadioButton mRadioImsFormatNone;
    private RadioButton mRadioImsModeDisabled;
    private RadioButton mRadioImsModeEnabled;
    private RadioButton mRadioImsOverSGSPrefereDisabled;
    private RadioButton mRadioImsOverSGSPrefereEnabled;
    private RadioButton mRadioSSCs;
    private RadioButton mRadioSSDisableDel;
    private RadioButton mRadioSSDisableTag;
    private RadioButton mRadioSSXcap;
    private RadioButton mRadioSetVolteOff;
    private RadioButton mRadioSetVolteOn;
    private int mSimType;
    private int mSubId;
    private EditText mVdp;
    private EditText mXcapCFNum;
    private static final String[] mImsOverSGSPrefereEnabled = {"AT+ESBP=1,88,1", "AT+ESBP=5,\"SBP_SDM_PREFER_SMS_OVER_SGS_TO_IMS\",1", "AT+EGCMD=6,1,\"SDM_ADS_PREFER_SMS_OVER_SGS_TO_IMS\"", "AT+ECFGSET=\"sdm_profile_prefer_sms_over_sgs_to_ims\",\"1\""};
    private static final String[] mImsOverSGSPrefereDisabled = {"AT+ESBP=1,88,0", "AT+ESBP=5,\"SBP_SDM_PREFER_SMS_OVER_SGS_TO_IMS\",0", "AT+EGCMD=6,2,\"SDM_ADS_PREFER_SMS_OVER_SGS_TO_IMS\"", "AT+ECFGSET=\"sdm_profile_prefer_sms_over_sgs_to_ims\",\"0\""};
    private static final String[] mImsOverSGSPrefereQuerry = {"AT+ESBP=3,88", "AT+ESBP=7,\"SBP_SDM_PREFER_SMS_OVER_SGS_TO_IMS\"", "", "AT+ECFGGET=\"sdm_profile_prefer_sms_over_sgs_to_ims\""};
    private static final String[] mImsOverSGSPrefereQuerryRes = {"+ESBP:", "+ESBP:", "", "+ECFGGET:"};
    private static int mVolteSettingFlag = 0;
    private static int mImsOverSGSPrefereModemType = 0;
    private Toast mToast = null;
    private final Handler mSettingHandler = new Handler() { // from class: com.mediatek.engineermode.ims.ImsActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what == 3) {
                ImsActivity.this.set4gLte();
                if (ImsActivity.mVolteSettingFlag == 1) {
                    ImsActivity.this.showToast("Set CMW500 setting successful.");
                    return;
                } else {
                    ImsActivity.this.showToast("Set Default setting successful.");
                    return;
                }
            }
            if (message.what == 48) {
                ImsActivity.this.mRadioImsOverSGSPrefereEnabled.setChecked(true);
            } else if (message.what == ImsActivity.MSG_IMS_OVER_SGS_DISABLE) {
                ImsActivity.this.mRadioImsOverSGSPrefereDisabled.setChecked(true);
            }
        }
    };
    private final Handler mATHandler = new Handler() { // from class: com.mediatek.engineermode.ims.ImsActivity.2
        private String[] mReturnData = new String[2];

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            if (message.what == 0) {
                if (((AsyncResult) message.obj).exception != null) {
                    ImsActivity.this.showToast("Set operator_code failed.");
                    return;
                }
                Elog.d(ImsActivity.TAG, "Set operator_code successful.");
                ImsActivity imsActivity = ImsActivity.this;
                int unused = ImsActivity.mVolteSettingFlag;
                imsActivity.sendCommand(ImsActivity.SET_IMS_SIGNAL, "5", 1);
                return;
            }
            String str2 = "1";
            if (message.what == 1) {
                if (((AsyncResult) message.obj).exception != null) {
                    ImsActivity.this.showToast("Set ims_signaling_qci failed.");
                    return;
                } else {
                    Elog.d(ImsActivity.TAG, "Set ims_signaling_qci successful.");
                    ImsActivity.this.sendCommand(ImsActivity.SET_PRECONDITION, ImsActivity.mVolteSettingFlag == 1 ? "0" : "1", 2);
                    return;
                }
            }
            if (message.what == 2) {
                if (((AsyncResult) message.obj).exception != null) {
                    ImsActivity.this.showToast("Set UA_call_precondition failed.");
                    return;
                }
                Elog.d(ImsActivity.TAG, "Set UA_call_precondition successful.");
                Message message2 = new Message();
                message2.what = 3;
                ImsActivity.this.mSettingHandler.sendMessage(message2);
                return;
            }
            if (message.what == 16 || message.what == 17 || message.what == 18 || message.what == 19) {
                if (((AsyncResult) message.obj).exception == null) {
                    ImsActivity.this.showToast("Set succeed.");
                    Elog.d(ImsActivity.TAG, "Set ims over SGS prefer successful.");
                    return;
                } else {
                    ImsActivity.this.showToast("Set failed.");
                    Elog.d(ImsActivity.TAG, "Set ims over SGS prefer failed.");
                    return;
                }
            }
            if (message.what == 4) {
                if (((AsyncResult) message.obj).exception == null) {
                    ImsActivity.this.showToast("Set VDP successfully.");
                    return;
                } else {
                    ImsActivity.this.showToast("Set VDP failed.");
                    return;
                }
            }
            if (message.what == 5) {
                AsyncResult asyncResult = (AsyncResult) message.obj;
                if (asyncResult == null || asyncResult.exception != null || asyncResult.result == null) {
                    return;
                }
                ImsActivity.this.mVdp.setText(((String[]) asyncResult.result)[0].substring("+CEVDP:".length()).trim());
                return;
            }
            if (message.what == 6) {
                AsyncResult asyncResult2 = (AsyncResult) message.obj;
                if (asyncResult2.exception != null) {
                    ImsActivity.this.showToast("Set ims test mode failed.");
                    Elog.i(ImsActivity.TAG, "Set test mode failed");
                    return;
                }
                String strTrim = "";
                String str3 = new String((byte[]) asyncResult2.result);
                Elog.d(ImsActivity.TAG, "Result(byte): " + str3);
                if (str3.trim().equals("OK")) {
                    str = "0";
                } else {
                    try {
                        strTrim = str3.split(": ")[1].trim();
                        Elog.d(ImsActivity.TAG, "error_num: " + strTrim);
                        str = strTrim;
                    } catch (Exception e) {
                        e.printStackTrace();
                        str = strTrim;
                    }
                }
                if (!str.equals("100") && !str.equals("0")) {
                    ImsActivity.this.showToast("Set ims test mode failed.");
                    Elog.i(ImsActivity.TAG, "Set test mode failed");
                    return;
                }
                try {
                    IEmd emHidlService = EmUtils.getEmHidlService();
                    if (!ImsActivity.this.mRadioImsModeEnabled.isChecked()) {
                        str2 = "0";
                    }
                    emHidlService.setImsTestMode(str2);
                } catch (Exception e2) {
                    e2.printStackTrace();
                    Elog.e(ImsActivity.TAG, "set property failed ...");
                }
                ImsActivity.this.showToast("Set test mode done");
                Elog.i(ImsActivity.TAG, "Set test mode done");
                return;
            }
            if (message.what == 32 || message.what == 33 || message.what == 35) {
                AsyncResult asyncResult3 = (AsyncResult) message.obj;
                if (asyncResult3.exception != null) {
                    Elog.d(ImsActivity.TAG, "quary QUERY_IMS_OVER_SGS failed.");
                    Elog.d(ImsActivity.TAG, asyncResult3.exception.getMessage());
                    return;
                }
                String[] strArr = (String[]) asyncResult3.result;
                this.mReturnData = strArr;
                if (strArr.length > 0) {
                    Elog.d(ImsActivity.TAG, "mReturnData = " + this.mReturnData[0]);
                    String str4 = "";
                    try {
                        if (FeatureSupport.is93Modem()) {
                            str4 = this.mReturnData[0].split(",")[1];
                            if (str4.equals("\"0\"")) {
                                str4 = "0";
                            } else if (str4.equals("\"1\"")) {
                                str4 = "1";
                            }
                        } else {
                            str4 = this.mReturnData[0].split(": ")[1];
                        }
                        Elog.d(ImsActivity.TAG, "result = " + str4);
                    } catch (Exception e3) {
                        Elog.e(ImsActivity.TAG, "mReturnData error ");
                    }
                    Message message3 = new Message();
                    if (str4.equals("1")) {
                        message3.what = 48;
                    } else if (str4.equals("0")) {
                        message3.what = ImsActivity.MSG_IMS_OVER_SGS_DISABLE;
                    }
                    ImsActivity.this.mSettingHandler.sendMessage(message3);
                }
            }
        }
    };

    private void queryImsOverSGSPrefereStatus() {
        if (FeatureSupport.is90Modem()) {
            Elog.i(TAG, "it is 90 modem");
            mImsOverSGSPrefereModemType = 0;
        } else if (FeatureSupport.is91Modem()) {
            Elog.i(TAG, "it is 91 modem");
            mImsOverSGSPrefereModemType = 1;
        } else if (FeatureSupport.is92Modem()) {
            Elog.i(TAG, "it is 92 modem");
            mImsOverSGSPrefereModemType = 2;
        } else if (FeatureSupport.is93Modem()) {
            Elog.i(TAG, "it is 93 modem");
            mImsOverSGSPrefereModemType = 3;
        } else {
            Elog.i(TAG, "it is 90 before modem");
            mImsOverSGSPrefereModemType = 2;
        }
        int i = mImsOverSGSPrefereModemType;
        if (i != 2) {
            sendAtCommand(new String[]{mImsOverSGSPrefereQuerry[i], mImsOverSGSPrefereQuerryRes[i]}, i | 32);
        } else if (read92modemImsOverSGSPrefereSharedPreference()) {
            this.mRadioImsOverSGSPrefereEnabled.setChecked(true);
        } else {
            this.mRadioImsOverSGSPrefereDisabled.setChecked(true);
        }
    }

    private boolean read92modemImsOverSGSPrefereSharedPreference() {
        return getSharedPreferences(IMS_OVER_SGS_PREFERE_92MODEM, 0).getBoolean(getString(R.string.ims_over_SGS_prefer), false);
    }

    private void sendATCommand(String str, String str2, int i) {
        Elog.d(TAG, "cmd = " + str);
        EmUtils.invokeOemRilRequestStringsEm(this.mSimType, new String[]{str, str2}, this.mATHandler.obtainMessage(i));
    }

    private void sendAtCommand(String[] strArr, int i) {
        Elog.d(TAG, "sendAtCommand() " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(this.mSimType, strArr, this.mATHandler.obtainMessage(i));
    }

    private void sendAtCommandRaw(String str, int i) {
        Elog.d(TAG, "sendAtCommand() " + str);
        byte[] bytes = str.getBytes();
        byte[] bArr = new byte[bytes.length + 1];
        System.arraycopy(bytes, 0, bArr, 0, bytes.length);
        bArr[bArr.length - 1] = 0;
        EmUtils.invokeOemRilRequestRawEm(this.mSimType, bArr, this.mATHandler.obtainMessage(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendCommand(String str, String str2, int i) {
        Message messageObtainMessage = this.mATHandler.obtainMessage(i);
        EmUtils.invokeOemRilRequestStringsEm(this.mSimType, new String[]{"AT+ECFGSET=\"" + str + "\",\"" + str2 + "\"", ""}, messageObtainMessage);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void set4gLte() {
        Elog.d(TAG, "set4gLte mVolteSettingFlag = " + mVolteSettingFlag);
        boolean z = mVolteSettingFlag == 1;
        ImsManager imsManager = ImsManager.getInstance(this, this.mSimType);
        if (imsManager != null) {
            imsManager.setEnhanced4gLteModeSetting(z);
            Elog.d(TAG, "set4gLte enabled = " + z);
        }
    }

    private void setImsOverSGSPrefereMode() {
        if (FeatureSupport.is90Modem()) {
            Elog.i(TAG, "it is 90 modem");
            mImsOverSGSPrefereModemType = 0;
        } else if (FeatureSupport.is91Modem()) {
            Elog.i(TAG, "it is 91 modem");
            mImsOverSGSPrefereModemType = 1;
        } else if (FeatureSupport.is92Modem()) {
            Elog.i(TAG, "it is 92 modem");
            mImsOverSGSPrefereModemType = 2;
        } else if (FeatureSupport.is93Modem()) {
            Elog.i(TAG, "it is 93 modem");
            mImsOverSGSPrefereModemType = 3;
        } else {
            Elog.i(TAG, "it is 90 before modem");
            mImsOverSGSPrefereModemType = 2;
        }
        if (this.mRadioImsOverSGSPrefereEnabled.isChecked()) {
            String[] strArr = mImsOverSGSPrefereEnabled;
            int i = mImsOverSGSPrefereModemType;
            sendAtCommand(new String[]{strArr[i], ""}, i | 16);
            if (mImsOverSGSPrefereModemType == 2) {
                write92modemImsOverSGSPrefereSharedPreference(this, true);
                return;
            }
            return;
        }
        if (!this.mRadioImsOverSGSPrefereDisabled.isChecked()) {
            showToast("please select the ebabled or disabled");
            return;
        }
        String[] strArr2 = mImsOverSGSPrefereDisabled;
        int i2 = mImsOverSGSPrefereModemType;
        sendAtCommand(new String[]{strArr2[i2], ""}, i2 | 16);
        if (mImsOverSGSPrefereModemType == 2) {
            write92modemImsOverSGSPrefereSharedPreference(this, false);
        }
    }

    private void setListViewItemsHeight(ListView listView) {
        if (listView == null) {
            return;
        }
        ListAdapter adapter = listView.getAdapter();
        int measuredHeight = 0;
        for (int i = 0; i < adapter.getCount(); i++) {
            View view = adapter.getView(i, null, listView);
            view.measure(0, 0);
            measuredHeight += view.getMeasuredHeight();
        }
        int count = measuredHeight + ((adapter.getCount() - 1) * listView.getDividerHeight());
        ViewGroup.LayoutParams layoutParams = listView.getLayoutParams();
        layoutParams.height = count;
        listView.setLayoutParams(layoutParams);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showToast(String str) {
        Toast toastMakeText = Toast.makeText(this, str, 0);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    public static void write92modemImsOverSGSPrefereSharedPreference(Context context, boolean z) {
        SharedPreferences.Editor editorEdit = context.getSharedPreferences(IMS_OVER_SGS_PREFERE_92MODEM, 0).edit();
        editorEdit.putBoolean(context.getString(R.string.ims_over_SGS_prefer), z);
        editorEdit.commit();
    }

    private void writeVolteSettingSharedPreference(boolean z) {
        SharedPreferences.Editor editorEdit = getSharedPreferences(IMS_VOLTE_SETTING_SHAREPRE, 0).edit();
        editorEdit.putBoolean(getString(R.string.volte_set_check), z);
        editorEdit.commit();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        ImsManager imsManager;
        int iIntValue;
        String str;
        String string;
        String str2;
        if (view == this.mButtonSetSSMode) {
            if (this.mRadioSSXcap.isChecked()) {
                str2 = MODE_SS_XCAP;
            } else if (!this.mRadioSSCs.isChecked()) {
                return;
            } else {
                str2 = MODE_SS_CS;
            }
            try {
                EmUtils.getEmHidlService().setEmConfigure(PROP_SS_MODE, str2);
                Elog.d(TAG, "Set persist.vendor.radio.ss.mode = " + str2);
                showToast("Set SS Mode done");
                return;
            } catch (Exception e) {
                e.printStackTrace();
                Elog.e(TAG, "Set SS Mode failed ...");
                showToast("Set SS Mode failed");
                return;
            }
        }
        if (view == this.mButtonSetSSDisable) {
            if (this.mRadioSSDisableTag.isChecked()) {
                string = Integer.toString(2);
            } else if (!this.mRadioSSDisableDel.isChecked()) {
                return;
            } else {
                string = Integer.toString(1);
            }
            try {
                EmUtils.getEmHidlService().setEmConfigure(PROP_SS_DISABLE_METHOD, string);
                Elog.d(TAG, "Set persist.vendor.radio.ss.xrdm = " + string);
                showToast("Set SS Disable done");
                return;
            } catch (Exception e2) {
                e2.printStackTrace();
                Elog.e(TAG, "Set SS Disable failed ...");
                showToast("Set SS Disable failed");
                return;
            }
        }
        if (view == this.mButtonSetXcapCFNum) {
            try {
                EmUtils.getEmHidlService().setEmConfigure(PROP_SS_CFNUM, this.mXcapCFNum.getText().toString());
                Elog.d(TAG, "Set persist.vendor.radio.xcap.cfn = " + this.mXcapCFNum.getText().toString());
                showToast("Set SS CF Number done");
                return;
            } catch (Exception e3) {
                e3.printStackTrace();
                Elog.e(TAG, "Set SS CF Number failed ...");
                showToast("Set SS CF Number failed");
                return;
            }
        }
        if (view == this.mButtonSetVolte) {
            if (this.mRadioSetVolteOff.isChecked()) {
                mVolteSettingFlag = 0;
            } else if (!this.mRadioSetVolteOn.isChecked()) {
                return;
            } else {
                mVolteSettingFlag = 1;
            }
            Elog.d(TAG, "Set VOLTE");
            sendCommand(SET_OPERATOR_CODE, mVolteSettingFlag == 1 ? OPERATOR_CODE_VALUE : "0", 0);
            return;
        }
        if (view == this.mButtonSetDynamicSbp) {
            StringBuilder sb = new StringBuilder();
            sb.append("Set persist.vendor.radio.mtk_dsbp_support = ");
            sb.append(this.mRadioDynamicSbpEnabled.isChecked() ? "1" : "0");
            Elog.d(TAG, sb.toString());
            try {
                EmUtils.getEmHidlService().setDsbpSupport(this.mRadioDynamicSbpEnabled.isChecked() ? "1" : "0");
            } catch (Exception e4) {
                e4.printStackTrace();
                Elog.e(TAG, "set property failed ...");
            }
            showToast("Set Dynamic SBP done");
            return;
        }
        if (view == this.mButtonSetImsMode) {
            if (FeatureSupport.is93Modem()) {
                if (this.mRadioImsModeEnabled.isChecked()) {
                    sendAtCommandRaw("AT+EIMSTESTMODE=1", 6);
                    return;
                } else {
                    sendAtCommandRaw("AT+EIMSTESTMODE=0", 6);
                    return;
                }
            }
            try {
                EmUtils.getEmHidlService().setImsTestMode(this.mRadioImsModeEnabled.isChecked() ? "1" : "0");
            } catch (Exception e5) {
                e5.printStackTrace();
                Elog.e(TAG, "set property failed ...");
            }
            showToast("Set test mode done");
            return;
        }
        if (view == this.mButtonSetImsFormat) {
            if (this.mRadioImsFormatNone.isChecked()) {
                str = SMS_FORMAT_NONE;
            } else if (this.mRadioImsFormat3gpp.isChecked()) {
                str = SMS_FORMAT_3GPP;
            } else if (!this.mRadioImsFormat3gpp2.isChecked()) {
                return;
            } else {
                str = SMS_FORMAT_3GPP2;
            }
            try {
                EmUtils.getEmHidlService().setSmsFormat(str);
            } catch (Exception e6) {
                e6.printStackTrace();
                Elog.e(TAG, "set property failed ...");
            }
            showToast("Set ims format test mode done");
            return;
        }
        if (view == this.mButtonSetImsOverSGSPrefere) {
            setImsOverSGSPrefereMode();
            return;
        }
        if (view == this.mButtonSetVdp) {
            try {
                iIntValue = Integer.valueOf(this.mVdp.getText().toString()).intValue();
            } catch (NumberFormatException e7) {
                iIntValue = 0;
            }
            if (iIntValue > 4 || iIntValue < 1) {
                showToast("The input of VDP is wrong, please check!");
                return;
            }
            sendATCommand("AT+CEVDP=" + iIntValue, "", 4);
            return;
        }
        if (view != this.mButtonSetVolteCall || (imsManager = ImsManager.getInstance(this, this.mSimType)) == null) {
            return;
        }
        if (!imsManager.isVolteEnabledByPlatform()) {
            Toast.makeText(this, "Current SIM doesn't support VoLTE, set fail", 0).show();
            return;
        }
        boolean zIsEnhanced4gLteModeSettingEnabledByUser = imsManager.isEnhanced4gLteModeSettingEnabledByUser();
        Elog.d(TAG, "setVolteSetting old is " + zIsEnhanced4gLteModeSettingEnabledByUser);
        if (zIsEnhanced4gLteModeSettingEnabledByUser) {
            this.mButtonSetVolteCall.setText(ENABLE_VOLTE_HD_CALL);
        } else {
            this.mButtonSetVolteCall.setText(DISABLE_VOLTE_HD_CALL);
        }
        imsManager.setEnhanced4gLteModeSetting(!zIsEnhanced4gLteModeSettingEnabledByUser);
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        Elog.d(TAG, "onCreate()");
        super.onCreate(bundle);
        setContentView(R.layout.ims);
        this.mSimType = getIntent().getIntExtra("mSimType", 0);
        this.mImsStatus = (TextView) findViewById(R.id.ims_status);
        this.mImsMultStatus = (TextView) findViewById(R.id.ims_mult_status);
        this.mXcapCFNum = (EditText) findViewById(R.id.ims_ss_cf_num);
        this.mRadioSSXcap = (RadioButton) findViewById(R.id.ims_ss_mode_xcap);
        this.mRadioSSCs = (RadioButton) findViewById(R.id.ims_ss_mode_cs);
        Button button = (Button) findViewById(R.id.ims_ss_set_mode);
        this.mButtonSetSSMode = button;
        button.setOnClickListener(this);
        this.mRadioSSDisableTag = (RadioButton) findViewById(R.id.ims_ss_disable_tag);
        this.mRadioSSDisableDel = (RadioButton) findViewById(R.id.ims_ss_disable_del);
        Button button2 = (Button) findViewById(R.id.ims_ss_set_disable);
        this.mButtonSetSSDisable = button2;
        button2.setOnClickListener(this);
        Button button3 = (Button) findViewById(R.id.ims_set_ss_cf_num);
        this.mButtonSetXcapCFNum = button3;
        button3.setOnClickListener(this);
        this.mRadioSetVolteOff = (RadioButton) findViewById(R.id.volte_set_off);
        this.mRadioSetVolteOn = (RadioButton) findViewById(R.id.volte_set_on);
        Button button4 = (Button) findViewById(R.id.volte_set);
        this.mButtonSetVolte = button4;
        button4.setOnClickListener(this);
        Button button5 = (Button) findViewById(R.id.ims_dynamic_sbp_set);
        this.mButtonSetDynamicSbp = button5;
        button5.setOnClickListener(this);
        this.mRadioDynamicSbpEnabled = (RadioButton) findViewById(R.id.ims_dynamic_sbp_enable);
        this.mRadioDynamicSbpDisabled = (RadioButton) findViewById(R.id.ims_dynamic_sbp_disable);
        Button button6 = (Button) findViewById(R.id.ims_test_mode_set);
        this.mButtonSetImsMode = button6;
        button6.setOnClickListener(this);
        Button button7 = (Button) findViewById(R.id.ims_test_format);
        this.mButtonSetImsFormat = button7;
        button7.setOnClickListener(this);
        this.mRadioImsModeEnabled = (RadioButton) findViewById(R.id.ims_test_mode_enable);
        this.mRadioImsModeDisabled = (RadioButton) findViewById(R.id.ims_test_mode_disable);
        this.mRadioImsFormatNone = (RadioButton) findViewById(R.id.ims_format_none);
        this.mRadioImsFormat3gpp = (RadioButton) findViewById(R.id.ims_format_3gpp);
        this.mRadioImsFormat3gpp2 = (RadioButton) findViewById(R.id.ims_format_3gpp2);
        Button button8 = (Button) findViewById(R.id.ims_over_SGS_prefer_set);
        this.mButtonSetImsOverSGSPrefere = button8;
        button8.setOnClickListener(this);
        this.mRadioImsOverSGSPrefereEnabled = (RadioButton) findViewById(R.id.ims_over_SGS_prefer_enable);
        this.mRadioImsOverSGSPrefereDisabled = (RadioButton) findViewById(R.id.ims_over_SGS_prefer_disable);
        this.mVdp = (EditText) findViewById(R.id.ims_vdp);
        Button button9 = (Button) findViewById(R.id.ims_vdp_set);
        this.mButtonSetVdp = button9;
        button9.setOnClickListener(this);
        if (getSharedPreferences(IMS_VOLTE_SETTING_SHAREPRE, 0).getBoolean(getString(R.string.volte_set_check), true)) {
            this.mRadioSetVolteOn.setChecked(true);
        } else {
            this.mRadioSetVolteOff.setChecked(true);
        }
        this.mCategoryList = (ListView) findViewById(R.id.ims_category_list);
        ArrayList arrayList = new ArrayList();
        arrayList.add(getString(R.string.ims_category_common));
        arrayList.add(getString(R.string.ims_category_registration));
        arrayList.add(getString(R.string.ims_category_call));
        arrayList.add(getString(R.string.ims_category_sms));
        arrayList.add(getString(R.string.ims_category_bearer));
        arrayList.add(getString(R.string.ims_category_pcscf));
        arrayList.add(getString(R.string.ims_category_ussd));
        this.mCategoryList.setAdapter((ListAdapter) new ArrayAdapter(this, android.R.layout.simple_list_item_1, arrayList));
        this.mCategoryList.setOnItemClickListener(this);
        setListViewItemsHeight(this.mCategoryList);
        Button button10 = (Button) findViewById(R.id.volte_call_setting);
        this.mButtonSetVolteCall = button10;
        button10.setOnClickListener(this);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        writeVolteSettingSharedPreference(this.mRadioSetVolteOn.isChecked());
        super.onDestroy();
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent(this, (Class<?>) ConfigIMSActivity.class);
        intent.putExtra("mSimType", this.mSimType);
        switch (i) {
            case 0:
                intent.putExtra("category", getString(R.string.ims_category_common));
                break;
            case 1:
                intent.putExtra("category", getString(R.string.ims_category_registration));
                break;
            case 2:
                intent.putExtra("category", getString(R.string.ims_category_call));
                break;
            case 3:
                intent.putExtra("category", getString(R.string.ims_category_sms));
                break;
            case 4:
                intent.putExtra("category", getString(R.string.ims_category_bearer));
                break;
            case 5:
                intent.putExtra("category", getString(R.string.ims_category_pcscf));
                break;
            case 6:
                intent.putExtra("category", getString(R.string.ims_category_ussd));
                break;
        }
        startActivity(intent);
    }

    @Override // android.app.Activity
    protected void onResume() {
        Elog.d(TAG, "onResume()");
        super.onResume();
        Elog.d(TAG, "mSimType " + this.mSimType);
        int[] subId = SubscriptionManager.getSubId(this.mSimType);
        if (subId != null && subId.length > 0) {
            this.mSubId = subId[0];
        }
        Elog.d(TAG, "mSubId " + this.mSubId);
        boolean zIsImsRegistered = TelephonyManager.getDefault().isImsRegistered(this.mSubId);
        Elog.d(TAG, "getImsRegInfo(): " + zIsImsRegistered);
        TextView textView = this.mImsStatus;
        StringBuilder sb = new StringBuilder();
        sb.append(getString(R.string.ims_status));
        sb.append(zIsImsRegistered ? "true" : "false");
        textView.setText(sb.toString());
        sendATCommand("AT+CEVDP?", "+CEVDP:", 5);
        this.mImsMultStatus.setText("persist.vendor.mims_support: " + SystemProperties.get(SimSelectActivity.MULT_IMS_SUPPORT, "-"));
        String str = SystemProperties.get(PROP_SS_MODE, MODE_SS_XCAP);
        String str2 = SystemProperties.get(PROP_SS_DISABLE_METHOD, Integer.toString(2));
        String str3 = SystemProperties.get(PROP_SS_CFNUM, "");
        String str4 = SystemProperties.get(PROP_DYNAMIC_SBP, "0");
        String str5 = SystemProperties.get(PROP_IMS_MODE, "0");
        String str6 = SystemProperties.get(PROP_SMS_OVER_IMS_TEST_MODE, SMS_FORMAT_NONE);
        Elog.d(TAG, "persist.vendor.radio.ss.mode: " + str);
        Elog.d(TAG, "persist.vendor.radio.ss.xrdm: " + str2);
        Elog.d(TAG, "persist.vendor.radio.xcap.cfn:" + str3);
        Elog.d(TAG, "persist.vendor.radio.mtk_dsbp_support:" + str4);
        Elog.d(TAG, "persist.vendor.radio.imstestmode:" + str5);
        Elog.d(TAG, "persist.vendor.radio.smsformat:" + str6);
        queryImsOverSGSPrefereStatus();
        if (MODE_SS_XCAP.equals(str)) {
            this.mRadioSSXcap.setChecked(true);
        } else if (MODE_SS_CS.equals(str)) {
            this.mRadioSSCs.setChecked(true);
        } else {
            showToast("Got invalid SS Mode: \"" + str + "\"");
        }
        if (2 == Integer.parseInt(str2)) {
            this.mRadioSSDisableTag.setChecked(true);
        } else if (1 == Integer.parseInt(str2)) {
            this.mRadioSSDisableDel.setChecked(true);
        } else {
            showToast("Got invalid SS Disable Method: \"" + str2 + "\"");
        }
        if (1 == Integer.parseInt(str4)) {
            this.mRadioDynamicSbpEnabled.setChecked(true);
        } else if (Integer.parseInt(str4) == 0) {
            this.mRadioDynamicSbpDisabled.setChecked(true);
        }
        if (1 == Integer.parseInt(str5)) {
            this.mRadioImsModeEnabled.setChecked(true);
        } else if (Integer.parseInt(str5) == 0) {
            this.mRadioImsModeDisabled.setChecked(true);
        }
        if (SMS_FORMAT_NONE.equals(str6)) {
            this.mRadioImsFormatNone.setChecked(true);
        } else if (SMS_FORMAT_3GPP.equals(str6)) {
            this.mRadioImsFormat3gpp.setChecked(true);
        } else if (SMS_FORMAT_3GPP2.equals(str6)) {
            this.mRadioImsFormat3gpp2.setChecked(true);
        }
        this.mXcapCFNum.setText(str3);
        if (ImsManager.getInstance(this, this.mSimType).isEnhanced4gLteModeSettingEnabledByUser()) {
            this.mButtonSetVolteCall.setText(DISABLE_VOLTE_HD_CALL);
        } else {
            this.mButtonSetVolteCall.setText(ENABLE_VOLTE_HD_CALL);
        }
    }
}
