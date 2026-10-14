package com.mediatek.internal.telephony;

import android.content.Context;
import android.net.LocalServerSocket;
import android.net.LocalSocket;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import com.android.internal.telephony.CommandException;
import com.android.internal.telephony.CommandsInterface;
import com.android.internal.telephony.SubscriptionController;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.charset.StandardCharsets;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes.dex */
public class MtkEmbmsAdaptor {
    private static final int MSG_ID_EVENT_IND = 2;
    private static final int MSG_ID_EVENT_REQUEST = 0;
    private static final int MSG_ID_EVENT_RESPONSE = 1;
    private static final String TAG = "MtkEmbmsAdaptor";
    private static MtkEmbmsAdaptor sInstance = null;
    private Context mContext;
    private MtkEmbmsAdaptEventHandler mEventHandler;
    private SubscriptionController mSubscriptionController;

    public class ConnectionHandler implements Runnable {
        private MtkEmbmsAdaptEventHandler mEventHandler;
        private LocalSocket mSocket;

        public ConnectionHandler(LocalSocket localSocket, MtkEmbmsAdaptEventHandler mtkEmbmsAdaptEventHandler) {
            this.mSocket = localSocket;
            this.mEventHandler = mtkEmbmsAdaptEventHandler;
        }

        @Override // java.lang.Runnable
        public void run() {
            Rlog.i(MtkEmbmsAdaptor.TAG, "New connection: " + this.mSocket.toString());
            try {
                MtkEmbmsAdaptIoThread mtkEmbmsAdaptIoThread = MtkEmbmsAdaptor.this.new MtkEmbmsAdaptIoThread(ServerTask.HOST_NAME, this.mSocket.getInputStream(), this.mSocket.getOutputStream(), this.mEventHandler);
                this.mEventHandler.setDataStream(mtkEmbmsAdaptIoThread);
                mtkEmbmsAdaptIoThread.start();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }

    public class MtkEmbmsAdaptEventHandler extends Handler {
        private MtkEmbmsAdaptIoThread mAdaptorIoThread = null;
        private CommandsInterface[] mCis;
        private Context mContext;

        public MtkEmbmsAdaptEventHandler() {
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void setDataStream(MtkEmbmsAdaptIoThread mtkEmbmsAdaptIoThread) {
            this.mAdaptorIoThread = mtkEmbmsAdaptIoThread;
            Rlog.d(MtkEmbmsAdaptor.TAG, "MtkEmbmsAdaptEventHandler setDataStream done.");
        }

        /* JADX INFO: Access modifiers changed from: private */
        public void setRil(Context context, CommandsInterface[] commandsInterfaceArr) {
            this.mContext = context;
            this.mCis = commandsInterfaceArr;
            Rlog.d(MtkEmbmsAdaptor.TAG, "MtkEmbmsAdaptEventHandler setRil done.");
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Rlog.d(MtkEmbmsAdaptor.TAG, "handleMessage: " + MtkEmbmsAdaptor.this.messageToString(message) + " = " + message);
            int i = message.what;
            if (i == 0) {
                String str = (String) message.obj;
                Rlog.i(MtkEmbmsAdaptor.TAG, "MSG_ID_EVENT_REQUEST data: " + str);
                int defaultDataSubId = MtkEmbmsAdaptor.this.mSubscriptionController.getDefaultDataSubId();
                int slotIndex = -1;
                if (defaultDataSubId == -1) {
                    Rlog.e(MtkEmbmsAdaptor.TAG, "getDefaultDataSubId fail: " + defaultDataSubId);
                } else {
                    slotIndex = MtkEmbmsAdaptor.this.mSubscriptionController.getSlotIndex(defaultDataSubId);
                }
                if (SubscriptionManager.isValidSlotIndex(slotIndex)) {
                    this.mCis[slotIndex].sendEmbmsAtCommand(str, obtainMessage(1, Integer.valueOf(slotIndex)));
                    return;
                }
                Rlog.e(MtkEmbmsAdaptor.TAG, "inValidSlotIndex:" + slotIndex);
                sendFailureCmd();
                return;
            }
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                AsyncResult asyncResult = (AsyncResult) message.obj;
                ((Integer) asyncResult.userObj).intValue();
                String str2 = (String) asyncResult.result;
                Rlog.i(MtkEmbmsAdaptor.TAG, "MSG_ID_EVENT_IND data: " + str2);
                sendCommand(str2);
                return;
            }
            AsyncResult asyncResult2 = (AsyncResult) message.obj;
            ((Integer) asyncResult2.userObj).intValue();
            String str3 = (String) asyncResult2.result;
            Rlog.i(MtkEmbmsAdaptor.TAG, "MSG_ID_EVENT_RESPONSE data: " + str3);
            if (!(asyncResult2.exception instanceof CommandException) || asyncResult2.exception.getCommandError() != CommandException.Error.RADIO_NOT_AVAILABLE) {
                if (str3 != null) {
                    sendCommand(str3);
                    return;
                } else {
                    sendFailureCmd();
                    return;
                }
            }
            Rlog.e(MtkEmbmsAdaptor.TAG, "MSG_ID_EVENT_RESPONSE exception: " + asyncResult2.exception.getCommandError());
            sendFailureCmd();
        }

        public void sendCommand(String str) {
            MtkEmbmsAdaptIoThread mtkEmbmsAdaptIoThread = this.mAdaptorIoThread;
            if (mtkEmbmsAdaptIoThread != null) {
                mtkEmbmsAdaptIoThread.sendCommand(str);
            } else {
                Rlog.e(MtkEmbmsAdaptor.TAG, "sendCommand fail!! mAdaptorIoThread is null!");
            }
        }

        public void sendFailureCmd() {
            sendCommand(String.format("ERROR\n", new Object[0]));
        }
    }

    class MtkEmbmsAdaptIoThread extends Thread {
        private static final int MAX_DATA_LENGTH = 4096;
        private MtkEmbmsAdaptEventHandler mEventHandler;
        private InputStream mInput;
        private String mName;
        private OutputStream mOutput;
        private byte[] readBuffer;
        private boolean mIsContinue = true;
        private final Object mOutputLock = new Object();

        public MtkEmbmsAdaptIoThread(String str, InputStream inputStream, OutputStream outputStream, MtkEmbmsAdaptEventHandler mtkEmbmsAdaptEventHandler) {
            this.mName = "";
            this.mInput = null;
            this.mOutput = null;
            this.mEventHandler = null;
            this.readBuffer = null;
            this.mName = str;
            this.mInput = inputStream;
            this.mOutput = outputStream;
            this.mEventHandler = mtkEmbmsAdaptEventHandler;
            Rlog.i(MtkEmbmsAdaptor.TAG, "MtkEmbmsAdaptIoThread constructor is called.");
            this.readBuffer = new byte[4096];
        }

        protected void handleInput(String str) {
            Rlog.d(MtkEmbmsAdaptor.TAG, "process input: RCV <-(" + str + "),length:" + str.length());
            MtkEmbmsAdaptEventHandler mtkEmbmsAdaptEventHandler = this.mEventHandler;
            mtkEmbmsAdaptEventHandler.sendMessage(mtkEmbmsAdaptEventHandler.obtainMessage(0, str.trim()));
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            Rlog.i(MtkEmbmsAdaptor.TAG, "MtkEmbmsAdaptIoThread running.");
            while (this.mIsContinue) {
                try {
                    try {
                        int i = this.mInput.read(this.readBuffer, 0, 4096);
                        if (i < 0) {
                            Rlog.e(MtkEmbmsAdaptor.TAG, "readEvent(), fail to read and throw exception");
                            return;
                        } else if (i > 0) {
                            try {
                                handleInput(new String(this.readBuffer, 0, i));
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                        }
                    } catch (Exception e2) {
                        Rlog.e(MtkEmbmsAdaptor.TAG, "MtkEmbmsAdaptIoThread Exception.");
                        e2.printStackTrace();
                    }
                } catch (IOException e3) {
                    Rlog.e(MtkEmbmsAdaptor.TAG, "MtkEmbmsAdaptIoThread IOException.");
                    e3.printStackTrace();
                    Rlog.e(MtkEmbmsAdaptor.TAG, "Socket disconnected.");
                    terminate();
                }
            }
        }

        public void sendCommand(String str) {
            Rlog.d(MtkEmbmsAdaptor.TAG, "SND -> (" + str + ")");
            synchronized (this.mOutputLock) {
                if (this.mOutput == null) {
                    Rlog.e(MtkEmbmsAdaptor.TAG, "missing SIM output stream");
                } else {
                    try {
                        this.mOutput.write(str.getBytes(StandardCharsets.UTF_8));
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                }
            }
        }

        public void terminate() {
            Rlog.i(MtkEmbmsAdaptor.TAG, "MtkEmbmsAdaptIoThread terminate.");
            this.mIsContinue = false;
        }
    }

    public class ServerTask {
        public static final String HOST_NAME = "/dev/socket/embmsd";

        public ServerTask() {
        }

        public void listenConnection(MtkEmbmsAdaptEventHandler mtkEmbmsAdaptEventHandler) {
            Rlog.i(MtkEmbmsAdaptor.TAG, "listenConnection() - start");
            LocalServerSocket localServerSocket = null;
            ExecutorService executorServiceNewCachedThreadPool = Executors.newCachedThreadPool();
            try {
                try {
                    try {
                        localServerSocket = new LocalServerSocket(HOST_NAME);
                        while (true) {
                            LocalSocket localSocketAccept = localServerSocket.accept();
                            int uid = localSocketAccept.getPeerCredentials().getUid();
                            String nameForUid = MtkEmbmsAdaptor.this.mContext.getPackageManager().getNameForUid(uid);
                            Rlog.i(MtkEmbmsAdaptor.TAG, "client's uid = " + uid + " ,packagename = " + nameForUid);
                            if (MtkEmbmsUtils.getInstance().isCertifiedMiddleware(MtkEmbmsAdaptor.this.mContext.getPackageManager().getPackageInfo(nameForUid, 134217728).signingInfo.getApkContentsSigners())) {
                                Rlog.d(MtkEmbmsAdaptor.TAG, "There is a client is accepted: " + localSocketAccept.toString());
                                executorServiceNewCachedThreadPool.execute(MtkEmbmsAdaptor.this.new ConnectionHandler(localSocketAccept, mtkEmbmsAdaptEventHandler));
                            } else {
                                Rlog.d(MtkEmbmsAdaptor.TAG, "The client is not certified " + localSocketAccept.toString());
                            }
                        }
                    } catch (IOException e) {
                        e.printStackTrace();
                        Rlog.i(MtkEmbmsAdaptor.TAG, "listenConnection() - end");
                    }
                } catch (IOException e2) {
                    Rlog.e(MtkEmbmsAdaptor.TAG, "listenConnection catch IOException");
                    e2.printStackTrace();
                    Rlog.d(MtkEmbmsAdaptor.TAG, "listenConnection finally!!");
                    if (executorServiceNewCachedThreadPool != null) {
                        executorServiceNewCachedThreadPool.shutdown();
                    }
                    if (localServerSocket != null) {
                        localServerSocket.close();
                    }
                    Rlog.i(MtkEmbmsAdaptor.TAG, "listenConnection() - end");
                } catch (Exception e3) {
                    Rlog.e(MtkEmbmsAdaptor.TAG, "listenConnection catch Exception");
                    e3.printStackTrace();
                    Rlog.d(MtkEmbmsAdaptor.TAG, "listenConnection finally!!");
                    if (executorServiceNewCachedThreadPool != null) {
                        executorServiceNewCachedThreadPool.shutdown();
                    }
                    if (localServerSocket != null) {
                        localServerSocket.close();
                    }
                    Rlog.i(MtkEmbmsAdaptor.TAG, "listenConnection() - end");
                }
            } catch (Throwable th) {
                Rlog.d(MtkEmbmsAdaptor.TAG, "listenConnection finally!!");
                if (executorServiceNewCachedThreadPool != null) {
                    executorServiceNewCachedThreadPool.shutdown();
                }
                if (localServerSocket != null) {
                    try {
                        localServerSocket.close();
                    } catch (IOException e4) {
                        e4.printStackTrace();
                    }
                }
                throw th;
            }
        }
    }

    /* JADX WARN: Type inference failed for: r1v3, types: [com.mediatek.internal.telephony.MtkEmbmsAdaptor$1] */
    private MtkEmbmsAdaptor(Context context, CommandsInterface[] commandsInterfaceArr) {
        this.mEventHandler = null;
        this.mContext = null;
        Rlog.i(TAG, "construtor 2 parameter is called - start");
        this.mContext = context;
        MtkEmbmsAdaptEventHandler mtkEmbmsAdaptEventHandler = new MtkEmbmsAdaptEventHandler();
        this.mEventHandler = mtkEmbmsAdaptEventHandler;
        mtkEmbmsAdaptEventHandler.setRil(context, commandsInterfaceArr);
        this.mSubscriptionController = SubscriptionController.getInstance();
        new Thread() { // from class: com.mediatek.internal.telephony.MtkEmbmsAdaptor.1
            @Override // java.lang.Thread, java.lang.Runnable
            public void run() {
                MtkEmbmsAdaptor.this.new ServerTask().listenConnection(MtkEmbmsAdaptor.this.mEventHandler);
            }
        }.start();
        int phoneCount = TelephonyManager.getDefault().getPhoneCount();
        for (int i = 0; i < phoneCount; i++) {
            ((MtkRIL) commandsInterfaceArr[i]).setAtInfoNotification(this.mEventHandler, 2, Integer.valueOf(i));
        }
        Rlog.i(TAG, "construtor is called - end");
    }

    public static MtkEmbmsAdaptor getDefault(Context context, CommandsInterface[] commandsInterfaceArr) {
        Rlog.d(TAG, "getDefault()");
        if (sInstance == null) {
            sInstance = new MtkEmbmsAdaptor(context, commandsInterfaceArr);
        }
        return sInstance;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String messageToString(Message message) {
        int i = message.what;
        if (i == 0) {
            return "MSG_ID_EVENT_REQUEST";
        }
        if (i != 1) {
            return i != 2 ? "UNKNOWN" : "MSG_ID_EVENT_IND";
        }
        return "MSG_ID_EVENT_RESPONSE";
    }
}
