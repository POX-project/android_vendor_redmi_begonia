package com.mediatek.internal.telephony.uicc;

import android.os.Message;
import android.telephony.Rlog;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.uicc.CsimFileHandler;
import com.android.internal.telephony.uicc.UiccCardApplication;

/* JADX INFO: loaded from: classes.dex */
public final class MtkCsimFileHandler extends CsimFileHandler implements MtkIccConstants {
    static final String LOG_TAG = "MtkCsimFH";
    MtkIccFileHandler mMtkIccFh;

    public MtkCsimFileHandler(UiccCardApplication uiccCardApplication, String str, CommandsInterface commandsInterface) {
        super(uiccCardApplication, str, commandsInterface);
        this.mMtkIccFh = null;
        this.mMtkIccFh = new MtkIccFileHandler(uiccCardApplication, str, commandsInterface);
    }

    protected String getCommonIccEFPath(int i) {
        logd("getCommonIccEFPath : " + i);
        if (i != 28645) {
            return super.getCommonIccEFPath(i);
        }
        return null;
    }

    protected String getEFPath(int i) {
        logd("GetEFPath : " + i);
        return i != 28533 ? super.getEFPath(i) : "3F007FFF";
    }

    public void loadEFLinearFixedAll(int i, int i2, Message message) {
        this.mMtkIccFh.loadEFLinearFixedAllByMode(i, i2, message);
    }

    public void loadEFLinearFixedAll(int i, Message message, boolean z) {
        this.mMtkIccFh.loadEFLinearFixedAllByPath(i, message, z);
    }

    public void loadEFTransparent(int i, String str, Message message) {
        this.mMtkIccFh.loadEFTransparent(i, str, message);
    }

    protected void logd(String str) {
        Rlog.d(LOG_TAG, str);
    }

    protected void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    public void readEFLinearFixed(int i, int i2, int i3, Message message) {
        this.mMtkIccFh.readEFLinearFixed(i, i2, i3, message);
    }

    public void selectEFFile(int i, Message message) {
        this.mMtkIccFh.selectEFFile(i, message);
    }

    public void updateEFTransparent(int i, String str, byte[] bArr, Message message) {
        this.mMtkIccFh.updateEFTransparent(i, str, bArr, message);
    }
}
