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
public class TxCarrierSignal extends Activity {
    private static final int DIALOG_ID_WAIT = 0;
    private static final int HANDLER_MSG_GET_RSP = 200;
    private Button mBtnReturn;
    private Button mBtnRunInBack;
    private Button mBtnStart;
    private NfcEmReqRsp.NfcEmTxCarrAlsOnRsp mResponse;
    private byte[] mRspArray;
    private boolean mEnableBackKey = true;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.TxCarrierSignal.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.v(NfcMainPage.TAG, "[TxCarrierSignal]mReceiver onReceive");
            if (!"com.mediatek.hqanfc.112".equals(intent.getAction())) {
                Elog.v(NfcMainPage.TAG, "[TxCarrierSignal]Other response");
                return;
            }
            TxCarrierSignal.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if (TxCarrierSignal.this.mRspArray != null) {
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(TxCarrierSignal.this.mRspArray);
                TxCarrierSignal.this.mResponse = new NfcEmReqRsp.NfcEmTxCarrAlsOnRsp();
                TxCarrierSignal.this.mResponse.readRaw(byteBufferWrap);
                TxCarrierSignal.this.mHandler.sendEmptyMessage(200);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.TxCarrierSignal.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            super.handleMessage(message);
            if (200 == message.what) {
                TxCarrierSignal.this.dismissDialog(0);
                int i = TxCarrierSignal.this.mResponse.mResult;
                if (i != 0) {
                    str = i != 1 ? "TxCarrierSignal Rsp Result: ERROR" : "TxCarrierSignal Rsp Result: FAIL";
                } else {
                    str = "TxCarrierSignal Rsp Result: SUCCESS";
                    if (TxCarrierSignal.this.mBtnStart.getText().equals(TxCarrierSignal.this.getString(R.string.hqa_nfc_start))) {
                        TxCarrierSignal.this.setButtonsStatus(false);
                    } else {
                        TxCarrierSignal.this.setButtonsStatus(true);
                    }
                }
                Toast.makeText(TxCarrierSignal.this, str, 0).show();
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.TxCarrierSignal.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[TxCarrierSignal]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(TxCarrierSignal.this.mBtnStart)) {
                TxCarrierSignal.this.showDialog(0);
                TxCarrierSignal txCarrierSignal = TxCarrierSignal.this;
                txCarrierSignal.doTestAction(Boolean.valueOf(txCarrierSignal.mBtnStart.getText().equals(TxCarrierSignal.this.getString(R.string.hqa_nfc_start))));
            } else {
                if (view.equals(TxCarrierSignal.this.mBtnReturn)) {
                    TxCarrierSignal.this.onBackPressed();
                    return;
                }
                if (view.equals(TxCarrierSignal.this.mBtnRunInBack)) {
                    TxCarrierSignal.this.doTestAction(null);
                    Intent intent = new Intent("android.intent.action.MAIN");
                    intent.addFlags(268435456);
                    intent.addCategory("android.intent.category.HOME");
                    TxCarrierSignal.this.startActivity(intent);
                }
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void doTestAction(Boolean bool) {
        sendCommand(bool);
    }

    private void fillRequest(Boolean bool, NfcEmReqRsp.NfcEmTxCarrAlsOnReq nfcEmTxCarrAlsOnReq) {
        if (bool == null) {
            nfcEmTxCarrAlsOnReq.mAction = 2;
        } else if (bool.booleanValue()) {
            nfcEmTxCarrAlsOnReq.mAction = 0;
        } else {
            nfcEmTxCarrAlsOnReq.mAction = 1;
        }
    }

    private void sendCommand(Boolean bool) {
        NfcEmReqRsp.NfcEmTxCarrAlsOnReq nfcEmTxCarrAlsOnReq = new NfcEmReqRsp.NfcEmTxCarrAlsOnReq();
        fillRequest(bool, nfcEmTxCarrAlsOnReq);
        NfcClient.getInstance().sendCommand(111, nfcEmTxCarrAlsOnReq);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setButtonsStatus(boolean z) {
        Elog.v(NfcMainPage.TAG, "[TxCarrierSignal]setButtonsStatus " + z);
        if (z) {
            this.mBtnStart.setText(R.string.hqa_nfc_start);
        } else {
            this.mBtnStart.setText(R.string.hqa_nfc_stop);
        }
        this.mBtnRunInBack.setEnabled(!z);
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
        setContentView(R.layout.hqa_nfc_tx_carrier_signal);
        Button button = (Button) findViewById(R.id.hqa_carrier_btn_start_stop);
        this.mBtnStart = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_carrier_btn_return);
        this.mBtnReturn = button2;
        button2.setOnClickListener(this.mClickListener);
        Button button3 = (Button) findViewById(R.id.hqa_carrier_btn_run_back);
        this.mBtnRunInBack = button3;
        button3.setOnClickListener(this.mClickListener);
        this.mBtnRunInBack.setEnabled(false);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.112");
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
