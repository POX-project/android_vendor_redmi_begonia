package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.view.View;
import android.widget.LinearLayout;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class RsrpLteCandidateCellUmtsFdd extends MDMComponent {
    private static final String[] EM_TYPES = {MDMContent.MSG_ID_FDD_EM_CSCE_NEIGH_CELL_S_STATUS_IND};
    private RsrpLteCandidateCellUmtsFddArray mArrayComponent;
    private LinearLayout mComponentView;
    private RsrpLteCandidateCellUmtsFddCurve mCurveComponent;

    public RsrpLteCandidateCellUmtsFdd(Activity activity) {
        super(activity);
        this.mArrayComponent = new RsrpLteCandidateCellUmtsFddArray(activity);
        this.mCurveComponent = new RsrpLteCandidateCellUmtsFddCurve(activity);
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void clearData() {
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String[] getEmComponentName() {
        return EM_TYPES;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getGroup() {
        return "5. LTE EM Component";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    String getName() {
        return "RSRP (LTE candidate cell)(UMTS FDD)";
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    View getView() {
        if (this.mComponentView == null) {
            LinearLayout linearLayout = new LinearLayout(this.mActivity);
            this.mComponentView = linearLayout;
            linearLayout.setOrientation(1);
        } else {
            removeView();
        }
        LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, 0, 1.0f);
        LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(-1, 0, 2.0f);
        this.mComponentView.addView(this.mArrayComponent.getView(), layoutParams);
        this.mComponentView.addView(this.mCurveComponent.getView(), layoutParams2);
        return this.mComponentView;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void removeView() {
        this.mArrayComponent.removeView();
        this.mCurveComponent.removeView();
        this.mComponentView.removeAllViews();
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    boolean supportMultiSIM() {
        return false;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void update(String str, Object obj) {
        this.mArrayComponent.update(str, obj);
        this.mCurveComponent.update(str, obj);
    }
}
