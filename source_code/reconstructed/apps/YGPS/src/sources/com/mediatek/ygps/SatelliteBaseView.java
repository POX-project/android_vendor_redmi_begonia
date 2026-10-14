package com.mediatek.ygps;

import android.content.Context;
import android.util.AttributeSet;
import android.view.View;

/* JADX INFO: loaded from: classes.dex */
public class SatelliteBaseView extends View {
    private SatelliteInfoManager mSiManager;

    public SatelliteBaseView(Context context) {
        this(context, null, 0);
    }

    public SatelliteBaseView(Context context, AttributeSet attributeSet) {
        this(context, null, 0);
    }

    public SatelliteBaseView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mSiManager = null;
    }

    protected SatelliteInfoManager getSatelliteInfoManager() {
        return this.mSiManager;
    }

    void requestUpdate(SatelliteInfoManager satelliteInfoManager) {
        this.mSiManager = satelliteInfoManager;
        postInvalidate();
    }
}
