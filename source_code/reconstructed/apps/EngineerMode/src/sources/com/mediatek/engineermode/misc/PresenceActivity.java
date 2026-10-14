package com.mediatek.engineermode.misc;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class PresenceActivity extends Activity implements AdapterView.OnItemClickListener {
    private static final String PACKAGE_NAME = "com.mediatek.engineermode.misc";
    private static final String TAG = "Presence/Activity";
    private List<String> mListData;
    private ListView mMenuListView;
    private static final String[] ITEM_STRINGS = {"Presence Setting", "AOSP Presence Test"};
    private static final String[] ITEM_INTENT_STRING = {"PresenceSet", AospPresenceTestActivity.TAG};

    private List<String> getData() {
        ArrayList arrayList = new ArrayList();
        int i = 0;
        while (true) {
            String[] strArr = ITEM_STRINGS;
            if (i >= strArr.length) {
                return arrayList;
            }
            arrayList.add(strArr[i]);
            i++;
        }
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.presence);
        ListView listView = (ListView) findViewById(R.id.ListViewPresence);
        this.mMenuListView = listView;
        if (listView == null) {
            Log.e(TAG, "Resource could not be allocated");
        }
        this.mMenuListView.setOnItemClickListener(this);
        Log.i(TAG, "onCreate in dsActivity");
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent();
        int i2 = 0;
        while (true) {
            String[] strArr = ITEM_STRINGS;
            if (i2 >= strArr.length) {
                break;
            }
            if (strArr[i2] == this.mListData.get(i)) {
                intent.setClassName(this, "com.mediatek.engineermode.misc." + ITEM_INTENT_STRING[i2]);
                Log.i(TAG, "Start activity:" + ITEM_STRINGS[i2] + " inent:" + ITEM_INTENT_STRING[i2]);
                break;
            }
            i2++;
        }
        startActivity(intent);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        this.mListData = getData();
        this.mMenuListView.setAdapter((ListAdapter) new ArrayAdapter(this, android.R.layout.simple_list_item_1, this.mListData));
    }
}
