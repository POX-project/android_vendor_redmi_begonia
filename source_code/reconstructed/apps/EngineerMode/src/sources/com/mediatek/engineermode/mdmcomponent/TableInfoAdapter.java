package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.TextView;
import com.mediatek.engineermode.R;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
class TableInfoAdapter extends ArrayAdapter<String[]> {
    private Activity mActivity;

    /* JADX INFO: compiled from: MDMComponent.java */
    private class ViewHolder {
        public View[] seps;
        public TextView[] texts;

        private ViewHolder() {
        }
    }

    public TableInfoAdapter(Activity activity) {
        super(activity, 0);
        this.mActivity = activity;
    }

    @Override // android.widget.ArrayAdapter, android.widget.Adapter
    public View getView(int i, View view, ViewGroup viewGroup) {
        ViewHolder viewHolder;
        this.mActivity.getLayoutInflater();
        if (view == null) {
            view = LayoutInflater.from(this.mActivity).inflate(R.layout.em_info_entry, viewGroup, false);
            viewHolder = new ViewHolder();
            viewHolder.texts = new MdmTextView[16];
            viewHolder.seps = new View[15];
            viewHolder.texts[0] = (MdmTextView) view.findViewById(R.id.info1);
            viewHolder.texts[1] = (MdmTextView) view.findViewById(R.id.info2);
            viewHolder.texts[2] = (MdmTextView) view.findViewById(R.id.info3);
            viewHolder.texts[3] = (MdmTextView) view.findViewById(R.id.info4);
            viewHolder.texts[4] = (MdmTextView) view.findViewById(R.id.info5);
            viewHolder.texts[5] = (MdmTextView) view.findViewById(R.id.info6);
            viewHolder.texts[6] = (MdmTextView) view.findViewById(R.id.info7);
            viewHolder.texts[7] = (MdmTextView) view.findViewById(R.id.info8);
            viewHolder.texts[8] = (MdmTextView) view.findViewById(R.id.info9);
            viewHolder.texts[9] = (MdmTextView) view.findViewById(R.id.info10);
            viewHolder.texts[10] = (MdmTextView) view.findViewById(R.id.info11);
            viewHolder.texts[11] = (MdmTextView) view.findViewById(R.id.info12);
            viewHolder.texts[12] = (MdmTextView) view.findViewById(R.id.info13);
            viewHolder.texts[13] = (MdmTextView) view.findViewById(R.id.info14);
            viewHolder.texts[14] = (MdmTextView) view.findViewById(R.id.info15);
            viewHolder.texts[15] = (MdmTextView) view.findViewById(R.id.info16);
            for (int i2 = 0; i2 < viewHolder.seps.length; i2++) {
                viewHolder.seps[i2] = view.findViewWithTag(i2 + "");
            }
            view.setTag(viewHolder);
        } else {
            viewHolder = (ViewHolder) view.getTag();
        }
        String[] item = getItem(i);
        for (int i3 = 0; i3 < item.length && i3 < viewHolder.texts.length; i3++) {
            viewHolder.texts[i3].setText(item[i3]);
            viewHolder.texts[i3].setVisibility(0);
            if (i3 < viewHolder.seps.length && viewHolder.seps[i3] != null) {
                LinearLayout.LayoutParams layoutParams = (LinearLayout.LayoutParams) viewHolder.seps[i3].getLayoutParams();
                layoutParams.width = 1;
                viewHolder.seps[i3].setLayoutParams(layoutParams);
            }
        }
        for (int length = item.length; length < viewHolder.texts.length; length++) {
            viewHolder.texts[length].setVisibility(8);
            if (length < viewHolder.seps.length && viewHolder.seps[length] != null) {
                LinearLayout.LayoutParams layoutParams2 = (LinearLayout.LayoutParams) viewHolder.seps[length].getLayoutParams();
                layoutParams2.width = 0;
                viewHolder.seps[length].setLayoutParams(layoutParams2);
            }
        }
        return view;
    }

    public void notifyDataSetChanged(ListView listView, int i) {
        int firstVisiblePosition = listView.getFirstVisiblePosition();
        int lastVisiblePosition = listView.getLastVisiblePosition();
        if (i < firstVisiblePosition || i > lastVisiblePosition) {
            return;
        }
        getView(i, listView.getChildAt(i - firstVisiblePosition), listView);
    }
}
