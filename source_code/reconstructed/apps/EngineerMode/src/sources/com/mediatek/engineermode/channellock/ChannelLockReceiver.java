package com.mediatek.engineermode.channellock;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Message;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;

/* JADX INFO: loaded from: classes2.dex */
public class ChannelLockReceiver extends BroadcastReceiver {
    public static final String ACTION_CHANNELLOCK_CONFIG_CHANGE = "com.mediatek.channellock.ACTION_CONFIG_CHANGE";
    public static final String ACTION_CHANNELLOCK_CONFIG_QUERY = "com.mediatek.channellock.ACTION_CONFIG_QUERY";
    private static final String CMD_CONFIG_QUERY = "AT+EMMCHLCK?";
    public static final String EXTRAL_CHANNELLOCK_ARFCN = "ARFCN";
    public static final String EXTRAL_CHANNELLOCK_CELLID = "CELL_ID";
    public static final String EXTRAL_CHANNELLOCK_ENABLED = "Enabled";
    public static final String EXTRAL_CHANNELLOCK_GSM1900 = "GSM1900";
    public static final String EXTRAL_CHANNELLOCK_RAT = "RAT";
    public static final String EXTRAL_CHANNELLOCK_RESULT = "set.channellock.result";
    private static final int MSG_CHANNEL_LOCK = 7;
    private static final int MSG_QUERY_CHANNEL_LOCK = 8;
    private static final String TAG = "ChannelLockReceiver";
    private Context mContext;
    private int mChannelLockEnabled = 0;
    private int mChannelLockRat = 0;
    private int mChannelLockARFCN = 0;
    private int mChannelLockCellId = 0;
    private int mChannelLockGsm1900 = 0;
    private String mEMMCHLCKcommand = new String();
    private final Handler mATCmdHander = new Handler() { // from class: com.mediatek.engineermode.channellock.ChannelLockReceiver.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            Elog.d(ChannelLockReceiver.TAG, "handleMessage: " + message.what);
            AsyncResult asyncResult = (AsyncResult) message.obj;
            int i = message.what;
            if (i == 7) {
                if (asyncResult.exception == null) {
                    Elog.d(ChannelLockReceiver.TAG, "send MSG_CHANNEL_LOCK succeed");
                    return;
                } else {
                    Elog.e(ChannelLockReceiver.TAG, asyncResult.exception.getMessage());
                    Elog.d(ChannelLockReceiver.TAG, "send MSG_CHANNEL_LOCK failed");
                    return;
                }
            }
            if (i != 8) {
                return;
            }
            if (asyncResult.exception != null) {
                Elog.d(ChannelLockReceiver.TAG, "send AT+EMMCHLCK? failed");
                Elog.e(ChannelLockReceiver.TAG, asyncResult.exception.getMessage());
                return;
            }
            Elog.d(ChannelLockReceiver.TAG, "send AT+EMMCHLCK? succeed");
            String[] strArr = (String[]) asyncResult.result;
            String[] strArrSplit = null;
            Elog.d(ChannelLockReceiver.TAG, strArr[0]);
            try {
                strArrSplit = strArr[0].substring("+EMMCHLCK:".length()).replaceAll(" ", "").split(",");
            } catch (Exception e) {
                Elog.e(ChannelLockReceiver.TAG, "get the chekced label failed:" + e.getMessage());
            }
            for (int i2 = 0; strArrSplit != null && i2 < strArrSplit.length; i2++) {
                Elog.d(ChannelLockReceiver.TAG, "splited[" + i2 + "] = " + strArrSplit[i2]);
            }
        }
    };

    private void sendATCommand(String[] strArr, int i) {
        EmUtils.invokeOemRilRequestStringsEm(strArr, this.mATCmdHander.obtainMessage(i));
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        this.mContext = context;
        String action = intent.getAction();
        Elog.d(TAG, " -->onReceive(), action=" + action);
        if (!ACTION_CHANNELLOCK_CONFIG_CHANGE.equals(action)) {
            if (ACTION_CHANNELLOCK_CONFIG_QUERY.equals(action)) {
                sendATCommand(new String[]{CMD_CONFIG_QUERY, "+EMMCHLCK:"}, 8);
                return;
            }
            return;
        }
        this.mChannelLockEnabled = intent.getIntExtra(EXTRAL_CHANNELLOCK_ENABLED, -1);
        this.mChannelLockRat = intent.getIntExtra(EXTRAL_CHANNELLOCK_RAT, -1);
        this.mChannelLockARFCN = intent.getIntExtra(EXTRAL_CHANNELLOCK_ARFCN, -1);
        this.mChannelLockCellId = intent.getIntExtra(EXTRAL_CHANNELLOCK_CELLID, -1);
        this.mChannelLockGsm1900 = intent.getIntExtra(EXTRAL_CHANNELLOCK_GSM1900, -1);
        Elog.d(TAG, "mChannelLockEnabled = " + this.mChannelLockEnabled + ",mChannelLockRat = " + this.mChannelLockRat + ",mChannelLockARFCN = " + this.mChannelLockARFCN + ",mChannelLockCellId = " + this.mChannelLockCellId + ",mChannelLockGsm1900 = " + this.mChannelLockGsm1900);
        this.mEMMCHLCKcommand = "AT+EMMCHLCK=";
        int i = this.mChannelLockEnabled;
        if (i == 1) {
            this.mEMMCHLCKcommand += "1,";
            int i2 = this.mChannelLockRat;
            if (i2 == 0) {
                this.mEMMCHLCKcommand += "0,";
            } else if (i2 == 2) {
                this.mEMMCHLCKcommand += "2,";
            } else if (i2 == 7) {
                this.mEMMCHLCKcommand += "7,";
            } else {
                this.mEMMCHLCKcommand += ",";
                Elog.e(TAG, " Error mChannelLockRat = " + this.mChannelLockRat + ". Valid values 0, 2 and 7.");
            }
            int i3 = this.mChannelLockGsm1900;
            if (i3 == 1) {
                this.mEMMCHLCKcommand += "1,";
            } else if (i3 == 0) {
                this.mEMMCHLCKcommand += "0,";
            } else {
                this.mEMMCHLCKcommand += ",";
                Elog.e(TAG, " Error mChannelLockGsm1900 = " + this.mChannelLockGsm1900 + ". Valid values 0 and 1.");
            }
            if (this.mChannelLockARFCN != -1) {
                this.mEMMCHLCKcommand += String.valueOf(this.mChannelLockARFCN) + ",";
            } else {
                this.mEMMCHLCKcommand += ",";
                Elog.e(TAG, " Error mChannelLockARFCN = " + this.mChannelLockARFCN + ". Valid values 0 to 65535.");
            }
            int i4 = this.mChannelLockRat;
            if (i4 == 2 || i4 == 7) {
                if (this.mChannelLockCellId != -1) {
                    this.mEMMCHLCKcommand += String.valueOf(this.mChannelLockCellId);
                } else {
                    this.mEMMCHLCKcommand += ",";
                    Elog.e(TAG, " Error mChannelLockCellId = " + this.mChannelLockCellId + ". Valid values 0 to 65535.");
                }
            }
        } else if (i == 0) {
            this.mEMMCHLCKcommand += "0";
        } else {
            this.mEMMCHLCKcommand += ",";
            Elog.e(TAG, " Error mChannelLockEnabled = " + this.mChannelLockEnabled);
        }
        sendATCommand(new String[]{this.mEMMCHLCKcommand, ""}, 7);
    }
}
