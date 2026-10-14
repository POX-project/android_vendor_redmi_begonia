package com.mediatek.internal.telephony.rsu;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.Message;
import android.os.PowerManager;
import android.telephony.Rlog;
import android.text.TextUtils;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.uicc.IccUtils;
import com.mediatek.internal.telephony.MtkRIL;
import com.mediatek.internal.telephony.uicc.IMtkRsuSml;
import vendor.mediatek.hardware.mtkradioex.V2_0.RsuRequestInfo;

/* JADX INFO: loaded from: classes.dex */
public class Op08RsuSml15 extends IMtkRsuSml {
    private static final int EVENT_NEED_REBOOT = 0;
    private static final int OPERATOR_TMO = 3;
    private static final int RSU_MESSAGE_UNSOL_RSU_EVENT = 100;
    private static final String TAG = "Op08RsuSml15";
    private static final int USELESS_INT_VALUE = 0;
    private static final String USELESS_STRING_VALUE = "";
    private MtkRIL mCi;
    private Context mContext;
    private Handler mUrcHandler;
    private HandlerThread mWorker;

    private class RebootClickListener implements DialogInterface.OnClickListener {
        private RebootClickListener() {
        }

        @Override // android.content.DialogInterface.OnClickListener
        public void onClick(DialogInterface dialogInterface, int i) {
            Op08RsuSml15.this.logd("[RSU-SIMLOCK] Unlock Phone onClick");
            ((PowerManager) Op08RsuSml15.this.mContext.getSystemService("power")).reboot("Unlock state changed");
        }
    }

    public Op08RsuSml15(Context context, CommandsInterface[] commandsInterfaceArr) {
        this.mWorker = null;
        this.mUrcHandler = null;
        logi("initialize Op08RsuSml15: " + commandsInterfaceArr);
        this.mContext = context;
        this.mCi = (MtkRIL) commandsInterfaceArr[0];
        HandlerThread handlerThread = new HandlerThread("RsuWorker");
        this.mWorker = handlerThread;
        handlerThread.start();
        Handler handler = new Handler(this.mWorker.getLooper()) { // from class: com.mediatek.internal.telephony.rsu.Op08RsuSml15.1
            @Override // android.os.Handler
            public void handleMessage(Message message) {
                AsyncResult asyncResult = (AsyncResult) message.obj;
                Op08RsuSml15.this.logd("handleMessage what = " + message.what);
                if (message.what != 100) {
                    Op08RsuSml15.this.logi("Unknown urc or urc that need not handle");
                    return;
                }
                int[] iArr = (int[]) asyncResult.result;
                Op08RsuSml15.this.logd("RSU_MESSAGE_UNSOL_RSU_EVENT eventId = " + iArr[0]);
                int i = iArr[0];
                if ((((-65536) & i) >> 16) == 3) {
                    Op08RsuSml15.this.handleUnlockExpires((65535 & i) == 0);
                    return;
                }
                Op08RsuSml15.this.loge("unexpected eventId: " + i);
            }
        };
        this.mUrcHandler = handler;
        this.mCi.registerForRsuSimLockChanged(handler, 100, null);
    }

    private String bytes2Hexs(byte[] bArr) {
        return IccUtils.bytesToHexString(bArr);
    }

    private RsuRequestInfo constructRsuRequestInfoRilRequest(int i, int i2, int i3, String str, String str2) {
        RsuRequestInfo rsuRequestInfo = new RsuRequestInfo();
        rsuRequestInfo.opId = i;
        rsuRequestInfo.requestId = i2;
        rsuRequestInfo.requestType = i3;
        if (TextUtils.isEmpty(str)) {
            rsuRequestInfo.data = "";
        } else {
            rsuRequestInfo.data = str;
        }
        if (TextUtils.isEmpty(str2)) {
            rsuRequestInfo.reserveString1 = "";
        } else {
            rsuRequestInfo.reserveString1 = str2;
        }
        return rsuRequestInfo;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleUnlockExpires(boolean z) {
        String str;
        String str2;
        RebootClickListener rebootClickListener = null;
        if (z) {
            rebootClickListener = new RebootClickListener();
            str = new String("T-Mobile Temporary Device Unlock has Expired!");
            str2 = new String("You will need to reboot the device right now.");
        } else {
            str = new String("Unlock Expired!");
            str2 = new String("T-Mobile Temporary Device Unlock has Expired!");
        }
        AlertDialog alertDialogCreate = new AlertDialog.Builder(this.mContext).setTitle(str).setMessage(str2).setPositiveButton("OK", rebootClickListener).create();
        alertDialogCreate.setCancelable(false);
        alertDialogCreate.setCanceledOnTouchOutside(false);
        alertDialogCreate.getWindow().setType(2003);
        alertDialogCreate.show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void logd(String str) {
        Rlog.d(TAG, "[RSU-SIMLOCK] " + str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void loge(String str) {
        Rlog.e(TAG, "[RSU-SIMLOCK] " + str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void logi(String str) {
        Rlog.i(TAG, "[RSU-SIMLOCK] " + str);
    }

    @Override // com.mediatek.internal.telephony.uicc.IMtkRsuSml
    public void sleCreateUnlockRequest(byte[] bArr, Message message) {
        logd("sleCreateUnlockRequest data = " + bytes2Hexs(bArr) + " mCi = " + this.mCi);
        MtkRIL mtkRIL = this.mCi;
        if (mtkRIL != null) {
            mtkRIL.sendRsuRequest(constructRsuRequestInfoRilRequest(3, 0, 0, bytes2Hexs(bArr), ""), message);
        }
    }

    @Override // com.mediatek.internal.telephony.uicc.IMtkRsuSml
    public void sleGetAdapterConfig(byte[] bArr, Message message) {
        logd("sleGetAdapterConfig data = " + bytes2Hexs(bArr) + " mCi = " + this.mCi);
        MtkRIL mtkRIL = this.mCi;
        if (mtkRIL != null) {
            mtkRIL.sendRsuRequest(constructRsuRequestInfoRilRequest(3, 3, 0, bytes2Hexs(bArr), ""), message);
        }
    }

    @Override // com.mediatek.internal.telephony.uicc.IMtkRsuSml
    public void sleGetRegisterRequest(byte[] bArr, Message message) {
        logd("sleGetRegisterRequest data = " + bytes2Hexs(bArr) + " mCi = " + this.mCi);
        MtkRIL mtkRIL = this.mCi;
        if (mtkRIL != null) {
            mtkRIL.sendRsuRequest(constructRsuRequestInfoRilRequest(3, 1, 0, bytes2Hexs(bArr), ""), message);
        }
    }

    @Override // com.mediatek.internal.telephony.uicc.IMtkRsuSml
    public void sleGetSimlockStatus(byte[] bArr, Message message) {
        logd("sleGetSimlockStatus data = " + bytes2Hexs(bArr) + " mCi = " + this.mCi);
        MtkRIL mtkRIL = this.mCi;
        if (mtkRIL != null) {
            mtkRIL.sendRsuRequest(constructRsuRequestInfoRilRequest(3, 5, 0, bytes2Hexs(bArr), ""), message);
        }
    }

    @Override // com.mediatek.internal.telephony.uicc.IMtkRsuSml
    public void sleProcessMessage(byte[] bArr, byte[] bArr2, Message message) {
        logd("sleProcessMessage msg = " + bytes2Hexs(bArr) + " mCi = " + this.mCi);
        MtkRIL mtkRIL = this.mCi;
        if (mtkRIL != null) {
            mtkRIL.sendRsuRequest(constructRsuRequestInfoRilRequest(3, 2, 0, bytes2Hexs(bArr), bytes2Hexs(bArr2)), message);
        }
    }
}
