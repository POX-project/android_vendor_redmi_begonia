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
public class SwpTest extends Activity {
    private static final int DIALOG_ID_WAIT = 0;
    private static final int HANDLER_MSG_GET_RSP = 200;
    private Button mBtnReturn;
    private Button mBtnStart;
    private NfcEmReqRsp.NfcEmSwpRsp mResponse;
    private byte[] mRspArray;
    private boolean mEnableBackKey = true;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.SwpTest.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.v(NfcMainPage.TAG, "[SwpTest]mReceiver onReceive");
            if (!"com.mediatek.hqanfc.203".equals(intent.getAction())) {
                Elog.v(NfcMainPage.TAG, "[SwpTest]Other response");
                return;
            }
            SwpTest.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if (SwpTest.this.mRspArray != null) {
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(SwpTest.this.mRspArray);
                SwpTest.this.mResponse = new NfcEmReqRsp.NfcEmSwpRsp();
                SwpTest.this.mResponse.readRaw(byteBufferWrap);
                SwpTest.this.mHandler.sendEmptyMessage(200);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.SwpTest.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            super.handleMessage(message);
            if (200 == message.what) {
                SwpTest.this.dismissDialog(0);
                int i = SwpTest.this.mResponse.mResult;
                if (i != 0) {
                    str = i != 1 ? "SWP Test Rsp Result: ERROR" : "SWP Test Rsp Result: FAIL";
                } else {
                    str = "SWP Test Rsp Result: SUCCESS";
                    if (SwpTest.this.mBtnStart.getText().equals(SwpTest.this.getString(R.string.hqa_nfc_start))) {
                        SwpTest.this.setButtonsStatus(false);
                    } else {
                        SwpTest.this.setButtonsStatus(true);
                    }
                }
                Toast.makeText(SwpTest.this, str, 0).show();
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.SwpTest.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[SwpTest]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(SwpTest.this.mBtnStart)) {
                SwpTest.this.showDialog(0);
                SwpTest swpTest = SwpTest.this;
                swpTest.doTestAction(Boolean.valueOf(swpTest.mBtnStart.getText().equals(SwpTest.this.getString(R.string.hqa_nfc_start))));
            } else if (view.equals(SwpTest.this.mBtnReturn)) {
                SwpTest.this.onBackPressed();
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void doTestAction(Boolean bool) {
        sendCommand(bool);
    }

    private void fillRequest(Boolean bool, NfcEmReqRsp.NfcEmSwpReq nfcEmSwpReq) {
        if (bool == null) {
            nfcEmSwpReq.mAction = 2;
        } else if (bool.booleanValue()) {
            nfcEmSwpReq.mAction = 0;
        } else {
            nfcEmSwpReq.mAction = 1;
        }
    }

    private void sendCommand(Boolean bool) {
        NfcEmReqRsp.NfcEmSwpReq nfcEmSwpReq = new NfcEmReqRsp.NfcEmSwpReq();
        fillRequest(bool, nfcEmSwpReq);
        NfcClient.getInstance().sendCommand(NfcCommand.CommandType.MTK_NFC_FM_SWP_TEST_REQ, nfcEmSwpReq);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setButtonsStatus(boolean z) {
        Elog.v(NfcMainPage.TAG, "[SwpTest]setButtonsStatus " + z);
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
        setContentView(R.layout.hqa_nfc_swp_test);
        Button button = (Button) findViewById(R.id.hqa_swp_btn_start_stop);
        this.mBtnStart = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_swp_btn_return);
        this.mBtnReturn = button2;
        button2.setOnClickListener(this.mClickListener);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.203");
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
