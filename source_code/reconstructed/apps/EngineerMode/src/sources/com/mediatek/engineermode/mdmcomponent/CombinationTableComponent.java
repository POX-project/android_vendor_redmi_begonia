package com.mediatek.engineermode.mdmcomponent;

import android.app.Activity;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AbsListView;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.TextView;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.R;
import java.util.AbstractMap;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;

/* JADX INFO: compiled from: MDMComponent.java */
/* JADX INFO: loaded from: classes.dex */
abstract class CombinationTableComponent extends MDMComponent {
    ArrayList<String> arrayTypeLabels;
    private int curTab;
    List<HashMap<String, TableInfoAdapter>> hmapAdapterList;
    List<LinkedHashMap<String, LinkedHashMap>> hmapLabelsList;
    List<HashMap<String, MdmLinearLayout>> hmapViewList;
    private int infoValid;
    LinearLayout layout;
    String[] logInfo;
    Activity mContext;
    ScrollView scrollView;
    private int tabCount;
    LinearLayout tabTatileLayout;
    List<String> tabTitleList;

    public CombinationTableComponent(Activity activity) {
        super(activity);
        this.hmapLabelsList = new ArrayList();
        this.hmapViewList = new ArrayList();
        this.hmapAdapterList = new ArrayList();
        this.tabTitleList = new ArrayList();
        this.tabCount = 0;
        this.curTab = 0;
        this.infoValid = 1;
        this.logInfo = new String[10];
        this.mContext = activity;
    }

    private int getCurTab() {
        return this.curTab;
    }

    private boolean isEmaptyStrArray(String[] strArr) {
        for (int i = 0; i < strArr.length; i++) {
            if (strArr[i] != null && !strArr[i].equals("")) {
                return false;
            }
        }
        return true;
    }

    private void setBtnAttribute(Button button, String str, int i, int i2, int i3) {
        if (button == null) {
            return;
        }
        button.setTextColor(i2 >= 0 ? i2 : -1);
        button.setTextSize(i3 > 16 ? i3 : 16.0f);
        button.setText(str);
        button.setTag(Integer.valueOf(i));
        button.setBackground(this.mContext.getResources().getDrawable(R.drawable.selector_button));
        button.setGravity(17);
        button.setOnClickListener(new View.OnClickListener() { // from class: com.mediatek.engineermode.mdmcomponent.CombinationTableComponent.1
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                CombinationTableComponent.this.setCurTab(((Integer) view.getTag()).intValue());
            }
        });
        button.setLayoutParams(new LinearLayout.LayoutParams(-2, -2, 1.0f));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setCurTab(int i) {
        this.curTab = i;
        for (int i2 = 0; i2 < this.tabCount; i2++) {
            for (String str : this.hmapViewList.get(i2).keySet()) {
                if (i2 == i) {
                    this.hmapViewList.get(i2).get(str).showView();
                    this.tabTatileLayout.findViewWithTag(Integer.valueOf(i2)).setSelected(true);
                } else {
                    this.hmapViewList.get(i2).get(str).hideView();
                    this.tabTatileLayout.findViewWithTag(Integer.valueOf(i2)).setSelected(false);
                }
            }
        }
    }

    void addData(String str, int i) {
        inithmapLabelsList(i, str);
        setHmapAdapterByLabel(str, i);
        this.hmapViewList.get(i).get(str).setAdapter(this.hmapAdapterList.get(i).get(str));
        this.hmapAdapterList.get(i).get(str).notifyDataSetChanged();
        this.hmapViewList.get(i).get(str).setListViewHeightBasedOnChildren();
    }

    void addDataByArray(String str, int i, String[] strArr) {
        if (isValidTabNum(i)) {
            if (this.hmapLabelsList.get(i) == null || this.hmapLabelsList.get(i).keySet().size() == 0) {
                inithmapLabelsList(i, str);
            }
            this.hmapAdapterList.get(i).get(str).getCount();
            this.hmapAdapterList.get(i).get(str).add(strArr);
            this.hmapAdapterList.get(i).get(str).notifyDataSetChanged();
            this.hmapViewList.get(i).get(str).setListViewHeightBasedOnChildren();
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void clearData() {
        resetHashMapKeyValues();
        for (int i = 0; i < getTabCount(); i++) {
            Iterator<String> it = this.hmapLabelsList.get(i).keySet().iterator();
            while (it.hasNext()) {
                clearData(it.next(), i);
            }
        }
    }

    void clearData(String str, int i) {
        if (isValidTabNum(i)) {
            if (this.hmapAdapterList.get(i).get(str) != null) {
                this.hmapAdapterList.get(i).get(str).clear();
            }
        } else {
            for (int i2 = 0; i2 < this.hmapLabelsList.size(); i2++) {
                if (this.hmapAdapterList.get(i2).get(str) != null) {
                    this.hmapAdapterList.get(i2).get(str).clear();
                }
            }
        }
    }

    void displayView(String str, int i, boolean z) {
        if (!isValidTabNum(i)) {
            for (int i2 = 0; i2 < this.tabCount; i2++) {
                if (z) {
                    this.hmapViewList.get(i2).get(str).showView();
                } else {
                    this.hmapViewList.get(i2).get(str).hideView();
                }
            }
            return;
        }
        Elog.d("EmInfo/MDMComponent", this.logInfo, "[ShowView] label:" + str + "," + z);
        if (!z || (isValidTabNum(getCurTab()) && getCurTab() != i)) {
            this.hmapViewList.get(i).get(str).hideView();
        } else {
            this.hmapViewList.get(i).get(str).showView();
        }
    }

    abstract ArrayList<String> getArrayTypeKey();

    abstract LinkedHashMap<String, LinkedHashMap> getHashMapLabels(int i);

    public int getTabCount() {
        return this.tabCount;
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    View getView() {
        this.layout.removeAllViews();
        this.tabTatileLayout.removeAllViews();
        if (!isInfoValid()) {
            setViewAsPlank();
            return this.scrollView;
        }
        setViewAsTable();
        setCurTab(0);
        return this.scrollView;
    }

    LinkedHashMap<String, String[]> initArrayHashMap(Object[] objArr) {
        LinkedHashMap<String, String[]> linkedHashMap = new LinkedHashMap<>();
        for (Object obj : objArr) {
            linkedHashMap.put((String) obj, null);
        }
        return linkedHashMap;
    }

    LinkedHashMap<String, String> initHashMap(Object[] objArr) {
        LinkedHashMap<String, String> linkedHashMap = new LinkedHashMap<>();
        for (Object obj : objArr) {
            linkedHashMap.put((String) obj, "");
        }
        return linkedHashMap;
    }

    void initHashMapList() {
        for (int i = 0; i < getTabCount(); i++) {
            if (this.hmapLabelsList.get(i) == null || this.hmapLabelsList.get(i).keySet().size() == 0) {
                this.hmapLabelsList.add(i, getHashMapLabels(i));
                this.hmapViewList.get(i).clear();
                this.hmapAdapterList.get(i).clear();
                for (String str : this.hmapLabelsList.get(i).keySet()) {
                    this.hmapAdapterList.get(i).put(str, new TableInfoAdapter(this.mContext));
                    this.hmapViewList.get(i).put(str, new MdmLinearLayout(this.mContext));
                }
            }
        }
    }

    void initHmapLabelsList() {
        if (this.hmapLabelsList == null) {
            this.hmapLabelsList = new ArrayList();
        }
        for (int i = 0; i < getTabCount(); i++) {
            if (this.hmapLabelsList.get(i) == null || this.hmapLabelsList.get(i).size() == 0) {
                this.hmapLabelsList.add(i, getHashMapLabels(i));
            }
        }
    }

    public void initTableComponent(String[] strArr) {
        Elog.d("EmInfo/MDMComponent", this.logInfo, "[initTableComponent]" + Arrays.asList(strArr).toString());
        this.tabCount = strArr.length;
        this.tabTitleList.clear();
        this.arrayTypeLabels = getArrayTypeKey();
        for (int i = 0; i < getTabCount(); i++) {
            this.tabTitleList.add(i, strArr[i]);
            this.hmapLabelsList.add(i, new LinkedHashMap<>());
            this.hmapViewList.add(i, new HashMap<>());
            this.hmapAdapterList.add(i, new HashMap<>());
        }
        initHashMapList();
        if (this.scrollView == null) {
            ScrollView scrollView = new ScrollView(this.mContext);
            this.scrollView = scrollView;
            scrollView.setLayoutParams(new ViewGroup.LayoutParams(-1, -1));
        }
        if (this.layout == null) {
            LinearLayout linearLayout = new LinearLayout(this.mContext);
            this.layout = linearLayout;
            linearLayout.setOrientation(1);
            this.layout.setLayoutParams(new ViewGroup.LayoutParams(-1, -2));
        }
        if (this.tabTatileLayout == null) {
            LinearLayout linearLayout2 = new LinearLayout(this.mContext);
            this.tabTatileLayout = linearLayout2;
            linearLayout2.setOrientation(0);
            this.tabTatileLayout.setLayoutParams(new ViewGroup.LayoutParams(-1, -2));
        }
    }

    void inithmapLabelsList(int i, String str) {
        if (this.hmapLabelsList.get(i) == null || this.hmapLabelsList.get(i).keySet().size() == 0 || this.hmapLabelsList.get(i).get(str) == null || this.hmapLabelsList.get(i).get(str).keySet().size() == 0) {
            this.hmapLabelsList.add(i, getHashMapLabels(i));
            Elog.d("EmInfo/MDMComponent", this.logInfo, "[inithmapLabelsList] tabNum:" + i + ",label:" + str + "List:" + this.hmapLabelsList.get(i));
        }
    }

    public boolean isInfoValid() {
        return this.infoValid == 1;
    }

    abstract boolean isLabelArrayType(String str);

    boolean isValidTabNum(int i) {
        return i < this.tabCount && i >= 0;
    }

    void notifyDataSetChanged(String str, int i) {
        if (isValidTabNum(i)) {
            if (this.hmapLabelsList.get(i) == null || this.hmapLabelsList.get(i).keySet().size() == 0) {
                inithmapLabelsList(i, str);
            }
            if (this.hmapAdapterList.get(i).get(str).getCount() < this.hmapLabelsList.get(i).get(str).size()) {
                this.hmapAdapterList.get(i).clear();
                setHmapAdapterByLabel(str, i);
            }
            this.hmapAdapterList.get(i).get(str).notifyDataSetChanged();
            this.hmapViewList.get(i).get(str).setListViewHeightBasedOnChildren();
        }
    }

    @Override // com.mediatek.engineermode.mdmcomponent.MDMComponent
    void removeView() {
        setInfoValid(1);
        resetView();
    }

    void resetHashMapKeyValues() {
        for (int i = 0; i < this.tabCount; i++) {
            for (String str : this.hmapLabelsList.get(i).keySet()) {
                inithmapLabelsList(i, str);
                new LinkedHashMap();
                AbstractMap abstractMapInitArrayHashMap = isLabelArrayType(str) ? initArrayHashMap(this.hmapLabelsList.get(i).get(str).keySet().toArray()) : initHashMap(this.hmapLabelsList.get(i).get(str).keySet().toArray());
                this.hmapLabelsList.get(i).get(str).clear();
                this.hmapLabelsList.get(i).get(str).putAll(abstractMapInitArrayHashMap);
            }
        }
    }

    void resetView() {
        LinearLayout linearLayout = this.layout;
        if (linearLayout != null && linearLayout.getChildCount() > 0) {
            this.layout.removeAllViews();
        }
        ScrollView scrollView = this.scrollView;
        if (scrollView != null && scrollView.getChildCount() > 0) {
            this.scrollView.removeAllViews();
        }
        for (int i = 0; i < this.hmapViewList.size(); i++) {
            if (this.hmapViewList.get(i) != null) {
                for (String str : this.hmapViewList.get(i).keySet()) {
                    this.hmapAdapterList.get(i).get(str).clear();
                    this.hmapViewList.get(i).get(str).setAdapter(null);
                }
            }
        }
    }

    LinkedHashMap<String, String> setHashMap(Object[] objArr, Object[] objArr2) {
        LinkedHashMap<String, String> linkedHashMap = new LinkedHashMap<>();
        if (objArr.length != objArr2.length) {
            return linkedHashMap;
        }
        for (int i = 0; i < objArr.length; i++) {
            linkedHashMap.put((String) objArr[i], objArr2[i].toString());
        }
        return linkedHashMap;
    }

    void setHashMapKeyArrays(String str, int i, LinkedHashMap<String, String[]> linkedHashMap) {
        inithmapLabelsList(i, str);
        this.hmapLabelsList.get(i).put(str, linkedHashMap);
    }

    void setHashMapKeyValues(String str, int i, String str2, Object obj) {
        inithmapLabelsList(i, str);
        if (!isLabelArrayType(str)) {
            this.hmapLabelsList.get(i).get(str).put(str2, String.valueOf(obj));
            Elog.d("EmInfo/MDMComponent", this.logInfo, "[setHashMapKeyValues]Label: " + str + ", tabNum: " + i + ":" + this.hmapLabelsList.get(i).get(str));
            return;
        }
        if (obj instanceof String[]) {
            this.hmapLabelsList.get(i).get(str).put(str2, (String[]) obj);
            Elog.d("EmInfo/MDMComponent", this.logInfo, "[setHashMapKeyValues] key: " + str2 + ",values:" + Arrays.toString((String[]) obj));
            return;
        }
        if (obj == null || obj.equals("")) {
            return;
        }
        this.hmapLabelsList.get(i).get(str).keySet().toArray(new String[this.hmapLabelsList.get(i).get(str).keySet().size()]);
        String[] strArr = (String[]) this.hmapLabelsList.get(i).get(str).get(str2);
        String[] strArr2 = (String[]) Arrays.copyOf(strArr, strArr.length + 1);
        strArr2[strArr.length] = obj.toString();
        this.hmapLabelsList.get(i).get(str).put(str2, strArr2);
        Elog.d("EmInfo/MDMComponent", this.logInfo, "[setHashMapKeyValues] key: " + str2 + ",values:" + Arrays.toString(strArr2));
    }

    void setHashMapKeyValues(String str, int i, String str2, String[] strArr) {
        inithmapLabelsList(i, str);
        this.hmapLabelsList.get(i).get(str).put(str2, strArr);
    }

    void setHashMapKeyValues(String str, int i, LinkedHashMap<String, String> linkedHashMap) {
        inithmapLabelsList(i, str);
        this.hmapLabelsList.get(i).put(str, linkedHashMap);
    }

    void setHashMapKeyValues(String str, int i, String[] strArr, Object[] objArr) {
        if (strArr.length != objArr.length) {
            return;
        }
        inithmapLabelsList(i, str);
        Elog.d("EmInfo/MDMComponent", this.logInfo, "[setHashMapKeyValues] tabNum: " + i + ",label:" + str + ", keys: " + Arrays.toString(strArr) + ", values:" + Arrays.toString(objArr));
        if (!isLabelArrayType(str)) {
            for (int i2 = 0; i2 < strArr.length; i2++) {
                this.hmapLabelsList.get(i).get(str).put(strArr[i2], objArr[i2] == null ? "" : objArr[i2].toString());
            }
            return;
        }
        for (int i3 = 0; i3 < strArr.length; i3++) {
            if (!this.hmapLabelsList.get(i).get(str).containsKey(strArr[i3]) || this.hmapLabelsList.get(i).get(str).get(strArr[i3]) == null) {
                this.hmapLabelsList.get(i).get(str).put(strArr[i3], new String[]{objArr[i3].toString()});
            } else {
                String[] strArr2 = (String[]) this.hmapLabelsList.get(i).get(str).get(strArr[i3]);
                String[] strArr3 = (String[]) Arrays.copyOf(strArr2, strArr2.length + 1);
                strArr3[strArr2.length] = objArr[i3].toString();
                this.hmapLabelsList.get(i).get(str).put(strArr[i3], strArr3);
            }
        }
    }

    void setHmapAdapterByLabel(String str, int i) {
        if (isValidTabNum(i)) {
            Elog.d("EmInfo/MDMComponent", this.logInfo, "[setHmapAdapterByLabel] label: " + str + ",tabNum: " + i);
            this.hmapAdapterList.get(i).get(str).clear();
            String[] strArr = new String[this.hmapLabelsList.get(i).get(str).size()];
            this.hmapLabelsList.get(i).get(str).keySet().toArray(strArr);
            if (!this.arrayTypeLabels.contains(str)) {
                for (int i2 = 0; i2 < strArr.length; i2++) {
                    TableInfoAdapter tableInfoAdapter = this.hmapAdapterList.get(i).get(str);
                    String[] strArr2 = new String[2];
                    strArr2[0] = strArr[i2];
                    strArr2[1] = (String) (this.hmapLabelsList.get(i).get(str).get(strArr[i2]) == null ? "" : this.hmapLabelsList.get(i).get(str).get(strArr[i2]));
                    tableInfoAdapter.add(strArr2);
                }
                return;
            }
            ArrayList arrayList = new ArrayList();
            this.hmapAdapterList.get(i).get(str).add(strArr);
            int length = 0;
            for (String str2 : strArr) {
                Object obj = this.hmapLabelsList.get(i).get(str).get(str2);
                String[] strArr3 = new String[0];
                if (obj != null) {
                    strArr3 = obj instanceof String[] ? (String[]) obj : new String[]{obj.toString()};
                    length = strArr3.length > length ? strArr3.length : length;
                }
                arrayList.add(strArr3);
            }
            int i3 = 0;
            while (i3 < length) {
                String[] strArr4 = new String[strArr.length];
                int i4 = 0;
                while (i4 < strArr.length) {
                    strArr4[i4] = (i4 >= arrayList.size() || arrayList.get(i4) == null || i3 >= ((String[]) arrayList.get(i4)).length) ? "" : ((String[]) arrayList.get(i4))[i3];
                    i4++;
                }
                this.hmapAdapterList.get(i).get(str).add(strArr4);
                i3++;
            }
        }
    }

    public void setInfoValid(int i) {
        if (i != this.infoValid) {
            Elog.d("EmInfo/MDMComponent", "Utas Info Valid -> Current :" + i + ", Last: " + this.infoValid);
            if (i == 1) {
                setViewAsTable();
                setCurTab(this.curTab);
            } else {
                setViewAsPlank();
            }
        }
        this.infoValid = i;
    }

    public void setTabCount(int i) {
        this.tabCount = i;
    }

    public void setViewAsPlank() {
        resetView();
        TextView textView = new TextView(this.mContext);
        textView.setLayoutParams(new AbsListView.LayoutParams(-1, -2));
        textView.setPadding(20, 0, 20, 0);
        textView.setText("Use " + getName().replace("UTAS", "TAS"));
        textView.setTextSize(16.0f);
        this.scrollView.addView(textView);
    }

    public void setViewAsTable() {
        resetView();
        this.layout.addView(this.tabTatileLayout);
        for (int i = 0; i < this.tabCount; i++) {
            if (this.tabTatileLayout.getChildAt(i) == null) {
                Button button = new Button(this.mContext);
                setBtnAttribute(button, this.tabTitleList.get(i), i, -1, 16);
                this.tabTatileLayout.addView(button);
            }
            if (this.hmapLabelsList.get(i) != null) {
                for (String str : this.hmapLabelsList.get(i).keySet()) {
                    if (this.hmapAdapterList.get(i).get(str).getCount() == 0) {
                        setHmapAdapterByLabel(str, i);
                    }
                    this.hmapViewList.get(i).get(str).setAdapter(this.hmapAdapterList.get(i).get(str));
                    this.hmapAdapterList.get(i).get(str).notifyDataSetChanged();
                    this.hmapViewList.get(i).get(str).setListViewHeightBasedOnChildren();
                    if (this.hmapViewList.get(i).get(str).getParent() != null) {
                        ((ViewGroup) this.hmapViewList.get(i).get(str).getParent()).removeView(this.hmapViewList.get(i).get(str));
                    }
                    this.layout.addView(this.hmapViewList.get(i).get(str));
                }
            }
        }
        this.scrollView.removeAllViews();
        this.scrollView.addView(this.layout);
    }
}
