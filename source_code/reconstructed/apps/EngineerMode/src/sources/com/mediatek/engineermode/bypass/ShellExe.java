package com.mediatek.engineermode.bypass;

import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.emsvr.AFMFunctionCallEx;
import com.mediatek.engineermode.emsvr.FunctionReturn;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public class ShellExe {
    public static final String ERROR = "ERROR";
    private static final String OPERATION_ERROR_PREFIX = "#$ERROR^&";
    public static final int RESULT_FAIL = -1;
    public static final int RESULT_SUCCESS = 0;
    private static final String TAG = "Bypass/ReadFile";
    private static StringBuilder sResultBuilder = new StringBuilder("");

    public static String getOutput() {
        return sResultBuilder.toString();
    }

    public static int readTextFile(int i) throws IOException {
        FunctionReturn nextResult;
        StringBuilder sb = sResultBuilder;
        sb.delete(0, sb.length());
        AFMFunctionCallEx aFMFunctionCallEx = new AFMFunctionCallEx();
        if (!aFMFunctionCallEx.startCallFunctionStringReturn(AFMFunctionCallEx.FUNCTION_EM_READ_USB_RAWBULK_FILE)) {
            Elog.e(TAG, "Function call start fail");
            sResultBuilder.append("ERROR");
            return -1;
        }
        aFMFunctionCallEx.writeParamNo(1);
        aFMFunctionCallEx.writeParamInt(i);
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
}
