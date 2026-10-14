package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.view.View;
import android.widget.AbsListView;
import android.widget.ListAdapter;
import android.widget.ListView;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
abstract class NormalTableComponent extends MDMComponent {
    TableInfoAdapter mAdapter;
    String[] mLabels;
    ListView mListView;
    int scrollPos;
    int scrollTop;

    public NormalTableComponent(Activity activity) {
        super(activity);
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
        this.mListView.setAdapter((ListAdapter) this.mAdapter);
        TableInfoAdapter tableInfoAdapter2 = this.mAdapter;
        tableInfoAdapter2.notifyDataSetChanged(this.mListView, tableInfoAdapter2.getCount() - 1);
        this.mListView.setSelectionFromTop(this.scrollPos, this.scrollTop);
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
        this.mListView.setAdapter((ListAdapter) this.mAdapter);
        this.mAdapter.notifyDataSetChanged(this.mListView, i);
        this.mListView.setSelectionFromTop(this.scrollPos, this.scrollTop);
    }

    void addDataAtPostion(int i, Object... objArr) {
        for (int i2 = 0; i2 < objArr.length; i2++) {
            i += i2;
            addDataAtPostion(i, String.valueOf(objArr[i2]));
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void clearData() {
        this.mAdapter.clear();
    }

    abstract String[] getLabels();

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    View getView() {
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
        this.mListView.setOnScrollListener(new AbsListView.OnScrollListener() { // from class: com.mediatek.engineermode.mdmcomponent.NormalTableComponent.1
            int firstVisible;
            int lastVisibleIndex;
            int totalCount;
            int visibleCount;

            @Override // android.widget.AbsListView.OnScrollListener
            public void onScroll(AbsListView absListView, int i2, int i3, int i4) {
                this.firstVisible = i2;
                this.visibleCount = i3;
                this.totalCount = i4;
                this.lastVisibleIndex = (i2 + i3) - 1;
            }

            @Override // android.widget.AbsListView.OnScrollListener
            public void onScrollStateChanged(AbsListView absListView, int i2) {
                if (i2 != 0) {
                    return;
                }
                NormalTableComponent normalTableComponent = NormalTableComponent.this;
                normalTableComponent.scrollPos = normalTableComponent.mListView.getFirstVisiblePosition();
                View childAt = NormalTableComponent.this.mListView.getChildAt(0);
                NormalTableComponent.this.scrollTop = childAt != null ? childAt.getTop() : 0;
            }
        });
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
        this.mListView.setSelectionFromTop(this.scrollPos, this.scrollTop);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void removeView() {
        this.mListView.setAdapter((ListAdapter) null);
    }

    void setData(int i, Object obj) {
        this.mLabels = getLabels();
        String strValueOf = String.valueOf(obj);
        if (i >= this.mLabels.length) {
            return;
        }
        if (i >= this.mAdapter.getCount()) {
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
        this.mAdapter.getItem(i)[1] = strValueOf;
        this.mListView.setAdapter((ListAdapter) this.mAdapter);
        this.mAdapter.notifyDataSetChanged(this.mListView, i);
        this.mListView.setSelectionFromTop(this.scrollPos, this.scrollTop);
    }
}
