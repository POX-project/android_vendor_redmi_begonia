package com.mediatek.engineermode;

import android.os.AsyncResult;
import android.os.Message;
import com.android.internal.telephony.RIL;
import java.util.ArrayList;
import java.util.List;
import vendor.mediatek.hardware.mtkradioex.V2_0.IEmRadioIndication;

/* JADX INFO: loaded from: classes2.dex */
public class MtkRadioIndication extends IEmRadioIndication.Stub {
    public static final String TAG = "MtkRadioIndication";

    public MtkRadioIndication(RIL ril) {
    }

    public static byte[] arrayListToPrimitiveArray(List<Byte> list) {
        byte[] bArr = new byte[list.size()];
        for (int i = 0; i < bArr.length; i++) {
            bArr[i] = list.get(i).byteValue();
        }
        return bArr;
    }

    public static int[] arrayListToPrimitiveArrayInt(List<Integer> list) {
        int[] iArr = new int[list.size()];
        for (int i = 0; i < iArr.length; i++) {
            iArr[i] = list.get(i).intValue();
        }
        return iArr;
    }

    public static String[] arrayListToPrimitiveArrayString(List<String> list) {
        String[] strArr = new String[list.size()];
        for (int i = 0; i < strArr.length; i++) {
            strArr[i] = list.get(i);
        }
        return strArr;
    }

    private void sendMessageResponse(Message message, Object obj) {
        try {
            AsyncResult.forMessage(message, obj, (Throwable) null);
            message.sendToTarget();
            Elog.d(TAG, "msg send");
        } catch (Exception e) {
            Elog.e(TAG, "sendMessageResponse: " + e.getMessage());
        }
    }

    public void networkInfoInd(int i, ArrayList<String> arrayList) {
        String[] strArrArrayListToPrimitiveArrayString = arrayListToPrimitiveArrayString(arrayList);
        if (EmRadioHidl.mRadioIndicationType == 1) {
            sendMessageResponse(EmRadioHidl.mHandler.obtainMessage(EmRadioHidl.mWhat), strArrArrayListToPrimitiveArrayString);
        } else {
            Elog.e(TAG, "networkInfoInd not send to app");
        }
    }

    public void oemHookRaw(int i, ArrayList<Byte> arrayList) {
        byte[] bArrArrayListToPrimitiveArray = arrayListToPrimitiveArray(arrayList);
        Elog.d(TAG, "oemHookRaw:" + new String(bArrArrayListToPrimitiveArray));
        if (EmRadioHidl.mRadioIndicationType == 0) {
            sendMessageResponse(EmRadioHidl.mHandler.obtainMessage(EmRadioHidl.mWhat), bArrArrayListToPrimitiveArray);
        } else {
            Elog.e(TAG, "oemHookRaw not send to app");
        }
    }

    public void onTxPowerIndication(int i, ArrayList<Integer> arrayList) {
        int[] iArrArrayListToPrimitiveArrayInt = arrayListToPrimitiveArrayInt(arrayList);
        Elog.d(TAG, "onTxPowerIndication: " + arrayList.toString());
        if (EmRadioHidl.mRadioIndicationType == 2) {
            sendMessageResponse(EmRadioHidl.mHandler.obtainMessage(EmRadioHidl.mWhat), iArrArrayListToPrimitiveArrayInt);
        } else {
            Elog.e(TAG, "onTxPowerIndication not send to app");
        }
    }
}
