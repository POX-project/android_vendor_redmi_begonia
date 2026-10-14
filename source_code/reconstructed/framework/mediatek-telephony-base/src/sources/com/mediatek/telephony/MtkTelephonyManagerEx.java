package com.mediatek.telephony;

import android.annotation.SystemApi;
import android.app.ActivityThread;
import android.content.Context;
import android.net.NetworkStats;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.SystemProperties;
import android.telephony.CellInfo;
import android.telephony.CellLocation;
import android.telephony.MtkRadioAccessFamily;
import android.telephony.Rlog;
import android.telephony.ServiceState;
import android.telephony.SubscriptionManager;
import android.telephony.TelephonyManager;
import android.telephony.cdma.CdmaCellLocation;
import android.telephony.gsm.GsmCellLocation;
import android.util.Log;
import com.android.internal.telephony.IPhoneSubInfo;
import com.android.internal.telephony.ITelephony;
import com.android.internal.telephony.ITelephonyRegistry;
import com.mediatek.gwsd.GwsdListener;
import com.mediatek.gwsd.IGwsdService;
import com.mediatek.ims.internal.IVoDataService;
import com.mediatek.internal.telephony.FemtoCellInfo;
import com.mediatek.internal.telephony.IMtkPhoneSubInfoEx;
import com.mediatek.internal.telephony.IMtkTelephonyEx;
import com.mediatek.internal.telephony.MtkIccCardConstants;
import com.mediatek.internal.telephony.MtkTelephonyProperties;
import com.mediatek.internal.telephony.PseudoCellInfo;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes.dex */
public class MtkTelephonyManagerEx {
    public static final int APP_FAM_3GPP = 1;
    public static final int APP_FAM_3GPP2 = 2;
    public static final int APP_FAM_NONE = 0;
    public static final int CARD_TYPE_CSIM = 4;
    public static final int CARD_TYPE_NONE = 0;
    public static final int CARD_TYPE_RUIM = 8;
    public static final int CARD_TYPE_SIM = 1;
    public static final int CARD_TYPE_USIM = 2;
    public static final int FAIL_RETRY = -1;
    public static final int FAIL_RETRY_NO_NEED = -2;
    private static final String PRLVERSION = "vendor.cdma.prl.version";
    public static final String PROPERTY_SIM_CARD_ONOFF = "ro.vendor.mtk_sim_card_onoff";
    public static final String PROPERTY_SIM_ONOFF_SUPPORT = "vendor.ril.sim.onoff.support";
    private static final String PROPERTY_SIM_SLOT_LOCK_POLICY = "vendor.gsm.sim.slot.lock.policy";
    private static final String PROPERTY_SIM_SLOT_LOCK_STATE = "vendor.gsm.sim.slot.lock.state";
    private static final String PROPERTY_SML_MODE = "ro.vendor.sim_me_lock_mode";
    public static final int SET_SIM_POWER_ERROR_ALREADY_SIM_OFF = 14;
    public static final int SET_SIM_POWER_ERROR_ALREADY_SIM_ON = 15;
    public static final int SET_SIM_POWER_ERROR_EXECUTING_SIM_OFF = 12;
    public static final int SET_SIM_POWER_ERROR_EXECUTING_SIM_ON = 13;
    public static final int SET_SIM_POWER_ERROR_NOT_ALLOWED = 54;
    public static final int SET_SIM_POWER_ERROR_NOT_SUPPORT = -1;
    public static final int SET_SIM_POWER_ERROR_SIM_ABSENT = 11;
    public static final int SET_SIM_POWER_SUCCESS = 0;
    public static final int SIM_POWER_STATE_EXECUTING_SIM_OFF = 10;
    public static final int SIM_POWER_STATE_EXECUTING_SIM_ON = 11;
    public static final int SIM_POWER_STATE_SIM_OFF = 10;
    public static final int SIM_POWER_STATE_SIM_ON = 11;
    public static final int SIM_SWITCH_MODE_AOSP_SIM_ONOFF = 3;
    public static final int SIM_SWITCH_MODE_MTK_SIM_ONOFF = 2;
    public static final int SIM_SWITCH_MODE_RADIO_ONOFF = 1;
    private static final String TAG = "MtkTelephonyManagerEx";
    private Context mContext;
    private boolean mIsSmlLockMode;
    private ITelephonyRegistry mRegistry;
    private static final String[] PROPERTY_RIL_FULL_UICC_TYPE = {"vendor.gsm.ril.fulluicctype", "vendor.gsm.ril.fulluicctype.2", "vendor.gsm.ril.fulluicctype.3", "vendor.gsm.ril.fulluicctype.4"};
    private static final String[] PROPERTY_RIL_CT3G = {"vendor.gsm.ril.ct3g", "vendor.gsm.ril.ct3g.2", "vendor.gsm.ril.ct3g.3", "vendor.gsm.ril.ct3g.4"};
    private static final String[] PROPERTY_RIL_CDMA_CARD_TYPE = {"vendor.ril.cdma.card.type.1", "vendor.ril.cdma.card.type.2", "vendor.ril.cdma.card.type.3", "vendor.ril.cdma.card.type.4"};
    private static final String[] PROPERTY_SIM_SLOT_LOCK_SERVICE_CAPABILITY = {"vendor.gsm.sim.slot.lock.service.capability", "vendor.gsm.sim.slot.lock.service.capability.2", "vendor.gsm.sim.slot.lock.service.capability.3", "vendor.gsm.sim.slot.lock.service.capability.4"};
    private static final String[] PROPERTY_SIM_SLOT_LOCK_CARD_VALID = {"vendor.gsm.sim.slot.lock.card.valid", "vendor.gsm.sim.slot.lock.card.valid.2", "vendor.gsm.sim.slot.lock.card.valid.3", "vendor.gsm.sim.slot.lock.card.valid.4"};
    public static final String[] PROPERTY_SIM_ONOFF_STATE = {"vendor.ril.sim.onoff.state1", "vendor.ril.sim.onoff.state2", "vendor.ril.sim.onoff.state3", "vendor.ril.sim.onoff.state4"};
    private static MtkTelephonyManagerEx sInstance = new MtkTelephonyManagerEx();

    /* JADX INFO: renamed from: com.mediatek.telephony.MtkTelephonyManagerEx$2, reason: invalid class name */
    class AnonymousClass2 extends IOemHookCallback.Stub {
        final /* synthetic */ OemHookCallback val$cb;
        final /* synthetic */ Executor val$executor;

        AnonymousClass2(Executor executor, OemHookCallback oemHookCallback) {
            this.val$executor = executor;
            this.val$cb = oemHookCallback;
        }

        @Override // com.mediatek.telephony.IOemHookCallback
        public void onAtCmdResp(int i, long j, String str) {
        }

        @Override // com.mediatek.telephony.IOemHookCallback
        public void onAtUrcInd(final int i, final String str) {
            Executor executor = this.val$executor;
            final OemHookCallback oemHookCallback = this.val$cb;
            executor.execute(new Runnable() { // from class: com.mediatek.telephony.-$$Lambda$MtkTelephonyManagerEx$2$noxEqqN26hX1Uxc3hW55IuY7dxY
                @Override // java.lang.Runnable
                public final void run() {
                    oemHookCallback.onAtUrcInd(i, str);
                }
            });
        }

        @Override // com.mediatek.telephony.IOemHookCallback
        public void onError(final String str) {
            Executor executor = this.val$executor;
            final OemHookCallback oemHookCallback = this.val$cb;
            executor.execute(new Runnable() { // from class: com.mediatek.telephony.-$$Lambda$MtkTelephonyManagerEx$2$o2hOLQ4zoTD374HYTu997ZIDxL0
                @Override // java.lang.Runnable
                public final void run() {
                    oemHookCallback.onError(str);
                }
            });
        }
    }

    /* JADX INFO: renamed from: com.mediatek.telephony.MtkTelephonyManagerEx$4, reason: invalid class name */
    class AnonymousClass4 extends IOemHookCallback.Stub {
        final /* synthetic */ OemHookCallback val$cb;
        final /* synthetic */ Executor val$executor;

        AnonymousClass4(Executor executor, OemHookCallback oemHookCallback) {
            this.val$executor = executor;
            this.val$cb = oemHookCallback;
        }

        @Override // com.mediatek.telephony.IOemHookCallback
        public void onAtCmdResp(final int i, final long j, final String str) {
            Executor executor = this.val$executor;
            final OemHookCallback oemHookCallback = this.val$cb;
            executor.execute(new Runnable() { // from class: com.mediatek.telephony.-$$Lambda$MtkTelephonyManagerEx$4$fpowtFZ9fNAttZraZLUm_OXnew0
                @Override // java.lang.Runnable
                public final void run() {
                    oemHookCallback.onAtCmdResp(i, j, str);
                }
            });
        }

        @Override // com.mediatek.telephony.IOemHookCallback
        public void onAtUrcInd(int i, String str) {
        }

        @Override // com.mediatek.telephony.IOemHookCallback
        public void onError(final String str) {
            Executor executor = this.val$executor;
            final OemHookCallback oemHookCallback = this.val$cb;
            executor.execute(new Runnable() { // from class: com.mediatek.telephony.-$$Lambda$MtkTelephonyManagerEx$4$a--RJLE-R9WS1fv3Niw7B0e5eqc
                @Override // java.lang.Runnable
                public final void run() {
                    oemHookCallback.onError(str);
                }
            });
        }
    }

    public static class OemHookCallback {
        public void onAtCmdResp(int i, long j, String str) {
            Rlog.d(MtkTelephonyManagerEx.TAG, "OemHookCallback Not override onAtCmdResp");
        }

        public void onAtUrcInd(int i, String str) {
            Rlog.d(MtkTelephonyManagerEx.TAG, "OemHookCallback Not override onAtUrcInd");
        }

        public void onError(String str) {
            Rlog.d(MtkTelephonyManagerEx.TAG, "OemHookCallback onError:" + str);
        }
    }

    private MtkTelephonyManagerEx() {
        this.mContext = null;
        this.mIsSmlLockMode = SystemProperties.get(PROPERTY_SML_MODE, "").equals("3");
        this.mRegistry = ITelephonyRegistry.Stub.asInterface(ServiceManager.getService("telephony.registry"));
    }

    public MtkTelephonyManagerEx(Context context) {
        this.mContext = null;
        this.mIsSmlLockMode = SystemProperties.get(PROPERTY_SML_MODE, "").equals("3");
        this.mContext = context;
        this.mRegistry = ITelephonyRegistry.Stub.asInterface(ServiceManager.getService("telephony.registry"));
    }

    public static MtkTelephonyManagerEx getDefault() {
        return sInstance;
    }

    private IMtkTelephonyEx getIMtkTelephonyEx() {
        return IMtkTelephonyEx.Stub.asInterface(ServiceManager.getService("phoneEx"));
    }

    private ITelephony getITelephony() {
        return ITelephony.Stub.asInterface(ServiceManager.getService("phone"));
    }

    private IMtkPhoneSubInfoEx getMtkSubscriberInfoEx() {
        return IMtkPhoneSubInfoEx.Stub.asInterface(ServiceManager.getService("iphonesubinfoEx"));
    }

    private String getOpPackageName() {
        Context context = this.mContext;
        return context != null ? context.getOpPackageName() : ActivityThread.currentOpPackageName();
    }

    private int getSubIdBySlot(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        StringBuilder sb = new StringBuilder();
        sb.append("getSubIdBySlot, simId ");
        sb.append(i);
        sb.append("subId ");
        sb.append(subId != null ? Integer.valueOf(subId[0]) : "invalid!");
        Rlog.d(TAG, sb.toString());
        return subId != null ? subId[0] : SubscriptionManager.getDefaultSubscriptionId();
    }

    private IPhoneSubInfo getSubscriberInfo() {
        return IPhoneSubInfo.Stub.asInterface(ServiceManager.getService("iphonesubinfo"));
    }

    public boolean abortFemtoCellList(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.abortFemtoCellList(i);
            }
            Rlog.e(TAG, "abortFemtoCellList error because telephony is null");
            return false;
        } catch (RemoteException e) {
            Rlog.e(TAG, "abortFemtoCellList error due to RemoteException " + e);
            return false;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "abortFemtoCellList error due to NullPointerException " + e2);
            return false;
        }
    }

    public void addGwsdListener(int i, GwsdListener gwsdListener) {
        try {
            IGwsdService iGwsdServiceAsInterface = IGwsdService.Stub.asInterface(ServiceManager.getService("gwsd"));
            if (iGwsdServiceAsInterface != null) {
                iGwsdServiceAsInterface.addListener(i, gwsdListener.callback);
            }
        } catch (Exception e) {
            Rlog.e(TAG, Log.getStackTraceString(e));
        }
    }

    public void addGwsdListener(GwsdListener gwsdListener) {
        addGwsdListener(SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultDataSubscriptionId()), gwsdListener);
    }

    public boolean cancelAvailableNetworks(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.cancelAvailableNetworks(i);
            }
            Rlog.e(TAG, " cancelAvailableNetworks error because telephony is null");
            return false;
        } catch (RemoteException e) {
            Rlog.e(TAG, " cancelAvailableNetworks error due to RemoteException " + e);
            return false;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, " cancelAvailableNetworks error due to NullPointerException " + e2);
            return false;
        }
    }

    public int checkValidCard(int i) {
        if (!this.mIsSmlLockMode) {
            return 0;
        }
        if (i >= 0) {
            String[] strArr = PROPERTY_SIM_SLOT_LOCK_CARD_VALID;
            if (i < strArr.length) {
                int i2 = SystemProperties.getInt(strArr[i], -1);
                Rlog.d(TAG, "checkValidCard: " + i2 + ",slotId: " + i);
                return i2;
            }
        }
        Rlog.e(TAG, "checkValidCard: invalid slotId " + i);
        return 2;
    }

    public boolean exitEmergencyCallbackMode(int i) {
        try {
            return getIMtkTelephonyEx().exitEmergencyCallbackMode(i);
        } catch (RemoteException e) {
            return false;
        } catch (NullPointerException e2) {
            return false;
        }
    }

    public List<CellInfo> getAllCellInfo(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx == null) {
                return null;
            }
            return iMtkTelephonyEx.getAllCellInfo(i, getOpPackageName());
        } catch (RemoteException e) {
            return null;
        }
    }

    public PseudoCellInfo getApcInfo(int i) {
        if (i < 0 || i >= TelephonyManager.getDefault().getSimCount()) {
            Rlog.e(TAG, "getApcInfo with invalid slotId " + i);
            return null;
        }
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.getApcInfoUsingSlotId(i);
            }
            Rlog.e(TAG, "getApcInfo return null because telephony is null");
            return null;
        } catch (RemoteException e) {
            Rlog.e(TAG, "getApcInfo returning null due to RemoteException " + e);
            return null;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "getApcInfo returning null due to NullPointerException " + e2);
            return null;
        }
    }

    public boolean getCallSubAddressEnabled() {
        return getCallSubAddressEnabled(SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultSubscriptionId()));
    }

    public boolean getCallSubAddressEnabled(int i) {
        try {
            return getIMtkTelephonyEx().getCallSubAddressEnabled(i);
        } catch (RemoteException e) {
            Log.e(TAG, "getCallSubAddressEnabled IMtkTelephonyEx re: " + e.getMessage());
            return false;
        } catch (NullPointerException e2) {
            Log.e(TAG, "getCallSubAddressEnabled IMtkTelephonyEx npe: " + e2.getMessage());
            return false;
        }
    }

    public MtkIccCardConstants.CardType getCdmaCardType(int i) {
        if (i < 0 || i >= PROPERTY_RIL_CT3G.length) {
            Rlog.e(TAG, "getCdmaCardType: invalid slotId " + i);
            return null;
        }
        MtkIccCardConstants.CardType cardTypeFromInt = MtkIccCardConstants.CardType.UNKNOW_CARD;
        String str = SystemProperties.get(PROPERTY_RIL_CDMA_CARD_TYPE[i], "");
        if (!str.equals("")) {
            cardTypeFromInt = MtkIccCardConstants.CardType.getCardTypeFromInt(Integer.parseInt(str));
        }
        Rlog.d(TAG, "getCdmaCardType slotId: " + i + " result: " + str + "  mCdmaCardType: " + cardTypeFromInt);
        return cardTypeFromInt;
    }

    public int getCdmaSubscriptionActStatus(int i) {
        try {
            return getIMtkTelephonyEx().getCdmaSubscriptionActStatus(i);
        } catch (RemoteException e) {
            Rlog.d(TAG, "fail to getCdmaSubscriptionActStatus due to RemoteException");
            return 0;
        } catch (NullPointerException e2) {
            Rlog.d(TAG, "fail to getCdmaSubscriptionActStatus due to NullPointerException");
            return 0;
        }
    }

    public CellLocation getCellLocation(int i) {
        CellLocation gsmCellLocation;
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx == null) {
                Rlog.d(TAG, "getCellLocation returning null because telephony is null");
                return null;
            }
            Bundle cellLocationUsingSlotId = iMtkTelephonyEx.getCellLocationUsingSlotId(i);
            if (cellLocationUsingSlotId == null) {
                Rlog.d(TAG, "getCellLocation returning null because bundle is null");
                return null;
            }
            if (cellLocationUsingSlotId.isEmpty()) {
                Rlog.d(TAG, "getCellLocation returning null because bundle is empty");
                return null;
            }
            int phoneType = getPhoneType(i);
            if (phoneType != 1) {
                gsmCellLocation = phoneType != 2 ? null : new CdmaCellLocation(cellLocationUsingSlotId);
            } else {
                gsmCellLocation = new GsmCellLocation(cellLocationUsingSlotId);
            }
            Rlog.d(TAG, "getCellLocation is" + gsmCellLocation);
            if (gsmCellLocation == null) {
                Rlog.d(TAG, "getCellLocation returning null because cl is null");
                return null;
            }
            if (!gsmCellLocation.isEmpty()) {
                return gsmCellLocation;
            }
            Rlog.d(TAG, "getCellLocation returning null because CellLocation is empty");
            return null;
        } catch (RemoteException e) {
            Rlog.d(TAG, "getCellLocation returning null due to RemoteException " + e);
            return null;
        } catch (NullPointerException e2) {
            Rlog.d(TAG, "getCellLocation returning null due to NullPointerException " + e2);
            return null;
        }
    }

    public int getDebuggingDsdaStatus() {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.getDebuggingDsdaStatus();
            }
            Rlog.e(TAG, "getDebuggingDsdaStatus : telephony is null");
            return 0;
        } catch (RemoteException e) {
            Rlog.e(TAG, "getDebuggingDsdaStatus : RemoteException " + e);
            return 0;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "getDebuggingDsdaStatus : NullPointerException " + e2);
            return 0;
        }
    }

    public int getDisable2G(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.getDisable2G(i);
            }
            Rlog.e(TAG, "getDisable2G error because telephony is null");
            return -1;
        } catch (RemoteException e) {
            Rlog.e(TAG, "getDisable2G error due to RemoteException " + e);
            return -1;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "getDisable2G error due to NullPointerException " + e2);
            return -1;
        }
    }

    public List<FemtoCellInfo> getFemtoCellList(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.getFemtoCellList(i);
            }
            Rlog.e(TAG, "getFemtoCellList error because telephony is null");
            return null;
        } catch (RemoteException e) {
            Rlog.e(TAG, "getFemtoCellList error due to RemoteException " + e);
            return null;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "getFemtoCellList error due to NullPointerException " + e2);
            return null;
        }
    }

    public int getIccAppFamily(int i) {
        try {
            return getIMtkTelephonyEx().getIccAppFamily(i);
        } catch (RemoteException e) {
            return 0;
        } catch (NullPointerException e2) {
            return 0;
        }
    }

    public String getIccCardType(int i) throws RemoteException {
        String iccCardType = null;
        try {
            iccCardType = getIMtkTelephonyEx().getIccCardType(i);
        } catch (RemoteException e) {
            e.printStackTrace();
        } catch (NullPointerException e2) {
            e2.printStackTrace();
        }
        StringBuilder sb = new StringBuilder();
        sb.append("getIccCardType sub ");
        sb.append(i);
        sb.append(" ,icc type ");
        sb.append(iccCardType != null ? iccCardType : "null");
        Rlog.d(TAG, sb.toString());
        return iccCardType;
    }

    public String getIsimDomain(int i) {
        try {
            return getMtkSubscriberInfoEx().getIsimDomainForSubscriber(i);
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public String getIsimGbabp() {
        return getIsimGbabp(SubscriptionManager.getDefaultSubscriptionId());
    }

    public String getIsimGbabp(int i) {
        try {
            return getMtkSubscriberInfoEx().getIsimGbabpForSubscriber(i);
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public String getIsimImpi(int i) {
        try {
            return getMtkSubscriberInfoEx().getIsimImpiForSubscriber(i);
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public String[] getIsimImpu(int i) {
        try {
            return getMtkSubscriberInfoEx().getIsimImpuForSubscriber(i);
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public String getIsimIst(int i) {
        try {
            return getMtkSubscriberInfoEx().getIsimIstForSubscriber(i);
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public String[] getIsimPcscf(int i) {
        try {
            return getMtkSubscriberInfoEx().getIsimPcscfForSubscriber(i);
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public String getLine1PhoneNumber(int i) {
        String line1NumberForDisplay = null;
        try {
            ITelephony iTelephony = getITelephony();
            if (iTelephony != null) {
                line1NumberForDisplay = iTelephony.getLine1NumberForDisplay(i, this.mContext.getOpPackageName(), this.mContext.getFeatureId());
            }
        } catch (RemoteException e) {
        } catch (NullPointerException e2) {
        }
        if (line1NumberForDisplay != null) {
            return line1NumberForDisplay;
        }
        try {
            IMtkPhoneSubInfoEx mtkSubscriberInfoEx = getMtkSubscriberInfoEx();
            if (mtkSubscriberInfoEx == null) {
                return null;
            }
            return mtkSubscriberInfoEx.getLine1PhoneNumberForSubscriber(i, getOpPackageName(), this.mContext.getFeatureId());
        } catch (RemoteException e3) {
            return null;
        } catch (NullPointerException e4) {
            return null;
        }
    }

    public String getLocatedPlmn(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.getLocatedPlmn(i);
            }
            return null;
        } catch (RemoteException e) {
            Rlog.e(TAG, "fail to getLocatedPlmn due to RemoteException");
            return null;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "fail to getLocatedPlmn due to NullPointerException");
            return null;
        }
    }

    public NetworkStats getMobileDataUsage(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.getMobileDataUsage(i);
            }
            Rlog.e(TAG, "getMobileDataUsage : telephony is null");
            return null;
        } catch (RemoteException e) {
            Rlog.e(TAG, "getMobileDataUsage : RemoteException " + e);
            return null;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "getMobileDataUsage : NullPointerException " + e2);
            return null;
        }
    }

    public String getNrMapStatus(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx == null) {
                Log.e(TAG, "getNrMapStatus IMtkTelephonyEx is null");
                return "n/a";
            }
            Log.d(TAG, "getNrMapStatus id=" + i);
            return iMtkTelephonyEx.getNrMapStatus(i);
        } catch (RemoteException e) {
            Log.e(TAG, "getNrMapStatus RemoteException", e);
            return "n/a";
        }
    }

    public int getPhoneType(int i) {
        int[] subId = SubscriptionManager.getSubId(i);
        if (subId == null) {
            return TelephonyManager.getDefault().getCurrentPhoneType(-1);
        }
        Rlog.e(TAG, "Deprecated! getPhoneType with simId " + i + ", subId " + subId[0]);
        return TelephonyManager.getDefault().getCurrentPhoneType(subId[0]);
    }

    public String getPrlVersion(int i) {
        int slotIndex = SubscriptionManager.getSlotIndex(i);
        String str = SystemProperties.get(PRLVERSION + slotIndex, "");
        Rlog.d(TAG, "getPrlversion PRLVERSION subId = " + i + " key = " + PRLVERSION + slotIndex + " value = " + str);
        return str;
    }

    public int getProtocolStackId(int i) throws RemoteException {
        int mainCapabilityPhoneId = 0;
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                mainCapabilityPhoneId = iMtkTelephonyEx.getMainCapabilityPhoneId();
            }
        } catch (RemoteException e) {
            Rlog.e(TAG, "fail to getMainCapabilityPhoneId due to RemoteException");
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "fail to getMainCapabilityPhoneId due to NullPointerException");
        }
        if (i == mainCapabilityPhoneId) {
            return 1;
        }
        if (isDssNoResetSupport()) {
            if (i < mainCapabilityPhoneId) {
                return i + 2;
            }
        } else if (i == 0) {
            return mainCapabilityPhoneId + 1;
        }
        return i + 1;
    }

    public int[] getRoamingEnable(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.getRoamingEnable(i);
            }
            Rlog.e(TAG, "getRoamingEnable error because telephony is null");
            return null;
        } catch (RemoteException e) {
            Rlog.e(TAG, "getRoamingEnable error due to RemoteException " + e);
            return null;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "getRoamingEnable error due to NullPointerException " + e2);
            return null;
        }
    }

    public int[] getRxTestResult() {
        try {
            return getIMtkTelephonyEx().getRxTestResult(SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultSubscriptionId()));
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public ServiceState getServiceStateByPhoneId(int i) {
        try {
            return getIMtkTelephonyEx().getServiceStateByPhoneId(i, getOpPackageName(), this.mContext == null ? null : this.mContext.getAttributionTag());
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public int getShouldServiceCapability(int i) {
        if (!this.mIsSmlLockMode) {
            return 0;
        }
        if (i >= 0) {
            String[] strArr = PROPERTY_SIM_SLOT_LOCK_SERVICE_CAPABILITY;
            if (i < strArr.length) {
                int i2 = SystemProperties.getInt(strArr[i], -1);
                Rlog.d(TAG, "getShouldServiceCapability: " + i2 + ",slotId: " + i);
                return i2;
            }
        }
        Rlog.e(TAG, "getShouldServiceCapability: invalid slotId: " + i);
        return 4;
    }

    public int getSimApplicationState(int i) {
        int simStateForSlotIndex = TelephonyManager.getSimStateForSlotIndex(i);
        if (simStateForSlotIndex == 0 || simStateForSlotIndex == 1) {
            return 0;
        }
        if (simStateForSlotIndex == 5) {
            return 6;
        }
        if (simStateForSlotIndex == 8 || simStateForSlotIndex == 9) {
            return 0;
        }
        return simStateForSlotIndex;
    }

    public int getSimCardState(int i) {
        int simStateForSlotIndex = TelephonyManager.getSimStateForSlotIndex(i);
        if (simStateForSlotIndex == 0 || simStateForSlotIndex == 1 || simStateForSlotIndex == 8 || simStateForSlotIndex == 9) {
            return simStateForSlotIndex;
        }
        return 11;
    }

    public int getSimLockPolicy() {
        if (!this.mIsSmlLockMode) {
            return 0;
        }
        int i = SystemProperties.getInt(PROPERTY_SIM_SLOT_LOCK_POLICY, -1);
        Rlog.d(TAG, "getSimLockPolicy: " + i);
        return i;
    }

    public int getSimLockState() {
        if (!this.mIsSmlLockMode) {
            return 1;
        }
        int i = SystemProperties.getInt(PROPERTY_SIM_SLOT_LOCK_STATE, -1);
        Rlog.d(TAG, "getSimLockState: " + i);
        return i;
    }

    public int getSimLockStateForRSU(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx == null) {
                return -1;
            }
            return iMtkTelephonyEx.getSimLockStateForRSU(i);
        } catch (RemoteException e) {
            return -2;
        } catch (NullPointerException e2) {
            return -2;
        }
    }

    public int getSimOnOffExecutingState(int i) {
        if (i < 0 || i >= TelephonyManager.getDefault().getSimCount()) {
            Rlog.e(TAG, "getSimOnOffExecutingState error with invalid slotId " + i);
            return -1;
        }
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.getSimOnOffExecutingState(i);
            }
            return -1;
        } catch (RemoteException e) {
            Rlog.e(TAG, "Error calling ITelephony#getSimOnOffExecutingState", e);
            return -1;
        } catch (SecurityException e2) {
            Rlog.e(TAG, "Permission error calling ITelephony#getSimOnOffExecutingState", e2);
            return -1;
        }
    }

    public int getSimOnOffState(int i) throws RemoteException {
        int simOnOffState = -1;
        if (i < 0 || i >= TelephonyManager.getDefault().getSimCount()) {
            Rlog.e(TAG, "getSimOnOffState error with invalid slotId " + i);
            return -1;
        }
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                simOnOffState = iMtkTelephonyEx.getSimOnOffState(i);
            }
        } catch (RemoteException e) {
            Rlog.e(TAG, "Error calling ITelephony#getSimOnOffState", e);
        } catch (SecurityException e2) {
            Rlog.e(TAG, "Permission error calling ITelephony#getSimOnOffState", e2);
        }
        Rlog.d(TAG, "getSimOnOffState slotId = " + i + " result = " + simOnOffState);
        return simOnOffState;
    }

    public String[] getSimOperatorNumericForPhoneEx(int i) throws RemoteException {
        String str;
        if (i < 0 || i >= TelephonyManager.getDefault().getSimCount()) {
            Rlog.e(TAG, "getSimOperatorNumericForPhoneEx with invalid phoneId:" + i);
            return null;
        }
        String[] simOperatorNumericForPhoneEx = null;
        try {
            simOperatorNumericForPhoneEx = getIMtkTelephonyEx().getSimOperatorNumericForPhoneEx(i);
        } catch (RemoteException e) {
            e.printStackTrace();
        } catch (NullPointerException e2) {
            e2.printStackTrace();
        }
        StringBuilder sb = new StringBuilder();
        sb.append("getSimOperatorNumericForPhoneEx phoneId ");
        sb.append(i);
        sb.append(" values = ");
        if (simOperatorNumericForPhoneEx != null) {
            str = simOperatorNumericForPhoneEx[0] + ", " + simOperatorNumericForPhoneEx[1];
        } else {
            str = "null";
        }
        sb.append(str);
        Rlog.d(TAG, sb.toString());
        return simOperatorNumericForPhoneEx;
    }

    public String getSimSerialNumber(int i) throws RemoteException {
        if (i < 0 || i >= TelephonyManager.getDefault().getSimCount()) {
            Rlog.e(TAG, "getSimSerialNumber with invalid simId " + i);
            return null;
        }
        String simSerialNumber = null;
        try {
            simSerialNumber = getIMtkTelephonyEx().getSimSerialNumber(getOpPackageName(), i);
        } catch (RemoteException e) {
            e.printStackTrace();
        } catch (NullPointerException e2) {
            e2.printStackTrace();
        }
        if (simSerialNumber == null) {
            return simSerialNumber;
        }
        if (simSerialNumber.equals("N/A") || simSerialNumber.equals("")) {
            return null;
        }
        return simSerialNumber;
    }

    public String[] getSuggestedPlmnList(int i, int i2, int i3, int i4) throws RemoteException {
        if (i < 0 || i >= TelephonyManager.getDefault().getSimCount()) {
            Rlog.e(TAG, "getSuggestedPlmnList with invalid phoneId:" + i);
            return null;
        }
        if (i2 != 0 && i2 != 1 && i2 != 3) {
            Rlog.e(TAG, "getSuggestedPlmnList with invalid rat:" + i2);
            return null;
        }
        if (i3 <= 0) {
            Rlog.e(TAG, "getSuggestedPlmnList with invalid num:" + i3);
            return null;
        }
        if (i4 <= 0) {
            Rlog.e(TAG, "getSuggestedPlmnList with invalid timer:" + i4);
            return null;
        }
        String[] suggestedPlmnList = null;
        try {
            suggestedPlmnList = getIMtkTelephonyEx().getSuggestedPlmnList(i, i2, i3, i4, getOpPackageName());
        } catch (RemoteException e) {
            e.printStackTrace();
        } catch (NullPointerException e2) {
            e2.printStackTrace();
        }
        StringBuilder sb = new StringBuilder();
        sb.append("getSuggestedPlmnList phoneId ");
        sb.append(i);
        sb.append(" values = ");
        sb.append(suggestedPlmnList != null ? Arrays.toString(suggestedPlmnList) : "null");
        Rlog.d(TAG, sb.toString());
        return suggestedPlmnList;
    }

    public String[] getSupportCardType(int i) {
        String[] strArrSplit = null;
        if (i >= 0) {
            String[] strArr = PROPERTY_RIL_FULL_UICC_TYPE;
            if (i < strArr.length) {
                String str = SystemProperties.get(strArr[i], "");
                if (!str.equals("") && str.length() > 0) {
                    strArrSplit = str.split(",");
                }
                StringBuilder sb = new StringBuilder();
                sb.append("getSupportCardType slotId ");
                sb.append(i);
                sb.append(", prop value= ");
                sb.append(str);
                sb.append(", size= ");
                sb.append(strArrSplit != null ? strArrSplit.length : 0);
                Rlog.d(TAG, sb.toString());
                return strArrSplit;
            }
        }
        Rlog.e(TAG, "getSupportCardType: invalid slotId " + i);
        return null;
    }

    public String getUimSubscriberId(int i) {
        try {
            return getIMtkTelephonyEx().getUimSubscriberId(getOpPackageName(), i);
        } catch (RemoteException e) {
            e.printStackTrace();
            return "";
        } catch (NullPointerException e2) {
            e2.printStackTrace();
            return "";
        }
    }

    public String getUsimGbabp() {
        return getUsimGbabp(SubscriptionManager.getDefaultSubscriptionId());
    }

    public String getUsimGbabp(int i) {
        try {
            return getMtkSubscriberInfoEx().getUsimGbabpForSubscriber(i);
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public boolean getUsimService(int i) {
        return getUsimService(SubscriptionManager.getDefaultSubscriptionId(), i);
    }

    public boolean getUsimService(int i, int i2) {
        try {
            return getMtkSubscriberInfoEx().getUsimServiceForSubscriber(i, i2, getOpPackageName());
        } catch (RemoteException e) {
            return false;
        } catch (NullPointerException e2) {
            return false;
        }
    }

    public void getVoDataEnabled(int i) {
        try {
            IVoDataService iVoDataServiceAsInterface = IVoDataService.Stub.asInterface(ServiceManager.getService("vodata"));
            if (iVoDataServiceAsInterface != null) {
                iVoDataServiceAsInterface.getEnabled(i);
            }
        } catch (Exception e) {
            Rlog.e(TAG, Log.getStackTraceString(e));
        }
    }

    public int invokeOemRilRequestRaw(byte[] bArr, byte[] bArr2) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.invokeOemRilRequestRaw(bArr, bArr2);
            }
            return -1;
        } catch (RemoteException e) {
            return -1;
        } catch (NullPointerException e2) {
            return -1;
        }
    }

    public int invokeOemRilRequestRawBySlot(int i, byte[] bArr, byte[] bArr2) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.invokeOemRilRequestRawBySlot(i, bArr, bArr2);
            }
            return -1;
        } catch (RemoteException e) {
            return -1;
        } catch (NullPointerException e2) {
            return -1;
        }
    }

    public boolean isCt3gDualMode(int i) {
        if (i >= 0) {
            String[] strArr = PROPERTY_RIL_CT3G;
            if (i < strArr.length) {
                String str = SystemProperties.get(strArr[i], "");
                Rlog.d(TAG, "isCt3gDualMode:  " + str);
                return "1".equals(str);
            }
        }
        Rlog.e(TAG, "isCt3gDualMode: invalid slotId " + i);
        return false;
    }

    public boolean isDataAvailableForGwsdDualSim(boolean z) {
        Rlog.d(TAG, "isDataAvailableForGwsdDualSim");
        try {
            IGwsdService iGwsdServiceAsInterface = IGwsdService.Stub.asInterface(ServiceManager.getService("gwsd"));
            if (iGwsdServiceAsInterface != null) {
                return iGwsdServiceAsInterface.isDataAvailableForGwsdDualSim(z);
            }
            return false;
        } catch (Exception e) {
            Rlog.e(TAG, Log.getStackTraceString(e));
            return false;
        }
    }

    public boolean isDigitsSupported() {
        return SystemProperties.getInt("persist.vendor.mtk_digits_support", 0) == 1;
    }

    public boolean isDssNoResetSupport() {
        if (SystemProperties.get("vendor.ril.simswitch.no_reset_support").equals("1")) {
            Rlog.d(TAG, "return true for isDssNoResetSupport");
            return true;
        }
        Rlog.d(TAG, "return false for isDssNoResetSupport");
        return false;
    }

    public boolean isEmergencyNumber(int i, String str) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.isEmergencyNumber(i, str);
            }
            Log.e(TAG, "isEmergencyNumber IMtkTelephonyEx is null");
            return false;
        } catch (RemoteException e) {
            Log.e(TAG, "isEmergencyNumber RemoteException", e);
            return false;
        }
    }

    public boolean isGsm(int i) {
        return i == 1 || i == 2 || i == 3 || i == 8 || i == 9 || i == 10 || i == 13 || i == 15 || i == 16 || i == 17 || i == 19;
    }

    public boolean isImsRegistered(int i) {
        try {
            return getIMtkTelephonyEx().isImsRegistered(i);
        } catch (RemoteException e) {
            return false;
        } catch (NullPointerException e2) {
            return false;
        }
    }

    public boolean isInCsCall(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.isInCsCall(i);
            }
            Rlog.e(TAG, "[isInCsCall] telephony = null");
            return false;
        } catch (RemoteException e) {
            Rlog.e(TAG, "[isInCsCall] RemoteException " + e);
            return false;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "[isInCsCall] NullPointerException " + e2);
            return false;
        }
    }

    public boolean isInDsdaMode() {
        if (!SystemProperties.get("ro.vendor.mtk_switch_antenna", MtkTelephonyProperties.CFU_QUERY_TYPE_DEF_VALUE).equals("1") && SystemProperties.getInt("ro.vendor.mtk_c2k_lte_mode", 0) == 1) {
            TelephonyManager telephonyManager = TelephonyManager.getDefault();
            int simCount = telephonyManager.getSimCount();
            for (int i = 0; i < simCount; i++) {
                int[] subId = SubscriptionManager.getSubId(i);
                if (subId == null) {
                    Rlog.d(TAG, "isInDsdaMode, allSubId is null for slot" + i);
                } else {
                    int currentPhoneType = telephonyManager.getCurrentPhoneType(subId[0]);
                    Rlog.d(TAG, "isInDsdaMode, allSubId[0]:" + subId[0] + ", phoneType:" + currentPhoneType);
                    if (currentPhoneType == 2) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    public boolean isInHomeNetwork(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx == null) {
                return false;
            }
            return iMtkTelephonyEx.isInHomeNetwork(i);
        } catch (RemoteException e) {
            return false;
        } catch (NullPointerException e2) {
            return false;
        }
    }

    public boolean isNrMapEnabled(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx == null) {
                Log.e(TAG, "isNrMapEnabled IMtkTelephonyEx is null");
                return false;
            }
            Log.d(TAG, "isNrMapEnabled id=" + i);
            return iMtkTelephonyEx.isNrMapEnabled(i);
        } catch (RemoteException e) {
            Log.e(TAG, "isNrMapEnabled RemoteException", e);
            return false;
        }
    }

    public boolean isSimOnOffEnabled() {
        boolean z = SystemProperties.get(PROPERTY_SIM_CARD_ONOFF).equals("2") && SystemProperties.get(PROPERTY_SIM_ONOFF_SUPPORT).equals("1");
        Rlog.d(TAG, "isSimOnOffEnabled result = " + z);
        return z;
    }

    public boolean isVolteEnabled(int i) {
        try {
            return getIMtkTelephonyEx().isVolteEnabled(i);
        } catch (RemoteException e) {
            return false;
        } catch (NullPointerException e2) {
            return false;
        }
    }

    public boolean isWifiCallingEnabled(int i) {
        try {
            return getIMtkTelephonyEx().isWifiCallingEnabled(i);
        } catch (RemoteException e) {
            return false;
        } catch (NullPointerException e2) {
            return false;
        }
    }

    public boolean isWifiCalllingActive(int i) {
        try {
            return getIMtkTelephonyEx().isWifiCallingEnabled(i);
        } catch (RemoteException e) {
            return false;
        } catch (NullPointerException e2) {
            return false;
        }
    }

    public List<String> loadEFLinearFixedAll(int i, int i2, int i3, String str) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.loadEFLinearFixedAll(i, i2, i3, str);
            }
            return null;
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public byte[] loadEFTransparent(int i, int i2, int i3, String str) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.loadEFTransparent(i, i2, i3, str);
            }
            return null;
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public void manuallySetNrMap(int i, int i2) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                Log.d(TAG, "switchNrMap id=" + i + " i=" + i2);
                iMtkTelephonyEx.manuallySetNrMap(i, i2);
            } else {
                Log.e(TAG, "manuallySetNrMap IMtkTelephonyEx is null");
            }
        } catch (RemoteException e) {
            Log.e(TAG, "manuallySetNrMap RemoteException", e);
        }
    }

    public int queryFemtoCellSystemSelectionMode(int i) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.queryFemtoCellSystemSelectionMode(i);
            }
            Rlog.e(TAG, "queryFemtoCellSystemSelectionMode error because telephony is null");
            return -1;
        } catch (RemoteException e) {
            Rlog.e(TAG, "queryFemtoCellSystemSelectionMode error due to RemoteException " + e);
            return -1;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "queryFemtoCellSystemSelectionMode due to NullPointerException " + e2);
            return -1;
        }
    }

    public void registerAtUrcInd(int i, final Handler handler, final int i2) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                iMtkTelephonyEx.registerAtUrcInd(i, new IOemHookCallback.Stub() { // from class: com.mediatek.telephony.MtkTelephonyManagerEx.1
                    @Override // com.mediatek.telephony.IOemHookCallback
                    public void onAtCmdResp(int i3, long j, String str) {
                    }

                    @Override // com.mediatek.telephony.IOemHookCallback
                    public void onAtUrcInd(int i3, String str) {
                        if (handler != null) {
                            ArrayList arrayList = new ArrayList();
                            arrayList.add(String.valueOf(i3));
                            arrayList.add(str);
                            handler.sendMessage(handler.obtainMessage(i2, arrayList));
                        }
                    }

                    @Override // com.mediatek.telephony.IOemHookCallback
                    public void onError(String str) {
                        Rlog.e(MtkTelephonyManagerEx.TAG, "registerAtUrcInd onError " + str);
                        if (handler == null) {
                            Rlog.e(MtkTelephonyManagerEx.TAG, "registerAtUrcInd onError h == null");
                            return;
                        }
                        handler.sendMessage(handler.obtainMessage(i2, new Exception(str)));
                    }
                });
            } else {
                Rlog.e(TAG, "registerAtUrcInd service is null");
            }
        } catch (RemoteException e) {
            Rlog.e(TAG, "exception " + e);
        }
    }

    public void registerAtUrcInd(int i, Executor executor, OemHookCallback oemHookCallback) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                iMtkTelephonyEx.registerAtUrcInd(i, new AnonymousClass2(executor, oemHookCallback));
            } else {
                Rlog.e(TAG, "registerAtUrcInd service is null");
            }
        } catch (RemoteException e) {
            Rlog.e(TAG, "exception " + e);
        }
    }

    public void removeGwsdListener() {
        removeGwsdListener(SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultDataSubscriptionId()));
    }

    public void removeGwsdListener(int i) {
        try {
            IGwsdService iGwsdServiceAsInterface = IGwsdService.Stub.asInterface(ServiceManager.getService("gwsd"));
            if (iGwsdServiceAsInterface != null) {
                iGwsdServiceAsInterface.removeListener(i);
            }
        } catch (Exception e) {
            Rlog.e(TAG, Log.getStackTraceString(e));
        }
    }

    public boolean selectFemtoCell(int i, FemtoCellInfo femtoCellInfo) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.selectFemtoCell(i, femtoCellInfo);
            }
            Rlog.e(TAG, "selectFemtoCell error because telephony is null");
            return false;
        } catch (RemoteException e) {
            Rlog.e(TAG, "selectFemtoCell error due to RemoteException " + e);
            return false;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "selectFemtoCell error due to NullPointerException " + e2);
            return false;
        }
    }

    public void sendAtCmd(int i, long j, String str, final Handler handler, final int i2) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                iMtkTelephonyEx.sendAtCmd(i, j, str, new IOemHookCallback.Stub() { // from class: com.mediatek.telephony.MtkTelephonyManagerEx.3
                    @Override // com.mediatek.telephony.IOemHookCallback
                    public void onAtCmdResp(int i3, long j2, String str2) {
                        Rlog.e(MtkTelephonyManagerEx.TAG, "sendAtCmd onAtCmdResp token=" + j2);
                        if (handler == null) {
                            Rlog.e(MtkTelephonyManagerEx.TAG, "sendAtCmd onAtCmdResp h == null");
                            return;
                        }
                        ArrayList arrayList = new ArrayList();
                        arrayList.add(String.valueOf(i3));
                        arrayList.add(String.valueOf(j2));
                        arrayList.add(str2);
                        handler.sendMessage(handler.obtainMessage(i2, arrayList));
                    }

                    @Override // com.mediatek.telephony.IOemHookCallback
                    public void onAtUrcInd(int i3, String str2) {
                    }

                    @Override // com.mediatek.telephony.IOemHookCallback
                    public void onError(String str2) {
                        Rlog.e(MtkTelephonyManagerEx.TAG, "sendAtCmd onError " + str2);
                        if (handler == null) {
                            Rlog.e(MtkTelephonyManagerEx.TAG, "sendAtCmd onError h == null");
                            return;
                        }
                        handler.sendMessage(handler.obtainMessage(i2, new Exception(str2)));
                    }
                });
            } else {
                Rlog.e(TAG, "sendAtCmd service is null");
            }
        } catch (RemoteException e) {
            Rlog.e(TAG, "exception " + e);
        }
    }

    public void sendAtCmd(int i, long j, String str, Executor executor, OemHookCallback oemHookCallback) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                iMtkTelephonyEx.sendAtCmd(i, j, str, new AnonymousClass4(executor, oemHookCallback));
            } else {
                Rlog.e(TAG, "sendAtCmd service is null");
            }
        } catch (RemoteException e) {
            Rlog.e(TAG, "exception " + e);
        }
    }

    public void setApcMode(int i, int i2, boolean z, int i3) {
        if (i < 0 || i >= TelephonyManager.getDefault().getSimCount()) {
            Rlog.e(TAG, "setApcMode error with invalid slotId " + i);
            return;
        }
        if (i2 < 0 || i2 > 2) {
            Rlog.e(TAG, "setApcMode error with invalid mode " + i2);
            return;
        }
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx == null) {
                Rlog.e(TAG, "setApcMode error because telephony is null");
            } else {
                iMtkTelephonyEx.setApcModeUsingSlotId(i, i2, z, i3);
            }
        } catch (RemoteException e) {
            Rlog.e(TAG, "setApcMode error due to RemoteException " + e);
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "setApcMode error due to NullPointerException " + e2);
        }
    }

    public void setCallSubAddressEnabled(int i, boolean z) {
        try {
            getIMtkTelephonyEx().setCallSubAddressEnabled(i, z);
        } catch (RemoteException e) {
            Log.e(TAG, "setCallSubAddressEnabled IMtkTelephonyEx re: " + e.getMessage());
        } catch (NullPointerException e2) {
            Log.e(TAG, "setCallSubAddressEnabled IMtkTelephonyEx npe: " + e2.getMessage());
        }
    }

    public void setCallSubAddressEnabled(boolean z) {
        setCallSubAddressEnabled(SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultSubscriptionId()), z);
    }

    public void setCallValidTimer(int i) {
        setCallValidTimer(SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultDataSubscriptionId()), i);
    }

    public void setCallValidTimer(int i, int i2) {
        try {
            IGwsdService iGwsdServiceAsInterface = IGwsdService.Stub.asInterface(ServiceManager.getService("gwsd"));
            if (iGwsdServiceAsInterface != null) {
                iGwsdServiceAsInterface.setCallValidTimer(i, i2);
            }
        } catch (Exception e) {
            Rlog.e(TAG, Log.getStackTraceString(e));
        }
    }

    public boolean setDisable2G(int i, boolean z) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.setDisable2G(i, z);
            }
            Rlog.e(TAG, "setDisable2G error because telephony is null");
            return false;
        } catch (RemoteException e) {
            Rlog.e(TAG, "setDisable2G error due to RemoteException " + e);
            return false;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "setDisable2G error due to NullPointerException " + e2);
            return false;
        }
    }

    public boolean setFemtoCellSystemSelectionMode(int i, int i2) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.setFemtoCellSystemSelectionMode(i, i2);
            }
            Rlog.e(TAG, "setFemtoCellSystemSelectionMode error because telephony is null");
            return false;
        } catch (RemoteException e) {
            Rlog.e(TAG, "setFemtoCellSystemSelectionMode error due to RemoteException " + e);
            return false;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "setFemtoCellSystemSelectionMode due to NullPointerException " + e2);
            return false;
        }
    }

    public void setGwsdAutoRejectEnabled(int i, boolean z) {
        try {
            IGwsdService iGwsdServiceAsInterface = IGwsdService.Stub.asInterface(ServiceManager.getService("gwsd"));
            if (iGwsdServiceAsInterface != null) {
                iGwsdServiceAsInterface.setAutoRejectModeEnabled(i, z);
            }
        } catch (Exception e) {
            Rlog.e(TAG, Log.getStackTraceString(e));
        }
    }

    public void setGwsdAutoRejectEnabled(boolean z) {
        setGwsdAutoRejectEnabled(SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultDataSubscriptionId()), z);
    }

    public void setGwsdDualSimEnabled(boolean z) {
        Rlog.d(TAG, "setGwsdDualSimEnabled: " + z);
        try {
            IGwsdService iGwsdServiceAsInterface = IGwsdService.Stub.asInterface(ServiceManager.getService("gwsd"));
            if (iGwsdServiceAsInterface != null) {
                iGwsdServiceAsInterface.setGwsdDualSimEnabled(z);
            }
        } catch (Exception e) {
            Rlog.e(TAG, Log.getStackTraceString(e));
        }
    }

    public void setGwsdEnabled(int i, boolean z) {
        try {
            IGwsdService iGwsdServiceAsInterface = IGwsdService.Stub.asInterface(ServiceManager.getService("gwsd"));
            if (iGwsdServiceAsInterface != null) {
                iGwsdServiceAsInterface.setUserModeEnabled(i, z);
            }
        } catch (Exception e) {
            Rlog.e(TAG, Log.getStackTraceString(e));
        }
    }

    public void setGwsdEnabled(boolean z) {
        setGwsdEnabled(SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultDataSubscriptionId()), z);
    }

    public void setIgnoreSameNumberInterval(int i) {
        setIgnoreSameNumberInterval(SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultDataSubscriptionId()), i);
    }

    public void setIgnoreSameNumberInterval(int i, int i2) {
        try {
            IGwsdService iGwsdServiceAsInterface = IGwsdService.Stub.asInterface(ServiceManager.getService("gwsd"));
            if (iGwsdServiceAsInterface != null) {
                iGwsdServiceAsInterface.setIgnoreSameNumberInterval(i, i2);
            }
        } catch (Exception e) {
            Rlog.e(TAG, Log.getStackTraceString(e));
        }
    }

    public void setIsimGbabp(int i, String str, Message message) {
        try {
            getMtkSubscriberInfoEx().setIsimGbabpForSubscriber(i, str, message);
        } catch (RemoteException e) {
        } catch (NullPointerException e2) {
        }
    }

    public void setIsimGbabp(String str, Message message) {
        setIsimGbabp(SubscriptionManager.getDefaultSubscriptionId(), str, message);
    }

    public void setMobileDataUsageSum(int i, long j, long j2, long j3, long j4) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx == null) {
                Rlog.e(TAG, "setMobileDataUsageSum : telephony is null");
            } else {
                iMtkTelephonyEx.setMobileDataUsageSum(i, j, j2, j3, j4);
            }
        } catch (RemoteException e) {
            Rlog.e(TAG, "setMobileDataUsageSum : RemoteException " + e);
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "setMobileDataUsageSum : NullPointerException " + e2);
        }
    }

    @SystemApi
    public boolean setPreferredNetworkTypeBitmask(int i, long j) {
        try {
            ITelephony iTelephony = getITelephony();
            if (iTelephony != null) {
                return iTelephony.setPreferredNetworkType(i, MtkRadioAccessFamily.getNetworkTypeFromRaf((int) j));
            }
            return false;
        } catch (RemoteException e) {
            Rlog.e(TAG, "setPreferredNetworkTypeBitmask RemoteException", e);
            return false;
        }
    }

    public boolean setRoamingEnable(int i, int[] iArr) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.setRoamingEnable(i, iArr);
            }
            Rlog.e(TAG, "setRoamingEnable error because telephony is null");
            return false;
        } catch (RemoteException e) {
            Rlog.e(TAG, "setRoamingEnable error due to RemoteException " + e);
            return false;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "setRoamingEnable error due to NullPointerException " + e2);
            return false;
        }
    }

    public int[] setRxTestConfig(int i) {
        try {
            return getIMtkTelephonyEx().setRxTestConfig(SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultSubscriptionId()), i);
        } catch (RemoteException e) {
            return null;
        } catch (NullPointerException e2) {
            return null;
        }
    }

    public int setSimPower(int i, int i2) {
        if (i < 0 || i >= TelephonyManager.getDefault().getSimCount()) {
            Rlog.e(TAG, "setSimPower error with invalid slotIndex " + i);
            return -1;
        }
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                return iMtkTelephonyEx.setSimPower(i, i2);
            }
            return -1;
        } catch (RemoteException e) {
            Rlog.e(TAG, "Error calling ITelephony#setSimOnOffState", e);
            return -1;
        } catch (SecurityException e2) {
            Rlog.e(TAG, "Permission error calling ITelephony#setSimOnOffState", e2);
            return -1;
        }
    }

    public void setUsimGbabp(int i, String str, Message message) {
        try {
            getMtkSubscriberInfoEx().setUsimGbabpForSubscriber(i, str, message);
        } catch (RemoteException e) {
        } catch (NullPointerException e2) {
        }
    }

    public void setUsimGbabp(String str, Message message) {
        setUsimGbabp(SubscriptionManager.getDefaultSubscriptionId(), str, message);
    }

    public void setVoDataEnabled(int i, boolean z) {
        try {
            IVoDataService iVoDataServiceAsInterface = IVoDataService.Stub.asInterface(ServiceManager.getService("vodata"));
            if (iVoDataServiceAsInterface != null) {
                iVoDataServiceAsInterface.setEnabled(i, z);
            }
        } catch (Exception e) {
            Rlog.e(TAG, Log.getStackTraceString(e));
        }
    }

    public boolean setupPdnByType(int i, String str) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx == null) {
                Rlog.e(TAG, "setupPdnByType: telephony = null");
                return false;
            }
            iMtkTelephonyEx.setupPdnByType(i, str);
            return true;
        } catch (RemoteException e) {
            Rlog.e(TAG, "setupPdnByType: RemoteException " + e);
            return false;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "setupPdnByType: NullPointerException " + e2);
            return false;
        }
    }

    public int simSwitchMode() {
        int i = 1;
        if (!SystemProperties.get(PROPERTY_SIM_ONOFF_SUPPORT).equals("1")) {
            i = 1;
        } else if (SystemProperties.get(PROPERTY_SIM_CARD_ONOFF).equals("2")) {
            i = 2;
        } else if (SystemProperties.get(PROPERTY_SIM_CARD_ONOFF).equals("3")) {
            i = 3;
        }
        Rlog.d(TAG, "simSwitchMode result = " + i);
        return i;
    }

    public void switchNrMap(int i, boolean z) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx != null) {
                Log.d(TAG, "switchNrMap id=" + i + " sw=" + z);
                iMtkTelephonyEx.switchNrMap(i, z);
            } else {
                Log.e(TAG, "switchNrMap IMtkTelephonyEx is null");
            }
        } catch (RemoteException e) {
            Log.e(TAG, "switchNrMap RemoteException", e);
        }
    }

    public void syncGwsdInfo(int i, boolean z, boolean z2) {
        try {
            IGwsdService iGwsdServiceAsInterface = IGwsdService.Stub.asInterface(ServiceManager.getService("gwsd"));
            if (iGwsdServiceAsInterface != null) {
                iGwsdServiceAsInterface.syncGwsdInfo(i, z, z2);
            }
        } catch (Exception e) {
            Rlog.e(TAG, Log.getStackTraceString(e));
        }
    }

    public void syncGwsdInfo(boolean z, boolean z2) {
        syncGwsdInfo(SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultDataSubscriptionId()), z, z2);
    }

    public boolean tearDownPdnByType(int i, String str) {
        try {
            IMtkTelephonyEx iMtkTelephonyEx = getIMtkTelephonyEx();
            if (iMtkTelephonyEx == null) {
                Rlog.e(TAG, "tearDownPdnByType: telephony = null");
                return false;
            }
            iMtkTelephonyEx.tearDownPdnByType(i, str);
            return true;
        } catch (RemoteException e) {
            Rlog.e(TAG, "tearDownPdnByType: RemoteException " + e);
            return false;
        } catch (NullPointerException e2) {
            Rlog.e(TAG, "tearDownPdnByType: NullPointerException " + e2);
            return false;
        }
    }
}
