package com.mediatek.engineermode.rfdesense;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.CheckBox;
import android.widget.TextView;
import com.mediatek.engineermode.R;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseRatAdapter extends BaseAdapter {
    private static final String TAG = "RfDesense/RatAdapter";
    private Context mContext;
    private LayoutInflater mLayoutInflater;
    private List<RfDesenseRatInfo> mRatList;

    class ViewHolder {
        CheckBox RatCheckState;
        TextView rat_cmd;
        TextView rat_name;

        ViewHolder() {
        }
    }

    public RfDesenseRatAdapter(Context context, ArrayList<RfDesenseRatInfo> arrayList) {
        this.mContext = null;
        this.mRatList = null;
        this.mLayoutInflater = null;
        this.mContext = context;
        this.mRatList = arrayList;
        this.mLayoutInflater = (LayoutInflater) context.getSystemService("layout_inflater");
    }

    @Override // android.widget.Adapter
    public int getCount() {
        List<RfDesenseRatInfo> list = this.mRatList;
        if (list != null) {
            return list.size();
        }
        return 0;
    }

    @Override // android.widget.Adapter
    public Object getItem(int i) {
        List<RfDesenseRatInfo> list = this.mRatList;
        if (list != null) {
            return list.get(i);
        }
        return null;
    }

    @Override // android.widget.Adapter
    public long getItemId(int i) {
        return i;
    }

    @Override // android.widget.Adapter
    public View getView(int i, View view, ViewGroup viewGroup) {
        ViewHolder viewHolder;
        if (view == null) {
            view = this.mLayoutInflater.inflate(R.layout.rf_desense_rat_list, (ViewGroup) null);
            viewHolder = new ViewHolder();
            viewHolder.RatCheckState = (CheckBox) view.findViewById(R.id.rat_status);
            viewHolder.rat_name = (TextView) view.findViewById(R.id.rat_name);
            viewHolder.rat_cmd = (TextView) view.findViewById(R.id.rat_cmd);
            view.setTag(viewHolder);
            view.setTag(R.id.rat_status, viewHolder.RatCheckState);
            viewHolder.RatCheckState.setTag(Integer.valueOf(i));
            viewHolder.rat_cmd.setVisibility(8);
            viewHolder.RatCheckState.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.rfdesense.RfDesenseRatAdapter.1
                @Override // android.view.View.OnClickListener
                public void onClick(View view2) {
                    CheckBox checkBox = (CheckBox) view2;
                    ((RfDesenseRatInfo) RfDesenseRatAdapter.this.mRatList.get(((Integer) checkBox.getTag()).intValue())).setRatCheckState(Boolean.valueOf(checkBox.isChecked()));
                }
            });
        } else {
            viewHolder = (ViewHolder) view.getTag();
        }
        viewHolder.rat_name.setText(this.mRatList.get(i).getRatName());
        viewHolder.rat_cmd.setText(this.mRatList.get(i).getRatCmdStart());
        viewHolder.RatCheckState.setChecked(this.mRatList.get(i).getRatCheckState().booleanValue());
        return view;
    }

    public void setData(List<RfDesenseRatInfo> list) {
        this.mRatList = list;
    }
}
