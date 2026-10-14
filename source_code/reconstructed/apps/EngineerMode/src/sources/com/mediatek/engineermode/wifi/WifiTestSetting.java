package com.mediatek.engineermode.wifi;

import android.app.Dialog;
import android.app.ListActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import com.mediatek.engineermode.R;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public class WifiTestSetting extends ListActivity {
    public static final String CTIA_TEST = "mtk_wifi_ctia_test";
    private static final int DIALOG_WIFI_CTIA = 1;
    private ArrayList<String> mItemList;

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(R.layout.wifi_test_setting);
        ArrayList<String> arrayList = new ArrayList<>();
        this.mItemList = arrayList;
        arrayList.add(getString(R.string.wifi_ctia_test));
        setListAdapter(new ArrayAdapter(this, android.R.layout.simple_list_item_1, this.mItemList));
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        if (i == 1) {
            return new MtkCTIATestDialog(this);
        }
        return null;
    }

    @Override // android.app.ListActivity
    protected void onListItemClick(ListView listView, View view, int i, long j) {
        if (this.mItemList.get(i).equals(getString(R.string.wifi_ctia_test))) {
            removeDialog(1);
            showDialog(1);
        }
    }

    @Override // android.app.Activity
    protected void onPause() {
        removeDialog(1);
        super.onPause();
    }
}
