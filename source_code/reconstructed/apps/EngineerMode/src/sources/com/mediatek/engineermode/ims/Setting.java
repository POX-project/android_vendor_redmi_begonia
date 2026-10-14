package com.mediatek.engineermode.ims;

import java.io.Serializable;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes2.dex */
public class Setting implements Serializable {
    public String defaultValue;
    public String label;
    public int type = 0;
    public ArrayList<String> entries = new ArrayList<>();
    public ArrayList<Integer> values = new ArrayList<>();
    public String suffix = "";

    public String getDefaultValue() {
        return this.defaultValue;
    }

    public ArrayList<String> getEntries() {
        return this.entries;
    }

    public String getLabel() {
        return this.label;
    }

    public String getSuffix() {
        return this.suffix;
    }

    public int getType() {
        return this.type;
    }

    public ArrayList<Integer> getValues() {
        return this.values;
    }

    public void setDefaultValue(String str) {
        this.defaultValue = str;
    }

    public void setEntries(ArrayList<String> arrayList) {
        this.entries = arrayList;
    }

    public void setLabel(String str) {
        this.label = str;
    }

    public void setSuffix(String str) {
        this.suffix = str;
    }

    public void setType(int i) {
        this.type = i;
    }

    public void setValues(ArrayList<Integer> arrayList) {
        this.values = arrayList;
    }
}
