package com.mediatek.internal.telephony.dataconnection;

import android.R;
import android.app.AlarmManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.INetworkManagementEventObserver;
import android.net.LinkAddress;
import android.net.LinkProperties;
import android.net.NetworkAgentConfig;
import android.net.NetworkCapabilities;
import android.net.NetworkInfo;
import android.net.NetworkProvider;
import android.net.ProxyInfo;
import android.net.TelephonyNetworkSpecifier;
import android.os.AsyncResult;
import android.os.Build;
import android.os.INetworkManagementService;
import android.os.Message;
import android.os.PersistableBundle;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemClock;
import android.os.SystemProperties;
import android.system.OsConstants;
import android.telephony.CarrierConfigManager;
import android.telephony.DataFailCause;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.SubscriptionManager;
import android.telephony.data.ApnSetting;
import android.telephony.data.DataCallResponse;
import android.telephony.data.DataProfile;
import android.text.TextUtils;
import android.util.Pair;
import com.android.internal.telephony.DctConstants;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.PhoneFactory;
import com.android.internal.telephony.ServiceStateTracker;
import com.android.internal.telephony.SubscriptionController;
import com.android.internal.telephony.TelephonyDevController;
import com.android.internal.telephony.TelephonyStatsLog;
import com.android.internal.telephony.dataconnection.ApnContext;
import com.android.internal.telephony.dataconnection.ApnSettingUtils;
import com.android.internal.telephony.dataconnection.DataConnection;
import com.android.internal.telephony.dataconnection.DataServiceManager;
import com.android.internal.telephony.dataconnection.DcController;
import com.android.internal.telephony.dataconnection.DcNetworkAgent;
import com.android.internal.telephony.dataconnection.DcTesterFailBringUpAll;
import com.android.internal.telephony.dataconnection.DcTracker;
import com.android.internal.telephony.dataconnection.DcTrackerInjector;
import com.android.internal.telephony.dataconnection.TelephonyNetworkFactory;
import com.android.internal.telephony.metrics.TelephonyMetrics;
import com.android.server.net.BaseNetworkObserver;
import com.mediatek.internal.telephony.MtkGsmCdmaPhone;
import com.mediatek.internal.telephony.MtkHardwareConfig;
import com.mediatek.internal.telephony.MtkPhoneSwitcher;
import com.mediatek.internal.telephony.MtkTelephonyDevController;
import com.mediatek.internal.telephony.OpTelephonyCustomizationFactoryBase;
import com.mediatek.internal.telephony.OpTelephonyCustomizationUtils;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import com.mediatek.internal.telephony.ppl.PplMessageManager;
import com.mediatek.telephony.internal.telephony.vsim.ExternalSimConstants;
import java.lang.reflect.Method;
import java.net.Inet4Address;
import java.net.Inet6Address;
import java.net.InetAddress;
import java.util.Iterator;
import java.util.function.Function;
import java.util.function.IntFunction;
import miui.telephony.TelephonyUtils;

/* JADX INFO: loaded from: classes.dex */
public class MtkDataConnection extends DataConnection {
    static final int EVENT_ADDRESS_REMOVED = 262178;
    static final int EVENT_FALLBACK_RETRY_CONNECTION = 262180;
    static final int EVENT_GET_DATA_CALL_LIST = 262182;
    static final int EVENT_IPV4_ADDRESS_REMOVED = 262176;
    static final int EVENT_IPV6_ADDRESS_REMOVED = 262177;
    static final int EVENT_IPV6_ADDRESS_UPDATED = 262181;
    public static final int EVENT_SET_LINGERING_TIME = 532484;
    static final int EVENT_UPDATE_NETWORKAGENT_SSC_MODE3 = 262183;
    static final int EVENT_VOICE_CALL = 262179;
    private static final String INTENT_RETRY_ALARM_TAG = "tag";
    private static final String INTENT_RETRY_ALARM_WHAT = "what";
    private static final String LOG_TAG = "MtkDc";
    private static final int RA_GET_IPV6_VALID_FAIL = -1000;
    private static final int RA_INITIAL_FAIL = -1;
    private static final int RA_REFRESH_FAIL = -2;
    private static Method methodQueueOrSendMessage;
    private String mActionRetry;
    private AlarmManager mAlarmManager;
    private INetworkManagementEventObserver mAlertObserver;
    private int mCause;
    private IDataConnectionExt mDataConnectionExt;
    protected DcFailCauseManager mDcFcMgr;
    private AddressInfo mGlobalV6AddrInfo;
    private BroadcastReceiver mIntentReceiver;
    private String mInterfaceName;
    private boolean mIsInVoiceCall;
    private boolean mIsOp20;
    private boolean mIsRemoveMmsCapability;
    private boolean mIsSetupDataCallByCi;
    private boolean mIsSupportConcurrent;
    private NetworkCapabilities mNetworkCapabilities;
    private final INetworkManagementService mNetworkManager;
    private int mRetryCount;
    private SubscriptionController mSubController;
    private TelephonyDevController mTelDevController;
    private OpTelephonyCustomizationFactoryBase mTelephonyCustomizationFactory;
    private long mValid;
    private static final boolean DBG = Build.IS_DEBUGGABLE;
    private static final boolean VDBG = Build.IS_ENG;

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.dataconnection.MtkDataConnection$3, reason: invalid class name */
    static /* synthetic */ class AnonymousClass3 {
        static final /* synthetic */ int[] $SwitchMap$com$android$internal$telephony$dataconnection$DataConnection$SetupResult;

        static {
            int[] iArr = new int[DataConnection.SetupResult.values().length];
            $SwitchMap$com$android$internal$telephony$dataconnection$DataConnection$SetupResult = iArr;
            try {
                iArr[DataConnection.SetupResult.SUCCESS.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$dataconnection$DataConnection$SetupResult[DataConnection.SetupResult.ERROR_RADIO_NOT_AVAILABLE.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$dataconnection$DataConnection$SetupResult[DataConnection.SetupResult.ERROR_INVALID_ARG.ordinal()] = 3;
            } catch (NoSuchFieldError e3) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$dataconnection$DataConnection$SetupResult[DataConnection.SetupResult.ERROR_DATA_SERVICE_SPECIFIC_ERROR.ordinal()] = 4;
            } catch (NoSuchFieldError e4) {
            }
            try {
                $SwitchMap$com$android$internal$telephony$dataconnection$DataConnection$SetupResult[DataConnection.SetupResult.ERROR_STALE.ordinal()] = 5;
            } catch (NoSuchFieldError e5) {
            }
        }
    }

    private class AddressInfo {
        String mIntfName;
        LinkAddress mLinkAddr;

        public AddressInfo(String str, LinkAddress linkAddress) {
            this.mIntfName = str;
            this.mLinkAddr = linkAddress;
        }

        public String toString() {
            StringBuilder sb = new StringBuilder();
            sb.append("interfaceName: ");
            sb.append(this.mIntfName);
            sb.append("/");
            LinkAddress linkAddress = this.mLinkAddr;
            sb.append(linkAddress != null ? TelephonyUtils.piiIP(linkAddress.toString()) : "");
            return sb.toString();
        }
    }

    private class MtkDcActivatingState extends DataConnection.DcActivatingState {
        private MtkDcActivatingState() {
            super(MtkDataConnection.this);
        }

        public void enter() {
            if (MtkDataConnection.DBG) {
                MtkDataConnection.this.log("DcActivatingState: enter dc=" + MtkDataConnection.this);
            }
            super.enter();
        }

        public void exit() {
            if (MtkDataConnection.DBG) {
                MtkDataConnection.this.log("DcActivatingState: exit dc=" + MtkDataConnection.this);
            }
            super.exit();
        }

        public boolean processMessage(Message message) {
            DataConnection.ConnectionParams connectionParams;
            DataCallResponse parcelable;
            if (MtkDataConnection.DBG) {
                MtkDataConnection.this.log("DcActivatingState: msg=" + MtkDataConnection.msgToString(message));
            }
            switch (message.what) {
                case 262144:
                    DataConnection.ConnectionParams connectionParams2 = (DataConnection.ConnectionParams) message.obj;
                    MtkDataConnection.this.mApnContexts.put(connectionParams2.mApnContext, connectionParams2);
                    if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActivatingState: mApnContexts size=" + MtkDataConnection.this.mApnContexts.size());
                    }
                    break;
                case 262145:
                    int i = 0;
                    if (MtkDataConnection.this.mIsSetupDataCallByCi) {
                        MtkDataConnection.this.mIsSetupDataCallByCi = false;
                        AsyncResult asyncResult = (AsyncResult) message.obj;
                        parcelable = (DataCallResponse) asyncResult.result;
                        connectionParams = (DataConnection.ConnectionParams) asyncResult.userObj;
                    } else {
                        connectionParams = (DataConnection.ConnectionParams) message.obj;
                        parcelable = message.getData().getParcelable("data_call_response");
                        i = message.arg1;
                    }
                    DataConnection.SetupResult setupResultOnSetupConnectionCompleted = MtkDataConnection.this.onSetupConnectionCompleted(i, parcelable, connectionParams);
                    if (setupResultOnSetupConnectionCompleted != DataConnection.SetupResult.ERROR_STALE && MtkDataConnection.this.mConnectionParams != connectionParams) {
                        MtkDataConnection.this.loge("DcActivatingState: WEIRD mConnectionsParams:" + MtkDataConnection.this.mConnectionParams + " != cp:" + connectionParams);
                    }
                    if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActivatingState onSetupConnectionCompleted result=" + setupResultOnSetupConnectionCompleted + " dc=" + MtkDataConnection.this);
                    }
                    if (connectionParams.mApnContext != null) {
                        connectionParams.mApnContext.requestLog("onSetupConnectionCompleted result=" + setupResultOnSetupConnectionCompleted);
                    }
                    int i2 = AnonymousClass3.$SwitchMap$com$android$internal$telephony$dataconnection$DataConnection$SetupResult[setupResultOnSetupConnectionCompleted.ordinal()];
                    if (i2 == 1) {
                        MtkDataConnection.this.mDcFailCause = 0;
                        MtkDataConnection.this.resetRetryCount();
                        MtkDataConnection mtkDataConnection = MtkDataConnection.this;
                        mtkDataConnection.transitionTo(mtkDataConnection.mActiveState);
                    } else if (i2 == 2) {
                        MtkDataConnection.this.mInactiveState.setEnterNotificationParams(connectionParams, setupResultOnSetupConnectionCompleted.mFailCause);
                        MtkDataConnection mtkDataConnection2 = MtkDataConnection.this;
                        mtkDataConnection2.transitionTo(mtkDataConnection2.mInactiveState);
                    } else if (i2 == 3) {
                        MtkDataConnection.this.tearDownData(connectionParams);
                        MtkDataConnection mtkDataConnection3 = MtkDataConnection.this;
                        mtkDataConnection3.transitionTo(mtkDataConnection3.mDisconnectingErrorCreatingConnection);
                    } else if (i2 == 4) {
                        long suggestedRetryDelay = MtkDataConnection.this.getSuggestedRetryDelay(parcelable);
                        connectionParams.mApnContext.setModemSuggestedDelay(suggestedRetryDelay);
                        String str = "DcActivatingState: ERROR_DATA_SERVICE_SPECIFIC_ERROR  delay=" + suggestedRetryDelay + " result=" + setupResultOnSetupConnectionCompleted + " result.isRadioRestartFailure=" + DataFailCause.isRadioRestartFailure(MtkDataConnection.this.mPhone.getContext(), setupResultOnSetupConnectionCompleted.mFailCause, MtkDataConnection.this.mPhone.getSubId()) + " isPermanentFailure=" + MtkDataConnection.this.mDct.isPermanentFailure(setupResultOnSetupConnectionCompleted.mFailCause);
                        if (MtkDataConnection.DBG) {
                            MtkDataConnection.this.log(str);
                        }
                        if (connectionParams.mApnContext != null) {
                            connectionParams.mApnContext.requestLog(str);
                        }
                        if (setupResultOnSetupConnectionCompleted.mFailCause == MtkDataConnection.RA_GET_IPV6_VALID_FAIL) {
                            MtkDataConnection.this.onSetupFallbackConnection(parcelable, connectionParams);
                            MtkDataConnection.this.mDcFailCause = MtkDataConnection.RA_GET_IPV6_VALID_FAIL;
                            MtkDataConnection mtkDataConnection4 = MtkDataConnection.this;
                            mtkDataConnection4.deferMessage(mtkDataConnection4.obtainMessage(MtkDataConnection.EVENT_FALLBACK_RETRY_CONNECTION, mtkDataConnection4.mTag));
                            MtkDataConnection mtkDataConnection5 = MtkDataConnection.this;
                            mtkDataConnection5.transitionTo(mtkDataConnection5.mActiveState);
                        } else {
                            MtkDataConnection.this.mInactiveState.setEnterNotificationParams(connectionParams, setupResultOnSetupConnectionCompleted.mFailCause);
                            MtkDataConnection mtkDataConnection6 = MtkDataConnection.this;
                            mtkDataConnection6.transitionTo(mtkDataConnection6.mInactiveState);
                        }
                    } else {
                        if (i2 != 5) {
                            throw new RuntimeException("Unknown SetupResult, should not happen");
                        }
                        MtkDataConnection.this.loge("DcActivatingState: stale EVENT_SETUP_DATA_CONNECTION_DONE tag:" + connectionParams.mTag + " != mTag:" + MtkDataConnection.this.mTag);
                    }
                    return true;
                case 262148:
                    DataConnection.DisconnectParams disconnectParams = (DataConnection.DisconnectParams) message.obj;
                    if (MtkDataConnection.this.mApnContexts.containsKey(disconnectParams.mApnContext)) {
                        MtkDataConnection.this.deferMessage(message);
                    } else {
                        MtkDataConnection.this.log("DcActivatingState ERROR no such apnContext=" + disconnectParams.mApnContext + " in this dc=" + MtkDataConnection.this);
                        MtkDataConnection.this.notifyDisconnectCompleted(disconnectParams, false);
                    }
                    return true;
                case 262155:
                    break;
                case MtkDataConnection.EVENT_IPV4_ADDRESS_REMOVED /* 262176 */:
                case MtkDataConnection.EVENT_IPV6_ADDRESS_REMOVED /* 262177 */:
                case MtkDataConnection.EVENT_IPV6_ADDRESS_UPDATED /* 262181 */:
                    if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActivatingState deferMsg: " + MtkDataConnection.this.getWhatToString(message.what) + ", address info: " + ((AddressInfo) message.obj));
                    }
                    MtkDataConnection.this.deferMessage(message);
                    return true;
                case MtkDataConnection.EVENT_VOICE_CALL /* 262179 */:
                    MtkDataConnection.this.deferMessage(message);
                    return true;
                default:
                    return super.processMessage(message);
            }
            MtkDataConnection.this.deferMessage(message);
            return true;
        }
    }

    private class MtkDcActiveState extends DataConnection.DcActiveState {
        private MtkDcActiveState() {
            super(MtkDataConnection.this);
        }

        public void enter() {
            if (MtkDataConnection.DBG) {
                MtkDataConnection.this.log("DcActiveState: enter dc=" + MtkDataConnection.this);
            }
            TelephonyStatsLog.write(75, 3, MtkDataConnection.this.mPhone.getPhoneId(), MtkDataConnection.this.mId, MtkDataConnection.this.mApnSetting != null ? MtkDataConnection.this.mApnSetting.getApnTypeBitmask() : 0L, MtkDataConnection.this.mApnSetting != null ? MtkDataConnection.this.mApnSetting.canHandleType(17) : false);
            Iterator it = MtkDataConnection.this.mApnContexts.values().iterator();
            while (it.hasNext()) {
                ApnContext apnContext = ((DataConnection.ConnectionParams) it.next()).mApnContext;
                if (TextUtils.equals(apnContext.getApnType(), "default")) {
                    MtkDataConnection.this.log("DcActiveState: notifyDataConnection in advance for default apn type.");
                    apnContext.setReason("connected");
                    apnContext.setState(DctConstants.State.CONNECTED);
                    MtkDataConnection.this.mPhone.notifyDataConnection(apnContext.getApnType());
                    break;
                }
            }
            String[] strArrSplit = null;
            if (MtkDataConnection.this.mApnSetting != null && !TextUtils.isEmpty(MtkDataConnection.this.mApnSetting.getProxyAddressAsString())) {
                try {
                    int proxyPort = MtkDataConnection.this.mApnSetting.getProxyPort();
                    if (proxyPort == -1) {
                        proxyPort = 8080;
                    }
                    MtkDataConnection.this.mLinkProperties.setHttpProxy(new ProxyInfo(MtkDataConnection.this.mApnSetting.getProxyAddressAsString(), proxyPort, null));
                } catch (NumberFormatException e) {
                    MtkDataConnection.this.loge("DcActiveState: NumberFormatException making ProxyProperties (" + MtkDataConnection.this.mApnSetting.getProxyPort() + "): " + e);
                }
            }
            MtkDataConnection.this.updateNetworkInfo();
            MtkDataConnection.this.notifyAllWithEvent(null, 270336, "connected");
            MtkDataConnection.this.mDcController.addActiveDcByCid(MtkDataConnection.this);
            MtkDataConnection.this.mNetworkInfo.setDetailedState(NetworkInfo.DetailedState.CONNECTED, MtkDataConnection.this.mNetworkInfo.getReason(), null);
            MtkDataConnection.this.mNetworkInfo.setExtraInfo(MtkDataConnection.this.mApnSetting.getApnName());
            MtkDataConnection mtkDataConnection = MtkDataConnection.this;
            mtkDataConnection.updateTcpBufferSizes(mtkDataConnection.mRilRat);
            MtkDataConnection mtkDataConnection2 = MtkDataConnection.this;
            mtkDataConnection2.updateLinkBandwidthsFromCarrierConfig(mtkDataConnection2.mRilRat);
            NetworkAgentConfig.Builder builder = new NetworkAgentConfig.Builder();
            builder.setLegacyType(0);
            builder.setLegacyTypeName("MOBILE");
            builder.setLegacyExtraInfo(MtkDataConnection.this.mApnSetting.getApnName());
            if (MtkDataConnection.this.mPhone.getCarrierSignalAgent().hasRegisteredReceivers("com.android.internal.telephony.CARRIER_SIGNAL_REDIRECTED")) {
                builder.disableProvisioningNotification();
            }
            String subscriberId = MtkDataConnection.this.mPhone.getSubscriberId();
            if (!TextUtils.isEmpty(subscriberId)) {
                builder.setSubscriberId(subscriberId);
            }
            if (MtkDataConnection.this.shouldSkip464Xlat()) {
                builder.disableNat64Detection();
            }
            MtkDataConnection mtkDataConnection3 = MtkDataConnection.this;
            mtkDataConnection3.mUnmeteredUseOnly = mtkDataConnection3.isUnmeteredUseOnly();
            if (MtkDataConnection.DBG) {
                MtkDataConnection.this.log("mRestrictedNetworkOverride = " + MtkDataConnection.this.mRestrictedNetworkOverride + ", mUnmeteredUseOnly = " + MtkDataConnection.this.mUnmeteredUseOnly);
            }
            if (MtkDataConnection.this.mConnectionParams == null || MtkDataConnection.this.mConnectionParams.mRequestType != 2) {
                MtkDataConnection mtkDataConnection4 = MtkDataConnection.this;
                mtkDataConnection4.mScore = mtkDataConnection4.calculateScore();
                TelephonyNetworkFactory networkFactory = PhoneFactory.getNetworkFactory(MtkDataConnection.this.mPhone.getPhoneId());
                NetworkProvider provider = networkFactory == null ? null : networkFactory.getProvider();
                MtkDataConnection mtkDataConnection5 = MtkDataConnection.this;
                MtkDataConnection.access$12176(mtkDataConnection5, mtkDataConnection5.getDisallowedApnTypes());
                MtkDataConnection mtkDataConnection6 = MtkDataConnection.this;
                MtkDataConnection mtkDataConnection7 = MtkDataConnection.this;
                mtkDataConnection6.mNetworkAgent = new DcNetworkAgent(mtkDataConnection7, mtkDataConnection7.mPhone, MtkDataConnection.this.mNetworkInfo, MtkDataConnection.this.mScore, builder.build(), provider, MtkDataConnection.this.mTransportType);
                MtkDataConnection.this.mNetworkAgent.markConnected();
            } else {
                DataConnection dataConnectionByApnType = MtkDataConnection.this.mPhone.getDcTracker(MtkDataConnection.this.getHandoverSourceTransport()).getDataConnectionByApnType(MtkDataConnection.this.mConnectionParams.mApnContext.getApnType());
                if (dataConnectionByApnType != null) {
                    dataConnectionByApnType.setHandoverState(3);
                }
                if (MtkDataConnection.this.mHandoverSourceNetworkAgent == null) {
                    MtkDataConnection.this.loge("Failed to get network agent from original data connection");
                    MtkDataConnection.this.mHandoverLocalLog.log("Failed to get network agent from original data connection");
                    return;
                }
                String str = "Transfer network agent " + MtkDataConnection.this.mHandoverSourceNetworkAgent.getTag() + " successfully.";
                MtkDataConnection.this.log(str);
                MtkDataConnection.this.mHandoverLocalLog.log(str);
                MtkDataConnection mtkDataConnection8 = MtkDataConnection.this;
                mtkDataConnection8.mNetworkAgent = mtkDataConnection8.mHandoverSourceNetworkAgent;
                DcNetworkAgent dcNetworkAgent = MtkDataConnection.this.mNetworkAgent;
                MtkDataConnection mtkDataConnection9 = MtkDataConnection.this;
                dcNetworkAgent.acquireOwnership(mtkDataConnection9, mtkDataConnection9.mTransportType);
                MtkDataConnection.this.mNetworkAgent.sendNetworkCapabilities(MtkDataConnection.this.getNetworkCapabilities(), MtkDataConnection.this);
                MtkDataConnection.this.mNetworkAgent.sendLinkProperties(MtkDataConnection.this.mLinkProperties, MtkDataConnection.this);
                MtkDataConnection.this.mHandoverSourceNetworkAgent = null;
            }
            if (MtkDataConnection.this.mTransportType == 1) {
                MtkDataConnection.this.mPhone.mCi.registerForNattKeepaliveStatus(MtkDataConnection.this.getHandler(), 262162, (Object) null);
                MtkDataConnection.this.mPhone.mCi.registerForLceInfo(MtkDataConnection.this.getHandler(), 262167, (Object) null);
            }
            TelephonyMetrics.getInstance().writeRilDataCallEvent(MtkDataConnection.this.mPhone.getPhoneId(), MtkDataConnection.this.mCid, MtkDataConnection.this.mApnSetting.getApnTypeBitmask(), 1);
            try {
                IDataConnectionExt iDataConnectionExt = MtkDataConnection.this.mDataConnectionExt;
                if (MtkDataConnection.this.mApnSetting != null) {
                    strArrSplit = ApnSetting.getApnTypesStringFromBitmask(MtkDataConnection.this.mApnSetting.getApnTypeBitmask()).split(",");
                }
                iDataConnectionExt.onDcActivated(strArrSplit, MtkDataConnection.this.mLinkProperties == null ? "" : MtkDataConnection.this.mLinkProperties.getInterfaceName());
            } catch (Exception e2) {
                MtkDataConnection.this.loge("onDcActivated fail!");
                e2.printStackTrace();
            }
        }

        public void exit() {
            try {
                MtkDataConnection.this.mDataConnectionExt.onDcDeactivated(MtkDataConnection.this.mApnSetting == null ? null : ApnSetting.getApnTypesStringFromBitmask(MtkDataConnection.this.mApnSetting.getApnTypeBitmask()).split(","), MtkDataConnection.this.mLinkProperties == null ? "" : MtkDataConnection.this.mLinkProperties.getInterfaceName());
            } catch (Exception e) {
                MtkDataConnection.this.loge("onDcDeactivated fail!");
                e.printStackTrace();
            }
            super.exit();
        }

        public boolean processMessage(Message message) {
            switch (message.what) {
                case 262144:
                    DataConnection.ConnectionParams connectionParams = (DataConnection.ConnectionParams) message.obj;
                    MtkDataConnection.this.mApnContexts.put(connectionParams.mApnContext, connectionParams);
                    if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActiveState: EVENT_CONNECT cp=" + connectionParams + " dc=" + MtkDataConnection.this);
                    }
                    if (MtkDataConnection.this.mNetworkAgent != null) {
                        MtkDataConnection.access$14572(MtkDataConnection.this, ~connectionParams.mApnContext.getApnTypeBitmask());
                        NetworkCapabilities networkCapabilities = MtkDataConnection.this.getNetworkCapabilities();
                        MtkDataConnection.this.mNetworkAgent.sendNetworkCapabilities(networkCapabilities, MtkDataConnection.this);
                        if (MtkDataConnection.DBG) {
                            MtkDataConnection.this.log("DcActiveState: update Capabilities=" + networkCapabilities);
                        }
                        if (TextUtils.equals(connectionParams.mApnContext.getApnType(), "default") && MtkDataConnection.this.mNetworkInfo.getDetailedState() == NetworkInfo.DetailedState.CONNECTED) {
                            MtkDataConnection.this.log("DcActiveState: inform UI the added INTERNET capability.");
                            MtkDataConnection.this.mNetworkInfo.setDetailedState(NetworkInfo.DetailedState.SUSPENDED, null, MtkDataConnection.this.mNetworkInfo.getExtraInfo());
                            MtkDataConnection.this.mNetworkAgent.sendNetworkInfo(MtkDataConnection.this.mNetworkInfo, MtkDataConnection.this);
                            MtkDataConnection.this.mNetworkInfo.setDetailedState(NetworkInfo.DetailedState.CONNECTED, null, MtkDataConnection.this.mNetworkInfo.getExtraInfo());
                            MtkDataConnection.this.mNetworkAgent.sendNetworkInfo(MtkDataConnection.this.mNetworkInfo, MtkDataConnection.this);
                        }
                    }
                    MtkDataConnection.this.notifyConnectCompleted(connectionParams, 0, false);
                    return true;
                case 262145:
                    DataConnection.ConnectionParams connectionParams2 = (DataConnection.ConnectionParams) message.obj;
                    DataConnection.SetupResult setupResultOnSetupConnectionCompleted = MtkDataConnection.this.onSetupConnectionCompleted(message.arg1, message.getData().getParcelable("data_call_response"), connectionParams2);
                    if (setupResultOnSetupConnectionCompleted != DataConnection.SetupResult.ERROR_STALE && MtkDataConnection.this.mConnectionParams != connectionParams2) {
                        MtkDataConnection.this.loge("DcActiveState_FALLBACK_Retry: WEIRD mConnectionsParams:" + MtkDataConnection.this.mConnectionParams + " != cp:" + connectionParams2);
                    }
                    if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActiveState_FALLBACK_Retry onSetupConnectionCompleted result=" + setupResultOnSetupConnectionCompleted + " dc=" + MtkDataConnection.this);
                    }
                    int i = AnonymousClass3.$SwitchMap$com$android$internal$telephony$dataconnection$DataConnection$SetupResult[setupResultOnSetupConnectionCompleted.ordinal()];
                    if (i == 1) {
                        MtkDataConnection.this.mDcFailCause = 0;
                        MtkDataConnection.this.resetRetryCount();
                    } else if (i == 4) {
                        String str = "DcActiveState_FALLBACK_Retry: ERROR_DATA_SERVICE_SPECIFIC_ERROR result=" + setupResultOnSetupConnectionCompleted + " result.isRadioRestartFailure=" + DataFailCause.isRadioRestartFailure(MtkDataConnection.this.mPhone.getContext(), setupResultOnSetupConnectionCompleted.mFailCause, MtkDataConnection.this.mPhone.getSubId()) + " result.isPermanentFailure=" + MtkDataConnection.this.mDct.isPermanentFailure(setupResultOnSetupConnectionCompleted.mFailCause);
                        if (MtkDataConnection.DBG) {
                            MtkDataConnection.this.log(str);
                        }
                        if (setupResultOnSetupConnectionCompleted.mFailCause == MtkDataConnection.RA_GET_IPV6_VALID_FAIL) {
                            if (MtkDataConnection.this.mDcFcMgr != null && MtkDataConnection.this.mDcFcMgr.isSpecificNetworkAndSimOperator(DcFailCauseManager.Operator.OP19)) {
                                MtkDataConnection.access$19308(MtkDataConnection.this);
                                long retryTimeByIndex = MtkDataConnection.this.mDcFcMgr.getRetryTimeByIndex(MtkDataConnection.this.mRetryCount, DcFailCauseManager.Operator.OP19);
                                if (retryTimeByIndex < 0) {
                                    if (MtkDataConnection.DBG) {
                                        MtkDataConnection.this.log("DcActiveState_FALLBACK_Retry: No retry but at least one IPv4 or IPv6 is accepted");
                                    }
                                    MtkDataConnection.this.mDcFailCause = 0;
                                } else {
                                    MtkDataConnection.this.mDcFailCause = MtkDataConnection.RA_GET_IPV6_VALID_FAIL;
                                    MtkDataConnection mtkDataConnection = MtkDataConnection.this;
                                    mtkDataConnection.startRetryAlarm(MtkDataConnection.EVENT_FALLBACK_RETRY_CONNECTION, mtkDataConnection.mTag, retryTimeByIndex);
                                }
                            }
                        } else if (MtkDataConnection.DBG) {
                            MtkDataConnection.this.log("DcActiveState_FALLBACK_Retry: ERROR_DATA_SERVICE_SPECIFIC_ERROR Not retry anymore");
                        }
                    } else if (i == 5) {
                        MtkDataConnection.this.loge("DcActiveState_FALLBACK_Retry: stale EVENT_SETUP_DATA_CONNECTION_DONE tag:" + connectionParams2.mTag + " != mTag:" + MtkDataConnection.this.mTag + " Not retry anymore");
                    } else if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActiveState_FALLBACK_Retry: Another error cause, Not retry anymore");
                    }
                    return true;
                case 262148:
                    DataConnection.DisconnectParams disconnectParams = (DataConnection.DisconnectParams) message.obj;
                    if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActiveState: EVENT_DISCONNECT dp=" + disconnectParams + " dc=" + MtkDataConnection.this);
                    }
                    if (MtkDataConnection.this.mApnContexts.containsKey(disconnectParams.mApnContext)) {
                        if (MtkDataConnection.DBG) {
                            MtkDataConnection.this.log("DcActiveState msg.what=EVENT_DISCONNECT RefCount=" + MtkDataConnection.this.mApnContexts.size());
                        }
                        if (MtkDataConnection.this.mApnContexts.size() == 1) {
                            if (!MtkDataConnection.this.hasMdAutoSetupImsCapability()) {
                                MtkDataConnection.this.handlePcscfErrorCause(disconnectParams);
                            }
                            MtkDataConnection.this.mApnContexts.clear();
                            MtkDataConnection.this.mDisconnectParams = disconnectParams;
                            MtkDataConnection.this.mConnectionParams = null;
                            disconnectParams.mTag = MtkDataConnection.this.mTag;
                            MtkDataConnection.this.tearDownData(disconnectParams);
                            MtkDataConnection mtkDataConnection2 = MtkDataConnection.this;
                            mtkDataConnection2.transitionTo(mtkDataConnection2.mDisconnectingState);
                        } else {
                            MtkDataConnection.this.mApnContexts.remove(disconnectParams.mApnContext);
                            if (MtkDataConnection.this.mNetworkAgent != null) {
                                MtkDataConnection.access$16776(MtkDataConnection.this, disconnectParams.mApnContext.getApnTypeBitmask());
                                NetworkCapabilities networkCapabilities2 = MtkDataConnection.this.getNetworkCapabilities();
                                MtkDataConnection.this.mNetworkAgent.sendNetworkCapabilities(networkCapabilities2, MtkDataConnection.this);
                                MtkDataConnection.this.log("DcActiveState update Capabilities:" + networkCapabilities2);
                            }
                            ((MtkDcTracker) MtkDataConnection.this.mDct).mtkDeactivateDataCall(disconnectParams.mApnContext);
                            MtkDataConnection.this.notifyDisconnectCompleted(disconnectParams, false);
                        }
                    } else {
                        MtkDataConnection.this.log("DcActiveState ERROR no such apnContext=" + disconnectParams.mApnContext + " in this dc=" + MtkDataConnection.this);
                        MtkDataConnection.this.notifyDisconnectCompleted(disconnectParams, false);
                    }
                    return true;
                case 262153:
                    if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActiveState EVENT_LOST_CONNECTION dc=" + MtkDataConnection.this);
                    }
                    if (MtkDataConnection.this.mCause == 3111 || MtkDataConnection.this.mCause == 3367 || MtkDataConnection.this.mCause == 3982 || MtkDataConnection.this.mCause == 6695) {
                        MtkDataConnection.this.mInactiveState.setEnterNotificationParams(3982);
                    } else {
                        MtkDataConnection.this.mInactiveState.setEnterNotificationParams(65540);
                    }
                    MtkDataConnection mtkDataConnection3 = MtkDataConnection.this;
                    mtkDataConnection3.transitionTo(mtkDataConnection3.mInactiveState);
                    return true;
                case 262167:
                case 262171:
                    if (MtkDataConnection.this.canSendNetworkCapabilities()) {
                        return super.processMessage(message);
                    }
                    return true;
                case 262169:
                    if (MtkDataConnection.this.mNetworkAgent != null) {
                        return super.processMessage(message);
                    }
                    MtkDataConnection.this.log("EVENT_REEVALUATE_RESTRICTED_STATE: mNetworkAgent is null");
                    return true;
                case MtkDataConnection.EVENT_IPV4_ADDRESS_REMOVED /* 262176 */:
                    AddressInfo addressInfo = (AddressInfo) message.obj;
                    if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActiveState: " + MtkDataConnection.this.getWhatToString(message.what) + ": " + addressInfo);
                    }
                    return true;
                case MtkDataConnection.EVENT_IPV6_ADDRESS_REMOVED /* 262177 */:
                    AddressInfo addressInfo2 = (AddressInfo) message.obj;
                    if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActiveState: " + MtkDataConnection.this.getWhatToString(message.what) + ": " + addressInfo2);
                    }
                    if (MtkDataConnection.this.mInterfaceName != null && MtkDataConnection.this.mInterfaceName.equals(addressInfo2.mIntfName)) {
                        String hostAddress = addressInfo2.mLinkAddr.getAddress().getHostAddress();
                        if (MtkDataConnection.DBG) {
                            MtkDataConnection.this.log("strAddress: " + hostAddress);
                        }
                        if (hostAddress.equalsIgnoreCase("FE80::5A:5A:5A:23")) {
                            MtkDataConnection.this.mValid = -1L;
                        } else if (hostAddress.equalsIgnoreCase("FE80::5A:5A:5A:22")) {
                            MtkDataConnection.this.mValid = -2L;
                        } else {
                            MtkDataConnection.this.mValid = -1000L;
                        }
                        if (MtkDataConnection.this.mValid == -1 || MtkDataConnection.this.mValid == -2) {
                            MtkDataConnection.this.log("DcActiveState: RA initial or refresh fail, valid:" + MtkDataConnection.this.mValid);
                            MtkDataConnection.this.onAddressRemoved();
                        }
                    }
                    if (MtkDataConnection.this.mGlobalV6AddrInfo != null && MtkDataConnection.this.mGlobalV6AddrInfo.mIntfName.equals(addressInfo2.mIntfName)) {
                        MtkDataConnection.this.mGlobalV6AddrInfo = null;
                    }
                    return true;
                case MtkDataConnection.EVENT_VOICE_CALL /* 262179 */:
                    MtkDataConnection.this.mIsInVoiceCall = message.arg1 != 0;
                    MtkDataConnection.this.mIsSupportConcurrent = message.arg2 != 0;
                    if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActiveState: EVENT_VOICE_CALL, mIsInVoiceCall=" + MtkDataConnection.this.mIsInVoiceCall + ", mIsSupportConcurrent=" + MtkDataConnection.this.mIsSupportConcurrent);
                    }
                    MtkDataConnection.this.updateNetworkInfoSuspendState();
                    if (MtkDataConnection.this.mNetworkAgent != null) {
                        if (MtkDataConnection.this.canSendNetworkCapabilities()) {
                            MtkDataConnection.this.mNetworkAgent.sendNetworkCapabilities(MtkDataConnection.this.getNetworkCapabilities(), MtkDataConnection.this);
                        }
                        MtkDataConnection.this.mNetworkAgent.sendNetworkInfo(MtkDataConnection.this.mNetworkInfo, MtkDataConnection.this);
                    }
                    return true;
                case MtkDataConnection.EVENT_FALLBACK_RETRY_CONNECTION /* 262180 */:
                    if (message.arg1 == MtkDataConnection.this.mTag) {
                        if (MtkDataConnection.this.mDataRegState == 0) {
                            if (MtkDataConnection.DBG) {
                                MtkDataConnection.this.log("DcActiveState EVENT_FALLBACK_RETRY_CONNECTION mConnectionParams=" + MtkDataConnection.this.mConnectionParams);
                            }
                            MtkDataConnection mtkDataConnection4 = MtkDataConnection.this;
                            mtkDataConnection4.connect(mtkDataConnection4.mConnectionParams);
                        } else if (MtkDataConnection.DBG) {
                            MtkDataConnection.this.log("DcActiveState: EVENT_FALLBACK_RETRY_CONNECTION not in service");
                        }
                    } else if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("DcActiveState stale EVENT_FALLBACK_RETRY_CONNECTION tag:" + message.arg1 + " != mTag:" + MtkDataConnection.this.mTag);
                    }
                    return true;
                case MtkDataConnection.EVENT_IPV6_ADDRESS_UPDATED /* 262181 */:
                    AddressInfo addressInfo3 = (AddressInfo) message.obj;
                    if (MtkDataConnection.this.mInterfaceName != null && MtkDataConnection.this.mInterfaceName.equals(addressInfo3.mIntfName)) {
                        int scope = addressInfo3.mLinkAddr.getScope();
                        int flags = addressInfo3.mLinkAddr.getFlags();
                        MtkDataConnection.this.log("EVENT_IPV6_ADDRESS_UPDATED, scope: " + scope + ", flag: " + flags);
                        if (OsConstants.RT_SCOPE_UNIVERSE != scope || (flags & 1) == OsConstants.IFA_F_TEMPORARY || MtkDataConnection.this.mNetworkAgent == null) {
                            MtkDataConnection.this.log("EVENT_IPV6_ADDRESS_UPDATED, not notify global ipv6 address update");
                        } else {
                            MtkDataConnection.this.mGlobalV6AddrInfo = addressInfo3;
                            MtkDataConnection.this.mNetworkAgent.sendLinkProperties(MtkDataConnection.this.mtkGetLinkProperties(), MtkDataConnection.this);
                            MtkDataConnection.this.log("EVENT_IPV6_ADDRESS_UPDATED, notify global ipv6 address update");
                        }
                    }
                    return true;
                default:
                    return super.processMessage(message);
            }
        }
    }

    private class MtkDcDefaultState extends DataConnection.DcDefaultState {
        private MtkDcDefaultState() {
            super(MtkDataConnection.this);
        }

        public void enter() {
            if (MtkDataConnection.DBG) {
                MtkDataConnection.this.log("DcDefaultState: enter");
            }
            MtkDataConnection.this.mPhone.getServiceStateTracker().registerForDataRegStateOrRatChanged(MtkDataConnection.this.mTransportType, MtkDataConnection.this.getHandler(), 262155, (Object) null);
            MtkDataConnection.this.mPhone.getServiceStateTracker().registerForDataRoamingOn(MtkDataConnection.this.getHandler(), 262156, (Object) null);
            MtkDataConnection.this.mPhone.getServiceStateTracker().registerForDataRoamingOff(MtkDataConnection.this.getHandler(), 262157, (Object) null, true);
            MtkDataConnection.this.mPhone.getServiceStateTracker().registerForNrStateChanged(MtkDataConnection.this.getHandler(), 262171, (Object) null);
            MtkDataConnection.this.mPhone.getServiceStateTracker().registerForNrFrequencyChanged(MtkDataConnection.this.getHandler(), 262173, (Object) null);
            if (MtkDataConnection.this.mTelDevController != null && MtkDataConnection.this.mTelDevController.getModem(0) != null && !((MtkHardwareConfig) MtkDataConnection.this.mTelDevController.getModem(0)).hasRaCapability()) {
                MtkDataConnection.this.registerNetworkAlertObserver();
            }
            MtkDataConnection.this.mDcController.addDc(MtkDataConnection.this);
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction(MtkDataConnection.this.mActionRetry);
            if (MtkDataConnection.DBG) {
                MtkDataConnection.this.log("DcDefaultState: register for intent action=" + MtkDataConnection.this.mActionRetry);
            }
            MtkDataConnection.this.mPhone.getContext().registerReceiver(MtkDataConnection.this.mIntentReceiver, intentFilter, null, MtkDataConnection.this.getHandler());
        }

        public void exit() {
            if (MtkDataConnection.DBG) {
                MtkDataConnection.this.log("DcDefaultState: exit");
            }
            MtkDataConnection.this.mPhone.getServiceStateTracker().unregisterForDataRegStateOrRatChanged(MtkDataConnection.this.mTransportType, MtkDataConnection.this.getHandler());
            MtkDataConnection.this.mPhone.getServiceStateTracker().unregisterForDataRoamingOn(MtkDataConnection.this.getHandler());
            MtkDataConnection.this.mPhone.getServiceStateTracker().unregisterForDataRoamingOff(MtkDataConnection.this.getHandler());
            MtkDataConnection.this.mPhone.getServiceStateTracker().unregisterForNrStateChanged(MtkDataConnection.this.getHandler());
            MtkDataConnection.this.mPhone.getServiceStateTracker().unregisterForNrFrequencyChanged(MtkDataConnection.this.getHandler());
            MtkDataConnection.this.mDcController.removeDc(MtkDataConnection.this);
            if (MtkDataConnection.this.mAc != null) {
                MtkDataConnection.this.mAc.disconnected();
                MtkDataConnection.this.mAc = null;
            }
            MtkDataConnection.this.mApnContexts.clear();
            MtkDataConnection.this.mReconnectIntent = null;
            MtkDataConnection.this.mDct = null;
            MtkDataConnection.this.mApnSetting = null;
            MtkDataConnection.this.mPhone = null;
            MtkDataConnection.this.mDataServiceManager = null;
            MtkDataConnection.this.mLinkProperties = null;
            MtkDataConnection.this.mLastFailCause = 0;
            MtkDataConnection.this.mUserData = null;
            MtkDataConnection.this.mDcController = null;
            MtkDataConnection.this.mDcTesterFailBringUpAll = null;
            if (MtkDataConnection.this.mTelDevController != null && MtkDataConnection.this.mTelDevController.getModem(0) != null && !((MtkHardwareConfig) MtkDataConnection.this.mTelDevController.getModem(0)).hasRaCapability()) {
                MtkDataConnection.this.unregisterNetworkAlertObserver();
            }
            MtkDataConnection.this.mPhone.getContext().unregisterReceiver(MtkDataConnection.this.mIntentReceiver);
        }

        public boolean processMessage(Message message) {
            if (MtkDataConnection.VDBG) {
                MtkDataConnection.this.log("DcDefault msg=" + MtkDataConnection.this.getWhatToString(message.what) + " RefCount=" + MtkDataConnection.this.mApnContexts.size());
            }
            int i = message.what;
            if (i == 262155) {
                if (MtkDataConnection.this.mIsInVoiceCall) {
                    MtkDataConnection.this.mIsSupportConcurrent = MtkDcHelper.getInstance().isDataAllowedForConcurrent(MtkDataConnection.this.mPhone.getPhoneId());
                }
                return super.processMessage(message);
            }
            if (i == MtkDataConnection.EVENT_IPV6_ADDRESS_UPDATED) {
                if (!MtkDataConnection.VDBG) {
                    return true;
                }
                MtkDataConnection.this.log("DcDefaultState: ignore EVENT_IPV6_ADDRESS_UPDATED not in ActiveState");
                return true;
            }
            if (i == MtkDataConnection.EVENT_UPDATE_NETWORKAGENT_SSC_MODE3) {
                if (MtkDataConnection.DBG) {
                    MtkDataConnection.this.log("EVENT_UPDATE_NETWORKAGENT_SSC_MODE3: lifetime=" + message.arg1 + ", new score=" + message.arg2);
                }
                MtkDataConnection.this.setSscMode3LingeringTime(message.arg1);
                MtkDataConnection.this.sendNetworkScore(message.arg2);
                return true;
            }
            switch (i) {
                case MtkDataConnection.EVENT_IPV4_ADDRESS_REMOVED /* 262176 */:
                    if (!MtkDataConnection.VDBG) {
                        return true;
                    }
                    MtkDataConnection.this.log("DcDefaultState: ignore EVENT_IPV4_ADDRESS_REMOVED not in ActiveState");
                    return true;
                case MtkDataConnection.EVENT_IPV6_ADDRESS_REMOVED /* 262177 */:
                    if (!MtkDataConnection.VDBG) {
                        return true;
                    }
                    MtkDataConnection.this.log("DcDefaultState: ignore EVENT_IPV6_ADDRESS_REMOVED not in ActiveState");
                    return true;
                case MtkDataConnection.EVENT_ADDRESS_REMOVED /* 262178 */:
                    if (!MtkDataConnection.VDBG) {
                        return true;
                    }
                    MtkDataConnection.this.log("DcDefaultState: " + MtkDataConnection.this.getWhatToString(message.what));
                    return true;
                case MtkDataConnection.EVENT_VOICE_CALL /* 262179 */:
                    MtkDataConnection.this.mIsInVoiceCall = message.arg1 != 0;
                    MtkDataConnection.this.mIsSupportConcurrent = message.arg2 != 0;
                    return true;
                default:
                    return super.processMessage(message);
            }
        }
    }

    protected class MtkDcDisconnectingState extends DataConnection.DcDisconnectingState {
        protected MtkDcDisconnectingState() {
            super(MtkDataConnection.this);
        }

        public boolean processMessage(Message message) {
            if (message.what != 262147) {
                return super.processMessage(message);
            }
            DataConnection.DisconnectParams disconnectParams = (DataConnection.DisconnectParams) ((AsyncResult) message.obj).userObj;
            String str = "DcDisconnectingState msg.what=EVENT_DEACTIVATE_DONE RefCount=" + MtkDataConnection.this.mApnContexts.size();
            if (MtkDataConnection.DBG) {
                MtkDataConnection.this.log(str);
            }
            if (disconnectParams.mApnContext != null) {
                disconnectParams.mApnContext.requestLog(str);
            }
            if (disconnectParams.mTag == MtkDataConnection.this.mTag) {
                MtkDataConnection.this.mInactiveState.setEnterNotificationParams(disconnectParams);
                MtkDataConnection mtkDataConnection = MtkDataConnection.this;
                mtkDataConnection.transitionTo(mtkDataConnection.mInactiveState);
            } else if (MtkDataConnection.DBG) {
                MtkDataConnection.this.log("DcDisconnectState stale EVENT_DEACTIVATE_DONE dp.tag=" + disconnectParams.mTag + " mTag=" + MtkDataConnection.this.mTag);
            }
            return true;
        }
    }

    protected class MtkDcDisconnectionErrorCreatingConnection extends DataConnection.DcDisconnectionErrorCreatingConnection {
        protected MtkDcDisconnectionErrorCreatingConnection() {
            super(MtkDataConnection.this);
        }

        public boolean processMessage(Message message) {
            if (message.what != 262147) {
                return super.processMessage(message);
            }
            DataConnection.ConnectionParams connectionParams = (DataConnection.ConnectionParams) ((AsyncResult) message.obj).userObj;
            if (connectionParams.mTag == MtkDataConnection.this.mTag) {
                if (MtkDataConnection.DBG) {
                    MtkDataConnection.this.log("DcDisconnectionErrorCreatingConnection msg.what=EVENT_DEACTIVATE_DONE");
                }
                if (connectionParams.mApnContext != null) {
                    connectionParams.mApnContext.requestLog("DcDisconnectionErrorCreatingConnection msg.what=EVENT_DEACTIVATE_DONE");
                }
                MtkDataConnection.this.mInactiveState.setEnterNotificationParams(connectionParams, 65538);
                MtkDataConnection mtkDataConnection = MtkDataConnection.this;
                mtkDataConnection.transitionTo(mtkDataConnection.mInactiveState);
            } else if (MtkDataConnection.DBG) {
                MtkDataConnection.this.log("DcDisconnectionErrorCreatingConnection stale EVENT_DEACTIVATE_DONE dp.tag=" + connectionParams.mTag + ", mTag=" + MtkDataConnection.this.mTag);
            }
            return true;
        }
    }

    static {
        Class<?> cls = null;
        try {
            cls = Class.forName("android.net.NetworkAgent");
        } catch (Exception e) {
            Rlog.d("MtkDataConnection", e.toString());
        }
        if (cls != null) {
            try {
                Method declaredMethod = cls.getDeclaredMethod("queueOrSendMessage", Integer.TYPE, Integer.TYPE, Integer.TYPE);
                methodQueueOrSendMessage = declaredMethod;
                declaredMethod.setAccessible(true);
            } catch (Exception e2) {
                Rlog.d("MtkDataConnection", e2.toString());
            }
        }
        sCmdToString = new String[40];
        sCmdToString[0] = "EVENT_CONNECT";
        sCmdToString[1] = "EVENT_SETUP_DATA_CONNECTION_DONE";
        sCmdToString[3] = "EVENT_DEACTIVATE_DONE";
        sCmdToString[4] = "EVENT_DISCONNECT";
        sCmdToString[5] = "EVENT_RIL_CONNECTED";
        sCmdToString[6] = "EVENT_DISCONNECT_ALL";
        sCmdToString[7] = "EVENT_DATA_STATE_CHANGED";
        sCmdToString[8] = "EVENT_TEAR_DOWN_NOW";
        sCmdToString[9] = "EVENT_LOST_CONNECTION";
        sCmdToString[11] = "EVENT_DATA_CONNECTION_DRS_OR_RAT_CHANGED";
        sCmdToString[12] = "EVENT_DATA_CONNECTION_ROAM_ON";
        sCmdToString[13] = "EVENT_DATA_CONNECTION_ROAM_OFF";
        sCmdToString[14] = "EVENT_BW_REFRESH_RESPONSE";
        sCmdToString[15] = "EVENT_DATA_CONNECTION_VOICE_CALL_STARTED";
        sCmdToString[16] = "EVENT_DATA_CONNECTION_VOICE_CALL_ENDED";
        sCmdToString[17] = "EVENT_DATA_CONNECTION_OVERRIDE_CHANGED";
        sCmdToString[18] = "EVENT_KEEPALIVE_STATUS";
        sCmdToString[19] = "EVENT_KEEPALIVE_STARTED";
        sCmdToString[20] = "EVENT_KEEPALIVE_STOPPED";
        sCmdToString[21] = "EVENT_KEEPALIVE_START_REQUEST";
        sCmdToString[22] = "EVENT_KEEPALIVE_STOP_REQUEST";
        sCmdToString[23] = "EVENT_LINK_CAPACITY_CHANGED";
        sCmdToString[24] = "EVENT_RESET";
        sCmdToString[25] = "EVENT_REEVALUATE_RESTRICTED_STATE";
        sCmdToString[26] = "EVENT_REEVALUATE_DATA_CONNECTION_PROPERTIES";
        sCmdToString[27] = "EVENT_NR_STATE_CHANGED";
        sCmdToString[28] = "EVENT_DATA_CONNECTION_METEREDNESS_CHANGED";
        sCmdToString[29] = "EVENT_NR_FREQUENCY_CHANGED";
        sCmdToString[30] = "EVENT_CARRIER_CONFIG_LINK_BANDWIDTHS_CHANGED";
        sCmdToString[31] = "EVENT_CARRIER_PRIVILEGED_UIDS_CHANGED";
        sCmdToString[32] = "EVENT_IPV4_ADDRESS_REMOVED";
        sCmdToString[33] = "EVENT_IPV6_ADDRESS_REMOVED";
        sCmdToString[34] = "EVENT_ADDRESS_REMOVED";
        sCmdToString[35] = "EVENT_VOICE_CALL";
        sCmdToString[36] = "EVENT_FALLBACK_RETRY_CONNECTION";
        sCmdToString[37] = "EVENT_IPV6_ADDRESS_UPDATED";
        sCmdToString[38] = "EVENT_GET_DATA_CALL_LIST";
        sCmdToString[39] = "EVENT_UPDATE_NETWORKAGENT_SSC_MODE3";
    }

    public MtkDataConnection(Phone phone, String str, int i, DcTracker dcTracker, DataServiceManager dataServiceManager, DcTesterFailBringUpAll dcTesterFailBringUpAll, DcController dcController) {
        super(phone, str, i, dcTracker, dataServiceManager, dcTesterFailBringUpAll, dcController);
        this.mTelephonyCustomizationFactory = null;
        this.mDataConnectionExt = null;
        this.mSubController = SubscriptionController.getInstance();
        boolean z = false;
        this.mRetryCount = 0;
        this.mInterfaceName = null;
        this.mIsInVoiceCall = false;
        this.mIsSupportConcurrent = false;
        this.mGlobalV6AddrInfo = null;
        this.mTelDevController = MtkTelephonyDevController.getInstance();
        this.mIsSetupDataCallByCi = false;
        this.mCause = 0;
        this.mIsRemoveMmsCapability = false;
        this.mIntentReceiver = new BroadcastReceiver() { // from class: com.mediatek.internal.telephony.dataconnection.MtkDataConnection.1
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                String action = intent.getAction();
                if (TextUtils.isEmpty(action)) {
                    MtkDataConnection.this.log("onReceive: ignore empty action='" + action + "'");
                    return;
                }
                if (!TextUtils.equals(action, MtkDataConnection.this.mActionRetry)) {
                    if (MtkDataConnection.DBG) {
                        MtkDataConnection.this.log("onReceive: unknown action=" + action);
                        return;
                    }
                    return;
                }
                if (!intent.hasExtra(MtkDataConnection.INTENT_RETRY_ALARM_WHAT)) {
                    throw new RuntimeException(MtkDataConnection.this.mActionRetry + " has no INTENT_RETRY_ALRAM_WHAT");
                }
                if (!intent.hasExtra(MtkDataConnection.INTENT_RETRY_ALARM_TAG)) {
                    throw new RuntimeException(MtkDataConnection.this.mActionRetry + " has no INTENT_RETRY_ALRAM_TAG");
                }
                int intExtra = intent.getIntExtra(MtkDataConnection.INTENT_RETRY_ALARM_WHAT, Integer.MAX_VALUE);
                int intExtra2 = intent.getIntExtra(MtkDataConnection.INTENT_RETRY_ALARM_TAG, Integer.MAX_VALUE);
                if (MtkDataConnection.DBG) {
                    MtkDataConnection.this.log("onReceive: action=" + action + " sendMessage(what:" + MtkDataConnection.this.getWhatToString(intExtra) + ", tag:" + intExtra2 + ")");
                }
                MtkDataConnection mtkDataConnection = MtkDataConnection.this;
                mtkDataConnection.sendMessage(mtkDataConnection.obtainMessage(intExtra, intExtra2, 0));
            }
        };
        if ("OP20".equals(SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR, "")) || ("OP20".equals(SystemProperties.get("ril.fwk.test.optr", "")) && "eng".equals(SystemProperties.get("ro.build.type", "")))) {
            z = true;
        }
        this.mIsOp20 = z;
        this.mAlertObserver = new BaseNetworkObserver() { // from class: com.mediatek.internal.telephony.dataconnection.MtkDataConnection.2
            public void addressRemoved(String str2, LinkAddress linkAddress) {
                MtkDataConnection.this.sendMessageForSM(MtkDataConnection.this.getEventByAddress(false, linkAddress), str2, linkAddress);
            }

            public void addressUpdated(String str2, LinkAddress linkAddress) {
                MtkDataConnection.this.sendMessageForSM(MtkDataConnection.this.getEventByAddress(true, linkAddress), str2, linkAddress);
            }
        };
        try {
            OpTelephonyCustomizationFactoryBase opFactory = OpTelephonyCustomizationUtils.getOpFactory(this.mPhone.getContext());
            this.mTelephonyCustomizationFactory = opFactory;
            this.mDataConnectionExt = opFactory.makeDataConnectionExt(this.mPhone.getContext());
        } catch (Exception e) {
            if (DBG) {
                log("mDataConnectionExt init fail");
            }
            e.printStackTrace();
        }
        this.mDcFcMgr = DcFailCauseManager.getInstance(this.mPhone);
        log("get INetworkManagementService");
        this.mNetworkManager = INetworkManagementService.Stub.asInterface(ServiceManager.getService("network_management"));
        this.mAlarmManager = (AlarmManager) this.mPhone.getContext().getSystemService("alarm");
        this.mActionRetry = getClass().getCanonicalName() + "." + getName() + ".action_retry";
        resetRetryCount();
    }

    static /* synthetic */ int access$12176(MtkDataConnection mtkDataConnection, int i) {
        int i2 = mtkDataConnection.mDisabledApnTypeBitMask | i;
        mtkDataConnection.mDisabledApnTypeBitMask = i2;
        return i2;
    }

    static /* synthetic */ int access$14572(MtkDataConnection mtkDataConnection, int i) {
        int i2 = mtkDataConnection.mDisabledApnTypeBitMask & i;
        mtkDataConnection.mDisabledApnTypeBitMask = i2;
        return i2;
    }

    static /* synthetic */ int access$16776(MtkDataConnection mtkDataConnection, int i) {
        int i2 = mtkDataConnection.mDisabledApnTypeBitMask | i;
        mtkDataConnection.mDisabledApnTypeBitMask = i2;
        return i2;
    }

    static /* synthetic */ int access$19308(MtkDataConnection mtkDataConnection) {
        int i = mtkDataConnection.mRetryCount;
        mtkDataConnection.mRetryCount = i + 1;
        return i;
    }

    private void addInternetCapForDunOnlyType(ApnSetting apnSetting, NetworkCapabilities networkCapabilities) {
        if (this.mIsOp20) {
            boolean z = (apnSetting.getApnTypeBitmask() | 8) == 8;
            boolean z2 = apnSetting.getApnName() != null && apnSetting.getApnName().toLowerCase().contains("pam");
            if (z && z2) {
                int i = this.mRilRat;
                if (i != 12) {
                    switch (i) {
                    }
                }
                networkCapabilities.addCapability(12);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean canSendNetworkCapabilities() {
        if (MtkDcHelper.isPreferredDataPhone(this.mPhone)) {
            return true;
        }
        Iterator it = this.mApnContexts.values().iterator();
        while (it.hasNext()) {
            if (TextUtils.equals(((DataConnection.ConnectionParams) it.next()).mApnContext.getApnType(), "default")) {
                log("Not update network capabilities of default PDN for non-preferred data phone");
                return false;
            }
        }
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int getEventByAddress(boolean z, LinkAddress linkAddress) {
        InetAddress address = linkAddress.getAddress();
        if (z) {
            if (address instanceof Inet6Address) {
                return EVENT_IPV6_ADDRESS_UPDATED;
            }
            if (!DBG) {
                return -1;
            }
            StringBuilder sb = new StringBuilder();
            sb.append("unknown address type, linkAddr: ");
            sb.append(linkAddress != null ? TelephonyUtils.piiIP(linkAddress.toString()) : "");
            loge(sb.toString());
            return -1;
        }
        if (address instanceof Inet6Address) {
            return EVENT_IPV6_ADDRESS_REMOVED;
        }
        if (address instanceof Inet4Address) {
            return EVENT_IPV4_ADDRESS_REMOVED;
        }
        if (!DBG) {
            return -1;
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append("unknown address type, linkAddr: ");
        sb2.append(linkAddress != null ? TelephonyUtils.piiIP(linkAddress.toString()) : "");
        loge(sb2.toString());
        return -1;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean hasMdAutoSetupImsCapability() {
        TelephonyDevController telephonyDevController = this.mTelDevController;
        if (telephonyDevController == null || telephonyDevController.getModem(0) == null || !((MtkHardwareConfig) this.mTelDevController.getModem(0)).hasMdAutoSetupImsCapability()) {
            return false;
        }
        log("hasMdAutoSetupImsCapability: true");
        return true;
    }

    private boolean isAddCapabilityByDataOption() {
        boolean zIsUserDataEnabled = this.mPhone.isUserDataEnabled();
        boolean dataRoamingEnabled = this.mDct.getDataRoamingEnabled();
        log("addCapabilityByDataOption");
        if (zIsUserDataEnabled) {
            return !this.mPhone.getServiceState().getDataRoaming() || dataRoamingEnabled;
        }
        return false;
    }

    private boolean isNwNeedSuspended() {
        boolean zIsImsOrEmergencyApn = MtkDcHelper.isImsOrEmergencyApn(getApnType());
        boolean zIsWifiCallingEnabled = this.mIsInVoiceCall ? MtkDcHelper.getInstance().isWifiCallingEnabled() : false;
        if (DBG) {
            log("isNwNeedSuspended: mIsInVoiceCall = " + this.mIsInVoiceCall + ", mIsSupportConcurrent = " + this.mIsSupportConcurrent + ", bImsOrEmergencyApn = " + zIsImsOrEmergencyApn + ", bWifiCallingEnabled = " + zIsWifiCallingEnabled);
        }
        return (!this.mIsInVoiceCall || this.mIsSupportConcurrent || zIsImsOrEmergencyApn || zIsWifiCallingEnabled) ? false : true;
    }

    static /* synthetic */ String[] lambda$onSetupConnectionCompleted$0(int i) {
        return new String[i];
    }

    private int mtkReplaceReason(int i, ApnContext apnContext) {
        return (i == 1 && TextUtils.equals(apnContext.getReason(), MtkGsmCdmaPhone.REASON_DATA_SETUP_SSC_MODE3)) ? ExternalSimConstants.MSG_ID_INITIALIZATION_RESPONSE : i;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onAddressRemoved() {
        if ((1 != this.mApnSetting.getProtocol() && 2 != this.mApnSetting.getProtocol()) || isIpv4Connected()) {
            if (DBG) {
                log("onAddressRemoved: no need to remove");
                return;
            }
            return;
        }
        log("onAddressRemoved: IPv6 RA failed and didn't connect with IPv4");
        if (this.mApnContexts != null) {
            log("onAddressRemoved: mApnContexts size: " + this.mApnContexts.size());
            for (DataConnection.ConnectionParams connectionParams : this.mApnContexts.values()) {
                ApnContext apnContext = connectionParams.mApnContext;
                apnContext.getApnType();
                if (apnContext.getState() == DctConstants.State.CONNECTED) {
                    log("onAddressRemoved: send message EVENT_DISCONNECT_ALL");
                    sendMessage(obtainMessage(262150, new DataConnection.DisconnectParams(apnContext, MtkGsmCdmaPhone.REASON_RA_FAILED, 2, this.mDct.obtainMessage(270351, new Pair(apnContext, Integer.valueOf(connectionParams.mConnectionGeneration))))));
                    return;
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onSetupFallbackConnection(DataCallResponse dataCallResponse, DataConnection.ConnectionParams connectionParams) {
        if (connectionParams.mTag != this.mTag) {
            if (DBG) {
                log("onSetupFallbackConnection stale cp.tag=" + connectionParams.mTag + ", mtag=" + this.mTag);
            }
            DataConnection.SetupResult setupResult = DataConnection.SetupResult.ERROR_STALE;
            return;
        }
        if (DBG) {
            log("onSetupFallbackConnection received successful DataCallResponse");
        }
        this.mCid = dataCallResponse.getId();
        this.mPcscfAddr = (String[]) dataCallResponse.getPcscfAddresses().toArray(new String[dataCallResponse.getPcscfAddresses().size()]);
        DataConnection.SetupResult setupResult2 = updateLinkProperty(new DataCallResponse(0, dataCallResponse.getSuggestedRetryTime(), dataCallResponse.getId(), dataCallResponse.getLinkStatus(), dataCallResponse.getProtocolType(), dataCallResponse.getInterfaceName(), dataCallResponse.getAddresses(), dataCallResponse.getDnsAddresses(), dataCallResponse.getGatewayAddresses(), dataCallResponse.getPcscfAddresses(), dataCallResponse.getMtu())).setupResult;
        this.mInterfaceName = dataCallResponse.getInterfaceName();
        log("onSetupFallbackConnection: ifname-" + this.mInterfaceName);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void registerNetworkAlertObserver() {
        if (this.mNetworkManager != null) {
            log("registerNetworkAlertObserver X");
            try {
                this.mNetworkManager.registerObserver(this.mAlertObserver);
                log("registerNetworkAlertObserver E");
            } catch (RemoteException e) {
                loge("registerNetworkAlertObserver failed E");
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void resetRetryCount() {
        this.mRetryCount = 0;
        if (DBG) {
            log("resetRetryCount: " + this.mRetryCount);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendMessageForSM(int i, String str, LinkAddress linkAddress) {
        if (i < 0) {
            loge("sendMessageForSM: Skip notify!!!");
            return;
        }
        AddressInfo addressInfo = new AddressInfo(str, linkAddress);
        if (DBG) {
            log("sendMessageForSM: " + cmdToString(i) + ", addressInfo: " + addressInfo);
        }
        sendMessage(obtainMessage(i, addressInfo));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void sendNetworkScore(int i) {
        if (this.mNetworkAgent == null) {
            loge("Setting network score without a NetworkAgent");
        } else if (i >= 0) {
            this.mNetworkAgent.sendNetworkScore(i, this);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void setSscMode3LingeringTime(int i) {
        if (this.mNetworkAgent == null) {
            loge("Setting ssc mode3 lingering time without a NetworkAgent");
            return;
        }
        if (i >= 0) {
            try {
                if (methodQueueOrSendMessage != null) {
                    methodQueueOrSendMessage.invoke(this.mNetworkAgent, Integer.valueOf(EVENT_SET_LINGERING_TIME), Integer.valueOf(i), 0);
                }
            } catch (Exception e) {
                loge("setSscMode3LingeringTime fail! " + e.toString());
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void unregisterNetworkAlertObserver() {
        if (this.mNetworkManager != null) {
            log("unregisterNetworkAlertObserver X");
            try {
                this.mNetworkManager.unregisterObserver(this.mAlertObserver);
                log("unregisterNetworkAlertObserver E");
            } catch (RemoteException e) {
                loge("unregisterNetworkAlertObserver failed E");
            }
            this.mInterfaceName = null;
        }
    }

    private DataConnection.SetupResult updateCpaConnectionInfo(DataConnection.SetupResult setupResult, DataCallResponse dataCallResponse) {
        CpaDcTracker cpaDcTrackerInstance = CpaDcTracker.getCpaDcTrackerInstance();
        if (cpaDcTrackerInstance == null) {
            loge("[CpaDct]can't mCpaDct!");
            return setupResult;
        }
        if (cpaDcTrackerInstance.getCpaDctPhoneId() != this.mPhone.getPhoneId()) {
            loge("[CpaDct]mCpaDct's phone id not match!");
            return setupResult;
        }
        if (!cpaDcTrackerInstance.getRequestCpaMode().equals(CpaDcTracker.NAVI_MODE) || (cpaDcTrackerInstance.getCpaDctState() != 4 && cpaDcTrackerInstance.getCpaDctState() != 7)) {
            logd("[CpaDct]not handle, with requestMode=" + cpaDcTrackerInstance.getRequestCpaMode() + " CpaDctState=" + cpaDcTrackerInstance.getCpaDctState());
            return setupResult;
        }
        DataConnection.UpdateLinkPropertyResult updateLinkPropertyResultUpdateLinkProperty = updateLinkProperty(dataCallResponse);
        DataConnection.SetupResult setupResult2 = updateLinkPropertyResultUpdateLinkProperty.setupResult;
        logd("[CpaDct]updateCpaConnectionInfo() new res=" + setupResult2);
        cpaDcTrackerInstance.setCpaConInfo(((LinkAddress[]) updateLinkPropertyResultUpdateLinkProperty.newLp.getLinkAddresses().toArray(new LinkAddress[0]))[0].getAddress(), (InetAddress[]) updateLinkPropertyResultUpdateLinkProperty.newLp.getDnsServers().toArray(new InetAddress[0]));
        return setupResult2;
    }

    public void addMmsCapability() {
        if (!this.mIsRemoveMmsCapability || this.mNetworkAgent == null) {
            return;
        }
        log("addMmsCapability");
        this.mIsRemoveMmsCapability = false;
        this.mNetworkAgent.sendNetworkCapabilities(getNetworkCapabilities(), this);
    }

    protected void checkSetMtu(ApnSetting apnSetting, LinkProperties linkProperties) {
        if (linkProperties == null || apnSetting == null || linkProperties == null) {
            return;
        }
        if (linkProperties.getMtu() != 0) {
            if (DBG) {
                log("MTU set by call response to: " + linkProperties.getMtu());
                return;
            }
            return;
        }
        if (apnSetting != null && apnSetting.getMtu() != 0) {
            linkProperties.setMtu(apnSetting.getMtu());
            if (DBG) {
                log("MTU set by APN to: " + apnSetting.getMtu());
                return;
            }
            return;
        }
        int mtu = ((MtkDcTracker) this.mDct).getMtu();
        if (mtu != 0) {
            linkProperties.setMtu(mtu);
            if (DBG) {
                log("MTU set by 'self-created' config resource to: " + mtu);
                return;
            }
            return;
        }
        int integer = this.mPhone.getContext().getResources().getInteger(R.integer.config_displayWhiteBalanceTransitionTimeIncrease);
        if (integer != 0) {
            linkProperties.setMtu(integer);
            if (DBG) {
                log("MTU set by config resource to: " + integer);
            }
        }
    }

    protected void clearSettings() {
        super.clearSettings();
        if (DBG) {
            log("clearSettings");
        }
        this.mGlobalV6AddrInfo = null;
        resetRetryCount();
        this.mCause = 0;
        this.mIsSetupDataCallByCi = false;
        this.mIsRemoveMmsCapability = false;
    }

    protected int connect(DataConnection.ConnectionParams connectionParams) {
        LinkProperties linkProperties;
        log("connect: carrier='" + this.mApnSetting.getEntryName() + "' APN='" + this.mApnSetting.getApnName() + "' proxy='" + this.mApnSetting.getProxyAddressAsString() + "' port='" + this.mApnSetting.getProxyPort() + "'");
        if (connectionParams.mApnContext != null) {
            connectionParams.mApnContext.requestLog("MtkDataConnection.connect");
        }
        if (this.mDcTesterFailBringUpAll.getDcFailBringUp().mCounter > 0) {
            DataCallResponse dataCallResponseBuild = new DataCallResponse.Builder().setCause(this.mDcTesterFailBringUpAll.getDcFailBringUp().mFailCause).setSuggestedRetryTime(this.mDcTesterFailBringUpAll.getDcFailBringUp().mSuggestedRetryTime).setMtuV4(0).setMtuV6(0).build();
            Message messageObtainMessage = obtainMessage(262145, connectionParams);
            AsyncResult.forMessage(messageObtainMessage, dataCallResponseBuild, (Throwable) null);
            sendMessage(messageObtainMessage);
            if (DBG) {
                log("connect: FailBringUpAll=" + this.mDcTesterFailBringUpAll.getDcFailBringUp() + " send error response=" + dataCallResponseBuild);
            }
            this.mDcTesterFailBringUpAll.getDcFailBringUp().mCounter--;
            return 0;
        }
        this.mCreateTime = -1L;
        this.mLastFailTime = -1L;
        this.mLastFailCause = 0;
        Message messageObtainMessage2 = obtainMessage(262145, connectionParams);
        messageObtainMessage2.obj = connectionParams;
        DataProfile dataProfileCreateDataProfile = DcTracker.createDataProfile(this.mApnSetting, connectionParams.mProfileId, connectionParams.mIsPreferredApn);
        boolean dataRoamingFromRegistration = this.mPhone.getServiceState().getDataRoamingFromRegistration();
        boolean z = !ApnSettingUtils.isMeteredApnType(connectionParams.mApnContext.getApnTypeBitmask(), this.mPhone);
        boolean z2 = this.mPhone.getDataRoamingEnabled() || (dataRoamingFromRegistration && (!this.mPhone.getServiceState().getDataRoaming() || z)) || DcTrackerInjector.mmsAllowedOnRoaming(this.mDct, connectionParams.mApnContext);
        if (DBG) {
            log("allowRoaming=" + z2 + ", mPhone.getDataRoamingEnabled()=" + this.mPhone.getDataRoamingEnabled() + ", isModemRoaming=" + dataRoamingFromRegistration + ", mPhone.getServiceState().getDataRoaming()=" + this.mPhone.getServiceState().getDataRoaming() + ", isUnmeteredApnType=" + z);
        }
        int i = 1;
        if (connectionParams.mRequestType == 2) {
            DcTracker dcTracker = this.mPhone.getDcTracker(getHandoverSourceTransport());
            if (dcTracker == null || connectionParams.mApnContext == null) {
                loge("connect: Handover failed. dcTracker=" + dcTracker + ", apnContext=" + connectionParams.mApnContext);
                return 65542;
            }
            DataConnection dataConnectionByApnType = dcTracker.getDataConnectionByApnType(connectionParams.mApnContext.getApnType());
            if (dataConnectionByApnType == null) {
                loge("connect: Can't find data connection for handover.");
                return 65542;
            }
            this.mHandoverSourceNetworkAgent = dataConnectionByApnType.getNetworkAgent();
            if (this.mHandoverSourceNetworkAgent == null) {
                loge("Cannot get network agent from the source dc " + dataConnectionByApnType.getName());
                return 65542;
            }
            LinkProperties linkProperties2 = dataConnectionByApnType.getLinkProperties();
            if (linkProperties2 == null || linkProperties2.getLinkAddresses().isEmpty()) {
                loge("connect: Can't find link properties of handover data connection. dc=" + dataConnectionByApnType);
                return 65542;
            }
            this.mHandoverLocalLog.log("Handover started. Preserved the agent.");
            log("Get the handover source network agent: " + this.mHandoverSourceNetworkAgent);
            dataConnectionByApnType.setHandoverState(2);
            i = 3;
            linkProperties = linkProperties2;
        } else {
            linkProperties = null;
        }
        int iMtkReplaceReason = mtkReplaceReason(i, connectionParams.mApnContext);
        if (connectionParams.mApnContext != null && !connectionParams.mApnContext.isEnabled()) {
            log("Apn context is disabled, ignore setup data call");
            return 2045;
        }
        if (((MtkDcTracker) this.mDct).isDataServiceBound()) {
            this.mDataServiceManager.setupDataCall(ServiceState.rilRadioTechnologyToAccessNetworkType(connectionParams.mRilRat), dataProfileCreateDataProfile, dataRoamingFromRegistration, z2, iMtkReplaceReason, linkProperties, messageObtainMessage2);
        } else {
            this.mIsSetupDataCallByCi = true;
            this.mPhone.mCi.setupDataCall(ServiceState.rilRadioTechnologyToAccessNetworkType(connectionParams.mRilRat), dataProfileCreateDataProfile, dataRoamingFromRegistration, z2, iMtkReplaceReason, linkProperties, messageObtainMessage2);
        }
        TelephonyMetrics.getInstance().writeSetupDataCall(this.mPhone.getPhoneId(), connectionParams.mRilRat, dataProfileCreateDataProfile.getProfileId(), dataProfileCreateDataProfile.getApn(), dataProfileCreateDataProfile.getProtocolType());
        return 0;
    }

    public void fakeNetworkAgent(ApnContext apnContext) {
        this.mApnContexts.put(apnContext, new DataConnection.ConnectionParams(apnContext, ExternalSimConstants.MSG_ID_INITIALIZATION_RESPONSE, 0, (Message) null, apnContext.incAndGetConnectionGeneration(), 1, this.mPhone.getSubId(), false));
        if (TextUtils.equals(apnContext.getApnType(), "mms")) {
            this.mNetworkInfo.setDetailedState(NetworkInfo.DetailedState.CONNECTED, this.mNetworkInfo.getReason(), null);
            this.mNetworkInfo.setExtraInfo("invalid_apn");
            this.mApnSetting = ApnSetting.makeApnSetting(0, "44010", "Fake APN", "fake_apn", null, -1, null, null, -1, "", "", -1, 2, 0, 0, true, 0, 0, false, 0, 0, 0, 0, -1, "");
        }
        this.mScore = calculateScore();
        NetworkAgentConfig.Builder builder = new NetworkAgentConfig.Builder();
        builder.setLegacyType(0);
        builder.setLegacyTypeName("MOBILE");
        String subscriberId = this.mPhone.getSubscriberId();
        if (!TextUtils.isEmpty(subscriberId)) {
            builder.setSubscriberId(subscriberId);
        }
        TelephonyNetworkFactory networkFactory = PhoneFactory.getNetworkFactory(this.mPhone.getPhoneId());
        this.mNetworkAgent = new DcNetworkAgent(this, this.mPhone, this.mNetworkInfo, this.mScore, builder.build(), networkFactory == null ? null : networkFactory.getProvider(), this.mTransportType);
        clearSettings();
    }

    String[] getApnType() {
        if (VDBG) {
            log("getApnType: mApnContexts.size() = " + this.mApnContexts.size());
        }
        if (this.mApnContexts.size() == 0) {
            return null;
        }
        String[] strArr = new String[this.mApnContexts.values().size()];
        int i = 0;
        Iterator it = this.mApnContexts.values().iterator();
        while (it.hasNext()) {
            String apnType = ((DataConnection.ConnectionParams) it.next()).mApnContext.getApnType();
            if (VDBG) {
                log("getApnType: apnType = " + apnType);
            }
            strArr[i] = new String(apnType);
            i++;
        }
        return strArr;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code duplicated, block: B:138:0x029b  */
    /* JADX WARN: Code duplicated, block: B:139:0x029d  */
    /* JADX WARN: Code duplicated, block: B:142:0x02a2  */
    /* JADX WARN: Code duplicated, block: B:62:0x010c  */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public NetworkCapabilities getNetworkCapabilities() {
        boolean z;
        int i;
        boolean z2;
        boolean z3;
        byte b;
        boolean z4;
        NetworkCapabilities networkCapabilities = new NetworkCapabilities();
        boolean z5 = false;
        networkCapabilities.addTransportType(0);
        if (this.mApnSetting != null) {
            String[] strArrSplit = ApnSetting.getApnTypesStringFromBitmask(this.mApnSetting.getApnTypeBitmask() & (~this.mDisabledApnTypeBitMask)).split(",");
            int length = strArrSplit.length;
            int i2 = 0;
            while (i2 < length) {
                String str = strArrSplit[i2];
                if (this.mRestrictedNetworkOverride || !this.mUnmeteredUseOnly || !ApnSettingUtils.isMeteredApnType(ApnSetting.getApnTypesBitmaskFromString(str), this.mPhone)) {
                    switch (str.hashCode()) {
                        case 42:
                            if (!str.equals("*")) {
                                b = -1;
                            } else {
                                b = 0;
                            }
                            break;
                        case 3352:
                            if (!str.equals("ia")) {
                                b = -1;
                            } else {
                                b = 8;
                            }
                            break;
                        case 97545:
                            if (!str.equals("bip")) {
                                b = -1;
                            } else {
                                b = 13;
                            }
                            break;
                        case 98292:
                            if (!str.equals("cbs")) {
                                b = -1;
                            } else {
                                b = 7;
                            }
                            break;
                        case 99837:
                            if (!str.equals("dun")) {
                                b = -1;
                            } else {
                                b = 4;
                            }
                            break;
                        case 104399:
                            if (!str.equals("ims")) {
                                b = -1;
                            } else {
                                b = 6;
                            }
                            break;
                        case 107938:
                            if (!str.equals("mcx")) {
                                b = -1;
                            } else {
                                b = 10;
                            }
                            break;
                        case 108243:
                            if (!str.equals("mms")) {
                                b = -1;
                            } else {
                                b = 2;
                            }
                            break;
                        case 112738:
                            if (!str.equals("rcs")) {
                                b = -1;
                            } else {
                                b = 12;
                            }
                            break;
                        case 3149046:
                            if (!str.equals("fota")) {
                                b = -1;
                            } else {
                                b = 5;
                            }
                            break;
                        case 3541982:
                            if (!str.equals("supl")) {
                                b = -1;
                            } else {
                                b = 3;
                            }
                            break;
                        case 3629217:
                            if (!str.equals("vsim")) {
                                b = -1;
                            } else {
                                b = 14;
                            }
                            break;
                        case 3673178:
                            if (!str.equals("xcap")) {
                                b = -1;
                            } else {
                                b = PplMessageManager.Type.INSTRUCTION_DESCRIPTION2;
                            }
                            break;
                        case 1544803905:
                            if (!str.equals("default")) {
                                b = -1;
                            } else {
                                b = 1;
                            }
                            break;
                        case 1629013393:
                            if (!str.equals("emergency")) {
                                b = -1;
                            } else {
                                b = 9;
                            }
                            break;
                        default:
                            b = -1;
                            break;
                    }
                    switch (b) {
                        case 0:
                            if (MtkDcHelper.isPreferredDataPhone(this.mPhone)) {
                                networkCapabilities.addCapability(12);
                            }
                            if (this.mIsRemoveMmsCapability) {
                                z4 = false;
                            } else {
                                z4 = false;
                                networkCapabilities.addCapability(0);
                            }
                            networkCapabilities.addCapability(1);
                            networkCapabilities.addCapability(3);
                            networkCapabilities.addCapability(5);
                            networkCapabilities.addCapability(7);
                            networkCapabilities.addCapability(2);
                            networkCapabilities.addCapability(9);
                            networkCapabilities.addCapability(8);
                            networkCapabilities.addCapability(27);
                            networkCapabilities.addCapability(26);
                            break;
                        case 1:
                            if (!MtkDcHelper.isPreferredDataPhone(this.mPhone)) {
                                z4 = false;
                            } else {
                                networkCapabilities.addCapability(12);
                                z4 = false;
                            }
                            break;
                        case 2:
                            if (!this.mIsRemoveMmsCapability) {
                                networkCapabilities.addCapability(0);
                                z4 = false;
                            } else {
                                z4 = false;
                            }
                            break;
                        case 3:
                            networkCapabilities.addCapability(1);
                            z4 = false;
                            break;
                        case 4:
                            networkCapabilities.addCapability(2);
                            z4 = false;
                            break;
                        case 5:
                            networkCapabilities.addCapability(3);
                            z4 = false;
                            break;
                        case 6:
                            networkCapabilities.addCapability(4);
                            z4 = false;
                            break;
                        case 7:
                            networkCapabilities.addCapability(5);
                            z4 = false;
                            break;
                        case 8:
                            networkCapabilities.addCapability(7);
                            z4 = false;
                            break;
                        case 9:
                            networkCapabilities.addCapability(10);
                            z4 = false;
                            break;
                        case 10:
                            networkCapabilities.addCapability(23);
                            z4 = false;
                            break;
                        case 11:
                            networkCapabilities.addCapability(9);
                            z4 = false;
                            break;
                        case 12:
                            networkCapabilities.addCapability(8);
                            z4 = false;
                            break;
                        case 13:
                            networkCapabilities.addCapability(27);
                            z4 = false;
                            break;
                        case 14:
                            networkCapabilities.addCapability(26);
                            z4 = false;
                            break;
                        default:
                            z4 = false;
                            break;
                    }
                } else {
                    log("Dropped the metered " + str + " for the unmetered data call.");
                    z4 = z5;
                }
                i2++;
                z5 = z4;
            }
            z = z5;
            addInternetCapForDunOnlyType(this.mApnSetting, networkCapabilities);
            networkCapabilities.setCapability(11, !ApnSettingUtils.isMetered(this.mApnSetting, this.mPhone));
            if (this.mConnectionParams != null && this.mConnectionParams.mApnContext != null && (("mms".equals(this.mConnectionParams.mApnContext.getApnType()) || "supl".equals(this.mConnectionParams.mApnContext.getApnType())) && networkCapabilities.hasCapability(12) && (!this.mPhone.getDataEnabledSettings().isDataEnabled() || this.mPhone.getSubId() != SubscriptionManager.getDefaultDataSubscriptionId()))) {
                log("removeCapability INTERNET when apntext type is mms or supl only");
                networkCapabilities.removeCapability(12);
            }
            if (networkCapabilities.deduceRestrictedCapability()) {
                i = 13;
                networkCapabilities.removeCapability(13);
            } else {
                i = 13;
            }
        } else {
            z = false;
            i = 13;
        }
        if (this.mRestrictedNetworkOverride) {
            networkCapabilities.removeCapability(i);
            networkCapabilities.removeCapability(2);
        }
        networkCapabilities.setLinkDownstreamBandwidthKbps(this.mDownlinkBandwidth);
        networkCapabilities.setLinkUpstreamBandwidthKbps(this.mUplinkBandwidth);
        networkCapabilities.setNetworkSpecifier(new TelephonyNetworkSpecifier.Builder().setSubscriptionId(this.mSubId).build());
        networkCapabilities.setCapability(18, !this.mPhone.getServiceState().getDataRoaming());
        if ((this.mSubscriptionOverride & 2) == 0) {
            networkCapabilities.addCapability(20);
        }
        if ((!this.mUnmeteredUseOnly || this.mRestrictedNetworkOverride) && !this.mUnmeteredOverride) {
            z2 = true;
            if ((this.mSubscriptionOverride & 1) == 0) {
                networkCapabilities.removeCapability(25);
            }
            if (this.mNetworkInfo.getDetailedState() == NetworkInfo.DetailedState.SUSPENDED) {
                z3 = z2;
            } else {
                z3 = z;
            }
            if (!z3) {
                z = z2;
            }
            networkCapabilities.setCapability(21, z);
            networkCapabilities.setAdministratorUids(this.mAdministratorUids);
            this.mNetworkCapabilities = networkCapabilities;
            return networkCapabilities;
        }
        z2 = true;
        networkCapabilities.addCapability(25);
        if (this.mNetworkInfo.getDetailedState() == NetworkInfo.DetailedState.SUSPENDED) {
            z3 = z2;
        } else {
            z3 = z;
        }
        if (!z3) {
            z = z2;
        }
        networkCapabilities.setCapability(21, z);
        networkCapabilities.setAdministratorUids(this.mAdministratorUids);
        this.mNetworkCapabilities = networkCapabilities;
        return networkCapabilities;
    }

    protected long getSuggestedRetryDelay(DataCallResponse dataCallResponse) {
        if (dataCallResponse.getSuggestedRetryTime() < 0) {
            if (DBG) {
                log("No suggested retry delay.");
            }
            DcFailCauseManager dcFailCauseManager = this.mDcFcMgr;
            if (dcFailCauseManager != null) {
                return dcFailCauseManager.getSuggestedRetryDelayByOp(dataCallResponse.getLinkStatus());
            }
            return -2L;
        }
        if (dataCallResponse.getSuggestedRetryTime() != Integer.MAX_VALUE) {
            return dataCallResponse.getSuggestedRetryTime();
        }
        if (!DBG) {
            return -1L;
        }
        log("Modem suggested not retrying.");
        return -1L;
    }

    public void handlePcscfErrorCause(DataConnection.DisconnectParams disconnectParams) {
        CarrierConfigManager carrierConfigManager = (CarrierConfigManager) this.mPhone.getContext().getSystemService("carrier_config");
        int subId = this.mPhone.getSubId();
        if (carrierConfigManager == null) {
            loge("handlePcscfErrorCause() null configMgr!");
            return;
        }
        PersistableBundle configForSubId = carrierConfigManager.getConfigForSubId(subId);
        if (configForSubId == null) {
            loge("handlePcscfErrorCause() null config!");
            return;
        }
        boolean z = configForSubId.getBoolean("ims_pdn_sync_fail_cause_to_modem_bool");
        log("handlePcscfErrorCause() syncFailCause: " + z + ", subId: " + subId);
        if (z && TextUtils.equals(disconnectParams.mApnContext.getApnType(), "ims")) {
            if (this.mPcscfAddr == null || this.mPcscfAddr.length <= 0) {
                disconnectParams.mReason = MtkGsmCdmaPhone.REASON_PCSCF_ADDRESS_FAILED;
                log("Disconnect with empty P-CSCF address");
            }
        }
    }

    protected void log(String str) {
        logd(str);
    }

    protected void logd(String str) {
        Rlog.d(LOG_TAG, "[" + getName() + "] " + str);
    }

    protected void loge(String str) {
        Rlog.e(LOG_TAG, "[" + getName() + "] " + str);
    }

    protected void loge(String str, Throwable th) {
        Rlog.e(LOG_TAG, "[" + getName() + "] " + str, th);
    }

    protected void logi(String str) {
        Rlog.i(LOG_TAG, "[" + getName() + "] " + str);
    }

    protected void logv(String str) {
        Rlog.v(LOG_TAG, "[" + getName() + "] " + str);
    }

    protected void logw(String str) {
        Rlog.w(LOG_TAG, "[" + getName() + "] " + str);
    }

    protected LinkProperties mtkGetLinkProperties() {
        if (this.mGlobalV6AddrInfo == null) {
            return this.mLinkProperties;
        }
        LinkProperties linkProperties = new LinkProperties(this.mLinkProperties);
        for (LinkAddress linkAddress : linkProperties.getLinkAddresses()) {
            if (linkAddress.getAddress() instanceof Inet6Address) {
                linkProperties.removeLinkAddress(linkAddress);
                break;
            }
        }
        linkProperties.addLinkAddress(this.mGlobalV6AddrInfo.mLinkAddr);
        return linkProperties;
    }

    protected void mtkReplaceStates() {
        this.mDefaultState = new MtkDcDefaultState();
        this.mActivatingState = new MtkDcActivatingState();
        this.mActiveState = new MtkDcActiveState();
        this.mDisconnectingState = new MtkDcDisconnectingState();
        this.mDisconnectingErrorCreatingConnection = new MtkDcDisconnectionErrorCreatingConnection();
    }

    protected void mtkSetApnContextReason(ApnContext apnContext, String str) {
        Iterator it = this.mApnContexts.values().iterator();
        while (it.hasNext()) {
            ApnContext apnContext2 = ((DataConnection.ConnectionParams) it.next()).mApnContext;
            if (apnContext2 == apnContext && MtkGsmCdmaPhone.REASON_RA_FAILED.equals(str)) {
                log("set reason:" + str);
                apnContext2.setReason(str);
            }
        }
    }

    public void notifyVoiceCallEvent(boolean z, boolean z2) {
        sendMessage(EVENT_VOICE_CALL, z ? 1 : 0, z2 ? 1 : 0);
    }

    protected DataConnection.SetupResult onSetupConnectionCompleted(int i, DataCallResponse dataCallResponse, DataConnection.ConnectionParams connectionParams) {
        log("onSetupConnectionCompleted: resultCode=" + i + ", response=" + dataCallResponse);
        if (connectionParams.mTag != this.mTag) {
            if (DBG) {
                log("onSetupConnectionCompleted stale cp.tag=" + connectionParams.mTag + ", mtag=" + this.mTag);
            }
            return DataConnection.SetupResult.ERROR_STALE;
        }
        if (dataCallResponse == null || i == 4) {
            DataConnection.SetupResult setupResult = DataConnection.SetupResult.ERROR_RADIO_NOT_AVAILABLE;
            setupResult.mFailCause = 65537;
            return setupResult;
        }
        if (dataCallResponse.getCause() != 0) {
            if (dataCallResponse.getCause() == 65537) {
                DataConnection.SetupResult setupResult2 = DataConnection.SetupResult.ERROR_RADIO_NOT_AVAILABLE;
                setupResult2.mFailCause = 65537;
                return setupResult2;
            }
            DataConnection.SetupResult setupResult3 = DataConnection.SetupResult.ERROR_DATA_SERVICE_SPECIFIC_ERROR;
            setupResult3.mFailCause = DataFailCause.getFailCause(dataCallResponse.getCause());
            return setupResult3;
        }
        if (DBG) {
            log("onSetupConnectionCompleted received successful DataCallResponse");
        }
        this.mCid = dataCallResponse.getId();
        this.mPcscfAddr = (String[]) dataCallResponse.getPcscfAddresses().stream().map(new Function() { // from class: com.mediatek.internal.telephony.dataconnection.-$$Lambda$XZAGhHrbkIDyusER4MAM6luKcT0
            @Override // java.util.function.Function
            public final Object apply(Object obj) {
                return ((InetAddress) obj).getHostAddress();
            }
        }).toArray(new IntFunction() { // from class: com.mediatek.internal.telephony.dataconnection.-$$Lambda$MtkDataConnection$d-5DGPjmgYOgwzy7IwiRu2rUAiI
            @Override // java.util.function.IntFunction
            public final Object apply(int i2) {
                return MtkDataConnection.lambda$onSetupConnectionCompleted$0(i2);
            }
        });
        DataConnection.SetupResult setupResult4 = updateLinkProperty(dataCallResponse).setupResult;
        this.mInterfaceName = dataCallResponse.getInterfaceName();
        log("onSetupConnectionCompleted: ifname-" + this.mInterfaceName);
        return MtkDcHelper.getInstance().isOperatorMccMnc(MtkDcHelper.Operator.OP129, this.mPhone.getPhoneId()) ? updateCpaConnectionInfo(setupResult4, dataCallResponse) : setupResult4;
    }

    public void removeMmsCapability() {
        if (!isActive() || this.mNetworkAgent == null) {
            return;
        }
        log("removeMmsCapability");
        this.mIsRemoveMmsCapability = true;
        this.mNetworkAgent.sendNetworkCapabilities(getNetworkCapabilities(), this);
    }

    public void setLostConnectionCause(int i) {
        this.mCause = i;
    }

    public void startRetryAlarm(int i, int i2, long j) {
        Intent intent = new Intent(this.mActionRetry);
        intent.putExtra(INTENT_RETRY_ALARM_WHAT, i);
        intent.putExtra(INTENT_RETRY_ALARM_TAG, i2);
        if (DBG) {
            log("startRetryAlarm: next attempt in " + (j / 1000) + "s what=" + i + " tag=" + i2);
        }
        this.mAlarmManager.set(2, SystemClock.elapsedRealtime() + j, PendingIntent.getBroadcast(this.mPhone.getContext(), 0, intent, 134217728));
    }

    public void startRetryAlarmExact(int i, int i2, long j) {
        Intent intent = new Intent(this.mActionRetry);
        intent.addFlags(268435456);
        intent.putExtra(INTENT_RETRY_ALARM_WHAT, i);
        intent.putExtra(INTENT_RETRY_ALARM_TAG, i2);
        if (DBG) {
            log("startRetryAlarmExact: next attempt in " + (j / 1000) + "s what=" + i + " tag=" + i2);
        }
        this.mAlarmManager.setExact(2, SystemClock.elapsedRealtime() + j, PendingIntent.getBroadcast(this.mPhone.getContext(), 0, intent, 134217728));
    }

    protected void tearDownData(Object obj) {
        int i = 1;
        ApnContext apnContext = null;
        if (obj != null && (obj instanceof DataConnection.DisconnectParams)) {
            DataConnection.DisconnectParams disconnectParams = (DataConnection.DisconnectParams) obj;
            apnContext = disconnectParams.mApnContext;
            if (TextUtils.equals(disconnectParams.mReason, "radioTurnedOff")) {
                i = 2;
            } else if (disconnectParams.mReleaseType == 3) {
                i = 3;
            } else if (TextUtils.equals(disconnectParams.mReason, MtkGsmCdmaPhone.REASON_RA_FAILED)) {
                long j = this.mValid;
                if (j == -1) {
                    i = ExternalSimConstants.MSG_ID_CAPABILITY_SWITCH_DONE;
                } else if (j == -2) {
                    i = MtkGsmCdmaPhone.EVENT_GET_CLIR_COMPLETE;
                }
            } else if (TextUtils.equals(disconnectParams.mReason, MtkGsmCdmaPhone.REASON_PCSCF_ADDRESS_FAILED)) {
                i = 2003;
            } else if (TextUtils.equals(disconnectParams.mReason, "apnChanged")) {
                i = MtkGsmCdmaPhone.EVENT_SET_CALL_BARRING_COMPLETE;
            }
            if (i == 1 && apnContext != null && TextUtils.equals(apnContext.getApnType(), "default") && this.mSubController.getDefaultDataSubId() == this.mPhone.getSubId() && this.mPhone.getDataEnabledSettings().isDataEnabled() && MtkPhoneSwitcher.getInstance().getTempDataSwitchState()) {
                i = MtkGsmCdmaPhone.EVENT_GET_CALL_BARRING_COMPLETE;
            }
        }
        String str = "tearDownData. mCid=" + this.mCid + ", reason=" + i;
        if (DBG) {
            log(str);
        }
        if (apnContext != null) {
            apnContext.requestLog(str);
        }
        this.mPhone.mCi.deactivateDataCall(this.mCid, i, obtainMessage(262147, this.mTag, 0, obj));
    }

    public String toStringSimple() {
        return getName() + ": State=" + getCurrentState().getName() + " mApnSetting=" + this.mApnSetting + " RefCount=" + this.mApnContexts.size() + " mCid=" + this.mCid + " mCreateTime=" + this.mCreateTime + " mLastastFailTime=" + this.mLastFailTime + " mLastFailCause=" + this.mLastFailCause + " mTag=" + this.mTag + " mLinkProperties=" + this.mLinkProperties + " linkCapabilities=" + this.mNetworkCapabilities + " mRestrictedNetworkOverride=" + this.mRestrictedNetworkOverride;
    }

    public void updateNetworkAgentSscMode3(int i, int i2) {
        sendMessage(EVENT_UPDATE_NETWORKAGENT_SSC_MODE3, i, i2);
    }

    protected void updateNetworkInfoSuspendState() {
        NetworkInfo.DetailedState detailedState = this.mNetworkInfo.getDetailedState();
        if (this.mNetworkAgent == null) {
            Rlog.e(getName(), "Setting suspend state without a NetworkAgent");
        }
        ServiceStateTracker serviceStateTracker = this.mPhone.getServiceStateTracker();
        boolean zIsNwNeedSuspended = isNwNeedSuspended();
        if (DBG) {
            log("updateNetworkInfoSuspendState: oldState = " + detailedState + ", currentDataConnectionState = " + serviceStateTracker.getCurrentDataConnectionState() + ", bNwNeedSuspended = " + zIsNwNeedSuspended);
        }
        if (serviceStateTracker.getCurrentDataConnectionState() == 0) {
            if (zIsNwNeedSuspended) {
                this.mNetworkInfo.setDetailedState(NetworkInfo.DetailedState.SUSPENDED, null, this.mNetworkInfo.getExtraInfo());
                return;
            } else {
                this.mNetworkInfo.setDetailedState(NetworkInfo.DetailedState.CONNECTED, null, this.mNetworkInfo.getExtraInfo());
                return;
            }
        }
        if (this.mIsInVoiceCall || MtkDcHelper.isImsOrEmergencyApn(getApnType()) || MtkDcHelper.hasVsimApn(getApnType())) {
            return;
        }
        this.mNetworkInfo.setDetailedState(NetworkInfo.DetailedState.SUSPENDED, null, this.mNetworkInfo.getExtraInfo());
    }
}
