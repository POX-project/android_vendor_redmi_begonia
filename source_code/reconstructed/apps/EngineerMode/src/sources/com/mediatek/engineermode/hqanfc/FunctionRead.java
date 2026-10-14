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
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class FunctionRead extends Activity {
    protected static final String BYTE_EXTRA_STR = "byte_data";
    protected static final int HANDLER_MSG_GET_RSP = 300;
    protected static final String PARENT_EXTRA_STR = "parent_ui_id";
    private Button mBtnCancel;
    private Button mBtnRead;
    private NfcEmReqRsp.NfcEmAlsReadermOptRsp mOptRsp;
    private RadioButton mRbTypeOthers;
    private RadioGroup mRgTagType;
    private byte[] mRspArray;
    private EditText mTvLang;
    private EditText mTvPayloadAscii;
    private EditText mTvPayloadHex;
    private EditText mTvPayloadLength;
    private EditText mTvRecordFlag;
    private EditText mTvRecordId;
    private EditText mTvRecordInf;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.FunctionRead.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.v(NfcMainPage.TAG, "[FunctionRead]mReceiver onReceive");
            if (!"com.mediatek.hqanfc.104".equals(intent.getAction())) {
                Elog.v(NfcMainPage.TAG, "[FunctionRead]Other response");
                return;
            }
            FunctionRead.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if (FunctionRead.this.mRspArray != null) {
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(FunctionRead.this.mRspArray);
                FunctionRead.this.mOptRsp = new NfcEmReqRsp.NfcEmAlsReadermOptRsp();
                FunctionRead.this.mOptRsp.readRaw(byteBufferWrap);
                FunctionRead.this.mHandler.sendEmptyMessage(300);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.FunctionRead.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            super.handleMessage(message);
            if (300 == message.what) {
                int i = FunctionRead.this.mOptRsp.mResult;
                if (i != 0) {
                    str = i != 1 ? "Function Read Rsp Result: ERROR" : "Function Read Rsp Result: FAIL";
                } else {
                    str = "Function Read Rsp Result: SUCCESS";
                    FunctionRead functionRead = FunctionRead.this;
                    functionRead.updateUi(functionRead.mOptRsp.mTagReadNdef);
                }
                Toast.makeText(FunctionRead.this, str, 0).show();
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.FunctionRead.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[FunctionRead]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(FunctionRead.this.mBtnRead)) {
                FunctionRead.this.doRead();
            } else if (view.equals(FunctionRead.this.mBtnCancel)) {
                FunctionRead.this.onBackPressed();
            } else {
                Elog.v(NfcMainPage.TAG, "[FunctionRead]onClick noting.");
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void doRead() {
        NfcEmReqRsp.NfcEmAlsReadermOptReq nfcEmAlsReadermOptReq = new NfcEmReqRsp.NfcEmAlsReadermOptReq();
        nfcEmAlsReadermOptReq.mAction = 0;
        NfcClient.getInstance().sendCommand(103, nfcEmAlsReadermOptReq);
    }

    private void initComponents() {
        this.mRgTagType = (RadioGroup) findViewById(R.id.hqa_read_rg_tag_type);
        RadioButton radioButton = (RadioButton) findViewById(R.id.hqa_read_rb_type_others);
        this.mRbTypeOthers = radioButton;
        radioButton.setVisibility(8);
        EditText editText = (EditText) findViewById(R.id.hqa_read_tv_lang);
        this.mTvLang = editText;
        editText.setInputType(0);
        EditText editText2 = (EditText) findViewById(R.id.hqa_read_tv_flag);
        this.mTvRecordFlag = editText2;
        editText2.setInputType(0);
        EditText editText3 = (EditText) findViewById(R.id.hqa_read_tv_id);
        this.mTvRecordId = editText3;
        editText3.setInputType(0);
        EditText editText4 = (EditText) findViewById(R.id.hqa_read_tv_inf);
        this.mTvRecordInf = editText4;
        editText4.setInputType(0);
        EditText editText5 = (EditText) findViewById(R.id.hqa_read_tv_length);
        this.mTvPayloadLength = editText5;
        editText5.setInputType(0);
        EditText editText6 = (EditText) findViewById(R.id.hqa_read_tv_hex);
        this.mTvPayloadHex = editText6;
        editText6.setInputType(0);
        EditText editText7 = (EditText) findViewById(R.id.hqa_read_tv_ascii);
        this.mTvPayloadAscii = editText7;
        editText7.setInputType(0);
        Button button = (Button) findViewById(R.id.hqa_read_btn_read);
        this.mBtnRead = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_read_btn_cancel);
        this.mBtnCancel = button2;
        button2.setOnClickListener(this.mClickListener);
        this.mRgTagType.check(-1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void updateUi(NfcEmReqRsp.NfcTagReadNdef nfcTagReadNdef) {
        int i = -1;
        int i2 = nfcTagReadNdef.mNdefType.mEnumValue;
        if (i2 == 0) {
            i = R.id.hqa_read_rb_type_uri;
        } else if (i2 == 1) {
            i = R.id.hqa_read_rb_type_text;
        } else if (i2 == 2) {
            i = R.id.hqa_read_rb_type_smart;
        } else if (i2 != 3) {
            Elog.d(NfcMainPage.TAG, "[FunctionRead]NfcNdefType is error");
        } else {
            i = R.id.hqa_read_rb_type_others;
        }
        this.mRgTagType.check(i);
        this.mTvRecordFlag.setText(NfcCommand.DataConvert.printHexString(nfcTagReadNdef.mRecordFlags));
        this.mTvRecordId.setText(NfcCommand.DataConvert.printHexString(nfcTagReadNdef.mRecordId, 0));
        this.mTvRecordInf.setText(NfcCommand.DataConvert.printHexString(nfcTagReadNdef.mRecordTnf));
        this.mTvPayloadLength.setText(String.valueOf(nfcTagReadNdef.mLength));
        this.mTvLang.setText(new String(nfcTagReadNdef.mLang));
        this.mTvPayloadAscii.setText(new String(nfcTagReadNdef.mData, 0, nfcTagReadNdef.mLength));
        this.mTvPayloadHex.setText(NfcCommand.DataConvert.printHexString(nfcTagReadNdef.mData, nfcTagReadNdef.mLength));
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.hqa_nfc_function_read);
        initComponents();
        if (1 == getIntent().getIntExtra(PARENT_EXTRA_STR, 0)) {
            this.mBtnRead.setEnabled(false);
            byte[] byteArrayExtra = getIntent().getByteArrayExtra(BYTE_EXTRA_STR);
            NfcEmReqRsp.NfcEmAlsReadermOptRsp nfcEmAlsReadermOptRsp = new NfcEmReqRsp.NfcEmAlsReadermOptRsp();
            nfcEmAlsReadermOptRsp.readRaw(ByteBuffer.wrap(byteArrayExtra));
            updateUi(nfcEmAlsReadermOptRsp.mTagReadNdef);
        }
    }

    @Override // android.app.Activity
    protected void onPause() {
        LocalBroadcastManager.getInstance(this).unregisterReceiver(this.mReceiver);
        super.onPause();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.104");
        LocalBroadcastManager.getInstance(this).registerReceiver(this.mReceiver, intentFilter);
    }
}
