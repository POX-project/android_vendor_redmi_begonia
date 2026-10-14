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
import android.widget.RadioGroup;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class CardEmulationMode extends Activity {
    private static final int DIALOG_ID_WAIT = 0;
    private static final int HANDLER_MSG_GET_RSP = 200;
    private Button mBtnClearAll;
    private Button mBtnReturn;
    private Button mBtnRunInBack;
    private Button mBtnSelectAll;
    private Button mBtnStart;
    private CheckBox mCbTypeA;
    private CheckBox mCbTypeB;
    private CheckBox mCbTypeB2;
    private CheckBox mCbTypeF;
    private NfcEmReqRsp.NfcEmAlsCardmRsp mResponse;
    private RadioGroup mRgSwio;
    private byte[] mRspArray;
    private boolean mEnableBackKey = true;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.CardEmulationMode.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.v(NfcMainPage.TAG, "mReceiver onReceive");
            if (!"com.mediatek.hqanfc.108".equals(intent.getAction())) {
                Elog.v(NfcMainPage.TAG, "Other response");
                return;
            }
            CardEmulationMode.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if (CardEmulationMode.this.mRspArray != null) {
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(CardEmulationMode.this.mRspArray);
                CardEmulationMode.this.mResponse = new NfcEmReqRsp.NfcEmAlsCardmRsp();
                CardEmulationMode.this.mResponse.readRaw(byteBufferWrap);
                CardEmulationMode.this.mHandler.sendEmptyMessage(200);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.CardEmulationMode.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            super.handleMessage(message);
            if (200 == message.what) {
                CardEmulationMode.this.dismissDialog(0);
                int i = CardEmulationMode.this.mResponse.mResult;
                if (i == 0) {
                    str = "CardEmulation Rsp Result: SUCCESS";
                    if (CardEmulationMode.this.mBtnStart.getText().equals(CardEmulationMode.this.getString(R.string.hqa_nfc_start))) {
                        CardEmulationMode.this.setButtonsStatus(false);
                    } else {
                        CardEmulationMode.this.setButtonsStatus(true);
                    }
                } else if (i != 1) {
                    str = i != 225 ? "CardEmulation Rsp Result: ERROR" : "CardEmulation Rsp Result: No SIM";
                } else {
                    str = "CardEmulation Rsp Result: FAIL";
                }
                Toast.makeText(CardEmulationMode.this, str, 0).show();
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.CardEmulationMode.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(CardEmulationMode.this.mBtnStart)) {
                CardEmulationMode.this.showDialog(0);
                CardEmulationMode cardEmulationMode = CardEmulationMode.this;
                cardEmulationMode.doTestAction(Boolean.valueOf(cardEmulationMode.mBtnStart.getText().equals(CardEmulationMode.this.getString(R.string.hqa_nfc_start))));
                return;
            }
            if (view.equals(CardEmulationMode.this.mBtnSelectAll)) {
                CardEmulationMode.this.changeAllSelect(true);
                return;
            }
            if (view.equals(CardEmulationMode.this.mBtnClearAll)) {
                CardEmulationMode.this.changeAllSelect(false);
                return;
            }
            if (view.equals(CardEmulationMode.this.mBtnReturn)) {
                CardEmulationMode.this.onBackPressed();
                return;
            }
            if (view.equals(CardEmulationMode.this.mBtnRunInBack)) {
                CardEmulationMode.this.doTestAction(null);
                Intent intent = new Intent("android.intent.action.MAIN");
                intent.addFlags(268435456);
                intent.addCategory("android.intent.category.HOME");
                CardEmulationMode.this.startActivity(intent);
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void changeAllSelect(boolean z) {
        Elog.v(NfcMainPage.TAG, "changeDisplay status is " + z);
        if (z) {
            this.mRgSwio.check(R.id.hqa_cardmode_rb_swio1);
        }
        this.mCbTypeA.setChecked(z);
        this.mCbTypeB.setChecked(z);
        this.mCbTypeF.setChecked(z);
        this.mCbTypeB2.setChecked(z);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void doTestAction(Boolean bool) {
        sendCommand(bool);
    }

    private void fillRequest(Boolean bool, NfcEmReqRsp.NfcEmAlsCardmReq nfcEmAlsCardmReq) {
        if (bool == null) {
            nfcEmAlsCardmReq.mAction = 2;
        } else if (bool.booleanValue()) {
            nfcEmAlsCardmReq.mAction = 0;
        } else {
            nfcEmAlsCardmReq.mAction = 1;
        }
        nfcEmAlsCardmReq.mSupportType = (this.mCbTypeB.isChecked() ? 2 : 0) | 0 | (this.mCbTypeA.isChecked() ? 1 : 0) | (this.mCbTypeF.isChecked() ? 4 : 0) | (this.mCbTypeB2.isChecked() ? 16 : 0);
        int i = 0;
        switch (this.mRgSwio.getCheckedRadioButtonId()) {
            case R.id.hqa_cardmode_rb_swio1 /* 2131100676 */:
                i = 1;
                break;
            case R.id.hqa_cardmode_rb_swio2 /* 2131100677 */:
                i = 2;
                break;
            case R.id.hqa_cardmode_rb_swio_se /* 2131100678 */:
                i = 4;
                break;
        }
        nfcEmAlsCardmReq.mSwNum = i;
        nfcEmAlsCardmReq.mFgVirtualCard = 0;
    }

    private void initComponents() {
        Elog.v(NfcMainPage.TAG, "initComponents");
        this.mRgSwio = (RadioGroup) findViewById(R.id.hqa_cardmode_rg_swio);
        this.mCbTypeA = (CheckBox) findViewById(R.id.hqa_cardmode_cb_typea);
        this.mCbTypeB = (CheckBox) findViewById(R.id.hqa_cardmode_cb_typeb);
        this.mCbTypeF = (CheckBox) findViewById(R.id.hqa_cardmode_cb_typef);
        this.mCbTypeB2 = (CheckBox) findViewById(R.id.hqa_cardmode_cb_typeb2);
        Button button = (Button) findViewById(R.id.hqa_cardmode_btn_select_all);
        this.mBtnSelectAll = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_cardmode_btn_clear_all);
        this.mBtnClearAll = button2;
        button2.setOnClickListener(this.mClickListener);
        Button button3 = (Button) findViewById(R.id.hqa_cardmode_btn_start_stop);
        this.mBtnStart = button3;
        button3.setOnClickListener(this.mClickListener);
        Button button4 = (Button) findViewById(R.id.hqa_cardmode_btn_return);
        this.mBtnReturn = button4;
        button4.setOnClickListener(this.mClickListener);
        Button button5 = (Button) findViewById(R.id.hqa_cardmode_btn_run_back);
        this.mBtnRunInBack = button5;
        button5.setOnClickListener(this.mClickListener);
        this.mBtnRunInBack.setEnabled(false);
    }

    private void sendCommand(Boolean bool) {
        NfcEmReqRsp.NfcEmAlsCardmReq nfcEmAlsCardmReq = new NfcEmReqRsp.NfcEmAlsCardmReq();
        fillRequest(bool, nfcEmAlsCardmReq);
        NfcClient.getInstance().sendCommand(NfcCommand.CommandType.MTK_NFC_EM_ALS_CARD_MODE_REQ, nfcEmAlsCardmReq);
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
        setContentView(R.layout.hqa_nfc_card_emulation_mode);
        initComponents();
        changeAllSelect(true);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.108");
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
        LocalBroadcastManager.getInstance(this).unregisterReceiver(this.mReceiver);
        super.onDestroy();
    }
}
