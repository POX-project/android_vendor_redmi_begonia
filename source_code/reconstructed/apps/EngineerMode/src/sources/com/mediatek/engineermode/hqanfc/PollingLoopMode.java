package com.mediatek.engineermode.hqanfc;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.DialogInterface;
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
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class PollingLoopMode extends Activity {
    private static final int CHECKBOXS_NUMBER = 18;
    private static final int CHECKBOX_CARD_MODE = 14;
    private static final int CHECKBOX_CARD_MODE_TYPEA = 15;
    private static final int CHECKBOX_CARD_MODE_TYPEB = 16;
    private static final int CHECKBOX_CARD_MODE_TYPEF = 17;
    private static final int CHECKBOX_P2P_ACTIVE_MODE = 10;
    private static final int CHECKBOX_P2P_DISABLE_CARD = 13;
    private static final int CHECKBOX_P2P_INITIATOR = 11;
    private static final int CHECKBOX_P2P_MODE = 6;
    private static final int CHECKBOX_P2P_PASSIVE_MODE = 9;
    private static final int CHECKBOX_P2P_TARGET = 12;
    private static final int CHECKBOX_P2P_TYPEA = 7;
    private static final int CHECKBOX_P2P_TYPEF = 8;
    private static final int CHECKBOX_READER_KOVIO = 5;
    private static final int CHECKBOX_READER_MODE = 0;
    private static final int CHECKBOX_READER_TYPEA = 1;
    private static final int CHECKBOX_READER_TYPEB = 2;
    private static final int CHECKBOX_READER_TYPEF = 3;
    private static final int CHECKBOX_READER_TYPEV = 4;
    private static final int DIALOG_ID_RESULT = 0;
    private static final int DIALOG_ID_WAIT = 1;
    private static final int HANDLER_MSG_GET_NTF = 100;
    private static final int HANDLER_MSG_GET_RSP = 200;
    private static final int RADIO_CARD_SWIO1 = 18;
    private static final int RADIO_CARD_SWIO2 = 19;
    private static final int RADIO_CARD_SWIOSE = 20;
    private static final int RADIO_NUMBER = 21;
    private static final int RADIO_P2P_TYPEA_106 = 12;
    private static final int RADIO_P2P_TYPEA_212 = 13;
    private static final int RADIO_P2P_TYPEA_424 = 14;
    private static final int RADIO_P2P_TYPEA_848 = 15;
    private static final int RADIO_P2P_TYPEF_212 = 16;
    private static final int RADIO_P2P_TYPEF_424 = 17;
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
    private CheckBox mCbTypeA;
    private CheckBox mCbTypeB;
    private CheckBox mCbTypeF;
    private String mNtfContent;
    private NfcEmReqRsp.NfcEmPollingNty mPollingNty;
    private NfcEmReqRsp.NfcEmPollingRsp mPollingRsp;
    private RadioButton mRbPollingSelectListen;
    private RadioButton mRbPollingSelectPause;
    private RadioGroup mRgCardSwio;
    private RadioGroup mRgP2pTypeA;
    private RadioGroup mRgP2pTypeF;
    private RadioGroup mRgPollingSelect;
    private RadioGroup mRgTypeA;
    private RadioGroup mRgTypeB;
    private RadioGroup mRgTypeF;
    private RadioGroup mRgTypeVMode;
    private RadioGroup mRgTypeVRate;
    private RadioGroup mRgTypeVSubCarrier;
    private byte[] mRspArray;
    private EditText mTvPeriod;
    private CheckBox[] mSettingsCkBoxs = new CheckBox[18];
    private RadioButton[] mSettingsRadioButtons = new RadioButton[21];
    private AlertDialog mAlertDialog = null;
    private boolean mEnableBackKey = true;
    private boolean mUnregisterReceiver = false;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.PollingLoopMode.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            Elog.v(NfcMainPage.TAG, "[PollingLoopMode]mReceiver onReceive: " + action);
            PollingLoopMode.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if ("com.mediatek.hqanfc.110".equals(action)) {
                if (PollingLoopMode.this.mRspArray != null) {
                    ByteBuffer byteBufferWrap = ByteBuffer.wrap(PollingLoopMode.this.mRspArray);
                    PollingLoopMode.this.mPollingRsp = new NfcEmReqRsp.NfcEmPollingRsp();
                    PollingLoopMode.this.mPollingRsp.readRaw(byteBufferWrap);
                    PollingLoopMode.this.mHandler.sendEmptyMessage(200);
                    return;
                }
                return;
            }
            if (!"com.mediatek.hqanfc.117".equals(action)) {
                Elog.v(NfcMainPage.TAG, "[PollingLoopMode]Other response");
                return;
            }
            if (PollingLoopMode.this.mRspArray != null) {
                ByteBuffer byteBufferWrap2 = ByteBuffer.wrap(PollingLoopMode.this.mRspArray);
                PollingLoopMode.this.mPollingNty = new NfcEmReqRsp.NfcEmPollingNty();
                PollingLoopMode.this.mPollingNty.readRaw(byteBufferWrap2);
                PollingLoopMode.this.mHandler.sendEmptyMessage(100);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.PollingLoopMode.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            super.handleMessage(message);
            String str = null;
            if (200 == message.what) {
                PollingLoopMode.this.dismissDialog(1);
                int i = PollingLoopMode.this.mPollingRsp.mResult;
                if (i == 0) {
                    str = "Poling Loop Mode Rsp Result: SUCCESS";
                    if (PollingLoopMode.this.mBtnStart.getText().equals(PollingLoopMode.this.getString(R.string.hqa_nfc_start))) {
                        PollingLoopMode.this.setButtonsStatus(false);
                    } else {
                        PollingLoopMode.this.setButtonsStatus(true);
                    }
                } else if (i != 1) {
                    str = i != 225 ? "Poling Loop Mode Rsp Result: ERROR" : "Poling Loop Mode Rsp Result: No SIM";
                } else {
                    str = "Poling Loop Mode Rsp Result: FAIL";
                }
            } else if (100 == message.what) {
                int i2 = PollingLoopMode.this.mPollingNty.mDetectType;
                if (i2 == 1) {
                    NfcEmReqRsp.NfcEmAlsReadermNtf nfcEmAlsReadermNtf = new NfcEmReqRsp.NfcEmAlsReadermNtf();
                    nfcEmAlsReadermNtf.readRaw(ByteBuffer.wrap(PollingLoopMode.this.mPollingNty.mData));
                    Intent intent = new Intent();
                    intent.putExtra("reader_mode_rsp_array", PollingLoopMode.this.mPollingNty.mData);
                    intent.putExtra("reader_mode_rsp_ndef", nfcEmAlsReadermNtf.mIsNdef);
                    intent.setClass(PollingLoopMode.this, RwFunction.class);
                    PollingLoopMode pollingLoopMode = PollingLoopMode.this;
                    pollingLoopMode.unregisterReceiver(pollingLoopMode.mReceiver);
                    PollingLoopMode.this.mUnregisterReceiver = true;
                    PollingLoopMode.this.startActivity(intent);
                } else if (i2 == 2) {
                    NfcEmReqRsp.NfcEmAlsCardmRsp nfcEmAlsCardmRsp = new NfcEmReqRsp.NfcEmAlsCardmRsp();
                    nfcEmAlsCardmRsp.readRaw(ByteBuffer.wrap(PollingLoopMode.this.mPollingNty.mData));
                    if (nfcEmAlsCardmRsp.mResult == 0) {
                        str = "CardEmulation Rsp Result: SUCCESS";
                    } else if (1 == nfcEmAlsCardmRsp.mResult) {
                        str = "CardEmulation Rsp Result: FAIL";
                    } else {
                        str = 225 == nfcEmAlsCardmRsp.mResult ? "CardEmulation Rsp Result: No SIM" : "CardEmulation Rsp Result: ERROR";
                    }
                } else if (i2 == 4) {
                    NfcEmReqRsp.NfcEmAlsP2pNtf nfcEmAlsP2pNtf = new NfcEmReqRsp.NfcEmAlsP2pNtf();
                    nfcEmAlsP2pNtf.readRaw(ByteBuffer.wrap(PollingLoopMode.this.mPollingNty.mData));
                    if (1 == nfcEmAlsP2pNtf.mResult) {
                        PollingLoopMode.this.showDialog(0);
                    } else if (nfcEmAlsP2pNtf.mResult != 0) {
                        str = "P2P Data Exchange is ERROR";
                    } else if (PollingLoopMode.this.mAlertDialog != null) {
                        PollingLoopMode.this.mAlertDialog.dismiss();
                    }
                }
            }
            Toast.makeText(PollingLoopMode.this, str, 0).show();
        }
    };
    private final CompoundButton.OnCheckedChangeListener mCheckedListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.hqanfc.PollingLoopMode.3
        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            Elog.v(NfcMainPage.TAG, "[PollingLoopMode]onCheckedChanged view is " + ((Object) compoundButton.getText()) + " value is " + z);
            if (compoundButton.equals(PollingLoopMode.this.mSettingsCkBoxs[0])) {
                for (int i = 1; i <= 5; i++) {
                    PollingLoopMode.this.mSettingsCkBoxs[i].setEnabled(z);
                }
                PollingLoopMode pollingLoopMode = PollingLoopMode.this;
                pollingLoopMode.setRadioGroup(pollingLoopMode.mRgTypeA, z);
                PollingLoopMode pollingLoopMode2 = PollingLoopMode.this;
                pollingLoopMode2.setRadioGroup(pollingLoopMode2.mRgTypeB, z);
                PollingLoopMode pollingLoopMode3 = PollingLoopMode.this;
                pollingLoopMode3.setRadioGroup(pollingLoopMode3.mRgTypeF, z);
                PollingLoopMode pollingLoopMode4 = PollingLoopMode.this;
                pollingLoopMode4.setRadioGroup(pollingLoopMode4.mRgTypeVSubCarrier, z);
                PollingLoopMode pollingLoopMode5 = PollingLoopMode.this;
                pollingLoopMode5.setRadioGroup(pollingLoopMode5.mRgTypeVMode, z);
                PollingLoopMode pollingLoopMode6 = PollingLoopMode.this;
                pollingLoopMode6.setRadioGroup(pollingLoopMode6.mRgTypeVRate, z);
                return;
            }
            if (compoundButton.equals(PollingLoopMode.this.mSettingsCkBoxs[1])) {
                PollingLoopMode pollingLoopMode7 = PollingLoopMode.this;
                pollingLoopMode7.setRadioGroup(pollingLoopMode7.mRgTypeA, z);
                return;
            }
            if (compoundButton.equals(PollingLoopMode.this.mSettingsCkBoxs[2])) {
                PollingLoopMode pollingLoopMode8 = PollingLoopMode.this;
                pollingLoopMode8.setRadioGroup(pollingLoopMode8.mRgTypeB, z);
                return;
            }
            if (compoundButton.equals(PollingLoopMode.this.mSettingsCkBoxs[3])) {
                PollingLoopMode pollingLoopMode9 = PollingLoopMode.this;
                pollingLoopMode9.setRadioGroup(pollingLoopMode9.mRgTypeF, z);
                return;
            }
            if (compoundButton.equals(PollingLoopMode.this.mSettingsCkBoxs[4])) {
                PollingLoopMode pollingLoopMode10 = PollingLoopMode.this;
                pollingLoopMode10.setRadioGroup(pollingLoopMode10.mRgTypeVSubCarrier, z);
                PollingLoopMode pollingLoopMode11 = PollingLoopMode.this;
                pollingLoopMode11.setRadioGroup(pollingLoopMode11.mRgTypeVMode, z);
                PollingLoopMode pollingLoopMode12 = PollingLoopMode.this;
                pollingLoopMode12.setRadioGroup(pollingLoopMode12.mRgTypeVRate, z);
                return;
            }
            if (compoundButton.equals(PollingLoopMode.this.mSettingsCkBoxs[6])) {
                for (int i2 = 7; i2 <= 13; i2++) {
                    PollingLoopMode.this.mSettingsCkBoxs[i2].setEnabled(z);
                }
                PollingLoopMode pollingLoopMode13 = PollingLoopMode.this;
                pollingLoopMode13.setRadioGroup(pollingLoopMode13.mRgP2pTypeA, z);
                PollingLoopMode pollingLoopMode14 = PollingLoopMode.this;
                pollingLoopMode14.setRadioGroup(pollingLoopMode14.mRgP2pTypeF, z);
                return;
            }
            if (compoundButton.equals(PollingLoopMode.this.mSettingsCkBoxs[7])) {
                PollingLoopMode pollingLoopMode15 = PollingLoopMode.this;
                pollingLoopMode15.setRadioGroup(pollingLoopMode15.mRgP2pTypeA, z);
                return;
            }
            if (compoundButton.equals(PollingLoopMode.this.mSettingsCkBoxs[8])) {
                PollingLoopMode pollingLoopMode16 = PollingLoopMode.this;
                pollingLoopMode16.setRadioGroup(pollingLoopMode16.mRgP2pTypeF, z);
            } else if (compoundButton.equals(PollingLoopMode.this.mSettingsCkBoxs[14])) {
                PollingLoopMode pollingLoopMode17 = PollingLoopMode.this;
                pollingLoopMode17.setRadioGroup(pollingLoopMode17.mRgCardSwio, z);
                for (int i3 = 15; i3 <= 17; i3++) {
                    PollingLoopMode.this.mSettingsCkBoxs[i3].setEnabled(z);
                }
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.PollingLoopMode.4
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[PollingLoopMode]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(PollingLoopMode.this.mBtnStart)) {
                if (!PollingLoopMode.this.checkRoleSelect()) {
                    Toast.makeText(PollingLoopMode.this, R.string.hqa_nfc_p2p_role_tip, 1).show();
                    return;
                }
                PollingLoopMode.this.showDialog(1);
                PollingLoopMode pollingLoopMode = PollingLoopMode.this;
                pollingLoopMode.doTestAction(Boolean.valueOf(pollingLoopMode.mBtnStart.getText().equals(PollingLoopMode.this.getString(R.string.hqa_nfc_start))));
                return;
            }
            if (view.equals(PollingLoopMode.this.mBtnSelectAll)) {
                PollingLoopMode.this.changeAllSelect(true);
                return;
            }
            if (view.equals(PollingLoopMode.this.mBtnClearAll)) {
                PollingLoopMode.this.changeAllSelect(false);
                return;
            }
            if (view.equals(PollingLoopMode.this.mBtnReturn)) {
                PollingLoopMode.this.onBackPressed();
                return;
            }
            if (view.equals(PollingLoopMode.this.mBtnRunInBack)) {
                PollingLoopMode.this.doTestAction(null);
                Intent intent = new Intent("android.intent.action.MAIN");
                intent.addFlags(268435456);
                intent.addCategory("android.intent.category.HOME");
                PollingLoopMode.this.startActivity(intent);
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void changeAllSelect(boolean z) {
        CheckBox[] checkBoxArr;
        Elog.v(NfcMainPage.TAG, "[PollingLoopMode]changeDisplay status is " + z);
        this.mRgPollingSelect.check(R.id.hqa_pollingmode_rb_polling_listen);
        this.mTvPeriod.setText("500");
        int i = 0;
        while (true) {
            checkBoxArr = this.mSettingsCkBoxs;
            if (i >= checkBoxArr.length) {
                break;
            }
            checkBoxArr[i].setChecked(z);
            i++;
        }
        checkBoxArr[13].setChecked(false);
        if (z) {
            this.mRgTypeA.check(R.id.hqa_pollingmode_rb_typea_106);
            this.mRgTypeB.check(R.id.hqa_pollingmode_rb_typeb_106);
            this.mRgTypeF.check(R.id.hqa_pollingmode_rb_typef_212);
            this.mRgTypeVSubCarrier.check(R.id.hqa_pollingmode_rb_typev_dual_subcarrier);
            this.mRgTypeVMode.check(R.id.hqa_pollingmode_rb_typev_mode_4);
            this.mRgTypeVRate.check(R.id.hqa_pollingmode_rb_typev_166);
            this.mRgP2pTypeA.check(R.id.hqa_pollingmode_rb_p2p_typea_106);
            this.mRgP2pTypeF.check(R.id.hqa_pollingmode_rb_p2p_typef_212);
            this.mRgCardSwio.check(R.id.hqa_pollingmode_rb_card_emu_swio1);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean checkRoleSelect() {
        boolean z = true;
        if (!this.mSettingsCkBoxs[11].isChecked() && !this.mSettingsCkBoxs[12].isChecked()) {
            z = false;
        }
        if (this.mSettingsCkBoxs[9].isChecked() || this.mSettingsCkBoxs[10].isChecked()) {
            return z;
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void doTestAction(Boolean bool) {
        sendCommand(bool);
    }

    private void fillRequest(Boolean bool, NfcEmReqRsp.NfcEmPollingReq nfcEmPollingReq) {
        if (bool == null) {
            nfcEmPollingReq.mAction = 2;
            nfcEmPollingReq.mP2pmReq.mAction = 2;
            nfcEmPollingReq.mReadermReq.mAction = 2;
            nfcEmPollingReq.mCardmReq.mAction = 2;
        } else if (bool.booleanValue()) {
            nfcEmPollingReq.mAction = 0;
            nfcEmPollingReq.mP2pmReq.mAction = 0;
            nfcEmPollingReq.mReadermReq.mAction = 0;
            nfcEmPollingReq.mCardmReq.mAction = 0;
        } else {
            nfcEmPollingReq.mAction = 1;
            nfcEmPollingReq.mP2pmReq.mAction = 1;
            nfcEmPollingReq.mReadermReq.mAction = 1;
            nfcEmPollingReq.mCardmReq.mAction = 1;
        }
        nfcEmPollingReq.mPhase = !this.mRbPollingSelectListen.isChecked() ? 1 : 0;
        try {
            nfcEmPollingReq.mPeriod = Integer.valueOf(this.mTvPeriod.getText().toString()).intValue();
        } catch (NumberFormatException e) {
            Toast.makeText(this, "Please input the right Period.", 0).show();
        }
        CheckBox[] checkBoxArr = this.mSettingsCkBoxs;
        nfcEmPollingReq.mEnableFunc = NfcCommand.BitMapValue.getFunctionValue(new CheckBox[]{checkBoxArr[0], checkBoxArr[14], checkBoxArr[6]});
        nfcEmPollingReq.mP2pmReq.mSupportType = 0 | (this.mSettingsCkBoxs[7].isChecked() ? 1 : 0) | (this.mSettingsCkBoxs[8].isChecked() ? 4 : 0);
        RadioButton[] radioButtonArr = this.mSettingsRadioButtons;
        nfcEmPollingReq.mP2pmReq.mTypeADataRate = NfcCommand.BitMapValue.getTypeAbDataRateValue(new RadioButton[]{radioButtonArr[12], radioButtonArr[13], radioButtonArr[14], radioButtonArr[15]});
        RadioButton[] radioButtonArr2 = this.mSettingsRadioButtons;
        nfcEmPollingReq.mP2pmReq.mTypeFDataRate = NfcCommand.BitMapValue.getTypeFDataRateValue(new RadioButton[]{radioButtonArr2[16], radioButtonArr2[17]});
        nfcEmPollingReq.mP2pmReq.mIsDisableCardM = this.mSettingsCkBoxs[13].isChecked() ? 1 : 0;
        nfcEmPollingReq.mP2pmReq.mRole = 0 | (this.mSettingsCkBoxs[11].isChecked() ? 1 : 0) | (this.mSettingsCkBoxs[12].isChecked() ? 2 : 0);
        nfcEmPollingReq.mP2pmReq.mMode = 0 | (this.mSettingsCkBoxs[9].isChecked() ? 1 : 0) | (this.mSettingsCkBoxs[10].isChecked() ? 2 : 0);
        CheckBox[] checkBoxArr2 = this.mSettingsCkBoxs;
        nfcEmPollingReq.mReadermReq.mSupportType = NfcCommand.BitMapValue.getTypeValue(new CheckBox[]{checkBoxArr2[1], checkBoxArr2[2], checkBoxArr2[3], checkBoxArr2[4], checkBoxArr2[5]});
        RadioButton[] radioButtonArr3 = this.mSettingsRadioButtons;
        nfcEmPollingReq.mReadermReq.mTypeADataRate = NfcCommand.BitMapValue.getTypeAbDataRateValue(new RadioButton[]{radioButtonArr3[0], radioButtonArr3[1], radioButtonArr3[2], radioButtonArr3[3]});
        RadioButton[] radioButtonArr4 = this.mSettingsRadioButtons;
        nfcEmPollingReq.mReadermReq.mTypeBDataRate = NfcCommand.BitMapValue.getTypeAbDataRateValue(new RadioButton[]{radioButtonArr4[4], radioButtonArr4[5], radioButtonArr4[6], radioButtonArr4[7]});
        RadioButton[] radioButtonArr5 = this.mSettingsRadioButtons;
        nfcEmPollingReq.mReadermReq.mTypeFDataRate = NfcCommand.BitMapValue.getTypeFDataRateValue(new RadioButton[]{radioButtonArr5[8], radioButtonArr5[9]});
        RadioButton[] radioButtonArr6 = this.mSettingsRadioButtons;
        nfcEmPollingReq.mReadermReq.mTypeVDataRate = NfcCommand.BitMapValue.getTypeVDataRateValue(new RadioButton[]{radioButtonArr6[10], radioButtonArr6[11]});
        if (this.mRgTypeVSubCarrier.getCheckedRadioButtonId() == R.id.hqa_pollingmode_rb_typev_subcarrier) {
            nfcEmPollingReq.mReadermReq.mTypeVSubcarrier = 0;
        } else {
            nfcEmPollingReq.mReadermReq.mTypeVSubcarrier = 1;
        }
        if (this.mRgTypeVMode.getCheckedRadioButtonId() == R.id.hqa_pollingmode_rb_typev_mode_4) {
            nfcEmPollingReq.mReadermReq.mTypeVCodingMode = 0;
        } else {
            nfcEmPollingReq.mReadermReq.mTypeVCodingMode = 1;
        }
        nfcEmPollingReq.mCardmReq.mSupportType = 0 | (this.mSettingsCkBoxs[15].isChecked() ? 1 : 0) | (this.mSettingsCkBoxs[16].isChecked() ? 2 : 0) | (this.mSettingsCkBoxs[17].isChecked() ? 4 : 0);
        int i = 0;
        switch (this.mRgCardSwio.getCheckedRadioButtonId()) {
            case R.id.hqa_pollingmode_rb_card_emu_swio1 /* 2131100741 */:
                i = 1;
                break;
            case R.id.hqa_pollingmode_rb_card_emu_swio2 /* 2131100742 */:
                i = 2;
                break;
            case R.id.hqa_pollingmode_rb_card_emu_swiose /* 2131100743 */:
                i = 4;
                break;
        }
        nfcEmPollingReq.mCardmReq.mSwNum = i;
        nfcEmPollingReq.mCardmReq.mFgVirtualCard = 0;
    }

    private void initComponents() {
        Elog.v(NfcMainPage.TAG, "[PollingLoopMode]initComponents");
        this.mRgPollingSelect = (RadioGroup) findViewById(R.id.hqa_pollingmode_rg_polling_select);
        this.mRbPollingSelectListen = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_polling_listen);
        this.mRbPollingSelectPause = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_polling_pause);
        this.mTvPeriod = (EditText) findViewById(R.id.hqa_pollingmode_et_polling_period);
        this.mSettingsCkBoxs[0] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_reader_mode);
        this.mSettingsCkBoxs[0].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[1] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_typea);
        this.mSettingsCkBoxs[1].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[2] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_typeb);
        this.mSettingsCkBoxs[2].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[3] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_typef);
        this.mSettingsCkBoxs[3].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[4] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_typev);
        this.mSettingsCkBoxs[4].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[5] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_kovio);
        this.mSettingsRadioButtons[0] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typea_106);
        this.mSettingsRadioButtons[1] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typea_212);
        this.mSettingsRadioButtons[2] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typea_424);
        this.mSettingsRadioButtons[3] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typea_848);
        this.mSettingsRadioButtons[4] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typeb_106);
        this.mSettingsRadioButtons[5] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typeb_212);
        this.mSettingsRadioButtons[6] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typeb_424);
        this.mSettingsRadioButtons[7] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typeb_848);
        this.mSettingsRadioButtons[8] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typef_212);
        this.mSettingsRadioButtons[9] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typef_424);
        this.mSettingsRadioButtons[10] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typev_166);
        this.mSettingsRadioButtons[11] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_typev_2648);
        this.mRgTypeA = (RadioGroup) findViewById(R.id.hqa_pollingmode_rg_typea);
        this.mRgTypeB = (RadioGroup) findViewById(R.id.hqa_pollingmode_rg_typeb);
        this.mRgTypeF = (RadioGroup) findViewById(R.id.hqa_pollingmode_rg_typef);
        this.mRgTypeVSubCarrier = (RadioGroup) findViewById(R.id.hqa_pollingmode_rg_typev_subcarrier);
        this.mRgTypeVMode = (RadioGroup) findViewById(R.id.hqa_pollingmode_rg_typev_mode);
        this.mRgTypeVRate = (RadioGroup) findViewById(R.id.hqa_pollingmode_rg_typev_rate);
        this.mSettingsCkBoxs[6] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_p2p_mode);
        this.mSettingsCkBoxs[6].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[7] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_p2p_typea);
        this.mSettingsCkBoxs[7].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[8] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_p2p_typef);
        this.mSettingsCkBoxs[8].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[9] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_p2p_passive_mode);
        this.mSettingsCkBoxs[10] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_p2p_active_mode);
        this.mSettingsCkBoxs[11] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_p2p_initiator);
        this.mSettingsCkBoxs[12] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_p2p_target);
        this.mSettingsCkBoxs[13] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_p2p_disable_card_emu);
        this.mSettingsRadioButtons[12] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_p2p_typea_106);
        this.mSettingsRadioButtons[13] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_p2p_typea_212);
        this.mSettingsRadioButtons[14] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_p2p_typea_424);
        this.mSettingsRadioButtons[15] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_p2p_typea_848);
        this.mSettingsRadioButtons[16] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_p2p_typef_212);
        this.mSettingsRadioButtons[17] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_p2p_typef_424);
        this.mRgP2pTypeA = (RadioGroup) findViewById(R.id.hqa_pollingmode_rg_p2p_typea);
        this.mRgP2pTypeF = (RadioGroup) findViewById(R.id.hqa_pollingmode_rg_p2p_typef);
        this.mSettingsCkBoxs[14] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_card_emu_mode);
        this.mSettingsCkBoxs[14].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[15] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_card_emu_typea);
        this.mSettingsCkBoxs[16] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_card_emu_typeb);
        this.mSettingsCkBoxs[17] = (CheckBox) findViewById(R.id.hqa_pollingmode_cb_card_emu_typef);
        this.mSettingsRadioButtons[18] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_card_emu_swio1);
        this.mSettingsRadioButtons[19] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_card_emu_swio2);
        this.mSettingsRadioButtons[20] = (RadioButton) findViewById(R.id.hqa_pollingmode_rb_card_emu_swiose);
        this.mRgCardSwio = (RadioGroup) findViewById(R.id.hqa_pollingmode_rg_swio);
        Button button = (Button) findViewById(R.id.hqa_pollingmode_btn_select_all);
        this.mBtnSelectAll = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_pollingmode_btn_clear_all);
        this.mBtnClearAll = button2;
        button2.setOnClickListener(this.mClickListener);
        Button button3 = (Button) findViewById(R.id.hqa_pollingmode_btn_start_stop);
        this.mBtnStart = button3;
        button3.setOnClickListener(this.mClickListener);
        Button button4 = (Button) findViewById(R.id.hqa_pollingmode_btn_return);
        this.mBtnReturn = button4;
        button4.setOnClickListener(this.mClickListener);
        Button button5 = (Button) findViewById(R.id.hqa_pollingmode_btn_run_back);
        this.mBtnRunInBack = button5;
        button5.setOnClickListener(this.mClickListener);
        this.mBtnRunInBack.setEnabled(false);
        this.mRgPollingSelect.check(R.id.hqa_pollingmode_rb_polling_listen);
        this.mTvPeriod.setText("500");
        EditText editText = this.mTvPeriod;
        editText.setSelection(editText.getText().toString().length());
    }

    private void sendCommand(Boolean bool) {
        NfcEmReqRsp.NfcEmPollingReq nfcEmPollingReq = new NfcEmReqRsp.NfcEmPollingReq();
        fillRequest(bool, nfcEmPollingReq);
        NfcClient.getInstance().sendCommand(NfcCommand.CommandType.MTK_NFC_EM_POLLING_MODE_REQ, nfcEmPollingReq);
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

    /* JADX INFO: Access modifiers changed from: private */
    public void setRadioGroup(RadioGroup radioGroup, boolean z) {
        for (int i = 0; i < radioGroup.getChildCount(); i++) {
            radioGroup.getChildAt(i).setEnabled(z);
        }
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
        setContentView(R.layout.hqa_nfc_pollingloop_mode);
        initComponents();
        changeAllSelect(true);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.110");
        intentFilter.addAction("com.mediatek.hqanfc.117");
        LocalBroadcastManager.getInstance(this).registerReceiver(this.mReceiver, intentFilter);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (1 != i) {
            if (i == 0) {
                return new AlertDialog.Builder(this).setTitle(R.string.hqa_nfc_p2p_mode_ntf_title).setMessage("P2P link is up").setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
            }
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
        LocalBroadcastManager.getInstance(this).unregisterReceiver(this.mReceiver);
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onStart() {
        Elog.v(NfcMainPage.TAG, "[PollingLoopMode]onStart");
        if (this.mUnregisterReceiver) {
            Elog.v(NfcMainPage.TAG, "register receiver");
            this.mUnregisterReceiver = false;
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("com.mediatek.hqanfc.110");
            intentFilter.addAction("com.mediatek.hqanfc.117");
            LocalBroadcastManager.getInstance(this).registerReceiver(this.mReceiver, intentFilter);
        }
        super.onStart();
    }
}
