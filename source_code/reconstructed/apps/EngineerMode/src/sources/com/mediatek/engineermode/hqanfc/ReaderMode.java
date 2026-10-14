package com.mediatek.engineermode.hqanfc;

import android.app.Activity;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.support.v4.content.LocalBroadcastManager;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class ReaderMode extends Activity {
    private static final int CHECKBOXS_NUMBER = 5;
    private static final int CHECKBOX_READER_KOVIO = 4;
    private static final int CHECKBOX_READER_TYPEA = 0;
    private static final int CHECKBOX_READER_TYPEB = 1;
    private static final int CHECKBOX_READER_TYPEF = 2;
    private static final int CHECKBOX_READER_TYPEV = 3;
    private static final int DIALOG_ID_WAIT = 0;
    private static final int HANDLER_MSG_GET_NTF = 100;
    private static final int HANDLER_MSG_GET_RSP = 200;
    protected static final String KEY_READER_MODE_RSP_ARRAY = "reader_mode_rsp_array";
    protected static final String KEY_READER_MODE_RSP_NDEF = "reader_mode_rsp_ndef";
    private static final int RADIO_NUMBER = 12;
    private static final int RADIO_READER_TYPEA_106 = 0;
    private static final int RADIO_READER_TYPEA_212 = 1;
    private static final int RADIO_READER_TYPEA_424 = 2;
    private static final int RADIO_READER_TYPEA_848 = 3;
    private static final int RADIO_READER_TYPEB_106 = 4;
    private static final int RADIO_READER_TYPEB_212 = 5;
    private static final int RADIO_READER_TYPEB_424 = 6;
    private static final int RADIO_READER_TYPEB_848 = 7;
    private static final int RADIO_READER_TYPEF_212 = 8;
    private static final int RADIO_READER_TYPEF_424 = 9;
    private static final int RADIO_READER_TYPEV_166 = 10;
    private static final int RADIO_READER_TYPEV_2648 = 11;
    private Button mBtnClearAll;
    private Button mBtnReturn;
    private Button mBtnRunInBack;
    private Button mBtnSelectAll;
    private Button mBtnStart;
    private NfcEmReqRsp.NfcEmAlsReadermNtf mReadermNtf;
    private NfcEmReqRsp.NfcEmAlsReadermRsp mResponse;
    private RadioGroup mRgTypeA;
    private RadioGroup mRgTypeB;
    private RadioGroup mRgTypeF;
    private RadioGroup mRgTypeVMode;
    private RadioGroup mRgTypeVRate;
    private RadioGroup mRgTypeVSubCarrier;
    private byte[] mRspArray;
    private CheckBox[] mSettingsCkBoxs = new CheckBox[5];
    private RadioButton[] mSettingsRadioButtons = new RadioButton[12];
    private boolean mEnableBackKey = true;
    private boolean mUnregisterReceiver = false;
    private boolean mRunInBack = false;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.ReaderMode.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            Elog.v(NfcMainPage.TAG, "[ReaderMode]mReceiver onReceive: " + action);
            ReaderMode.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if ("com.mediatek.hqanfc.102".equals(action)) {
                if (ReaderMode.this.mRspArray != null) {
                    ByteBuffer byteBufferWrap = ByteBuffer.wrap(ReaderMode.this.mRspArray);
                    ReaderMode.this.mResponse = new NfcEmReqRsp.NfcEmAlsReadermRsp();
                    ReaderMode.this.mResponse.readRaw(byteBufferWrap);
                    ReaderMode.this.mHandler.sendEmptyMessage(200);
                    return;
                }
                return;
            }
            if (!"com.mediatek.hqanfc.118".equals(action)) {
                Elog.v(NfcMainPage.TAG, "[ReaderMode]Other response");
                return;
            }
            if (ReaderMode.this.mRspArray != null) {
                ByteBuffer byteBufferWrap2 = ByteBuffer.wrap(ReaderMode.this.mRspArray);
                ReaderMode.this.mReadermNtf = new NfcEmReqRsp.NfcEmAlsReadermNtf();
                ReaderMode.this.mReadermNtf.readRaw(byteBufferWrap2);
                ReaderMode.this.mHandler.sendEmptyMessage(100);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.ReaderMode.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            super.handleMessage(message);
            String str = null;
            if (200 == message.what) {
                ReaderMode.this.dismissDialog(0);
                int i = ReaderMode.this.mResponse.mResult;
                if (i == 0) {
                    str = "ReaderMode Rsp Result: SUCCESS";
                    if (ReaderMode.this.mBtnStart.getText().equals(ReaderMode.this.getString(R.string.hqa_nfc_start))) {
                        ReaderMode.this.setButtonsStatus(false);
                    } else {
                        ReaderMode.this.setButtonsStatus(true);
                    }
                } else if (i == 1) {
                    str = "ReaderMode Rsp Result: FAIL";
                } else if (i != 10) {
                    switch (i) {
                        case 32:
                            str = "ReaderMode Rsp Result: INVALID_NDEF_FORMAT";
                            break;
                        case 33:
                            str = "ReaderMode Rsp Result: INVALID_FORMAT";
                            break;
                        case 34:
                            str = "ReaderMode Rsp Result: NDEF_EOF_REACHED";
                            break;
                        default:
                            str = "ReaderMode Rsp Result: ERROR";
                            break;
                    }
                } else {
                    str = "ReaderMode Rsp Result: NOT_SUPPORT";
                }
            } else if (100 == message.what) {
                int i2 = ReaderMode.this.mReadermNtf.mResult;
                if (i2 == 0) {
                    str = "ReaderMode Ntf Result: CONNECT";
                    if (!ReaderMode.this.mRunInBack && (ReaderMode.this.mReadermNtf.mIsNdef == 0 || ReaderMode.this.mReadermNtf.mIsNdef == 1 || ReaderMode.this.mReadermNtf.mIsNdef == 2)) {
                        Intent intent = new Intent();
                        intent.putExtra(ReaderMode.KEY_READER_MODE_RSP_ARRAY, ReaderMode.this.mRspArray);
                        intent.putExtra(ReaderMode.KEY_READER_MODE_RSP_NDEF, ReaderMode.this.mReadermNtf.mIsNdef);
                        intent.setClass(ReaderMode.this, RwFunction.class);
                        LocalBroadcastManager.getInstance(ReaderMode.this).unregisterReceiver(ReaderMode.this.mReceiver);
                        ReaderMode.this.mUnregisterReceiver = true;
                        ReaderMode.this.startActivity(intent);
                    }
                } else if (i2 == 1) {
                    Elog.v(NfcMainPage.TAG, "[ReaderMode]Ntf Result: FAIL");
                    if (ReaderMode.this.mRunInBack) {
                        str = "ReaderMode Ntf Result: FAIL";
                    } else {
                        Intent intent2 = new Intent();
                        intent2.putExtra(ReaderMode.KEY_READER_MODE_RSP_ARRAY, ReaderMode.this.mRspArray);
                        intent2.putExtra(ReaderMode.KEY_READER_MODE_RSP_NDEF, 3);
                        intent2.setClass(ReaderMode.this, RwFunction.class);
                        LocalBroadcastManager.getInstance(ReaderMode.this).unregisterReceiver(ReaderMode.this.mReceiver);
                        ReaderMode.this.mUnregisterReceiver = true;
                        ReaderMode.this.startActivity(intent2);
                    }
                } else if (i2 != 2) {
                    Elog.v(NfcMainPage.TAG, "ReaderMode Ntf Result: ERROR");
                    if (ReaderMode.this.mRunInBack) {
                        str = "Tag is not NDEF format";
                    } else {
                        Intent intent3 = new Intent();
                        intent3.putExtra(ReaderMode.KEY_READER_MODE_RSP_ARRAY, ReaderMode.this.mRspArray);
                        intent3.putExtra(ReaderMode.KEY_READER_MODE_RSP_NDEF, 3);
                        intent3.setClass(ReaderMode.this, RwFunction.class);
                        LocalBroadcastManager.getInstance(ReaderMode.this).unregisterReceiver(ReaderMode.this.mReceiver);
                        ReaderMode.this.mUnregisterReceiver = true;
                        ReaderMode.this.startActivity(intent3);
                    }
                } else {
                    str = "ReaderMode Ntf Result: DISCONNECT";
                }
            }
            if (str != null) {
                Elog.v(NfcMainPage.TAG, "Toast: " + str);
                Toast.makeText(ReaderMode.this, str, 0).show();
            }
        }
    };
    private final CompoundButton.OnCheckedChangeListener mCheckedListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.hqanfc.ReaderMode.3
        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            Elog.v(NfcMainPage.TAG, "[ReaderMode]onCheckedChanged view is " + ((Object) compoundButton.getText()) + " value is " + z);
            if (compoundButton.equals(ReaderMode.this.mSettingsCkBoxs[0])) {
                for (int i = 0; i < ReaderMode.this.mRgTypeA.getChildCount(); i++) {
                    ReaderMode.this.mRgTypeA.getChildAt(i).setEnabled(z);
                }
                return;
            }
            if (compoundButton.equals(ReaderMode.this.mSettingsCkBoxs[1])) {
                for (int i2 = 0; i2 < ReaderMode.this.mRgTypeB.getChildCount(); i2++) {
                    ReaderMode.this.mRgTypeB.getChildAt(i2).setEnabled(z);
                }
                return;
            }
            if (compoundButton.equals(ReaderMode.this.mSettingsCkBoxs[2])) {
                for (int i3 = 0; i3 < ReaderMode.this.mRgTypeF.getChildCount(); i3++) {
                    ReaderMode.this.mRgTypeF.getChildAt(i3).setEnabled(z);
                }
                return;
            }
            if (compoundButton.equals(ReaderMode.this.mSettingsCkBoxs[3])) {
                for (int i4 = 0; i4 < ReaderMode.this.mRgTypeVSubCarrier.getChildCount(); i4++) {
                    ReaderMode.this.mRgTypeVSubCarrier.getChildAt(i4).setEnabled(z);
                }
                for (int i5 = 0; i5 < ReaderMode.this.mRgTypeVMode.getChildCount(); i5++) {
                    ReaderMode.this.mRgTypeVMode.getChildAt(i5).setEnabled(z);
                }
                for (int i6 = 0; i6 < ReaderMode.this.mRgTypeVRate.getChildCount(); i6++) {
                    ReaderMode.this.mRgTypeVRate.getChildAt(i6).setEnabled(z);
                }
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.ReaderMode.4
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[ReaderMode]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(ReaderMode.this.mBtnStart)) {
                ReaderMode.this.showDialog(0);
                ReaderMode readerMode = ReaderMode.this;
                readerMode.doTestAction(Boolean.valueOf(readerMode.mBtnStart.getText().equals(ReaderMode.this.getString(R.string.hqa_nfc_start))));
                return;
            }
            if (view.equals(ReaderMode.this.mBtnSelectAll)) {
                ReaderMode.this.changeAllSelect(true);
                return;
            }
            if (view.equals(ReaderMode.this.mBtnClearAll)) {
                ReaderMode.this.changeAllSelect(false);
                return;
            }
            if (view.equals(ReaderMode.this.mBtnReturn)) {
                ReaderMode.this.onBackPressed();
                return;
            }
            if (view.equals(ReaderMode.this.mBtnRunInBack)) {
                ReaderMode.this.doTestAction(null);
                Intent intent = new Intent("android.intent.action.MAIN");
                intent.addFlags(268435456);
                intent.addCategory("android.intent.category.HOME");
                ReaderMode.this.startActivity(intent);
                ReaderMode.this.mRunInBack = true;
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void changeAllSelect(boolean z) {
        Elog.v(NfcMainPage.TAG, "[ReaderMode]changeDisplay status is " + z);
        int i = 0;
        while (true) {
            CheckBox[] checkBoxArr = this.mSettingsCkBoxs;
            if (i >= checkBoxArr.length) {
                break;
            }
            checkBoxArr[i].setChecked(z);
            i++;
        }
        if (z) {
            this.mRgTypeA.check(R.id.hqa_readermode_rb_typea_106);
            this.mRgTypeB.check(R.id.hqa_readermode_rb_typeb_106);
            this.mRgTypeF.check(R.id.hqa_readermode_rb_typef_212);
            this.mRgTypeVSubCarrier.check(R.id.hqa_readermode_rb_typev_dual_subcarrier);
            this.mRgTypeVMode.check(R.id.hqa_readermode_rb_typev_mode_4);
            this.mRgTypeVRate.check(R.id.hqa_readermode_rb_typev_166);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void doTestAction(Boolean bool) {
        sendCommand(bool);
    }

    private void fillRequest(Boolean bool, NfcEmReqRsp.NfcEmAlsReadermReq nfcEmAlsReadermReq) {
        if (bool == null) {
            nfcEmAlsReadermReq.mAction = 2;
        } else if (bool.booleanValue()) {
            nfcEmAlsReadermReq.mAction = 0;
        } else {
            nfcEmAlsReadermReq.mAction = 1;
        }
        CheckBox[] checkBoxArr = this.mSettingsCkBoxs;
        nfcEmAlsReadermReq.mSupportType = NfcCommand.BitMapValue.getTypeValue(new CheckBox[]{checkBoxArr[0], checkBoxArr[1], checkBoxArr[2], checkBoxArr[3], checkBoxArr[4]});
        RadioButton[] radioButtonArr = this.mSettingsRadioButtons;
        nfcEmAlsReadermReq.mTypeADataRate = NfcCommand.BitMapValue.getTypeAbDataRateValue(new RadioButton[]{radioButtonArr[0], radioButtonArr[1], radioButtonArr[2], radioButtonArr[3]});
        RadioButton[] radioButtonArr2 = this.mSettingsRadioButtons;
        nfcEmAlsReadermReq.mTypeBDataRate = NfcCommand.BitMapValue.getTypeAbDataRateValue(new RadioButton[]{radioButtonArr2[4], radioButtonArr2[5], radioButtonArr2[6], radioButtonArr2[7]});
        RadioButton[] radioButtonArr3 = this.mSettingsRadioButtons;
        nfcEmAlsReadermReq.mTypeFDataRate = NfcCommand.BitMapValue.getTypeFDataRateValue(new RadioButton[]{radioButtonArr3[8], radioButtonArr3[9]});
        RadioButton[] radioButtonArr4 = this.mSettingsRadioButtons;
        nfcEmAlsReadermReq.mTypeVDataRate = NfcCommand.BitMapValue.getTypeVDataRateValue(new RadioButton[]{radioButtonArr4[10], radioButtonArr4[11]});
        if (this.mRgTypeVSubCarrier.getCheckedRadioButtonId() == R.id.hqa_readermode_rb_typev_subcarrier) {
            nfcEmAlsReadermReq.mTypeVSubcarrier = 0;
        } else {
            nfcEmAlsReadermReq.mTypeVSubcarrier = 1;
        }
        if (this.mRgTypeVMode.getCheckedRadioButtonId() == R.id.hqa_readermode_rb_typev_mode_4) {
            nfcEmAlsReadermReq.mTypeVCodingMode = 0;
        } else {
            nfcEmAlsReadermReq.mTypeVCodingMode = 1;
        }
    }

    private void initComponents() {
        Elog.v(NfcMainPage.TAG, "[ReaderMode]initComponents");
        this.mSettingsCkBoxs[0] = (CheckBox) findViewById(R.id.hqa_readermode_cb_typea);
        this.mSettingsCkBoxs[0].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[1] = (CheckBox) findViewById(R.id.hqa_readermode_cb_typeb);
        this.mSettingsCkBoxs[1].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[2] = (CheckBox) findViewById(R.id.hqa_readermode_cb_typef);
        this.mSettingsCkBoxs[2].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[3] = (CheckBox) findViewById(R.id.hqa_readermode_cb_typev);
        this.mSettingsCkBoxs[3].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsRadioButtons[0] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typea_106);
        this.mSettingsRadioButtons[1] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typea_212);
        this.mSettingsRadioButtons[2] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typea_424);
        this.mSettingsRadioButtons[3] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typea_848);
        this.mSettingsRadioButtons[4] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typeb_106);
        this.mSettingsRadioButtons[5] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typeb_212);
        this.mSettingsRadioButtons[6] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typeb_424);
        this.mSettingsRadioButtons[7] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typeb_848);
        this.mSettingsRadioButtons[8] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typef_212);
        this.mSettingsRadioButtons[9] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typef_424);
        this.mSettingsRadioButtons[10] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typev_166);
        this.mSettingsRadioButtons[11] = (RadioButton) findViewById(R.id.hqa_readermode_rb_typev_2648);
        this.mRgTypeA = (RadioGroup) findViewById(R.id.hqa_readermode_rg_typea);
        this.mRgTypeB = (RadioGroup) findViewById(R.id.hqa_readermode_rg_typeb);
        this.mRgTypeF = (RadioGroup) findViewById(R.id.hqa_readermode_rg_typef);
        this.mRgTypeVSubCarrier = (RadioGroup) findViewById(R.id.hqa_readermode_rg_typev_subcarrier);
        this.mRgTypeVMode = (RadioGroup) findViewById(R.id.hqa_readermode_rg_typev_mode);
        this.mRgTypeVRate = (RadioGroup) findViewById(R.id.hqa_readermode_rg_typev_rate);
        this.mSettingsCkBoxs[4] = (CheckBox) findViewById(R.id.hqa_readermode_cb_kovio);
        Button button = (Button) findViewById(R.id.hqa_readermode_btn_select_all);
        this.mBtnSelectAll = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_readermode_btn_clear_all);
        this.mBtnClearAll = button2;
        button2.setOnClickListener(this.mClickListener);
        Button button3 = (Button) findViewById(R.id.hqa_readermode_btn_start_stop);
        this.mBtnStart = button3;
        button3.setOnClickListener(this.mClickListener);
        Button button4 = (Button) findViewById(R.id.hqa_readermode_btn_return);
        this.mBtnReturn = button4;
        button4.setOnClickListener(this.mClickListener);
        Button button5 = (Button) findViewById(R.id.hqa_readermode_btn_run_back);
        this.mBtnRunInBack = button5;
        button5.setOnClickListener(this.mClickListener);
        this.mBtnRunInBack.setEnabled(false);
    }

    private void sendCommand(Boolean bool) {
        NfcEmReqRsp.NfcEmAlsReadermReq nfcEmAlsReadermReq = new NfcEmReqRsp.NfcEmAlsReadermReq();
        fillRequest(bool, nfcEmAlsReadermReq);
        NfcClient.getInstance().sendCommand(101, nfcEmAlsReadermReq);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setButtonsStatus(boolean z) {
        if (z) {
            this.mBtnStart.setText(R.string.hqa_nfc_start);
        } else {
            this.mBtnStart.setText(R.string.hqa_nfc_stop);
        }
        this.mBtnRunInBack.setEnabled(!z);
        this.mEnableBackKey = z;
        this.mBtnReturn.setEnabled(z);
        this.mBtnSelectAll.setEnabled(z);
        this.mBtnClearAll.setEnabled(z);
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        if (this.mEnableBackKey) {
            super.onBackPressed();
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Elog.v(NfcMainPage.TAG, "[ReaderMode]onCreate");
        setContentView(R.layout.hqa_nfc_reader_mode);
        initComponents();
        changeAllSelect(true);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.102");
        intentFilter.addAction("com.mediatek.hqanfc.118");
        LocalBroadcastManager.getInstance(this).registerReceiver(this.mReceiver, intentFilter);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i != 0) {
            return null;
        }
        ProgressDialog progressDialog = new ProgressDialog(this);
        progressDialog.setMessage(getString(R.string.hqa_nfc_dialog_wait_message));
        progressDialog.setProgressStyle(0);
        progressDialog.setCancelable(false);
        return progressDialog;
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        Elog.v(NfcMainPage.TAG, "[ReaderMode]onDestroy");
        LocalBroadcastManager.getInstance(this).unregisterReceiver(this.mReceiver);
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onStart() {
        Elog.v(NfcMainPage.TAG, "[ReaderMode]onStart");
        this.mRunInBack = false;
        if (this.mUnregisterReceiver) {
            Elog.v(NfcMainPage.TAG, "register receiver");
            this.mUnregisterReceiver = false;
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("com.mediatek.hqanfc.102");
            intentFilter.addAction("com.mediatek.hqanfc.118");
            LocalBroadcastManager.getInstance(this).registerReceiver(this.mReceiver, intentFilter);
        }
        super.onStart();
    }

    @Override // android.app.Activity
    protected void onStop() {
        Elog.v(NfcMainPage.TAG, "[ReaderMode]onStop");
        super.onStop();
    }
}
