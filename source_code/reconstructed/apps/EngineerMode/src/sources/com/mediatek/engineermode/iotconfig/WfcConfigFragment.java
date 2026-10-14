package com.mediatek.engineermode.iotconfig;

import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.support.v4.app.Fragment;
import android.text.InputFilter;
import android.text.TextUtils;
import android.text.method.NumberKeyListener;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.inputmethod.InputMethodManager;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.wfo.IWifiOffloadService;
import com.mediatek.wfo.WifiOffloadManager;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class WfcConfigFragment extends Fragment implements View.OnClickListener {
    private static final String TAG = "Iot/WfcConfigFragment";
    public static final int UNKNOW = 2;
    public static final int WFC_ACTION_RESET_MCCMNC = 1;
    public static final int WFC_ACTION_SET_MCCMNC = 0;
    public static final int WFC_SET_MCCMNC_FAILED = 4;
    public static final int WFC_SET_MCCMNC_INPUT_ILLEGAL = 2;
    public static final int WFC_SET_MCCMNC_LENGTH_TOO_LONG = 1;
    public static final int WFC_SET_MCCMNC_OK = 3;
    public static final int WFC_SHOW_ADDED_MCCMNC_LIST = 1;
    public static final int WFC_SHOW_ALL_MCCMNC_LIST = 2;
    public static final int WFC_SHOW_EXISTED_MCCMNC_LIST = 0;
    private LinearLayout addMccMncLayout;
    private Button btnAddCancel;
    private Button btnAddMccMnc;
    private Button btnAddOk;
    private Button btnResetMccMnc;
    private LinearLayout defaultAddMccMncLayout;
    private EditText inputMccMnc;
    private MccMncAdapter mAdapter;
    private IWifiOffloadService mWfoService;
    private ListView mccMncListView;
    private Spinner mccMncSpinner;
    private int currentList = 0;
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.iotconfig.WfcConfigFragment.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 2) {
                WfcConfigFragment.this.showToast("MCC/MNC input illegal!");
                return;
            }
            if (i != 3) {
                if (i != 4) {
                    return;
                }
                WfcConfigFragment.this.showToast("Set MCC/MNC failed!");
            } else {
                WfcConfigFragment.this.setAddMccMncLayoutVisibility(false);
                WfcConfigFragment wfcConfigFragment = WfcConfigFragment.this;
                wfcConfigFragment.updateUI(wfcConfigFragment.currentList);
                WfcConfigFragment.this.showToast("Set/Reset MCC/MNC ok!");
            }
        }
    };

    public class SetMccMncThread extends Thread {
        private int action;
        private String mccMncContent;

        public SetMccMncThread(int i, String str) {
            this.action = i;
            this.mccMncContent = str;
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() throws RemoteException {
            Message message = new Message();
            int i = this.action;
            if (i != 0) {
                if (i != 1) {
                    message.what = 2;
                } else {
                    boolean mccMncAllowList = false;
                    try {
                        mccMncAllowList = WfcConfigFragment.this.mWfoService.setMccMncAllowList(null);
                    } catch (RemoteException e) {
                        e.printStackTrace();
                    }
                    if (mccMncAllowList) {
                        message.what = 3;
                    } else {
                        message.what = 4;
                    }
                }
            } else if (this.mccMncContent.length() > 92) {
                message.what = 1;
            } else {
                String[] strArrSplit = this.mccMncContent.split(",");
                if (WfcConfigFragment.this.checkInputMccMnc(strArrSplit)) {
                    boolean mccMncAllowList2 = false;
                    try {
                        mccMncAllowList2 = WfcConfigFragment.this.mWfoService.setMccMncAllowList(strArrSplit);
                    } catch (RemoteException e2) {
                        e2.printStackTrace();
                    }
                    if (mccMncAllowList2) {
                        message.what = 3;
                    } else {
                        message.what = 4;
                    }
                } else {
                    message.what = 2;
                }
            }
            WfcConfigFragment.this.mHandler.sendMessage(message);
        }
    }

    private void initView(View view) {
        this.mccMncSpinner = (Spinner) view.findViewById(R.id.mccmnc_list_spinner);
        this.btnAddMccMnc = (Button) view.findViewById(R.id.add_mccmnc);
        this.btnResetMccMnc = (Button) view.findViewById(R.id.reset_mccmnc);
        this.mccMncListView = (ListView) view.findViewById(R.id.mccmnc_list);
        this.addMccMncLayout = (LinearLayout) view.findViewById(R.id.add_mccmnc_layout);
        this.defaultAddMccMncLayout = (LinearLayout) view.findViewById(R.id.reset_mccmnc_layout);
        this.btnAddOk = (Button) view.findViewById(R.id.add_mccmnc_ok);
        this.btnAddCancel = (Button) view.findViewById(R.id.add_mccmnc_cancel);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = ArrayAdapter.createFromResource(getActivity(), R.array.mccmnc_display_mode, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mccMncSpinner.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource);
        AdapterView.OnItemSelectedListener onItemSelectedListener = new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.iotconfig.WfcConfigFragment.2
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view2, int i, long j) {
                if (i == 0) {
                    WfcConfigFragment.this.updateUI(0);
                } else if (i == 1) {
                    WfcConfigFragment.this.updateUI(1);
                } else {
                    if (i != 2) {
                        return;
                    }
                    WfcConfigFragment.this.updateUI(2);
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        };
        this.inputMccMnc = (EditText) view.findViewById(R.id.wfc_input_mccmnc);
        setAddMccMncLayoutVisibility(false);
        this.mccMncSpinner.setOnItemSelectedListener(onItemSelectedListener);
        this.mWfoService = IWifiOffloadService.Stub.asInterface(ServiceManager.getService(WifiOffloadManager.WFO_SERVICE));
        MccMncAdapter mccMncAdapter = new MccMncAdapter(getActivity(), getMccMncList(this.currentList));
        this.mAdapter = mccMncAdapter;
        this.mccMncListView.setAdapter((ListAdapter) mccMncAdapter);
        this.btnAddMccMnc.setOnClickListener(this);
        this.btnResetMccMnc.setOnClickListener(this);
        this.btnAddOk.setOnClickListener(this);
        this.btnAddCancel.setOnClickListener(this);
        this.inputMccMnc.setOnEditorActionListener(new TextView.OnEditorActionListener() { // from class: com.mediatek.engineermode.iotconfig.WfcConfigFragment.3
            @Override // android.widget.TextView.OnEditorActionListener
            public boolean onEditorAction(TextView textView, int i, KeyEvent keyEvent) {
                if ((keyEvent == null || keyEvent.getKeyCode() != 66) && i != 6) {
                    return false;
                }
                WfcConfigFragment wfcConfigFragment = WfcConfigFragment.this;
                wfcConfigFragment.hideInputMethod(wfcConfigFragment.inputMccMnc);
                return false;
            }
        });
    }

    public boolean checkInputMccMnc(String[] strArr) {
        for (String str : strArr) {
            if (5 > str.length() || 6 < str.length()) {
                return false;
            }
        }
        return true;
    }

    public ArrayList<String> getMccMncList(int i) {
        ArrayList<String> arrayList = new ArrayList<>();
        IWifiOffloadService iWifiOffloadService = this.mWfoService;
        if (iWifiOffloadService == null) {
            return arrayList;
        }
        try {
            String[] mccMncAllowList = iWifiOffloadService.getMccMncAllowList(i);
            if (mccMncAllowList == null) {
                return null;
            }
            arrayList = new ArrayList<>(Arrays.asList(mccMncAllowList));
            Elog.d(TAG, "Read MccMncList : " + arrayList.toString());
            return arrayList;
        } catch (RemoteException e) {
            Elog.e(TAG, "RemoteException ImsCallSessionProxy()");
            return arrayList;
        }
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

    public void limitEditText(EditText editText, int i) {
        editText.setFilters(new InputFilter[]{new InputFilter.LengthFilter(i)});
        editText.setKeyListener(new NumberKeyListener() { // from class: com.mediatek.engineermode.iotconfig.WfcConfigFragment.4
            @Override // android.text.method.NumberKeyListener
            protected char[] getAcceptedChars() {
                return new char[]{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ','};
            }

            @Override // android.text.method.KeyListener
            public int getInputType() {
                return 2;
            }
        });
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        switch (view.getId()) {
            case R.id.add_mccmnc /* 2131100029 */:
                setAddMccMncLayoutVisibility(true);
                break;
            case R.id.add_mccmnc_cancel /* 2131100030 */:
                setAddMccMncLayoutVisibility(false);
                break;
            case R.id.add_mccmnc_ok /* 2131100032 */:
                String strReplace = this.inputMccMnc.getText().toString().replace(" ", "");
                if (strReplace != null && !strReplace.equals("")) {
                    new SetMccMncThread(0, strReplace).start();
                    break;
                }
                break;
            case R.id.reset_mccmnc /* 2131101292 */:
                new SetMccMncThread(1, "").start();
                break;
        }
    }

    @Override // android.support.v4.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        View viewInflate = layoutInflater.inflate(R.layout.iot_wfc_config, viewGroup, false);
        initView(viewInflate);
        return viewInflate;
    }

    @Override // android.support.v4.app.Fragment
    public void onResume() {
        super.onResume();
        updateUI(this.currentList);
    }

    public void setAddMccMncLayoutVisibility(boolean z) {
        if (z) {
            this.inputMccMnc.setText(getMccMncList(1) != null ? TextUtils.join(",", getMccMncList(1)) : "");
            this.addMccMncLayout.setVisibility(0);
            this.defaultAddMccMncLayout.setVisibility(8);
            limitEditText(this.inputMccMnc, 92);
            return;
        }
        this.inputMccMnc.setText("");
        this.addMccMncLayout.setVisibility(8);
        this.defaultAddMccMncLayout.setVisibility(0);
        hideInputMethod(this.inputMccMnc);
    }

    @Override // android.support.v4.app.Fragment
    public void setUserVisibleHint(boolean z) {
        super.setUserVisibleHint(z);
        if (z) {
            return;
        }
        hideInputMethod(null);
    }

    public void showToast(String str) {
        Toast.makeText(getActivity(), str, 0).show();
    }

    public void updateUI(int i) {
        this.currentList = i;
        MccMncAdapter mccMncAdapter = this.mAdapter;
        if (mccMncAdapter == null) {
            this.mAdapter = new MccMncAdapter(getActivity(), getMccMncList(i));
        } else {
            mccMncAdapter.clear();
            if (getMccMncList(i) != null) {
                Iterator<String> it = getMccMncList(i).iterator();
                while (it.hasNext()) {
                    this.mAdapter.add(it.next());
                }
            }
            this.mAdapter.refresh(getMccMncList(i));
        }
        this.mccMncListView.setAdapter((ListAdapter) this.mAdapter);
        this.mAdapter.notifyDataSetChanged();
    }
}
