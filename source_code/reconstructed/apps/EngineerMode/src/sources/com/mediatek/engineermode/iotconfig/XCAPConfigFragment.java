package com.mediatek.engineermode.iotconfig;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.support.v4.app.Fragment;
import android.telephony.SubscriptionManager;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.inputmethod.InputMethodManager;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmApplication;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class XCAPConfigFragment extends Fragment implements AdapterView.OnItemClickListener {
    protected static final String DEFAULT_DISABLE_VALUE = "0";
    protected static final String DEFAULT_ENABLE_VALUE = "1";
    protected static final String DEFAULT_VALUE_XCAP_BOOLEAN = "0";
    protected static final String DEFAULT_VALUE_XCAP_INTEGER = "-1";
    protected static final int DEFAULT_VALUE_XCAP_READY = 0;
    protected static final String DEFAULT_VALUE_XCAP_STRING = "";
    private static final int OPERATION_TIME_OUT_MILLIS = 3000;
    protected static final int RESET_VALUE_XCAP_OK = 3;
    protected static final int SET_SS_PROPERTY = 4;
    protected static final int SET_VALUE_XCAP_FAIL = 2;
    protected static final int SET_VALUE_XCAP_OK = 1;
    protected static final String TAG = "Iot/XCAPConfigFragment";
    public static final int UNKNOW = -1;
    protected static final int XCAP_ACTION_GET = 0;
    protected static final int XCAP_ACTION_RESET = 2;
    protected static final int XCAP_ACTION_SET = 1;
    protected static final String mATCMD = "SET_SS_PROP";
    private HashMap<String, String> XcapItemTypes;
    private LinkedHashMap<String, String> XcapItems;
    private XcapSettingAdapter adapter;
    private Button btnCancel;
    private Button btnSave;
    private ListView listView;
    private CountDownLatch mCallbackLatch;
    private String[] mXcapBoolCfg;
    public int mPhoneId = 0;
    private boolean mIs95Modem = false;
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.iotconfig.XCAPConfigFragment.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 0) {
                XCAPConfigFragment.this.updateUI((List) message.obj);
                return;
            }
            if (i == 1) {
                XCAPConfigFragment.this.updateUI((List) message.obj);
                EmUtils.showToast("Set values done!");
                return;
            }
            if (i == 2) {
                EmUtils.showToast("Set values failed!");
                new AlertDialog.Builder(EmApplication.getContext()).setMessage("Set values failed!").setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.XCAPConfigFragment.1.1
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialogInterface, int i2) {
                        dialogInterface.cancel();
                    }
                }).show();
            } else if (i == 3) {
                XCAPConfigFragment.this.updateUI((List) message.obj);
                EmUtils.showToast("Reset values done!");
                return;
            } else if (i != 4) {
                return;
            }
            AsyncResult asyncResult = (AsyncResult) message.obj;
            if (asyncResult.exception != null) {
                Elog.e(XCAPConfigFragment.TAG, "SET_SS_PROPERTY: ar.exception=" + asyncResult.exception);
                EmUtils.showToast("Set values to modem failed!");
            }
            if (XCAPConfigFragment.this.mCallbackLatch != null) {
                XCAPConfigFragment.this.mCallbackLatch.countDown();
            }
            Elog.d(XCAPConfigFragment.TAG, "SET_SS_PROPERTY done");
        }
    };

    public class LoadModelThread extends Thread {
        private int action;

        public LoadModelThread(int i) {
            this.action = i;
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            Message message = new Message();
            int i = this.action;
            if (i == 0) {
                message.obj = XCAPConfigFragment.this.getModel();
                message.what = 0;
            } else if (i != 1) {
                if (i != 2) {
                    message.what = -1;
                } else {
                    message.obj = XCAPConfigFragment.this.resetModel();
                    message.what = 3;
                }
            } else if (XCAPConfigFragment.this.setModel()) {
                try {
                    Thread.sleep(2000L);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                message.obj = XCAPConfigFragment.this.getModel();
                message.what = 1;
            } else {
                message.what = 2;
            }
            XCAPConfigFragment.this.mHandler.sendMessage(message);
        }
    }

    private List<XCAPModel> getEmptyModel() {
        ArrayList arrayList = new ArrayList();
        int i = 0;
        while (true) {
            String[] strArr = this.mXcapBoolCfg;
            if (i >= strArr.length) {
                break;
            }
            arrayList.add(new XCAPModel(strArr[i], IotConfigConstant.BOOLEANTYPE));
            i++;
        }
        for (String str : this.XcapItems.keySet()) {
            arrayList.add(new XCAPModel(str, this.XcapItemTypes.get(str)));
        }
        return arrayList;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public List<XCAPModel> getModel() {
        ArrayList arrayList = new ArrayList();
        if (this.mIs95Modem) {
            for (int i = 0; i < this.mXcapBoolCfg.length; i++) {
                boolean zEquals = SystemProperties.get(IotConfigConstant.SS_PREFIX + IotConfigConstant.mXcapBoolPropertyBeyond93[i]).equals("1");
                arrayList.add(new XCAPModel(this.mXcapBoolCfg[i], zEquals, zEquals, IotConfigConstant.BOOLEANTYPE));
            }
        } else {
            String binaryString = Integer.toBinaryString(Integer.valueOf(SystemProperties.get(IotConfigConstant.FK_SS_BOOLVALUE, "0")).intValue());
            String binaryString2 = Integer.toBinaryString(Integer.valueOf(SystemProperties.get(IotConfigConstant.FK_SS_BOOLCONFIG, "0")).intValue());
            Elog.d(TAG, "[getModel]BoolValue: " + binaryString + " BoolConfig: " + binaryString2);
            char[] cArr = new char[binaryString.length()];
            char[] cArr2 = new char[binaryString2.length()];
            char[] charArray = binaryString.toCharArray();
            char[] charArray2 = binaryString2.toCharArray();
            for (int i2 = 0; i2 < this.mXcapBoolCfg.length; i2++) {
                boolean z = false;
                if (i2 < charArray2.length && charArray2[(charArray2.length - 1) - i2] == '1') {
                    z = true;
                }
                boolean z2 = false;
                if (i2 < charArray.length && charArray[(charArray.length - 1) - i2] == '1') {
                    z2 = true;
                }
                arrayList.add(new XCAPModel(this.mXcapBoolCfg[i2], z, z2, IotConfigConstant.BOOLEANTYPE));
            }
        }
        for (String str : this.XcapItems.keySet()) {
            if (this.XcapItemTypes.get(str).equals(IotConfigConstant.BOOLEANTYPE)) {
                arrayList.add(new XCAPModel(str, SystemProperties.get(this.XcapItems.get(str)).equals("1"), this.XcapItemTypes.get(str)));
            } else {
                arrayList.add(new XCAPModel(str, SystemProperties.get(this.XcapItems.get(str), DEFAULT_VALUE_XCAP_STRING), this.XcapItemTypes.get(str)));
            }
        }
        return arrayList;
    }

    private boolean isCallbackDone() throws InterruptedException {
        boolean zAwait;
        try {
            zAwait = this.mCallbackLatch.await(3000L, TimeUnit.MILLISECONDS);
        } catch (InterruptedException e) {
            zAwait = false;
        }
        Elog.d(TAG, "waitForCallback: isDone=" + zAwait);
        return zAwait;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public List<XCAPModel> resetModel() {
        ArrayList arrayList = new ArrayList();
        String[] strArr = new String[2];
        if (this.mIs95Modem) {
            strArr[0] = mATCMD;
            strArr[1] = IotConfigConstant.FK_SS_CONFIG_RESET_95;
            sendATcmdToRIL(this.mPhoneId, strArr, this.mHandler.obtainMessage(4));
        } else {
            sendATcmdToRIL(this.mPhoneId, new String[]{mATCMD, "persist.vendor.ss.boolvalue,0"}, this.mHandler.obtainMessage(4));
            sendATcmdToRIL(this.mPhoneId, new String[]{mATCMD, "persist.vendor.ss.boolconfig,0"}, this.mHandler.obtainMessage(4));
        }
        int i = 0;
        while (true) {
            String[] strArr2 = this.mXcapBoolCfg;
            if (i >= strArr2.length) {
                break;
            }
            arrayList.add(new XCAPModel(strArr2[i], IotConfigConstant.BOOLEANTYPE));
            if (this.mIs95Modem) {
                strArr[0] = mATCMD;
                strArr[1] = IotConfigConstant.SS_PREFIX + IotConfigConstant.mXcapBoolPropertyBeyond93[i] + ",";
                sendATcmdToRIL(this.mPhoneId, strArr, this.mHandler.obtainMessage(4));
            }
            i++;
        }
        for (String str : this.XcapItems.keySet()) {
            if (this.mIs95Modem) {
                if (this.XcapItemTypes.get(str).equals(IotConfigConstant.STRINGTYPE)) {
                    strArr[0] = mATCMD;
                    strArr[1] = this.XcapItems.get(str) + ",";
                    sendATcmdToRIL(this.mPhoneId, strArr, this.mHandler.obtainMessage(4));
                    arrayList.add(new XCAPModel(str, SystemProperties.get(this.XcapItems.get(str)), this.XcapItemTypes.get(str)));
                } else if (this.XcapItemTypes.get(str).equals(IotConfigConstant.INTEGERTYPE)) {
                    strArr[0] = mATCMD;
                    strArr[1] = this.XcapItems.get(str) + ",";
                    sendATcmdToRIL(this.mPhoneId, strArr, this.mHandler.obtainMessage(4));
                    arrayList.add(new XCAPModel(str, SystemProperties.get(this.XcapItems.get(str)), this.XcapItemTypes.get(str)));
                } else {
                    strArr[0] = mATCMD;
                    strArr[1] = this.XcapItems.get(str) + ",";
                    sendATcmdToRIL(this.mPhoneId, strArr, this.mHandler.obtainMessage(4));
                    arrayList.add(new XCAPModel(str, SystemProperties.get(this.XcapItems.get(str)).equals("1"), this.XcapItemTypes.get(str)));
                }
            } else if (this.XcapItemTypes.get(str).equals(IotConfigConstant.STRINGTYPE)) {
                strArr[0] = mATCMD;
                strArr[1] = this.XcapItems.get(str) + "," + DEFAULT_VALUE_XCAP_STRING;
                sendATcmdToRIL(this.mPhoneId, strArr, this.mHandler.obtainMessage(4));
                arrayList.add(new XCAPModel(str, SystemProperties.get(this.XcapItems.get(str)), this.XcapItemTypes.get(str)));
            } else if (this.XcapItemTypes.get(str).equals(IotConfigConstant.INTEGERTYPE)) {
                strArr[0] = mATCMD;
                strArr[1] = this.XcapItems.get(str) + "," + String.valueOf(DEFAULT_VALUE_XCAP_INTEGER);
                sendATcmdToRIL(this.mPhoneId, strArr, this.mHandler.obtainMessage(4));
                arrayList.add(new XCAPModel(str, SystemProperties.get(this.XcapItems.get(str)), this.XcapItemTypes.get(str)));
            } else {
                strArr[0] = mATCMD;
                strArr[1] = this.XcapItems.get(str) + ",0";
                sendATcmdToRIL(this.mPhoneId, strArr, this.mHandler.obtainMessage(4));
                arrayList.add(new XCAPModel(str, SystemProperties.get(this.XcapItems.get(str)).equals("1"), this.XcapItemTypes.get(str)));
            }
        }
        if (this.mIs95Modem) {
            strArr[0] = mATCMD;
            strArr[1] = IotConfigConstant.FK_SS_CONFIG_RESET_DONE_95;
            sendATcmdToRIL(this.mPhoneId, strArr, this.mHandler.obtainMessage(4));
        }
        return arrayList;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean setModel() {
        int i = 0;
        int i2 = 0;
        List<XCAPModel> list = this.adapter.getList();
        Elog.d(TAG, "[setModel]listSize : " + list.size());
        String[] strArr = new String[2];
        for (int i3 = 0; i3 < list.size(); i3++) {
            if (i3 < this.mXcapBoolCfg.length) {
                if (this.mIs95Modem) {
                    if (list.get(i3).isConfiged()) {
                        strArr[0] = mATCMD;
                        StringBuilder sb = new StringBuilder();
                        sb.append(IotConfigConstant.SS_PREFIX);
                        sb.append(IotConfigConstant.mXcapBoolPropertyBeyond93[i3]);
                        sb.append(",");
                        sb.append(list.get(i3).isSelected() ? "1" : "0");
                        strArr[1] = sb.toString();
                        sendATcmdToRIL(this.mPhoneId, strArr, this.mHandler.obtainMessage(4));
                    }
                } else if (list.get(i3).isConfiged()) {
                    i2 = list.get(i3).isSelected() ? i2 | (1 << i3) : i2 & (~(1 << i3));
                    i |= 1 << i3;
                } else {
                    i &= ~(1 << i3);
                }
            } else if (!DEFAULT_VALUE_XCAP_STRING.equals(list.get(i3).getValue())) {
                strArr[0] = mATCMD;
                strArr[1] = this.XcapItems.get(list.get(i3).getName()) + "," + list.get(i3).getValue();
                sendATcmdToRIL(this.mPhoneId, strArr, this.mHandler.obtainMessage(4));
            }
        }
        if (!this.mIs95Modem) {
            Elog.d(TAG, "[setModel]BoolValue: " + i2 + " BoolConfig: " + i);
            StringBuilder sb2 = new StringBuilder();
            sb2.append("persist.vendor.ss.boolvalue,");
            sb2.append(i2);
            sendATcmdToRIL(this.mPhoneId, new String[]{mATCMD, sb2.toString()}, this.mHandler.obtainMessage(4));
            sendATcmdToRIL(this.mPhoneId, new String[]{mATCMD, "persist.vendor.ss.boolconfig," + i}, this.mHandler.obtainMessage(4));
        }
        return true;
    }

    public void hideInputMethod(View view) {
        if (getActivity() != null && view == null) {
            view = getActivity().getCurrentFocus();
        }
        if (view != null) {
            view.clearFocus();
            InputMethodManager inputMethodManager = (InputMethodManager) getActivity().getSystemService("input_method");
            if (inputMethodManager.isActive()) {
                inputMethodManager.hideSoftInputFromWindow(view.getWindowToken(), 0);
            }
        }
    }

    @Override // android.support.v4.app.Fragment
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.mPhoneId = SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultDataSubscriptionId());
        this.mIs95Modem = SystemProperties.get("persist.vendor.ss.modem_version").equals("1");
        Elog.d(TAG, "mIs95Modem = " + this.mIs95Modem);
        if (FeatureSupport.is93Modem() && !this.mIs95Modem) {
            this.mXcapBoolCfg = IotConfigConstant.mXcapBoolCfgFor93;
            this.XcapItems = IotConfigConstant.mXcapItemsFor93;
            this.XcapItemTypes = IotConfigConstant.mXcapItemTypesFor93;
        } else if (this.mIs95Modem) {
            this.mXcapBoolCfg = IotConfigConstant.mXcapBoolCfgBeyond93;
            this.XcapItems = IotConfigConstant.mXcapItemsBeyond93;
            this.XcapItemTypes = IotConfigConstant.mXcapItemTypesBeyond93;
        } else {
            this.mXcapBoolCfg = IotConfigConstant.mXcapBoolCfgBelow93;
            this.XcapItems = IotConfigConstant.mXcapItemsBelow93;
            this.XcapItemTypes = IotConfigConstant.mXcapItemTypesBelow93;
        }
    }

    @Override // android.support.v4.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        View viewInflate = layoutInflater.inflate(R.layout.iot_xcap_config, (ViewGroup) null);
        this.listView = (ListView) viewInflate.findViewById(R.id.xcap_list);
        this.btnSave = (Button) viewInflate.findViewById(R.id.btnSave);
        this.btnCancel = (Button) viewInflate.findViewById(R.id.btnCancel);
        XcapSettingAdapter xcapSettingAdapter = new XcapSettingAdapter(getActivity(), getEmptyModel());
        this.adapter = xcapSettingAdapter;
        this.listView.setAdapter((ListAdapter) xcapSettingAdapter);
        this.btnSave.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.XCAPConfigFragment.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                XCAPConfigFragment.this.new LoadModelThread(1).start();
            }
        });
        this.btnCancel.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.XCAPConfigFragment.3
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                XCAPConfigFragment.this.new LoadModelThread(2).start();
            }
        });
        return viewInflate;
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
    }

    @Override // android.support.v4.app.Fragment
    public void onResume() {
        new LoadModelThread(0).start();
        super.onResume();
    }

    public void sendATcmdToRIL(int i, String[] strArr, Message message) {
        Elog.d(TAG, "sendATcmdToRIL : " + Arrays.toString(strArr));
        this.mCallbackLatch = new CountDownLatch(1);
        EmUtils.invokeOemRilRequestStringsEm(i, strArr, this.mHandler.obtainMessage(4));
        if (isCallbackDone()) {
            return;
        }
        Elog.e(TAG, "waitForCallback: callback is not done!");
    }

    @Override // android.support.v4.app.Fragment
    public void setUserVisibleHint(boolean z) {
        super.setUserVisibleHint(z);
        if (z) {
            return;
        }
        hideInputMethod(null);
    }

    public void updateUI(List<XCAPModel> list) {
        this.adapter.clear();
        this.adapter.addAll(list);
        this.adapter.notifyDataSetChanged();
    }
}
