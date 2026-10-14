package com.mediatek.engineermode.anttunerdebug;

/* JADX INFO: compiled from: AntTunerDebugBPI.java */
/* JADX INFO: loaded from: classes2.dex */
class BpiBinaryData {
    private String name;
    private boolean selected;
    private String value;

    public BpiBinaryData(String str) {
        this.selected = false;
        this.value = "";
        this.name = str;
        this.value = "";
    }

    public BpiBinaryData(String str, Object obj) {
        this.selected = false;
        this.value = "";
        this.name = str;
        if (obj != null) {
            this.value = obj.toString();
        }
    }

    public BpiBinaryData(String str, Object obj, boolean z) {
        this.selected = false;
        this.value = "";
        this.name = str;
        if (obj != null) {
            this.value = obj.toString();
        }
        this.selected = z;
    }

    public String getName() {
        return this.name;
    }

    public String getValue() {
        return this.value;
    }

    public boolean isSelected() {
        return this.selected;
    }

    public void setName(String str) {
        this.name = str;
    }

    public void setSelected(boolean z) {
        this.selected = z;
    }

    public void setValue(String str) {
        this.value = str;
    }

    public String toString() {
        return getName() + "," + getValue() + "," + isSelected();
    }
}
