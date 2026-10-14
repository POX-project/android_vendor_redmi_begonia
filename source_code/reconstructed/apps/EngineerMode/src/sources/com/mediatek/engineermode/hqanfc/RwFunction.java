package com.mediatek.engineermode.hqanfc;

import android.app.Activity;
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
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class RwFunction extends Activity {
    private static final int HANDLER_MSG_GET_NTF = 100;
    private static final int HANDLER_MSG_GET_POLLING_NTF = 200;
    protected static final int HANDLER_MSG_GET_RSP = 300;
    private Button mBtnFormat;
    private Button mBtnRead;
    private Button mBtnWrite;
    private NfcEmReqRsp.NfcEmAlsReadermOptRsp mOptRsp;
    private NfcEmReqRsp.NfcEmPollingNty mPollingNty;
    private NfcEmReqRsp.NfcEmAlsReadermNtf mReceivedReadermNtf;
    private byte[] mRspArray;
    private TextView mTvUid;
    private boolean mUnregisterReceiver = false;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.RwFunction.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.v(NfcMainPage.TAG, "[RwFunction]mReceiver onReceive");
            String action = intent.getAction();
            RwFunction.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if ("com.mediatek.hqanfc.104".equals(action)) {
                if (RwFunction.this.mRspArray != null) {
                    ByteBuffer byteBufferWrap = ByteBuffer.wrap(RwFunction.this.mRspArray);
                    RwFunction.this.mOptRsp = new NfcEmReqRsp.NfcEmAlsReadermOptRsp();
                    RwFunction.this.mOptRsp.readRaw(byteBufferWrap);
                    RwFunction.this.mHandler.sendEmptyMessage(300);
                    return;
                }
                return;
            }
            if ("com.mediatek.hqanfc.118".equals(action)) {
                if (RwFunction.this.mRspArray != null) {
                    RwFunction.this.mReceivedReadermNtf.readRaw(ByteBuffer.wrap(RwFunction.this.mRspArray));
                    RwFunction.this.mHandler.sendEmptyMessage(100);
                    return;
                }
                return;
            }
            if (!"com.mediatek.hqanfc.117".equals(action)) {
                Elog.v(NfcMainPage.TAG, "[RwFunction]Other response");
                return;
            }
            if (RwFunction.this.mRspArray != null) {
                ByteBuffer byteBufferWrap2 = ByteBuffer.wrap(RwFunction.this.mRspArray);
                RwFunction.this.mPollingNty = new NfcEmReqRsp.NfcEmPollingNty();
                RwFunction.this.mPollingNty.readRaw(byteBufferWrap2);
                RwFunction.this.mHandler.sendEmptyMessage(200);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.RwFunction.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            super.handleMessage(message);
            String str = null;
            if (300 == message.what) {
                int i = RwFunction.this.mOptRsp.mResult;
                if (i != 0) {
                    str = i != 1 ? "Rw Format Rsp Result: ERROR" : "Rw Format Rsp Result: FAIL";
                } else {
                    str = "Rw Format Rsp Result: SUCCESS";
                    RwFunction.this.mBtnFormat.setEnabled(false);
                    RwFunction.this.mBtnRead.setEnabled(true);
                    RwFunction.this.mBtnWrite.setEnabled(true);
                }
            } else if (100 == message.what) {
                int i2 = RwFunction.this.mReceivedReadermNtf.mResult;
                if (i2 == 0) {
                    str = "ReaderMode Ntf Result: CONNECT";
                    if (RwFunction.this.mReceivedReadermNtf.mIsNdef == 0 || RwFunction.this.mReceivedReadermNtf.mIsNdef == 1 || RwFunction.this.mReceivedReadermNtf.mIsNdef == 2) {
                        if (RwFunction.this.mRspArray == null) {
                            str = "Not get the response";
                            RwFunction.this.finish();
                        } else {
                            RwFunction rwFunction = RwFunction.this;
                            rwFunction.updateButtonUI(rwFunction.mReceivedReadermNtf.mIsNdef);
                            RwFunction.this.updateUid();
                        }
                    }
                } else if (i2 == 1) {
                    str = "ReaderMode Ntf Result: FAIL";
                    if (RwFunction.this.mRspArray == null) {
                        str = "Not get the response";
                        RwFunction.this.finish();
                    } else {
                        RwFunction.this.updateButtonUI(3);
                        RwFunction.this.updateUid();
                    }
                } else if (i2 != 2) {
                    str = "Tag is not NDEF format";
                    if (RwFunction.this.mRspArray == null) {
                        str = "Not get the response";
                        RwFunction.this.finish();
                    } else {
                        RwFunction.this.updateButtonUI(3);
                        RwFunction.this.updateUid();
                    }
                } else {
                    str = "ReaderMode Ntf Result: DISCONNECT";
                    RwFunction.this.updateButtonUI(4);
                    RwFunction.this.mTvUid.setText("Tag disconnect...and re-polling...");
                }
            } else if (200 == message.what) {
                if (RwFunction.this.mPollingNty.mDetectType != 1) {
                    str = "Please back to polling loop mode screen";
                } else {
                    RwFunction.this.mReceivedReadermNtf.readRaw(ByteBuffer.wrap(RwFunction.this.mPollingNty.mData));
                    sendEmptyMessage(100);
                }
            }
            Elog.v(NfcMainPage.TAG, "[RwFunction]" + str);
            if (str != null) {
                Toast.makeText(RwFunction.this, str, 0).show();
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.RwFunction.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[RwFunction]onClick button view is " + ((Object) ((Button) view).getText()));
            Intent intent = new Intent();
            if (view.equals(RwFunction.this.mBtnRead)) {
                intent.setClass(RwFunction.this, FunctionRead.class);
                intent.putExtra("parent_ui_id", 0);
                RwFunction.this.startActivity(intent);
            } else if (view.equals(RwFunction.this.mBtnWrite)) {
                intent.setClass(RwFunction.this, FunctionWrite.class);
                RwFunction.this.startActivity(intent);
            } else if (view.equals(RwFunction.this.mBtnFormat)) {
                RwFunction.this.doFormat();
            } else {
                Elog.v(NfcMainPage.TAG, "[RwFunction]onClick noting.");
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void doFormat() {
        NfcEmReqRsp.NfcEmAlsReadermOptReq nfcEmAlsReadermOptReq = new NfcEmReqRsp.NfcEmAlsReadermOptReq();
        nfcEmAlsReadermOptReq.mAction = 2;
        NfcClient.getInstance().sendCommand(103, nfcEmAlsReadermOptReq);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateButtonUI(int i) {
        this.mBtnRead.setVisibility(0);
        this.mBtnFormat.setVisibility(0);
        this.mBtnWrite.setVisibility(0);
        if (i == 1) {
            this.mBtnRead.setEnabled(true);
            this.mBtnWrite.setEnabled(true);
            this.mBtnFormat.setEnabled(false);
            return;
        }
        if (i == 0) {
            this.mBtnFormat.setEnabled(true);
            this.mBtnRead.setEnabled(false);
            this.mBtnWrite.setEnabled(false);
            return;
        }
        if (i == 2) {
            this.mBtnRead.setEnabled(true);
            this.mBtnFormat.setEnabled(false);
            this.mBtnWrite.setEnabled(false);
        } else {
            if (i == 3) {
                this.mBtnRead.setEnabled(false);
                this.mBtnFormat.setEnabled(false);
                this.mBtnWrite.setEnabled(false);
                Elog.v(NfcMainPage.TAG, "ReaderModeRspResult.FAIL, disabe all buttons");
                return;
            }
            if (i == 4) {
                this.mBtnRead.setVisibility(8);
                this.mBtnFormat.setVisibility(8);
                this.mBtnWrite.setVisibility(8);
                Elog.v(NfcMainPage.TAG, "ReaderModeRspResult.DISCONNECT, Hide all buttons");
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateUid() {
        this.mTvUid.setText("UID: " + NfcCommand.DataConvert.printHexString(this.mReceivedReadermNtf.mUid, this.mReceivedReadermNtf.mUidLen));
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        Elog.v(NfcMainPage.TAG, "[RwFunction]onBackPressed");
        this.mUnregisterReceiver = true;
        LocalBroadcastManager.getInstance(this).unregisterReceiver(this.mReceiver);
        super.onBackPressed();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.hqa_nfc_rw_function);
        this.mTvUid = (TextView) findViewById(R.id.hqa_nfc_rw_tv_uid);
        this.mBtnRead = (Button) findViewById(R.id.hqa_nfc_rw_btn_read);
        this.mBtnWrite = (Button) findViewById(R.id.hqa_nfc_rw_btn_write);
        this.mBtnFormat = (Button) findViewById(R.id.hqa_nfc_rw_btn_format);
        this.mBtnRead.setOnClickListener(this.mClickListener);
        this.mBtnWrite.setOnClickListener(this.mClickListener);
        this.mBtnFormat.setOnClickListener(this.mClickListener);
        Intent intent = getIntent();
        updateButtonUI(intent.getIntExtra("reader_mode_rsp_ndef", 1));
        byte[] byteArrayExtra = intent.getByteArrayExtra("reader_mode_rsp_array");
        this.mRspArray = byteArrayExtra;
        if (byteArrayExtra == null) {
            Toast.makeText(this, "Not get the response", 0).show();
            finish();
        } else {
            if (this.mReceivedReadermNtf == null) {
                this.mReceivedReadermNtf = new NfcEmReqRsp.NfcEmAlsReadermNtf();
            }
            this.mReceivedReadermNtf.readRaw(ByteBuffer.wrap(this.mRspArray));
            this.mHandler.sendEmptyMessage(100);
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        Elog.v(NfcMainPage.TAG, "[RwFunction]onDestroy");
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onStart() {
        Elog.v(NfcMainPage.TAG, "[RwFunction]onStart");
        super.onStart();
        updateUid();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.104");
        intentFilter.addAction("com.mediatek.hqanfc.118");
        intentFilter.addAction("com.mediatek.hqanfc.117");
        LocalBroadcastManager.getInstance(this).registerReceiver(this.mReceiver, intentFilter);
        this.mUnregisterReceiver = false;
    }

    @Override // android.app.Activity
    protected void onStop() {
        Elog.v(NfcMainPage.TAG, "[RwFunction]onStop");
        if (!this.mUnregisterReceiver) {
            LocalBroadcastManager.getInstance(this).unregisterReceiver(this.mReceiver);
        }
        super.onStop();
    }
}
