package com.mediatek.engineermode;

import com.mediatek.engineermode.emsvr.AFMFunctionCallEx;
import com.mediatek.engineermode.emsvr.FunctionReturn;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.charset.Charset;

/* JADX INFO: loaded from: classes2.dex */
public class ShellExe {
    public static final String ERROR = "ERROR";
    private static final String OPERATION_ERROR_PREFIX = "#$ERROR^&";
    public static final int RESULT_EXCEPTION = -2;
    public static final int RESULT_FAIL = -1;
    public static final int RESULT_SUCCESS = 0;
    private static final String TAG = "ShellExe";
    private static StringBuilder sResultBuilder = new StringBuilder("");

    public static int execCommand(String str) throws IOException {
        return execCommand(new String[]{"sh", "-c", str});
    }

    public static int execCommand(String str, boolean z) throws IOException {
        return execCommand(new String[]{"sh", "-c", str}, z);
    }

    public static int execCommand(String[] strArr) throws IOException {
        return execCommandOnServer(strArr);
    }

    private static int execCommand(String[] strArr, boolean z) throws IOException {
        return z ? execCommandLocal(strArr) : execCommandOnServer(strArr);
    }

    private static int execCommandLocal(String[] strArr) throws IOException {
        int i;
        StringBuilder sb;
        Process processExec = Runtime.getRuntime().exec(strArr);
        BufferedReader bufferedReader = null;
        StringBuilder sb2 = sResultBuilder;
        sb2.delete(0, sb2.length());
        try {
            try {
                BufferedReader bufferedReader2 = new BufferedReader(new InputStreamReader(processExec.getInputStream(), Charset.defaultCharset()));
                if (processExec.waitFor() == 0) {
                    String line = bufferedReader2.readLine();
                    if (line != null) {
                        sResultBuilder.append(line);
                        while (true) {
                            String line2 = bufferedReader2.readLine();
                            if (line2 == null) {
                                break;
                            }
                            sResultBuilder.append('\n');
                            sResultBuilder.append(line2);
                        }
                    }
                    i = 0;
                } else {
                    Elog.e(TAG, "exit value = " + processExec.exitValue());
                    sResultBuilder.append("ERROR");
                    i = -1;
                }
                try {
                    bufferedReader2.close();
                } catch (IOException e) {
                    e = e;
                    sb = new StringBuilder();
                    sb.append("close reader in finally block exception: ");
                    sb.append(e.getMessage());
                    Elog.e(TAG, sb.toString());
                }
            } catch (Throwable th) {
                if (0 != 0) {
                    try {
                        bufferedReader.close();
                    } catch (IOException e2) {
                        Elog.e(TAG, "close reader in finally block exception: " + e2.getMessage());
                    }
                }
                throw th;
            }
        } catch (InterruptedException e3) {
            Elog.e(TAG, "exe shell command InterruptedException: " + e3.getMessage());
            sResultBuilder.append("ERROR");
            i = -2;
            if (0 != 0) {
                try {
                    bufferedReader.close();
                } catch (IOException e4) {
                    e = e4;
                    sb = new StringBuilder();
                    sb.append("close reader in finally block exception: ");
                    sb.append(e.getMessage());
                    Elog.e(TAG, sb.toString());
                }
            }
        }
        return i;
    }

    private static int execCommandOnServer(String[] strArr) throws IOException {
        FunctionReturn nextResult;
        if (strArr == null || strArr.length == 0) {
            throw new IllegalArgumentException("Invalid shell command to execute");
        }
        StringBuilder sb = new StringBuilder();
        int i = 0;
        if ("sh".equals(strArr[0]) || strArr[0].endsWith("/sh")) {
            if (strArr.length < 3) {
                throw new IllegalArgumentException("invalid or unknown cmd to execute");
            }
            i = 2;
        }
        while (i < strArr.length) {
            sb.append(strArr[i]);
            if (i < strArr.length - 1) {
                sb.append(" ");
            }
            i++;
        }
        String strTrim = sb.toString().trim();
        StringBuilder sb2 = sResultBuilder;
        sb2.delete(0, sb2.length());
        AFMFunctionCallEx aFMFunctionCallEx = new AFMFunctionCallEx();
        if (!aFMFunctionCallEx.startCallFunctionStringReturn(AFMFunctionCallEx.FUNCTION_EM_SHELL_CMD_EXECUTION)) {
            Elog.e(TAG, "Function call start fail");
            sResultBuilder.append("ERROR");
            return -1;
        }
        aFMFunctionCallEx.writeParamNo(1);
        aFMFunctionCallEx.writeParamString(strTrim);
        do {
            nextResult = aFMFunctionCallEx.getNextResult();
            if (nextResult.mReturnString != null && nextResult.mReturnString.length() > 0) {
                sResultBuilder.append(nextResult.mReturnString);
            }
        } while (nextResult.mReturnCode == 1);
        while (true) {
            int length = sResultBuilder.length();
            if (length <= 0 || sResultBuilder.charAt(length - 1) != '\n') {
                break;
            }
            sResultBuilder.delete(length - 1, length);
        }
        String string = sResultBuilder.toString();
        if (string == null || !string.startsWith(OPERATION_ERROR_PREFIX)) {
            return 0;
        }
        Elog.e(TAG, "error operation:" + string);
        sResultBuilder.delete(0, OPERATION_ERROR_PREFIX.length() + 1);
        return -1;
    }

    public static String getOutput() {
        return sResultBuilder.toString();
    }
}
