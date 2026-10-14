package com.mediatek.engineermode.iotconfig;

import android.app.Activity;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.TextView;
import com.mediatek.engineermode.R;

/* JADX INFO: compiled from: ApnConfigFragment.java */
/* JADX INFO: loaded from: classes.dex */
class TableInfoAdapter extends ArrayAdapter<String[]> {
    private Activity mActivity;

    /* JADX INFO: compiled from: ApnConfigFragment.java */
    private class ViewHolder {
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
        LayoutInflater layoutInflater = this.mActivity.getLayoutInflater();
        if (view == null) {
            view = layoutInflater.inflate(R.layout.em_info_entry, (ViewGroup) null);
            viewHolder = new ViewHolder();
            viewHolder.texts = new TextView[10];
            viewHolder.texts[0] = (TextView) view.findViewById(R.id.info1);
            viewHolder.texts[1] = (TextView) view.findViewById(R.id.info2);
            viewHolder.texts[2] = (TextView) view.findViewById(R.id.info3);
            viewHolder.texts[3] = (TextView) view.findViewById(R.id.info4);
            viewHolder.texts[4] = (TextView) view.findViewById(R.id.info5);
            viewHolder.texts[5] = (TextView) view.findViewById(R.id.info6);
            viewHolder.texts[6] = (TextView) view.findViewById(R.id.info7);
            viewHolder.texts[7] = (TextView) view.findViewById(R.id.info8);
            viewHolder.texts[8] = (TextView) view.findViewById(R.id.info9);
            viewHolder.texts[9] = (TextView) view.findViewById(R.id.info10);
            view.setTag(viewHolder);
        } else {
            viewHolder = (ViewHolder) view.getTag();
        }
        String[] item = getItem(i);
        for (int i2 = 0; i2 < item.length; i2++) {
            viewHolder.texts[i2].setText(item[i2]);
            viewHolder.texts[i2].setVisibility(0);
        }
        for (int length = item.length; length < viewHolder.texts.length; length++) {
            viewHolder.texts[length].setVisibility(8);
        }
        return view;
    }
}
