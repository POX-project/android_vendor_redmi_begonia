package com.mediatek.engineermode.vilte;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public class VilteMenuSelect extends Activity implements AdapterView.OnItemClickListener {
    private final String TAG = "Vilte/MenuSelect";
    ArrayList<String> items = null;

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.vilte_menu_select);
        ListView listView = (ListView) findViewById(R.id.vilte_main_menu_select);
        ArrayList<String> arrayList = new ArrayList<>();
        this.items = arrayList;
        arrayList.add(getString(R.string.vilte_menu_common));
        this.items.add(getString(R.string.vilte_menu_operator));
        listView.setAdapter((ListAdapter) new ArrayAdapter(this, android.R.layout.simple_list_item_1, this.items));
        listView.setOnItemClickListener(this);
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent();
        Elog.d("Vilte/MenuSelect", "Click item = " + this.items.get(i));
        if (this.items.get(i).equals(getString(R.string.vilte_menu_common))) {
            intent.setClass(this, VilteMenuCommon.class);
        } else if (this.items.get(i).equals(getString(R.string.vilte_menu_operator))) {
            intent.setClass(this, VilteMenuOperator.class);
        }
        startActivity(intent);
    }
}
