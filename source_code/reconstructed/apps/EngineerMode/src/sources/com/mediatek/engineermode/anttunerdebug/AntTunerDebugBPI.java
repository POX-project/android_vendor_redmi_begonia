package com.mediatek.engineermode.anttunerdebug;

import android.app.Activity;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.RadioGroup;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TableRow;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class AntTunerDebugBPI extends Activity implements View.OnClickListener, RadioGroup.OnCheckedChangeListener {
    private static final int BPI_QUANTITY_BIT = 32;
    private static final int OP_BPI_NON_SIGNALING = 3;
    public static final int OP_BPI_READ = 0;
    private static final int OP_BPI_SIGNALING = 2;
    public static final int OP_BPI_WRITE = 1;
    private static final String RESPONSE_CMD = "+ERFTX: ";
    public static final String TAG = "AntTunerDebugBPI";
    private BpiDataAdapter bpiAdapter;
    private ListView bpiListView;
    private TableRow bpiTableRowData1;
    private TableRow bpiTableRowData2;
    private TableRow bpiTableRowData3;
    private Button btnNonSignaling;
    private Button btnSignaling;
    private RadioGroup groupBpiCode;
    private Button mBtnBpiRead;
    private Button mBtnBpiWrite;
    private EditText mEdBpiData1;
    private EditText mEdBpiData2;
    private Spinner mSpQuantityType;
    private String mBpiData1 = null;
    private String mBpiData2 = null;
    private String mBpiMode = null;
    ArrayAdapter<String> adapterPattern = null;
    private boolean showBinary = false;
    private int bpiQuantity = 0;
    private String[] bpiQuantityType = new String[32];
    private String[] bpiDatas = {null, null};
    List<BpiBinaryData> bpiBinaryList = new ArrayList();
    private final Handler mATHandler = new Handler() { // from class: com.mediatek.engineermode.anttunerdebug.AntTunerDebugBPI.1
        private String[] mReturnData = new String[2];

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            if (message.what == 0) {
                if (asyncResult.exception != null) {
                    EmUtils.showToast("BPI read failed.", 0);
                    Elog.e(AntTunerDebugBPI.TAG, "BPI read failed.");
                    return;
                }
                Elog.i(AntTunerDebugBPI.TAG, "BPI read successful.");
                this.mReturnData = (String[]) asyncResult.result;
                Elog.d(AntTunerDebugBPI.TAG, "mReturnData = " + this.mReturnData[0]);
                EmUtils.showToast(this.mReturnData[0], 0);
                AntTunerDebugBPI.this.handleQuery(this.mReturnData);
                return;
            }
            if (message.what == 1) {
                if (asyncResult.exception == null) {
                    Elog.d(AntTunerDebugBPI.TAG, "BPI write successful.");
                    return;
                } else {
                    EmUtils.showToast("BPI write failed.", 0);
                    Elog.e(AntTunerDebugBPI.TAG, "BPI write failed.");
                    return;
                }
            }
            if (message.what == 2) {
                if (asyncResult.exception == null) {
                    Elog.d(AntTunerDebugBPI.TAG, "BPI Signaling successful.");
                    return;
                } else {
                    EmUtils.showToast("BPI Signaling failed.", 0);
                    Elog.e(AntTunerDebugBPI.TAG, "BPI Signaling failed.");
                    return;
                }
            }
            if (message.what == 3) {
                if (asyncResult.exception == null) {
                    Elog.d(AntTunerDebugBPI.TAG, "BPI Non-Signaling successful.");
                } else {
                    EmUtils.showToast("BPI Non-Signaling failed.", 0);
                    Elog.e(AntTunerDebugBPI.TAG, "BPI Non-Signaling failed.");
                }
            }
        }
    };

    class SpinnerSelectedListener implements AdapterView.OnItemSelectedListener {
        SpinnerSelectedListener() {
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onItemSelected(AdapterView<?> adapterView, View view, int i, long j) {
            AntTunerDebugBPI.this.bpiQuantity = i + 1;
            AntTunerDebugBPI antTunerDebugBPI = AntTunerDebugBPI.this;
            AntTunerDebugBPI.this.updateListView(antTunerDebugBPI.initBpiBinaryList(Integer.valueOf(antTunerDebugBPI.bpiQuantity)));
        }

        @Override // android.widget.AdapterView.OnItemSelectedListener
        public void onNothingSelected(AdapterView<?> adapterView) {
        }
    }

    private boolean binaryValueGetAndCheck(int i) {
        List<BpiBinaryData> list = this.bpiAdapter.getList();
        char[] cArr = new char[32];
        for (int i2 = 0; i2 < 32; i2++) {
            cArr[i2] = '0';
        }
        int i3 = 0;
        for (int i4 = 0; i4 < list.size(); i4++) {
            int iIntValue = list.get(i4).getValue().equals("") ? -1 : Integer.valueOf(list.get(i4).getValue()).intValue();
            i3 = (iIntValue <= i3 || iIntValue >= 32) ? i3 : iIntValue;
            if (iIntValue < 0 || iIntValue >= 32) {
                EmUtils.showToast("BPI Pin# should be (0-31) ", 0);
                return false;
            }
            if (iIntValue != -1) {
                cArr[iIntValue] = list.get(i4).isSelected() ? '1' : '0';
            }
            Elog.d(TAG, "pin: " + iIntValue + ", bpiData1[pin]: " + cArr[iIntValue]);
        }
        String strSubstring = new String(cArr).substring(0, i3 + 1);
        Elog.d(TAG, "max: " + i3 + ", bpiData: " + strSubstring);
        try {
            this.bpiDatas[0] = Long.toString(Long.parseLong(new StringBuffer(strSubstring).reverse().toString(), 2));
            this.bpiDatas[1] = "0";
            return true;
        } catch (NumberFormatException e) {
            EmUtils.showToast("BPI Pin# should be (0-31)", 0);
            return false;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleQuery(String[] strArr) {
        if (strArr == null || strArr.length <= 0) {
            Elog.e(TAG, "Modem return null");
            return;
        }
        Elog.v(TAG, "Modem return: " + strArr[0]);
        String[] strArrSplit = strArr[0].substring(RESPONSE_CMD.length(), strArr[0].length()).trim().split(",");
        if (strArrSplit == null || strArrSplit.length <= 0) {
            return;
        }
        if (strArrSplit[2] == null && strArrSplit[3] == null) {
            return;
        }
        String[] strArr2 = this.bpiDatas;
        strArr2[0] = strArrSplit[2];
        strArr2[1] = strArrSplit[3];
        updateBpiData();
    }

    private void sendAtCommand(String[] strArr, int i) {
        Elog.d(TAG, "sendAtCommand() " + strArr[0]);
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mATHandler.obtainMessage(i));
    }

    private boolean valueGetAndCheck(int i) {
        this.mBpiData1 = this.mEdBpiData1.getText().toString();
        this.mBpiData2 = this.mEdBpiData2.getText().toString();
        String str = i == 0 ? "0" : "1";
        this.mBpiMode = str;
        if (!str.equals("1")) {
            return true;
        }
        if (this.mBpiData1.equals("")) {
            EmUtils.showToast("Data1 should not be empty", 0);
            return false;
        }
        try {
            Long.parseLong(this.mBpiData1, 16);
            if (this.mBpiData2.equals("")) {
                this.mBpiData2 = "0";
                return true;
            }
            try {
                Long.parseLong(this.mBpiData2, 16);
                return true;
            } catch (NumberFormatException e) {
                EmUtils.showToast("Data2 should be 16 HEX", 0);
                return false;
            }
        } catch (NumberFormatException e2) {
            EmUtils.showToast("Data1 should be 16 HEX", 0);
            return false;
        }
    }

    List<BpiBinaryData> initBpiBinaryList(Object obj) {
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < Integer.valueOf(obj.toString()).intValue(); i++) {
            arrayList.add(new BpiBinaryData("BPI Pin#"));
        }
        return arrayList;
    }

    String[] initQuantityTypeArray(int i) {
        String[] strArr = new String[i];
        for (int i2 = 0; i2 < i; i2++) {
            this.bpiQuantityType[i2] = String.valueOf(i2 + 1);
        }
        return this.bpiQuantityType;
    }

    @Override // android.widget.RadioGroup.OnCheckedChangeListener
    public void onCheckedChanged(RadioGroup radioGroup, int i) {
        if (i == R.id.bpi_binary) {
            this.showBinary = true;
        } else if (i == R.id.bpi_hex) {
            this.showBinary = false;
        }
        updateBpiData();
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        switch (view.getId()) {
            case R.id.ant_tuner_debug_bpi_read /* 2131100054 */:
                if (valueGetAndCheck(0)) {
                    sendAtCommand(new String[]{"AT+ERFTX=12,1,0", "+ERFTX:"}, 0);
                }
                break;
            case R.id.ant_tuner_debug_bpi_write /* 2131100055 */:
                if (!this.showBinary && valueGetAndCheck(1)) {
                    this.mBpiData1 = Long.toString(Long.parseLong(this.mBpiData1, 16));
                    this.mBpiData2 = Long.toString(Long.parseLong(this.mBpiData2, 16));
                    sendAtCommand(new String[]{"AT+ERFTX=12,1,1," + this.mBpiData1 + "," + this.mBpiData2, ""}, 1);
                    break;
                } else if (this.showBinary && binaryValueGetAndCheck(1)) {
                    sendAtCommand(new String[]{"AT+ERFTX=12,1,1," + this.bpiDatas[0] + "," + this.bpiDatas[1], ""}, 1);
                    break;
                }
                break;
            case R.id.bpi_non_signaling /* 2131100193 */:
                sendAtCommand(new String[]{"AT+CFUN=0", ""}, 3);
                sendAtCommand(new String[]{"AT+EGCMD=53", ""}, 3);
                break;
            case R.id.bpi_signaling /* 2131100194 */:
                sendAtCommand(new String[]{"AT+CFUN=1", ""}, 2);
                break;
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.ant_tuner_debug_bpi);
        this.mEdBpiData1 = (EditText) findViewById(R.id.ant_tuner_debug_bpi_data1);
        this.mEdBpiData2 = (EditText) findViewById(R.id.ant_tuner_debug_bpi_data2);
        this.mBtnBpiRead = (Button) findViewById(R.id.ant_tuner_debug_bpi_read);
        this.mBtnBpiWrite = (Button) findViewById(R.id.ant_tuner_debug_bpi_write);
        this.mBtnBpiRead.setOnClickListener(this);
        this.mBtnBpiWrite.setOnClickListener(this);
        this.mSpQuantityType = (Spinner) findViewById(R.id.ant_tuner_debug_bpi_quantity);
        ArrayAdapter<String> arrayAdapter = new ArrayAdapter<>(this, android.R.layout.simple_spinner_item, initQuantityTypeArray(32));
        this.adapterPattern = arrayAdapter;
        arrayAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpQuantityType.setAdapter((SpinnerAdapter) this.adapterPattern);
        this.bpiQuantity = 16;
        this.mSpQuantityType.setSelection(16 - 1);
        this.mSpQuantityType.setOnItemSelectedListener(new SpinnerSelectedListener());
        this.bpiListView = (ListView) findViewById(R.id.ant_tuner_debug_bpi_list);
        this.bpiBinaryList = initBpiBinaryList(32);
        BpiDataAdapter bpiDataAdapter = new BpiDataAdapter(this, this.bpiBinaryList);
        this.bpiAdapter = bpiDataAdapter;
        this.bpiListView.setAdapter((ListAdapter) bpiDataAdapter);
        RadioGroup radioGroup = (RadioGroup) findViewById(R.id.bpi_code_rgroup);
        this.groupBpiCode = radioGroup;
        radioGroup.setOnCheckedChangeListener(this);
        Button button = (Button) findViewById(R.id.bpi_signaling);
        this.btnSignaling = button;
        button.setOnClickListener(this);
        Button button2 = (Button) findViewById(R.id.bpi_non_signaling);
        this.btnNonSignaling = button2;
        button2.setOnClickListener(this);
        this.bpiTableRowData1 = (TableRow) findViewById(R.id.BpiTableRow01);
        this.bpiTableRowData2 = (TableRow) findViewById(R.id.BpiTableRow02);
        this.bpiTableRowData3 = (TableRow) findViewById(R.id.BpiTableRow03);
    }

    @Override // android.app.Activity
    public void onDestroy() {
        super.onDestroy();
    }

    public void updateBpiData() {
        if (this.showBinary) {
            this.bpiTableRowData1.setVisibility(8);
            this.bpiTableRowData2.setVisibility(8);
            this.bpiTableRowData3.setVisibility(0);
            this.bpiListView.setVisibility(0);
            findViewById(R.id.BpiBinarySpiner).setVisibility(0);
            findViewById(R.id.BpiHexSpiner).setVisibility(0);
        } else {
            this.bpiTableRowData1.setVisibility(0);
            this.bpiTableRowData2.setVisibility(0);
            this.bpiTableRowData3.setVisibility(8);
            this.bpiListView.setVisibility(8);
            findViewById(R.id.BpiBinarySpiner).setVisibility(8);
            findViewById(R.id.BpiHexSpiner).setVisibility(0);
        }
        String[] strArr = this.bpiDatas;
        if (strArr[0] == null && strArr[1] == null) {
            return;
        }
        String[] strArr2 = {"", ""};
        String[] strArr3 = {"", ""};
        List<BpiBinaryData> list = this.bpiAdapter.getList();
        String[] strArr4 = this.bpiDatas;
        if (strArr4[0] != null) {
            strArr2[0] = Long.toHexString(Long.parseLong(strArr4[0]));
            strArr3[0] = Long.toBinaryString(Long.parseLong(this.bpiDatas[0]));
            strArr3[0] = new StringBuffer(strArr3[0]).reverse().toString();
            Elog.d(TAG, "bpiBinaryDatas[0]" + strArr3[0] + ",bpiHexDatas[0]" + strArr2[0]);
            this.mEdBpiData1.setText(strArr2[0]);
            for (int i = 0; i < list.size(); i++) {
                int iIntValue = list.get(i).getValue().equals("") ? -1 : Integer.valueOf(list.get(i).getValue()).intValue();
                if (iIntValue != -1 && iIntValue < strArr3[0].length()) {
                    list.set(i, strArr3[0].charAt(iIntValue) == '1' ? new BpiBinaryData("BPI Pin#", Integer.valueOf(iIntValue), true) : new BpiBinaryData("BPI Pin#", Integer.valueOf(iIntValue), false));
                }
            }
        }
        String[] strArr5 = this.bpiDatas;
        if (strArr5[1] == null || strArr5[1].equals("0") || this.bpiDatas[1].replace("", " ").equals("")) {
            String[] strArr6 = this.bpiDatas;
            if (strArr6[1] != null && !this.showBinary) {
                strArr2[1] = Long.toHexString(Long.parseLong(strArr6[1]));
                this.mEdBpiData2.setText(strArr2[1]);
            }
        } else {
            strArr2[1] = Long.toHexString(Long.parseLong(this.bpiDatas[1]));
            strArr3[1] = Long.toBinaryString(Long.parseLong(this.bpiDatas[1]));
            strArr3[1] = new StringBuffer(strArr3[1]).reverse().toString();
            this.mEdBpiData2.setText(strArr2[1]);
            for (int i2 = 0; i2 < strArr3[1].length(); i2++) {
                this.bpiBinaryList.add(i2 + 32, strArr3[1].charAt(i2) == '1' ? new BpiBinaryData("BPI Pin#", Integer.valueOf(i2 + 32), true) : new BpiBinaryData("BPI Pin#", Integer.valueOf(i2 + 32)));
            }
            Elog.d(TAG, "bpiBinaryDatas[1]" + strArr3[1] + ",bpiHexDatas[1]" + strArr2[1]);
        }
        updateListView(list);
        Iterator<BpiBinaryData> it = list.iterator();
        while (it.hasNext()) {
            Elog.d(TAG, "bpiList:" + it.next().toString());
        }
        Iterator<BpiBinaryData> it2 = this.bpiBinaryList.iterator();
        while (it2.hasNext()) {
            Elog.d(TAG, "bpiBinaryList:" + it2.next().toString());
        }
    }

    public void updateListView(List<BpiBinaryData> list) {
        this.bpiAdapter.clear();
        this.bpiAdapter.addAll(list);
        this.bpiAdapter.refresh(list);
        this.bpiAdapter.notifyDataSetChanged();
    }
}
