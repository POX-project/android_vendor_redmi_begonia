package com.mediatek.engineermode.boot;

import android.app.Service;
import android.content.Intent;
import android.os.Handler;
import android.os.IBinder;
import android.os.Message;
import com.mediatek.engineermode.Elog;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes2.dex */
public class EmBootStartService extends Service {
    private static final String KEY_REQ_START_SERV = "req_start_serv";
    private static final int MSG_CHECK_STOP_SERVICE = 111;
    private static final String TAG = "BootStartService";
    private static Map<String, IBootServiceHandler> sStartReqHandlerMap = new HashMap();
    private Handler mMainHandler = new Handler() { // from class: com.mediatek.engineermode.boot.EmBootStartService.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 111) {
                return;
            }
            synchronized (EmBootStartService.class) {
                Elog.d(EmBootStartService.TAG, "size: " + EmBootStartService.sStartReqHandlerMap.size());
                if (EmBootStartService.sStartReqHandlerMap.size() == 0) {
                    EmBootStartService.this.stopSelf();
                }
            }
        }
    };

    private int onHandleRequest(String str) {
        IBootServiceHandler iBootServiceHandler = sStartReqHandlerMap.get(str);
        if (iBootServiceHandler == null) {
            return 100;
        }
        return iBootServiceHandler.handleStartRequest(this);
    }

    private void stopStartedService(IBootServiceHandler iBootServiceHandler) {
        if (iBootServiceHandler != null) {
            String canonicalName = iBootServiceHandler.getClass().getCanonicalName();
            synchronized (EmBootStartService.class) {
                sStartReqHandlerMap.remove(canonicalName);
            }
        }
        this.mMainHandler.sendEmptyMessage(111);
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        if (intent == null) {
            return 2;
        }
        String stringExtra = intent.getStringExtra(KEY_REQ_START_SERV);
        if (onHandleRequest(stringExtra) == 1) {
            return 2;
        }
        stopStartedService(sStartReqHandlerMap.get(stringExtra));
        return 2;
    }
}
