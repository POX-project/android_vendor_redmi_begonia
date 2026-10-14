package com.mediatek.engineermode.modemtest;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.telephony.TelephonyManager;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes.dex */
public class ModemTestActivity extends Activity implements CompoundButton.OnCheckedChangeListener {
    private static final int ATTACH_MODE_NOT_SPECIFY = -1;
    private static final int CMD_LENGTH = 6;
    private static final int DOCOMO_OPTION = 128;
    private static final int FLAG_NOT_DETECT_CDMA_CARD = 1048576;
    private static final int FLAG_UNLOCK = 2097152;
    private static final int INDEX_SPIRENT = 1;
    private static final int MODEM_CDMA = 8;
    private static final int MODEM_CLSC = 10;
    private static final int MODEM_CTA = 1;
    private static final int MODEM_FACTORY = 6;
    private static final int MODEM_FTA = 2;
    private static final int MODEM_IOT = 3;
    private static final int MODEM_LAA = 12;
    private static final int MODEM_NONE = 0;
    private static final int MODEM_OPERATOR = 5;
    private static final int MODEM_QUERY = 4;
    private static final int MODEM_QUERY_CDMA = 7;
    private static final int MODEM_QUERY_CLSC = 9;
    private static final int MODEM_QUERY_LAA = 11;
    private static final int MODE_LENGTH = 3;
    private static final int PCH_CALL_PREFER = 1;
    private static final int PCH_DATA_PREFER = 0;
    private static final int REBOOT_DIALOG = 2000;
    private static final int SOFTBANK_OPTION = 256;
    public static final String TAG = "ModemTest";
    private Button mC2kBtn;
    private CheckBox mCdmaSimSettingCheckBox;
    private Button mCtaBtn;
    private Button mFactoryBtn;
    private Button mFtaBtn;
    private String[] mFtaOptionsArray;
    private Button mIotBtn;
    private String[] mIotOptionsArray;
    private CheckBox mLaaCheckBox;
    private Button mNoneBtn;
    private Button mOperatorBtn;
    private String[] mOperatorOptionsArray;
    private TextView mTextView;
    private CheckBox mUnlockCheckBox;
    private int mCtaOption = 0;
    private int mIotOption = 0;
    private int mFtaOption = 0;
    private int mOperatorOption = 0;
    private int mCdmaOption = 0;
    private int mCurrentMode = 0;
    private int mCurrentFlag = 0;
    private boolean mFirstEntry = true;
    private final Handler mATCmdHander = new Handler() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            boolean z = false;
            switch (message.what) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 5:
                case 6:
                    if (((AsyncResult) message.obj).exception != null) {
                        EmUtils.showToast(ModemTestActivity.this.getToastString(message.what) + " AT cmd failed.");
                    } else {
                        EmUtils.showToast(ModemTestActivity.this.getToastString(message.what) + " AT cmd success.");
                        z = true;
                    }
                    break;
                case 4:
                    AsyncResult asyncResult = (AsyncResult) message.obj;
                    if (asyncResult.exception != null) {
                        EmUtils.showToast(" Query failed.");
                    } else {
                        Elog.d(ModemTestActivity.TAG, "Query success.");
                        ModemTestActivity.this.handleQuery((String[]) asyncResult.result);
                        if (ModemCategory.isCdma()) {
                            ModemTestActivity.this.queryCdmaOption();
                            ModemTestActivity.this.queryUnlockOption();
                        }
                    }
                    break;
                case 7:
                    AsyncResult asyncResult2 = (AsyncResult) message.obj;
                    if (asyncResult2.exception != null) {
                        EmUtils.showToast(" Query failed.");
                    } else {
                        Elog.i(ModemTestActivity.TAG, "Query success.");
                        ModemTestActivity.this.handleQueryCdma((String[]) asyncResult2.result);
                    }
                    break;
                case 8:
                    if (((AsyncResult) message.obj).exception != null) {
                        EmUtils.showToast("AT cmd failed.");
                    } else {
                        EmUtils.showToast("AT cmd success.");
                        z = true;
                    }
                    break;
                case 9:
                    AsyncResult asyncResult3 = (AsyncResult) message.obj;
                    if (asyncResult3.exception != null) {
                        EmUtils.showToast("Query failed.");
                    } else {
                        Elog.i(ModemTestActivity.TAG, "Query success.");
                        ModemTestActivity.this.handleQueryUnlock((String[]) asyncResult3.result);
                    }
                    break;
                case 10:
                    if (((AsyncResult) message.obj).exception != null) {
                        EmUtils.showToast("AT cmd failed.");
                    } else {
                        EmUtils.showToast("AT cmd success.");
                    }
                    break;
                case 11:
                    AsyncResult asyncResult4 = (AsyncResult) message.obj;
                    if (asyncResult4.exception != null) {
                        EmUtils.showToast("Query LAA failed.");
                    } else {
                        Elog.i(ModemTestActivity.TAG, "Query LAA success.");
                        ModemTestActivity.this.handleQueryLaa((String[]) asyncResult4.result);
                    }
                    break;
                case 12:
                    if (((AsyncResult) message.obj).exception != null) {
                        EmUtils.showToast("LAA AT cmd failed.");
                    } else {
                        EmUtils.showToast("LAA AT cmd success.");
                    }
                    break;
            }
            if (z) {
                Elog.i(ModemTestActivity.TAG, "disableAllButton.");
                ModemTestActivity.this.disableAllButton();
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void attachOrDetachGprs() {
        int i = this.mOperatorOption;
        if ((i & 128) == 0 && (i & 256) == 0) {
            Elog.v(TAG, "Dettach GPRS for DoCoMo/Softband");
            SystemProperties.set("persist.vendor.radio.gprs.attach.type", "0");
            EmUtils.invokeOemRilRequestStringsEm(new String[]{"AT+EGTYPE=0,1", ""}, null);
        } else {
            Elog.v(TAG, "Attach GPRS for DoCoMo/Softband");
            SystemProperties.set("persist.vendor.radio.gprs.attach.type", "1");
            EmUtils.invokeOemRilRequestStringsEm(new String[]{"AT+EGTYPE=1,1", ""}, null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void disableAllButton() {
        this.mNoneBtn.setEnabled(false);
        this.mFactoryBtn.setEnabled(false);
        this.mCtaBtn.setEnabled(false);
        this.mFtaBtn.setEnabled(false);
        this.mIotBtn.setEnabled(false);
        this.mOperatorBtn.setEnabled(false);
        this.mC2kBtn.setEnabled(false);
        this.mUnlockCheckBox.setEnabled(false);
        showDialog(REBOOT_DIALOG);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String getToastString(int i) {
        if (i == 0) {
            return "MODEM_NONE";
        }
        if (i == 1) {
            return "MODEM_CTA";
        }
        if (i == 2) {
            return "MODEM_FTA";
        }
        if (i == 3) {
            return "MODEM_IOT";
        }
        if (i != 5) {
            return i != 6 ? "" : "MODEM_FACTORY";
        }
        return "MODEM_OPERATOR";
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleQuery(String[] strArr) {
        if (strArr == null) {
            EmUtils.showToast("The returned data is wrong.");
            return;
        }
        Elog.i(TAG, "data length is " + strArr.length);
        int i = 0;
        int length = strArr.length;
        for (int i2 = 0; i2 < length; i2++) {
            String str = strArr[i2];
            if (str != null) {
                Elog.i(TAG, "data[" + i + "] is : " + str);
            }
            i++;
        }
        if (strArr.length <= 0 || strArr[0] == null || strArr[0].length() <= 6) {
            Elog.i(TAG, "The data returned is not right.");
            return;
        }
        String strSubstring = strArr[0].substring(7, strArr[0].length());
        Elog.i(TAG, "mode is " + strSubstring);
        if (strSubstring.length() < 3) {
            Elog.i(TAG, "mode len is " + strSubstring.length());
            return;
        }
        int i3 = 1;
        String strSubstring2 = strSubstring.substring(0, 1);
        String strSubstring3 = strSubstring.substring(2, strSubstring.length());
        Elog.i(TAG, "subMode is " + strSubstring2);
        Elog.i(TAG, "subCtaMode is " + strSubstring3);
        this.mCurrentMode = Integer.parseInt(strSubstring2);
        int i4 = Integer.parseInt(strSubstring3);
        this.mCurrentFlag = i4;
        handleQueryCdmaSimSetting(i4);
        if ("0".equals(strSubstring2)) {
            this.mTextView.setText("The current mode is none");
            return;
        }
        if ("1".equals(strSubstring2)) {
            this.mTextView.setText("The current mode is Integrity Off");
            return;
        }
        if ("2".equals(strSubstring2)) {
            this.mTextView.setText("The current mode is FTA:");
            try {
                int length2 = this.mFtaOptionsArray.length;
                Elog.i(TAG, "ftaLength is " + length2);
                int iIntValue = Integer.valueOf(strSubstring3).intValue();
                Elog.i(TAG, "val is " + iIntValue);
                String str2 = "The current mode is FTA: ";
                int i5 = 0;
                while (i5 < length2) {
                    Elog.i(TAG, "j ==== " + i5);
                    Elog.i(TAG, "(val & (1 << j)) is " + (iIntValue & (i3 << i5)));
                    if ((iIntValue & (1 << i5)) != 0) {
                        str2 = str2 + this.mFtaOptionsArray[i5] + ",";
                    }
                    i5++;
                    i3 = 1;
                }
                this.mTextView.setText(str2.substring(0, str2.length() - 1));
                return;
            } catch (NumberFormatException e) {
                e.printStackTrace();
                Elog.i(TAG, "Exception when transfer subFtaMode");
                return;
            }
        }
        if ("3".equals(strSubstring2)) {
            this.mTextView.setText("The current mode is IOT:");
            try {
                int length3 = this.mIotOptionsArray.length;
                Elog.i(TAG, "iotLength is " + length3);
                int iIntValue2 = Integer.valueOf(strSubstring3).intValue();
                Elog.i(TAG, "val is " + iIntValue2);
                String str3 = "The current mode is IOT: ";
                for (int i6 = 0; i6 < length3 - 1; i6++) {
                    Elog.i(TAG, "j ==== " + i6);
                    Elog.i(TAG, "(val & (1 << j)) is " + ((1 << i6) & iIntValue2));
                    if (((1 << i6) & iIntValue2) != 0) {
                        str3 = str3 + this.mIotOptionsArray[i6 + 1] + ",";
                    }
                }
                this.mTextView.setText(str3.substring(0, str3.length() - 1));
                return;
            } catch (NumberFormatException e2) {
                e2.printStackTrace();
                Elog.i(TAG, "Exception when transfer subIotMode");
                return;
            }
        }
        if (!"4".equals(strSubstring2)) {
            if ("5".equals(strSubstring2)) {
                this.mTextView.setText("The current mode is Factory.");
                return;
            }
            return;
        }
        this.mTextView.setText("The current mode is Operator.");
        try {
            int length4 = this.mOperatorOptionsArray.length;
            Elog.i(TAG, "operatorLength is " + length4);
            int iIntValue3 = Integer.valueOf(strSubstring3).intValue();
            Elog.i(TAG, "val is " + iIntValue3);
            String str4 = "The current mode is Operator: ";
            for (int i7 = 0; i7 < length4; i7++) {
                Elog.i(TAG, "j ==== " + i7);
                Elog.i(TAG, "(val & (1 << j)) is " + (iIntValue3 & (1 << i7)));
                if ((iIntValue3 & (1 << i7)) != 0) {
                    str4 = str4 + this.mOperatorOptionsArray[i7] + ",";
                }
            }
            this.mTextView.setText(str4.substring(0, str4.length() - 1));
        } catch (NumberFormatException e3) {
            e3.printStackTrace();
            Elog.i(TAG, "Exception when transfer subFtaMode");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleQueryCdma(String[] strArr) {
        if (strArr == null) {
            Toast.makeText(this, "The returned data is wrong.", 0).show();
            return;
        }
        Elog.i(TAG, "data length is " + strArr.length);
        int i = 0;
        int length = strArr.length;
        for (int i2 = 0; i2 < length; i2++) {
            String str = strArr[i2];
            if (str != null) {
                Elog.i(TAG, "data[" + i + "] is : " + str);
            }
            i++;
        }
        if (strArr[0].length() <= 6) {
            Elog.i(TAG, "The data returned is not right.");
            return;
        }
        String strTrim = strArr[0].substring(6, strArr[0].length()).trim();
        String strSubstring = strTrim.substring(1, strTrim.length() - 1);
        Elog.i(TAG, "mode is " + strSubstring);
        this.mTextView.setText(this.mTextView.getText().toString() + "\nThe current C2K mode is " + strSubstring);
    }

    private void handleQueryCdmaSimSetting(int i) {
        if ((1048576 & i) != 0) {
            Elog.d(TAG, "handleQueryCdmaSimSetting set check true");
            this.mFirstEntry = true;
            this.mCdmaSimSettingCheckBox.setChecked(true);
        } else {
            Elog.d(TAG, "handleQueryCdmaSimSetting set check false");
            this.mFirstEntry = false;
            this.mCdmaSimSettingCheckBox.setChecked(false);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleQueryLaa(String[] strArr) {
        if (strArr == null || strArr.length <= 0) {
            Toast.makeText(this, "The returned data is wrong.", 0).show();
            return;
        }
        if (strArr[0].length() <= "+ESBP:".length()) {
            Elog.i(TAG, "LAA: The data returned is not right.");
            return;
        }
        String strTrim = strArr[0].substring("+ESBP:".length()).trim();
        Elog.i(TAG, "laa vale is " + strTrim);
        int i = Integer.parseInt(strTrim);
        this.mLaaCheckBox.setOnCheckedChangeListener(null);
        this.mLaaCheckBox.setChecked(i == 1);
        this.mLaaCheckBox.setOnCheckedChangeListener(this);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleQueryUnlock(String[] strArr) {
        if (strArr == null || strArr.length <= 0) {
            Toast.makeText(this, "The returned data is wrong.", 0).show();
            return;
        }
        if (strArr[0].length() <= "+ECLSC:".length()) {
            Elog.i(TAG, "The data returned is not right.");
            return;
        }
        String strTrim = strArr[0].substring("+ECLSC:".length()).trim();
        Elog.i(TAG, "unlock setting is " + strTrim);
        int i = Integer.parseInt(strTrim);
        this.mUnlockCheckBox.setOnCheckedChangeListener(null);
        this.mUnlockCheckBox.setChecked(i == 1);
        this.mUnlockCheckBox.setOnCheckedChangeListener(this);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void queryCdmaOption() {
        EmUtils.invokeOemRilRequestStringsEm(true, ModemCategory.getCdmaCmdArr(new String[]{"AT+ECTM?", "+ECTM:", "DESTRILD:C2K"}), this.mATCmdHander.obtainMessage(7));
    }

    private void queryLaaSettings() {
        EmUtils.invokeOemRilRequestStringsEm(new String[]{"AT+ESBP=7,\"SBP_MP_LTE_DOWNLINK_LAA_r13\"", "+ESBP:"}, this.mATCmdHander.obtainMessage(11));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void queryUnlockOption() {
        EmUtils.invokeOemRilRequestStringsEm(true, ModemCategory.getCdmaCmdArr(new String[]{"AT+ECLSC?", "+ECLSC:", "DESTRILD:C2K"}), this.mATCmdHander.obtainMessage(9));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendATCommad(String str, int i, int i2) {
        this.mCurrentFlag = (this.mCurrentFlag & 16711680) | i;
        String[] strArr = {"AT+EPCT=" + str + "," + this.mCurrentFlag, ""};
        StringBuilder sb = new StringBuilder();
        sb.append("cmd = ");
        sb.append(strArr[0]);
        Elog.v(TAG, sb.toString());
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mATCmdHander.obtainMessage(i2));
    }

    private void sendATCommandCdma(String str, int i) {
        String[] cdmaCmdArr = ModemCategory.getCdmaCmdArr(new String[]{"AT+ECTM=" + str, "", "DESTRILD:C2K"});
        EmUtils.invokeOemRilRequestStringsEm(true, cdmaCmdArr, this.mATCmdHander.obtainMessage(i));
        cdmaCmdArr[0] = "AT+RFSSYNC";
        EmUtils.invokeOemRilRequestStringsEm(true, cdmaCmdArr, (Message) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setCdmaOption() {
        if (this.mCdmaOption == 1) {
            sendATCommandCdma("\"SPIRENT\"", 8);
        } else {
            sendATCommandCdma("\"NONE\"", 8);
        }
    }

    private void setCdmaSimSettingOption(boolean z) {
        this.mCurrentFlag = z ? this.mCurrentFlag | 1048576 : this.mCurrentFlag & (-1048577);
        EmUtils.invokeOemRilRequestStringsEm(new String[]{"AT+EPCT=" + this.mCurrentMode + "," + this.mCurrentFlag, ""}, this.mATCmdHander.obtainMessage(10));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setGprsTransferType(int i) {
        String str = i == 0 ? "1" : "0";
        Elog.v(TAG, "Change persist.radio.gprs.prefer to " + str);
        try {
            EmUtils.getEmHidlService().setPreferGprsMode(str);
        } catch (Exception e) {
            e.printStackTrace();
            Elog.e(TAG, "set property failed ...");
        }
        for (int i2 = 0; i2 < TelephonyManager.getDefault().getPhoneCount(); i2++) {
            EmUtils.invokeOemRilRequestStringsEm(i2, new String[]{"AT+EGTP=" + i, ""}, (Message) null);
            EmUtils.invokeOemRilRequestStringsEm(i2, new String[]{"AT+EMPPCH=" + i, ""}, (Message) null);
        }
    }

    private void setLaaSettings(boolean z) {
        Elog.d(TAG, "setLaaSettings = " + z);
        EmUtils.invokeOemRilRequestStringsEm(new String[]{"AT+ESBP=9,2", ""}, null);
        String[] strArr = new String[2];
        StringBuilder sb = new StringBuilder();
        sb.append("AT+ESBP=5,\"SBP_MP_LTE_DOWNLINK_LAA_r13\",");
        sb.append(z ? "1" : "0");
        strArr[0] = sb.toString();
        strArr[1] = "";
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mATCmdHander.obtainMessage(12));
    }

    private void setUnlockOption(boolean z) {
        int i = this.mCurrentFlag;
        this.mCurrentFlag = z ? i | 2097152 : i & (-2097153);
        EmUtils.invokeOemRilRequestStringsEm(new String[]{"AT+EPCT=" + this.mCurrentMode + "," + this.mCurrentFlag, ""}, this.mATCmdHander.obtainMessage(10));
        String[] strArr = new String[3];
        StringBuilder sb = new StringBuilder();
        sb.append("AT+ECLSC=");
        sb.append(z ? "1" : "0");
        strArr[0] = sb.toString();
        strArr[1] = "";
        strArr[2] = "DESTRILD:C2K";
        EmUtils.invokeOemRilRequestStringsEm(true, ModemCategory.getCdmaCmdArr(strArr), this.mATCmdHander.obtainMessage(10));
        EmUtils.invokeOemRilRequestStringsEm(true, ModemCategory.getCdmaCmdArr(new String[]{"AT+RFSSYNC", "", "DESTRILD:C2K"}), (Message) null);
    }

    @Override // android.widget.CompoundButton.OnCheckedChangeListener
    public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
        if (compoundButton.getId() == R.id.modem_test_unlock) {
            setUnlockOption(z);
        }
        if (compoundButton.getId() != R.id.modem_test_cdma_sim_setting) {
            if (compoundButton.getId() == R.id.modem_test_laa_setting) {
                setLaaSettings(z);
            }
        } else {
            setCdmaSimSettingOption(z);
            if (this.mFirstEntry) {
                this.mFirstEntry = false;
            } else {
                showDialog(REBOOT_DIALOG);
            }
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.modem_test_activity_6589);
        String[] strArr = {"AT+EPCT?", "+EPCT:"};
        View.OnClickListener onClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                switch (view.getId()) {
                    case R.id.modem_test_c2k_btn /* 2131101080 */:
                        ModemTestActivity.this.showDialog(8);
                        break;
                    case R.id.modem_test_cta_btn /* 2131101082 */:
                        ModemTestActivity.this.sendATCommad("1", 0, 1);
                        if (ModemTestActivity.this.mCurrentMode == 2) {
                            ModemTestActivity.this.setGprsTransferType(1);
                        }
                        break;
                    case R.id.modem_test_factory_btn /* 2131101083 */:
                        ModemTestActivity.this.sendATCommad("5", 0, 6);
                        if (ModemTestActivity.this.mCurrentMode == 2) {
                            ModemTestActivity.this.setGprsTransferType(1);
                        }
                        break;
                    case R.id.modem_test_fta_btn /* 2131101084 */:
                        ModemTestActivity.this.showDialog(2);
                        break;
                    case R.id.modem_test_iot_btn /* 2131101085 */:
                        ModemTestActivity.this.showDialog(3);
                        break;
                    case R.id.modem_test_none_btn /* 2131101087 */:
                        ModemTestActivity.this.sendATCommad("0", 0, 0);
                        if (ModemTestActivity.this.mCurrentMode == 2) {
                            ModemTestActivity.this.setGprsTransferType(1);
                        }
                        break;
                    case R.id.modem_test_operator_btn /* 2131101088 */:
                        ModemTestActivity.this.showDialog(5);
                        break;
                }
            }
        };
        this.mTextView = (TextView) findViewById(R.id.modem_test_textview);
        this.mNoneBtn = (Button) findViewById(R.id.modem_test_none_btn);
        Button button = (Button) findViewById(R.id.modem_test_factory_btn);
        this.mFactoryBtn = button;
        button.setOnClickListener(onClickListener);
        Button button2 = (Button) findViewById(R.id.modem_test_cta_btn);
        this.mCtaBtn = button2;
        button2.setOnClickListener(onClickListener);
        this.mFtaBtn = (Button) findViewById(R.id.modem_test_fta_btn);
        this.mIotBtn = (Button) findViewById(R.id.modem_test_iot_btn);
        this.mOperatorBtn = (Button) findViewById(R.id.modem_test_operator_btn);
        this.mC2kBtn = (Button) findViewById(R.id.modem_test_c2k_btn);
        this.mUnlockCheckBox = (CheckBox) findViewById(R.id.modem_test_unlock);
        this.mCdmaSimSettingCheckBox = (CheckBox) findViewById(R.id.modem_test_cdma_sim_setting);
        this.mNoneBtn.setOnClickListener(onClickListener);
        this.mFtaBtn.setOnClickListener(onClickListener);
        this.mIotBtn.setOnClickListener(onClickListener);
        this.mOperatorBtn.setOnClickListener(onClickListener);
        this.mC2kBtn.setOnClickListener(onClickListener);
        this.mUnlockCheckBox.setOnCheckedChangeListener(this);
        this.mCdmaSimSettingCheckBox.setOnCheckedChangeListener(this);
        CheckBox checkBox = (CheckBox) findViewById(R.id.modem_test_laa_setting);
        this.mLaaCheckBox = checkBox;
        checkBox.setOnCheckedChangeListener(this);
        queryLaaSettings();
        this.mTextView.setText("The current mode is unknown");
        this.mFtaOptionsArray = getResources().getStringArray(R.array.modem_test_fta_options);
        this.mIotOptionsArray = getResources().getStringArray(R.array.modem_test_iot_options_6589);
        this.mOperatorOptionsArray = getResources().getStringArray(R.array.modem_test_operator_options_6589);
        if (!ModemCategory.isCdma()) {
            this.mC2kBtn.setVisibility(8);
            this.mUnlockCheckBox.setVisibility(8);
        }
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mATCmdHander.obtainMessage(4));
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i == 1) {
            return new AlertDialog.Builder(this).setTitle("MODEM TEST").setMultiChoiceItems(R.array.modem_test_cta_options, new boolean[]{false, false, false, false, false, false, false, false, false}, new DialogInterface.OnMultiChoiceClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.5
                @Override // android.content.DialogInterface.OnMultiChoiceClickListener
                public void onClick(DialogInterface dialogInterface, int i2, boolean z) {
                    Elog.v(ModemTestActivity.TAG, "whichButton = " + i2);
                    Elog.v(ModemTestActivity.TAG, "isChecked = " + z);
                    if (z) {
                        ModemTestActivity.this.mCtaOption += 1 << i2;
                    } else {
                        ModemTestActivity.this.mCtaOption -= 1 << i2;
                    }
                    Elog.v(ModemTestActivity.TAG, "mCtaOption = " + ModemTestActivity.this.mCtaOption);
                }
            }).setPositiveButton("Send", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.4
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    ModemTestActivity modemTestActivity = ModemTestActivity.this;
                    modemTestActivity.sendATCommad("1", modemTestActivity.mCtaOption, 1);
                    if (ModemTestActivity.this.mCurrentMode == 2) {
                        ModemTestActivity.this.setGprsTransferType(1);
                    }
                }
            }).setNegativeButton("Cancel", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.3
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    ModemTestActivity.this.mCtaOption = 0;
                }
            }).create();
        }
        if (i == 2) {
            return new AlertDialog.Builder(this).setTitle("MODEM TEST").setMultiChoiceItems(R.array.modem_test_fta_options, new boolean[]{false, false, false, false, false, false, false, false, false}, new DialogInterface.OnMultiChoiceClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.8
                @Override // android.content.DialogInterface.OnMultiChoiceClickListener
                public void onClick(DialogInterface dialogInterface, int i2, boolean z) {
                    Elog.v(ModemTestActivity.TAG, "whichButton = " + i2);
                    Elog.v(ModemTestActivity.TAG, "isChecked = " + z);
                    if (z) {
                        ModemTestActivity.this.mFtaOption += 1 << i2;
                    } else {
                        ModemTestActivity.this.mFtaOption -= 1 << i2;
                    }
                    Elog.v(ModemTestActivity.TAG, "mFtaOption = " + ModemTestActivity.this.mFtaOption);
                }
            }).setPositiveButton("Send", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.7
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    ModemTestActivity modemTestActivity = ModemTestActivity.this;
                    modemTestActivity.sendATCommad("2", modemTestActivity.mFtaOption, 2);
                    ModemTestActivity.this.setGprsTransferType(0);
                }
            }).setNegativeButton("Cancel", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.6
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    ModemTestActivity.this.mFtaOption = 0;
                }
            }).create();
        }
        if (i == 3) {
            return new AlertDialog.Builder(this).setTitle("MODEM TEST").setMultiChoiceItems(R.array.modem_test_iot_options_6589, new boolean[]{false, false, false, false, false, false, false, false, false}, new DialogInterface.OnMultiChoiceClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.11
                @Override // android.content.DialogInterface.OnMultiChoiceClickListener
                public void onClick(DialogInterface dialogInterface, int i2, boolean z) {
                    Elog.v(ModemTestActivity.TAG, "whichButton = " + i2);
                    Elog.v(ModemTestActivity.TAG, "isChecked = " + z);
                    if (i2 > 0) {
                        if (z) {
                            ModemTestActivity.this.mIotOption += 1 << (i2 - 1);
                        } else {
                            ModemTestActivity.this.mIotOption -= 1 << (i2 - 1);
                        }
                    }
                    Elog.v(ModemTestActivity.TAG, "mIotOption = " + ModemTestActivity.this.mIotOption);
                }
            }).setPositiveButton("Send", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.10
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    ModemTestActivity modemTestActivity = ModemTestActivity.this;
                    modemTestActivity.sendATCommad("3", modemTestActivity.mIotOption, 3);
                    if (ModemTestActivity.this.mCurrentMode == 2) {
                        ModemTestActivity.this.setGprsTransferType(1);
                    }
                }
            }).setNegativeButton("Cancel", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.9
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    ModemTestActivity.this.mIotOption = 0;
                }
            }).create();
        }
        if (i == 5) {
            return new AlertDialog.Builder(this).setTitle("MODEM TEST").setMultiChoiceItems(R.array.modem_test_operator_options_6589, new boolean[]{false, false, false, false, false, false, false, false, false, false, false, false, false, false, false}, new DialogInterface.OnMultiChoiceClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.14
                @Override // android.content.DialogInterface.OnMultiChoiceClickListener
                public void onClick(DialogInterface dialogInterface, int i2, boolean z) {
                    Elog.v(ModemTestActivity.TAG, "whichButton = " + i2);
                    Elog.v(ModemTestActivity.TAG, "isChecked = " + z);
                    if (z) {
                        ModemTestActivity.this.mOperatorOption += 1 << i2;
                    } else {
                        ModemTestActivity.this.mOperatorOption -= 1 << i2;
                    }
                    Elog.v(ModemTestActivity.TAG, "mOperatorOption = " + ModemTestActivity.this.mOperatorOption);
                }
            }).setPositiveButton("Send", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.13
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    ModemTestActivity.this.attachOrDetachGprs();
                    ModemTestActivity modemTestActivity = ModemTestActivity.this;
                    modemTestActivity.sendATCommad("4", modemTestActivity.mOperatorOption, 5);
                    if (ModemTestActivity.this.mCurrentMode == 2) {
                        ModemTestActivity.this.setGprsTransferType(1);
                    }
                }
            }).setNegativeButton("Cancel", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.12
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    ModemTestActivity.this.mOperatorOption = 0;
                }
            }).create();
        }
        if (i == 8) {
            return new AlertDialog.Builder(this).setTitle("MODEM TEST").setSingleChoiceItems(R.array.modem_test_c2k_options, -1, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.17
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    Elog.v(ModemTestActivity.TAG, "whichButton = " + i2);
                    ModemTestActivity.this.mCdmaOption = i2;
                    Elog.v(ModemTestActivity.TAG, "mCdmaOption = " + ModemTestActivity.this.mCdmaOption);
                }
            }).setPositiveButton("Send", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.16
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    ModemTestActivity.this.setCdmaOption();
                }
            }).setNegativeButton("Cancel", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.modemtest.ModemTestActivity.15
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    ModemTestActivity.this.mCdmaOption = 0;
                }
            }).create();
        }
        if (i != REBOOT_DIALOG) {
            return null;
        }
        return new AlertDialog.Builder(this).setTitle("MODEM TEST").setMessage("Please reboot the phone!").setPositiveButton("OK", (DialogInterface.OnClickListener) null).create();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        this.mCtaOption = 0;
        this.mIotOption = 0;
        this.mFtaOption = 0;
        this.mOperatorOption = 0;
        this.mCdmaOption = 0;
    }
}
