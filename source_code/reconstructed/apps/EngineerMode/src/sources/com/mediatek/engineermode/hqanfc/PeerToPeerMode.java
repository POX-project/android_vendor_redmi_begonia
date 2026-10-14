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
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class PeerToPeerMode extends Activity {
    private static final int CHECKBOX_ACTIVE_MODE = 3;
    private static final int CHECKBOX_DISABLE_CARD = 6;
    private static final int CHECKBOX_INITIATOR = 4;
    private static final int CHECKBOX_NUMBER = 7;
    private static final int CHECKBOX_PASSIVE_MODE = 2;
    private static final int CHECKBOX_TARGET = 5;
    private static final int CHECKBOX_TYPEA = 0;
    private static final int CHECKBOX_TYPEF = 1;
    private static final int DIALOG_ID_RESULT = 0;
    private static final int DIALOG_ID_WAIT = 1;
    private static final int HANDLER_MSG_GET_NTF = 201;
    private static final int HANDLER_MSG_GET_RSP = 200;
    protected static final String KEY_P2P_RSP_ARRAY = "p2p_rsp_array";
    private static final int RADIO_NUMBER = 6;
    private static final int RADIO_P2P_TYPEA_106 = 0;
    private static final int RADIO_P2P_TYPEA_212 = 1;
    private static final int RADIO_P2P_TYPEA_424 = 2;
    private static final int RADIO_P2P_TYPEA_848 = 3;
    private static final int RADIO_P2P_TYPEF_212 = 4;
    private static final int RADIO_P2P_TYPEF_424 = 5;
    private Button mBtnClearAll;
    private Button mBtnReturn;
    private Button mBtnRunInBack;
    private Button mBtnSelectAll;
    private Button mBtnStart;
    private String mNtfContent;
    private NfcEmReqRsp.NfcEmAlsP2pNtf mP2pNtf;
    private NfcEmReqRsp.NfcEmAlsP2pRsp mP2pRsp;
    private RadioGroup mRgTypeA;
    private RadioGroup mRgTypeF;
    private byte[] mRspArray;
    private CheckBox[] mSettingsCkBoxs = new CheckBox[7];
    private RadioButton[] mSettingsRadioButtons = new RadioButton[6];
    private AlertDialog mAlertDialog = null;
    private boolean mEnableBackKey = true;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.PeerToPeerMode.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            String action = intent.getAction();
            Elog.v(NfcMainPage.TAG, "[PeerToPeerMode]mReceiver onReceive: " + action);
            PeerToPeerMode.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if ("com.mediatek.hqanfc.119".equals(action)) {
                if (PeerToPeerMode.this.mRspArray != null) {
                    ByteBuffer byteBufferWrap = ByteBuffer.wrap(PeerToPeerMode.this.mRspArray);
                    PeerToPeerMode.this.mP2pNtf = new NfcEmReqRsp.NfcEmAlsP2pNtf();
                    PeerToPeerMode.this.mP2pNtf.readRaw(byteBufferWrap);
                    PeerToPeerMode.this.mHandler.sendEmptyMessage(201);
                    return;
                }
                return;
            }
            if (!"com.mediatek.hqanfc.106".equals(action)) {
                Elog.v(NfcMainPage.TAG, "[PeerToPeerMode]Other response");
                return;
            }
            if (PeerToPeerMode.this.mRspArray != null) {
                ByteBuffer byteBufferWrap2 = ByteBuffer.wrap(PeerToPeerMode.this.mRspArray);
                PeerToPeerMode.this.mP2pRsp = new NfcEmReqRsp.NfcEmAlsP2pRsp();
                PeerToPeerMode.this.mP2pRsp.readRaw(byteBufferWrap2);
                PeerToPeerMode.this.mHandler.sendEmptyMessage(200);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.PeerToPeerMode.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            super.handleMessage(message);
            String str = null;
            if (201 == message.what) {
                int i = PeerToPeerMode.this.mP2pNtf.mResult;
                if (i != 0) {
                    if (i != 1) {
                        str = "P2P Data Exchange is ERROR";
                    } else {
                        PeerToPeerMode.this.showDialog(0);
                    }
                } else if (PeerToPeerMode.this.mAlertDialog != null) {
                    PeerToPeerMode.this.mAlertDialog.dismiss();
                }
            } else if (200 == message.what) {
                PeerToPeerMode.this.dismissDialog(1);
                int i2 = PeerToPeerMode.this.mP2pRsp.mResult;
                if (i2 != 0) {
                    str = i2 != 1 ? "P2P Mode Rsp Result: ERROR" : "P2P Mode Rsp Result: FAIL";
                } else {
                    str = "P2P Mode Rsp Result: SUCCESS";
                    if (PeerToPeerMode.this.mBtnStart.getText().equals(PeerToPeerMode.this.getString(R.string.hqa_nfc_start))) {
                        PeerToPeerMode.this.setButtonsStatus(false);
                    } else {
                        PeerToPeerMode.this.setButtonsStatus(true);
                    }
                }
            }
            Toast.makeText(PeerToPeerMode.this, str, 0).show();
        }
    };
    private final CompoundButton.OnCheckedChangeListener mCheckedListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.hqanfc.PeerToPeerMode.3
        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            Elog.v(NfcMainPage.TAG, "[PeerToPeerMode]onCheckedChanged view is " + ((Object) compoundButton.getText()) + " value is " + z);
            if (compoundButton.equals(PeerToPeerMode.this.mSettingsCkBoxs[0])) {
                for (int i = 0; i < PeerToPeerMode.this.mRgTypeA.getChildCount(); i++) {
                    PeerToPeerMode.this.mRgTypeA.getChildAt(i).setEnabled(z);
                }
                return;
            }
            if (compoundButton.equals(PeerToPeerMode.this.mSettingsCkBoxs[1])) {
                for (int i2 = 0; i2 < PeerToPeerMode.this.mRgTypeF.getChildCount(); i2++) {
                    PeerToPeerMode.this.mRgTypeF.getChildAt(i2).setEnabled(z);
                }
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.PeerToPeerMode.4
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[PeerToPeerMode]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(PeerToPeerMode.this.mBtnStart)) {
                if (!PeerToPeerMode.this.checkRoleSelect()) {
                    Toast.makeText(PeerToPeerMode.this, R.string.hqa_nfc_p2p_role_tip, 1).show();
                    return;
                }
                PeerToPeerMode.this.showDialog(1);
                PeerToPeerMode peerToPeerMode = PeerToPeerMode.this;
                peerToPeerMode.doTestAction(Boolean.valueOf(peerToPeerMode.mBtnStart.getText().equals(PeerToPeerMode.this.getString(R.string.hqa_nfc_start))));
                return;
            }
            if (view.equals(PeerToPeerMode.this.mBtnSelectAll)) {
                PeerToPeerMode.this.changeAllSelect(true);
                return;
            }
            if (view.equals(PeerToPeerMode.this.mBtnClearAll)) {
                PeerToPeerMode.this.changeAllSelect(false);
                return;
            }
            if (view.equals(PeerToPeerMode.this.mBtnReturn)) {
                PeerToPeerMode.this.onBackPressed();
                return;
            }
            if (view.equals(PeerToPeerMode.this.mBtnRunInBack)) {
                PeerToPeerMode.this.doTestAction(null);
                Intent intent = new Intent("android.intent.action.MAIN");
                intent.addFlags(268435456);
                intent.addCategory("android.intent.category.HOME");
                PeerToPeerMode.this.startActivity(intent);
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void changeAllSelect(boolean z) {
        CheckBox[] checkBoxArr;
        Elog.v(NfcMainPage.TAG, "[PeerToPeerMode]changeAllSelect status is " + z);
        int i = 0;
        while (true) {
            checkBoxArr = this.mSettingsCkBoxs;
            if (i >= checkBoxArr.length) {
                break;
            }
            checkBoxArr[i].setChecked(z);
            i++;
        }
        checkBoxArr[6].setChecked(false);
        if (z) {
            this.mRgTypeA.check(R.id.hqa_p2pmode_rb_typea_106);
            this.mRgTypeF.check(R.id.hqa_p2pmode_rb_typef_212);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean checkRoleSelect() {
        boolean z = true;
        if (!this.mSettingsCkBoxs[4].isChecked() && !this.mSettingsCkBoxs[5].isChecked()) {
            z = false;
        }
        if (this.mSettingsCkBoxs[2].isChecked() || this.mSettingsCkBoxs[3].isChecked()) {
            return z;
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void doTestAction(Boolean bool) {
        sendCommand(bool);
    }

    private void fillRequest(Boolean bool, NfcEmReqRsp.NfcEmAlsP2pReq nfcEmAlsP2pReq) {
        if (bool == null) {
            nfcEmAlsP2pReq.mAction = 2;
        } else if (bool.booleanValue()) {
            nfcEmAlsP2pReq.mAction = 0;
        } else {
            nfcEmAlsP2pReq.mAction = 1;
        }
        nfcEmAlsP2pReq.mSupportType = 0 | (this.mSettingsCkBoxs[0].isChecked() ? 1 : 0) | (this.mSettingsCkBoxs[1].isChecked() ? 4 : 0);
        RadioButton[] radioButtonArr = this.mSettingsRadioButtons;
        nfcEmAlsP2pReq.mTypeADataRate = NfcCommand.BitMapValue.getTypeAbDataRateValue(new RadioButton[]{radioButtonArr[0], radioButtonArr[1], radioButtonArr[2], radioButtonArr[3]});
        RadioButton[] radioButtonArr2 = this.mSettingsRadioButtons;
        nfcEmAlsP2pReq.mTypeFDataRate = NfcCommand.BitMapValue.getTypeFDataRateValue(new RadioButton[]{radioButtonArr2[4], radioButtonArr2[5]});
        nfcEmAlsP2pReq.mIsDisableCardM = this.mSettingsCkBoxs[6].isChecked() ? 1 : 0;
        nfcEmAlsP2pReq.mRole = 0 | (this.mSettingsCkBoxs[4].isChecked() ? 1 : 0) | (this.mSettingsCkBoxs[5].isChecked() ? 2 : 0);
        nfcEmAlsP2pReq.mMode = 0 | (this.mSettingsCkBoxs[2].isChecked() ? 1 : 0) | (this.mSettingsCkBoxs[3].isChecked() ? 2 : 0);
    }

    private void initComponents() {
        Elog.v(NfcMainPage.TAG, "[PeerToPeerMode]initComponents");
        this.mSettingsCkBoxs[0] = (CheckBox) findViewById(R.id.hqa_p2pmode_cb_typea);
        this.mSettingsCkBoxs[0].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[1] = (CheckBox) findViewById(R.id.hqa_p2pmode_cb_typef);
        this.mSettingsCkBoxs[1].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[2] = (CheckBox) findViewById(R.id.hqa_p2pmode_cb_passive_mode);
        this.mSettingsCkBoxs[3] = (CheckBox) findViewById(R.id.hqa_p2pmode_cb_active_mode);
        this.mSettingsCkBoxs[4] = (CheckBox) findViewById(R.id.hqa_p2pmode_cb_initiator);
        this.mSettingsCkBoxs[5] = (CheckBox) findViewById(R.id.hqa_p2pmode_cb_target);
        this.mSettingsCkBoxs[6] = (CheckBox) findViewById(R.id.hqa_p2pmode_cb_disable_card_emul);
        this.mSettingsRadioButtons[0] = (RadioButton) findViewById(R.id.hqa_p2pmode_rb_typea_106);
        this.mSettingsRadioButtons[1] = (RadioButton) findViewById(R.id.hqa_p2pmode_rb_typea_212);
        this.mSettingsRadioButtons[2] = (RadioButton) findViewById(R.id.hqa_p2pmode_rb_typea_424);
        this.mSettingsRadioButtons[3] = (RadioButton) findViewById(R.id.hqa_p2pmode_rb_typea_848);
        this.mSettingsRadioButtons[4] = (RadioButton) findViewById(R.id.hqa_p2pmode_rb_typef_212);
        this.mSettingsRadioButtons[5] = (RadioButton) findViewById(R.id.hqa_p2pmode_rb_typef_424);
        this.mRgTypeA = (RadioGroup) findViewById(R.id.hqa_p2pmode_rg_typea);
        this.mRgTypeF = (RadioGroup) findViewById(R.id.hqa_p2pmode_rg_typef);
        Button button = (Button) findViewById(R.id.hqa_p2pmode_btn_select_all);
        this.mBtnSelectAll = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_p2pmode_btn_clear_all);
        this.mBtnClearAll = button2;
        button2.setOnClickListener(this.mClickListener);
        Button button3 = (Button) findViewById(R.id.hqa_p2pmode_btn_start_stop);
        this.mBtnStart = button3;
        button3.setOnClickListener(this.mClickListener);
        Button button4 = (Button) findViewById(R.id.hqa_p2pmode_btn_return);
        this.mBtnReturn = button4;
        button4.setOnClickListener(this.mClickListener);
        Button button5 = (Button) findViewById(R.id.hqa_p2pmode_btn_run_back);
        this.mBtnRunInBack = button5;
        button5.setOnClickListener(this.mClickListener);
        this.mBtnRunInBack.setEnabled(false);
    }

    private void sendCommand(Boolean bool) {
        NfcEmReqRsp.NfcEmAlsP2pReq nfcEmAlsP2pReq = new NfcEmReqRsp.NfcEmAlsP2pReq();
        fillRequest(bool, nfcEmAlsP2pReq);
        NfcClient.getInstance().sendCommand(NfcCommand.CommandType.MTK_NFC_EM_ALS_P2P_MODE_REQ, nfcEmAlsP2pReq);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setButtonsStatus(boolean z) {
        if (z) {
            this.mBtnStart.setText(R.string.hqa_nfc_start);
        } else {
            this.mBtnStart.setText(R.string.hqa_nfc_stop);
        }
        this.mEnableBackKey = z;
        this.mBtnRunInBack.setEnabled(!z);
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
        setContentView(R.layout.hqa_nfc_p2p_mode);
        initComponents();
        changeAllSelect(true);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.106");
        intentFilter.addAction("com.mediatek.hqanfc.119");
        LocalBroadcastManager.getInstance(this).registerReceiver(this.mReceiver, intentFilter);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (1 == i) {
            ProgressDialog progressDialog = new ProgressDialog(this);
            progressDialog.setMessage(getString(R.string.hqa_nfc_dialog_wait_message));
            progressDialog.setProgressStyle(0);
            progressDialog.setCancelable(false);
            return progressDialog;
        }
        if (i != 0) {
            return null;
        }
        AlertDialog alertDialogCreate = new AlertDialog.Builder(this).setTitle(R.string.hqa_nfc_p2p_mode_ntf_title).setMessage("P2P link is up").setPositiveButton(android.R.string.ok, (DialogInterface.OnClickListener) null).create();
        this.mAlertDialog = alertDialogCreate;
        return alertDialogCreate;
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        LocalBroadcastManager.getInstance(this).unregisterReceiver(this.mReceiver);
        super.onDestroy();
    }
}
