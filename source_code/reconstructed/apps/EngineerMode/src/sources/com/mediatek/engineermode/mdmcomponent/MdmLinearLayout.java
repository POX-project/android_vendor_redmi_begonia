package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.TextView;
import com.mediatek.engineermode.R;

/* JADX INFO: loaded from: classes.dex */
public class MdmLinearLayout extends LinearLayout {
    private static final String TAG = "EMInfo_MdmLinearLayout";
    private View convertView;
    private ListView listView;
    private Activity mActivity;
    private TextView textView;

    public MdmLinearLayout(Activity activity) {
        super(activity);
        this.mActivity = activity;
        initView(activity);
    }

    public MdmLinearLayout(Activity activity, AttributeSet attributeSet) {
        super(activity, attributeSet);
        this.mActivity = activity;
        initView(activity);
    }

    View getListView() {
        return this.listView;
    }

    View getTextView() {
        return this.textView;
    }

    public void hideTitle() {
        this.textView.setVisibility(8);
    }

    public void hideView() {
        this.convertView.setVisibility(8);
    }

    public void initView(Activity activity) {
        View viewInflate = activity.getLayoutInflater().inflate(R.layout.em_muti_info_entry, (ViewGroup) null);
        this.convertView = viewInflate;
        addView(viewInflate);
        this.textView = (TextView) this.convertView.findViewById(R.id.detail_title_muti_mdm);
        this.listView = (ListView) this.convertView.findViewById(R.id.detail_listview_muti_mdm);
    }

    public void setAdapter(ListAdapter listAdapter) {
        this.listView.setAdapter(listAdapter);
    }

    public void setBackgroudColor(int i) {
        this.listView.setBackgroundResource(i);
    }

    public void setListViewHeightBasedOnChildren() {
        ListAdapter adapter = this.listView.getAdapter();
        if (adapter == null || adapter.getCount() == 0) {
            return;
        }
        int measuredHeight = 0;
        int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec(this.mActivity.getWindowManager().getDefaultDisplay().getWidth(), Integer.MIN_VALUE);
        View.MeasureSpec.getSize(iMakeMeasureSpec);
        int iMakeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(0, 0);
        ViewGroup.LayoutParams layoutParams = new ViewGroup.LayoutParams(-1, -2);
        for (int i = 0; i < adapter.getCount(); i++) {
            View view = adapter.getView(i, null, this.listView);
            if (view instanceof ViewGroup) {
                view.setLayoutParams(layoutParams);
            }
            view.measure(iMakeMeasureSpec, iMakeMeasureSpec2);
            measuredHeight += view.getMeasuredHeight();
        }
        int paddingTop = measuredHeight + this.listView.getPaddingTop() + this.listView.getPaddingBottom() + (this.listView.getDividerHeight() * (adapter.getCount() - 1)) + 20;
        ViewGroup.LayoutParams layoutParams2 = this.listView.getLayoutParams();
        layoutParams2.height = paddingTop;
        this.listView.setLayoutParams(layoutParams2);
        this.listView.requestLayout();
    }

    public void setTextBackgroudColor(int i) {
        this.textView.setBackgroundResource(i);
    }

    public void setTextContent(String str) {
        this.textView.setText(str);
    }

    public void showTitle() {
        this.textView.setVisibility(0);
    }

    public void showView() {
        this.convertView.setVisibility(0);
    }
}
