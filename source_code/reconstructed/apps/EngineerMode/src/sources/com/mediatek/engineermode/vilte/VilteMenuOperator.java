package com.mediatek.engineermode.vilte;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.support.v4.view.ViewCompat;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public class VilteMenuOperator extends Activity implements AdapterView.OnItemClickListener {
    private final String TAG = getClass().getSimpleName();
    ArrayList<String> items = null;
    private MenuListAdapter mAdapter;

    private class MenuListAdapter extends ArrayAdapter<String> {

        private class ViewHolder {
            public TextView label;

            private ViewHolder() {
            }
        }

        MenuListAdapter(Context context) {
            super(context, 0);
        }

        @Override // android.widget.ArrayAdapter, android.widget.Adapter
        public View getView(int i, View view, ViewGroup viewGroup) {
            ViewHolder viewHolder;
            LayoutInflater layoutInflater = VilteMenuOperator.this.getLayoutInflater();
            if (view == null) {
                view = layoutInflater.inflate(R.layout.vilte_menu_operator_entry, (ViewGroup) null);
                viewHolder = new ViewHolder();
                viewHolder.label = (TextView) view.findViewById(R.id.column1);
                view.setTag(viewHolder);
            } else {
                viewHolder = (ViewHolder) view.getTag();
            }
            String item = getItem(i);
            viewHolder.label.setText(item.toString());
            viewHolder.label.setTextColor(-3355444);
            if (item.equals(VilteMenuOperator.this.getString(R.string.vilte_menu_operator_modem))) {
                view.setEnabled(false);
                viewHolder.label.setTextColor(-7829368);
            } else {
                viewHolder.label.setTextColor(ViewCompat.MEASURED_STATE_MASK);
            }
            return view;
        }
    }

    private void updateListView() {
        this.mAdapter.clear();
        this.mAdapter.addAll(this.items);
        this.mAdapter.notifyDataSetChanged();
    }

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.vilte_menu_select);
        ListView listView = (ListView) findViewById(R.id.vilte_main_menu_select);
        ArrayList<String> arrayList = new ArrayList<>();
        this.items = arrayList;
        arrayList.add(getString(R.string.vilte_menu_operator_ims_framework));
        this.items.add(getString(R.string.vilte_menu_operator_vt_service));
        this.items.add(getString(R.string.vilte_menu_operator_media));
        this.items.add(getString(R.string.vilte_menu_operator_codec));
        this.items.add(getString(R.string.vilte_menu_operator_modem));
        MenuListAdapter menuListAdapter = new MenuListAdapter(this);
        this.mAdapter = menuListAdapter;
        listView.setAdapter((ListAdapter) menuListAdapter);
        listView.setOnItemClickListener(this);
        updateListView();
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent();
        Elog.d(this.TAG, "Click item = " + this.items.get(i));
        if (this.items.get(i).equals(getString(R.string.vilte_menu_operator_ims_framework))) {
            intent.setClass(this, VilteImsFramework.class);
        } else if (this.items.get(i).equals(getString(R.string.vilte_menu_operator_vt_service))) {
            intent.setClass(this, ViLTEVtService.class);
        } else if (this.items.get(i).equals(getString(R.string.vilte_menu_operator_media))) {
            intent.setClass(this, VilteMenuMedia.class);
        } else if (this.items.get(i).equals(getString(R.string.vilte_menu_operator_codec))) {
            intent.setClass(this, VilteMenuCodec.class);
        } else if (this.items.get(i).equals(getString(R.string.vilte_menu_operator_modem))) {
            return;
        }
        startActivity(intent);
    }
}
