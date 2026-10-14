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
import android.widget.EditText;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class PnfcCommand extends Activity {
    private static final int DIALOG_ID_WAIT = 0;
    private static final String END_STR = "*";
    private static final int HANDLER_MSG_GET_RSP = 200;
    private static final String START_STR = "$PNFC";
    private Button mBtnReturn;
    private Button mBtnSend;
    private EditText mEtPnfc;
    private NfcEmReqRsp.NfcEmPnfcRsp mResponse;
    private TextView mResultTv;
    private byte[] mRspArray;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.PnfcCommand.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.v(NfcMainPage.TAG, "[PnfcCommand]mReceiver onReceive");
            if (!"com.mediatek.hqanfc.116".equals(intent.getAction())) {
                Elog.v(NfcMainPage.TAG, "[PnfcCommand]Other response");
                return;
            }
            PnfcCommand.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if (PnfcCommand.this.mRspArray != null) {
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(PnfcCommand.this.mRspArray);
                PnfcCommand.this.mResponse = new NfcEmReqRsp.NfcEmPnfcRsp();
                PnfcCommand.this.mResponse.readRaw(byteBufferWrap);
                PnfcCommand.this.mHandler.sendEmptyMessage(200);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.PnfcCommand.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            super.handleMessage(message);
            if (200 == message.what) {
                PnfcCommand.this.dismissDialog(0);
                int i = PnfcCommand.this.mResponse.mResult;
                if (i != 0) {
                    str = i != 1 ? "PnfcCommand Rsp Result: ERROR" : "PnfcCommand Rsp Result: FAIL";
                } else {
                    str = "PnfcCommand Rsp Result: SUCCESS";
                }
                String str2 = new String(PnfcCommand.this.mResponse.mData);
                Elog.v(NfcMainPage.TAG, str);
                Elog.v(NfcMainPage.TAG, str2);
                PnfcCommand.this.mResultTv.setText(str + "\n" + str2);
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.PnfcCommand.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[PnfcCommand]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(PnfcCommand.this.mBtnSend)) {
                PnfcCommand.this.mResultTv.setText("");
                PnfcCommand.this.showDialog(0);
                PnfcCommand.this.sendCommand();
            } else if (view.equals(PnfcCommand.this.mBtnReturn)) {
                PnfcCommand.this.onBackPressed();
            }
        }
    };

    private void fillRequest(NfcEmReqRsp.NfcEmPnfcReq nfcEmPnfcReq) {
        nfcEmPnfcReq.mAction = 0;
        byte[] bytes = (START_STR + ((Object) this.mEtPnfc.getText()) + END_STR).getBytes();
        System.arraycopy(bytes, 0, nfcEmPnfcReq.mData, 0, bytes.length);
        nfcEmPnfcReq.mDataLen = bytes.length;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendCommand() {
        NfcEmReqRsp.NfcEmPnfcReq nfcEmPnfcReq = new NfcEmReqRsp.NfcEmPnfcReq();
        fillRequest(nfcEmPnfcReq);
        NfcClient.getInstance().sendCommand(NfcCommand.CommandType.MTK_NFC_EM_PNFC_CMD_REQ, nfcEmPnfcReq);
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        super.onBackPressed();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.hqa_nfc_pnfc_command);
        Button button = (Button) findViewById(R.id.hqa_pnfc_btn_return);
        this.mBtnReturn = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_pnfc_btn_send);
        this.mBtnSend = button2;
        button2.setOnClickListener(this.mClickListener);
        EditText editText = (EditText) findViewById(R.id.hqa_pnfc_et_pnfc);
        this.mEtPnfc = editText;
        editText.setSelection(0);
        this.mResultTv = (TextView) findViewById(R.id.hqa_pnfc_tv_reslut);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.116");
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
