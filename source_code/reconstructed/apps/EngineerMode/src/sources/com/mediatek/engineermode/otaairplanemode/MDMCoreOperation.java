package com.mediatek.engineermode.otaairplanemode;

import android.content.Context;
import android.os.AsyncTask;
import android.os.Handler;
import android.os.Message;
import android.os.SystemProperties;
import android.os.SystemService;
import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.MONITOR_CMD_RESP;
import com.mediatek.mdml.MonitorCmdProxy;
import com.mediatek.mdml.MonitorTrapReceiver;
import com.mediatek.mdml.Msg;
import com.mediatek.mdml.PlainDataDecoder;
import com.mediatek.mdml.TRAP_TYPE;
import com.mediatek.mdml.TrapHandlerInterface;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.TimeoutException;

/* JADX INFO: loaded from: classes3.dex */
public class MDMCoreOperation {
    public static final int MDM_SERVICE_INIT = 0;
    public static final int MSG_UPDATE_UI_URC = 7;
    private static final String SERVICE_NAME = "md_monitor";
    public static final int SUBSCRIBE_DONE = 1;
    private static final String SZ_SERVER_NAME = "demo_receiver";
    private static final String TAG = "MDMCoreOperation";
    public static final int UNSUBSCRIBE_DONE = 4;
    public static final int UPDATE_INTERVAL = 50;
    private static final int WAIT_TIMEOUT = 3000;
    private static MDMCoreOperation single = null;
    private IMDMSeiviceInterface mMDMChangedListener;
    private MonitorCmdProxy m_cmdProxy;
    private PlainDataDecoder m_plainDataDecoder;
    private long m_sid;
    private MonitorTrapReceiver m_trapReceiver;
    public Handler mUpdateUiHandler = new Handler() { // from class: com.mediatek.engineermode.otaairplanemode.MDMCoreOperation.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what != 7) {
                return;
            }
            String strMsgInfo_getMsgName = MDMCoreOperation.this.m_plainDataDecoder.msgInfo_getMsgName(Integer.valueOf(message.arg1));
            Msg msg = (Msg) message.obj;
            if (msg != null) {
                MDMCoreOperation.this.mMDMChangedListener.onUpdateMDMData(strMsgInfo_getMsgName, msg);
            } else {
                Elog.e(MDMCoreOperation.TAG, "msgObj is null");
            }
        }
    };
    private int mSimTypeShow = 0;
    private List<MdmBaseComponent> mComponents = null;
    private List<Long> mCheckedEmInteger = new ArrayList();

    private class DemoHandler implements TrapHandlerInterface {
        private DemoHandler() {
        }

        @Override // com.mediatek.mdml.TrapHandlerInterface
        public void ProcessTrap(long j, TRAP_TYPE trap_type, int i, byte[] bArr, int i2) {
            Message messageObtainMessage = MDMCoreOperation.this.mUpdateUiHandler.obtainMessage();
            messageObtainMessage.what = 7;
            int intFromByte = (int) Utils.getIntFromByte(bArr, i2 + 6, 2);
            Msg msgMsgInfo_getMsg = MDMCoreOperation.this.m_plainDataDecoder.msgInfo_getMsg(bArr, i2);
            if (msgMsgInfo_getMsg == null || msgMsgInfo_getMsg.getSimIdx() != MDMCoreOperation.this.mSimTypeShow + 1) {
                Elog.d(MDMCoreOperation.TAG, "msg is null in ProcessTrap");
                return;
            }
            messageObtainMessage.arg1 = intFromByte;
            messageObtainMessage.obj = msgMsgInfo_getMsg;
            MDMCoreOperation.this.mUpdateUiHandler.sendMessageDelayed(messageObtainMessage, 50L);
        }
    }

    public interface IMDMSeiviceInterface {
        void onUpdateMDMData(String str, Msg msg);

        void onUpdateMDMStatus(int i);
    }

    private class LoadingTask extends AsyncTask<Context, Void, Boolean> {
        private LoadingTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Boolean doInBackground(Context... contextArr) {
            Elog.d(MDMCoreOperation.TAG, "before InitMDML");
            MDMCoreOperation.this.StartMDLService();
            MDMCoreOperation.this.InitMDML(contextArr[0]);
            Elog.d(MDMCoreOperation.TAG, "after InitMDML");
            MDMCoreOperation.this.InitDecoder(contextArr[0]);
            Elog.d(MDMCoreOperation.TAG, "after InitDecoder");
            return true;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Boolean bool) {
            Elog.d(MDMCoreOperation.TAG, "LoadingTask done");
            MDMCoreOperation.this.mMDMChangedListener.onUpdateMDMStatus(0);
        }
    }

    private class SubscribeTask extends AsyncTask<Void, Void, Boolean> {
        private SubscribeTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Boolean doInBackground(Void... voidArr) {
            MDMCoreOperation.this.subscribeTrap();
            return true;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Boolean bool) {
            if (bool.booleanValue()) {
                Elog.d(MDMCoreOperation.TAG, "onSubscribeTrap done");
                MDMCoreOperation.this.mMDMChangedListener.onUpdateMDMStatus(1);
            }
        }
    }

    private class UnSubscribeTask extends AsyncTask<Void, Void, Boolean> {
        private UnSubscribeTask() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public Boolean doInBackground(Void... voidArr) {
            MDMCoreOperation.this.unSubscribeTrap();
            return true;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(Boolean bool) {
            Elog.d(MDMCoreOperation.TAG, "onUnSubscribeTrap done");
            MDMCoreOperation.this.mMDMChangedListener.onUpdateMDMStatus(4);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void InitDecoder(Context context) {
        try {
            this.m_plainDataDecoder = PlainDataDecoder.getInstance(null, context);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void InitMDML(Context context) {
        MonitorCmdProxy monitorCmdProxy = new MonitorCmdProxy(context);
        this.m_cmdProxy = monitorCmdProxy;
        long jOnCreateSession = monitorCmdProxy.onCreateSession();
        this.m_sid = jOnCreateSession;
        MonitorTrapReceiver monitorTrapReceiver = new MonitorTrapReceiver(jOnCreateSession, SZ_SERVER_NAME);
        this.m_trapReceiver = monitorTrapReceiver;
        monitorTrapReceiver.SetTrapHandler(new DemoHandler());
        this.m_cmdProxy.onSetTrapReceiver(this.m_sid, SZ_SERVER_NAME);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void StartMDLService() {
        if (SystemService.isRunning(SERVICE_NAME)) {
            return;
        }
        Elog.v(TAG, "start md_monitor prop");
        SystemProperties.set("ctl.start", SERVICE_NAME);
        try {
            SystemService.waitForState(SERVICE_NAME, SystemService.State.RUNNING, 3000L);
        } catch (TimeoutException e) {
            e.printStackTrace();
        }
        if (SystemService.isRunning(SERVICE_NAME)) {
            return;
        }
        Elog.e(TAG, "start md_monitor failed time out");
    }

    public static synchronized MDMCoreOperation getInstance() {
        if (single == null) {
            single = new MDMCoreOperation();
        }
        return single;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void subscribeTrap() {
        this.mCheckedEmInteger.clear();
        Iterator<MdmBaseComponent> it = this.mComponents.iterator();
        while (it.hasNext()) {
            String[] emComponentName = it.next().getEmComponentName();
            for (int i = 0; i < emComponentName.length; i++) {
                Integer numMsgInfo_getMsgID = this.m_plainDataDecoder.msgInfo_getMsgID(emComponentName[i]);
                if (numMsgInfo_getMsgID != null) {
                    long jLongValue = numMsgInfo_getMsgID.longValue();
                    if (!this.mCheckedEmInteger.contains(Long.valueOf(jLongValue))) {
                        this.mCheckedEmInteger.add(Long.valueOf(jLongValue));
                        Elog.d(TAG, "onSubscribeTrap msg Name = " + emComponentName[i]);
                    }
                } else {
                    Elog.e(TAG, "The msgid is not support, msgName = " + emComponentName[i]);
                }
            }
        }
        Long[] lArr = (Long[]) this.mCheckedEmInteger.toArray(new Long[this.mCheckedEmInteger.size()]);
        Elog.d(TAG, "onSubscribeTrap msg id = " + Arrays.toString(lArr));
        this.m_cmdProxy.onSubscribeMultiTrap(this.m_sid, TRAP_TYPE.TRAP_TYPE_EM, toPrimitives(lArr));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void unSubscribeTrap() {
        Elog.d(TAG, "Before unSubscribeTrap..");
        Long[] lArr = (Long[]) this.mCheckedEmInteger.toArray(new Long[this.mCheckedEmInteger.size()]);
        Elog.d(TAG, "unSubscribeTrap msg id = " + Arrays.toString(lArr));
        this.m_cmdProxy.onUnsubscribeMultiTrap(this.m_sid, TRAP_TYPE.TRAP_TYPE_EM, toPrimitives(lArr));
        Elog.d(TAG, "onDisableTrap..");
        if (MONITOR_CMD_RESP.MONITOR_CMD_RESP_SUCCESS != this.m_cmdProxy.onDisableTrap(this.m_sid)) {
            Elog.e(TAG, "Disable Trap fail");
            return;
        }
        Elog.d(TAG, "Disable Trap succeed");
        SystemProperties.set("ctl.stop", SERVICE_NAME);
        Elog.d(TAG, "Disable mdm monitor");
    }

    public int getFieldValue(Msg msg, String str) {
        return (int) com.mediatek.engineermode.mdmcomponent.Utils.getIntFromByte(msg.getFieldValue(str));
    }

    public int getFieldValue(Msg msg, String str, boolean z) {
        return !z ? getFieldValue(msg, str) : (int) com.mediatek.engineermode.mdmcomponent.Utils.getIntFromByte(msg.getFieldValue(str), true);
    }

    public List<MdmBaseComponent> getSelectedComponents() {
        return this.mComponents;
    }

    public void mdmInitialize(Context context) {
        new LoadingTask().execute(context);
    }

    public void mdmParametersSeting(List<MdmBaseComponent> list, int i) {
        this.mComponents = list;
        this.mSimTypeShow = i;
    }

    public boolean mdmlClosing() {
        if (MONITOR_CMD_RESP.MONITOR_CMD_RESP_SUCCESS != this.m_cmdProxy.onCloseSession(this.m_sid)) {
            Elog.e(TAG, "Close Session fail");
            return false;
        }
        Elog.d(TAG, "Close Session succeed");
        return true;
    }

    public void mdmlEnableSubscribe() {
        try {
            this.m_cmdProxy.onEnableTrap(this.m_sid);
        } catch (Exception e) {
            Elog.e(TAG, "MdmCoreOperation.m_cmdProxy.onEnableTrap failed ");
        }
    }

    public void mdmlSubscribe() {
        new SubscribeTask().execute(new Void[0]);
    }

    public void mdmlUnSubscribe() {
        new UnSubscribeTask().execute(new Void[0]);
    }

    public void setOnMDMChangedListener(IMDMSeiviceInterface iMDMSeiviceInterface) {
        this.mMDMChangedListener = iMDMSeiviceInterface;
    }

    public long[] toPrimitives(Long... lArr) {
        long[] jArr = new long[lArr.length];
        for (int i = 0; i < lArr.length; i++) {
            jArr[i] = lArr[i].longValue();
        }
        return jArr;
    }
}
