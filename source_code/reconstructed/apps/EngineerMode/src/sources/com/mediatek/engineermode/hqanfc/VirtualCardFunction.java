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
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class VirtualCardFunction extends Activity {
    private static final int CHECKBOXS_NUMBER = 6;
    private static final int CHECKBOX_TYPEA = 0;
    private static final int CHECKBOX_TYPEB = 1;
    private static final int CHECKBOX_TYPEB2 = 5;
    private static final int CHECKBOX_TYPEF = 2;
    private static final int CHECKBOX_TYPEF_212 = 3;
    private static final int CHECKBOX_TYPEF_424 = 4;
    private static final int DIALOG_ID_WAIT = 0;
    private static final int HANDLER_MSG_GET_RSP = 200;
    private static final int RADIO_NUMBER = 2;
    private static final int RADIO_TYPEF_212 = 0;
    private static final int RADIO_TYPEF_424 = 1;
    private Button mBtnClearAll;
    private Button mBtnReturn;
    private Button mBtnRunInBack;
    private Button mBtnSelectAll;
    private Button mBtnStart;
    private NfcEmReqRsp.NfcEmVirtualCardRsp mResponse;
    private byte[] mRspArray;
    private CheckBox[] mSettingsCkBoxs = new CheckBox[6];
    private boolean mEnableBackKey = true;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.VirtualCardFunction.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.v(NfcMainPage.TAG, "[VirtualCardFunction]mReceiver onReceive");
            if (!"com.mediatek.hqanfc.114".equals(intent.getAction())) {
                Elog.v(NfcMainPage.TAG, "[VirtualCardFunction]Other response");
                return;
            }
            VirtualCardFunction.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if (VirtualCardFunction.this.mRspArray != null) {
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(VirtualCardFunction.this.mRspArray);
                VirtualCardFunction.this.mResponse = new NfcEmReqRsp.NfcEmVirtualCardRsp();
                VirtualCardFunction.this.mResponse.readRaw(byteBufferWrap);
                VirtualCardFunction.this.mHandler.sendEmptyMessage(200);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.VirtualCardFunction.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            super.handleMessage(message);
            if (200 == message.what) {
                VirtualCardFunction.this.dismissDialog(0);
                int i = VirtualCardFunction.this.mResponse.mResult;
                if (i == 0) {
                    str = "VirtualCardFunction Rsp Result: SUCCESS";
                    if (VirtualCardFunction.this.mBtnStart.getText().equals(VirtualCardFunction.this.getString(R.string.hqa_nfc_start))) {
                        VirtualCardFunction.this.setButtonsStatus(false);
                    } else {
                        VirtualCardFunction.this.setButtonsStatus(true);
                    }
                } else if (i != 1) {
                    str = i != 227 ? "VirtualCardFunction Rsp Result: ERROR" : "Please Remove SIM or uSD";
                } else {
                    str = "VirtualCardFunction Rsp Result: FAIL";
                }
                Toast.makeText(VirtualCardFunction.this, str, 0).show();
            }
        }
    };
    private final CompoundButton.OnCheckedChangeListener mCheckedListener = new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.hqanfc.VirtualCardFunction.3
        @Override // android.widget.CompoundButton.OnCheckedChangeListener
        public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
            Elog.v(NfcMainPage.TAG, "[VirtualCardFunction]onCheckedChanged view is " + ((Object) compoundButton.getText()) + " value is " + z);
            if (compoundButton.equals(VirtualCardFunction.this.mSettingsCkBoxs[2])) {
                VirtualCardFunction.this.mSettingsCkBoxs[3].setEnabled(z);
                VirtualCardFunction.this.mSettingsCkBoxs[4].setEnabled(z);
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.VirtualCardFunction.4
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[VirtualCardFunction]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(VirtualCardFunction.this.mBtnStart)) {
                VirtualCardFunction.this.showDialog(0);
                VirtualCardFunction virtualCardFunction = VirtualCardFunction.this;
                virtualCardFunction.doTestAction(Boolean.valueOf(virtualCardFunction.mBtnStart.getText().equals(VirtualCardFunction.this.getString(R.string.hqa_nfc_start))));
                return;
            }
            if (view.equals(VirtualCardFunction.this.mBtnSelectAll)) {
                VirtualCardFunction.this.changeAllSelect(true);
                return;
            }
            if (view.equals(VirtualCardFunction.this.mBtnClearAll)) {
                VirtualCardFunction.this.changeAllSelect(false);
                return;
            }
            if (view.equals(VirtualCardFunction.this.mBtnReturn)) {
                VirtualCardFunction.this.onBackPressed();
                return;
            }
            if (view.equals(VirtualCardFunction.this.mBtnRunInBack)) {
                VirtualCardFunction.this.doTestAction(null);
                Intent intent = new Intent("android.intent.action.MAIN");
                intent.addFlags(268435456);
                intent.addCategory("android.intent.category.HOME");
                VirtualCardFunction.this.startActivity(intent);
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void changeAllSelect(boolean z) {
        CheckBox[] checkBoxArr;
        Elog.v(NfcMainPage.TAG, "[VirtualCardFunction]changeAllSelect status is " + z);
        int i = 0;
        while (true) {
            checkBoxArr = this.mSettingsCkBoxs;
            if (i >= checkBoxArr.length) {
                break;
            }
            checkBoxArr[i].setChecked(z);
            i++;
        }
        if (z) {
            checkBoxArr[4].setChecked(false);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void doTestAction(Boolean bool) {
        sendCommand(bool);
    }

    private void fillRequest(Boolean bool, NfcEmReqRsp.NfcEmVirtualCardReq nfcEmVirtualCardReq) {
        if (bool == null) {
            nfcEmVirtualCardReq.mAction = 2;
        } else if (bool.booleanValue()) {
            nfcEmVirtualCardReq.mAction = 0;
        } else {
            nfcEmVirtualCardReq.mAction = 1;
        }
        nfcEmVirtualCardReq.mSupportType = (this.mSettingsCkBoxs[1].isChecked() ? 2 : 0) | 0 | (this.mSettingsCkBoxs[0].isChecked() ? 1 : 0) | (this.mSettingsCkBoxs[2].isChecked() ? 4 : 0) | (this.mSettingsCkBoxs[5].isChecked() ? 16 : 0);
        nfcEmVirtualCardReq.mTypeFDataRate = (this.mSettingsCkBoxs[3].isChecked() ? 2 : 0) | 0 | (this.mSettingsCkBoxs[4].isChecked() ? 4 : 0);
    }

    private void initComponents() {
        Elog.v(NfcMainPage.TAG, "[VirtualCardFunction]initComponents");
        this.mSettingsCkBoxs[0] = (CheckBox) findViewById(R.id.hqa_virtual_cb_typea);
        this.mSettingsCkBoxs[1] = (CheckBox) findViewById(R.id.hqa_virtual_cb_typeb);
        this.mSettingsCkBoxs[2] = (CheckBox) findViewById(R.id.hqa_virtual_cb_typef);
        this.mSettingsCkBoxs[2].setOnCheckedChangeListener(this.mCheckedListener);
        this.mSettingsCkBoxs[3] = (CheckBox) findViewById(R.id.hqa_virtual_cb_typef_212);
        this.mSettingsCkBoxs[4] = (CheckBox) findViewById(R.id.hqa_virtual_cb_typef_424);
        this.mSettingsCkBoxs[5] = (CheckBox) findViewById(R.id.hqa_virtual_cb_typeb2);
        Button button = (Button) findViewById(R.id.hqa_virtual_btn_select_all);
        this.mBtnSelectAll = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_virtual_btn_clear_all);
        this.mBtnClearAll = button2;
        button2.setOnClickListener(this.mClickListener);
        Button button3 = (Button) findViewById(R.id.hqa_virtual_btn_start_stop);
        this.mBtnStart = button3;
        button3.setOnClickListener(this.mClickListener);
        Button button4 = (Button) findViewById(R.id.hqa_virtual_btn_return);
        this.mBtnReturn = button4;
        button4.setOnClickListener(this.mClickListener);
        Button button5 = (Button) findViewById(R.id.hqa_virtual_btn_run_back);
        this.mBtnRunInBack = button5;
        button5.setOnClickListener(this.mClickListener);
        this.mBtnRunInBack.setEnabled(false);
    }

    private void sendCommand(Boolean bool) {
        NfcEmReqRsp.NfcEmVirtualCardReq nfcEmVirtualCardReq = new NfcEmReqRsp.NfcEmVirtualCardReq();
        fillRequest(bool, nfcEmVirtualCardReq);
        NfcClient.getInstance().sendCommand(NfcCommand.CommandType.MTK_NFC_EM_VIRTUAL_CARD_REQ, nfcEmVirtualCardReq);
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
        setContentView(R.layout.hqa_nfc_virtualcard_function);
        initComponents();
        changeAllSelect(true);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.114");
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
