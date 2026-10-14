package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.view.View;
import android.widget.ListAdapter;
import com.mediatek.engineermode.Elog;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
abstract class NormalTableTasComponent extends NormalTableComponent {
    private int infoValid;

    public NormalTableTasComponent(Activity activity) {
        super(activity);
        this.infoValid = 0;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent, com.mediatek.engineermode.mdmcomponent.MDMComponent
    View getView() {
        Elog.d("EmInfo/MDMComponent", "getView");
        if (isInfoValid()) {
            clearData();
            this.mAdapter.add(new String[]{"Use " + getName().replace("TAS", "UTAS")});
        } else {
            if (this.mLabels == null) {
                this.mLabels = getLabels();
            }
            if (this.mAdapter.getCount() == 0) {
                for (int i = 0; i < this.mLabels.length; i++) {
                    this.mAdapter.add(new String[]{this.mLabels[i], ""});
                }
            }
        }
        this.mListView.setAdapter((ListAdapter) this.mAdapter);
        this.mAdapter.notifyDataSetChanged();
        return this.mListView;
    }

    public boolean isInfoValid() {
        return this.infoValid == 1;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.NormalTableComponent, com.mediatek.engineermode.mdmcomponent.MDMComponent
    void removeView() {
        this.mListView.setAdapter((ListAdapter) null);
        setInfoValid(0);
    }

    public void setInfoValid(int i) {
        this.infoValid = i;
    }
}
