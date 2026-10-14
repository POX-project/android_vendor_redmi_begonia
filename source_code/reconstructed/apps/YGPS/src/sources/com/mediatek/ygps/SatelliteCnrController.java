package com.mediatek.ygps;

import android.app.Activity;
import android.content.Context;
import android.text.SpannableString;
import android.text.style.BackgroundColorSpan;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.GridLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.TextView;
import java.util.Iterator;
import java.util.LinkedHashMap;

/* JADX INFO: loaded from: classes.dex */
public class SatelliteCnrController {
    DataAdapter mAdapter;
    CheckBox mCbShowInSingle;
    private Context mContext;
    GridLayout mGlOnePage;
    View mLlDetail;
    View mLlOnePageTitle;
    ListView mLvCnr;
    TextView mTvAveCnr;

    private class CnrInfo {
        float cnrL1;
        float cnrL5;
        int color;
        boolean usedInFixL1;
        boolean usedInFixL5;

        private CnrInfo(SatelliteCnrController satelliteCnrController) {
            this.cnrL1 = -1.0f;
            this.cnrL5 = -1.0f;
            this.usedInFixL1 = false;
            this.usedInFixL5 = false;
        }

        SpannableString getCnrSummary() {
            float f = this.cnrL1;
            String str = f < 0.0f ? "-" : String.format("%3.1f", Float.valueOf(f));
            float f2 = this.cnrL5;
            SpannableString spannableString = new SpannableString(str + "/" + (f2 >= 0.0f ? String.format("%3.1f", Float.valueOf(f2)) : "-"));
            if (this.usedInFixL1) {
                spannableString.setSpan(new BackgroundColorSpan(-256), 0, str.length(), 33);
            }
            if (this.usedInFixL5) {
                spannableString.setSpan(new BackgroundColorSpan(-256), str.length() + 1, spannableString.length(), 33);
            }
            return spannableString;
        }
    }

    private class DataAdapter extends ArrayAdapter<SatelliteInfo> {
        private Activity mParent;

        private class ViewHolder {
            TextView mTvAm;
            TextView mTvEv;
            TextView mTvFq;
            TextView mTvSvId;
            CnrBarView mViewCnr;
            View mViewSys;

            private ViewHolder(DataAdapter dataAdapter) {
            }
        }

        public DataAdapter(SatelliteCnrController satelliteCnrController, Activity activity) {
            super(activity, 0);
            this.mParent = activity;
        }

        @Override // android.widget.ArrayAdapter, android.widget.Adapter
        public View getView(int i, View view, ViewGroup viewGroup) {
            ViewHolder viewHolder;
            LayoutInflater layoutInflater = this.mParent.getLayoutInflater();
            if (view == null) {
                view = layoutInflater.inflate(R.layout.cnr_detail_entry, (ViewGroup) null);
                viewHolder = new ViewHolder();
                viewHolder.mViewSys = view.findViewById(R.id.tvSys);
                viewHolder.mTvSvId = (TextView) view.findViewById(R.id.tvId);
                viewHolder.mTvFq = (TextView) view.findViewById(R.id.tvFq);
                viewHolder.mViewCnr = (CnrBarView) view.findViewById(R.id.tvCnr);
                viewHolder.mTvEv = (TextView) view.findViewById(R.id.tvEv);
                viewHolder.mTvAm = (TextView) view.findViewById(R.id.tvAm);
                view.setTag(viewHolder);
            } else {
                viewHolder = (ViewHolder) view.getTag();
            }
            SatelliteInfo item = getItem(i);
            viewHolder.mViewSys.setBackgroundResource(item.getIcon());
            viewHolder.mTvSvId.setText(String.valueOf(item.mPrn));
            viewHolder.mTvFq.setText(item.getFq());
            viewHolder.mTvAm.setText(String.format("%1.2f", Float.valueOf(item.mAzimuth)));
            viewHolder.mTvEv.setText(String.format("%1.2f", Float.valueOf(item.mElevation)));
            viewHolder.mViewCnr.setValue(item.mSnr, item.getColor(), item.mUsedInFix);
            viewHolder.mViewCnr.invalidate();
            return view;
        }
    }

    public SatelliteCnrController(View view, Activity activity) {
        this.mContext = activity;
        this.mLvCnr = (ListView) view.findViewById(R.id.lvCnr);
        DataAdapter dataAdapter = new DataAdapter(this, activity);
        this.mAdapter = dataAdapter;
        this.mLvCnr.setAdapter((ListAdapter) dataAdapter);
        this.mTvAveCnr = (TextView) view.findViewById(R.id.tvAveCnr);
        this.mLlDetail = view.findViewById(R.id.llCnrTitle);
        this.mGlOnePage = (GridLayout) view.findViewById(R.id.glData);
        this.mLlOnePageTitle = view.findViewById(R.id.llOnePageTitle);
        CheckBox checkBox = (CheckBox) view.findViewById(R.id.cbShowInSinglePage);
        this.mCbShowInSingle = checkBox;
        checkBox.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() { // from class: com.mediatek.ygps.SatelliteCnrController.1
            @Override // android.widget.CompoundButton.OnCheckedChangeListener
            public void onCheckedChanged(CompoundButton compoundButton, boolean z) {
                SatelliteCnrController.this.mLlOnePageTitle.setVisibility(z ? 0 : 8);
                SatelliteCnrController.this.mGlOnePage.setVisibility(z ? 0 : 8);
                SatelliteCnrController.this.mLlDetail.setVisibility(z ? 8 : 0);
                SatelliteCnrController.this.mLvCnr.setVisibility(z ? 8 : 0);
            }
        });
    }

    private void updateSingleView(SatelliteInfoManager satelliteInfoManager) {
        LinkedHashMap<String, CnrInfo> linkedHashMap = new LinkedHashMap<>();
        genIdCnrMap(satelliteInfoManager, linkedHashMap);
        this.mGlOnePage.removeAllViews();
        int width = (int) (((double) this.mGlOnePage.getWidth()) / 12.0d);
        int i = 0;
        for (String str : linkedHashMap.keySet()) {
            int i2 = i / 4;
            int i3 = (i % 4) * 2;
            GridLayout.LayoutParams layoutParams = new GridLayout.LayoutParams(GridLayout.spec(i2), GridLayout.spec(i3));
            CnrInfo cnrInfo = linkedHashMap.get(str);
            BottomBorderView bottomBorderView = new BottomBorderView(this.mContext, cnrInfo.color);
            bottomBorderView.setText(str);
            bottomBorderView.setWidth(width);
            bottomBorderView.setHeight(50);
            this.mGlOnePage.addView(bottomBorderView, layoutParams);
            int i4 = i3 + 1;
            GridLayout.LayoutParams layoutParams2 = new GridLayout.LayoutParams(GridLayout.spec(i2), GridLayout.spec(i4));
            if (i4 == 7) {
                BottomBorderView bottomBorderView2 = new BottomBorderView(this.mContext, cnrInfo.color);
                bottomBorderView2.setText(cnrInfo.getCnrSummary());
                bottomBorderView2.setWidth(width * 2);
                bottomBorderView2.setHeight(50);
                this.mGlOnePage.addView(bottomBorderView2, layoutParams2);
            } else {
                TwoBorderView twoBorderView = new TwoBorderView(this.mContext, cnrInfo.color);
                twoBorderView.setText(cnrInfo.getCnrSummary());
                twoBorderView.setWidth(width * 2);
                twoBorderView.setHeight(50);
                this.mGlOnePage.addView(twoBorderView, layoutParams2);
            }
            i++;
        }
    }

    void genIdCnrMap(SatelliteInfoManager satelliteInfoManager, LinkedHashMap<String, CnrInfo> linkedHashMap) {
        for (SatelliteInfo satelliteInfo : satelliteInfoManager.getSatelInfoList()) {
            CnrInfo cnrInfo = linkedHashMap.get(satelliteInfo.getTag());
            if (cnrInfo == null) {
                cnrInfo = new CnrInfo();
            }
            if ("L1".equals(satelliteInfo.getFq())) {
                cnrInfo.cnrL1 = satelliteInfo.mSnr;
                cnrInfo.usedInFixL1 = satelliteInfo.mUsedInFix;
            } else {
                cnrInfo.cnrL5 = satelliteInfo.mSnr;
                cnrInfo.usedInFixL5 = satelliteInfo.mUsedInFix;
            }
            cnrInfo.color = satelliteInfo.getColor();
            linkedHashMap.put(satelliteInfo.getTag(), cnrInfo);
        }
    }

    void updateView(SatelliteInfoManager satelliteInfoManager) {
        if (this.mCbShowInSingle.isChecked()) {
            updateSingleView(satelliteInfoManager);
        } else {
            this.mAdapter.clear();
            this.mAdapter.addAll(satelliteInfoManager.getSatelInfoList());
            this.mAdapter.notifyDataSetChanged();
        }
        StringBuilder sb = new StringBuilder("");
        Iterator<String> it = SatelliteInfo.getTalker().iterator();
        while (it.hasNext()) {
            SatelliteInfo.SatellitesSystem system = SatelliteInfo.getSystem(it.next());
            sb.append(system.getTag());
            sb.append(":");
            sb.append(system.getCnr());
            sb.append("    ");
        }
        this.mTvAveCnr.setText(sb);
    }
}
