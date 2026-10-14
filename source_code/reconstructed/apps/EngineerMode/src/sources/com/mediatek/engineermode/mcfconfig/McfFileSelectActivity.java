package com.mediatek.engineermode.mcfconfig;

import android.app.Activity;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.Intent;
import android.net.Uri;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.RemoteException;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.R;
import java.io.File;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import vendor.mediatek.hardware.engineermode.V1_0.IEmCallback;

/* JADX INFO: loaded from: classes.dex */
public class McfFileSelectActivity extends Activity implements AdapterView.OnItemClickListener {
    public static final int DIALOG_LOAD_FILES = 0;
    public static final int GEN_OPOTA_FILE_CODE = 2;
    public static final int OPOTA_FILE_CODE = 1;
    public static final int OTA_FILE_CODE = 0;
    public static final String SAVED_PATH_KEY = "saved_path";
    protected static final String TAG = "McfConfig/McfFileSelectActivity";
    private FileInfoAdapter adapter;
    private Button btnCancel;
    private String currentPath;
    private ListView lvContent;
    private int mcfFileType;
    private String root;
    public static final String[] OP_OTA_SUFFIX = {"mcfopota", "bin"};
    public static final String[] OTA_SUFFIX = {"mcfota", "bin"};
    private McfFileSelectActivity instance = this;
    private ArrayList<FileInfo> mFileList = new ArrayList<>();
    protected Bundle mSavedInstanceState = null;
    private IEmCallback mEmCallback = new IEmCallback.Stub() { // from class: com.mediatek.engineermode.mcfconfig.McfFileSelectActivity.2
        @Override // vendor.mediatek.hardware.engineermode.V1_0.IEmCallback
        public boolean callbackToClient(String str) throws RemoteException {
            Elog.d(McfFileSelectActivity.TAG, "callbackToClient data = " + str);
            McfFileSelectActivity.this.setFilePathListFromServer(str);
            return true;
        }
    };

    class FileLoadTask extends AsyncTask<String, Void, Void> {
        FileLoadTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Void doInBackground(String... strArr) {
            try {
                EmUtils.getEmHidlService().getFilePathListWithCallBack(strArr[0], McfFileSelectActivity.this.mEmCallback);
                Collections.sort(McfFileSelectActivity.this.mFileList, new Comparator<FileInfo>() { // from class: com.mediatek.engineermode.mcfconfig.McfFileSelectActivity.FileLoadTask.1
                    @Override // java.util.Comparator
                    public int compare(FileInfo fileInfo, FileInfo fileInfo2) {
                        return fileInfo.getFileName().compareTo(fileInfo2.getFileName());
                    }
                });
                return null;
            } catch (RemoteException e) {
                e.printStackTrace();
                return null;
            }
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Void r3) {
            McfFileSelectActivity.this.removeDialog(0);
            McfFileSelectActivity.this.refreshView();
        }

        @Override // android.os.AsyncTask
        protected void onPreExecute() {
            super.onPreExecute();
            McfFileSelectActivity.this.showDialog(0);
        }
    }

    public static void actionStart(Activity activity, String str, int i) {
        Intent intent = new Intent(activity, (Class<?>) McfFileSelectActivity.class);
        intent.putExtra("root", str);
        intent.putExtra("file_type", i);
        activity.startActivityForResult(intent, i);
    }

    private void initEvent() {
        this.btnCancel.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.mcfconfig.McfFileSelectActivity.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                Elog.d(McfFileSelectActivity.TAG, "click 'Cancel' to quit directly ");
                McfFileSelectActivity.this.finish();
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void refreshView() {
        FileInfoAdapter fileInfoAdapter = this.adapter;
        if (fileInfoAdapter != null) {
            fileInfoAdapter.notifyDataSetChanged();
            return;
        }
        FileInfoAdapter fileInfoAdapter2 = new FileInfoAdapter(this.instance, this.mFileList);
        this.adapter = fileInfoAdapter2;
        this.lvContent.setAdapter((ListAdapter) fileInfoAdapter2);
        this.lvContent.setOnItemClickListener(this);
    }

    public boolean checkFileValid(FileInfo fileInfo) {
        String fileExtension = FileUtils.getFileExtension(fileInfo.getFileName());
        int i = this.mcfFileType;
        if (i != 0) {
            return !(i == 1 || i == 2) || Arrays.asList(OP_OTA_SUFFIX).contains(fileExtension);
        }
        return Arrays.asList(OTA_SUFFIX).contains(fileExtension);
    }

    public void initLayout() {
        String string;
        setContentView(R.layout.select_file_main);
        this.btnCancel = (Button) findViewById(R.id.select_cancel);
        ListView listView = (ListView) findViewById(R.id.list_view);
        this.lvContent = listView;
        if (listView != null) {
            listView.setEmptyView(findViewById(R.id.empty_view));
            this.lvContent.setOnItemClickListener(this);
            this.lvContent.setFastScrollEnabled(true);
            this.lvContent.setVerticalScrollBarEnabled(true);
        }
        Bundle bundle = this.mSavedInstanceState;
        if (bundle != null && (string = bundle.getString(SAVED_PATH_KEY)) != null) {
            this.currentPath = string;
            Elog.d(TAG, "onCreate, mCurrentPath updated to = " + this.currentPath);
        }
        initEvent();
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        if (this.currentPath.equals(this.root)) {
            super.onBackPressed();
        } else {
            this.currentPath = new File(this.currentPath).getParentFile().getAbsolutePath();
            refreshView();
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.root = getIntent().getStringExtra("root");
        this.mcfFileType = getIntent().getIntExtra("file_type", 0);
        this.currentPath = this.root;
        Elog.d(TAG, "root path: " + this.root + ", file_type:" + this.mcfFileType);
        new FileLoadTask().execute(this.root);
        initLayout();
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i, Bundle bundle) {
        if (i != 0) {
            return null;
        }
        ProgressDialog progressDialog = new ProgressDialog(this);
        progressDialog.setMessage(getString(R.string.md_log_filter_query_filters));
        progressDialog.setCancelable(false);
        progressDialog.setIndeterminate(true);
        return progressDialog;
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        FileInfo fileInfo = (FileInfo) adapterView.getItemAtPosition(i);
        Intent intent = new Intent();
        Uri uri = fileInfo.getUri();
        Elog.d(TAG, "onItemClick RESULT_OK, uri : " + uri);
        intent.setData(uri);
        setResult(-1, intent);
        finish();
    }

    public void setFilePathListFromServer(String str) {
        if (str == null || str.trim().equals("")) {
            Elog.d(TAG, "[setFilePathListFromServer] return empty");
            return;
        }
        Elog.i(TAG, "add fileInfo:" + str);
        for (String str2 : str.split(";")) {
            FileInfo fileInfo = null;
            String[] strArrSplit = str2.split(":");
            if (strArrSplit != null) {
                if (strArrSplit.length == 2 && strArrSplit[0] != null) {
                    try {
                        fileInfo = new FileInfo(strArrSplit[0], Long.parseLong(strArrSplit[1]));
                    } catch (NumberFormatException e) {
                        fileInfo = new FileInfo(strArrSplit[0], -1L);
                        Elog.e(TAG, "getFileSize occurs exception:" + e.getMessage());
                    }
                } else if (strArrSplit.length == 1) {
                    fileInfo = new FileInfo(strArrSplit[0], -1L);
                }
                if (fileInfo != null && checkFileValid(fileInfo)) {
                    this.mFileList.add(fileInfo);
                }
            }
        }
    }
}
