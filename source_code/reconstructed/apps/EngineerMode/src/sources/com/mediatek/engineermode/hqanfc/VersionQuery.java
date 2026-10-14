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
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class VersionQuery extends Activity {
    private static final int DIALOG_ID_WAIT = 0;
    private static final String END_STR = "*";
    private static final int HANDLER_MSG_GET_RSP = 200;
    private static final String START_STR = "$PNFC";
    private Button mBtnReturn;
    private NfcEmReqRsp.NfcEmVersionRsp mResponse;
    private byte[] mRspArray;
    private TextView mTvFwVersion;
    private TextView mTvHwVersion;
    private TextView mTvMwVersion;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.VersionQuery.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.v(NfcMainPage.TAG, "[VersionQuery]mReceiver onReceive");
            if (!"com.mediatek.hqanfc.132".equals(intent.getAction())) {
                Elog.v(NfcMainPage.TAG, "[VersionQuery]Other response");
                return;
            }
            VersionQuery.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if (VersionQuery.this.mRspArray != null) {
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(VersionQuery.this.mRspArray);
                VersionQuery.this.mResponse = new NfcEmReqRsp.NfcEmVersionRsp();
                VersionQuery.this.mResponse.readRaw(byteBufferWrap);
                VersionQuery.this.mHandler.sendEmptyMessage(200);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.VersionQuery.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            super.handleMessage(message);
            if (200 == message.what) {
                VersionQuery.this.dismissDialog(0);
                String str = new String(VersionQuery.this.mResponse.mMwVersion);
                String hexString = Integer.toHexString(VersionQuery.this.mResponse.mFwVersion);
                String hexString2 = Integer.toHexString(VersionQuery.this.mResponse.mHwVersion);
                Elog.v(NfcMainPage.TAG, str);
                Elog.v(NfcMainPage.TAG, String.valueOf(VersionQuery.this.mResponse.mFwVersion));
                Elog.v(NfcMainPage.TAG, String.valueOf(VersionQuery.this.mResponse.mHwVersion));
                VersionQuery.this.mTvMwVersion.setText(VersionQuery.this.getString(R.string.hqa_nfc_mw_version) + str);
                VersionQuery.this.mTvFwVersion.setText(VersionQuery.this.getString(R.string.hqa_nfc_fw_version) + hexString);
                VersionQuery.this.mTvHwVersion.setText(VersionQuery.this.getString(R.string.hqa_nfc_hw_version) + hexString2);
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.VersionQuery.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[VersionQuery]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(VersionQuery.this.mBtnReturn)) {
                VersionQuery.this.onBackPressed();
            }
        }
    };

    private void sendCommand() {
        NfcClient.getInstance().sendCommand(131, null);
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        super.onBackPressed();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.hqa_nfc_version_query);
        Button button = (Button) findViewById(R.id.hqa_version_btn_return);
        this.mBtnReturn = button;
        button.setOnClickListener(this.mClickListener);
        this.mTvMwVersion = (TextView) findViewById(R.id.hqa_version_tv_mw_version);
        this.mTvFwVersion = (TextView) findViewById(R.id.hqa_version_tv_fw_version);
        this.mTvHwVersion = (TextView) findViewById(R.id.hqa_version_tv_hw_version);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.132");
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

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        showDialog(0);
        sendCommand();
    }
}
