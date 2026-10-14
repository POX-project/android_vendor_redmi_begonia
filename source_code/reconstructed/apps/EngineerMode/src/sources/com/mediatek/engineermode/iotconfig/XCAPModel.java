package com.mediatek.engineermode.iotconfig;

/* JADX INFO: loaded from: classes.dex */
public class XCAPModel {
    private boolean configed;
    private String name;
    private boolean selected;
    private String type;
    private String value;

    public XCAPModel(String str, String str2) {
        this.selected = false;
        this.configed = false;
        this.value = "";
        this.name = str;
        this.type = str2;
        this.configed = false;
    }

    public XCAPModel(String str, String str2, String str3) {
        this.selected = false;
        this.configed = false;
        this.value = "";
        this.name = str;
        this.type = str3;
        this.value = str2;
    }

    public XCAPModel(String str, boolean z, String str2) {
        this.selected = false;
        this.configed = false;
        this.value = "";
        this.name = str;
        this.type = str2;
        this.selected = z;
        this.configed = true;
    }

    public XCAPModel(String str, boolean z, boolean z2, String str2) {
        this.selected = false;
        this.configed = false;
        this.value = "";
        this.name = str;
        this.type = str2;
        this.configed = z;
        this.selected = z2;
    }

    public String getName() {
        return this.name;
    }

    public String getType() {
        return this.type;
    }

    public String getValue() {
        if (this.type.equals(IotConfigConstant.BOOLEANTYPE)) {
            return this.selected ? "1" : "0";
        }
        return this.value;
    }

    public boolean isConfiged() {
        return this.configed;
    }

    public boolean isSelected() {
        return this.selected;
    }

    public void setConfiged(boolean z) {
        this.configed = z;
    }

    public void setName(String str) {
        this.name = str;
    }

    public void setSelected(boolean z) {
        this.selected = z;
        this.value = z ? "1" : "0";
    }

    public void setType(String str) {
        this.type = str;
    }

    public void setValue(String str) {
        this.value = str;
    }

    public String toString() {
        return "name=" + getName() + ";value=" + getValue() + ";type=" + getType();
    }
}
