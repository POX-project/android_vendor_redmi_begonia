package com.mediatek.engineermode.iotconfig;

import android.app.Activity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.TextView;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: compiled from: WfcConfigFragment.java */
/* JADX INFO: loaded from: classes.dex */
class MccMncAdapter extends ArrayAdapter<String> {
    private final Activity context;
    int listPosititon;
    private ArrayList<String> mccMncList;

    /* JADX INFO: compiled from: WfcConfigFragment.java */
    static class ViewHolder {
        protected TextView text;

        ViewHolder() {
        }
    }

    public MccMncAdapter(Activity activity, ArrayList<String> arrayList) {
        super(activity, R.layout.iot_wfc_row);
        this.context = activity;
        this.mccMncList = arrayList;
    }

    public ArrayList<String> getList() {
        return this.mccMncList;
    }

    @Override // android.widget.ArrayAdapter, android.widget.Adapter
    public View getView(int i, View view, ViewGroup viewGroup) {
        ViewHolder viewHolder;
        this.listPosititon = i;
        if (view == null) {
            view = this.context.getLayoutInflater().inflate(R.layout.iot_wfc_row, (ViewGroup) null);
            viewHolder = new ViewHolder();
            viewHolder.text = (TextView) view.findViewById(R.id.display_mccmnc);
            view.setTag(viewHolder);
            view.setTag(R.id.display_mccmnc, viewHolder.text);
        } else {
            viewHolder = (ViewHolder) view.getTag();
        }
        if (this.mccMncList != null) {
            viewHolder.text.setText(this.mccMncList.get(i));
        } else {
            viewHolder.text.setText("");
        }
        return view;
    }

    public void refresh(ArrayList<String> arrayList) {
        this.mccMncList = arrayList;
        notifyDataSetChanged();
    }
}
