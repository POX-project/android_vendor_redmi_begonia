package com.mediatek.engineermode.iotconfig;

import android.app.AlertDialog;
import android.app.Dialog;
import android.content.DialogInterface;
import android.database.Cursor;
import android.os.Bundle;
import android.provider.Telephony;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentActivity;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.text.InputFilter;
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
import android.widget.FrameLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.Spinner;
import android.widget.SpinnerAdapter;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import com.mediatek.mdml.JsonCmd;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes.dex */
public class ApnConfigFragment extends Fragment implements AdapterView.OnItemClickListener {
    private static final int DIALOG_MCCMNC_INVALID = 1;
    private static final int DIALOG_MCCMNC_READFAIL = 0;
    private static final String[] IOT_APN_DEFAULT_LABLES = {"mcc", "mnc", "apn", JsonCmd.STR_TYPE_KEY, "protocol", "roaming_protocol"};
    private static final int MCC_LENGTH = 3;
    private static final int SIM_CARD_INVALID = -1;
    private static final String TAG = "Iot/ApnConfigFragment";
    private Button btnCancel;
    private Button btnConfirm;
    private ArrayList<String> items;
    private TableInfoAdapter mAdapter;
    private EditText mEtMccMnc;
    private FrameLayout mInfoFrameLayout;
    private ListView mListView;
    private boolean mMccMncReadSim = false;
    private String mMccMncText;
    private String mSimMccMnc;
    private int mSimType;
    private Spinner mSpinner;
    private int mSubId;

    private boolean checkValidMCCMNC(String str) {
        return 5 <= str.length() && 6 >= str.length();
    }

    public View getListView() {
        if (this.mAdapter == null) {
            this.mAdapter = new TableInfoAdapter(getActivity());
        }
        if (this.mListView == null) {
            this.mListView = new ListView(getActivity());
        }
        if (this.mAdapter.getCount() == 0) {
            int i = 0;
            while (true) {
                String[] strArr = IOT_APN_DEFAULT_LABLES;
                if (i >= strArr.length) {
                    break;
                }
                this.mAdapter.add(new String[]{strArr[i], ""});
                i++;
            }
        }
        this.mListView.setAdapter((ListAdapter) this.mAdapter);
        this.mAdapter.notifyDataSetChanged();
        return this.mListView;
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

    public void initMccMncValue() {
        if (TelephonyManager.getDefault().getPhoneCount() >= 1 && isSimReady(0)) {
            this.mSimType = 0;
        } else if (TelephonyManager.getDefault().getPhoneCount() <= 1 || !isSimReady(1)) {
            this.mSimType = -1;
        } else {
            this.mSimType = 1;
        }
        int i = this.mSimType;
        if (i != -1) {
            int[] subId = SubscriptionManager.getSubId(i);
            if (subId != null && subId.length > 0) {
                this.mSubId = subId[0];
            }
            FragmentActivity activity = getActivity();
            getActivity();
            this.mSimMccMnc = ((TelephonyManager) activity.getSystemService("phone")).getSimOperator(this.mSubId);
        }
        if (this.mSimMccMnc == null) {
            Elog.d(TAG, "Fail to read SIM MCC+MNC!");
            return;
        }
        Elog.d(TAG, "Read SIM MCC+MNC: " + this.mSimMccMnc);
    }

    public void initView(View view) {
        this.mSpinner = (Spinner) view.findViewById(R.id.spinnernp1);
        EditText editText = (EditText) view.findViewById(R.id.input_mccmnc);
        this.mEtMccMnc = editText;
        limitEditText(editText, 6);
        this.mInfoFrameLayout = (FrameLayout) view.findViewById(R.id.detail_frame_apn);
        this.btnConfirm = (Button) view.findViewById(R.id.btn_confirm);
        this.btnCancel = (Button) view.findViewById(R.id.btn_cancel);
        ArrayAdapter<CharSequence> arrayAdapterCreateFromResource = ArrayAdapter.createFromResource(getActivity(), R.array.input_mode, android.R.layout.simple_spinner_item);
        arrayAdapterCreateFromResource.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        this.mSpinner.setAdapter((SpinnerAdapter) arrayAdapterCreateFromResource);
        this.mMccMncReadSim = true;
        this.mSpinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() { // from class: com.mediatek.engineermode.iotconfig.ApnConfigFragment.1
            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onItemSelected(AdapterView<?> adapterView, View view2, int i, long j) {
                if (i == 1) {
                    ApnConfigFragment.this.mMccMncReadSim = false;
                    ApnConfigFragment.this.mEtMccMnc.setText("");
                } else {
                    ApnConfigFragment.this.mMccMncReadSim = true;
                    if (ApnConfigFragment.this.mSimType != -1) {
                        ApnConfigFragment.this.mEtMccMnc.setText(ApnConfigFragment.this.mSimMccMnc);
                    }
                }
            }

            @Override // android.widget.AdapterView.OnItemSelectedListener
            public void onNothingSelected(AdapterView<?> adapterView) {
            }
        });
        if (this.mAdapter == null) {
            this.mAdapter = new TableInfoAdapter(getActivity());
        }
        this.btnCancel.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.ApnConfigFragment.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view2) {
                ApnConfigFragment.this.mEtMccMnc.setText("");
            }
        });
        this.btnConfirm.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.ApnConfigFragment.3
            @Override // android.view.View.OnClickListener
            public void onClick(View view2) {
                ApnConfigFragment apnConfigFragment = ApnConfigFragment.this;
                apnConfigFragment.hideInputMethod(apnConfigFragment.mEtMccMnc);
                ApnConfigFragment.this.queryAndShowApn();
            }
        });
        this.mEtMccMnc.setOnEditorActionListener(new TextView.OnEditorActionListener() { // from class: com.mediatek.engineermode.iotconfig.ApnConfigFragment.4
            @Override // android.widget.TextView.OnEditorActionListener
            public boolean onEditorAction(TextView textView, int i, KeyEvent keyEvent) {
                if ((keyEvent == null || keyEvent.getKeyCode() != 66) && i != 6) {
                    return false;
                }
                ApnConfigFragment apnConfigFragment = ApnConfigFragment.this;
                apnConfigFragment.hideInputMethod(apnConfigFragment.mEtMccMnc);
                return false;
            }
        });
    }

    protected boolean isSimReady(int i) {
        FragmentActivity activity = getActivity();
        getActivity();
        return 1 != ((TelephonyManager) activity.getSystemService("phone")).getSimState(i);
    }

    public void limitEditText(EditText editText, int i) {
        editText.setFilters(new InputFilter[]{new InputFilter.LengthFilter(i)});
        editText.setKeyListener(new NumberKeyListener() { // from class: com.mediatek.engineermode.iotconfig.ApnConfigFragment.5
            @Override // android.text.method.NumberKeyListener
            protected char[] getAcceptedChars() {
                return new char[]{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
            }

            @Override // android.text.method.KeyListener
            public int getInputType() {
                return 2;
            }
        });
    }

    @Override // android.support.v4.app.Fragment
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
    }

    @Override // android.support.v4.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        View viewInflate = layoutInflater.inflate(R.layout.iot_apn_config, viewGroup, false);
        initView(viewInflate);
        return viewInflate;
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
    }

    @Override // android.support.v4.app.Fragment
    public void onResume() {
        String str;
        super.onResume();
        initMccMncValue();
        if (!this.mMccMncReadSim || this.mSimType == -1 || (str = this.mSimMccMnc) == null || str.replace(" ", "").equals("")) {
            return;
        }
        this.mEtMccMnc.setText(this.mSimMccMnc);
        queryAndShowApn();
    }

    public void queryAndShowApn() {
        String strReplace = this.mEtMccMnc.getText().toString().replace(" ", "");
        this.mMccMncText = strReplace;
        if (!checkValidMCCMNC(strReplace)) {
            showDialog(1, getString(R.string.invalidfail) + this.mMccMncText);
            return;
        }
        this.mAdapter.clear();
        String strSubstring = this.mMccMncText.substring(0, 3);
        String str = this.mMccMncText;
        Elog.d(TAG, "mcc: " + strSubstring + "mnc: " + str.substring(3, str.length()));
        StringBuilder sb = new StringBuilder();
        sb.append("numeric=\"");
        sb.append(this.mMccMncText);
        sb.append("\"");
        String string = sb.toString();
        Elog.d(TAG, "queryAPn: " + string);
        Cursor cursorQuery = getActivity().getContentResolver().query(Telephony.Carriers.CONTENT_URI, null, string, null, "name ASC");
        if (cursorQuery != null) {
            try {
                if (cursorQuery.moveToFirst() && cursorQuery.getCount() > 0) {
                    Elog.d(TAG, "[queryAndShowApn]apns count is: " + cursorQuery.getCount());
                    int i = 0;
                    if (this.mSpinner.getSelectedItemPosition() == 0 && this.mMccMncText.equals(this.mSimMccMnc)) {
                        this.mAdapter.add(new String[]{"Read from  Sim" + (this.mSimType + 1)});
                    }
                    do {
                        i++;
                        this.mAdapter.add(new String[]{"APN " + i});
                        for (int i2 = 0; i2 < IOT_APN_DEFAULT_LABLES.length; i2++) {
                            int columnIndex = cursorQuery.getColumnIndex(IOT_APN_DEFAULT_LABLES[i2]);
                            if (columnIndex != -1) {
                                this.mAdapter.add(new String[]{cursorQuery.getColumnNames()[columnIndex], cursorQuery.getString(columnIndex)});
                            }
                        }
                    } while (cursorQuery.moveToNext());
                }
            } finally {
                cursorQuery.close();
                updateUI();
            }
        }
    }

    @Override // android.support.v4.app.Fragment
    public void setUserVisibleHint(boolean z) {
        super.setUserVisibleHint(z);
        if (z) {
            return;
        }
        hideInputMethod(null);
    }

    protected Dialog showDialog(int i, String str) {
        if (i == 0) {
            return new AlertDialog.Builder(getActivity()).setMessage(str).setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.ApnConfigFragment.6
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    ApnConfigFragment.this.mEtMccMnc.setText("");
                    dialogInterface.cancel();
                }
            }).show();
        }
        if (i != 1) {
            return null;
        }
        return new AlertDialog.Builder(getActivity()).setMessage(str).setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.iotconfig.ApnConfigFragment.7
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                dialogInterface.cancel();
            }
        }).show();
    }

    public void updateUI() {
        this.mInfoFrameLayout.removeAllViews();
        View listView = getListView();
        if (this.mInfoFrameLayout.getChildCount() <= 0) {
            if (listView.getParent() != null) {
                ((ViewGroup) listView.getParent()).removeView(listView);
            }
            this.mInfoFrameLayout.addView(listView);
        }
    }
}
