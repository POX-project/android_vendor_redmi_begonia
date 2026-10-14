package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.view.View;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.Elog;
import java.lang.reflect.Array;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
abstract class ArrayTableComponent extends MDMComponent {
    TableInfoAdapter mAdapter;
    String[] mLabels;
    ListView mListView;

    public ArrayTableComponent(Activity activity) {
        super(activity);
        if (this.mAdapter == null) {
            this.mAdapter = new TableInfoAdapter(this.mActivity);
        }
        if (this.mListView == null) {
            this.mListView = new ListView(this.mActivity);
        }
    }

    void addData(Object... objArr) {
        String[] strArr = new String[objArr.length];
        for (int i = 0; i < objArr.length; i++) {
            strArr[i] = String.valueOf(objArr[i]);
        }
        addData(strArr);
    }

    void addData(String[] strArr) {
        this.mAdapter.add(strArr);
        this.mAdapter.notifyDataSetChanged();
        this.mListView.setAdapter((ListAdapter) this.mAdapter);
    }

    void addData(String[][] strArr) {
        if (this.mLabels == null) {
            this.mLabels = getLabels();
        }
        this.mAdapter.clear();
        this.mAdapter.add(this.mLabels);
        for (int i = 0; i < strArr.length && strArr[i] != null; i++) {
            this.mAdapter.add(strArr[i]);
        }
        this.mAdapter.notifyDataSetChanged();
        this.mListView.setAdapter((ListAdapter) this.mAdapter);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void clearData() {
        if (this.mLabels == null) {
            this.mLabels = getLabels();
        }
        this.mAdapter.clear();
        this.mAdapter.add(this.mLabels);
        this.mAdapter.notifyDataSetChanged();
    }

    abstract String[] getLabels();

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    View getView() {
        if (this.mLabels == null) {
            this.mLabels = getLabels();
        }
        if (this.mAdapter.getCount() == 0) {
            this.mAdapter.add(this.mLabels);
        }
        this.mListView.setAdapter((ListAdapter) this.mAdapter);
        this.mAdapter.notifyDataSetChanged();
        return this.mListView;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void removeView() {
        this.mListView.setAdapter((ListAdapter) null);
    }

    void setDataAtPosition(int i, int i2, Object obj) {
        if (this.mLabels == null) {
            this.mLabels = getLabels();
        }
        if (i2 >= this.mLabels.length) {
            Elog.e("EmInfo/MDMComponent", "Set data position error: " + i + ", " + i2);
            return;
        }
        if (this.mAdapter.getCount() == 0) {
            this.mAdapter.add(this.mLabels);
        }
        if (i + 1 >= this.mAdapter.getCount()) {
            for (int count = this.mAdapter.getCount(); count <= i + 1; count++) {
                this.mAdapter.add(new String[this.mLabels.length]);
            }
        }
        this.mAdapter.getItem(i + 1)[i2] = obj.toString();
        this.mListView.setAdapter((ListAdapter) this.mAdapter);
        this.mAdapter.notifyDataSetChanged();
    }

    void setDataAtPosition(int i, String[] strArr) {
        if (this.mLabels == null) {
            this.mLabels = getLabels();
        }
        String[] strArr2 = this.mLabels;
        if (i >= strArr2.length) {
            Elog.e("EmInfo/MDMComponent", "Set data position error: " + i);
            return;
        }
        String[][] strArr3 = (String[][]) Array.newInstance((Class<?>) String.class, strArr.length, strArr2.length);
        for (int i2 = 0; i2 < strArr.length; i2++) {
            if (i2 + 1 < this.mAdapter.getCount()) {
                strArr3[i2] = this.mAdapter.getItem(i2 + 1);
            }
            strArr3[i2][i] = strArr[i2];
        }
        this.mAdapter.clear();
        this.mAdapter.add(this.mLabels);
        for (int i3 = 0; i3 < strArr.length; i3++) {
            this.mAdapter.add(strArr3[i3]);
        }
        this.mAdapter.notifyDataSetChanged();
        this.mListView.setAdapter((ListAdapter) this.mAdapter);
    }
}
