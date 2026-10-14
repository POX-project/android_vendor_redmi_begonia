package com.mediatek.engineermode.mdlogfilters;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.Uri;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.Environment;
import android.os.Handler;
import android.os.Message;
import android.os.storage.StorageManager;
import android.os.storage.StorageVolume;
import android.view.View;
import android.widget.Button;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.FeatureSupport;
import com.mediatek.engineermode.R;
import com.mediatek.engineermode.emsvr.AFMFunctionCallEx;
import com.mediatek.engineermode.mcfconfig.FileUtils;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;

/* JADX INFO: loaded from: classes.dex */
public class MDLogFiltersActivity extends Activity {
    private static final String ACTION_ASK_LOG_PATH = "com.debug.loggerui.ADB_CMD";
    private static final String ACTION_GET_LOG_PATH = "com.debug.loggerui.result";
    private static final String BIN_RECORD_PATH = "filter_config";
    private static final String DEFAULT_FILTER = "_Default";
    private static final int DIALOG_NO_FILTER_RECORD_FOLDER = 4;
    private static final int DIALOG_QUERY_FILTERS = 2;
    private static final int DIALOG_UPDATE_DONE = 3;
    private static final int DIALOG_UPDATE_PATH = 1;
    private static final String FILTER_TAR_PATH = "mdlog1_config/";
    private static final String KEY_ASK_LOG_PATH = "cmd_name";
    private static final String KEY_GET_LOG_PATH = "result_value";
    private static final String LOG_CMD_CLASS = "com.debug.loggerui.framework.LogReceiver";
    private static final String LOG_CMD_PKG = "com.debug.loggerui";
    private static final String LOG_PATH_PERMISSION = "android.permission.DUMP";
    private static final int MSG_FILE_FORMAT_WRONG = 2;
    private static final int MSG_FILE_UPDATE_RESULT = 1;
    private static final String PLS_PS_ONLY_FILTER = "PLS_PS_ONLY";
    private static final String POST_FIX = ".bin";
    private static final String PRIMARY_STORAGE = "primary";
    private static final int REQUEST_SELECT_BIN = 1;
    private static final String STORAGE_AUTHORITY = "com.android.externalstorage.documents";
    private static final String TAG = "MDLogFilters";
    private static final String VALUE_ASK_LOG_PATH = "get_mtklog_path";
    private static final String mDefaultFilterPath = "/vendor/etc/firmware/customfilter/";
    private Button mBtnMore;
    private Button mBtnRestore;
    private Button mBtnUpdate;
    private View mMoreFilterView;
    private RadioGroup mRgFilterList;
    private String mSrcBinName;
    private static final byte[] VALID_BIN_BYTES = {-51, -85, 84, 36};
    private static final String[] KEY_WORD_LIST = {"md1_filter__Default", "md1_filter_FullLog", "md1_filter_meta", "md1_filter_SlimLog_DspAllOff", "md1_filter_LowPowerMonitor", "md1_filter_1_Moderate", "md1_filter_2_Standard", "md1_filter_3_Slim", "md1_filter_4_UltraSlim"};
    private static final String[] GEN_FILTER_FILE_LIST = {"catcher_filter_1_ulwctg_n__Default.bin", "catcher_filter_1_ulwctg_n_FullLog.bin", "catcher_filter_1_ulwctg_n_meta.bin", "catcher_filter_1_ulwctg_n_SlimLog_DspAllOff.bin", "catcher_filter_1_ulwctg_n_LowPowerMonitor.bin", "catcher_filter_1_ulwctg_n_1_Moderate.bin", "catcher_filter_1_ulwctg_n_2_Standard.bin", "catcher_filter_1_ulwctg_n_3_Slim.bin", "catcher_filter_1_ulwctg_n_4_UltraSlim.bin"};
    private static final String mGenFilterPath = Environment.getExternalStorageDirectory().getAbsolutePath() + "/mdlogfilters/";
    private ArrayList<FilterInfo> mFilterList = new ArrayList<>();
    private int mPreFixIndex = -1;
    private Handler mHandler = new MyHandler();
    private String mSrcPath = null;
    private String mTarPath = null;
    private BroadcastReceiver mReceiver = new BroadcastReceiver() { // from class: com.mediatek.engineermode.mdlogfilters.MDLogFiltersActivity.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Elog.d(MDLogFiltersActivity.TAG, "onReceive: " + intent.getAction());
            if (intent.getAction().equals(MDLogFiltersActivity.ACTION_GET_LOG_PATH)) {
                String stringExtra = intent.getStringExtra(MDLogFiltersActivity.KEY_GET_LOG_PATH);
                Elog.i(MDLogFiltersActivity.TAG, "path: " + stringExtra);
                if (stringExtra != null) {
                    MDLogFiltersActivity.this.mTarPath = stringExtra + MDLogFiltersActivity.FILTER_TAR_PATH;
                }
                MDLogFiltersActivity.this.removeDialog(1);
            }
        }
    };
    private View.OnClickListener mOnClickListener = new View.OnClickListener() { // from class: com.mediatek.engineermode.mdlogfilters.MDLogFiltersActivity.2
        /* JADX WARN: Type inference failed for: r0v10, types: [com.mediatek.engineermode.mdlogfilters.MDLogFiltersActivity$2$2] */
        /* JADX WARN: Type inference failed for: r1v2, types: [com.mediatek.engineermode.mdlogfilters.MDLogFiltersActivity$2$1] */
        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            if (view.equals(MDLogFiltersActivity.this.mBtnMore)) {
                Intent intent = new Intent("android.intent.action.GET_CONTENT");
                intent.setType("*/*");
                MDLogFiltersActivity.this.startActivityForResult(intent, 1);
                return;
            }
            if (!view.equals(MDLogFiltersActivity.this.mBtnUpdate)) {
                if (view.equals(MDLogFiltersActivity.this.mBtnRestore)) {
                    MDLogFiltersActivity.this.enableUI(false);
                    new Thread() { // from class: com.mediatek.engineermode.mdlogfilters.MDLogFiltersActivity.2.2
                        @Override // java.lang.Thread, java.lang.Runnable
                        public void run() {
                            Message messageObtainMessage = MDLogFiltersActivity.this.mHandler.obtainMessage(1);
                            messageObtainMessage.arg1 = MDLogFiltersActivity.this.recordFilterPath("").ordinal();
                            MDLogFiltersActivity.this.mHandler.sendMessage(messageObtainMessage);
                        }
                    }.start();
                    return;
                }
                return;
            }
            RadioButton radioButton = (RadioButton) MDLogFiltersActivity.this.findViewById(MDLogFiltersActivity.this.mRgFilterList.getCheckedRadioButtonId());
            if (radioButton == null) {
                Toast.makeText(MDLogFiltersActivity.this, R.string.md_log_filter_no_filter_selected, 0).show();
                return;
            }
            FilterInfo filterInfo = (FilterInfo) radioButton.getTag();
            MDLogFiltersActivity.this.mSrcBinName = filterInfo.getBinName();
            MDLogFiltersActivity.this.enableUI(false);
            new Thread() { // from class: com.mediatek.engineermode.mdlogfilters.MDLogFiltersActivity.2.1
                @Override // java.lang.Thread, java.lang.Runnable
                public void run() {
                    if (!MDLogFiltersActivity.this.checkBinValid(MDLogFiltersActivity.this.mSrcBinName)) {
                        MDLogFiltersActivity.this.mHandler.sendEmptyMessage(2);
                        return;
                    }
                    Message messageObtainMessage = MDLogFiltersActivity.this.mHandler.obtainMessage(1);
                    messageObtainMessage.arg1 = MDLogFiltersActivity.this.recordFilterPath(MDLogFiltersActivity.this.mSrcBinName).ordinal();
                    MDLogFiltersActivity.this.mHandler.sendMessage(messageObtainMessage);
                }
            }.start();
        }
    };

    /* JADX INFO: renamed from: com.mediatek.engineermode.mdlogfilters.MDLogFiltersActivity$3, reason: invalid class name */
    static /* synthetic */ class AnonymousClass3 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$engineermode$mdlogfilters$MDLogFiltersActivity$UpdateFilterResult;

        static {
            int[] iArr = new int[UpdateFilterResult.values().length];
            $SwitchMap$com$mediatek$engineermode$mdlogfilters$MDLogFiltersActivity$UpdateFilterResult = iArr;
            try {
                iArr[UpdateFilterResult.UPDATE_FILTER_RESULT_DONE.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$mdlogfilters$MDLogFiltersActivity$UpdateFilterResult[UpdateFilterResult.UPDATE_FILTER_RESULT_IO_ERROR.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$mediatek$engineermode$mdlogfilters$MDLogFiltersActivity$UpdateFilterResult[UpdateFilterResult.UPDATE_FILTER_RESULT_NO_RECORD_FILE.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
        }
    }

    private class FileLoadTask extends AsyncTask<Void, Void, Void> {
        private FileLoadTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Void doInBackground(Void... voidArr) {
            MDLogFiltersActivity.this.extractFilterFiles();
            Elog.i(MDLogFiltersActivity.TAG, "default filter path:" + MDLogFiltersActivity.this.mSrcPath);
            File file = new File(MDLogFiltersActivity.this.mSrcPath);
            if (!file.exists() || !file.isDirectory()) {
                return null;
            }
            File[] fileArrListFiles = file.listFiles();
            ArrayList<String> arrayList = new ArrayList();
            if (fileArrListFiles == null) {
                return null;
            }
            for (File file2 : fileArrListFiles) {
                String absolutePath = file2.getAbsolutePath();
                Elog.i(MDLogFiltersActivity.TAG, "filePath:" + absolutePath);
                String strExtractFilterName = MDLogFiltersActivity.this.extractFilterName(absolutePath, true);
                Elog.i(MDLogFiltersActivity.TAG, "filterName:" + strExtractFilterName);
                if (strExtractFilterName != null && !MDLogFiltersActivity.PLS_PS_ONLY_FILTER.equalsIgnoreCase(strExtractFilterName)) {
                    if (MDLogFiltersActivity.DEFAULT_FILTER.equals(strExtractFilterName)) {
                        MDLogFiltersActivity.this.mFilterList.add(MDLogFiltersActivity.this.new FilterInfo(strExtractFilterName, absolutePath));
                        Elog.i(MDLogFiltersActivity.TAG, "add fileInfo:" + strExtractFilterName + " " + absolutePath);
                    } else {
                        arrayList.add(absolutePath);
                    }
                }
            }
            Collections.sort(arrayList);
            for (String str : arrayList) {
                String strExtractFilterName2 = MDLogFiltersActivity.this.extractFilterName(str, true);
                if (strExtractFilterName2 != null) {
                    String strReplaceAll = strExtractFilterName2.replaceAll("_", " ");
                    MDLogFiltersActivity.this.mFilterList.add(MDLogFiltersActivity.this.new FilterInfo(strReplaceAll, str));
                    Elog.i(MDLogFiltersActivity.TAG, "add fileInfo:" + strReplaceAll + " " + str);
                }
            }
            return null;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Void r3) {
            MDLogFiltersActivity.this.removeDialog(2);
            MDLogFiltersActivity.this.showFilterList();
        }

        @Override // android.os.AsyncTask
        protected void onPreExecute() {
            super.onPreExecute();
            MDLogFiltersActivity.this.showDialog(2);
        }
    }

    private class FilterInfo {
        private String mBinName;
        private String mFilterName;

        FilterInfo(String str, String str2) {
            this.mFilterName = str;
            this.mBinName = str2;
        }

        public String getBinName() {
            return this.mBinName;
        }

        public String getFilterName() {
            return this.mFilterName;
        }
    }

    private class MyHandler extends Handler {
        private MyHandler() {
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            super.handleMessage(message);
            if (message.what != 1) {
                if (message.what == 2) {
                    MDLogFiltersActivity.this.enableUI(true);
                    Toast.makeText(MDLogFiltersActivity.this, R.string.md_log_filter_wrong_filter_format, 0).show();
                    Elog.i(MDLogFiltersActivity.TAG, "Update filter fail for wrong filter format");
                    return;
                }
                return;
            }
            MDLogFiltersActivity.this.enableUI(true);
            int i = AnonymousClass3.$SwitchMap$com$mediatek$engineermode$mdlogfilters$MDLogFiltersActivity$UpdateFilterResult[UpdateFilterResult.values()[message.arg1].ordinal()];
            if (i == 1) {
                MDLogFiltersActivity.this.showDialog(3);
                Elog.i(MDLogFiltersActivity.TAG, "Update filter success");
            } else if (i == 2) {
                Toast.makeText(MDLogFiltersActivity.this, R.string.md_log_filter_update_fail, 0).show();
                Elog.i(MDLogFiltersActivity.TAG, "Update filter fail for IO error");
            } else {
                if (i != 3) {
                    return;
                }
                MDLogFiltersActivity.this.showDialog(4);
            }
        }
    }

    enum UpdateFilterResult {
        UPDATE_FILTER_RESULT_DONE,
        UPDATE_FILTER_RESULT_NO_RECORD_FILE,
        UPDATE_FILTER_RESULT_IO_ERROR
    }

    private void askLogPath() {
        Intent intent = new Intent(ACTION_ASK_LOG_PATH);
        intent.setClassName(LOG_CMD_PKG, LOG_CMD_CLASS);
        intent.putExtra(KEY_ASK_LOG_PATH, VALUE_ASK_LOG_PATH);
        sendBroadcast(intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code duplicated, block: B:65:0x008a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    public boolean checkBinValid(String str) {
        Elog.i(TAG, "checkBinValid:" + str);
        FileInputStream fileInputStream = null;
        try {
            try {
                File file = new File(str);
                if (!file.exists()) {
                    if (0 != 0) {
                        try {
                            fileInputStream.close();
                        } catch (IOException e) {
                            e.printStackTrace();
                        }
                    }
                    return false;
                }
                fileInputStream = new FileInputStream(file);
                byte[] bArr = new byte[VALID_BIN_BYTES.length];
                if (fileInputStream.read(bArr) < VALID_BIN_BYTES.length) {
                    try {
                        fileInputStream.close();
                    } catch (IOException e2) {
                        e2.printStackTrace();
                    }
                    return false;
                }
                for (int i = 0; i < VALID_BIN_BYTES.length; i++) {
                    if (VALID_BIN_BYTES[i] != bArr[i]) {
                        try {
                            fileInputStream.close();
                        } catch (IOException e3) {
                            e3.printStackTrace();
                        }
                        return false;
                    }
                }
                try {
                    fileInputStream.close();
                    return true;
                } catch (IOException e4) {
                    e4.printStackTrace();
                    return true;
                }
            } catch (IOException e5) {
                e5.printStackTrace();
                if (fileInputStream != null) {
                    try {
                        fileInputStream.close();
                    } catch (IOException e6) {
                        e6.printStackTrace();
                    }
                }
                return false;
            }
        } catch (Throwable th) {
            if (fileInputStream != null) {
                try {
                    fileInputStream.close();
                } catch (IOException e7) {
                    e7.printStackTrace();
                }
            }
            throw th;
        }
        if (fileInputStream != null) {
            fileInputStream.close();
        }
        throw th;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void enableUI(boolean z) {
        this.mBtnRestore.setEnabled(z);
        this.mBtnUpdate.setEnabled(z);
        this.mBtnMore.setEnabled(z);
        int childCount = this.mRgFilterList.getChildCount();
        for (int i = 0; i < childCount; i++) {
            this.mRgFilterList.getChildAt(i).setEnabled(z);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void extractFilterFiles() {
        if (!FeatureSupport.isSupported(FeatureSupport.FK_SINGLE_BIN_MODEM_SUPPORT)) {
            this.mSrcPath = mDefaultFilterPath;
            return;
        }
        File file = new File(mGenFilterPath);
        if (!file.isDirectory()) {
            file.mkdirs();
        }
        Elog.i(TAG, "extractFilterFiles with new version");
        for (int i = 0; i < KEY_WORD_LIST.length; i++) {
            AFMFunctionCallEx aFMFunctionCallEx = new AFMFunctionCallEx();
            if (aFMFunctionCallEx.startCallFunctionStringReturn(AFMFunctionCallEx.FUNCTION_EM_MD_LOG_FILTER_GEN)) {
                aFMFunctionCallEx.writeParamNo(2);
                aFMFunctionCallEx.writeParamString(KEY_WORD_LIST[i]);
                aFMFunctionCallEx.writeParamString(mGenFilterPath + GEN_FILTER_FILE_LIST[i]);
                while (aFMFunctionCallEx.getNextResult().mReturnCode == 1) {
                }
            }
        }
        this.mSrcPath = mGenFilterPath;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String extractFilterName(String str, boolean z) {
        if (str == null) {
            return null;
        }
        Elog.i(TAG, "extractFilterName:" + str);
        int iLastIndexOf = str.lastIndexOf(FileUtils.SEPARATOR);
        if (iLastIndexOf == -1) {
            return null;
        }
        String strSubstring = str.substring(iLastIndexOf + 1);
        if (!z) {
            return strSubstring.trim();
        }
        if (this.mPreFixIndex == -1) {
            for (int i = 0; i < 5; i++) {
                int iIndexOf = strSubstring.indexOf("_", this.mPreFixIndex + 1);
                this.mPreFixIndex = iIndexOf;
                if (iIndexOf == -1) {
                    return null;
                }
            }
        }
        int iIndexOf2 = strSubstring.indexOf(POST_FIX);
        int i2 = this.mPreFixIndex;
        if (i2 == -1 || iIndexOf2 == -1 || i2 >= iIndexOf2) {
            return null;
        }
        return strSubstring.substring(i2 + 1, iIndexOf2).trim();
    }

    private String getExternalSDPath(String str) {
        if (str == null || str.length() == 0) {
            return null;
        }
        for (StorageVolume storageVolume : ((StorageManager) getSystemService("storage")).getVolumeList()) {
            String path = storageVolume.getPath();
            if (path.contains(str) && "mounted".equalsIgnoreCase(storageVolume.getState())) {
                Elog.i(TAG, "volumePathStr:" + path);
                return path;
            }
        }
        return null;
    }

    private String getPathFromUri(Uri uri) {
        String[] strArrSplit;
        if (uri == null) {
            return null;
        }
        if (!STORAGE_AUTHORITY.equals(uri.getAuthority())) {
            Elog.e(TAG, "not support:" + uri.getAuthority());
            Toast.makeText(this, R.string.md_log_filter_wrong_filter_path, 0).show();
            return null;
        }
        String lastPathSegment = uri.getLastPathSegment();
        Elog.i(TAG, "strLastPathSegment:" + lastPathSegment);
        if (lastPathSegment != null && (strArrSplit = lastPathSegment.split(":")) != null && strArrSplit.length >= 2) {
            if (PRIMARY_STORAGE.equalsIgnoreCase(strArrSplit[0])) {
                return Environment.getExternalStorageDirectory().getAbsolutePath() + FileUtils.SEPARATOR + strArrSplit[1];
            }
            String externalSDPath = getExternalSDPath(strArrSplit[0]);
            if (externalSDPath != null) {
                return externalSDPath + FileUtils.SEPARATOR + strArrSplit[1];
            }
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public UpdateFilterResult recordFilterPath(String str) {
        Elog.i(TAG, "recordFilterPath " + str + " " + this.mTarPath);
        FileOutputStream fileOutputStream = null;
        StringBuilder sb = new StringBuilder();
        sb.append(this.mTarPath);
        sb.append(BIN_RECORD_PATH);
        File file = new File(sb.toString());
        if (!file.exists()) {
            return UpdateFilterResult.UPDATE_FILTER_RESULT_NO_RECORD_FILE;
        }
        try {
            try {
                Elog.i(TAG, "recordFile is:" + file.getAbsolutePath());
                fileOutputStream = new FileOutputStream(file);
                if (new File(str).exists()) {
                    fileOutputStream.write(str.getBytes());
                }
                try {
                    fileOutputStream.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
                return UpdateFilterResult.UPDATE_FILTER_RESULT_DONE;
            } catch (IOException e2) {
                e2.printStackTrace();
                UpdateFilterResult updateFilterResult = UpdateFilterResult.UPDATE_FILTER_RESULT_IO_ERROR;
                if (fileOutputStream != null) {
                    try {
                        fileOutputStream.close();
                    } catch (IOException e3) {
                        e3.printStackTrace();
                    }
                }
                return updateFilterResult;
            }
        } catch (Throwable th) {
            if (fileOutputStream != null) {
                try {
                    fileOutputStream.close();
                } catch (IOException e4) {
                    e4.printStackTrace();
                }
            }
            throw th;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showFilterList() {
        for (FilterInfo filterInfo : this.mFilterList) {
            RadioButton radioButton = new RadioButton(this);
            radioButton.setText(filterInfo.getFilterName());
            radioButton.setTag(filterInfo);
            this.mRgFilterList.addView(radioButton);
            Elog.i(TAG, "mRgFilterList addView:" + filterInfo.getFilterName());
        }
        this.mRgFilterList.clearCheck();
    }

    @Override // android.app.Activity
    protected void onActivityResult(int i, int i2, Intent intent) {
        if (i == 1 && i2 == -1) {
            View view = this.mMoreFilterView;
            if (view != null) {
                this.mRgFilterList.removeView(view);
            }
            Uri data = intent.getData();
            Elog.i(TAG, "uri:" + data);
            String pathFromUri = getPathFromUri(data);
            if (pathFromUri == null) {
                return;
            }
            String strExtractFilterName = extractFilterName(pathFromUri, false);
            if (strExtractFilterName == null) {
                Toast.makeText(this, R.string.md_log_filter_wrong_filter_name, 0).show();
                return;
            }
            FilterInfo filterInfo = new FilterInfo(strExtractFilterName, pathFromUri);
            RadioButton radioButton = new RadioButton(this);
            radioButton.setText(filterInfo.getFilterName());
            radioButton.setTag(filterInfo);
            this.mRgFilterList.addView(radioButton);
            Elog.i(TAG, "mRgFilterList addView:" + filterInfo.getFilterName());
            this.mRgFilterList.check(radioButton.getId());
            this.mMoreFilterView = radioButton;
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.md_log_filter);
        this.mRgFilterList = (RadioGroup) findViewById(R.id.md_log_filter_rg);
        Button button = (Button) findViewById(R.id.md_log_filter_more_btn);
        this.mBtnMore = button;
        button.setOnClickListener(this.mOnClickListener);
        Button button2 = (Button) findViewById(R.id.md_log_filter_update_btn);
        this.mBtnUpdate = button2;
        button2.setOnClickListener(this.mOnClickListener);
        Button button3 = (Button) findViewById(R.id.md_log_filter_restore_btn);
        this.mBtnRestore = button3;
        button3.setOnClickListener(this.mOnClickListener);
        this.mTarPath = Environment.getExternalStorageDirectory().getAbsolutePath() + File.separator + "debuglogger" + FILTER_TAR_PATH;
        StringBuilder sb = new StringBuilder();
        sb.append("mTarPath is ");
        sb.append(this.mTarPath);
        Elog.i(TAG, sb.toString());
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ACTION_GET_LOG_PATH);
        registerReceiver(this.mReceiver, intentFilter, LOG_PATH_PERMISSION, null);
        new FileLoadTask().execute(new Void[0]);
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i, Bundle bundle) {
        if (i == 1) {
            ProgressDialog progressDialog = new ProgressDialog(this);
            progressDialog.setMessage(getString(R.string.md_log_filter_update_log_path));
            progressDialog.setCancelable(false);
            progressDialog.setIndeterminate(true);
            return progressDialog;
        }
        if (i != 2) {
            if (i == 3) {
                return new AlertDialog.Builder(this).setTitle(R.string.md_log_filter).setMessage(R.string.md_log_filter_update_success).setCancelable(false).setPositiveButton(R.string.em_ok, (DialogInterface.OnClickListener) null).create();
            }
            if (i != 4) {
                return null;
            }
            return new AlertDialog.Builder(this).setTitle(R.string.md_log_filter).setMessage(R.string.md_log_filter_no_record_path).setCancelable(false).setPositiveButton(R.string.em_ok, (DialogInterface.OnClickListener) null).create();
        }
        ProgressDialog progressDialog2 = new ProgressDialog(this);
        progressDialog2.setMessage(getString(R.string.md_log_filter_query_filters));
        progressDialog2.setCancelable(false);
        progressDialog2.setIndeterminate(true);
        return progressDialog2;
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        unregisterReceiver(this.mReceiver);
        super.onDestroy();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        askLogPath();
        showDialog(1);
    }
}
