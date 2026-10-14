package com.mediatek.engineermode;

import android.app.Activity;
import android.app.ProgressDialog;
import android.os.AsyncResult;
import android.os.CountDownTimer;
import android.os.Handler;
import android.os.Message;

/* JADX INFO: loaded from: classes2.dex */
public class RadioStateManager {
    public static final int DIALOG_WAIT_REBOOT = 1001;
    public static final int MSG_RADIO_STATE_CHANGED = 2001;
    public static final String TAG = "RadioStateManager";
    public static final int WAIT_TIME = 30;
    private Activity mActivity;
    private final Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.RadioStateManager.2
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            AsyncResult asyncResult = (AsyncResult) message.obj;
            if (message.what != 2001) {
                return;
            }
            int[] iArr = (int[]) asyncResult.result;
            if (iArr[0] == 1) {
                Elog.v(RadioStateManager.TAG, "RADIO_POWER_ON");
                if (RadioStateManager.this.mTimer != null) {
                    RadioStateManager.this.mTimer.cancel();
                    RadioStateManager.this.mTimer = null;
                }
                if (RadioStateManager.this.mResetMdDialog != null) {
                    RadioStateManager.this.mResetMdDialog.dismiss();
                }
                if (RadioStateManager.this.mRadioListener != null) {
                    RadioStateManager.this.mRadioListener.onRadioPowerOn();
                    return;
                }
                return;
            }
            if (iArr[0] != 0) {
                if (iArr[0] == 2) {
                    Elog.v(RadioStateManager.TAG, "RADIO_POWER_UNAVAILABLE");
                }
            } else if (RadioStateManager.this.mResetMdDialog == null || !RadioStateManager.this.mResetMdDialog.isShowing()) {
                if (RadioStateManager.this.mTimer != null) {
                    RadioStateManager.this.mTimer.cancel();
                    RadioStateManager.this.mTimer = null;
                }
                Elog.v(RadioStateManager.TAG, "RADIO_POWER_OFF");
                if (RadioStateManager.this.mRadioListener != null) {
                    RadioStateManager.this.mRadioListener.onRadioPowerOff();
                }
            }
        }
    };
    private RadioListener mRadioListener;
    private ProgressDialog mResetMdDialog;
    private CountDownTimer mTimer;

    public interface RadioListener {
        void onRadioPowerOff();

        void onRadioPowerOn();
    }

    public RadioStateManager(Activity activity) {
        this.mActivity = activity;
    }

    private void startTimer() {
        if (this.mTimer != null) {
            Elog.d(TAG, "start timer again, cancel it");
            this.mTimer.cancel();
            this.mTimer = null;
        }
        CountDownTimer countDownTimer = new CountDownTimer(30000L, 1000L) { // from class: com.mediatek.engineermode.RadioStateManager.1
            @Override // android.os.CountDownTimer
            public void onFinish() {
                Elog.d(RadioStateManager.TAG, "CountDownTimer finish");
                if (RadioStateManager.this.mResetMdDialog != null) {
                    RadioStateManager.this.mResetMdDialog.dismiss();
                }
                if (EmUtils.ifAirplaneModeEnabled()) {
                    Elog.d(RadioStateManager.TAG, "[CountDownTimer onFinish]it is in Airplane Mode");
                    if (RadioStateManager.this.mRadioListener != null) {
                        RadioStateManager.this.mRadioListener.onRadioPowerOff();
                    }
                } else if (RadioStateManager.this.mRadioListener != null) {
                    RadioStateManager.this.mRadioListener.onRadioPowerOn();
                }
                RadioStateManager.this.mTimer = null;
            }

            @Override // android.os.CountDownTimer
            public void onTick(long j) {
            }
        };
        this.mTimer = countDownTimer;
        countDownTimer.start();
        Elog.d(TAG, "timer started");
    }

    public ProgressDialog getRebootModemDialog() {
        Elog.v(TAG, "+++getRebootModemDialog+++");
        ProgressDialog progressDialog = new ProgressDialog(this.mActivity);
        this.mResetMdDialog = progressDialog;
        progressDialog.setTitle("Waiting");
        this.mResetMdDialog.setMessage("Please wait until modem reset succeed");
        this.mResetMdDialog.setCancelable(false);
        this.mResetMdDialog.setIndeterminate(true);
        return this.mResetMdDialog;
    }

    public void rebootModem() {
        startTimer();
        this.mActivity.showDialog(1001);
        EmUtils.rebootModem();
    }

    public void registerRadioStateChanged(RadioListener radioListener) {
        EmUtils.registerForradioStateChanged(0, this.mHandler, MSG_RADIO_STATE_CHANGED);
        Elog.v(TAG, "registerRadioStateChanged " + radioListener);
        this.mRadioListener = radioListener;
    }

    public void setAirplaneModeEnabled(boolean z) {
        startTimer();
        EmUtils.setAirplaneModeEnabled(z);
    }

    public void unregisterRadioStateChanged() {
        EmUtils.unregisterradioStateChanged(0);
        CountDownTimer countDownTimer = this.mTimer;
        if (countDownTimer != null) {
            countDownTimer.cancel();
            this.mTimer = null;
        }
        ProgressDialog progressDialog = this.mResetMdDialog;
        if (progressDialog != null) {
            progressDialog.dismiss();
            this.mResetMdDialog = null;
        }
        this.mRadioListener = null;
    }
}
