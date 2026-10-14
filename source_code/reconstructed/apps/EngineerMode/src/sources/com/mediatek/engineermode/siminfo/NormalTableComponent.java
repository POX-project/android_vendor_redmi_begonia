package com.mediatek.engineermode.siminfo;

import android.app.Activity;
import android.view.View;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.Elog;

/* JADX INFO: compiled from: SimInfoUpdate.java */
/* JADX INFO: loaded from: classes3.dex */
abstract class NormalTableComponent implements Comparable<NormalTableComponent> {
    private static final String TAG = "siminfo";
    protected Activity mActivity;
    TableInfoAdapter mAdapter;
    String[] mLabels;
    ListView mListView;

    public NormalTableComponent(Activity activity) {
        this.mActivity = activity;
        if (this.mAdapter == null) {
            this.mAdapter = new TableInfoAdapter(this.mActivity);
        }
        if (this.mListView == null) {
            this.mListView = new ListView(this.mActivity);
        }
    }

    void addData(String str) {
        this.mLabels = getLabels();
        int count = this.mAdapter.getCount();
        TableInfoAdapter tableInfoAdapter = this.mAdapter;
        String[] strArr = new String[2];
        String[] strArr2 = this.mLabels;
        strArr[0] = strArr2[count % strArr2.length];
        strArr[1] = str == null ? "" : str;
        tableInfoAdapter.add(strArr);
        this.mAdapter.notifyDataSetChanged();
    }

    void addData(Object... objArr) {
        for (Object obj : objArr) {
            addData(String.valueOf(obj));
        }
    }

    void addDataAtPostion(int i, String str) {
        if (this.mLabels == null) {
            this.mLabels = getLabels();
        }
        for (int count = this.mAdapter.getCount(); count <= i; count++) {
            this.mAdapter.add(new String[]{this.mLabels[count], ""});
        }
        this.mAdapter.getItem(i)[1] = str;
        this.mAdapter.notifyDataSetChanged();
    }

    void addDataAtPostion(int i, Object... objArr) {
        for (Object obj : objArr) {
            addDataAtPostion(i, String.valueOf(obj));
        }
    }

    void clearData() {
        this.mAdapter.clear();
    }

    abstract String[] getLabels();

    View getView() {
        Elog.d(TAG, "getView");
        if (this.mLabels == null) {
            this.mLabels = getLabels();
        }
        if (this.mAdapter.getCount() == 0) {
            int i = 0;
            while (true) {
                String[] strArr = this.mLabels;
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

    void notifyDataSetChanged() {
        if (this.mLabels == null) {
            this.mLabels = getLabels();
        }
        if (this.mAdapter.getCount() < this.mLabels.length) {
            int count = this.mAdapter.getCount();
            while (true) {
                String[] strArr = this.mLabels;
                if (count >= strArr.length) {
                    break;
                }
                this.mAdapter.add(new String[]{strArr[count], ""});
                count++;
            }
        }
        this.mAdapter.notifyDataSetChanged();
    }

    void removeView() {
        Elog.d(TAG, "removeView");
        this.mListView.setAdapter((ListAdapter) null);
    }

    abstract void update(int i, String str);
}
