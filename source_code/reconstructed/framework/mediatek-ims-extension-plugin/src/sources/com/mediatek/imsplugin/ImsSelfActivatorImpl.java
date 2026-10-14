package com.mediatek.imsplugin;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.AsyncResult;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.provider.Settings;
import android.telephony.Rlog;
import android.telephony.ims.ImsCallProfile;
import com.mediatek.ims.ImsCallSessionProxy;
import com.mediatek.ims.ImsService;
import com.mediatek.ims.plugin.impl.ImsSelfActivatorBase;
import com.mediatek.ims.ril.ImsCommandsInterface;
import com.mediatek.internal.telephony.IMtkTelephonyEx;
import com.mediatek.internal.telephony.MtkSubscriptionManager;

/* JADX INFO: loaded from: classes.dex */
public class ImsSelfActivatorImpl extends ImsSelfActivatorBase {
    protected static final String ACTION_AIRPLANE_CHANGE_DONE = "com.mediatek.intent.action.AIRPLANE_CHANGE_DONE";
    private static final int EVENT_IMS_REGISTRATION_INFO = 1;
    private static final int EVENT_IMS_REGISTRATION_TIMEOUT = 2;
    protected static final String EXTRA_AIRPLANE_MODE = "airplaneMode";
    private static final int IMS_REG_TIMEOUT = 10000;
    private static final boolean MTK_VZW_SUPPORT = "OP12".equals(SystemProperties.get("persist.vendor.operator.optr", "OM"));
    private static final String TAG = "ImsExtSelfActivatorImpl";
    private BroadcastReceiver mBroadcastReceiver;
    private ImsCallProfile mCallProfile;
    private Context mContext;
    private String mDialString;
    private Handler mHandler;
    private ImsCallSessionProxy mImsCallSessionProxy;
    private ImsCommandsInterface mImsRILAdapter;
    private ImsService mImsService;
    private boolean mIsDialed;
    private int mPhoneId;

    private class MyHandler extends Handler {
        public MyHandler(Looper looper) {
            super(looper, null, true);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            int i = message.what;
            if (i != ImsSelfActivatorImpl.EVENT_IMS_REGISTRATION_INFO) {
                if (i != ImsSelfActivatorImpl.EVENT_IMS_REGISTRATION_TIMEOUT) {
                    return;
                }
                ImsSelfActivatorImpl.this.dialAnyway();
                return;
            }
            AsyncResult asyncResult = (AsyncResult) message.obj;
            int i2 = ((int[]) asyncResult.result)[ImsSelfActivatorImpl.EVENT_IMS_REGISTRATION_TIMEOUT];
            Rlog.d(ImsSelfActivatorImpl.TAG, "handle EVENT_IMS_REGISTRATION_INFO");
            if (i2 != ImsSelfActivatorImpl.this.mPhoneId) {
                Rlog.d(ImsSelfActivatorImpl.TAG, "Socket id and phone id not matched");
            } else if (((int[]) asyncResult.result)[0] == ImsSelfActivatorImpl.EVENT_IMS_REGISTRATION_INFO) {
                ImsSelfActivatorImpl.this.dialAnyway();
                ImsSelfActivatorImpl.this.mHandler.removeMessages(ImsSelfActivatorImpl.EVENT_IMS_REGISTRATION_TIMEOUT);
            }
        }
    }

    public ImsSelfActivatorImpl(Context context, Handler handler, ImsCallSessionProxy imsCallSessionProxy, ImsCommandsInterface imsCommandsInterface, ImsService imsService, int i) {
        super(context, handler, imsCallSessionProxy, imsCommandsInterface, imsService, i);
        this.mBroadcastReceiver = new BroadcastReceiver() { // from class: com.mediatek.imsplugin.ImsSelfActivatorImpl.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context2, Intent intent) {
                if (ImsSelfActivatorImpl.ACTION_AIRPLANE_CHANGE_DONE.equals(intent.getAction())) {
                    boolean booleanExtra = intent.getBooleanExtra(ImsSelfActivatorImpl.EXTRA_AIRPLANE_MODE, false);
                    Rlog.d(ImsSelfActivatorImpl.TAG, "ACTION_AIRPLANE_CHANGE_DONE: " + booleanExtra);
                    if (booleanExtra == ImsSelfActivatorImpl.EVENT_IMS_REGISTRATION_INFO) {
                        ImsSelfActivatorImpl imsSelfActivatorImpl = ImsSelfActivatorImpl.this;
                        imsSelfActivatorImpl.doSelfActivationDial(imsSelfActivatorImpl.mDialString, ImsSelfActivatorImpl.this.mCallProfile, false);
                        ImsSelfActivatorImpl.this.mContext.unregisterReceiver(ImsSelfActivatorImpl.this.mBroadcastReceiver);
                    }
                }
            }
        };
        Rlog.d(TAG, "Construct ImsExtSelfActivatorImpl()");
        this.mContext = context;
        this.mImsCallSessionProxy = imsCallSessionProxy;
        this.mImsRILAdapter = imsCommandsInterface;
        this.mHandler = new MyHandler(handler.getLooper());
        this.mPhoneId = i;
        this.mImsService = imsService;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void dialAnyway() {
        if (this.mIsDialed) {
            return;
        }
        this.mImsCallSessionProxy.start(this.mDialString, this.mCallProfile);
        this.mIsDialed = true;
    }

    private void notifySelfActivationSMBeforeDial(boolean z) {
        IMtkTelephonyEx iMtkTelephonyExAsInterface = IMtkTelephonyEx.Stub.asInterface(ServiceManager.getService("phoneEx"));
        if (iMtkTelephonyExAsInterface == null) {
            Rlog.d(TAG, "Can not access ITelephonyEx");
            return;
        }
        Bundle bundle = new Bundle();
        bundle.putInt("key_mo_call_type", z ? 1 : 0);
        Rlog.d(TAG, "notifySelfActivationSMBeforeDial");
        try {
            ImsService.getInstance(this.mContext);
            iMtkTelephonyExAsInterface.selfActivationAction(EVENT_IMS_REGISTRATION_INFO, bundle, MtkSubscriptionManager.getSubIdUsingPhoneId(this.mPhoneId));
        } catch (RemoteException e) {
            Rlog.e(TAG, "RemoteException doSelfActivationDial()");
        }
    }

    private boolean tryLeaveFlightmodeBeforeDial() {
        boolean z = Settings.Global.getInt(this.mContext.getContentResolver(), "airplane_mode_on", 0) > 0 ? EVENT_IMS_REGISTRATION_INFO : false;
        Rlog.d(TAG, "tryLeaveFlightmodeBeforeDial() isInFlightmode: " + z);
        if (!z) {
            return false;
        }
        Settings.Global.putInt(this.mContext.getContentResolver(), "airplane_mode_on", 0);
        Intent intent = new Intent("android.intent.action.AIRPLANE_MODE");
        intent.putExtra("state", false);
        this.mContext.sendBroadcastAsUser(intent, UserHandle.ALL);
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ACTION_AIRPLANE_CHANGE_DONE);
        this.mContext.registerReceiver(this.mBroadcastReceiver, intentFilter);
        return true;
    }

    public void close() {
        Rlog.d(TAG, "close()");
        this.mImsRILAdapter.unregisterForImsRegistrationInfo(this.mHandler);
        this.mHandler.removeMessages(EVENT_IMS_REGISTRATION_TIMEOUT);
        this.mImsCallSessionProxy = null;
        this.mCallProfile = null;
        this.mImsRILAdapter = null;
        this.mImsService = null;
    }

    public void doSelfActivationDial(String str, ImsCallProfile imsCallProfile, boolean z) {
        Rlog.d(TAG, "doSelfActivationDial()");
        this.mDialString = str;
        this.mCallProfile = imsCallProfile;
        this.mIsDialed = false;
        if (tryLeaveFlightmodeBeforeDial()) {
            return;
        }
        this.mImsRILAdapter.registerForImsRegistrationInfo(this.mHandler, EVENT_IMS_REGISTRATION_INFO, (Object) null);
        this.mHandler.sendEmptyMessageDelayed(EVENT_IMS_REGISTRATION_TIMEOUT, 10000L);
        notifySelfActivationSMBeforeDial(z);
    }

    public boolean shouldProcessSelfActivation(int i) {
        if (this.mImsService.getImsServiceState(i) == 0) {
            Rlog.d(TAG, "shouldProcessSelfActivation() IMS is IN_SERVICE, return false");
            return false;
        }
        IMtkTelephonyEx iMtkTelephonyExAsInterface = IMtkTelephonyEx.Stub.asInterface(ServiceManager.getService("phoneEx"));
        if (iMtkTelephonyExAsInterface == null) {
            Rlog.d(TAG, "Can not access ITelephonyEx");
            return false;
        }
        try {
            ImsService.getInstance(this.mContext);
            int selfActivateState = iMtkTelephonyExAsInterface.getSelfActivateState(MtkSubscriptionManager.getSubIdUsingPhoneId(i));
            Rlog.d(TAG, "Self Activate State: " + selfActivateState);
            return selfActivateState == EVENT_IMS_REGISTRATION_TIMEOUT;
        } catch (RemoteException e) {
            Rlog.e(TAG, "RemoteException shouldProcessSelfActivation()");
            return false;
        }
    }
}
