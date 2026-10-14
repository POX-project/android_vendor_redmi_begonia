package com.mediatek.engineermode.hqanfc;

import android.content.Context;
import android.content.Intent;
import android.support.v4.content.LocalBroadcastManager;
import com.mediatek.engineermode.Elog;
import java.nio.ByteBuffer;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.BlockingQueue;

/* JADX INFO: loaded from: classes2.dex */
public class NfcCommandHandler {
    private static final int QUEUE_SIZE = 50;
    private static NfcCommandHandler sInstance;
    private BlockingQueue<NfcCommand> mCommandQueue = new ArrayBlockingQueue(50);
    private Thread mConsumerThr;
    private Context mContext;

    private class Consumer implements Runnable {
        private Consumer() {
        }

        /* JADX INFO: Infinite loop detected, blocks: 16, insns: 0 */
        @Override // java.lang.Runnable
        public void run() {
            while (true) {
                try {
                    Elog.w(NfcMainPage.TAG, "[NfcCommandHandler] Consumer take.");
                    if (NfcCommandHandler.this.mCommandQueue == null) {
                        Elog.w(NfcMainPage.TAG, "[NfcCommandHandler] mCommandQueue is null.");
                    } else {
                        NfcCommandHandler.this.processCommand((NfcCommand) NfcCommandHandler.this.mCommandQueue.take());
                    }
                } catch (InterruptedException e) {
                    Elog.w(NfcMainPage.TAG, "[NfcCommandHandler]Consumer InterruptedException: " + e.getMessage());
                    e.printStackTrace();
                }
            }
        }
    }

    public NfcCommandHandler(Context context) {
        Elog.w(NfcMainPage.TAG, "[NfcCommandHandler]NfcCommandHandler NfcCommandHandler()");
        this.mContext = context;
        Thread thread = new Thread(new Consumer());
        this.mConsumerThr = thread;
        thread.start();
    }

    public static synchronized NfcCommandHandler getInstance(Context context) {
        if (sInstance == null) {
            sInstance = new NfcCommandHandler(context);
        }
        return sInstance;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void processCommand(NfcCommand nfcCommand) {
        Intent intent = new Intent();
        intent.setAction(NfcCommand.ACTION_PRE + nfcCommand.getMessageType());
        ByteBuffer messageContent = nfcCommand.getMessageContent();
        intent.putExtra(NfcCommand.MESSAGE_CONTENT_KEY, messageContent == null ? null : messageContent.array());
        LocalBroadcastManager.getInstance(this.mContext).sendBroadcast(intent);
    }

    public void destroy() {
        this.mCommandQueue.clear();
        this.mConsumerThr.interrupt();
    }

    public boolean execute(NfcCommand nfcCommand) {
        Elog.w(NfcMainPage.TAG, "[NfcCommandHandler] execute()");
        try {
            this.mCommandQueue.put(nfcCommand);
            return true;
        } catch (InterruptedException e) {
            Elog.w(NfcMainPage.TAG, "[NfcCommandHandler]execute InterruptedException: " + e.getMessage());
            return false;
        }
    }
}
