package com.mediatek.engineermode.otaairplanemode;

import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.Msg;

/* JADX INFO: loaded from: classes3.dex */
class MdmBaseComponent {
    private static final String TAG = "MdmBaseComponent";
    private String[] emComponentName = null;

    MdmBaseComponent() {
    }

    public String[] getEmComponentName() {
        return this.emComponentName;
    }

    public boolean hasEmType(String str) {
        String[] emComponentName = getEmComponentName();
        if (emComponentName == null) {
            return false;
        }
        for (String str2 : emComponentName) {
            if (str2.equals(str)) {
                return true;
            }
        }
        return false;
    }

    public void setEmComponentName(String[] strArr) {
        this.emComponentName = strArr;
    }

    public void update(String str, Msg msg) {
        Elog.d(TAG, "update = " + str);
    }
}
