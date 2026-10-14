package com.mediatek.engineermode.misc;

import android.content.Intent;
import android.media.AudioManager;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.preference.CheckBoxPreference;
import android.preference.EditTextPreference;
import android.preference.ListPreference;
import android.preference.Preference;
import android.preference.PreferenceActivity;
import android.preference.PreferenceScreen;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes.dex */
public class MiscConfig extends PreferenceActivity implements Preference.OnPreferenceChangeListener {
    private static final String CMD_QUERY = "AT+ECFGGET=\"sms_over_sgs\"";
    private static final String CMD_SET = "AT+ECFGSET=\"sms_over_sgs\"";
    public static final String FK_MTK_MISC_SELF_REG_CONFIG = "persist.vendor.radio.selfreg";
    public static final String FK_MTK_MISC_UCE_SUPPORT = "persist.vendor.mtk_uce_support";
    public static final String FK_MTK_MISC_VIBRATE_CONFIG = "persist.vendor.radio.telecom.vibrate";
    private static final int MSG_QUERY = 0;
    private static final int MSG_QUERY_HVOLTE = 2;
    private static final int MSG_QUERY_SLIENT = 3;
    private static final int MSG_QUERY_STATUS_1X_TIME = 7;
    private static final int MSG_QUERY_VOLTE_HYS = 4;
    private static final int MSG_SET = 1;
    private static final int MSG_SET_DISABLE_1X_TIME = 5;
    private static final int MSG_SET_ENABLE_1X_TIME = 6;
    private static final String TAG = "MiscConfig";
    private static final String VALUE_DISABLE = "0";
    private static final String VALUE_ENABLE = "1";
    private AudioManager mAudioManager;
    private CheckBoxPreference mDisable1XTime;
    private ListPreference mHVolteDeviceModePreference;
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.misc.MiscConfig.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            if (message.what == 0) {
                if (asyncResult.exception != null || asyncResult.result == null) {
                    EmUtils.showToast("Query failed");
                    return;
                }
                String[] strArr = (String[]) asyncResult.result;
                if (strArr.length <= 0 || strArr[0] == null) {
                    return;
                }
                MiscConfig.this.parseSmsSgsValue(strArr[0]);
                return;
            }
            if (message.what == 1) {
                if (asyncResult.exception == null) {
                    EmUtils.showToast("Set successful");
                    Elog.v(MiscConfig.TAG, "Set successful");
                    return;
                } else {
                    EmUtils.showToast("Set failed");
                    Elog.v(MiscConfig.TAG, "Set failed");
                    return;
                }
            }
            if (message.what == 2) {
                if (asyncResult.exception != null || asyncResult.result == null) {
                    return;
                }
                String[] strArr2 = (String[]) asyncResult.result;
                if (strArr2.length <= 0 || strArr2[0] == null) {
                    return;
                }
                String strSubstring = "0";
                try {
                    strSubstring = strArr2[0].replace(" ", "").substring("+CEVDP:".length());
                } catch (Exception e) {
                    Elog.v(MiscConfig.TAG, "CEVDP failed ");
                }
                Elog.v(MiscConfig.TAG, "hVolte = " + strSubstring);
                MiscConfig.this.mHVolteDeviceModePreference.setValue(strSubstring);
                if (MiscConfig.this.mHVolteDeviceModePreference.getEntry() == null) {
                    Elog.d(MiscConfig.TAG, "mHVolteDeviceModePreference.getEntry() = null");
                    return;
                }
                Elog.d(MiscConfig.TAG, "mHVolteDeviceModePreference.getEntry() = " + ((Object) MiscConfig.this.mHVolteDeviceModePreference.getEntry()));
                MiscConfig.this.mHVolteDeviceModePreference.setSummary(MiscConfig.this.mHVolteDeviceModePreference.getEntry());
                return;
            }
            if (message.what == 3) {
                if (asyncResult.exception != null || asyncResult.result == null) {
                    return;
                }
                String[] strArr3 = (String[]) asyncResult.result;
                if (strArr3.length <= 0 || strArr3[0] == null) {
                    return;
                }
                Elog.v(MiscConfig.TAG, "EHVOLTE data[0] = " + strArr3[0]);
                String strSubstring2 = "0";
                try {
                    strSubstring2 = strArr3[0].replace(" ", "").substring("+EHVOLTE:4,".length());
                } catch (Exception e2) {
                    Elog.v(MiscConfig.TAG, "+EHVOLTE: failed ");
                }
                Elog.v(MiscConfig.TAG, "EHVOLTE data = " + strSubstring2);
                MiscConfig.this.mSilentRedialPreference.setChecked(strSubstring2.equals("1"));
                return;
            }
            if (message.what == 4) {
                if (asyncResult.exception != null || asyncResult.result == null) {
                    return;
                }
                String[] strArr4 = (String[]) asyncResult.result;
                if (strArr4.length <= 0 || strArr4[0] == null) {
                    return;
                }
                String strSubstring3 = "0";
                Elog.v(MiscConfig.TAG, "volteHys data[0] = " + strArr4[0]);
                try {
                    strSubstring3 = strArr4[0].replace(" ", "").substring("+EVZWT:11,".length());
                } catch (Exception e3) {
                    Elog.v(MiscConfig.TAG, "+EVZWT:11 failed ");
                }
                Elog.v(MiscConfig.TAG, "volteHys data = " + strSubstring3);
                MiscConfig.this.mTVolteHysPreference.setText(strSubstring3);
                MiscConfig.this.mTVolteHysPreference.setSummary(MiscConfig.this.getString(R.string.misc_config_tvolte) + " : " + strSubstring3);
                return;
            }
            if (message.what == 5) {
                if (asyncResult.exception == null) {
                    EmUtils.showToast("Disable_Time_REG successful.", 0);
                    return;
                } else {
                    EmUtils.showToast("Disable_Time_REG failed.", 0);
                    return;
                }
            }
            if (message.what == 6) {
                if (asyncResult.exception == null) {
                    EmUtils.showToast("Enable_Time_REG successful.", 0);
                    return;
                } else {
                    EmUtils.showToast("Enable_Time_REG failed.", 0);
                    return;
                }
            }
            if (message.what == 7) {
                if (asyncResult.exception != null) {
                    Elog.d(MiscConfig.TAG, "quary MSG_QUERY_STATUS_TIME_REG failed.");
                    return;
                }
                String[] strArr5 = (String[]) asyncResult.result;
                if (strArr5.length > 0) {
                    Elog.d(MiscConfig.TAG, "close 1x mReturnData = " + strArr5[0]);
                    String str = "";
                    try {
                        str = strArr5[0].split(",")[1];
                    } catch (Exception e4) {
                        Elog.e(MiscConfig.TAG, e4.getMessage());
                        Elog.e(MiscConfig.TAG, "mReturnData error");
                    }
                    Elog.d(MiscConfig.TAG, "result = " + str);
                    if (str.equals("0")) {
                        MiscConfig.this.mDisable1XTime.setChecked(true);
                    } else {
                        MiscConfig.this.mDisable1XTime.setChecked(false);
                    }
                }
            }
        }
    };
    private Preference mPresence;
    private CheckBoxPreference mSelfRegPreference;
    private CheckBoxPreference mSilentRedialPreference;
    private CheckBoxPreference mSmsSgsPreference;
    private CheckBoxPreference mSpeakerPreference;
    private EditTextPreference mTVolteHysPreference;
    private ListPreference mVdmImsReconfigPreference;
    private CheckBoxPreference mVibratePreference;
    private static final String[] mEntries = {"bSRLTE", "hVolte"};
    private static final String[] mEntriesValue = {"1", "3"};
    private static final String[] mATCmdValue93md = {"AT+EIMSCFG=0,0,0,0,1,1", "AT+EIMSCFG=1,0,0,0,1,1"};
    private static final String[] mATCmdValue9192md = {"AT+EIMSVOICE=0", "AT+EIMSVOICE=1"};
    private static final String[] mEGCMDEntries = {"Disable", "Enable"};
    private static final String[] mEGCMDEntriesValue = {"\"00\"", "\"01\""};

    private String getSelfRegConfig() {
        String strSystemPropertyGet = EmUtils.systemPropertyGet(FK_MTK_MISC_SELF_REG_CONFIG, "11");
        if (!strSystemPropertyGet.equals("11") && !strSystemPropertyGet.equals("10") && !strSystemPropertyGet.equals("01") && !strSystemPropertyGet.equals("00")) {
            strSystemPropertyGet = "11";
        }
        Elog.i(TAG, "persist.vendor.radio.selfreg: " + strSystemPropertyGet);
        return strSystemPropertyGet;
    }

    private String parseCommandResponse(String str) {
        Elog.d(TAG, "reply data: " + str);
        Matcher matcher = Pattern.compile("\\+ECFGGET:\\s*\".*\"\\s*,\\s*\"(.*)\"").matcher(str);
        if (matcher.find()) {
            String strGroup = matcher.group(1);
            Elog.d(TAG, "sms over sgs support value: " + strGroup);
            return strGroup;
        }
        Elog.e(TAG, "wrong format: " + str);
        EmUtils.showToast("wrong format: " + str);
        return "";
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void parseSmsSgsValue(String str) {
        this.mSmsSgsPreference.setChecked("1".equals(parseCommandResponse(str)));
    }

    private void query1XTimeStatus(int i) {
        String[] cdmaCmdArr = ModemCategory.getCdmaCmdArr(new String[]{"AT+ECREGTYPE=0", "+ECREGTYPE:", "DESTRILD:C2K"});
        Elog.d(TAG, "query1XTimeStatus: " + cdmaCmdArr[0] + ",cmd_s.length = " + cdmaCmdArr.length);
        EmUtils.invokeOemRilRequestStringsEm(true, cdmaCmdArr, this.mHandler.obtainMessage(i));
    }

    private void queryHVolteDeviceMode() {
        sendATCommand(new String[]{"AT+CEVDP?", "+CEVDP:"}, 2);
    }

    private void querySelfRegValue() {
        if (getSelfRegConfig().charAt(1) == '1') {
            this.mSelfRegPreference.setChecked(true);
        } else {
            this.mSelfRegPreference.setChecked(false);
        }
    }

    private void querySilentRedialMode() {
        sendATCommand(new String[]{"AT+EHVOLTE=4,2", "+EHVOLTE:"}, 3);
    }

    private void querySmsSgsValue() {
        EmUtils.invokeOemRilRequestStringsEm(new String[]{CMD_QUERY, "+ECFGGET:"}, this.mHandler.obtainMessage(0));
        Elog.i(TAG, "send AT+ECFGGET=\"sms_over_sgs\"");
    }

    private void querySpeakerValue() {
        if (this.mAudioManager.isSpeakerphoneOn()) {
            this.mSpeakerPreference.setChecked(true);
        } else {
            this.mSpeakerPreference.setChecked(false);
        }
    }

    private void queryTVolteHys() {
        sendATCommand(new String[]{"AT+EVZWT=0,11", "+EVZWT:"}, 4);
    }

    private void queryVibrateValue() {
        String strSystemPropertyGet = EmUtils.systemPropertyGet(FK_MTK_MISC_VIBRATE_CONFIG, "1");
        Elog.v(TAG, "queryVibrateValue flag is :" + strSystemPropertyGet);
        if (strSystemPropertyGet.equals("0")) {
            this.mVibratePreference.setChecked(false);
        } else {
            this.mVibratePreference.setChecked(true);
        }
    }

    private void queryVolteValue() {
        queryHVolteDeviceMode();
        querySilentRedialMode();
        queryTVolteHys();
    }

    private void sendATCommand(String[] strArr, int i) {
        Elog.d(TAG, "send at cmd : " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mHandler.obtainMessage(i));
    }

    private void set1XTime(int i, int i2) {
        String[] strArr = new String[3];
        StringBuilder sb = new StringBuilder();
        sb.append("AT+ECREGTYPE=0,");
        sb.append(i == 1 ? 1 : 0);
        strArr[0] = sb.toString();
        strArr[1] = "";
        strArr[2] = "DESTRILD:C2K";
        String[] cdmaCmdArr = ModemCategory.getCdmaCmdArr(strArr);
        Elog.d(TAG, "set1XTime AT command: " + cdmaCmdArr[0] + ",cmd_s.length = " + cdmaCmdArr.length);
        EmUtils.invokeOemRilRequestStringsEm(true, cdmaCmdArr, this.mHandler.obtainMessage(i2));
    }

    private void setSgsValue(String str) {
        EmUtils.invokeOemRilRequestStringsEm(new String[]{"AT+ECFGSET=\"sms_over_sgs\",\"" + str + "\"", ""}, this.mHandler.obtainMessage(1));
        Elog.i(TAG, "send AT+ECFGSET=\"sms_over_sgs\",\"" + str + "\"");
    }

    @Override // android.preference.PreferenceActivity
    protected boolean isValidFragment(String str) {
        Elog.i(TAG, "fragmentName is " + str);
        return false;
    }

    @Override // android.preference.PreferenceActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        addPreferencesFromResource(R.xml.misc);
        this.mAudioManager = (AudioManager) getSystemService(AudioManager.class);
        CheckBoxPreference checkBoxPreference = new CheckBoxPreference(this);
        this.mSpeakerPreference = checkBoxPreference;
        checkBoxPreference.setPersistent(false);
        this.mSpeakerPreference.setSummary(getString(R.string.misc_config_speaker));
        getPreferenceScreen().addPreference(this.mSpeakerPreference);
        CheckBoxPreference checkBoxPreference2 = new CheckBoxPreference(this);
        this.mVibratePreference = checkBoxPreference2;
        checkBoxPreference2.setSummary(getString(R.string.misc_config_vibrate));
        this.mVibratePreference.setPersistent(false);
        getPreferenceScreen().addPreference(this.mVibratePreference);
        if (FeatureSupport.isSupported(FeatureSupport.FK_CT4GREG_APP)) {
            CheckBoxPreference checkBoxPreference3 = new CheckBoxPreference(this);
            this.mSelfRegPreference = checkBoxPreference3;
            checkBoxPreference3.setSummary(getString(R.string.misc_config_selfreg));
            this.mSelfRegPreference.setPersistent(false);
            getPreferenceScreen().addPreference(this.mSelfRegPreference);
        } else {
            Elog.d(TAG, "Not show entry for CT4GREG.");
        }
        CheckBoxPreference checkBoxPreference4 = new CheckBoxPreference(this);
        this.mSmsSgsPreference = checkBoxPreference4;
        checkBoxPreference4.setSummary(getString(R.string.misc_config_sgs));
        this.mSmsSgsPreference.setPersistent(false);
        getPreferenceScreen().addPreference(this.mSmsSgsPreference);
        if (ModemCategory.isCdma()) {
            CheckBoxPreference checkBoxPreference5 = new CheckBoxPreference(this);
            this.mDisable1XTime = checkBoxPreference5;
            checkBoxPreference5.setSummary(getString(R.string.misc_config_disable_1X_time));
            this.mDisable1XTime.setPersistent(false);
            getPreferenceScreen().addPreference(this.mDisable1XTime);
        }
        if (FeatureSupport.getProperty(FK_MTK_MISC_UCE_SUPPORT).equals("1")) {
            Elog.d(TAG, "init presence");
            Preference preference = new Preference(this);
            this.mPresence = preference;
            preference.setSummary(getString(R.string.presence));
            this.mPresence.setPersistent(false);
            getPreferenceScreen().addPreference(this.mPresence);
        }
        if (FeatureSupport.is90Modem() || FeatureSupport.is3GOnlyModem()) {
            return;
        }
        ListPreference listPreference = new ListPreference(this);
        this.mHVolteDeviceModePreference = listPreference;
        listPreference.setSummary(getString(R.string.misc_config_hvolte));
        this.mHVolteDeviceModePreference.setPersistent(false);
        this.mHVolteDeviceModePreference.setEntries(mEntries);
        this.mHVolteDeviceModePreference.setEntryValues(mEntriesValue);
        this.mHVolteDeviceModePreference.setOnPreferenceChangeListener(this);
        getPreferenceScreen().addPreference(this.mHVolteDeviceModePreference);
        CheckBoxPreference checkBoxPreference6 = new CheckBoxPreference(this);
        this.mSilentRedialPreference = checkBoxPreference6;
        checkBoxPreference6.setSummary(getString(R.string.misc_config_silent));
        this.mSilentRedialPreference.setPersistent(false);
        getPreferenceScreen().addPreference(this.mSilentRedialPreference);
        EditTextPreference editTextPreference = new EditTextPreference(this);
        this.mTVolteHysPreference = editTextPreference;
        editTextPreference.setSummary(getString(R.string.misc_config_tvolte));
        this.mTVolteHysPreference.setPersistent(false);
        this.mTVolteHysPreference.setOnPreferenceChangeListener(this);
        getPreferenceScreen().addPreference(this.mTVolteHysPreference);
        ListPreference listPreference2 = new ListPreference(this);
        this.mVdmImsReconfigPreference = listPreference2;
        listPreference2.setSummary(getString(R.string.misc_config_vdm));
        this.mVdmImsReconfigPreference.setPersistent(false);
        this.mVdmImsReconfigPreference.setEntries(mEGCMDEntries);
        this.mVdmImsReconfigPreference.setEntryValues(mEGCMDEntriesValue);
        this.mVdmImsReconfigPreference.setOnPreferenceChangeListener(this);
        getPreferenceScreen().addPreference(this.mVdmImsReconfigPreference);
    }

    @Override // android.preference.Preference.OnPreferenceChangeListener
    public boolean onPreferenceChange(Preference preference, Object obj) {
        ListPreference listPreference = this.mHVolteDeviceModePreference;
        if (preference == listPreference) {
            int iFindIndexOfValue = listPreference.findIndexOfValue((String) obj);
            Elog.v(TAG, "mHVolteDeviceModePreference index is :" + iFindIndexOfValue);
            String str = "";
            if (FeatureSupport.is93Modem()) {
                str = mATCmdValue93md[iFindIndexOfValue];
            } else if (FeatureSupport.is92Modem() || FeatureSupport.is91Modem()) {
                str = mATCmdValue9192md[iFindIndexOfValue];
            }
            sendATCommand(new String[]{str, ""}, 1);
            sendATCommand(new String[]{"AT+CEVDP=" + mEntriesValue[iFindIndexOfValue], ""}, 1);
            this.mHVolteDeviceModePreference.setSummary(mEntries[iFindIndexOfValue]);
        }
        ListPreference listPreference2 = this.mVdmImsReconfigPreference;
        if (preference == listPreference2) {
            int iFindIndexOfValue2 = listPreference2.findIndexOfValue((String) obj);
            Elog.v(TAG, "mVdmImsReconfigPreference index is :" + iFindIndexOfValue2);
            sendATCommand(new String[]{"AT+EGCMD=499,0," + mEGCMDEntriesValue[iFindIndexOfValue2], ""}, 1);
            this.mHVolteDeviceModePreference.setSummary(mEGCMDEntries[iFindIndexOfValue2]);
        }
        if (preference == this.mTVolteHysPreference) {
            String str2 = (String) obj;
            Elog.d(TAG, "Volte Hys value = " + str2);
            sendATCommand(new String[]{"AT+EVZWT=1,11," + str2, ""}, 1);
            if (this.mTVolteHysPreference.getText() != null) {
                this.mTVolteHysPreference.setSummary(getString(R.string.misc_config_tvolte) + " : " + str2);
            } else {
                Elog.d(TAG, "mTVolteHysPreference.getText() = null");
            }
        }
        return true;
    }

    @Override // android.preference.PreferenceActivity
    public boolean onPreferenceTreeClick(PreferenceScreen preferenceScreen, Preference preference) {
        String str;
        CheckBoxPreference checkBoxPreference = this.mSelfRegPreference;
        if (preference == checkBoxPreference) {
            boolean zIsChecked = checkBoxPreference.isChecked();
            String selfRegConfig = getSelfRegConfig();
            if (zIsChecked) {
                str = selfRegConfig.charAt(0) + "1";
            } else {
                str = selfRegConfig.charAt(0) + "0";
            }
            Elog.i(TAG, "set self reg config value :" + str);
            EmUtils.systemPropertySet(FK_MTK_MISC_SELF_REG_CONFIG, str);
        }
        CheckBoxPreference checkBoxPreference2 = this.mSpeakerPreference;
        if (preference == checkBoxPreference2) {
            this.mAudioManager.setSpeakerphoneOn(checkBoxPreference2.isChecked());
        }
        CheckBoxPreference checkBoxPreference3 = this.mVibratePreference;
        if (preference == checkBoxPreference3) {
            boolean zIsChecked2 = checkBoxPreference3.isChecked();
            Elog.i(TAG, "set VibrateValue flag is :" + zIsChecked2);
            EmUtils.systemPropertySet(FK_MTK_MISC_VIBRATE_CONFIG, zIsChecked2 ? "1" : "0");
        }
        CheckBoxPreference checkBoxPreference4 = this.mSmsSgsPreference;
        if (preference == checkBoxPreference4) {
            setSgsValue(checkBoxPreference4.isChecked() ? "1" : "0");
        }
        CheckBoxPreference checkBoxPreference5 = this.mDisable1XTime;
        if (preference == checkBoxPreference5) {
            if (checkBoxPreference5.isChecked()) {
                set1XTime(0, 5);
            } else {
                set1XTime(1, 6);
            }
        }
        if (preference == this.mPresence) {
            Intent intent = new Intent();
            intent.setClassName(this, "com.mediatek.engineermode.misc.PresenceActivity");
            startActivity(intent);
        }
        CheckBoxPreference checkBoxPreference6 = this.mSilentRedialPreference;
        if (preference == checkBoxPreference6) {
            sendATCommand(new String[]{"AT+EHVOLTE=4," + (checkBoxPreference6.isChecked() ? "1" : "0"), ""}, 1);
        }
        return super.onPreferenceTreeClick(preferenceScreen, preference);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        if (FeatureSupport.isSupported(FeatureSupport.FK_CT4GREG_APP)) {
            querySelfRegValue();
        }
        querySpeakerValue();
        queryVibrateValue();
        querySmsSgsValue();
        if (!FeatureSupport.is90Modem() && !FeatureSupport.is3GOnlyModem()) {
            queryVolteValue();
        }
        if (FeatureSupport.is90Modem() || !ModemCategory.isCdma()) {
            return;
        }
        query1XTimeStatus(7);
    }
}
