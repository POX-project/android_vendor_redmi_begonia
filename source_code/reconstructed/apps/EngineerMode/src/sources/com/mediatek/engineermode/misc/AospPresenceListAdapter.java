package com.mediatek.engineermode.misc;

import android.content.Context;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.RemoteException;
import android.telephony.TelephonyManager;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.BaseAdapter;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;
import com.android.ims.internal.uce.common.CapInfo;
import com.android.ims.internal.uce.common.StatusCode;
import com.android.ims.internal.uce.common.UceLong;
import com.android.ims.internal.uce.options.IOptionsListener;
import com.android.ims.internal.uce.options.IOptionsService;
import com.android.ims.internal.uce.options.OptionsCapInfo;
import com.android.ims.internal.uce.options.OptionsCmdStatus;
import com.android.ims.internal.uce.options.OptionsSipResponse;
import com.android.ims.internal.uce.presence.IPresenceListener;
import com.android.ims.internal.uce.presence.IPresenceService;
import com.android.ims.internal.uce.presence.PresCapInfo;
import com.android.ims.internal.uce.presence.PresCmdStatus;
import com.android.ims.internal.uce.presence.PresPublishTriggerType;
import com.android.ims.internal.uce.presence.PresResInfo;
import com.android.ims.internal.uce.presence.PresRlmiInfo;
import com.android.ims.internal.uce.presence.PresSipResponse;
import com.android.ims.internal.uce.presence.PresTupleInfo;
import com.android.ims.internal.uce.uceservice.IUceListener;
import com.android.ims.internal.uce.uceservice.IUceService;
import com.android.ims.internal.uce.uceservice.ImsUceManager;
import com.mediatek.engineermode.R;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public class AospPresenceListAdapter extends BaseAdapter implements View.OnClickListener {
    private Context mContext;
    private List<String> mData;
    private ImsUceManager mImsUceManager;
    private IOptionsListener mOptionsListener;
    private IOptionsService mOptionsService;
    private UceLong mOptionsServiceListenerHdl;
    private IPresenceListener mPresenceListener;
    private IPresenceService mPresenceService;
    private UceLong mPresenceServiceListenerHdl;
    private IUceListener mUceListener;
    private IUceService mUceService;
    private int mOptionsServiceHandle = -1;
    private int mPresenceServiceHandle = -1;
    private final int mUserData = 10;
    private final int EVENT_SHOW_TOAST = 0;
    private final int mId = 1;
    private final int mSipResponseCode = 200;
    private final String mReasonPhrase = "no reason phrase";
    private final String TOASTINFO = "toastInfo";
    private String[] mContactUriList = new String[2];
    private Handler mHandler = new Handler() { // from class: com.mediatek.engineermode.misc.AospPresenceListAdapter.1
        @Override // android.os.Handler
        public void handleMessage(Message message) {
            if (message.what == 0) {
                AospPresenceListAdapter.this.showToast(message.getData().getString("toastInfo"));
            }
        }
    };
    private SharedPreferences.OnSharedPreferenceChangeListener prefListener = new SharedPreferences.OnSharedPreferenceChangeListener() { // from class: com.mediatek.engineermode.misc.AospPresenceListAdapter.2
        @Override // android.content.SharedPreferences.OnSharedPreferenceChangeListener
        public void onSharedPreferenceChanged(SharedPreferences sharedPreferences, String str) {
            String string = sharedPreferences.getString(str, "-1");
            AospPresenceListAdapter.this.showToast("Key changed: " + str);
            if (str.equals(AospPresenceTestActivity.PREF_KEY_CONTACT1)) {
                AospPresenceListAdapter.this.mContactUriList[0] = "tel:" + string;
                return;
            }
            if (str.equals(AospPresenceTestActivity.PREF_KEY_CONTACT2)) {
                AospPresenceListAdapter.this.mContactUriList[1] = "tel:" + string;
            }
        }
    };

    static class ViewHolder {
        Button mBtn;
        TextView mTv;

        ViewHolder() {
        }
    }

    public AospPresenceListAdapter(List<String> list) {
        this.mData = list;
    }

    private OptionsCapInfo createOptionsCapInfo() {
        OptionsCapInfo optionsCapInfo = new OptionsCapInfo();
        CapInfo capInfo = new CapInfo();
        optionsCapInfo.setSdp("test");
        optionsCapInfo.setCapInfo(capInfo);
        return optionsCapInfo;
    }

    private PresCapInfo createPresCapInfo() {
        PresCapInfo presCapInfo = new PresCapInfo();
        presCapInfo.setCapInfo(new CapInfo());
        presCapInfo.setContactUri("test");
        return presCapInfo;
    }

    private void initContactUriList() {
        String msisdn = TelephonyManager.from(this.mContext).getMsisdn();
        if (msisdn == null) {
            msisdn = "";
        } else if (msisdn.startsWith("+")) {
            msisdn = msisdn.substring(1);
        }
        SharedPreferences sharedPreferences = this.mContext.getSharedPreferences(AospPresenceTestActivity.PREF_NAME, 0);
        String string = sharedPreferences.getString(AospPresenceTestActivity.PREF_KEY_CONTACT1, msisdn);
        String string2 = sharedPreferences.getString(AospPresenceTestActivity.PREF_KEY_CONTACT2, msisdn);
        this.mContactUriList[0] = "tel:" + string;
        this.mContactUriList[1] = "tel:" + string2;
        sharedPreferences.registerOnSharedPreferenceChangeListener(this.prefListener);
    }

    private void initUce() {
        ImsUceManager imsUceManager = ImsUceManager.getInstance(this.mContext);
        this.mImsUceManager = imsUceManager;
        imsUceManager.createUceService(true);
        this.mUceService = this.mImsUceManager.getUceServiceInstance();
        this.mUceListener = new IUceListener.Stub() { // from class: com.mediatek.engineermode.misc.AospPresenceListAdapter.3
            public void setStatus(int i) throws RemoteException {
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [setStatus] Service status value = " + i);
            }
        };
        this.mPresenceListener = new IPresenceListener.Stub() { // from class: com.mediatek.engineermode.misc.AospPresenceListAdapter.4
            public void capInfoReceived(String str, PresTupleInfo[] presTupleInfoArr) {
                StringBuilder sb = new StringBuilder();
                for (int i = 0; i < presTupleInfoArr.length; i++) {
                    sb.append("[i] Feature tag = " + presTupleInfoArr[i].getFeatureTag());
                    sb.append("[i] Contact uri in tupleInfo = " + presTupleInfoArr[i].getContactUri());
                    sb.append("[i] Timestamp = " + presTupleInfoArr[i].getTimestamp());
                }
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [capInfoReceived] Contact uri = " + str + sb.toString());
            }

            public void cmdStatus(PresCmdStatus presCmdStatus) {
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [CmdStatus] CmdId = " + presCmdStatus.getCmdId().getCmdId() + ", StatusCode = " + presCmdStatus.getStatus().getStatusCode() + ", UserData = " + presCmdStatus.getUserData() + ", RequestId = " + presCmdStatus.getRequestId());
            }

            public void getVersionCb(String str) {
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [getVersionCb] Presence service version = " + str);
            }

            public void listCapInfoReceived(PresRlmiInfo presRlmiInfo, PresResInfo[] presResInfoArr) {
                StringBuilder sb = new StringBuilder();
                int i = 0;
                while (i < presResInfoArr.length) {
                    sb.append("[" + i + "] ResUri = " + presResInfoArr[i].getResUri());
                    sb.append("[" + i + "] DisPlayName = " + presResInfoArr[i].getDisplayName());
                    sb.append("[" + i + "] ResInstanceState = " + presResInfoArr[i].getInstanceInfo().getResInstanceState());
                    sb.append("[" + i + "] ResId = " + presResInfoArr[i].getInstanceInfo().getResId());
                    sb.append("[" + i + "] Reason = " + presResInfoArr[i].getInstanceInfo().getReason());
                    sb.append("[" + i + "] Uri = " + presResInfoArr[i].getInstanceInfo().getPresentityUri());
                    PresTupleInfo[] tupleInfo = presResInfoArr[i].getInstanceInfo().getTupleInfo();
                    while (0 < tupleInfo.length) {
                        sb.append("[" + i + "][0] Feature tag = " + tupleInfo[0].getFeatureTag());
                        sb.append("[" + i + "][0] Contact uri in tupleInfo = " + tupleInfo[0].getContactUri());
                        sb.append("[" + i + "][0] Timestamp = " + tupleInfo[0].getTimestamp());
                        i++;
                    }
                    i++;
                }
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [listCapInfoReceived]  Rlmi uri = " + presRlmiInfo.getUri() + ", Version = " + presRlmiInfo.getVersion() + ", FullState = " + presRlmiInfo.isFullState() + ", ListName = " + presRlmiInfo.getListName() + ", RequestId = " + presRlmiInfo.getRequestId() + ", SubscrptionState = " + presRlmiInfo.getPresSubscriptionState().getPresSubscriptionStateValue() + ", SubscriptionExpireTime = " + presRlmiInfo.getSubscriptionExpireTime() + ", SubscriptionTerminatedReason = " + presRlmiInfo.getSubscriptionTerminatedReason() + sb.toString());
            }

            public void publishTriggering(PresPublishTriggerType presPublishTriggerType) {
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [publishTriggering] Type = " + presPublishTriggerType.getPublishTrigeerType());
            }

            public void serviceAvailable(StatusCode statusCode) {
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [serviceAvailable] StatusCode = " + statusCode);
            }

            public void serviceUnAvailable(StatusCode statusCode) {
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [serviceUnAvailable] StatusCode = " + statusCode);
            }

            public void sipResponseReceived(PresSipResponse presSipResponse) {
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [sipResponseReceived] CmdId = " + presSipResponse.getCmdId().getCmdId() + ", RequestId = " + presSipResponse.getRequestId() + ", SipResponseCode = " + presSipResponse.getSipResponseCode() + ", RetryAfter time = " + presSipResponse.getRetryAfter() + ", ReasonPharse = " + presSipResponse.getReasonPhrase());
            }

            public void unpublishMessageSent() {
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [unpublishMessageSent] ");
            }
        };
        this.mOptionsListener = new IOptionsListener.Stub() { // from class: com.mediatek.engineermode.misc.AospPresenceListAdapter.5
            public void cmdStatus(OptionsCmdStatus optionsCmdStatus) {
                AospPresenceListAdapter.this.sendMessageToHandler(("SUCCESS!! [CmdStatus] CmdId = " + optionsCmdStatus.getCmdId().getCmdId() + ", StatusCode = " + optionsCmdStatus.getStatus().getStatusCode() + ", UserData = " + optionsCmdStatus.getUserData()) + AospPresenceListAdapter.this.transferCapInfoToString(optionsCmdStatus.getCapInfo()));
            }

            public void getVersionCb(String str) {
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [getVersionCb] Options service version = " + str);
            }

            public void incomingOptions(String str, OptionsCapInfo optionsCapInfo, int i) {
                AospPresenceListAdapter.this.sendMessageToHandler(("SUCCESS!! [incomingOptions] uri = " + str + ", tId = " + i) + AospPresenceListAdapter.this.transferCapInfoToString(optionsCapInfo.getCapInfo()));
            }

            public void serviceAvailable(StatusCode statusCode) {
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [serviceAvailable] StatusCode = " + statusCode);
            }

            public void serviceUnavailable(StatusCode statusCode) {
                AospPresenceListAdapter.this.sendMessageToHandler("SUCCESS!! [serviceUnAvailable] StatusCode = " + statusCode);
            }

            public void sipResponseReceived(String str, OptionsSipResponse optionsSipResponse, OptionsCapInfo optionsCapInfo) {
                AospPresenceListAdapter.this.sendMessageToHandler(("SUCCESS!! [sipResponseReceived] CmdId = " + optionsSipResponse.getCmdId().getCmdId() + ", RequestId = " + optionsSipResponse.getRequestId() + ", SipResponseCode = " + optionsSipResponse.getSipResponseCode() + ", RetryAfter time = " + optionsSipResponse.getRetryAfter() + ", ReasonPharse = " + optionsSipResponse.getReasonPhrase() + ", sdp = " + optionsCapInfo.getSdp()) + AospPresenceListAdapter.this.transferCapInfoToString(optionsCapInfo.getCapInfo()));
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendMessageToHandler(String str) {
        Message message = new Message();
        message.what = 0;
        Bundle bundle = new Bundle();
        bundle.putString("toastInfo", str);
        message.setData(bundle);
        this.mHandler.sendMessage(message);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void showToast(String str) {
        Toast.makeText(this.mContext, str, 0).show();
    }

    private void showToastWithStatusCode(String str, int i) {
        if (i == 0) {
            Toast.makeText(this.mContext, "SUCCESS!! [ " + str + "] statusCode = " + i, 0).show();
            return;
        }
        Toast.makeText(this.mContext, "FAIL!! [ " + str + "] statusCode = " + i, 0).show();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:80:0x0123  */
    private void startTestApi(String str) {
        switch (str) {
            case "[UCE]startService":
                testUceStartService();
                break;
            case "[UCE]stopService":
                testUceStopService();
                break;
            case "[UCE]isServiceStarted":
                testUceIsServiceStarted();
                break;
            case "[UCE]createOptionsService":
                testUceCreateOptionsService();
                break;
            case "[UCE]destroyOptionsService":
                testUceDestroyOptionsService();
                break;
            case "[UCE]createPresenceService":
                testUceCreatePresenceService();
                break;
            case "[UCE]destroyPresenceService":
                testUceDestroyPresenceService();
                break;
            case "[UCE]getServiceStatus":
                testUceGetServiceStatus();
                break;
            case "[UCE]getPresenceService":
                testUceGetPresenceService();
                break;
            case "[UCE]getOptionsService":
                testUceGetOptionsService();
                break;
            case "[PRESENCE]getVersion":
                testPresenceGetVersion();
                break;
            case "[PRESENCE]addListener":
                testPresenceAddLitener();
                break;
            case "[PRESENCE]removeListener":
                testPresenceRemoveLitener();
                break;
            case "[PRESENCE]reenableService":
                testPresenceReenableService();
                break;
            case "[PRESENCE]publishMyCap":
                testPresencePublshMyCap();
                break;
            case "[PRESENCE]getContactCap":
                testPresenceGetContactCap();
                break;
            case "[PRESENCE]getContactListCap":
                testPresenceGetContactListCap();
                break;
            case "[OPTIONS]getVersion":
                testOptionsGetVersion();
                break;
            case "[OPTIONS]addListener":
                testOptionsAddListener();
                break;
            case "[OPTIONS]removeListener":
                testOptionsRemoveListener();
                break;
            case "[OPTIONS]setMyInfo":
                testOptionsSetMyInfo();
                break;
            case "[OPTIONS]getMyInfo":
                testOptionsGetMyInfo();
                break;
            case "[OPTIONS]getContactCap":
                testOptionsGetContactCap();
                break;
            case "[OPTIONS]getContactListCap":
                testOptionsGetContactListCap();
                break;
            case "[OPTIONS]responseIncomingOptions":
                testOptionsResponseIncomingOptions();
                break;
        }
    }

    private void testOptionsAddListener() {
        try {
            if (this.mOptionsService == null) {
                showToast("FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService");
                return;
            }
            UceLong uceLong = new UceLong();
            this.mOptionsServiceListenerHdl = uceLong;
            uceLong.setUceLong(100L);
            showToastWithStatusCode("AddListener", this.mOptionsService.addListener(this.mOptionsServiceHandle, this.mOptionsListener, this.mOptionsServiceListenerHdl).getStatusCode());
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testOptionsGetContactCap() {
        try {
            if (this.mOptionsService == null) {
                showToast("FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService");
            } else {
                showToastWithStatusCode("GetContactCap", this.mOptionsService.getContactCap(this.mOptionsServiceHandle, this.mContactUriList[0], 10).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testOptionsGetContactListCap() {
        try {
            if (this.mOptionsService == null) {
                showToast("FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService");
            } else {
                showToastWithStatusCode("GetContactListCap", this.mOptionsService.getContactListCap(this.mOptionsServiceHandle, this.mContactUriList, 10).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testOptionsGetMyInfo() {
        try {
            if (this.mOptionsService == null) {
                showToast("FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService");
            } else {
                new CapInfo();
                showToastWithStatusCode("GetMyInfo", this.mOptionsService.getMyInfo(this.mOptionsServiceHandle, 10).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testOptionsGetVersion() {
        try {
            if (this.mOptionsService == null) {
                showToast("FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService");
            } else {
                showToastWithStatusCode("GetVersion", this.mOptionsService.getVersion(this.mOptionsServiceHandle).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testOptionsRemoveListener() {
        try {
            if (this.mOptionsService == null) {
                showToast("FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService");
            } else {
                showToastWithStatusCode("RemoveListener", this.mOptionsService.removeListener(this.mOptionsServiceHandle, this.mOptionsServiceListenerHdl).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testOptionsResponseIncomingOptions() {
        try {
            if (this.mOptionsService == null) {
                showToast("FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService");
            } else {
                showToastWithStatusCode("ResponseIncomingOptions", this.mOptionsService.responseIncomingOptions(this.mOptionsServiceHandle, 1, 200, "no reason phrase", createOptionsCapInfo(), false).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testOptionsSetMyInfo() {
        try {
            if (this.mOptionsService == null) {
                showToast("FAIL!! Please Step1. Click createOptionsService\nStep2. Click getOptionsService");
            } else {
                showToastWithStatusCode("SetMyInfo", this.mOptionsService.setMyInfo(this.mOptionsServiceHandle, new CapInfo(), 10).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testPresenceAddLitener() {
        try {
            if (this.mPresenceService == null) {
                showToast("FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService");
                return;
            }
            UceLong uceLong = new UceLong();
            this.mPresenceServiceListenerHdl = uceLong;
            uceLong.setUceLong(100L);
            showToastWithStatusCode("AddListener", this.mPresenceService.addListener(this.mPresenceServiceHandle, this.mPresenceListener, this.mPresenceServiceListenerHdl).getStatusCode());
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testPresenceGetContactCap() {
        try {
            if (this.mPresenceService == null) {
                showToast("FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService");
            } else {
                showToastWithStatusCode("GetContactCap", this.mPresenceService.getContactCap(this.mPresenceServiceHandle, this.mContactUriList[0], 10).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testPresenceGetContactListCap() {
        try {
            if (this.mPresenceService == null) {
                showToast("FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService");
            } else {
                showToastWithStatusCode("GetContactListCap", this.mPresenceService.getContactListCap(this.mPresenceServiceHandle, this.mContactUriList, 10).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testPresenceGetVersion() {
        try {
            if (this.mPresenceService == null) {
                showToast("FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService");
            } else {
                showToastWithStatusCode("GetVersion", this.mPresenceService.getVersion(this.mPresenceServiceHandle).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testPresencePublshMyCap() {
        try {
            if (this.mPresenceService == null) {
                showToast("FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService");
            } else {
                showToastWithStatusCode("PublishMyCap", this.mPresenceService.publishMyCap(this.mPresenceServiceHandle, createPresCapInfo(), 10).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testPresenceReenableService() {
        try {
            if (this.mPresenceService == null) {
                showToast("FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService");
            } else {
                showToastWithStatusCode("ReenableService", this.mPresenceService.reenableService(this.mPresenceServiceHandle, 10).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testPresenceRemoveLitener() {
        try {
            if (this.mPresenceService == null) {
                showToast("FAIL!! Please Step1. Click createPresenceService\nStep2. Click getPresenceService");
            } else {
                showToastWithStatusCode("RemoveListener", this.mPresenceService.removeListener(this.mPresenceServiceHandle, this.mPresenceServiceListenerHdl).getStatusCode());
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testUceCreateOptionsService() {
        try {
            this.mOptionsServiceHandle = this.mUceService.createOptionsService((IOptionsListener) null, (UceLong) null);
            showToast("SUCCESS!! [createOptionsService]  ret = " + this.mOptionsServiceHandle);
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testUceCreatePresenceService() {
        try {
            this.mPresenceServiceHandle = this.mUceService.createPresenceService((IPresenceListener) null, (UceLong) null);
            showToast("SUCCESS!! [createPresenceService] presenceServiceHandle = " + this.mPresenceServiceHandle);
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testUceDestroyOptionsService() {
        try {
            this.mUceService.destroyOptionsService(this.mOptionsServiceHandle);
            showToast("SUCCESS!! [destroyOptionsService]");
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testUceDestroyPresenceService() {
        try {
            this.mUceService.destroyPresenceService(this.mOptionsServiceHandle);
            showToast("SUCCESS!! [destroyPresenceService] ");
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testUceGetOptionsService() {
        try {
            IOptionsService optionsService = this.mUceService.getOptionsService();
            this.mOptionsService = optionsService;
            if (optionsService != null) {
                showToast("SUCCESS!! [GetOptionsService] mOptionsService is not null");
            } else {
                showToast("SUCCESS!! [GetOptionsService] mOptionsService is null");
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testUceGetPresenceService() {
        try {
            IPresenceService presenceService = this.mUceService.getPresenceService();
            this.mPresenceService = presenceService;
            if (presenceService != null) {
                showToast("SUCCESS!! [GetPresenceService] mPresenceService is not null");
            } else {
                showToast("SUCCESS!! [GetPresenceService] mPresenceService is null");
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testUceGetServiceStatus() {
        try {
            showToast("SUCCESS!! [getServiceStatus] ret = " + this.mUceService.getServiceStatus());
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testUceIsServiceStarted() {
        try {
            showToast("SUCCESS!! [isServiceStarted] ret = " + this.mUceService.isServiceStarted());
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testUceStartService() {
        try {
            if (this.mUceService.startService(this.mUceListener)) {
                showToast("SUCCESS!! [startService]");
            } else {
                showToast("FAIL!! [startService]");
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    private void testUceStopService() {
        try {
            if (this.mUceService.stopService()) {
                showToast("SUCCESS!! [stopService]");
            } else {
                showToast("FAIL!! [stopService]");
            }
        } catch (RemoteException e) {
            showToast("FAIL!! The connection between client and server is lost");
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String transferCapInfoToString(CapInfo capInfo) {
        String str = ", isImsSupported = " + capInfo.isImSupported() + ", isFtThumbSupported = " + capInfo.isFtThumbSupported() + ", isFtSnFSupported = " + capInfo.isFtSnFSupported() + ", isFtHttpSupported = " + capInfo.isFtHttpSupported() + ", isFtSupported = " + capInfo.isFtSupported() + ", isIsSupported = " + capInfo.isIsSupported() + ", isVsDuringCSSupported = " + capInfo.isVsDuringCSSupported() + ", isVsSupported = " + capInfo.isVsSupported() + ", isSpSupported = " + capInfo.isSpSupported() + ", isCdViaPresenceSupported = " + capInfo.isCdViaPresenceSupported() + ", isIpVideoSupported = " + capInfo.isIpVideoSupported() + ", isGeoPullFtSupported = " + capInfo.isGeoPullFtSupported() + ", isGeoPullSupported = " + capInfo.isGeoPullSupported() + ", isGeoPushSupported = " + capInfo.isGeoPushSupported() + ", isSmSupported = " + capInfo.isSmSupported() + ", isFullSnFGroupChatSupported = " + capInfo.isFullSnFGroupChatSupported() + ", isRcsIpVoiceCallSupported = " + capInfo.isRcsIpVoiceCallSupported() + ", isRcsIpVideoCallSupported = " + capInfo.isRcsIpVideoCallSupported() + ", isRcsIpVideoOnlyCallSupported = " + capInfo.isRcsIpVideoOnlyCallSupported() + ", timestamp = " + capInfo.getCapTimestamp();
        for (String str2 : capInfo.getExts()) {
            str = (str + ",") + str2;
        }
        return str;
    }

    @Override // android.widget.Adapter
    public int getCount() {
        List<String> list = this.mData;
        if (list == null) {
            return 0;
        }
        return list.size();
    }

    @Override // android.widget.Adapter
    public Object getItem(int i) {
        return this.mData.get(i);
    }

    @Override // android.widget.Adapter
    public long getItemId(int i) {
        return i;
    }

    @Override // android.widget.Adapter
    public View getView(int i, View view, ViewGroup viewGroup) {
        if (this.mContext == null) {
            this.mContext = viewGroup.getContext();
            initContactUriList();
            initUce();
        }
        if (view == null) {
            view = LayoutInflater.from(viewGroup.getContext()).inflate(R.layout.aosp_presence_listview_item, (ViewGroup) null);
            ViewHolder viewHolder = new ViewHolder();
            viewHolder.mTv = (TextView) view.findViewById(R.id.mTv);
            viewHolder.mBtn = (Button) view.findViewById(R.id.mBtn);
            view.setTag(viewHolder);
        }
        ViewHolder viewHolder2 = (ViewHolder) view.getTag();
        viewHolder2.mBtn.setText("Test");
        viewHolder2.mBtn.setTag(R.id.btn, this.mData.get(i));
        viewHolder2.mBtn.setOnClickListener(this);
        viewHolder2.mTv.setText(this.mData.get(i));
        return view;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        if (view.getId() != R.id.mBtn) {
            return;
        }
        startTestApi((String) view.getTag(R.id.btn));
    }
}
