package com.mediatek.engineermode.anttunerdebug;

import android.app.Activity;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.telephony.TelephonyManager;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class AntTunerDebugDAT extends Activity implements View.OnClickListener, RadioGroup.OnCheckedChangeListener {
    private static final int FEATRUE_IDX = 0;
    public static final int OP_DAT_READ = 0;
    public static final int OP_DAT_WRITE1 = 1;
    public static final int OP_DAT_WRITE2 = 2;
    public static final String TAG = "AntTunerDebugDAT";
    private String[] cmd;
    private RadioGroup groupDatStatus;
    private Button mBtnDatWrite;
    private Spinner mSpDatIndex;
    private ArrayAdapter<String> adapterPattern = null;
    private boolean enableDat = true;
    private List<String> datIndexList = new ArrayList<String>() { // from class: com.mediatek.engineermode.anttunerdebug.AntTunerDebugDAT.1
        {
            add("0");
            add("1");
            add("2");
            add("3");
            add("4");
            add("5");
            add("6");
            add("7");
        }
    };
    private int datIndex = 0;
    private Handler mATHandler = new Handler() { // from class: com.mediatek.engineermode.anttunerdebug.AntTunerDebugDAT.2
        private String[] mReturnData = new String[2];

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            if (message.what == 0) {
                if (asyncResult.exception != null) {
                    EmUtils.showToast("DAT Index read failed.");
                    Elog.d(AntTunerDebugDAT.TAG, "DAT Index read failed.");
                    return;
                }
                this.mReturnData = (String[]) asyncResult.result;
                Elog.d(AntTunerDebugDAT.TAG, "DAT Index read successful.");
                Elog.d(AntTunerDebugDAT.TAG, "mReturnData = " + this.mReturnData[0]);
                return;
            }
            if (message.what != 1) {
                if (message.what == 2) {
                    if (asyncResult.exception == null) {
                        Elog.d(AntTunerDebugDAT.TAG, "DAT Index write successful for slot 2");
                        return;
                    } else {
                        EmUtils.showToast("DAT Index write failed for slot 2");
                        Elog.e(AntTunerDebugDAT.TAG, "DAT Index write failed for slot 2");
                        return;
                    }
                }
                return;
            }
            if (asyncResult.exception != null) {
                EmUtils.showToast("DAT Index write failed for slot 1");
                Elog.e(AntTunerDebugDAT.TAG, "DAT Index write failed for slot 1");
                return;
            }
            Elog.d(AntTunerDebugDAT.TAG, "DAT Index write successful for slot 1");
            if (TelephonyManager.getDefault().getPhoneCount() > 1) {
                AntTunerDebugDAT antTunerDebugDAT = AntTunerDebugDAT.this;
                antTunerDebugDAT.sendAtCommand(1, antTunerDebugDAT.cmd, 2);
            }
        }
    };

    class SpinnerSelectedListener implements AdapterView.OnItemSelectedListener {
        SpinnerSelectedListener() {
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            AntTunerDebugDAT.this.datIndex = i;
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView<?> adapterView) {
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendAtCommand(int i, String[] strArr, int i2) {
        Elog.d(TAG, "sendAtCommand() " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(i, strArr, this.mATHandler.obtainMessage(i2));
    }

    @Override // android.widget.RadioGroup.OnCheckedChangeListener
    public void onCheckedChanged(RadioGroup radioGroup, int i) {
        switch (i) {
            case R.id.dat_disable /* 2131100389 */:
                this.adapterPattern.insert("-1", 0);
                this.mSpDatIndex.setSelection(0);
                this.mSpDatIndex.setSelected(false);
                this.mSpDatIndex.setEnabled(false);
                this.enableDat = false;
                break;
            case R.id.dat_enable /* 2131100390 */:
                this.enableDat = true;
                this.adapterPattern.remove("-1");
                this.mSpDatIndex.setSelection(this.datIndex);
                this.mSpDatIndex.setSelected(true);
                this.mSpDatIndex.setEnabled(true);
                break;
        }
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() != R.id.ant_tuner_debug_dat_write) {
            return;
        }
        String[] strArrPrepareDatWriteATCmd = prepareDatWriteATCmd();
        this.cmd = strArrPrepareDatWriteATCmd;
        sendAtCommand(0, strArrPrepareDatWriteATCmd, 1);
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.ant_tuner_debug_dat);
        Button button = (Button) findViewById(R.id.ant_tuner_debug_dat_write);
        this.mBtnDatWrite = button;
        button.setOnClickListener(this);
        this.mSpDatIndex = (Spinner) findViewById(R.id.ant_tuner_debug_dat_index);
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, this.datIndexList);
        this.adapterPattern = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpDatIndex.setAdapter((SpinnerAdapter) this.adapterPattern);
        this.mSpDatIndex.setSelection(0);
        this.mSpDatIndex.setOnItemSelectedListener(new SpinnerSelectedListener());
        RadioGroup radioGroup = (RadioGroup) findViewById(R.id.dat_status_rgroup);
        this.groupDatStatus = radioGroup;
        radioGroup.setOnCheckedChangeListener(this);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
    }

    public String[] prepareDatWriteATCmd() {
        String[] strArr = new String[2];
        if (this.enableDat) {
            strArr[0] = "AT+ERFIDX=0," + this.datIndex;
        } else {
            strArr[0] = "AT+ERFIDX=0,-1";
        }
        strArr[1] = "";
        return strArr;
    }
}
