package com.mediatek.engineermode.ims;

import android.R;
import android.app.Activity;
import android.content.Intent;
import android.content.res.XmlResourceParser;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.JsonCmd;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes2.dex */
public class ConfigIMSActivity extends Activity implements AdapterView.OnItemClickListener {
    private static final String TAG = "Ims/ImsConfig";
    private ListView mList;
    private ArrayList<Setting> mSettingDisplay;
    private int mSimType;
    private Toast mToast;
    private String mCategory = null;
    private ArrayList<Setting> mSettings = new ArrayList<>();
    private String mSettingRule = "Setting Rule:<digit of list num><list num><mnc_len><MNC><mcc_len><MCC>...";
    private List<String> mlabelName = new ArrayList();

    private Setting getSetting(String str) {
        Elog.d(TAG, "the label is" + str);
        for (Setting setting : this.mSettings) {
            Elog.d(TAG, "the label in setting is" + setting.getLabel());
            if (setting.getLabel().equals(str)) {
                return setting;
            }
        }
        return null;
    }

    private void getXMLContent(XmlResourceParser xmlResourceParser) {
        Setting setting = new Setting();
        String text = "";
        String str = "";
        try {
            int eventType = xmlResourceParser.getEventType();
            while (eventType != 1) {
                if (eventType == 2) {
                    if ("setting".equals(xmlResourceParser.getName())) {
                        setting = new Setting();
                        str = "";
                    } else if ("option".equals(xmlResourceParser.getName())) {
                        setting.getEntries().add(xmlResourceParser.getAttributeValue(null, "name"));
                        setting.getValues().add(Integer.valueOf(parseInt(xmlResourceParser.getAttributeValue(null, "value"))));
                    }
                    text = "";
                } else if (eventType == 3) {
                    String name = xmlResourceParser.getName();
                    if ("label".equals(name)) {
                        setting.setLabel(text);
                    } else if ("suffix".equals(name)) {
                        setting.setSuffix(text);
                    } else if ("category".equals(name)) {
                        str = text;
                    } else if (JsonCmd.STR_TYPE_KEY.equals(name)) {
                        setting.setType(parseInt(text));
                    } else if ("default".equals(name)) {
                        setting.setDefaultValue(text);
                    } else if ("setting".equals(name) && this.mCategory.equals(str)) {
                        this.mSettings.add(setting);
                        if (!setting.label.equals("white list") && !setting.label.equals(this.mSettingRule) && !setting.label.equals("operator_code_textview")) {
                            this.mlabelName.add(setting.label);
                        }
                    }
                } else if (eventType == 4) {
                    text = xmlResourceParser.getText();
                }
                eventType = xmlResourceParser.next();
            }
        } catch (IOException e) {
            Elog.e(TAG, "");
        } catch (XmlPullParserException e2) {
            Elog.e(TAG, "");
        }
    }

    private void initializeViews() {
        this.mList.setAdapter((ListAdapter) new ArrayAdapter(this, R.layout.simple_list_item_1, this.mlabelName));
        this.mList.setOnItemClickListener(this);
        setListViewItemsHeight(this.mList);
    }

    private int parseInt(String str) {
        try {
            return Integer.parseInt(str);
        } catch (NumberFormatException e) {
            showToast("Wrong integer format: " + str);
            return -1;
        }
    }

    private void setListViewItemsHeight(ListView listView) {
        if (listView == null) {
            return;
        }
        ListAdapter adapter = listView.getAdapter();
        int measuredHeight = 0;
        for (int i = 0; i < adapter.getCount(); i++) {
            View view = adapter.getView(i, null, listView);
            view.measure(0, 0);
            measuredHeight += view.getMeasuredHeight();
        }
        int count = measuredHeight + ((adapter.getCount() - 1) * listView.getDividerHeight());
        ViewGroup.LayoutParams layoutParams = listView.getLayoutParams();
        layoutParams.height = count;
        listView.setLayoutParams(layoutParams);
    }

    private void showToast(String str) {
        Toast toast = this.mToast;
        if (toast != null) {
            toast.cancel();
        }
        Toast toastMakeText = Toast.makeText(this, str, 0);
        this.mToast = toastMakeText;
        toastMakeText.show();
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(com.mediatek.engineermode.R.layout.ims_config);
        this.mCategory = getIntent().getStringExtra("category");
        this.mSimType = getIntent().getIntExtra("mSimType", 0);
        setTitle(this.mCategory);
        this.mList = (ListView) findViewById(com.mediatek.engineermode.R.id.ims_item_list);
        getXMLContent(getResources().getXml(com.mediatek.engineermode.R.xml.ims_config));
        List<String> list = this.mlabelName;
        String[] strArr = (String[]) list.toArray(new String[list.size()]);
        Arrays.sort(strArr);
        this.mlabelName = Arrays.asList(strArr);
        initializeViews();
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Intent intent = new Intent(this, (Class<?>) imsSettingPageActivity.class);
        TextView textView = (TextView) view;
        ArrayList<Setting> arrayList = new ArrayList<>();
        this.mSettingDisplay = arrayList;
        arrayList.add(getSetting(textView.getText().toString()));
        if (textView.getText().equals("mncmcc check")) {
            this.mSettingDisplay.add(getSetting("white list"));
            this.mSettingDisplay.add(getSetting(this.mSettingRule));
        } else if (textView.getText().equals("force_user_account_by_manual")) {
            this.mSettingDisplay.add(getSetting("manual_impi"));
            this.mSettingDisplay.add(getSetting("manual_impu"));
            this.mSettingDisplay.add(getSetting("manual_domain_name"));
        } else if (textView.getText().equals("operator_code")) {
            this.mSettingDisplay.add(getSetting("operator_code_textview"));
        }
        intent.putExtra("mSettingDisplay", this.mSettingDisplay);
        intent.putExtra("mSimType", this.mSimType);
        startActivity(intent);
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
    }
}
