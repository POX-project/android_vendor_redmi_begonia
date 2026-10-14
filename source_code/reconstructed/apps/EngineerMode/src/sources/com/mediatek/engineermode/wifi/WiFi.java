package com.mediatek.engineermode.wifi;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.net.wifi.WifiManager;
import android.os.AsyncTask;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes3.dex */
public class WiFi extends Activity implements AdapterView.OnItemClickListener {
    private static final int BIT_16 = 16;
    private static final int BIT_8 = 8;
    private static final String BRANCH_PATTERN = "t-neptune[\\w-]*SOC[a-zA-Z0-9]*_[a-zA-Z0-9]*_";
    private static final String CHIP_6632 = "6632";
    private static final String CHIP_ADV = "0";
    private static final String CHIP_FORMAT = "1";
    private static final int DIALOG_WIFI_ENABLE_FAIL = 2;
    private static final int DIALOG_WIFI_ENTER_TEST_MODE_FAILED = 3;
    private static final int DIALOG_WIFI_INIT = 0;
    private static final int DIALOG_WIFI_WARN = 1;
    private static final long FUNC_INDEX_VERSION = 47;
    static final String KEY_11AC_CAP = "key_11ac";
    static final String KEY_11AX_CAP = "key_11ax";
    static final String KEY_2BY2_CAP = "key_2by2";
    static final String KEY_ANT_SWAP = "key_ant_swap";
    static final String KEY_HW_TX_CAP = "key_hw_tx";
    static final String KEY_WIFI_TYPE = "key_wifi_type";
    private static final long MASK_32_BIT = -1;
    private static final long MASK_8_BIT = 255;
    private static final long MASK_HIGH_16_BIT = -65536;
    private static final long MASK_HIGH_8_BIT = 65280;
    private static final String TAG = "WifiMainpage";
    private static final String VER_SPLIT = "-";
    private WifiCapability mCapability;
    private ArrayList<String> mListData;
    private ListView mLvTestItem;
    private String mWifiChip;
    private WifiManager mWifiManager = null;
    private WifiType mWifiType = null;
    private AsyncTask<Void, Void, WifiEmState> mLoadTask = new AsyncTask<Void, Void, WifiEmState>() { // from class: com.mediatek.engineermode.wifi.WiFi.1
        private static final int RESULT_ENABLE_TM_FAILED = 2;
        private static final int RESULT_ENABLE_WIFI_FAILED = 1;
        private static final int RESULT_INIT_DONE = 0;
        private String mStrManifestInfo = null;
        private String mStrVersion = null;

        private String getBranch(String str) {
            Matcher matcher = Pattern.compile(WiFi.BRANCH_PATTERN).matcher(str);
            if (matcher.find()) {
                return matcher.group(0);
            }
            return null;
        }

        private String getVer(String str) {
            String strSubstring = str;
            int iLastIndexOf = str.lastIndexOf(WiFi.VER_SPLIT);
            if (iLastIndexOf > 0 && str.length() > iLastIndexOf + 1) {
                strSubstring = str.substring(iLastIndexOf + 1);
            }
            if (strSubstring.length() < 8) {
                return null;
            }
            String strSubstring2 = strSubstring.substring(0, 4);
            String strSubstring3 = strSubstring.substring(4, 6);
            String strSubstring4 = strSubstring.substring(6, 8);
            StringBuilder sb = new StringBuilder(strSubstring2);
            sb.append(WiFi.VER_SPLIT);
            sb.append(strSubstring3);
            sb.append(WiFi.VER_SPLIT);
            sb.append(strSubstring4);
            if (strSubstring.length() > 8) {
                sb.append(WiFi.VER_SPLIT);
                sb.append(strSubstring.substring(8));
            }
            return sb.toString();
        }

        private void getVersion() {
            String fwManifestVersion = EMWifi.getFwManifestVersion();
            this.mStrManifestInfo = fwManifestVersion;
            if (fwManifestVersion == null || fwManifestVersion.isEmpty()) {
                StringBuilder sb = new StringBuilder();
                sb.append("VERSION: CHIP = MT");
                long[] jArr = new long[2];
                if (EMWifi.getATParam(WiFi.FUNC_INDEX_VERSION, jArr) == 0) {
                    Elog.v(WiFi.TAG, "version number is: 0x" + Long.toHexString(jArr[0]));
                    sb.append(Long.toHexString((jArr[0] & WiFi.MASK_HIGH_16_BIT) >> 16));
                    sb.append("  FW VER = v");
                    sb.append(Long.toHexString((jArr[0] & WiFi.MASK_HIGH_8_BIT) >> 8));
                    sb.append(".");
                    sb.append(Long.toHexString(jArr[0] & 255));
                    sb.append(".");
                    sb.append(Long.toHexString(jArr[1] & (-1)));
                    this.mStrVersion = sb.toString();
                }
            }
        }

        private void showVersion() {
            TextView textView = (TextView) WiFi.this.findViewById(R.id.wifi_version);
            String str = this.mStrManifestInfo;
            if (str == null || str.isEmpty()) {
                if (this.mStrVersion != null) {
                    Elog.v(WiFi.TAG, "mStrVersion:" + this.mStrVersion);
                    textView.setText(this.mStrVersion);
                    return;
                }
                return;
            }
            Elog.v(WiFi.TAG, "strManifestInfo:" + this.mStrManifestInfo);
            WiFi.this.findViewById(R.id.wifi_branch_layout).setVisibility(0);
            WiFi.this.findViewById(R.id.wifi_ver_layout).setVisibility(0);
            textView.setVisibility(8);
            String branch = getBranch(this.mStrManifestInfo);
            if (branch != null) {
                TextView textView2 = (TextView) WiFi.this.findViewById(R.id.wifi_branch_tv);
                String strSubstring = branch.substring(0, branch.length() - 1);
                Elog.v(WiFi.TAG, "strBranch:" + strSubstring);
                textView2.setText(strSubstring);
            }
            String ver = getVer(this.mStrManifestInfo);
            Elog.v(WiFi.TAG, "strVer:" + ver);
            if (ver != null) {
                ((TextView) WiFi.this.findViewById(R.id.wifi_ver_tv)).setText(ver);
            }
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public WifiEmState doInBackground(Void... voidArr) {
            WifiEmState wifiEmStateStartTestMode = EMWifi.startTestMode(WiFi.this.mWifiManager);
            if (WifiEmState.WIFI_EM_STATE_READY.equals(wifiEmStateStartTestMode)) {
                WiFi.this.mWifiChip = WiFi.getWifiChip();
                WiFi wiFi = WiFi.this;
                wiFi.mWifiType = WiFi.getWifiType(wiFi.mWifiChip);
                Elog.i(WiFi.TAG, "wifi chip:" + WiFi.this.mWifiChip + " wifi type:" + WiFi.this.mWifiType);
                WiFi wiFi2 = WiFi.this;
                wiFi2.mCapability = WifiCapability.getWifiCapability(wiFi2.mWifiChip, WiFi.this.mWifiType);
                getVersion();
                EMWifi.stopTestMode();
            }
            return wifiEmStateStartTestMode;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(WifiEmState wifiEmState) {
            super.onPostExecute(wifiEmState);
            int i = AnonymousClass5.$SwitchMap$com$mediatek$engineermode$wifi$WifiEmState[wifiEmState.ordinal()];
            if (i == 1) {
                WiFi.this.removeDialog(0);
                WiFi.this.showDialog(2);
                return;
            }
            if (i == 2) {
                WiFi.this.removeDialog(0);
                WiFi.this.showDialog(3);
                return;
            }
            if (i != 3) {
                return;
            }
            WiFi.this.mListData = new ArrayList();
            WiFi.this.mListData.add(WiFi.this.getString(R.string.wifi_item_tx));
            WiFi.this.mListData.add(WiFi.this.getString(R.string.wifi_item_rx));
            if (!FeatureSupport.isUserLoad()) {
                WiFi.this.mListData.add(WiFi.this.getString(R.string.wifi_item_mcr));
                if (!WiFi.this.mWifiType.equals(WifiType.WIFI_6620)) {
                    WiFi.this.mListData.add(WiFi.this.getString(R.string.wifi_item_rfcr));
                }
                WiFi.this.mListData.add(WiFi.this.getString(R.string.wifi_item_nvram));
            }
            if (WiFi.this.mCapability.isDbdcSupport()) {
                WiFi.this.mListData.add(WiFi.this.getString(R.string.wifi_item_dbdc_mode));
            }
            WiFi wiFi = WiFi.this;
            WiFi.this.mLvTestItem.setAdapter((ListAdapter) new ArrayAdapter(wiFi, android.R.layout.simple_list_item_1, wiFi.mListData));
            showVersion();
            WiFi.this.removeDialog(0);
        }

        @Override // android.os.AsyncTask
        protected void onPreExecute() {
            super.onPreExecute();
            WiFi.this.showDialog(0);
        }
    };

    /* JADX INFO: renamed from: com.mediatek.engineermode.wifi.WiFi$5, reason: invalid class name */
    static /* synthetic */ class AnonymousClass5 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType;
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$engineermode$wifi$WifiEmState;

        static {
            int[] iArr = new int[WifiType.values().length];
            $SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType = iArr;
            try {
                iArr[WifiType.WIFI_6620.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType[WifiType.WIFI_6632.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType[WifiType.WIFI_FORMAT.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            int[] iArr2 = new int[WifiEmState.values().length];
            $SwitchMap$com$mediatek$engineermode$wifi$WifiEmState = iArr2;
            try {
                iArr2[WifiEmState.WIFI_EM_STATE_ENABLE_FAIL.ordinal()] = 1;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$wifi$WifiEmState[WifiEmState.WIFI_EM_STATE_SET_TM_FAIL.ordinal()] = 2;
            } catch (NoSuchFieldError e5) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$wifi$WifiEmState[WifiEmState.WIFI_EM_STATE_READY.ordinal()] = 3;
            } catch (NoSuchFieldError e6) {
            }
        }
    }

    public enum WifiType {
        WIFI_6620,
        WIFI_6632,
        WIFI_FORMAT
    }

    public static String getWifiChip() {
        long[] jArr = new long[2];
        if (EMWifi.getATParam(FUNC_INDEX_VERSION, jArr) != 0) {
            return null;
        }
        return Long.toHexString((jArr[0] & MASK_HIGH_16_BIT) >> 16);
    }

    public static WifiType getWifiType(String str) {
        if (CHIP_6632.equals(str) || "0".equals(str)) {
            return WifiType.WIFI_6632;
        }
        return "1".equals(str) ? WifiType.WIFI_FORMAT : WifiType.WIFI_6620;
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.wifi);
        WifiManager wifiManager = (WifiManager) getSystemService("wifi");
        this.mWifiManager = wifiManager;
        if (1 != wifiManager.getWifiState() || this.mWifiManager.isScanAlwaysAvailable() || EmUtils.ifAirplaneModeEnabled()) {
            showDialog(1);
            return;
        }
        ListView listView = (ListView) findViewById(R.id.wifi_item_lv);
        this.mLvTestItem = listView;
        listView.setOnItemClickListener(this);
        this.mLoadTask.execute(new Void[0]);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i == 0) {
            ProgressDialog progressDialog = new ProgressDialog(this);
            progressDialog.setTitle(R.string.wifi_dialog_init);
            progressDialog.setMessage(getString(R.string.wifi_dialog_init_message));
            progressDialog.setCancelable(false);
            progressDialog.setIndeterminate(true);
            return progressDialog;
        }
        if (i == 1) {
            AlertDialog.Builder builder = new AlertDialog.Builder(this);
            builder.setTitle(R.string.wifi_dialog_error);
            builder.setCancelable(false);
            builder.setMessage(getString(R.string.wifi_dialog_warn_message));
            builder.setPositiveButton(R.string.em_ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.wifi.WiFi.2
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    WiFi.this.finish();
                }
            });
            return builder.create();
        }
        if (i == 2) {
            AlertDialog.Builder builder2 = new AlertDialog.Builder(this);
            builder2.setTitle(R.string.wifi_dialog_error);
            builder2.setCancelable(false);
            builder2.setMessage(getString(R.string.wifi_dialog_fail_message));
            builder2.setPositiveButton(R.string.em_ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.wifi.WiFi.3
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    WiFi.this.finish();
                }
            });
            return builder2.create();
        }
        if (i != 3) {
            return null;
        }
        AlertDialog.Builder builder3 = new AlertDialog.Builder(this);
        builder3.setTitle(R.string.wifi_dialog_error);
        builder3.setCancelable(false);
        builder3.setMessage(getString(R.string.wifi_int_test_mode_failed));
        builder3.setPositiveButton(R.string.em_ok, new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.wifi.WiFi.4
            @Override // android.content.DialogInterface.OnClickListener
            public void onClick(DialogInterface dialogInterface, int i2) {
                WiFi.this.finish();
            }
        });
        return builder3.create();
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        String str = this.mListData.get(i);
        if (str == null) {
            return;
        }
        Intent intent = null;
        if (str.equals(getString(R.string.wifi_item_tx))) {
            int i2 = AnonymousClass5.$SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType[this.mWifiType.ordinal()];
            if (i2 == 1) {
                intent = new Intent(this, (Class<?>) WiFiTx6620.class);
                intent.putExtra(KEY_11AC_CAP, this.mCapability.is11AcSupport());
                intent.putExtra(KEY_ANT_SWAP, this.mCapability.isAntSwapSupport());
            } else if (i2 == 2) {
                intent = new Intent(this, (Class<?>) WiFiTx6632.class);
                intent.putExtra(KEY_ANT_SWAP, this.mCapability.isAntSwapSupport());
            } else {
                if (i2 != 3) {
                    return;
                }
                intent = new Intent(this, (Class<?>) WiFiTxFormat.class);
                intent.putExtra(KEY_2BY2_CAP, this.mCapability.is2by2Support());
                intent.putExtra(KEY_ANT_SWAP, this.mCapability.isAntSwapSupport());
                intent.putExtra(KEY_11AX_CAP, this.mCapability.is11AxSupport());
                intent.putExtra(KEY_HW_TX_CAP, this.mCapability.isHwTxSupport());
            }
        } else if (str.equals(getString(R.string.wifi_item_rx))) {
            int i3 = AnonymousClass5.$SwitchMap$com$mediatek$engineermode$wifi$WiFi$WifiType[this.mWifiType.ordinal()];
            if (i3 == 1) {
                intent = new Intent(this, (Class<?>) WiFiRx6620.class);
                intent.putExtra(KEY_11AC_CAP, this.mCapability.is11AcSupport());
                intent.putExtra(KEY_ANT_SWAP, this.mCapability.isAntSwapSupport());
            } else if (i3 == 2) {
                intent = new Intent(this, (Class<?>) WiFiRx6632.class);
                intent.putExtra(KEY_ANT_SWAP, this.mCapability.isAntSwapSupport());
            } else {
                if (i3 != 3) {
                    return;
                }
                intent = new Intent(this, (Class<?>) WiFiRxFormat.class);
                intent.putExtra(KEY_2BY2_CAP, this.mCapability.is2by2Support());
                intent.putExtra(KEY_ANT_SWAP, this.mCapability.isAntSwapSupport());
                intent.putExtra(KEY_11AX_CAP, this.mCapability.is11AxSupport());
            }
        } else if (str.equals(getString(R.string.wifi_item_mcr))) {
            try {
                intent = new Intent(this, Class.forName("com.mediatek.engineermode.wifi.WiFiMcr"));
            } catch (ClassNotFoundException e) {
                e.printStackTrace();
                return;
            }
        } else if (str.equals(getString(R.string.wifi_item_rfcr))) {
            try {
                intent = new Intent(this, Class.forName("com.mediatek.engineermode.wifi.WiFiRFCR"));
            } catch (ClassNotFoundException e2) {
                e2.printStackTrace();
                return;
            }
        } else if (str.equals(getString(R.string.wifi_item_nvram))) {
            try {
                intent = new Intent(this, Class.forName("com.mediatek.engineermode.wifi.WiFiEeprom"));
            } catch (ClassNotFoundException e3) {
                e3.printStackTrace();
                return;
            }
        } else if (str.equals(getString(R.string.wifi_item_dbdc_mode))) {
            intent = new Intent(this, (Class<?>) WiFiDBDC.class);
            intent.putExtra(KEY_WIFI_TYPE, this.mWifiType.ordinal());
        }
        startActivity(intent);
    }
}
