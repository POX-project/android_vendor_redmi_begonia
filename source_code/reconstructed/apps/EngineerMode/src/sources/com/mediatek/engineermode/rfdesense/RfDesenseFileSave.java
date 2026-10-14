package com.mediatek.engineermode.rfdesense;

import android.content.Context;
import android.os.Environment;
import com.mediatek.engineermode.Elog;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;

/* JADX INFO: loaded from: classes3.dex */
public class RfDesenseFileSave {
    static String RfdesenseFiletName = null;
    private static final String TAG = "RfDesense/FileSave";
    private static SimpleDateFormat mCurrectTime = null;
    static final String mEventLogSavePath = "/rfdesense";

    private static String getCurrectTime() {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd-HH-mm-ss-SS");
        mCurrectTime = simpleDateFormat;
        return simpleDateFormat.format(new Date());
    }

    public static void saveRatTestResult(Context context, String str) {
        try {
            saveToSDCard(context, mEventLogSavePath, RfdesenseFiletName, str);
        } catch (Exception e) {
            e.printStackTrace();
        }
        Elog.d(TAG, RfdesenseFiletName + " saved");
    }

    private static void saveToSDCard(Context context, String str, String str2, String str3) throws IOException {
        String str4 = Environment.getExternalStorageDirectory().getPath() + str;
        File file = new File(str4);
        if (!file.exists()) {
            file.mkdir();
        }
        File file2 = new File(str4, str2);
        FileOutputStream fileOutputStream = new FileOutputStream(file2);
        fileOutputStream.write(str3.getBytes());
        fileOutputStream.close();
        new SingleMediaScanner(context, file2);
    }

    public static void setRfdesenseFiletName() {
        RfdesenseFiletName = getCurrectTime() + "_rfdesenseTx.txt";
    }
}
