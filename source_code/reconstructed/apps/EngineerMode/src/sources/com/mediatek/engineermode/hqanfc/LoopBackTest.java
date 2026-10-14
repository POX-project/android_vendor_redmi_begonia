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
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class LoopBackTest extends Activity {
    private static final int DIALOG_ID_WAIT = 0;
    private static final int HANDLER_MSG_GET_RSP = 200;
    private Button mBtnReturn;
    private Button mBtnStart;
    private NfcEmReqRsp.NfcEmLoopbackRsp mResponse;
    private byte[] mRspArray;
    private boolean mEnableBackKey = true;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.LoopBackTest.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.v(NfcMainPage.TAG, "[LoopBackTest]mReceiver onReceive");
            if (!"com.mediatek.hqanfc.130".equals(intent.getAction())) {
                Elog.v(NfcMainPage.TAG, "[LoopBackTest]Other response");
                return;
            }
            LoopBackTest.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if (LoopBackTest.this.mRspArray != null) {
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(LoopBackTest.this.mRspArray);
                LoopBackTest.this.mResponse = new NfcEmReqRsp.NfcEmLoopbackRsp();
                LoopBackTest.this.mResponse.readRaw(byteBufferWrap);
                LoopBackTest.this.mHandler.sendEmptyMessage(200);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.LoopBackTest.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            super.handleMessage(message);
            if (200 == message.what) {
                LoopBackTest.this.dismissDialog(0);
                byte b = LoopBackTest.this.mResponse.mResult;
                if (b != 0) {
                    str = b != 1 ? "LoopBackTest Rsp Result: ERROR" : "LoopBackTest Rsp Result: FAIL";
                } else {
                    str = "LoopBackTest Rsp Result: SUCCESS";
                    if (LoopBackTest.this.mBtnStart.getText().equals(LoopBackTest.this.getString(R.string.hqa_nfc_start))) {
                        LoopBackTest.this.setButtonsStatus(false);
                    } else {
                        LoopBackTest.this.setButtonsStatus(true);
                    }
                }
                Toast.makeText(LoopBackTest.this, str, 0).show();
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.LoopBackTest.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[LoopBackTest]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(LoopBackTest.this.mBtnStart)) {
                LoopBackTest.this.showDialog(0);
                LoopBackTest loopBackTest = LoopBackTest.this;
                loopBackTest.doTestAction(Boolean.valueOf(loopBackTest.mBtnStart.getText().equals(LoopBackTest.this.getString(R.string.hqa_nfc_start))));
            } else if (view.equals(LoopBackTest.this.mBtnReturn)) {
                LoopBackTest.this.onBackPressed();
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void doTestAction(Boolean bool) {
        sendCommand(bool);
    }

    private void fillRequest(Boolean bool, NfcEmReqRsp.NfcEmLoopbackReq nfcEmLoopbackReq) {
        if (bool == null) {
            nfcEmLoopbackReq.mAction = (byte) 2;
        } else if (bool.booleanValue()) {
            nfcEmLoopbackReq.mAction = (byte) 0;
        } else {
            nfcEmLoopbackReq.mAction = (byte) 1;
        }
    }

    private void sendCommand(Boolean bool) {
        NfcEmReqRsp.NfcEmLoopbackReq nfcEmLoopbackReq = new NfcEmReqRsp.NfcEmLoopbackReq();
        fillRequest(bool, nfcEmLoopbackReq);
        NfcClient.getInstance().sendCommand(129, nfcEmLoopbackReq);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setButtonsStatus(boolean z) {
        Elog.v(NfcMainPage.TAG, "[LoopBackTest]setButtonsStatus " + z);
        if (z) {
            this.mBtnStart.setText(R.string.hqa_nfc_start);
        } else {
            this.mBtnStart.setText(R.string.hqa_nfc_stop);
        }
        this.mEnableBackKey = z;
        this.mBtnReturn.setEnabled(z);
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
        setContentView(R.layout.hqa_nfc_loopback_test);
        Button button = (Button) findViewById(R.id.hqa_loopback_btn_start_stop);
        this.mBtnStart = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_loopback_btn_return);
        this.mBtnReturn = button2;
        button2.setOnClickListener(this.mClickListener);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.130");
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
