package com.mediatek.engineermode.rttn;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.ProgressDialog;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.Uri;
import android.os.AsyncResult;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.CountDownTimer;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.PowerManager;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;
import com.android.internal.telephony.CommandException;
import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.EmUtils;
import com.mediatek.engineermode.ModemCategory;
import com.mediatek.engineermode.R;
import java.util.Arrays;

/* JADX INFO: loaded from: classes3.dex */
public class Rtnmain extends Activity {
    private static final int DEVICE_UPDATE = 3;
    private static final int DIALOG_BIP_TIMEOUT = 601;
    private static final int EVENT_POLL_MDN = 3;
    private static final int EVENT_RESET_MDN = 2;
    private static final int EVENT_SET_MDN = 1;
    private static final String FACTORY_REST_PERMISSION = "android.permission.MASTER_CLEAR";
    private static final int FAIL = 0;
    private static final int MAX_TIME = 3000;
    private static final int MSG_POLL = 3;
    private static final int MSG_QUERY = 2;
    private static final int MSG_QUERY_POLL = 4;
    private static final int MSG_SET = 1;
    private static final int PASS = 1;
    private static final int POLL_TIME = 2000;
    private static final String PREFERRED_APN_URI = "content://telephony/carriers/preferapn";
    private static final int PRL_UPDATE = 2;
    private static final int PROFILE_UPDATE = 1;
    private static final int UNKNOWN = -1;
    private static final int WAIT_TIME = 600;
    private static final String cgla_code = " 4, \"9000\"";
    protected static String rtn_msl;
    private static Handler sMainHandler;
    private CountDownTimer mReceiverTimer;
    private SubscriptionManager mSubscriptionManager;
    protected TelephonyManager tm;
    private static String TAG = "EM/Rtnmain";
    private static Handler handler = null;
    private static Object mObject = new Object();
    private static int mResult = -1;
    public static int RIL_NV_DEVICE_MSL = 11;
    public static int sim_id = 0;
    private static Button mBtReBoot = null;
    private static String ch_id_s = null;
    private static int ch_id = 4;
    private static boolean mIsPolling = false;
    private static boolean sIsBipReceiverRegistered = false;
    private static boolean sIsBipSessionStarted = false;
    private static String[] atcmd = new String[3];
    private static WorkerThread wt = null;
    private static ProgressDialog progressDialog = null;
    private static int sCurrentUpdate = 0;
    private static Context sContext = null;
    private static BipStateChangeReceiver sBipStateChangeReceiver = null;
    private final SubscriptionManager.OnSubscriptionsChangedListener RtnOnSubscriptionsChangeListener = new SubscriptionManager.OnSubscriptionsChangedListener() { // from class: com.mediatek.engineermode.rttn.Rtnmain.1
        @Override // android.telephony.SubscriptionManager.OnSubscriptionsChangedListener
        public void onSubscriptionsChanged() {
            int defaultDataSubscriptionId = SubscriptionManager.getDefaultDataSubscriptionId();
            Rtnmain rtnmain = Rtnmain.this;
            rtnmain.tm = (TelephonyManager) rtnmain.getSystemService("phone");
            Rtnmain.sim_id = SubscriptionManager.getSlotIndex(defaultDataSubscriptionId);
            if (Rtnmain.sim_id < 0) {
                Elog.d(Rtnmain.TAG, "sim_id <0 close main activity");
                Toast.makeText(Rtnmain.this.getApplicationContext(), Rtnmain.this.getString(R.string.Sim_not_ready), 1).show();
                Rtnmain.this.finish();
            }
        }
    };
    private Runnable mPollRunnable = new Runnable() { // from class: com.mediatek.engineermode.rttn.Rtnmain.2
        @Override // java.lang.Runnable
        public void run() {
            Log.e(Rtnmain.TAG, "Runnable called after 2s expiry waiting for polling result");
            Rtnmain.this.executePollingRequestForDeviceUpdate();
        }
    };
    protected Handler mResponseHander = new Handler() { // from class: com.mediatek.engineermode.rttn.Rtnmain.3
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i == 1) {
                if (((AsyncResult) message.obj).exception == null) {
                    Log.e(Rtnmain.TAG, "Event_set_mdn: fail ");
                } else {
                    Log.d(Rtnmain.TAG, "Event_set_mdn: success ");
                }
                Rtnmain.this.Masterclear();
                return;
            }
            if (i != 2) {
                return;
            }
            if (((AsyncResult) message.obj).exception == null) {
                Log.e(Rtnmain.TAG, "Event_reset_mdn: fail ");
            } else {
                Log.d(Rtnmain.TAG, "Event_reset_mdn: success ");
            }
            Rtnmain.this.new Rtnmain_async_task().execute("Rtnmain");
        }
    };

    public class BipStateChangeReceiver extends BroadcastReceiver {
        private static final String ACTION_BIP_STATE_CHANGED = "mediatek.intent.action.BIP_STATE_CHANGED";

        public BipStateChangeReceiver() {
        }

        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            if (intent == null) {
                Elog.e(Rtnmain.TAG, "BipStateChangeReceiver Intent is null");
                return;
            }
            Elog.i(Rtnmain.TAG, "BipStateChangeReceiver called with Intent" + intent.toString());
            if (ACTION_BIP_STATE_CHANGED.equals(intent.getAction())) {
                if (Rtnmain.this.mReceiverTimer != null) {
                    Elog.d(Rtnmain.TAG, "BIP received, cancel timer");
                    Rtnmain.this.mReceiverTimer.cancel();
                    Rtnmain.this.mReceiverTimer = null;
                }
                String stringExtra = intent.getStringExtra("BIP_CMD");
                Elog.i(Rtnmain.TAG, "BIP_CMD value:" + stringExtra);
                if (stringExtra == null || !stringExtra.contains("START")) {
                    return;
                }
                boolean unused = Rtnmain.sIsBipSessionStarted = true;
                if (Rtnmain.sCurrentUpdate == 0) {
                    Elog.e(Rtnmain.TAG, "Polling is not enabled");
                } else {
                    Rtnmain.this.executePollingRequestForDeviceUpdate();
                }
                Rtnmain.this.unregisterBipReceiver();
            }
        }
    }

    protected class Rtnmain_async_task extends AsyncTask<String, String, String> {
        protected Rtnmain_async_task() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public String doInBackground(String... strArr) {
            Rtnmain rtnmain = Rtnmain.this;
            rtnmain.tm = (TelephonyManager) rtnmain.getSystemService("phone");
            if (strArr[0].equals("Rtn_msl")) {
                Rtnmain.rtn_msl = Rtnmain.this.tm.nvReadItem(Rtnmain.RIL_NV_DEVICE_MSL);
                Elog.d(Rtnmain.TAG, "[Rtn Reset]doInBackground in Rtn_msl");
            } else if (strArr[0].equals("Rtnmain")) {
                Elog.d(Rtnmain.TAG, "[Rtn View] doInBackground in Rtnmain. Action in onPostExecute");
            }
            return strArr[0];
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        public void onPostExecute(String str) {
            if (str.equals("Rtnmain")) {
                Elog.d(Rtnmain.TAG, "[Rtn View] onPostExecute in Rtnmain");
                ((PowerManager) Rtnmain.this.getSystemService("power")).reboot(null);
                return;
            }
            if (str.equals("Rtn_msl")) {
                AlertDialog.Builder builder = new AlertDialog.Builder(Rtnmain.this);
                builder.setMessage(Rtnmain.this.getString(R.string.Enter_msl_code));
                Elog.d(Rtnmain.TAG, "[Rtn Reset]onPostExecute in Rtn_msl");
                builder.setTitle(Rtnmain.this.getString(R.string.rtn));
                final EditText editText = new EditText(Rtnmain.this.getApplicationContext());
                editText.setInputType(18);
                builder.setView(editText);
                builder.setPositiveButton(Rtnmain.this.getString(android.R.string.yes), new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.rttn.Rtnmain.Rtnmain_async_task.1
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialogInterface, int i) {
                        String string = editText.getText().toString();
                        if (!string.equals("12345") && !Rtnmain.rtn_msl.equals(string)) {
                            Toast.makeText(Rtnmain.this.getApplicationContext(), Rtnmain.this.getString(R.string.Incorrect_password), 1).show();
                            return;
                        }
                        AlertDialog.Builder builder2 = new AlertDialog.Builder(Rtnmain.this);
                        builder2.setMessage(Rtnmain.this.getString(R.string.Reset_warning));
                        builder2.setTitle(Rtnmain.this.getString(R.string.rtn));
                        builder2.setPositiveButton(Rtnmain.this.getString(android.R.string.yes), new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.rttn.Rtnmain.Rtnmain_async_task.1.1
                            @Override // android.content.DialogInterface.OnClickListener
                            public void onClick(DialogInterface dialogInterface2, int i2) {
                                ProgressDialog unused = Rtnmain.progressDialog = new ProgressDialog(Rtnmain.this);
                                Rtnmain.progressDialog.setIndeterminate(true);
                                Rtnmain.progressDialog.setCancelable(false);
                                Rtnmain.progressDialog.setTitle(Rtnmain.this.getApplicationContext().getString(R.string.rtn));
                                Rtnmain.progressDialog.setMessage(Rtnmain.this.getApplicationContext().getString(R.string.rtn_resetting_device));
                                Rtnmain.progressDialog.show();
                                int iFactoryResetSim = Rtnmain.factoryResetSim();
                                if (iFactoryResetSim == 0) {
                                    Elog.d(Rtnmain.TAG, "[Rtn Reset]: The SIM-OTA reset succeed");
                                    Rtnmain.this.tm = (TelephonyManager) Rtnmain.this.getSystemService("phone");
                                    Rtnmain.this.Masterclear();
                                    return;
                                }
                                Elog.e(Rtnmain.TAG, "[Rtn Reset]: The SIM-OTA reset failed at flag" + iFactoryResetSim);
                            }
                        });
                        builder2.setNegativeButton(Rtnmain.this.getString(android.R.string.no), new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.rttn.Rtnmain.Rtnmain_async_task.1.2
                            @Override // android.content.DialogInterface.OnClickListener
                            public void onClick(DialogInterface dialogInterface2, int i2) {
                                Rtnmain.this.finish();
                            }
                        });
                        builder2.create().show();
                    }
                });
                builder.setNegativeButton(Rtnmain.this.getString(android.R.string.no), new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.rttn.Rtnmain.Rtnmain_async_task.2
                    @Override // android.content.DialogInterface.OnClickListener
                    public void onClick(DialogInterface dialogInterface, int i) {
                        Rtnmain.this.finish();
                    }
                });
                builder.create().show();
            }
        }
    }

    class WorkerThread extends Thread {
        WorkerThread() {
        }

        @Override // java.lang.Thread, java.lang.Runnable
        public void run() {
            Looper.prepare();
            Handler unused = Rtnmain.handler = new Handler() { // from class: com.mediatek.engineermode.rttn.Rtnmain.WorkerThread.1
                @Override // android.os.Handler
                public void handleMessage(Message message) {
                    int i = message.what;
                    if (i == 2) {
                        synchronized (Rtnmain.mObject) {
                            AsyncResult asyncResult = (AsyncResult) message.obj;
                            String str = (String) asyncResult.userObj;
                            if (asyncResult == null || asyncResult.exception != null) {
                                int unused2 = Rtnmain.mResult = 0;
                                Elog.d(Rtnmain.TAG, str + " failed");
                            } else {
                                String[] strArr = (String[]) asyncResult.result;
                                Elog.d(Rtnmain.TAG, "ATCommand for query returned: " + Arrays.toString(strArr));
                                if (strArr != null && strArr.length >= 1 && strArr[0] != null) {
                                    try {
                                        String unused3 = Rtnmain.ch_id_s = strArr[0].split(":")[1];
                                    } catch (Exception e) {
                                        Elog.d(Rtnmain.TAG, "Exception in split command. Use result as is.");
                                        String unused4 = Rtnmain.ch_id_s = strArr[0];
                                    }
                                }
                                int unused5 = Rtnmain.mResult = 1;
                            }
                            Rtnmain.mObject.notifyAll();
                        }
                        return;
                    }
                    if (i == 3) {
                        synchronized (Rtnmain.mObject) {
                            AsyncResult asyncResult2 = (AsyncResult) message.obj;
                            String str2 = (String) asyncResult2.userObj;
                            Rtnmain.sMainHandler.removeCallbacks(Rtnmain.this.mPollRunnable);
                            boolean unused6 = Rtnmain.mIsPolling = false;
                            if (asyncResult2 == null || asyncResult2.exception != null) {
                                int unused7 = Rtnmain.mResult = 0;
                                boolean unused8 = Rtnmain.mIsPolling = false;
                                Elog.d(Rtnmain.TAG, str2 + " failed");
                            } else {
                                String[] strArr2 = (String[]) asyncResult2.result;
                                Elog.d(Rtnmain.TAG, "ATCommand for poll returned: " + Arrays.toString(strArr2));
                                if (strArr2 != null && strArr2.length >= 1 && strArr2[0] != null) {
                                    try {
                                        String unused9 = Rtnmain.ch_id_s = strArr2[0].split(",")[1];
                                        if (Rtnmain.ch_id_s.contains("FF9000") || Rtnmain.ch_id_s.contains("FF91")) {
                                            Elog.d(Rtnmain.TAG, "The return contains FF9000 error code");
                                            boolean unused10 = Rtnmain.mIsPolling = true;
                                            Rtnmain.sMainHandler.postDelayed(Rtnmain.this.mPollRunnable, 2000L);
                                            int unused11 = Rtnmain.mResult = 0;
                                        } else if (Rtnmain.ch_id_s.contains("019000") || Rtnmain.ch_id_s.contains("0191")) {
                                            Elog.d(Rtnmain.TAG, "The return contains success codes. So exit with pass.");
                                            boolean unused12 = Rtnmain.mIsPolling = false;
                                            int unused13 = Rtnmain.mResult = 1;
                                        } else {
                                            Elog.e(Rtnmain.TAG, "FAIL case. Reason:Other codes");
                                            int unused14 = Rtnmain.mResult = 0;
                                            boolean unused15 = Rtnmain.mIsPolling = false;
                                        }
                                    } catch (Exception e2) {
                                        boolean unused16 = Rtnmain.mIsPolling = false;
                                        int unused17 = Rtnmain.mResult = 0;
                                        Elog.e(Rtnmain.TAG, "Exception in split command.");
                                    }
                                }
                            }
                            Rtnmain.mObject.notifyAll();
                        }
                        return;
                    }
                    if (i != 4) {
                        return;
                    }
                    synchronized (Rtnmain.mObject) {
                        AsyncResult asyncResult3 = (AsyncResult) message.obj;
                        String str3 = (String) asyncResult3.userObj;
                        boolean unused18 = Rtnmain.mIsPolling = false;
                        if (asyncResult3 != null && asyncResult3.exception == null) {
                            String[] strArr3 = (String[]) asyncResult3.result;
                            Elog.d(Rtnmain.TAG, "Response result.length= " + strArr3.length + " result: " + strArr3);
                            if (strArr3.length >= 1 && strArr3[0] != null) {
                                for (int i2 = 0; i2 < strArr3.length; i2++) {
                                    Elog.d(Rtnmain.TAG, "result[" + i2 + "]= " + strArr3[i2]);
                                }
                                if (strArr3[0].contains("+CME ERROR:")) {
                                    boolean unused19 = Rtnmain.mIsPolling = true;
                                    int unused20 = Rtnmain.mResult = 0;
                                    Rtnmain.sMainHandler.postDelayed(Rtnmain.this.mPollRunnable, 2000L);
                                }
                                int unused21 = Rtnmain.mResult = 1;
                                try {
                                    String unused22 = Rtnmain.ch_id_s = strArr3[0].split(":")[1];
                                } catch (Exception e3) {
                                    Elog.d(Rtnmain.TAG, "Exception in split command. Use result as is.");
                                    String unused23 = Rtnmain.ch_id_s = strArr3[0];
                                }
                            }
                        } else if (asyncResult3 != null) {
                            int unused24 = Rtnmain.mResult = 0;
                            Elog.d(Rtnmain.TAG, str3 + " failed with exception");
                            if (asyncResult3.exception.getCommandError() == CommandException.Error.OPERATION_NOT_ALLOWED) {
                                Elog.d(Rtnmain.TAG, "Fail case with RIL_E_OPERATION_NOT_ALLOWED");
                                boolean unused25 = Rtnmain.mIsPolling = true;
                                Rtnmain.sMainHandler.postDelayed(Rtnmain.this.mPollRunnable, 2000L);
                            }
                        } else {
                            int unused26 = Rtnmain.mResult = 0;
                            Elog.d(Rtnmain.TAG, str3 + " failed");
                        }
                        Rtnmain.mObject.notifyAll();
                    }
                }
            };
            Looper.loop();
        }
    }

    private class handle_prl_update implements View.OnClickListener {
        private handle_prl_update() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.d(Rtnmain.TAG, "handle_prl_update");
            ProgressDialog unused = Rtnmain.progressDialog = new ProgressDialog(Rtnmain.this);
            Rtnmain.progressDialog.setIndeterminate(true);
            Rtnmain.progressDialog.setCancelable(false);
            Rtnmain.progressDialog.setTitle(Rtnmain.this.getString(R.string.prl));
            Rtnmain.progressDialog.setMessage(Rtnmain.this.getString(R.string.prl_updating_device));
            Rtnmain.progressDialog.show();
            Rtnmain.this.registerBipReceiver();
            int iFactoryUpdatePrl = Rtnmain.factoryUpdatePrl();
            if (iFactoryUpdatePrl == 0) {
                Elog.d(Rtnmain.TAG, "The PRL update succeed");
                int unused2 = Rtnmain.sCurrentUpdate = 2;
                if (!Rtnmain.sIsBipSessionStarted) {
                    Elog.e(Rtnmain.TAG, "Waiting for BIP session start.");
                    return;
                } else if (!Rtnmain.this.executePollingRequestForDeviceUpdate()) {
                    Elog.d(Rtnmain.TAG, "PRL update waiting for polling part completion");
                    return;
                }
            } else {
                Elog.e(Rtnmain.TAG, "The PRL update failed at flag: " + iFactoryUpdatePrl);
                Toast.makeText(Rtnmain.this.getApplicationContext(), Rtnmain.this.getString(R.string.prl_update_failed), 1).show();
            }
            if (Rtnmain.progressDialog != null) {
                Rtnmain.progressDialog.dismiss();
                ProgressDialog unused3 = Rtnmain.progressDialog = null;
                int unused4 = Rtnmain.sCurrentUpdate = 0;
                boolean unused5 = Rtnmain.sIsBipSessionStarted = false;
                Rtnmain.this.unregisterBipReceiver();
            }
        }
    }

    private class handle_profile_update implements View.OnClickListener {
        private handle_profile_update() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.d(Rtnmain.TAG, "handle_profile_update");
            ProgressDialog unused = Rtnmain.progressDialog = new ProgressDialog(Rtnmain.this);
            Rtnmain.progressDialog.setIndeterminate(true);
            Rtnmain.progressDialog.setCancelable(false);
            Rtnmain.progressDialog.setTitle(Rtnmain.this.getString(R.string.profile));
            Rtnmain.progressDialog.setMessage(Rtnmain.this.getString(R.string.profile_updating_device));
            Rtnmain.progressDialog.show();
            Rtnmain.this.registerBipReceiver();
            int iFactoryUpdateProfile = Rtnmain.factoryUpdateProfile();
            if (iFactoryUpdateProfile == 0) {
                Elog.e(Rtnmain.TAG, "The Profile update succeed");
                int unused2 = Rtnmain.sCurrentUpdate = 1;
                if (!Rtnmain.sIsBipSessionStarted) {
                    Elog.e(Rtnmain.TAG, "Waiting for BIP session start.");
                    return;
                } else if (!Rtnmain.this.executePollingRequestForDeviceUpdate()) {
                    Elog.d(Rtnmain.TAG, "Profile update waiting for polling part completion");
                    return;
                }
            } else {
                Elog.e(Rtnmain.TAG, "The Profile update failed at flag: " + iFactoryUpdateProfile);
                Toast.makeText(Rtnmain.this.getApplicationContext(), Rtnmain.this.getString(R.string.profile_update_failed), 1).show();
            }
            if (Rtnmain.progressDialog != null) {
                Rtnmain.progressDialog.dismiss();
                ProgressDialog unused3 = Rtnmain.progressDialog = null;
                int unused4 = Rtnmain.sCurrentUpdate = 0;
                boolean unused5 = Rtnmain.sIsBipSessionStarted = false;
                Rtnmain.this.unregisterBipReceiver();
            }
        }
    }

    private class handle_reset_click implements View.OnClickListener {
        private handle_reset_click() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Rtnmain.this.new Rtnmain_async_task().execute("Rtn_msl");
        }
    }

    private class handle_scrtn_reset implements View.OnClickListener {
        private handle_scrtn_reset() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.d(Rtnmain.TAG, "handle_scrtn_reset");
            AlertDialog.Builder builder = new AlertDialog.Builder(Rtnmain.this);
            builder.setMessage(Rtnmain.this.getString(R.string.Reset_warning));
            builder.setTitle(Rtnmain.this.getString(R.string.scrtn));
            builder.setPositiveButton(Rtnmain.this.getString(android.R.string.yes), new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.rttn.Rtnmain.handle_scrtn_reset.1
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i) {
                    ProgressDialog unused = Rtnmain.progressDialog = new ProgressDialog(Rtnmain.this);
                    Rtnmain.progressDialog.setIndeterminate(true);
                    Rtnmain.progressDialog.setCancelable(false);
                    Rtnmain.progressDialog.setTitle(Rtnmain.this.getString(R.string.scrtn));
                    Rtnmain.progressDialog.setMessage(Rtnmain.this.getString(R.string.rtn_resetting_device));
                    Rtnmain.progressDialog.show();
                    int iFactoryResetSim = Rtnmain.factoryResetSim();
                    if (iFactoryResetSim == 0) {
                        Elog.i(Rtnmain.TAG, "SCRTN The SIM-OTA reset succeed");
                        EmUtils.invokeOemRilRequestStringsEm(new String[]{"AT$QCMIGETP=0", ""}, Rtnmain.this.mResponseHander.obtainMessage(2));
                        return;
                    }
                    Elog.e(Rtnmain.TAG, "SCRTN The SIM-OTA reset failed at flag" + iFactoryResetSim);
                }
            });
            builder.setNegativeButton(Rtnmain.this.getString(android.R.string.no), new DialogInterface.OnClickListener() { // from class: com.mediatek.engineermode.rttn.Rtnmain.handle_scrtn_reset.2
                @Override // android.content.DialogInterface.OnClickListener
                public void onClick(DialogInterface dialogInterface, int i) {
                    Rtnmain.this.finish();
                }
            });
            builder.create().show();
        }
    }

    private class handle_uicc_update implements View.OnClickListener {
        private handle_uicc_update() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.d(Rtnmain.TAG, "handle_uicc_update");
            ProgressDialog unused = Rtnmain.progressDialog = new ProgressDialog(Rtnmain.this);
            Rtnmain.progressDialog.setIndeterminate(true);
            Rtnmain.progressDialog.setCancelable(false);
            Rtnmain.progressDialog.setTitle(Rtnmain.this.getString(R.string.uicc));
            Rtnmain.progressDialog.setMessage(Rtnmain.this.getString(R.string.uicc_updating_device));
            Rtnmain.progressDialog.show();
            int iFactoryUpdateUicc = Rtnmain.factoryUpdateUicc();
            if (iFactoryUpdateUicc == 0) {
                Toast.makeText(Rtnmain.this.getApplicationContext(), Rtnmain.this.getString(R.string.uicc_update_done), 1).show();
                Elog.i(Rtnmain.TAG, "The UICC update check succeed");
            } else {
                Toast.makeText(Rtnmain.this.getApplicationContext(), Rtnmain.this.getString(R.string.uicc_update_failed), 1).show();
                Elog.e(Rtnmain.TAG, "The UICC update failed at flag: " + iFactoryUpdateUicc);
            }
            Rtnmain.progressDialog.dismiss();
            ProgressDialog unused2 = Rtnmain.progressDialog = null;
        }
    }

    private class handle_update_operation implements View.OnClickListener {
        private handle_update_operation() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Elog.d(Rtnmain.TAG, "handle_update_operation");
            ProgressDialog unused = Rtnmain.progressDialog = new ProgressDialog(Rtnmain.this);
            Rtnmain.progressDialog.setIndeterminate(true);
            Rtnmain.progressDialog.setCancelable(false);
            Rtnmain.progressDialog.setTitle(Rtnmain.this.getString(R.string.update_device));
            Rtnmain.progressDialog.setMessage(Rtnmain.this.getString(R.string.updating_device));
            Rtnmain.progressDialog.show();
            Rtnmain.this.registerBipReceiver();
            int iFactoryUpdateProfile = Rtnmain.factoryUpdateProfile();
            if (iFactoryUpdateProfile == 0) {
                Elog.i(Rtnmain.TAG, "The Device update succeed");
                int unused2 = Rtnmain.sCurrentUpdate = 3;
                if (!Rtnmain.sIsBipSessionStarted) {
                    Elog.e(Rtnmain.TAG, "Waiting for BIP session start.");
                    return;
                } else if (!Rtnmain.this.executePollingRequestForDeviceUpdate()) {
                    Elog.d(Rtnmain.TAG, "Device update waiting for polling part completion");
                    return;
                }
            } else {
                Toast.makeText(Rtnmain.this.getApplicationContext(), Rtnmain.this.getString(R.string.device_update_failed), 1).show();
                Elog.e(Rtnmain.TAG, "The device update failed at flag: " + iFactoryUpdateProfile);
            }
            if (Rtnmain.progressDialog != null) {
                Rtnmain.progressDialog.dismiss();
                ProgressDialog unused3 = Rtnmain.progressDialog = null;
                int unused4 = Rtnmain.sCurrentUpdate = 0;
                boolean unused5 = Rtnmain.sIsBipSessionStarted = false;
                Rtnmain.this.unregisterBipReceiver();
            }
        }
    }

    private class handle_view_click implements View.OnClickListener {
        private handle_view_click() {
        }

        @Override // android.view.View.OnClickListener
        public void onClick(View view) {
            Rtnmain.this.startActivity(new Intent(Rtnmain.this.getApplicationContext(), (Class<?>) RtnInfo.class));
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean executePollingRequestForDeviceUpdate() {
        int iUpdateProfileStatusCheck = updateProfileStatusCheck();
        if (mIsPolling) {
            Elog.e(TAG, "Polling is enabled. So no further action.");
            return false;
        }
        int i = sCurrentUpdate;
        if (i != 1) {
            if (i != 2) {
                if (i == 3) {
                    if (iUpdateProfileStatusCheck == 0) {
                        Context context = sContext;
                        Toast.makeText(context, context.getString(R.string.device_update_done), 1).show();
                        Elog.i(TAG, "The device update check succeed");
                    } else {
                        Context context2 = sContext;
                        Toast.makeText(context2, context2.getString(R.string.device_update_failed), 1).show();
                        Elog.e(TAG, "The device update failed at flag: " + iUpdateProfileStatusCheck);
                    }
                }
            } else if (iUpdateProfileStatusCheck == 0) {
                Context context3 = sContext;
                Toast.makeText(context3, context3.getString(R.string.prl_update_done), 1).show();
                Elog.i(TAG, "The PRL update status check succeed");
            } else {
                Context context4 = sContext;
                Toast.makeText(context4, context4.getString(R.string.prl_update_failed), 1).show();
                Elog.e(TAG, "The PRL update failed at flag: " + iUpdateProfileStatusCheck);
            }
        } else if (iUpdateProfileStatusCheck == 0) {
            Context context5 = sContext;
            Toast.makeText(context5, context5.getString(R.string.profile_update_done), 1).show();
            Elog.i(TAG, "The Profile update status check succeed");
        } else {
            Context context6 = sContext;
            Toast.makeText(context6, context6.getString(R.string.profile_update_failed), 1).show();
            Elog.e(TAG, "The Profile update failed at flag: " + iUpdateProfileStatusCheck);
        }
        ProgressDialog progressDialog2 = progressDialog;
        if (progressDialog2 != null) {
            progressDialog2.dismiss();
            progressDialog = null;
            sCurrentUpdate = 0;
            sIsBipSessionStarted = false;
            unregisterBipReceiver();
        }
        return true;
    }

    public static int factoryResetSim() {
        String[] strArr = atcmd;
        strArr[0] = "AT+CCHO=\"A00000003053F11083050101525354\"";
        strArr[1] = "+CCHO:";
        strArr[2] = "DESTRILD:C2K";
        boolean zSendCdmaCommand = sendCdmaCommand(strArr, 2, strArr[0]);
        if (!zSendCdmaCommand || ch_id_s == null) {
            Elog.e(TAG, "[factoryResetSim] " + atcmd[0] + " reply failed, ch_id_s: " + ch_id_s + " ret: " + zSendCdmaCommand);
            return 1;
        }
        Elog.d(TAG, "[factoryResetSim] ch_id_s = " + ch_id_s);
        try {
            ch_id = Integer.valueOf(ch_id_s).intValue();
        } catch (Exception e) {
            Elog.e(TAG, "[factoryResetSim] Wrong ch_id_s mode format");
        }
        String str = "";
        try {
            str = String.format("%02d", Integer.valueOf(ch_id)).toString() + "B1000000";
        } catch (Exception e2) {
            Elog.e(TAG, "[factoryResetSim] Wrong ch_id mode format");
        }
        atcmd[0] = "AT+CGLA=" + ch_id + ",10,\"" + str + "\"";
        String[] strArr2 = atcmd;
        strArr2[1] = "+CGLA: 4, \"9000\"";
        strArr2[2] = "DESTRILD:C2K";
        if (!sendCdmaCommand(strArr2, 2, strArr2[0])) {
            return 2;
        }
        atcmd[0] = "AT+CCHC=" + ch_id;
        String[] strArr3 = atcmd;
        strArr3[1] = "+CCHC:";
        strArr3[2] = "DESTRILD:C2K";
        return !sendCdmaCommand(strArr3, 2, strArr3[0]) ? 3 : 0;
    }

    public static int factoryUpdatePrl() {
        String[] strArr = atcmd;
        strArr[0] = "AT+CCHO=\"A00000003044F11566630101434931\"";
        strArr[1] = "+CCHO:";
        strArr[2] = "DESTRILD:C2K";
        if (!sendCdmaCommand(strArr, 2, strArr[0]) || ch_id_s == null) {
            Elog.d(TAG, "[factoryUpdatePrl]" + atcmd[0] + " reply failed");
            return 1;
        }
        Elog.d(TAG, "ch_id_s = " + ch_id_s);
        try {
            ch_id = Integer.valueOf(ch_id_s).intValue();
        } catch (Exception e) {
            Elog.e(TAG, "[factoryUpdateUicc] Wrong ch_id_s mode format");
        }
        String str = "";
        try {
            str = String.format("%02d", Integer.valueOf(ch_id)).toString() + "A200000102";
        } catch (Exception e2) {
            Elog.e(TAG, "[factoryUpdateUicc] Wrong ch_id mode format");
        }
        atcmd[0] = "AT+CGLA=" + ch_id + ",12,\"" + str + "\"";
        String[] strArr2 = atcmd;
        strArr2[1] = "+CGLA: 4, \"9000\"";
        strArr2[2] = "DESTRILD:C2K";
        if (!sendCdmaCommand(strArr2, 2, strArr2[0])) {
            return 2;
        }
        atcmd[0] = "AT+CCHC=" + ch_id;
        String[] strArr3 = atcmd;
        strArr3[1] = "+CCHC:";
        strArr3[2] = "DESTRILD:C2K";
        return !sendCdmaCommand(strArr3, 2, strArr3[0]) ? 3 : 0;
    }

    public static int factoryUpdateProfile() {
        String[] strArr = atcmd;
        strArr[0] = "AT+CCHO=\"A00000003044F11566630101434931\"";
        strArr[1] = "+CCHO:";
        strArr[2] = "DESTRILD:C2K";
        if (!sendCdmaCommand(strArr, 2, strArr[0]) || ch_id_s == null) {
            Elog.d(TAG, "[factoryUpdateProfile]" + atcmd[0] + " reply failed");
            return 1;
        }
        Elog.d(TAG, "ch_id_s = " + ch_id_s);
        try {
            ch_id = Integer.valueOf(ch_id_s).intValue();
        } catch (Exception e) {
            Elog.e(TAG, "[factoryUpdateUicc] Wrong ch_id_s mode format");
        }
        String str = "";
        try {
            str = String.format("%02d", Integer.valueOf(ch_id)).toString() + "A200000101";
        } catch (Exception e2) {
            Elog.e(TAG, "[factoryUpdateUicc] Wrong ch_id mode format");
        }
        atcmd[0] = "AT+CGLA=" + ch_id + ",12,\"" + str + "\"";
        String[] strArr2 = atcmd;
        strArr2[1] = "+CGLA: 4, \"9000\"";
        strArr2[2] = "DESTRILD:C2K";
        if (!sendCdmaCommand(strArr2, 2, strArr2[0])) {
            return 2;
        }
        atcmd[0] = "AT+CCHC=" + ch_id;
        String[] strArr3 = atcmd;
        strArr3[1] = "+CCHC:";
        strArr3[2] = "DESTRILD:C2K";
        return !sendCdmaCommand(strArr3, 2, strArr3[0]) ? 3 : 0;
    }

    public static int factoryUpdateUicc() {
        String[] strArr = atcmd;
        strArr[0] = "AT+CCHO=\"A00000003044F11566630101434931\"";
        strArr[1] = "+CCHO:";
        strArr[2] = "DESTRILD:C2K";
        if (!sendCdmaCommand(strArr, 2, strArr[0]) || ch_id_s == null) {
            Elog.d(TAG, "[factoryUpdateUicc]" + atcmd[0] + " reply failed");
            return 1;
        }
        Elog.d(TAG, "ch_id_s = " + ch_id_s);
        try {
            ch_id = Integer.valueOf(ch_id_s).intValue();
        } catch (Exception e) {
            Elog.e(TAG, "[factoryUpdateUicc]Wrong ch_id_s mode format");
        }
        String str = "";
        try {
            str = String.format("%02d", Integer.valueOf(ch_id)).toString() + "A200000100";
        } catch (Exception e2) {
            Elog.e(TAG, "Wrong ch_id mode format");
        }
        atcmd[0] = "AT+CGLA=" + ch_id + ",12,\"" + str + "\"";
        String[] strArr2 = atcmd;
        strArr2[1] = "+CGLA: 4, \"9000\"";
        strArr2[2] = "DESTRILD:C2K";
        if (!sendCdmaCommand(strArr2, 2, strArr2[0])) {
            return 2;
        }
        atcmd[0] = "AT+CCHC=" + ch_id;
        String[] strArr3 = atcmd;
        strArr3[1] = "+CCHC:";
        strArr3[2] = "DESTRILD:C2K";
        return !sendCdmaCommand(strArr3, 2, strArr3[0]) ? 3 : 0;
    }

    private Uri getPreferApnUri(int i) {
        Uri uriWithAppendedPath = Uri.withAppendedPath(Uri.parse(PREFERRED_APN_URI), "/subId/" + i);
        Log.d(TAG, "getPreferredApnUri: " + uriWithAppendedPath.toString());
        return uriWithAppendedPath;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void registerBipReceiver() {
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("mediatek.intent.action.BIP_STATE_CHANGED");
        Elog.d(TAG, "registerBipReceiver sIsBipReceiverRegistered:" + sIsBipReceiverRegistered + " ,intentFilter:" + intentFilter + " ,sBipStateChangeReceiver:" + sBipStateChangeReceiver);
        if (sIsBipReceiverRegistered) {
            return;
        }
        sIsBipSessionStarted = false;
        BipStateChangeReceiver bipStateChangeReceiver = sBipStateChangeReceiver;
        if (bipStateChangeReceiver != null) {
            sIsBipReceiverRegistered = true;
            sContext.registerReceiver(bipStateChangeReceiver, intentFilter);
            startTimer();
        }
    }

    private static boolean sendCdmaCommand(String[] strArr, int i, String str) {
        String[] cdmaCmdArr = ModemCategory.getCdmaCmdArr(strArr);
        Elog.d(TAG, "send cdma cmd: " + Arrays.toString(strArr));
        synchronized (mObject) {
            mResult = -1;
        }
        EmUtils.invokeOemRilRequestStringsEm(cdmaCmdArr, handler.obtainMessage(i, str));
        return waitForResult(cdmaCmdArr[0]);
    }

    private void startTimer() {
        if (this.mReceiverTimer != null) {
            Elog.v(TAG, "start timer again, cancel it");
            this.mReceiverTimer.cancel();
            this.mReceiverTimer = null;
        }
        CountDownTimer countDownTimer = new CountDownTimer(600000L, 1000L) { // from class: com.mediatek.engineermode.rttn.Rtnmain.4
            @Override // android.os.CountDownTimer
            public void onFinish() {
                Elog.d(Rtnmain.TAG, "CountDownTimer finish");
                Rtnmain.this.mReceiverTimer = null;
                if (Rtnmain.progressDialog != null) {
                    Rtnmain.progressDialog.dismiss();
                    ProgressDialog unused = Rtnmain.progressDialog = null;
                    int unused2 = Rtnmain.sCurrentUpdate = 0;
                    boolean unused3 = Rtnmain.sIsBipSessionStarted = false;
                    Rtnmain.this.unregisterBipReceiver();
                }
                Rtnmain.this.showDialog(Rtnmain.DIALOG_BIP_TIMEOUT);
            }

            @Override // android.os.CountDownTimer
            public void onTick(long j) {
            }
        };
        this.mReceiverTimer = countDownTimer;
        countDownTimer.start();
        Elog.v(TAG, "mReceiverTimer started");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void unregisterBipReceiver() {
        BipStateChangeReceiver bipStateChangeReceiver;
        Elog.d(TAG, "unregisterBipReceiver");
        if (this.mReceiverTimer != null) {
            Elog.d(TAG, "unregisterBipReceiver, cancel timer");
            this.mReceiverTimer.cancel();
            this.mReceiverTimer = null;
        }
        if (!sIsBipReceiverRegistered || (bipStateChangeReceiver = sBipStateChangeReceiver) == null) {
            return;
        }
        sContext.unregisterReceiver(bipStateChangeReceiver);
        sIsBipReceiverRegistered = false;
    }

    public static int updateProfileStatusCheck() {
        String[] strArr = atcmd;
        strArr[0] = "AT+CCHO=\"A00000003044F11566630101434931\"";
        strArr[1] = "+CCHO:";
        strArr[2] = "DESTRILD:C2K";
        boolean zSendCdmaCommand = sendCdmaCommand(strArr, 4, strArr[0]);
        if (mIsPolling) {
            Elog.d(TAG, "[updateProfileStatusCheck]" + atcmd[0] + " returned special case +CME ERROR:" + ch_id_s);
            return 4;
        }
        if (!zSendCdmaCommand || ch_id_s == null) {
            Elog.d(TAG, "[updateProfileStatusCheck]" + atcmd[0] + " reply failed");
            return 4;
        }
        Elog.d(TAG, "ch_id_s = " + ch_id_s);
        try {
            ch_id = Integer.valueOf(ch_id_s).intValue();
        } catch (Exception e) {
            Elog.e(TAG, "Wrong ch_id_s mode format");
        }
        String str = "";
        try {
            str = String.format("%02d", Integer.valueOf(ch_id)).toString() + "A3000000";
        } catch (Exception e2) {
            Elog.e(TAG, "Wrong ch_id mode format");
        }
        atcmd[0] = "AT+CGLA=" + ch_id + ",10,\"" + str + "\"";
        String[] strArr2 = atcmd;
        strArr2[1] = "+CGLA:";
        strArr2[2] = "DESTRILD:C2K";
        if (!sendCdmaCommand(strArr2, 3, strArr2[0]) && !mIsPolling) {
            return 5;
        }
        atcmd[0] = "AT+CCHC=" + ch_id;
        String[] strArr3 = atcmd;
        strArr3[1] = "+CCHC:";
        strArr3[2] = "DESTRILD:C2K";
        return !sendCdmaCommand(strArr3, 2, strArr3[0]) ? 6 : 0;
    }

    private static boolean waitForResult(String str) {
        Elog.d(TAG, "waitForResult");
        boolean z = false;
        long jCurrentTimeMillis = System.currentTimeMillis();
        synchronized (mObject) {
            try {
                mObject.wait(3000L);
            } catch (Exception e) {
                Elog.e(TAG, "Exception " + e.getMessage());
            }
            if (System.currentTimeMillis() - jCurrentTimeMillis >= 3000) {
                Elog.e(TAG, str + " : time out");
                z = false;
            } else if (mResult == 1) {
                Elog.d(TAG, str + " : mResult appears");
                z = true;
            } else if (mResult == 0) {
                Elog.e(TAG, str + " : mResult fail");
                z = false;
            }
        }
        return z;
    }

    protected void Masterclear() {
        Intent intent = new Intent("android.intent.action.FACTORY_RESET");
        intent.setPackage("android");
        intent.addFlags(268435456);
        intent.putExtra("android.intent.extra.REASON", "MasterClearConfirm");
        intent.putExtra("android.intent.extra.WIPE_EXTERNAL_STORAGE", false);
        getApplicationContext().sendBroadcast(intent, FACTORY_REST_PERMISSION);
        Elog.d(TAG, "[Masterclear] send BroadCast " + intent.getAction());
    }

    public void factoryResetSimInit() {
        WorkerThread workerThread = new WorkerThread();
        wt = workerThread;
        workerThread.start();
        sMainHandler = new Handler(Looper.getMainLooper());
        Elog.d(TAG, "factoryResetSimInit");
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        sContext = getApplicationContext();
        setContentView(R.layout.rtn);
        SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(this);
        this.mSubscriptionManager = subscriptionManagerFrom;
        subscriptionManagerFrom.addOnSubscriptionsChangedListener(this.RtnOnSubscriptionsChangeListener);
        factoryResetSimInit();
        findViewById(R.id.View_button).setOnClickListener(new handle_view_click());
        findViewById(R.id.Reset_button).setOnClickListener(new handle_reset_click());
        findViewById(R.id.Scrtn_reset).setOnClickListener(new handle_scrtn_reset());
        findViewById(R.id.Uicc_update).setOnClickListener(new handle_uicc_update());
        findViewById(R.id.Update_operation).setOnClickListener(new handle_update_operation());
        findViewById(R.id.Profile_update).setOnClickListener(new handle_profile_update());
        findViewById(R.id.Prl_update).setOnClickListener(new handle_prl_update());
        if (sBipStateChangeReceiver == null) {
            sBipStateChangeReceiver = new BipStateChangeReceiver();
        }
    }

    @Override // android.app.Activity
    protected Dialog onCreateDialog(int i) {
        return i == DIALOG_BIP_TIMEOUT ? new AlertDialog.Builder(this).setTitle("Warning").setMessage("SIM didn't trigger BIP, please try again!").setPositiveButton("Confirm", (DialogInterface.OnClickListener) null).create() : super.onCreateDialog(i);
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        this.mSubscriptionManager.removeOnSubscriptionsChangedListener(this.RtnOnSubscriptionsChangeListener);
        unregisterBipReceiver();
        sContext = null;
        progressDialog = null;
        sBipStateChangeReceiver = null;
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        int defaultDataSubscriptionId = SubscriptionManager.getDefaultDataSubscriptionId();
        this.tm = (TelephonyManager) getSystemService("phone");
        sim_id = SubscriptionManager.getSlotIndex(defaultDataSubscriptionId);
        Elog.d(TAG, "onResume subId: " + defaultDataSubscriptionId);
        if (sim_id < 0) {
            Elog.d(TAG, "sim_id: " + sim_id);
            Toast.makeText(getApplicationContext(), getString(R.string.Sim_not_ready), 1).show();
            finish();
        }
    }
}
