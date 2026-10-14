package com.mediatek.engineermode.emsvr;

import com.mediatek.engineermode.Elog;
import java.io.EOFException;
import java.io.IOException;

/* JADX INFO: loaded from: classes2.dex */
public class AFMFunctionCallEx {
    private static final String ERROR = "ERROR ";
    public static final int FUNCTION_EM_MD_LOG_FILTER_GEN = 10001;
    public static final int FUNCTION_EM_READ_USB_RAWBULK_FILE = 50001;
    public static final int FUNCTION_EM_RSC_WRITE = 20001;
    public static final int FUNCTION_EM_SHELL_CMD_EXECUTION = 80001;
    public static final int RESULT_CONTINUE = 1;
    public static final int RESULT_FIN = 0;
    public static final int RESULT_IO_ERR = -1;
    private static final String TAG = "EmSvr";
    private Client mSocket = null;

    private void endCallFunction() {
        this.mSocket.stopClient();
    }

    public FunctionReturn getNextResult() {
        FunctionReturn functionReturn = new FunctionReturn();
        try {
            functionReturn.mReturnString = this.mSocket.read();
            if (functionReturn.mReturnString.isEmpty()) {
                functionReturn.mReturnCode = 0;
                endCallFunction();
            } else {
                functionReturn.mReturnCode = 1;
            }
        } catch (EOFException e) {
            endCallFunction();
            functionReturn.mReturnCode = 0;
            functionReturn.mReturnString = "";
        } catch (IOException e2) {
            endCallFunction();
            functionReturn.mReturnCode = -1;
            functionReturn.mReturnString = ERROR + e2.getMessage();
        }
        return functionReturn;
    }

    public boolean startCallFunctionStringReturn(int i) {
        Client client = new Client();
        this.mSocket = client;
        client.startClient();
        try {
            this.mSocket.writeFunctionNo(String.valueOf(i));
            return true;
        } catch (IOException e) {
            Elog.e(TAG, "StartCallFunctionStringReturnEXP " + e.getMessage());
            return false;
        }
    }

    public boolean writeParamInt(int i) {
        try {
            this.mSocket.writeParamInt(i);
            return true;
        } catch (IOException e) {
            return false;
        }
    }

    public boolean writeParamNo(int i) {
        try {
            this.mSocket.writeParamNo(i);
            return true;
        } catch (IOException e) {
            return false;
        }
    }

    public boolean writeParamString(String str) {
        try {
            this.mSocket.writeParamString(str);
            return true;
        } catch (IOException e) {
            return false;
        }
    }
}
