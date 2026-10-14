package com.mediatek.aee;

import android.os.Process;
import android.os.SystemProperties;
import android.util.ArrayMap;
import android.util.Log;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.StringWriter;
import java.util.ArrayList;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes.dex */
public class ExceptionLogImpl extends ExceptionLog {
    public static final byte AEE_EXCEPTION_JNI = 1;
    public static final byte AEE_WARNING_JNI = 0;
    public static final String TAG = "AES";
    private static int[] mZygotePids = null;
    private final String SEND_NON_PROTECTED_BROADCAST = "Sending non-protected broadcast";
    private final String[] protectedBroadcastFilter = {"android.intent.action.CALL_EMERGENCY", "com.debug.loggerui.ADB_CMD", "com.mediatek.log2server.EXCEPTION_HAPPEND", "com.mediatek.omacp.capability.result", "com.mediatek.autounlock", "com.mtk.autotest.heartset.stop", "com.mtk.fts.ACTION", "com.android.systemui.demo", "ATG_MQTT_MqttService.pingSender"};
    private final String FILE_OBSERVER_NULL_PATH = "Unhandled exception in FileObserver com.android.server.BootReceiver";

    static {
        Log.i(TAG, "load Exception Log jni");
        System.loadLibrary("mediatek_exceptionlog");
    }

    private static native long SFMatter(long j, long j2);

    private static native void WDTMatter(long j);

    private static String getAllThreadStackTraces() {
        Map<Thread, StackTraceElement[]> allStackTraces = Thread.getAllStackTraces();
        StringWriter stringWriter = new StringWriter();
        try {
            for (Map.Entry<Thread, StackTraceElement[]> entry : allStackTraces.entrySet()) {
                StackTraceElement[] value = entry.getValue();
                Thread key = entry.getKey();
                StringBuilder sb = new StringBuilder();
                sb.append("\"");
                sb.append(key.getName());
                sb.append("\" ");
                sb.append(key.isDaemon() ? "daemon" : "");
                sb.append(" prio=");
                sb.append(key.getPriority());
                sb.append(" Thread id=");
                sb.append(key.getId());
                sb.append(" ");
                sb.append(key.getState());
                sb.append("\n");
                stringWriter.write(sb.toString());
                for (StackTraceElement stackTraceElement : value) {
                    stringWriter.write("\t" + stackTraceElement + "\n");
                }
                stringWriter.write("\n");
            }
            return stringWriter.toString();
        } catch (IOException e) {
            return "IOException";
        } catch (OutOfMemoryError e2) {
            return "java.lang.OutOfMemoryError";
        }
    }

    private static native boolean getNativeExceptionPidListImpl(int[] iArr);

    private static String getThreadStackTrace() {
        StringWriter stringWriter = new StringWriter();
        try {
            Thread threadCurrentThread = Thread.currentThread();
            StackTraceElement[] stackTrace = threadCurrentThread.getStackTrace();
            StringBuilder sb = new StringBuilder();
            sb.append("\"");
            sb.append(threadCurrentThread.getName());
            sb.append("\" ");
            sb.append(threadCurrentThread.isDaemon() ? "daemon" : "");
            sb.append(" prio=");
            sb.append(threadCurrentThread.getPriority());
            sb.append(" Thread id=");
            sb.append(threadCurrentThread.getId());
            sb.append(" ");
            sb.append(threadCurrentThread.getState());
            sb.append("\n");
            stringWriter.write(sb.toString());
            for (StackTraceElement stackTraceElement : stackTrace) {
                stringWriter.write("\t" + stackTraceElement + "\n");
            }
            stringWriter.write("\n");
            return stringWriter.toString();
        } catch (IOException e) {
            return "IOException";
        } catch (OutOfMemoryError e2) {
            return "java.lang.OutOfMemoryError";
        }
    }

    private boolean isSkipReportFromNullFilePath(String str) {
        return str.contains("Unhandled exception in FileObserver com.android.server.BootReceiver");
    }

    private boolean isSkipReportFromProtectedBroadcast(String str) {
        if (!str.contains("Sending non-protected broadcast")) {
            return false;
        }
        int i = 0;
        while (true) {
            String[] strArr = this.protectedBroadcastFilter;
            if (i >= strArr.length) {
                return false;
            }
            if (str.contains(strArr[i])) {
                return true;
            }
            i++;
        }
    }

    private boolean isSkipSystemWtfReport(String str) {
        return isSkipReportFromProtectedBroadcast(str) || isSkipReportFromNullFilePath(str);
    }

    private static native void report(String str, String str2, String str3, String str4, String str5, long j);

    private static native void switchFtraceImpl(int i);

    private static native void systemreportImpl(byte b, String str, String str2, String str3, String str4);

    public long SFMatterJava(long j, long j2) {
        return SFMatter(j, j2);
    }

    public void WDTMatterJava(long j) {
        WDTMatter(j);
    }

    public boolean getNativeExceptionPidList(int[] iArr) {
        return getNativeExceptionPidListImpl(iArr);
    }

    public void handle(String str, String str2, String str3) {
        boolean z;
        Log.w(TAG, "Exception Log handling...");
        if (str.startsWith("data_app") && !str2.contains("com.android.development") && SystemProperties.getInt("persist.vendor.mtk.aee.filter", 1) == 1) {
            Log.w(TAG, "Skipped - do not care third party apk");
            return;
        }
        String string = "";
        String str4 = "";
        long j = 0;
        String[] strArrSplit = str2.split("\n+");
        Pattern patternCompile = Pattern.compile("^Process:\\s+(.*)");
        Pattern patternCompile2 = Pattern.compile("^Package:\\s+(.*)");
        int length = strArrSplit.length;
        String strGroup = "";
        int i = 0;
        while (i < length) {
            String str5 = strArrSplit[i];
            String str6 = str4;
            Matcher matcher = patternCompile.matcher(str5);
            if (matcher.matches()) {
                strGroup = matcher.group(1);
            }
            Matcher matcher2 = patternCompile2.matcher(str5);
            if (matcher2.matches()) {
                StringBuilder sb = new StringBuilder();
                sb.append(string);
                z = true;
                sb.append(matcher2.group(1));
                sb.append("\n");
                string = sb.toString();
            } else {
                z = true;
            }
            i++;
            str4 = str6;
            j = j;
        }
        String str7 = string;
        long j2 = j;
        if (!str3.equals("")) {
            j2 = Long.parseLong(str3);
        }
        if (str.equals("system_server_wtf") && isSkipSystemWtfReport(str2)) {
            return;
        }
        report(strGroup, str7, str2, "Backtrace of all threads:\n\n", str, j2);
    }

    public boolean isJavaProcess(int i) {
        if (i <= 0) {
            return false;
        }
        if (mZygotePids == null) {
            mZygotePids = Process.getPidsForCommands(new String[]{"zygote64", "zygote"});
        }
        if (mZygotePids != null) {
            int parentPid = Process.getParentPid(i);
            for (int i2 : mZygotePids) {
                if (parentPid == i2) {
                    return true;
                }
            }
        }
        Log.w(TAG, "pid: " + i + " is not a Java process");
        return false;
    }

    /* JADX WARN: Code duplicated, block: B:121:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:124:? A[SYNTHETIC] */
    /* JADX WARN: Code duplicated, block: B:69:0x011e A[Catch: IOException -> 0x00fd, TRY_ENTER, TRY_LEAVE, TryCatch #10 {IOException -> 0x00fd, blocks: (B:69:0x011e, B:76:0x012f, B:50:0x00f9), top: B:91:0x000b }] */
    /* JADX WARN: Code duplicated, block: B:93:0x0138 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    public void readTransactionInfoFromFile(int i, ArrayList<Integer> arrayList) throws Throwable {
        Throwable th;
        Pattern patternCompile = Pattern.compile("outgoing transaction.+from.+to (\\d+):.+code.+");
        BufferedReader bufferedReader = null;
        try {
            try {
                try {
                    File file = new File("/sys/kernel/debug/binder/proc/" + Integer.toString(i));
                    try {
                        if (!file.exists()) {
                            StringBuilder sb = new StringBuilder();
                            sb.append("Filepath isn't exist: /d/binder/proc/");
                            sb.append(i);
                            Log.w(TAG, sb.toString());
                            if (0 != 0) {
                                try {
                                    bufferedReader.close();
                                    return;
                                } catch (IOException e) {
                                    Log.e(TAG, "IOException when close buffer reader:", e);
                                    return;
                                }
                            }
                            return;
                        }
                        ArrayMap arrayMap = new ArrayMap();
                        bufferedReader = new BufferedReader(new FileReader(file));
                        boolean z = false;
                        while (true) {
                            String line = bufferedReader.readLine();
                            if (line == null) {
                                break;
                            }
                            String strTrim = line.trim();
                            if (z) {
                                if (!strTrim.contains("outgoing transaction")) {
                                    if (strTrim.startsWith("node")) {
                                        break;
                                    }
                                } else {
                                    Matcher matcher = patternCompile.matcher(strTrim);
                                    if (matcher.find()) {
                                        Integer numValueOf = Integer.valueOf(matcher.group(1));
                                        int iIndexOfKey = arrayMap.indexOfKey(numValueOf);
                                        if (iIndexOfKey >= 0) {
                                            arrayMap.setValueAt(iIndexOfKey, Integer.valueOf(((Integer) arrayMap.valueAt(iIndexOfKey)).intValue() + 1));
                                        } else {
                                            arrayMap.put(numValueOf, 1);
                                        }
                                    }
                                }
                            } else if ("context binder".equals(strTrim)) {
                                z = true;
                            }
                        }
                        for (Map.Entry entry : arrayMap.entrySet()) {
                            if (((Integer) entry.getValue()).intValue() > 10) {
                                try {
                                    arrayList.add((Integer) entry.getKey());
                                } catch (FileNotFoundException e2) {
                                    e = e2;
                                } catch (IOException e3) {
                                    e = e3;
                                    Log.e(TAG, "IOException when gettting Binder. ", e);
                                    if (bufferedReader != null) {
                                        bufferedReader.close();
                                    }
                                    return;
                                }
                            }
                        }
                        bufferedReader.close();
                    } catch (FileNotFoundException e4) {
                        e = e4;
                    } catch (IOException e5) {
                        e = e5;
                        Log.e(TAG, "IOException when gettting Binder. ", e);
                        if (bufferedReader != null) {
                            bufferedReader.close();
                        }
                        return;
                    } catch (Throwable th2) {
                        th = th2;
                        th = th;
                        if (0 != 0) {
                            throw th;
                        }
                        try {
                            bufferedReader.close();
                            throw th;
                        } catch (IOException e6) {
                            Log.e(TAG, "IOException when close buffer reader:", e6);
                            throw th;
                        }
                    }
                } catch (Throwable th3) {
                    th = th3;
                    th = th;
                    if (0 != 0) {
                        throw th;
                    }
                    bufferedReader.close();
                    throw th;
                }
            } catch (FileNotFoundException e7) {
                e = e7;
            } catch (IOException e8) {
                e = e8;
            }
            Log.e(TAG, "FileNotFoundException", e);
            if (bufferedReader != null) {
                bufferedReader.close();
            }
        } catch (IOException e9) {
            Log.e(TAG, "IOException when close buffer reader:", e9);
        }
    }

    public void switchFtrace(int i) {
        switchFtraceImpl(i);
    }

    public void systemreport(byte b, String str, String str2, String str3) {
        systemreportImpl(b, str, getThreadStackTrace(), str2, str3);
    }
}
