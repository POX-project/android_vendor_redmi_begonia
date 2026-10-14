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
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes2.dex */
public class FunctionWrite extends Activity {
    protected static final int HANDLER_MSG_GET_RSP = 200;
    private Button mBtnCancel;
    private Button mBtnWrite;
    private EditText mEtCompany;
    private EditText mEtText;
    private EditText mEtUrl;
    private NfcEmReqRsp.NfcEmAlsReadermOptRsp mOptRsp;
    private RadioGroup mRgTagType;
    private byte[] mRspArray;
    private Spinner mSpLang;
    private TextView mTvCompany;
    private TextView mTvText;
    private TextView mTvUrl;
    private final BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.hqanfc.FunctionWrite.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.v(NfcMainPage.TAG, "[FunctionWrite]mReceiver onReceive");
            if (!"com.mediatek.hqanfc.104".equals(intent.getAction())) {
                Elog.v(NfcMainPage.TAG, "[FunctionWrite]Other response");
                return;
            }
            FunctionWrite.this.mRspArray = intent.getExtras().getByteArray(NfcCommand.MESSAGE_CONTENT_KEY);
            if (FunctionWrite.this.mRspArray != null) {
                ByteBuffer byteBufferWrap = ByteBuffer.wrap(FunctionWrite.this.mRspArray);
                FunctionWrite.this.mOptRsp = new NfcEmReqRsp.NfcEmAlsReadermOptRsp();
                FunctionWrite.this.mOptRsp.readRaw(byteBufferWrap);
                FunctionWrite.this.mHandler.sendEmptyMessage(200);
            }
        }
    };
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.hqanfc.FunctionWrite.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            String str;
            super.handleMessage(message);
            if (200 == message.what) {
                int i = FunctionWrite.this.mOptRsp.mResult;
                if (i != 0) {
                    str = i != 1 ? "Function Write Rsp Result: ERROR" : "Function Write Rsp Result: FAIL";
                } else {
                    str = "Function Write Rsp Result: SUCCESS";
                }
                Toast.makeText(FunctionWrite.this, str, 0).show();
            }
        }
    };
    private final View.OnClickListener mClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.hqanfc.FunctionWrite.3
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.v(NfcMainPage.TAG, "[FunctionWrite]onClick button view is " + ((Object) ((Button) view).getText()));
            if (view.equals(FunctionWrite.this.mBtnWrite)) {
                FunctionWrite.this.doWrite();
            } else if (view.equals(FunctionWrite.this.mBtnCancel)) {
                FunctionWrite.this.onBackPressed();
            } else {
                Elog.v(NfcMainPage.TAG, "[FunctionWrite]onClick noting.");
            }
        }
    };
    private final RadioGroup.OnCheckedChangeListener mCheckedChangeListener = new RadioGroup.OnCheckedChangeListener() { // from class: com.mediatek.engineermode.hqanfc.FunctionWrite.4
        @Override // android.widget.RadioGroup.OnCheckedChangeListener
        public void onCheckedChanged(RadioGroup radioGroup, int i) {
            Elog.v(NfcMainPage.TAG, "[FunctionWrite]onCheckedChanged checkedId is " + i);
            FunctionWrite.this.checkedChange(i);
        }
    };

    private boolean checkInput() {
        return -1 != this.mRgTagType.getCheckedRadioButtonId();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void doWrite() {
        int i;
        if (!checkInput()) {
            Toast.makeText(this, "Input error", 0).show();
            return;
        }
        NfcEmReqRsp.NfcEmAlsReadermOptReq nfcEmAlsReadermOptReq = new NfcEmReqRsp.NfcEmAlsReadermOptReq();
        nfcEmAlsReadermOptReq.mAction = 1;
        switch (this.mRgTagType.getCheckedRadioButtonId()) {
            case R.id.hqa_write_rb_type_text /* 2131100846 */:
                i = 1;
                break;
            case R.id.hqa_write_rb_type_uri /* 2131100847 */:
                i = 0;
                break;
            default:
                i = 3;
                break;
        }
        nfcEmAlsReadermOptReq.mTagWriteNdef.mNdefType.mEnumValue = i;
        nfcEmAlsReadermOptReq.mTagWriteNdef.mNdefLangType.mEnumValue = this.mSpLang.getSelectedItemPosition();
        if (i == 0) {
            NfcEmReqRsp.UrlT urlT = new NfcEmReqRsp.UrlT();
            byte[] bytes = this.mEtUrl.getText().toString().getBytes();
            System.arraycopy(bytes, 0, urlT.mUrlData, 0, bytes.length);
            urlT.mUrlDataLength = (short) urlT.mUrlData.length;
            byte[] byteArray = urlT.getByteArray();
            System.arraycopy(byteArray, 0, nfcEmAlsReadermOptReq.mTagWriteNdef.mNdefData.mData, 0, byteArray.length);
            nfcEmAlsReadermOptReq.mTagWriteNdef.mLength = byteArray.length;
        } else if (i == 1) {
            NfcEmReqRsp.TextT textT = new NfcEmReqRsp.TextT();
            byte[] bytes2 = this.mEtText.getText().toString().getBytes();
            System.arraycopy(bytes2, 0, textT.mData, 0, bytes2.length);
            textT.mDataLength = (short) bytes2.length;
            byte[] byteArray2 = textT.getByteArray();
            System.arraycopy(byteArray2, 0, nfcEmAlsReadermOptReq.mTagWriteNdef.mNdefData.mData, 0, byteArray2.length);
            nfcEmAlsReadermOptReq.mTagWriteNdef.mLength = byteArray2.length;
        } else if (i == 2) {
            NfcEmReqRsp.SmartPosterT smartPosterT = new NfcEmReqRsp.SmartPosterT();
            byte[] bytes3 = this.mEtCompany.getText().toString().getBytes();
            System.arraycopy(bytes3, 0, smartPosterT.mCompany, 0, bytes3.length);
            smartPosterT.mCompanyLength = (short) bytes3.length;
            byte[] bytes4 = this.mEtUrl.getText().toString().getBytes();
            System.arraycopy(bytes4, 0, smartPosterT.mCompanyUrl, 0, bytes4.length);
            smartPosterT.mCompanyUrlLength = (short) bytes4.length;
            byte[] byteArray3 = smartPosterT.getByteArray();
            System.arraycopy(byteArray3, 0, nfcEmAlsReadermOptReq.mTagWriteNdef.mNdefData.mData, 0, byteArray3.length);
            nfcEmAlsReadermOptReq.mTagWriteNdef.mLength = byteArray3.length;
        }
        NfcClient.getInstance().sendCommand(103, nfcEmAlsReadermOptReq);
    }

    private void initComponents() {
        RadioGroup radioGroup = (RadioGroup) findViewById(R.id.hqa_write_rg_tag_type);
        this.mRgTagType = radioGroup;
        radioGroup.setOnCheckedChangeListener(this.mCheckedChangeListener);
        this.mSpLang = (Spinner) findViewById(R.id.hqa_write_sp_lang);
        this.mEtCompany = (EditText) findViewById(R.id.hqa_write_et_company);
        this.mEtUrl = (EditText) findViewById(R.id.hqa_write_et_url);
        this.mEtText = (EditText) findViewById(R.id.hqa_write_et_text);
        Button button = (Button) findViewById(R.id.hqa_write_btn_write);
        this.mBtnWrite = button;
        button.setOnClickListener(this.mClickListener);
        Button button2 = (Button) findViewById(R.id.hqa_write_btn_cancel);
        this.mBtnCancel = button2;
        button2.setOnClickListener(this.mClickListener);
        this.mTvCompany = (TextView) findViewById(R.id.hqa_write_tv_company);
        this.mTvUrl = (TextView) findViewById(R.id.hqa_write_tv_url);
        this.mTvText = (TextView) findViewById(R.id.hqa_write_tv_text);
        this.mEtUrl.setSelection(0);
        this.mRgTagType.check(R.id.hqa_write_rb_type_uri);
    }

    protected void checkedChange(int i) {
        switch (i) {
            case R.id.hqa_write_rb_type_text /* 2131100846 */:
                this.mSpLang.setEnabled(true);
                this.mEtCompany.setVisibility(8);
                this.mTvCompany.setVisibility(8);
                this.mEtText.setVisibility(0);
                this.mTvText.setVisibility(0);
                this.mEtUrl.setVisibility(8);
                this.mTvUrl.setVisibility(8);
                this.mEtText.setText("");
                EditText editText = this.mEtText;
                editText.setSelection(editText.getText().length());
                break;
            case R.id.hqa_write_rb_type_uri /* 2131100847 */:
                this.mSpLang.setEnabled(false);
                this.mEtCompany.setVisibility(8);
                this.mTvCompany.setVisibility(8);
                this.mEtText.setVisibility(8);
                this.mTvText.setVisibility(8);
                this.mEtUrl.setVisibility(0);
                this.mTvUrl.setVisibility(0);
                this.mEtUrl.setText("");
                this.mEtUrl.setSelection(0);
                break;
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.hqa_nfc_function_write);
        initComponents();
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("com.mediatek.hqanfc.104");
        LocalBroadcastManager.getInstance(this).registerReceiver(this.mReceiver, intentFilter);
    }

    @Override // android.app.Activity
    protected void onStop() {
        LocalBroadcastManager.getInstance(this).unregisterReceiver(this.mReceiver);
        super.onStop();
    }
}
