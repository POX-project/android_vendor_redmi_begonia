package com.mediatek.engineermode;

import android.hardware.radio.V1_0.RadioResponseInfo;
import android.os.AsyncResult;
import android.os.Message;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.RIL;
import java.util.ArrayList;
import vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioResponse;

/* JADX INFO: loaded from: classes2.dex */
public class MtkRadioResponseBase extends IEmRadioResponse.Stub {
    public static final String TAG = "MtkRadioResponseBase";

    public MtkRadioResponseBase(RIL ril) {
    }

    public static byte[] arrayListToPrimitiveArray(ArrayList<Byte> arrayList) {
        byte[] bArr = new byte[arrayList.size()];
        for (int i = 0; i < bArr.length; i++) {
            bArr[i] = arrayList.get(i).byteValue();
        }
        return bArr;
    }

    private void responseStringArrayList(RIL ril, RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        String[] strArr = new String[arrayList.size()];
        for (int i = 0; i < arrayList.size(); i++) {
            strArr[i] = arrayList.get(i);
        }
        Message message = EmRadioHidl.mRequestList.get(radioResponseInfo.serial);
        if (message != null) {
            EmRadioHidl.mRequestList.remove(radioResponseInfo.serial);
        }
        if (radioResponseInfo.error == 0) {
            sendMessageResponse(message, strArr);
        } else {
            sendMessageResponseError(message, radioResponseInfo.error, strArr);
        }
    }

    private void sendMessageResponse(Message message, Object obj) {
        if (message != null) {
            AsyncResult.forMessage(message, obj, (Throwable) null);
            message.sendToTarget();
        }
    }

    private void sendMessageResponseError(Message message, int i, Object obj) {
        CommandException commandExceptionFromRilErrno = CommandException.fromRilErrno(i);
        if (message != null) {
            AsyncResult.forMessage(message, obj, commandExceptionFromRilErrno);
            message.sendToTarget();
        }
    }

    public void sendRequestRawResponse(RadioResponseInfo radioResponseInfo, ArrayList<Byte> arrayList) {
        Elog.d(TAG, "rsp data = ***");
        Message message = EmRadioHidl.mRequestList.get(radioResponseInfo.serial);
        if (message != null) {
            EmRadioHidl.mRequestList.remove(radioResponseInfo.serial);
        }
        if (radioResponseInfo.error == 0) {
            sendMessageResponse(message, arrayListToPrimitiveArray(arrayList));
        } else {
            sendMessageResponseError(message, radioResponseInfo.error, null);
        }
    }

    public void sendRequestStringsResponse(RadioResponseInfo radioResponseInfo, ArrayList<String> arrayList) {
        Elog.d(TAG, "rsp data = ***");
        responseStringArrayList(null, radioResponseInfo, arrayList);
    }
}
