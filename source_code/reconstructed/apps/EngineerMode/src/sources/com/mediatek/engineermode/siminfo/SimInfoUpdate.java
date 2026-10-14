package com.mediatek.engineermode.siminfo;

import android.app.Activity;

/* JADX INFO: loaded from: classes3.dex */
class SimInfoUpdate extends NormalTableComponent {
    public SimInfoUpdate(Activity activity) {
        super(activity);
    }

    @Override // java.lang.Comparable
    public int compareTo(NormalTableComponent normalTableComponent) {
        return 0;
    }

    @Override // com.mediatek.engineermode.siminfo.NormalTableComponent
    String[] getLabels() {
        return new String[]{"CDR-PER-512", "CDR-PER-514", "CDR-PER-516", "CDR-PER-518", "CDR-PER-520", "CDR-PER-522", "CDR-PER-524", "CDR-PER-526", "CDR-PER-528", "CDR-PER-530", "CDR-PER-536", "CDR-PER-538", "CDR-PER-540", "CDR-PER-542", "CDR-PER-544"};
    }

    @Override // com.mediatek.engineermode.siminfo.NormalTableComponent
    void update(int i, String str) {
        if (i == 0) {
            clearData();
        } else if (i == 1) {
            addData(str);
        } else {
            notifyDataSetChanged();
        }
    }
}
