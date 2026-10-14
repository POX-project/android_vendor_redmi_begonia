package com.mediatek.lbs.em2.ui;

import android.app.AlertDialog;
import android.app.ListActivity;
import android.content.DialogInterface;
import android.os.Bundle;
import android.view.KeyEvent;
import android.view.View;
import android.widget.Button;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;
import java.io.File;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class FileBrowser extends ListActivity {
    private Button mButtonLocationEM;
    private Button mButtonSdCard;
    private String mLocationEmPath;
    private TextView mTextView_FilePath;
    private List<String> paths = null;
    private String mCurrentPath = "/";
    private String mRootPath = "/";
    private String mSdcardPath = "/sdcard/nmea";
    private boolean mExit = false;

    /* JADX INFO: Access modifiers changed from: private */
    public void getFileDir(String str) {
        this.mCurrentPath = str;
        this.mTextView_FilePath.setText(str);
        ArrayList arrayList = new ArrayList();
        this.paths = new ArrayList();
        File file = new File(str);
        if (!file.canRead()) {
            Toast.makeText(this, "ERR: The folder " + str + " cannot open", 1).show();
            finish();
            return;
        }
        File[] fileArrListFiles = file.listFiles();
        if (!str.equals(this.mRootPath)) {
            arrayList.add("Back to " + this.mRootPath);
            this.paths.add(this.mRootPath);
            arrayList.add("Back to ../");
            this.paths.add(file.getParent());
        }
        for (File file2 : fileArrListFiles) {
            arrayList.add(file2.getName());
            this.paths.add(file2.getAbsolutePath());
        }
        setListAdapter(new MyAdapter(this, arrayList, this.paths));
    }

    private void initWidget() {
        this.mButtonSdCard = (Button) findViewById(R.id.button_Sdcard);
        this.mButtonLocationEM = (Button) findViewById(R.id.button_LocationEm);
        this.mButtonSdCard.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.FileBrowser.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                FileBrowser.this.mExit = false;
                FileBrowser fileBrowser = FileBrowser.this;
                fileBrowser.getFileDir(fileBrowser.mSdcardPath);
            }
        });
        this.mButtonLocationEM.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.FileBrowser.2
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                FileBrowser.this.mExit = false;
                FileBrowser fileBrowser = FileBrowser.this;
                fileBrowser.getFileDir(fileBrowser.mLocationEmPath);
            }
        });
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.file_browser);
        this.mTextView_FilePath = (TextView) findViewById(R.id.TextView_FilePath);
        this.mLocationEmPath = "/data/data/" + getPackageName() + "/nmea";
        new File(this.mLocationEmPath).mkdir();
        new File(this.mSdcardPath).mkdir();
        getFileDir(this.mLocationEmPath);
        initWidget();
    }

    @Override // android.app.ListActivity, android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (keyEvent.getKeyCode() == 4) {
            if (new File(this.paths.get(1)).canRead() && !this.mCurrentPath.equals(this.mRootPath) && !this.mCurrentPath.equals(this.mSdcardPath) && !this.mCurrentPath.equals(this.mLocationEmPath)) {
                getFileDir(this.paths.get(1));
                this.mExit = false;
                return true;
            }
            if (!this.mExit) {
                Toast.makeText(this, "click back key again to exit", 0).show();
                this.mExit = true;
                return true;
            }
        }
        return super.onKeyDown(i, keyEvent);
    }

    @Override // android.app.ListActivity
    protected void onListItemClick(ListView listView, View view, int i, long j) {
        File file = new File(this.paths.get(i));
        this.mExit = false;
        if (!file.canRead()) {
            Toast.makeText(this, file.getAbsolutePath() + " cannot be read", 0).show();
            return;
        }
        if (file.isDirectory()) {
            getFileDir(this.paths.get(i));
            return;
        }
        if (file.isFile()) {
            new AlertDialog.Builder(this).setTitle("Confirm").setMessage("Do you want to load " + file.getName() + "?").setPositiveButton("OK", new DialogInterface.OnClickListener() { // from class: com.mediatek.lbs.em2.ui.FileBrowser.4
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                    FileBrowser.this.finish();
                }
            }).setNegativeButton("Cancel", new DialogInterface.OnClickListener(this) { // from class: com.mediatek.lbs.em2.ui.FileBrowser.3
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i2) {
                }
            }).show();
        }
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
    }

    @Override // android.app.Activity
    protected void onRestart() {
        super.onRestart();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
    }

    @Override // android.app.Activity
    protected void onStop() {
        super.onStop();
    }
}
