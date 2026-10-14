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
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class Option extends Activity {
    private static final int DIALOG_ID_WAIT = 0;
    private static final int HANDLER_MSG_GET_RSP = 200;
    private Button mBtnReturn;
    private Button mBtnSet;
    private CheckBox mCbAutoCheck;
    private CheckBox mCbForceDownload;
    private NfcEmReqRsp.NfcEmOptionRsp mResponse;
    private byte[] mRspArray;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.Option.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.v(NfcMainPage.TAG, "[Option]mReceiver onReceive");
            if (!"com.mediatek.hqanfc.128".equals(intent.getAction())) {
                Elog.v(NfcMainPage.TAG, "[Option]Other response");
                return;
            }
            Option.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if (Option.this.mRspArray != null) {
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(Option.this.mRspArray);
                Option.this.mResponse = new NfcEmReqRsp.NfcEmOptionRsp();
                Option.this.mResponse.readRaw(byteBufferWrap);
                Option.this.mHandler.sendEmptyMessage(200);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.Option.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            super.handleMessage(message);
            if (200 == message.what) {
                Option.this.dismissDialog(0);
                byte b = Option.this.mResponse.mResult;
                if (b != 0) {
                    str = b != 1 ? "Option Rsp Result: ERROR" : "Option Rsp Result: FAIL";
                } else {
                    str = "Option Rsp Result: SUCCESS";
                }
                Toast.makeText(Option.this, str, 0).show();
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.Option.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[Option]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(Option.this.mBtnSet)) {
                Option.this.showDialog(0);
                Option.this.sendCommand();
            } else if (view.equals(Option.this.mBtnReturn)) {
                Option.this.onBackPressed();
            }
        }
    };

    private void fillRequest(NfcEmReqRsp.NfcEmOptionReq nfcEmOptionReq) {
        nfcEmOptionReq.mForceDownload = this.mCbForceDownload.isChecked() ? (short) 1 : (short) 0;
        nfcEmOptionReq.mAutoCheck = this.mCbAutoCheck.isChecked() ? (short) 1 : (short) 0;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendCommand() {
        NfcEmReqRsp.NfcEmOptionReq nfcEmOptionReq = new NfcEmReqRsp.NfcEmOptionReq();
        fillRequest(nfcEmOptionReq);
        NfcClient.getInstance().sendCommand(127, nfcEmOptionReq);
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        super.onBackPressed();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.hqa_nfc_option);
        Button button = (Button) findViewById(R.id.hqa_option_btn_return);
        this.mBtnReturn = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_option_btn_set);
        this.mBtnSet = button2;
        button2.setOnClickListener(this.mClickListener);
        this.mCbForceDownload = (CheckBox) findViewById(R.id.hqa_option_force_download);
        CheckBox checkBox = (CheckBox) findViewById(R.id.hqa_option_auto_check);
        this.mCbAutoCheck = checkBox;
        checkBox.setChecked(true);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.128");
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
