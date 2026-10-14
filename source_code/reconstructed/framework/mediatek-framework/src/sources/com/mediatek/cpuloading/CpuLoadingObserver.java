package com.mediatek.cpuloading;

import android.os.StrictMode;
import android.os.UEventObserver;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

/* JADX INFO: loaded from: classes.dex */
public class CpuLoadingObserver {
    private static int DEFAULT_THRESHOLD = 85;
    private static int DEFAULT_WINDOW = 10;
    private static final String KEY = "over";
    private static final String OVER_THRESHOLD = "/proc/cpu_loading/overThrhld";
    private static final String POLLING_ON_OFF = "/proc/cpu_loading/onoff";
    private static final String POLLING_TIME_SECOND = "/proc/cpu_loading/poltime_secs";
    private static final String UEVENT_PATH = "DEVPATH=/devices/virtual/misc/cpu_loading";
    private Observer mObserver;
    private int mThreshold = DEFAULT_THRESHOLD;
    private int mWindow = DEFAULT_WINDOW;
    private MyUEventObserver mUEventObserver = new MyUEventObserver();

    private class MyUEventObserver extends UEventObserver {
        private MyUEventObserver() {
        }

        public void onUEvent(UEventObserver.UEvent uEvent) {
            String str = uEvent.get(CpuLoadingObserver.KEY);
            if (str == null || !str.equals("1")) {
                return;
            }
            CpuLoadingObserver.this.mObserver.onHighCpuLoading();
        }
    }

    public interface Observer {
        void onHighCpuLoading();
    }

    private void writeStringToFile(String str, String str2) {
        if (str == null) {
            return;
        }
        File file = new File(str);
        FileOutputStream fileOutputStream = null;
        StrictMode.ThreadPolicy threadPolicyAllowThreadDiskReads = StrictMode.allowThreadDiskReads();
        StrictMode.allowThreadDiskWrites();
        try {
            try {
                fileOutputStream = new FileOutputStream(file);
                fileOutputStream.write(str2.getBytes());
                fileOutputStream.flush();
                try {
                    fileOutputStream.close();
                } catch (IOException e) {
                    e = e;
                    e.printStackTrace();
                }
            } catch (IOException e2) {
                e2.printStackTrace();
                if (fileOutputStream != null) {
                    try {
                        fileOutputStream.close();
                    } catch (IOException e3) {
                        e = e3;
                        e.printStackTrace();
                    }
                }
            }
            StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskReads);
        } catch (Throwable th) {
            if (fileOutputStream != null) {
                try {
                    fileOutputStream.close();
                } catch (IOException e4) {
                    e4.printStackTrace();
                }
            }
            StrictMode.setThreadPolicy(threadPolicyAllowThreadDiskReads);
            throw th;
        }
    }

    public void setObserver(Observer observer) {
        this.mObserver = observer;
    }

    public void setThreshold(int i) {
        if (i <= 20 || i >= 100) {
            return;
        }
        this.mThreshold = i;
    }

    public void setWindow(int i) {
        if (i <= 0) {
            return;
        }
        this.mWindow = i;
    }

    public void startObserving() {
        writeStringToFile(POLLING_ON_OFF, "1");
        writeStringToFile(OVER_THRESHOLD, String.valueOf(this.mThreshold));
        writeStringToFile(POLLING_TIME_SECOND, String.valueOf(this.mWindow));
        this.mUEventObserver.startObserving(UEVENT_PATH);
    }

    public void stopObserving() {
        writeStringToFile(POLLING_ON_OFF, "0");
        this.mUEventObserver.stopObserving();
        this.mObserver = null;
    }
}
