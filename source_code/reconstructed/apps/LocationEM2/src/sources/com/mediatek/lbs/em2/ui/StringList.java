package com.mediatek.lbs.em2.ui;

import java.util.Iterator;
import java.util.Vector;

/* JADX INFO: loaded from: classes.dex */
public class StringList {
    private int mNum;
    private Vector<String> mStrList = new Vector<>();

    public StringList(int i) {
        this.mNum = 0;
        this.mNum = i;
    }

    public void add(String str) {
        if (this.mStrList.size() > this.mNum) {
            this.mStrList.remove(0);
        }
        this.mStrList.add(str);
    }

    public void clear() {
        this.mStrList.clear();
    }

    public String get() {
        String str = new String();
        Iterator<String> it = this.mStrList.iterator();
        while (it.hasNext()) {
            str = str + it.next();
        }
        return str;
    }

    public String toString() {
        String str = new String();
        Iterator<String> it = this.mStrList.iterator();
        while (it.hasNext()) {
            str = str + it.next();
        }
        return str;
    }
}
