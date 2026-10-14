package com.mediatek.ims.ril;

import android.content.Context;
import android.os.AsyncResult;
import android.os.Handler;
import android.os.Registrant;
import android.os.RegistrantList;
import android.telephony.Rlog;

/* JADX INFO: loaded from: classes.dex */
public abstract class ImsBaseCommands implements ImsCommandsInterface {
    protected Registrant mCdmaSmsRegistrant;
    protected Context mContext;
    protected Registrant mNewSmsRegistrant;
    protected int mPhoneId;
    protected Registrant mSmsStatusRegistrant;
    protected int mState = 2;
    protected Object mStateMonitor = new Object();
    protected RegistrantList mRadioStateChangedRegistrants = new RegistrantList();
    protected RegistrantList mOnRegistrants = new RegistrantList();
    protected RegistrantList mOffRegistrants = new RegistrantList();
    protected RegistrantList mAvailRegistrants = new RegistrantList();
    protected RegistrantList mOffOrNotAvailRegistrants = new RegistrantList();
    protected RegistrantList mNotAvailRegistrants = new RegistrantList();
    protected RegistrantList mIncomingCallIndicationRegistrants = new RegistrantList();
    protected RegistrantList mCallAdditionalInfoRegistrants = new RegistrantList();
    protected RegistrantList mCallRatIndicationRegistrants = new RegistrantList();
    protected RegistrantList mImsEnableStartRegistrants = new RegistrantList();
    protected RegistrantList mImsDisableStartRegistrants = new RegistrantList();
    protected RegistrantList mImsEnableDoneRegistrants = new RegistrantList();
    protected RegistrantList mImsDisableDoneRegistrants = new RegistrantList();
    protected RegistrantList mImsRegistrationInfoRegistrants = new RegistrantList();
    protected RegistrantList mEconfResultRegistrants = new RegistrantList();
    protected RegistrantList mCallInfoRegistrants = new RegistrantList();
    protected RegistrantList mEctResultRegistrants = new RegistrantList();
    protected RegistrantList mCallProgressIndicatorRegistrants = new RegistrantList();
    protected RegistrantList mCallModeChangeIndicatorRegistrants = new RegistrantList();
    protected RegistrantList mVideoCapabilityIndicatorRegistrants = new RegistrantList();
    protected RegistrantList mUSSIRegistrants = new RegistrantList();
    protected RegistrantList mEnterECBMRegistrants = new RegistrantList();
    protected RegistrantList mExitECBMRegistrants = new RegistrantList();
    protected RegistrantList mNoECBMRegistrants = new RegistrantList();
    protected RegistrantList mImsGetProvisionDoneRegistrants = new RegistrantList();
    protected RegistrantList mRTPInfoRegistrants = new RegistrantList();
    protected RegistrantList mVolteSettingRegistrants = new RegistrantList();
    protected Object mVolteSettingValue = null;
    protected RegistrantList mBearerStateRegistrants = new RegistrantList();
    protected RegistrantList mBearerInitRegistrants = new RegistrantList();
    protected RegistrantList mImsDataInfoNotifyRegistrants = new RegistrantList();
    protected RegistrantList mXuiRegistrants = new RegistrantList();
    protected RegistrantList mVolteSubscriptionRegistrants = new RegistrantList();
    protected RegistrantList mSuppServiceNotificationRegistrants = new RegistrantList();
    protected RegistrantList mImsEvtPkgRegistrants = new RegistrantList();
    protected RegistrantList mImsDeregistrationDoneRegistrants = new RegistrantList();
    protected RegistrantList mMultiImsCountRegistrants = new RegistrantList();
    protected RegistrantList mImsConfInfoRegistrants = new RegistrantList();
    protected RegistrantList mLteMsgWaitingRegistrants = new RegistrantList();
    protected RegistrantList mImsCfgDynamicImsSwitchCompleteRegistrants = new RegistrantList();
    protected RegistrantList mImsCfgFeatureChangedRegistrants = new RegistrantList();
    protected RegistrantList mImsCfgConfigChangedRegistrants = new RegistrantList();
    protected RegistrantList mImsCfgConfigLoadedRegistrants = new RegistrantList();
    protected RegistrantList mRttCapabilityIndicatorRegistrants = new RegistrantList();
    protected RegistrantList mRttModifyResponseRegistrants = new RegistrantList();
    protected RegistrantList mRttTextReceiveRegistrants = new RegistrantList();
    protected RegistrantList mRttModifyRequestReceiveRegistrants = new RegistrantList();
    protected RegistrantList mRttAudioIndicatorRegistrants = new RegistrantList();
    protected RegistrantList mVopsStatusIndRegistrants = new RegistrantList();
    protected RegistrantList mImsRegStatusIndRistrants = new RegistrantList();
    protected RegistrantList mImsSipHeaderRegistrants = new RegistrantList();
    protected RegistrantList mEiregIndRegistrants = new RegistrantList();
    protected RegistrantList mSsacIndRegistrants = new RegistrantList();
    protected RegistrantList mImsEccSupportRegistrants = new RegistrantList();
    protected RegistrantList mSpeechCodecInfoRegistrant = new RegistrantList();
    protected RegistrantList mImsDialogRegistrant = new RegistrantList();
    protected RegistrantList mImsRedialEccIndRegistrants = new RegistrantList();

    public ImsBaseCommands(Context context, int i) {
        this.mContext = context;
        this.mPhoneId = i;
    }

    protected void notifyRadioStateChanged(int i) {
    }

    protected void onRadioAvailable() {
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForBearerInit(Handler handler, int i, Object obj) {
        this.mBearerInitRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForBearerState(Handler handler, int i, Object obj) {
        this.mBearerStateRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForCallAdditionalInfo(Handler handler, int i, Object obj) {
        this.mCallAdditionalInfoRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForCallInfo(Handler handler, int i, Object obj) {
        this.mCallInfoRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForCallModeChangeIndicator(Handler handler, int i, Object obj) {
        this.mCallModeChangeIndicatorRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForCallProgressIndicator(Handler handler, int i, Object obj) {
        this.mCallProgressIndicatorRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForCallRatIndication(Handler handler, int i, Object obj) {
        this.mCallRatIndicationRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForDetailImsRegistrationInd(Handler handler, int i, Object obj) {
        this.mEiregIndRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForEconfResult(Handler handler, int i, Object obj) {
        this.mEconfResultRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForEctResult(Handler handler, int i, Object obj) {
        this.mEctResultRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForGetProvisionComplete(Handler handler, int i, Object obj) {
        this.mImsGetProvisionDoneRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsCfgConfigChanged(Handler handler, int i, Object obj) {
        this.mImsCfgConfigChangedRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsCfgConfigLoaded(Handler handler, int i, Object obj) {
        this.mImsCfgConfigLoadedRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsCfgDynamicImsSwitchComplete(Handler handler, int i, Object obj) {
        this.mImsCfgDynamicImsSwitchCompleteRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsCfgFeatureChanged(Handler handler, int i, Object obj) {
        this.mImsCfgFeatureChangedRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsConfInfoUpdate(Handler handler, int i, Object obj) {
        this.mImsConfInfoRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsDataInfoNotify(Handler handler, int i, Object obj) {
        this.mImsDataInfoNotifyRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsDeregisterComplete(Handler handler, int i, Object obj) {
        this.mImsDeregistrationDoneRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsDialog(Handler handler, int i, Object obj) {
        this.mImsDialogRegistrant.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsDisableComplete(Handler handler, int i, Object obj) {
        this.mImsDisableDoneRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsDisableStart(Handler handler, int i, Object obj) {
        this.mImsDisableStartRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForImsEccSupport(Handler handler, int i, Object obj) {
        this.mImsEccSupportRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsEnableComplete(Handler handler, int i, Object obj) {
        this.mImsEnableDoneRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsEnableStart(Handler handler, int i, Object obj) {
        this.mImsEnableStartRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsEventPackage(Handler handler, int i, Object obj) {
        this.mImsEvtPkgRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsRTPInfo(Handler handler, int i, Object obj) {
        this.mRTPInfoRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsRedialEccInd(Handler handler, int i, Object obj) {
        this.mImsRedialEccIndRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForImsRegStatusInd(Handler handler, int i, Object obj) {
        this.mImsRegStatusIndRistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForImsRegistrationInfo(Handler handler, int i, Object obj) {
        this.mImsRegistrationInfoRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForLteMsgWaiting(Handler handler, int i, Object obj) {
        this.mLteMsgWaitingRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForMultiImsCount(Handler handler, int i, Object obj) {
        this.mMultiImsCountRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForNotAvailable(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        synchronized (this.mStateMonitor) {
            this.mNotAvailRegistrants.add(registrant);
            if (this.mState == 2) {
                registrant.notifyRegistrant(new AsyncResult((Object) null, (Object) null, (Throwable) null));
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForOff(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        synchronized (this.mStateMonitor) {
            this.mOffRegistrants.add(registrant);
            if (this.mState == 0) {
                registrant.notifyRegistrant(new AsyncResult((Object) null, (Object) null, (Throwable) null));
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForOn(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        synchronized (this.mStateMonitor) {
            this.mOnRegistrants.add(registrant);
            if (this.mState == 1) {
                registrant.notifyRegistrant(new AsyncResult((Object) null, (Object) null, (Throwable) null));
            }
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForOnEnterECBM(Handler handler, int i, Object obj) {
        this.mEnterECBMRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForOnExitECBM(Handler handler, int i, Object obj) {
        this.mExitECBMRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForOnNoECBM(Handler handler, int i, Object obj) {
        this.mNoECBMRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForRttAudioIndicator(Handler handler, int i, Object obj) {
        this.mRttAudioIndicatorRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForRttCapabilityIndicator(Handler handler, int i, Object obj) {
        this.mRttCapabilityIndicatorRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForRttModifyRequestReceive(Handler handler, int i, Object obj) {
        this.mRttModifyRequestReceiveRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForRttModifyResponse(Handler handler, int i, Object obj) {
        this.mRttModifyResponseRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForRttTextReceive(Handler handler, int i, Object obj) {
        this.mRttTextReceiveRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForSipHeaderInd(Handler handler, int i, Object obj) {
        this.mImsSipHeaderRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForSpeechCodecInfo(Handler handler, int i, Object obj) {
        this.mSpeechCodecInfoRegistrant.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForSsacStateInd(Handler handler, int i, Object obj) {
        this.mSsacIndRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForVideoCapabilityIndicator(Handler handler, int i, Object obj) {
        this.mVideoCapabilityIndicatorRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForVolteSettingChanged(Handler handler, int i, Object obj) {
        Registrant registrant = new Registrant(handler, i, obj);
        this.mVolteSettingRegistrants.add(registrant);
        if (this.mVolteSettingValue != null) {
            registrant.notifyRegistrant(new AsyncResult((Object) null, this.mVolteSettingValue, (Throwable) null));
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForVolteSubscription(Handler handler, int i, Object obj) {
        this.mVolteSubscriptionRegistrants.add(new Registrant(handler, i, obj));
    }

    public void registerForVopsStatusInd(Handler handler, int i, Object obj) {
        this.mVopsStatusIndRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void registerForXuiInfo(Handler handler, int i, Object obj) {
        this.mXuiRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setOnIncomingCallIndication(Handler handler, int i, Object obj) {
        this.mIncomingCallIndicationRegistrants.add(new Registrant(handler, i, obj));
    }

    public void setOnNewCdmaSms(Handler handler, int i, Object obj) {
        this.mCdmaSmsRegistrant = new Registrant(handler, i, obj);
    }

    public void setOnNewSms(Handler handler, int i, Object obj) {
        this.mNewSmsRegistrant = new Registrant(handler, i, obj);
    }

    public void setOnSmsStatus(Handler handler, int i, Object obj) {
        this.mSmsStatusRegistrant = new Registrant(handler, i, obj);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setOnSuppServiceNotification(Handler handler, int i, Object obj) {
        this.mSuppServiceNotificationRegistrants.add(new Registrant(handler, i, obj));
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void setOnUSSI(Handler handler, int i, Object obj) {
        this.mUSSIRegistrants.add(new Registrant(handler, i, obj));
    }

    protected void setRadioState(int i) {
        synchronized (this.mStateMonitor) {
            int i2 = this.mState;
            this.mState = i;
            if (i2 == i) {
                Rlog.d("ImsBaseCommands", "no state transition: " + this.mState);
                return;
            }
            this.mRadioStateChangedRegistrants.notifyRegistrants();
            if (this.mState != 2 && i2 == 2) {
                this.mAvailRegistrants.notifyRegistrants();
            }
            if (this.mState == 2 && i2 != 2) {
                this.mNotAvailRegistrants.notifyRegistrants();
            }
            if (this.mState == 1 && i2 != 1) {
                this.mOnRegistrants.notifyRegistrants();
            }
            if ((this.mState == 0 || this.mState == 2) && i2 == 1) {
                this.mOffOrNotAvailRegistrants.notifyRegistrants();
            }
            if (this.mState == 0) {
                this.mOffRegistrants.notifyRegistrants();
            }
        }
    }

    public void unSetOnNewCdmaSms(Handler handler) {
        Registrant registrant = this.mCdmaSmsRegistrant;
        if (registrant == null || registrant.getHandler() != handler) {
            return;
        }
        this.mCdmaSmsRegistrant.clear();
        this.mCdmaSmsRegistrant = null;
    }

    public void unSetOnNewSms(Handler handler) {
        Registrant registrant = this.mNewSmsRegistrant;
        if (registrant == null || registrant.getHandler() != handler) {
            return;
        }
        this.mNewSmsRegistrant.clear();
        this.mNewSmsRegistrant = null;
    }

    public void unSetOnSmsStatus(Handler handler) {
        Registrant registrant = this.mSmsStatusRegistrant;
        if (registrant == null || registrant.getHandler() != handler) {
            return;
        }
        this.mSmsStatusRegistrant.clear();
        this.mSmsStatusRegistrant = null;
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unSetOnSuppServiceNotification(Handler handler) {
        this.mSuppServiceNotificationRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unSetOnUSSI(Handler handler) {
        this.mUSSIRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForBearerInit(Handler handler) {
        this.mBearerInitRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForBearerState(Handler handler) {
        this.mBearerStateRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForCallAdditionalInfo(Handler handler) {
        this.mCallAdditionalInfoRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForCallInfo(Handler handler) {
        this.mCallInfoRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForCallModeChangeIndicator(Handler handler) {
        this.mCallModeChangeIndicatorRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForCallProgressIndicator(Handler handler) {
        this.mCallProgressIndicatorRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForCallRatIndication(Handler handler) {
        this.mCallRatIndicationRegistrants.remove(handler);
    }

    public void unregisterForDetailImsRegistrationInd(Handler handler) {
        this.mEiregIndRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForEconfResult(Handler handler) {
        this.mEconfResultRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForEctResult(Handler handler) {
        this.mEctResultRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForGetProvisionComplete(Handler handler) {
        this.mImsGetProvisionDoneRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsCfgConfigChanged(Handler handler) {
        this.mImsCfgConfigChangedRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsCfgConfigLoaded(Handler handler) {
        this.mImsCfgConfigLoadedRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsCfgDynamicImsSwitchComplete(Handler handler) {
        this.mImsCfgDynamicImsSwitchCompleteRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsCfgFeatureChanged(Handler handler) {
        this.mImsCfgFeatureChangedRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsConfInfoUpdate(Handler handler) {
        this.mImsConfInfoRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsDataInfoNotify(Handler handler) {
        this.mImsDataInfoNotifyRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsDeregisterComplete(Handler handler) {
        this.mImsDeregistrationDoneRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsDialog(Handler handler) {
        this.mImsDialogRegistrant.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsDisableComplete(Handler handler) {
        this.mImsDisableDoneRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsDisableStart(Handler handler) {
        this.mImsDisableStartRegistrants.remove(handler);
    }

    public void unregisterForImsEccSupport(Handler handler) {
        this.mImsEccSupportRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsEnableComplete(Handler handler) {
        this.mImsEnableDoneRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsEnableStart(Handler handler) {
        this.mImsEnableStartRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsEventPackage(Handler handler) {
        this.mImsEvtPkgRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsRTPInfo(Handler handler) {
        this.mRTPInfoRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsRedialEccInd(Handler handler) {
        this.mImsRedialEccIndRegistrants.remove(handler);
    }

    public void unregisterForImsRegStatusInd(Handler handler) {
        this.mImsRegStatusIndRistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForImsRegistrationInfo(Handler handler) {
        this.mImsRegistrationInfoRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForLteMsgWaiting(Handler handler) {
        this.mLteMsgWaitingRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForMultiImsCount(Handler handler) {
        this.mMultiImsCountRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForNotAvailable(Handler handler) {
        synchronized (this.mStateMonitor) {
            this.mNotAvailRegistrants.remove(handler);
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForOff(Handler handler) {
        synchronized (this.mStateMonitor) {
            this.mOffRegistrants.remove(handler);
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForOn(Handler handler) {
        synchronized (this.mStateMonitor) {
            this.mOnRegistrants.remove(handler);
        }
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForOnEnterECBM(Handler handler) {
        this.mEnterECBMRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForOnExitECBM(Handler handler) {
        this.mExitECBMRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForOnNoECBM(Handler handler) {
        this.mNoECBMRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForRttAudioIndicator(Handler handler) {
        this.mRttAudioIndicatorRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForRttCapabilityIndicator(Handler handler) {
        this.mRttCapabilityIndicatorRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForRttModifyRequestReceive(Handler handler) {
        this.mRttModifyRequestReceiveRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForRttModifyResponse(Handler handler) {
        this.mRttModifyResponseRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForRttTextReceive(Handler handler) {
        this.mRttTextReceiveRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForSipHeaderInd(Handler handler) {
        this.mImsSipHeaderRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForSpeechCodecInfo(Handler handler) {
        this.mSpeechCodecInfoRegistrant.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForSsacStateInd(Handler handler) {
        this.mSsacIndRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForVideoCapabilityIndicator(Handler handler) {
        this.mVideoCapabilityIndicatorRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForVolteSettingChanged(Handler handler) {
        this.mVolteSettingRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForVolteSubscription(Handler handler) {
        this.mVolteSubscriptionRegistrants.remove(handler);
    }

    public void unregisterForVopsStatusInd(Handler handler) {
        this.mVopsStatusIndRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unregisterForXuiInfo(Handler handler) {
        this.mXuiRegistrants.remove(handler);
    }

    @Override // com.mediatek.ims.ril.ImsCommandsInterface
    public void unsetOnIncomingCallIndication(Handler handler) {
        this.mIncomingCallIndicationRegistrants.remove(handler);
    }
}
