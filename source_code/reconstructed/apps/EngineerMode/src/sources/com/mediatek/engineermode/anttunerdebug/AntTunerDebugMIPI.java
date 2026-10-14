package com.mediatek.engineermode.anttunerdebug;

import android.app.Activity;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes2.dex */
public class AntTunerDebugMIPI extends Activity implements View.OnClickListener {
    private static final int OP_MIPI_NON_SIGNALING = 4;
    public static final int OP_MIPI_READ = 0;
    private static final int OP_MIPI_SIGNALING = 3;
    public static final int OP_MIPI_WRITE = 1;
    private static final String RESPONSE_CMD = "+ERFTX: ";
    private static final String TAG = "AntTunerDebugMIPI";
    private Button mBtnMipiRead;
    private Button mBtnMipiWrite;
    private EditText mEdAddress;
    private EditText mEdData;
    private EditText mEdMipiPort;
    private EditText mEdUsid;
    private Spinner mSpRWType;
    private TextView mTvAddress;
    private Button mbtnMipiNonSignaling;
    private Button mbtnMipiSignaling;
    private String mPort = null;
    private String mRWType = null;
    private String mUsid = null;
    private String mAddress = null;
    private String mData = null;
    private String mMipiMode = null;
    ArrayAdapter<CharSequence> adapterPattern = null;
    private final Handler mATHandler = new Handler() { // from class: com.mediatek.engineermode.anttunerdebug.AntTunerDebugMIPI.1
        private String[] mReturnData = new String[2];

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what == 0) {
                AsyncResult asyncResult = (AsyncResult) message.obj;
                if (asyncResult.exception != null) {
                    EmUtils.showToast("MIPI read failed.", 0);
                    Elog.e(AntTunerDebugMIPI.TAG, "MIPI read failed.");
                    return;
                }
                Elog.d(AntTunerDebugMIPI.TAG, "MIPI read successful.");
                this.mReturnData = (String[]) asyncResult.result;
                Elog.d(AntTunerDebugMIPI.TAG, "mReturnData = " + this.mReturnData[0]);
                EmUtils.showToast(this.mReturnData[0], 0);
                AntTunerDebugMIPI.this.handleQuery(this.mReturnData);
                return;
            }
            if (message.what == 1) {
                if (((AsyncResult) message.obj).exception == null) {
                    Elog.d(AntTunerDebugMIPI.TAG, "MIPI write successful.");
                    return;
                } else {
                    EmUtils.showToast("MIPI write failed.", 0);
                    Elog.e(AntTunerDebugMIPI.TAG, "MIPI write failed.");
                    return;
                }
            }
            if (message.what == 3) {
                if (((AsyncResult) message.obj).exception == null) {
                    Elog.d(AntTunerDebugMIPI.TAG, "MIPI Signaling successful.");
                    return;
                } else {
                    EmUtils.showToast("MIPI Signaling failed.", 0);
                    Elog.e(AntTunerDebugMIPI.TAG, "MIPI Signaling failed.");
                    return;
                }
            }
            if (message.what == 4) {
                if (((AsyncResult) message.obj).exception == null) {
                    Elog.d(AntTunerDebugMIPI.TAG, "MIPI Non-Signaling successful.");
                } else {
                    EmUtils.showToast("MIPI Non-Signaling failed.", 0);
                    Elog.e(AntTunerDebugMIPI.TAG, "MIPI Non-Signaling failed.");
                }
            }
        }
    };

    /* JADX INFO: Access modifiers changed from: private */
    public void handleQuery(String[] strArr) {
        if (strArr == null || strArr.length <= 0) {
            Elog.e(TAG, "Modem return error");
            return;
        }
        Elog.i(TAG, "Modem return: " + strArr[0]);
        String[] strArrSplit = strArr[0].substring(RESPONSE_CMD.length(), strArr[0].length()).trim().split(",");
        if (strArrSplit == null || strArrSplit.length <= 0 || strArrSplit[2] == null) {
            return;
        }
        strArrSplit[2] = Integer.toHexString(Integer.parseInt(strArrSplit[2]));
        this.mEdData.setText(strArrSplit[2]);
    }

    private void sendAtCommand(String[] strArr, int i) {
        Elog.d(TAG, "sendAtCommand() " + strArr[0]);
        EmUtils.showToast("sendAtCommand: " + strArr[0], 0);
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mATHandler.obtainMessage(i));
    }

    private boolean valueGetAndCheck(int i) {
        this.mPort = this.mEdMipiPort.getText().toString();
        this.mRWType = this.mSpRWType.getSelectedItemPosition() == 0 ? "0" : "1";
        this.mUsid = this.mEdUsid.getText().toString();
        this.mAddress = this.mEdAddress.getText().toString();
        this.mData = this.mEdData.getText().toString();
        this.mMipiMode = i == 0 ? "0" : "1";
        if (this.mPort.equals("")) {
            EmUtils.showToast("MIPI port should not be empty", 0);
            return false;
        }
        if (this.mRWType.equals("")) {
            EmUtils.showToast("RW_TYPE should not be empty", 0);
            return false;
        }
        if (this.mUsid.equals("")) {
            EmUtils.showToast("USID should not be empty", 0);
            return false;
        }
        if (this.mAddress.equals("")) {
            EmUtils.showToast("Address should not be empty", 0);
            return false;
        }
        try {
            int i2 = Integer.parseInt(this.mUsid, 16);
            if (i2 < 0 || i2 > 15) {
                EmUtils.showToast("Usid should be 0x0~0xf ", 0);
                return false;
            }
            try {
                int i3 = Integer.parseInt(this.mAddress, 16);
                if (this.mRWType.equals("0")) {
                    this.mTvAddress.setText(getString(R.string.ant_tuner_debug_mipi_address));
                    if (i3 < 0 || i3 > 31) {
                        EmUtils.showToast("mAddress should be 0x0~0x1f ", 0);
                        return false;
                    }
                } else if (this.mRWType.equals("1")) {
                    this.mTvAddress.setText(getString(R.string.ant_tuner_debug_mipi_address1));
                    if (i3 < 0 || i3 > 255) {
                        EmUtils.showToast("mAddress should be 0x0~0xff ", 0);
                        return false;
                    }
                }
                if (!this.mMipiMode.equals("1")) {
                    return true;
                }
                if (this.mData.equals("")) {
                    EmUtils.showToast("Data should not be empty", 0);
                    return false;
                }
                try {
                    int i4 = Integer.parseInt(this.mData, 16);
                    if (i4 >= 0 && i4 <= 255) {
                        return true;
                    }
                    EmUtils.showToast("Usid should be 0x0~0xff ", 0);
                    return false;
                } catch (NumberFormatException e) {
                    EmUtils.showToast("mData should be 16 HEX", 0);
                    return false;
                }
            } catch (NumberFormatException e2) {
                EmUtils.showToast("mAddress should be 16 HEX", 0);
                return false;
            }
        } catch (NumberFormatException e3) {
            EmUtils.showToast("Usid should be 16 HEX", 0);
            return false;
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        switch (view.getId()) {
            case R.id.ant_tuner_debug_mipi_read /* 2131100062 */:
                if (valueGetAndCheck(0)) {
                    this.mUsid = Integer.toString(Integer.parseInt(this.mUsid, 16));
                    this.mAddress = Integer.toString(Integer.parseInt(this.mAddress, 16));
                    sendAtCommand(new String[]{"AT+ERFTX=12,0," + this.mMipiMode + "," + this.mPort + "," + this.mRWType + "," + this.mUsid + "," + this.mAddress, "+ERFTX:"}, 0);
                }
                break;
            case R.id.ant_tuner_debug_mipi_write /* 2131100065 */:
                if (valueGetAndCheck(1)) {
                    this.mUsid = Integer.toString(Integer.parseInt(this.mUsid, 16));
                    this.mAddress = Integer.toString(Integer.parseInt(this.mAddress, 16));
                    this.mData = Integer.toString(Integer.parseInt(this.mData, 16));
                    sendAtCommand(new String[]{"AT+ERFTX=12,0," + this.mMipiMode + "," + this.mPort + "," + this.mRWType + "," + this.mUsid + "," + this.mAddress + "," + this.mData, ""}, 1);
                }
                break;
            case R.id.mipi_non_signaling /* 2131101051 */:
                sendAtCommand(new String[]{"AT+CFUN=0", ""}, 4);
                sendAtCommand(new String[]{"AT+EGCMD=53", ""}, 4);
                break;
            case R.id.mipi_signaling /* 2131101052 */:
                sendAtCommand(new String[]{"AT+CFUN=1", ""}, 3);
                break;
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.ant_tuner_debug_mipi);
        this.mSpRWType = (Spinner) findViewById(R.id.ant_tuner_debug_mipi_rw_type);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = ArrayAdapter.createFromResource(this, R.array.ant_tuner_debug_mipi_rw_type, android.R.layout.simple_spinner_item);
        this.adapterPattern = arrayAdapterCreateFromResource;
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpRWType.setAdapter((SpinnerAdapter) this.adapterPattern);
        this.mEdMipiPort = (EditText) findViewById(R.id.ant_tuner_debug_mipi_port);
        this.mEdUsid = (EditText) findViewById(R.id.ant_tuner_debug_mipi_usid);
        this.mEdAddress = (EditText) findViewById(R.id.ant_tuner_debug_mipi_address);
        this.mEdData = (EditText) findViewById(R.id.ant_tuner_debug_mipi_data);
        this.mTvAddress = (TextView) findViewById(R.id.ant_tuner_debug_mipi_address_tv);
        this.mBtnMipiRead = (Button) findViewById(R.id.ant_tuner_debug_mipi_read);
        this.mBtnMipiWrite = (Button) findViewById(R.id.ant_tuner_debug_mipi_write);
        this.mBtnMipiRead.setOnClickListener(this);
        this.mBtnMipiWrite.setOnClickListener(this);
        this.mbtnMipiSignaling = (Button) findViewById(R.id.mipi_signaling);
        this.mbtnMipiNonSignaling = (Button) findViewById(R.id.mipi_non_signaling);
        this.mbtnMipiSignaling.setOnClickListener(this);
        this.mbtnMipiNonSignaling.setOnClickListener(this);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
    }
}
