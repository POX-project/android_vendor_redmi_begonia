package com.mediatek.engineermode.ims;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.EditText;
import android.widget.FrameLayout;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes2.dex */
public class imsSettingPageActivity extends Activity implements View.OnClickListener {
    private static final int DIALOG_MANUAL = 1;
    private static final int MSG_QUERY = 0;
    private static final int MSG_SET = 1;
    private static final String PROP_IMS_PCT_CONFIG = "vendor.ril.volte.mal.pctid";
    private static final String TAG = "Ims/imsSettingPage";
    private static final int TYPE_MULTI = 3;
    private static final int TYPE_NUMBER = 0;
    private static final int TYPE_SINGLE = 2;
    private static final int TYPE_SPINNER = 4;
    private static final int TYPE_TEXT = 1;
    private ViewGroup mList;
    private int mSimType;
    private Toast mToast;
    private ArrayList<Setting> mSetting = new ArrayList<>();
    private ArrayList<SettingView> mSettingView = new ArrayList<>();
    private String mSettingRule = "Setting Rule:<digit of list num><list num><mnc_len><MNC><mcc_len><MCC>...";
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.ims.imsSettingPageActivity.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 0) {
                if (message.what == 1) {
                    if (((AsyncResult) message.obj).exception == null) {
                        imsSettingPageActivity.this.showToast("Set successful.");
                        Elog.d(imsSettingPageActivity.TAG, "Set successful.");
                        return;
                    } else {
                        imsSettingPageActivity.this.showToast("Set failed.");
                        Elog.d(imsSettingPageActivity.TAG, "Set failed.");
                        return;
                    }
                }
                return;
            }
            AsyncResult asyncResult = (AsyncResult) message.obj;
            if (asyncResult.exception != null) {
                Toast.makeText(imsSettingPageActivity.this, "Query failed for " + ((SettingView) asyncResult.userObj).setting.label, 0).show();
                return;
            }
            String[] strArr = (String[]) asyncResult.result;
            if (strArr == null || strArr.length <= 0 || strArr[0] == null) {
                return;
            }
            ((SettingView) asyncResult.userObj).setValue(imsSettingPageActivity.this.parseCommandResponse(strArr[0]));
            if (((SettingView) asyncResult.userObj).setting.label.equals("mncmcc check") && imsSettingPageActivity.this.parseCommandResponse(strArr[0]).equals("1")) {
                imsSettingPageActivity imssettingpageactivity = imsSettingPageActivity.this;
                imssettingpageactivity.sendCommand("mncmcc_whitelist", imssettingpageactivity.getSettingView("white list"));
            }
            if (((SettingView) asyncResult.userObj).setting.label.equals("white list")) {
                ((SettingView) asyncResult.userObj).label.setText("white list: \n" + imsSettingPageActivity.this.parseCommandResponse(strArr[0]));
            }
        }
    };

    private class SettingEditTextView extends SettingView {
        public EditText mEditText;

        public SettingEditTextView(Context context, Setting setting, int i) {
            super(context, setting);
            EditText editText = (EditText) findViewById(R.id.ims_config_edit_text);
            this.mEditText = editText;
            if (i == 0) {
                editText.setInputType(2);
            }
            findViewById(R.id.ims_config_edit_layout).setVisibility(0);
            this.mEditText.setText(setting.defaultValue);
            if (setting.label.equals("white list")) {
                this.mEditText.setVisibility(8);
            }
        }

        @Override // com.mediatek.engineermode.ims.imsSettingPageActivity.SettingView
        protected String getValue() {
            return this.mEditText.getText().toString();
        }

        @Override // com.mediatek.engineermode.ims.imsSettingPageActivity.SettingView
        protected void setValue(String str) {
            this.mEditText.setText(str);
        }
    }

    private class SettingMultiSelectView extends SettingView {
        private CheckBox[] mCheckboxes;

        public SettingMultiSelectView(Context context, Setting setting) {
            super(context, setting);
            ViewGroup viewGroup = (ViewGroup) findViewById(R.id.ims_config_checkbox_list);
            viewGroup.setVisibility(0);
            viewGroup.removeAllViews();
            this.mCheckboxes = new CheckBox[setting.entries.size()];
            for (int i = 0; i < setting.entries.size(); i++) {
                CheckBox checkBox = new CheckBox(imsSettingPageActivity.this);
                checkBox.setText(setting.entries.get(i));
                checkBox.setTag(setting.values.get(i));
                if ((setting.values.get(i).intValue() & imsSettingPageActivity.this.parseInt(setting.defaultValue)) > 0) {
                    checkBox.setChecked(true);
                }
                viewGroup.addView(checkBox);
                this.mCheckboxes[i] = checkBox;
            }
        }

        @Override // com.mediatek.engineermode.ims.imsSettingPageActivity.SettingView
        protected String getValue() {
            int iIntValue = 0;
            int i = 0;
            while (true) {
                CheckBox[] checkBoxArr = this.mCheckboxes;
                if (i >= checkBoxArr.length) {
                    return String.valueOf(iIntValue);
                }
                if (checkBoxArr[i].isChecked()) {
                    iIntValue |= ((Integer) this.mCheckboxes[i].getTag()).intValue();
                }
                i++;
            }
        }

        @Override // com.mediatek.engineermode.ims.imsSettingPageActivity.SettingView
        protected void setValue(String str) {
            int i = imsSettingPageActivity.this.parseInt(str);
            int i2 = 0;
            while (true) {
                CheckBox[] checkBoxArr = this.mCheckboxes;
                if (i2 >= checkBoxArr.length) {
                    return;
                }
                if (i <= 0 || (((Integer) checkBoxArr[i2].getTag()).intValue() & i) <= 0) {
                    this.mCheckboxes[i2].setChecked(false);
                } else {
                    this.mCheckboxes[i2].setChecked(true);
                }
                i2++;
            }
        }
    }

    private class SettingSingleSelectView extends SettingView {
        private RadioGroup mRadioGroup;
        private RadioButton[] mRadios;

        public SettingSingleSelectView(Context context, Setting setting) {
            super(context, setting);
            RadioGroup radioGroup = (RadioGroup) findViewById(R.id.ims_config_radio_group);
            this.mRadioGroup = radioGroup;
            radioGroup.setVisibility(0);
            this.mRadioGroup.removeAllViews();
            this.mRadios = new RadioButton[setting.entries.size()];
            for (int i = 0; i < setting.entries.size(); i++) {
                RadioButton radioButton = new RadioButton(imsSettingPageActivity.this);
                radioButton.setText(setting.entries.get(i));
                radioButton.setTag(setting.values.get(i));
                this.mRadioGroup.addView(radioButton);
                this.mRadios[i] = radioButton;
                if (setting.values.get(i).intValue() == imsSettingPageActivity.this.parseInt(setting.defaultValue)) {
                    this.mRadioGroup.check(radioButton.getId());
                }
            }
        }

        @Override // com.mediatek.engineermode.ims.imsSettingPageActivity.SettingView
        protected String getValue() {
            int i = 0;
            while (true) {
                RadioButton[] radioButtonArr = this.mRadios;
                if (i >= radioButtonArr.length) {
                    return "";
                }
                if (radioButtonArr[i].isChecked()) {
                    return String.valueOf((Integer) this.mRadios[i].getTag());
                }
                i++;
            }
        }

        @Override // com.mediatek.engineermode.ims.imsSettingPageActivity.SettingView
        protected void setValue(String str) {
            Elog.i(imsSettingPageActivity.TAG, "setValue " + this.setting.label + ", " + str);
            int i = imsSettingPageActivity.this.parseInt(str);
            int i2 = 0;
            while (true) {
                RadioButton[] radioButtonArr = this.mRadios;
                if (i2 >= radioButtonArr.length) {
                    return;
                }
                if (i == ((Integer) radioButtonArr[i2].getTag()).intValue()) {
                    this.mRadioGroup.check(this.mRadios[i2].getId());
                }
                i2++;
            }
        }
    }

    private class SettingSpinnerSelectView extends SettingView {
        public int[] mAdapterValues;
        public ArrayList<String> mListData;
        public Spinner mSpinner;

        public SettingSpinnerSelectView(Context context, Setting setting) {
            super(context, setting);
            this.mSpinner = (Spinner) findViewById(R.id.ims_config_spinner);
            findViewById(R.id.ims_config_spinner_layout).setVisibility(0);
            this.mListData = new ArrayList<>();
            this.mAdapterValues = new int[setting.entries.size()];
            for (int i = 0; i < setting.entries.size(); i++) {
                this.mListData.add(setting.entries.get(i));
                this.mAdapterValues[i] = setting.values.get(i).intValue();
            }
            ArrayAdapter arrayAdapter = new ArrayAdapter(imsSettingPageActivity.this, android.R.layout.simple_spinner_item, this.mListData);
            arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
            this.mSpinner.setAdapter((SpinnerAdapter) arrayAdapter);
            for (int i2 = 0; i2 < setting.entries.size(); i2++) {
                if (this.mAdapterValues[i2] == imsSettingPageActivity.this.parseInt(setting.defaultValue)) {
                    this.mSpinner.setSelection(i2, true);
                }
            }
        }

        @Override // com.mediatek.engineermode.ims.imsSettingPageActivity.SettingView
        protected String getValue() {
            int selectedItemPosition = this.mSpinner.getSelectedItemPosition();
            if (selectedItemPosition < 0) {
                return "";
            }
            int[] iArr = this.mAdapterValues;
            return selectedItemPosition < iArr.length ? String.valueOf(iArr[selectedItemPosition]) : "";
        }

        @Override // com.mediatek.engineermode.ims.imsSettingPageActivity.SettingView
        protected void setValue(String str) {
            Elog.d(imsSettingPageActivity.TAG, "setValue " + this.setting.label + ", " + str);
            int i = imsSettingPageActivity.this.parseInt(str);
            int i2 = 0;
            while (true) {
                int[] iArr = this.mAdapterValues;
                if (i2 >= iArr.length) {
                    return;
                }
                if (i == iArr[i2]) {
                    this.mSpinner.setSelection(i2, true);
                }
                i2++;
            }
        }
    }

    private abstract class SettingView extends FrameLayout {
        public Button button;
        public TextView label;
        public Setting setting;

        public SettingView(Context context, Setting setting) {
            super(context);
            addView(imsSettingPageActivity.this.getLayoutInflater().inflate(R.layout.ims_config_view, (ViewGroup) null));
            this.setting = setting;
            this.label = (TextView) findViewById(R.id.ims_config_label);
            TextView textView = (TextView) findViewById(R.id.ims_config_suffix);
            this.button = (Button) findViewById(R.id.ims_config_set);
            this.label.setText(setting.label + ":");
            textView.setText(setting.suffix);
            if (setting.label.equals("white list")) {
                Elog.d(imsSettingPageActivity.TAG, "setting.label" + setting.label);
                this.button.setVisibility(8);
            }
            this.button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.ims.imsSettingPageActivity.SettingView.1
                @Override // android.view.View.OnClickListener
                public void onClick(View view) {
                    SettingView.this.send();
                }
            });
            if (setting.label.equals("Authentication")) {
                imsSettingPageActivity.this.sendCommand("UA_reg_http_digest", this);
                return;
            }
            if (setting.label.equals("Security")) {
                imsSettingPageActivity.this.sendCommand("UA_net_ipsec", this);
                return;
            }
            if (setting.label.equals("USSD Support")) {
                imsSettingPageActivity.this.sendCommand("ussd_support", this);
                return;
            }
            if (setting.label.equals("USSD NW Timeout")) {
                imsSettingPageActivity.this.sendCommand("ussd_nw_timeout_timer", this);
                return;
            }
            if (setting.label.equals("USSD Setup Timeout")) {
                imsSettingPageActivity.this.sendCommand("ussd_setup_timeout_timer", this);
                return;
            }
            if (setting.label.equals("mncmcc check")) {
                imsSettingPageActivity.this.sendCommand("mncmcc_pass_flag", this);
                return;
            }
            if (setting.label.equals("white list")) {
                Elog.d(imsSettingPageActivity.TAG, "Don't do anything!");
                return;
            }
            if (setting.label.equals(imsSettingPageActivity.this.mSettingRule)) {
                Elog.d(imsSettingPageActivity.TAG, "Don't do anything!");
                return;
            }
            if (setting.label.equals("operator_code_textview")) {
                imsSettingPageActivity.this.sendCommand("operator_code", this);
            } else if (setting.label.equals("reset_ims_to_default")) {
                Elog.d(imsSettingPageActivity.TAG, "Don't do anything!");
            } else {
                imsSettingPageActivity.this.sendCommand(setting.label, this);
            }
        }

        protected abstract String getValue();

        public void send() {
            if (this.setting.label.equals("Authentication")) {
                imsSettingPageActivity.this.sendCommand("UA_reg_http_digest", getValue());
                return;
            }
            if (this.setting.label.equals("force_user_account_by_manual") && getValue().equals("1")) {
                imsSettingPageActivity.this.showDialog(1);
                return;
            }
            if (this.setting.label.equals("Security")) {
                imsSettingPageActivity.this.sendCommand("UA_net_ipsec", getValue());
                return;
            }
            if (this.setting.label.equals("USSD Support")) {
                imsSettingPageActivity.this.sendCommand("ussd_support", getValue());
                return;
            }
            if (this.setting.label.equals("USSD NW Timeout")) {
                imsSettingPageActivity.this.sendCommand("ussd_nw_timeout_timer", getValue());
                return;
            }
            if (this.setting.label.equals("USSD Setup Timeout")) {
                imsSettingPageActivity.this.sendCommand("ussd_setup_timeout_timer", getValue());
                return;
            }
            if (this.setting.label.equals("mncmcc check")) {
                Elog.d(imsSettingPageActivity.TAG, "button.getText().toString()" + this.button.getText().toString());
                imsSettingPageActivity.this.sendCommand("mncmcc_pass_flag", getValue());
                return;
            }
            if (this.setting.label.equals("white list")) {
                imsSettingPageActivity.this.sendCommand("mncmcc_whitelist", this);
                return;
            }
            if (this.setting.label.equals(imsSettingPageActivity.this.mSettingRule)) {
                imsSettingPageActivity.this.sendCommand("mncmcc_whitelist", getValue());
                return;
            }
            if (this.setting.label.equals("ch_send")) {
                int i = imsSettingPageActivity.this.parseInt(getValue());
                if (i < 1 || i > 10) {
                    imsSettingPageActivity.this.showToast("The ch_send should be 1~10, please reset it");
                    return;
                } else {
                    imsSettingPageActivity.this.sendCommand(this.setting.label, getValue());
                    return;
                }
            }
            if (this.setting.label.equals("ch_recv")) {
                int i2 = imsSettingPageActivity.this.parseInt(getValue());
                if (i2 < 1 || i2 > 10) {
                    imsSettingPageActivity.this.showToast("The ch_recv should be 1~10, please reset it");
                    return;
                } else {
                    imsSettingPageActivity.this.sendCommand(this.setting.label, getValue());
                    return;
                }
            }
            if (this.setting.label.equals("reset_ims_to_default")) {
                imsSettingPageActivity.this.sendCommand(this.setting.label);
                return;
            }
            if (this.setting.label.equals("operator_code_textview")) {
                imsSettingPageActivity.this.sendCommand("operator_code", getValue());
                return;
            }
            imsSettingPageActivity.this.sendCommand(this.setting.label, getValue());
            if (this.setting.label.equals("operator_code")) {
                String value = getValue();
                if (getValue().equals("16387")) {
                    value = "OP16387";
                    imsSettingPageActivity.this.sendCommandWansOpId("wans_op_id", getValue());
                }
                try {
                    EmUtils.getEmHidlService().setVolteMalPctid(value);
                } catch (Exception e) {
                    e.printStackTrace();
                    Elog.e(imsSettingPageActivity.TAG, "set property failed ...");
                }
            }
        }

        protected abstract void setValue(String str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public SettingView getSettingView(String str) {
        for (SettingView settingView : this.mSettingView) {
            if (settingView.setting.label.equals(str)) {
                return settingView;
            }
        }
        return null;
    }

    private void initializeViews() {
        this.mList.removeAllViews();
        for (Setting setting : this.mSetting) {
            SettingView settingEditTextView = null;
            int type = setting.getType();
            if (type == 0 || type == 1) {
                settingEditTextView = new SettingEditTextView(this, setting, setting.getType());
            } else if (type == 2) {
                settingEditTextView = new SettingSingleSelectView(this, setting);
            } else if (type == 3) {
                settingEditTextView = new SettingMultiSelectView(this, setting);
            } else if (type == 4) {
                settingEditTextView = new SettingSpinnerSelectView(this, setting);
            }
            if (settingEditTextView != null) {
                if (!setting.getLabel().equals("manual_impi") && !setting.getLabel().equals("manual_impu") && !setting.getLabel().equals("manual_domain_name")) {
                    this.mList.addView(settingEditTextView);
                }
                this.mSettingView.add(settingEditTextView);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String parseCommandResponse(String str) {
        Elog.d(TAG, "raw data: " + str);
        Matcher matcher = Pattern.compile("\\+ECFGGET:\\s*\".*\"\\s*,\\s*\"(.*)\"").matcher(str);
        if (matcher.find()) {
            String strGroup = matcher.group(1);
            Elog.d(TAG, "value: " + strGroup);
            return strGroup;
        }
        Elog.d(TAG, "wrong format: " + str);
        showToast("wrong format: " + str);
        return "";
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int parseInt(String str) {
        try {
            return Integer.parseInt(str);
        } catch (NumberFormatException e) {
            showToast("Wrong integer format: " + str);
            return -1;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendCommand(String str) {
        Message messageObtainMessage = this.mHandler.obtainMessage(1);
        Elog.d(TAG, "AT+ECFGSET=\"" + str + "\"");
        EmUtils.invokeOemRilRequestStringsEm(this.mSimType, new String[]{"AT+ECFGSET=\"" + str + "\"", ""}, messageObtainMessage);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendCommand(String str, View view) {
        Message messageObtainMessage = this.mHandler.obtainMessage(0, view);
        Elog.d(TAG, "AT+ECFGGET=\"" + str + "\"");
        EmUtils.invokeOemRilRequestStringsEm(this.mSimType, new String[]{"AT+ECFGGET=\"" + str + "\"", "+ECFGGET:"}, messageObtainMessage);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendCommand(String str, String str2) {
        Message messageObtainMessage = this.mHandler.obtainMessage(1);
        Elog.d(TAG, "AT+ECFGSET=\"" + str + "\",\"" + str2 + "\"");
        EmUtils.invokeOemRilRequestStringsEm(this.mSimType, new String[]{"AT+ECFGSET=\"" + str + "\",\"" + str2 + "\"", ""}, messageObtainMessage);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendCommandWansOpId(String str, String str2) {
        Message messageObtainMessage = this.mHandler.obtainMessage(1);
        Elog.d(TAG, "AT+EIWLCFGSET=\"" + str + "\",\"" + str2 + "\"");
        EmUtils.invokeOemRilRequestStringsEm(this.mSimType, new String[]{"AT+EIWLCFGSET=\"" + str + "\",\"" + str2 + "\"", ""}, messageObtainMessage);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showToast(String str) {
        Toast toast = this.mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(this, str, 0);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        Elog.d(TAG, "onClick");
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.ims_setting);
        this.mList = (ViewGroup) findViewById(R.id.ims_setting_view);
        this.mSetting = (ArrayList) getIntent().getSerializableExtra("mSettingDisplay");
        this.mSimType = getIntent().getIntExtra("mSimType", 0);
        Elog.d(TAG, "mSimType " + this.mSimType);
        initializeViews();
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i, Bundle bundle) {
        if (i != 1) {
            return super.onCreateDialog(i);
        }
        View viewInflate = getLayoutInflater().inflate(R.layout.ims_dialog_config, (ViewGroup) null);
        ViewGroup viewGroup = (ViewGroup) viewInflate.findViewById(R.id.ims_item_list);
        final ArrayList arrayList = new ArrayList();
        final ArrayList arrayList2 = new ArrayList();
        for (SettingView settingView : this.mSettingView) {
            if (settingView.setting.getLabel().equals("manual_impi") || settingView.setting.getLabel().equals("manual_impu") || settingView.setting.getLabel().equals("manual_domain_name")) {
                SettingEditTextView settingEditTextView = new SettingEditTextView(this, settingView.setting, 1);
                settingEditTextView.setValue(settingView.getValue());
                arrayList.add(settingView);
                arrayList2.add(settingEditTextView);
                settingEditTextView.findViewById(R.id.ims_config_set).setVisibility(8);
                viewGroup.addView(settingEditTextView);
            }
        }
        return new AlertDialog.Builder(this).setTitle("Manual Settings").setView(viewInflate).setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.ims.imsSettingPageActivity.2
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                for (int i3 = 0; i3 < arrayList2.size(); i3++) {
                    ((SettingView) arrayList2.get(i3)).send();
                    ((SettingView) arrayList.get(i3)).setValue(((SettingView) arrayList2.get(i3)).getValue());
                }
                ((SettingView) arrayList.get(0)).requestFocus();
                imsSettingPageActivity.this.sendCommand("force_user_account_by_manual", "1");
            }
        }).setNegativeButton("Cancel", (DialogInterface.OnClickListener) null).create();
    }
}
