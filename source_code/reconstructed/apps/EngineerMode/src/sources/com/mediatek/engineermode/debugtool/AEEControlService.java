package com.mediatek.engineermode.debugtool;

import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;
import android.widget.Toast;
import com.mediatek.engineermode.Elog;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class AEEControlService extends Service {
    protected static final String COMMAND_CLEAN_DATA = "rm -r /data/core/ /data/anr";
    protected static final String COMMAND_CLEAR_DAL = "aee -c dal";
    private static final String TAG = "AEEControlService/Debugutils";
    private final IBinder mBinder = new LocalBinder();
    protected Map<String, String> mCommandMap;

    public class LocalBinder extends Binder {
        public LocalBinder() {
        }

        AEEControlService getService() {
            return AEEControlService.this;
        }
    }

    private static Map<String, String> buildCommandList(String... strArr) {
        HashMap map = new HashMap();
        for (String str : strArr) {
            String[] strArrSplit = str.split("#");
            map.put(strArrSplit[0], strArrSplit[1]);
        }
        return map;
    }

    private static StringBuffer systemexec(String str) {
        StringBuffer stringBuffer = new StringBuffer();
        try {
            Process processExec = Runtime.getRuntime().exec(str);
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(processExec.getInputStream()));
            new String();
            while (true) {
                String line = bufferedReader.readLine();
                if (line == null) {
                    break;
                }
                stringBuffer.append(line + "\n");
            }
            Elog.d(TAG, stringBuffer.toString());
            processExec.waitFor();
            bufferedReader.close();
        } catch (IOException e) {
            e.printStackTrace();
            Elog.e(TAG, "Operation failed.");
        } catch (InterruptedException e2) {
            e2.printStackTrace();
            Elog.e(TAG, "Operation failed.");
        }
        return stringBuffer;
    }

    public void changeAEEMode(String str) {
        String str2 = this.mCommandMap.get(str);
        if (str2 != null) {
            systemexec(str2);
        }
    }

    public void cleanData() {
        String str = this.mCommandMap.get("AEECleanData");
        if (str != null) {
            systemexec(str);
        }
        Elog.i(TAG, "Device /data partition cleaned up.");
        Toast.makeText(this, "Device /data partition cleaned up.", 0).show();
    }

    public void clearDAL() {
        String str = this.mCommandMap.get("AEEClearDAL");
        if (str != null) {
            systemexec(str);
        }
        Elog.d(TAG, "Device AEE red screen cleared.");
    }

    public void dalSetting(String str) {
        String str2 = this.mCommandMap.get(str);
        if (str2 != null) {
            systemexec(str2);
        }
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return this.mBinder;
    }

    @Override // android.app.Service
    public void onCreate() {
        this.mCommandMap = buildCommandList("AEECleanData#rm -r /data/core /data/anr /data/tombstones", "AEEClearDAL#aee -c dal", "MediatekEngineer#aee -m 1", "MediatekUser#aee -m 2", "CustomerEngineer#aee -m 3", "CustomerUser#aee -m 4", "EnableDAL#aee -s on", "DisableDAL#aee -s off");
    }

    @Override // android.app.Service
    public void onDestroy() {
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        Elog.i("AEEControlService", "Received start id " + i2 + ": " + intent);
        return 1;
    }
}
