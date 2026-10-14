package com.mediatek.ims.internal;

import android.content.Context;
import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.provider.ContactsContract;
import android.text.TextUtils;
import android.util.Log;
import com.mediatek.ims.ImsAdapter;
import com.mediatek.ims.ImsEventDispatcher;
import com.mediatek.ims.ImsService;
import com.mediatek.ims.ImsUtImpl;
import java.io.UnsupportedEncodingException;

/* JADX INFO: loaded from: classes.dex */
public class ImsSimservsDispatcher implements ImsEventDispatcher.VaEventDispatcher {
    private static final boolean DUMP_TRANSACTION = true;
    private static final int IMC_MAX_XUI_LEN = 512;
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, "user");
    private static final String TAG = "ImsSimservsDispatcher";
    private static ImsSimservsDispatcher sInstance;
    private Context mContext;
    private Handler mHandler;
    private Thread mHandlerThread;
    private ContactsContract.CommonDataKinds.Phone mPhone;
    private ImsAdapter.VaSocketIO mSocket;

    public ImsSimservsDispatcher(Context context, ImsAdapter.VaSocketIO vaSocketIO) {
        Thread thread = new Thread() { // from class: com.mediatek.ims.internal.ImsSimservsDispatcher.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                Looper.prepare();
                ImsSimservsDispatcher.this.mHandler = new Handler() { // from class: com.mediatek.ims.internal.ImsSimservsDispatcher.1.1
                    @Override // android.os.Handler
                    public void handleMessage(Message message) {
                        if (message.obj instanceof ImsAdapter.VaEvent) {
                            ImsAdapter.VaEvent vaEvent = (ImsAdapter.VaEvent) message.obj;
                            ImsSimservsDispatcher.log("ImsSimservsDispatcher receives request [" + message.what + ", " + vaEvent.getDataLen() + "]");
                            if (message.what == 900401) {
                                ImsSimservsDispatcher.this.handleXuiUpdate(vaEvent);
                                return;
                            }
                            ImsSimservsDispatcher.log("ImsSimservsDispatcher receives unhandled message [" + message.what + "]");
                        }
                    }
                };
                Looper.loop();
            }
        };
        this.mHandlerThread = thread;
        this.mContext = context;
        this.mSocket = vaSocketIO;
        sInstance = this;
        thread.start();
    }

    public static ImsSimservsDispatcher getInstance() {
        return sInstance;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void handleXuiUpdate(ImsAdapter.VaEvent vaEvent) {
        byte[] bytes = vaEvent.getBytes(vaEvent.getInt());
        String str = null;
        int phoneId = vaEvent.getPhoneId();
        if (bytes == null) {
            log("handleXuiUpdate event.getBytes() = null");
            return;
        }
        try {
            str = new String(bytes, "UTF-8");
        } catch (UnsupportedEncodingException e) {
            log("handleXuiUpdate() UnsupportedEncodingException occured");
        }
        log("handleXuiUpdate xui=" + ImsUtImpl.encryptString(str));
        ImsXuiManager.getInstance().setXui(phoneId, str);
        ImsService imsService = ImsService.getInstance(this.mContext);
        if (imsService != null) {
            imsService.updateSelfIdentity(phoneId);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void log(String str) {
        Log.d("@M_ImsSimservsDispatcher", "[ims] ImsSimservsDispatcher " + str);
    }

    private void sendVaEvent(ImsAdapter.VaEvent vaEvent) {
        log("ImsSimservsDispatcher send event [" + vaEvent.getRequestID() + ", " + vaEvent.getDataLen() + "]");
        this.mSocket.writeEvent(vaEvent);
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void disableRequest(int i) {
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void enableRequest(int i) {
    }

    public void setSocket(ImsAdapter.VaSocketIO vaSocketIO) {
        this.mSocket = vaSocketIO;
    }

    @Override // com.mediatek.ims.ImsEventDispatcher.VaEventDispatcher
    public void vaEventCallback(ImsAdapter.VaEvent vaEvent) {
        Handler handler = this.mHandler;
        handler.sendMessage(handler.obtainMessage(vaEvent.getRequestID(), vaEvent));
    }
}
