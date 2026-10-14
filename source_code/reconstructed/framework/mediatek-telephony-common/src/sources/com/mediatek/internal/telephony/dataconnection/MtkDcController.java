package com.mediatek.internal.telephony.dataconnection;

import android.net.LinkAddress;
import android.net.LinkProperties;
import android.net.util.LinkPropertiesUtils;
import android.net.util.NetUtils;
import android.os.Build;
import android.os.Handler;
import android.os.SystemProperties;
import android.telephony.DataFailCause;
import android.telephony.Rlog;
import android.telephony.data.DataCallResponse;
import com.android.internal.telephony.DctConstants;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.dataconnection.ApnContext;
import com.android.internal.telephony.dataconnection.CellularDataService;
import com.android.internal.telephony.dataconnection.DataConnection;
import com.android.internal.telephony.dataconnection.DataServiceManager;
import com.android.internal.telephony.dataconnection.DcController;
import com.android.internal.telephony.dataconnection.DcTracker;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import miui.telephony.TelephonyUtils;

/* JADX INFO: loaded from: classes.dex */
public class MtkDcController extends DcController {
    private static final boolean DBG = Build.IS_DEBUGGABLE;
    private static final String LOG_TAG = "MtkDcc";
    private static final boolean MTK_SRLTE_SUPPORT;
    private static final String PROP_MTK_CDMA_LTE_MODE = "ro.vendor.mtk_c2k_lte_mode";
    private CellularDataService mCellularDataService;

    protected class MtkDccDefaultState extends DcController.DccDefaultState {
        protected MtkDccDefaultState() {
            super(MtkDcController.this);
        }

        public void enter() {
            super.enter();
            MtkDcController.this.mDataServiceManager.unregisterForDataCallListChanged(MtkDcController.this.getHandler());
            MtkDcController.this.mPhone.mCi.registerForDataCallListChanged(MtkDcController.this.getHandler(), 262151, (Object) null);
        }

        public void exit() {
            super.exit();
            MtkDcController.this.mPhone.mCi.unregisterForDataCallListChanged(MtkDcController.this.getHandler());
        }

        /* JADX WARN: Bottom block not found for handler: all -> 0x0596 */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        protected void onDataStateChanged(ArrayList<DataCallResponse> arrayList) throws Throwable {
            ArrayList arrayList2;
            HashMap map;
            ArrayList arrayList3;
            HashMap map2;
            boolean z;
            HashMap map3;
            synchronized (MtkDcController.this.mDcListAll) {
                try {
                    arrayList2 = new ArrayList(MtkDcController.this.mDcListAll);
                    map = new HashMap(MtkDcController.this.mDcListActiveByCid);
                } catch (Throwable th) {
                    th = th;
                    while (true) {
                        throw th;
                    }
                }
            }
            if (MtkDcController.DBG) {
                MtkDcController.this.lr("onDataStateChanged: dcsList=" + arrayList + " dcListActiveByCid=" + map);
            }
            HashMap map4 = new HashMap();
            for (DataCallResponse dataCallResponse : arrayList) {
                map4.put(Integer.valueOf(dataCallResponse.getId()), dataCallResponse);
            }
            ArrayList<DataConnection> arrayList4 = new ArrayList();
            for (DataConnection dataConnection : map.values()) {
                if (map4.get(Integer.valueOf(dataConnection.mCid)) == null) {
                    if (MtkDcController.DBG) {
                        MtkDcController.this.log("onDataStateChanged: add to retry dc=" + dataConnection);
                    }
                    arrayList4.add(dataConnection);
                }
            }
            if (MtkDcController.DBG) {
                MtkDcController.this.log("onDataStateChanged: dcsToRetry=" + arrayList4);
            }
            ArrayList arrayList5 = new ArrayList();
            boolean z2 = false;
            boolean z3 = false;
            for (DataCallResponse dataCallResponse2 : arrayList) {
                DataConnection dataConnection2 = (DataConnection) map.get(Integer.valueOf(dataCallResponse2.getId()));
                if (dataConnection2 == null) {
                    MtkDcController.this.loge("onDataStateChanged: no associated DC yet, ignore");
                } else {
                    List apnContexts = dataConnection2.getApnContexts();
                    if (apnContexts.size() == 0) {
                        if (MtkDcController.DBG) {
                            MtkDcController.this.loge("onDataStateChanged: no connected apns, ignore");
                        }
                        arrayList3 = arrayList2;
                        map4 = map4;
                        map2 = map;
                    } else {
                        if (MtkDcController.DBG) {
                            MtkDcController.this.log("onDataStateChanged: Found ConnId=" + dataCallResponse2.getId() + " newState=" + dataCallResponse2.toString());
                        }
                        if (DataFailCause.getFailCause(dataCallResponse2.getCause()) == -1100) {
                            if (MtkDcController.DBG) {
                                MtkDcController.this.log("onDataStateChanged: trySetupDataOnEvent. EVENT_DATA_SETUP_SSC_MODE3, cid=" + dataCallResponse2.getId() + ", lifetime=" + dataCallResponse2.getSuggestedRetryTime());
                            }
                            ((MtkDcTracker) MtkDcController.this.mDct).trySetupDataOnEvent(270862, dataCallResponse2.getId(), dataCallResponse2.getSuggestedRetryTime());
                        } else {
                            arrayList3 = arrayList2;
                            if (dataCallResponse2.getLinkStatus() != 0) {
                                DataConnection.UpdateLinkPropertyResult updateLinkPropertyResultUpdateLinkProperty = dataConnection2.updateLinkProperty(dataCallResponse2);
                                if (updateLinkPropertyResultUpdateLinkProperty.oldLp.equals(updateLinkPropertyResultUpdateLinkProperty.newLp)) {
                                    if (MtkDcController.DBG) {
                                        MtkDcController.this.log("onDataStateChanged: no change");
                                    }
                                    map4 = map4;
                                    map2 = map;
                                } else if (!LinkPropertiesUtils.isIdenticalInterfaceName(updateLinkPropertyResultUpdateLinkProperty.oldLp, updateLinkPropertyResultUpdateLinkProperty.newLp)) {
                                    map4 = map4;
                                    map2 = map;
                                    arrayList5.addAll(apnContexts);
                                    if (MtkDcController.DBG) {
                                        MtkDcController.this.log("onDataStateChanged: interface change, cleanup apns=" + apnContexts);
                                    }
                                } else if (!LinkPropertiesUtils.isIdenticalDnses(updateLinkPropertyResultUpdateLinkProperty.oldLp, updateLinkPropertyResultUpdateLinkProperty.newLp) || !LinkPropertiesUtils.isIdenticalRoutes(updateLinkPropertyResultUpdateLinkProperty.oldLp, updateLinkPropertyResultUpdateLinkProperty.newLp) || !LinkPropertiesUtils.isIdenticalHttpProxy(updateLinkPropertyResultUpdateLinkProperty.oldLp, updateLinkPropertyResultUpdateLinkProperty.newLp) || !MtkDcController.this.isIpMatched(updateLinkPropertyResultUpdateLinkProperty.oldLp, updateLinkPropertyResultUpdateLinkProperty.newLp)) {
                                    LinkPropertiesUtils.CompareResult compareResultCompareAddresses = LinkPropertiesUtils.compareAddresses(updateLinkPropertyResultUpdateLinkProperty.oldLp, updateLinkPropertyResultUpdateLinkProperty.newLp);
                                    if (MtkDcController.DBG) {
                                        MtkDcController mtkDcController = MtkDcController.this;
                                        StringBuilder sb = new StringBuilder();
                                        sb.append("onDataStateChanged: oldLp=");
                                        sb.append(updateLinkPropertyResultUpdateLinkProperty.oldLp != null ? TelephonyUtils.piiIP(updateLinkPropertyResultUpdateLinkProperty.oldLp.toString()) : "");
                                        sb.append(" newLp=");
                                        sb.append(updateLinkPropertyResultUpdateLinkProperty.newLp != null ? TelephonyUtils.piiIP(updateLinkPropertyResultUpdateLinkProperty.newLp.toString()) : "");
                                        sb.append(" car=");
                                        sb.append(compareResultCompareAddresses != null ? TelephonyUtils.piiIP(compareResultCompareAddresses.toString()) : "");
                                        mtkDcController.log(sb.toString());
                                    }
                                    boolean z4 = false;
                                    for (LinkAddress linkAddress : compareResultCompareAddresses.added) {
                                        boolean z5 = z4;
                                        Iterator it = compareResultCompareAddresses.removed.iterator();
                                        while (true) {
                                            if (!it.hasNext()) {
                                                map3 = map;
                                                z4 = z5;
                                                break;
                                            }
                                            Iterator it2 = it;
                                            map3 = map;
                                            if (NetUtils.addressTypeMatches(((LinkAddress) it.next()).getAddress(), linkAddress.getAddress())) {
                                                z4 = true;
                                                break;
                                            } else {
                                                it = it2;
                                                map = map3;
                                            }
                                        }
                                        map = map3;
                                    }
                                    boolean z6 = z4;
                                    map2 = map;
                                    if (MtkDcController.MTK_SRLTE_SUPPORT && MtkDcController.this.mPhone.getPhoneType() == 2) {
                                        if (MtkDcController.DBG) {
                                            MtkDcController.this.log("onDataStateChanged: IRAT set needToClean false");
                                        }
                                        z = false;
                                    } else if ("OP07".equals(SystemProperties.get(DataSubConstants.PROPERTY_OPERATOR_OPTR))) {
                                        if (MtkDcController.DBG) {
                                            MtkDcController.this.log("onDataStateChanged: OP07 set needToClean false");
                                        }
                                        z = false;
                                    } else {
                                        z = z6;
                                    }
                                    if (z) {
                                        if (MtkDcController.DBG) {
                                            MtkDcController mtkDcController2 = MtkDcController.this;
                                            StringBuilder sb2 = new StringBuilder();
                                            sb2.append("onDataStateChanged: addr change, cleanup apns=");
                                            sb2.append(apnContexts);
                                            sb2.append(" oldLp=");
                                            sb2.append(updateLinkPropertyResultUpdateLinkProperty.oldLp != null ? TelephonyUtils.piiIP(updateLinkPropertyResultUpdateLinkProperty.oldLp.toString()) : "");
                                            sb2.append(" newLp=");
                                            sb2.append(updateLinkPropertyResultUpdateLinkProperty.newLp != null ? TelephonyUtils.piiIP(updateLinkPropertyResultUpdateLinkProperty.newLp.toString()) : "");
                                            mtkDcController2.log(sb2.toString());
                                        }
                                        arrayList5.addAll(apnContexts);
                                    } else {
                                        if (MtkDcController.DBG) {
                                            MtkDcController.this.log("onDataStateChanged: simple change");
                                        }
                                        Iterator it3 = apnContexts.iterator();
                                        while (it3.hasNext()) {
                                            MtkDcController.this.mPhone.notifyDataConnection(((ApnContext) it3.next()).getApnType());
                                            updateLinkPropertyResultUpdateLinkProperty = updateLinkPropertyResultUpdateLinkProperty;
                                        }
                                    }
                                } else if (MtkDcController.DBG) {
                                    MtkDcController.this.log("onDataStateChanged: no changes");
                                    map4 = map4;
                                    map2 = map;
                                } else {
                                    map4 = map4;
                                    map2 = map;
                                }
                            } else if (MtkDcController.this.mDct.isCleanupRequired.get()) {
                                arrayList5.addAll(apnContexts);
                                MtkDcController.this.mDct.isCleanupRequired.set(false);
                                map4 = map4;
                                map2 = map;
                            } else {
                                int failCause = DataFailCause.getFailCause(dataCallResponse2.getCause());
                                if (DataFailCause.isRadioRestartFailure(MtkDcController.this.mPhone.getContext(), failCause, MtkDcController.this.mPhone.getSubId())) {
                                    if (MtkDcController.DBG) {
                                        MtkDcController.this.log("onDataStateChanged: X restart radio, failCause=" + failCause);
                                    }
                                    MtkDcController.this.mDct.sendRestartRadio();
                                } else if (MtkDcController.this.mDct.isPermanentFailure(failCause)) {
                                    if (MtkDcController.DBG) {
                                        MtkDcController.this.log("onDataStateChanged: inactive, add to cleanup list. failCause=" + failCause);
                                    }
                                    arrayList5.addAll(apnContexts);
                                } else {
                                    if (MtkDcController.DBG) {
                                        MtkDcController.this.log("onDataStateChanged: inactive, add to retry list. failCause=" + failCause);
                                    }
                                    arrayList4.add(dataConnection2);
                                    ((MtkDataConnection) dataConnection2).setLostConnectionCause(failCause);
                                }
                                map4 = map4;
                                map2 = map;
                            }
                        }
                    }
                    if (dataCallResponse2.getLinkStatus() == 2) {
                        z3 = true;
                    }
                    if (dataCallResponse2.getLinkStatus() == 1) {
                        z2 = true;
                    }
                    arrayList2 = arrayList3;
                    map4 = map4;
                    map = map2;
                }
                arrayList2 = arrayList2;
            }
            if (MtkDcController.this.mDataServiceManager.getTransportType() == 1) {
                int i = z3 ? 2 : 1;
                if (MtkDcController.this.mPhysicalLinkState != i) {
                    MtkDcController.this.mPhysicalLinkState = i;
                    MtkDcController.this.mPhysicalLinkStateChangedRegistrants.notifyResult(Integer.valueOf(MtkDcController.this.mPhysicalLinkState));
                }
                if (!z2 || z3) {
                    if (MtkDcController.DBG) {
                        MtkDcController.this.log("onDataStateChanged: Data Activity updated to NONE. isAnyDataCallActive = " + z3 + " isAnyDataCallDormant = " + z2);
                    }
                    if (z3) {
                        MtkDcController.this.mDct.sendStartNetStatPoll(DctConstants.Activity.NONE);
                    }
                } else {
                    if (MtkDcController.DBG) {
                        MtkDcController.this.log("onDataStateChanged: Data activity DORMANT. stopNetStatePoll");
                    }
                    MtkDcController.this.mDct.sendStopNetStatPoll(DctConstants.Activity.DORMANT);
                }
            }
            if (MtkDcController.DBG) {
                MtkDcController.this.lr("onDataStateChanged: dcsToRetry=" + arrayList4 + " apnsToCleanup=" + arrayList5);
            }
            Iterator it4 = arrayList5.iterator();
            while (it4.hasNext()) {
                MtkDcController.this.mDct.cleanUpConnection((ApnContext) it4.next());
            }
            for (DataConnection dataConnection3 : arrayList4) {
                if (MtkDcController.DBG) {
                    MtkDcController.this.log("onDataStateChanged: send EVENT_LOST_CONNECTION dc.mTag=" + dataConnection3.mTag);
                }
                dataConnection3.sendMessage(262153, dataConnection3.mTag);
            }
        }
    }

    static {
        MTK_SRLTE_SUPPORT = SystemProperties.getInt(PROP_MTK_CDMA_LTE_MODE, 0) == 2;
    }

    public MtkDcController(String str, Phone phone, DcTracker dcTracker, DataServiceManager dataServiceManager, Handler handler) {
        super(str, phone, dcTracker, dataServiceManager, handler);
        this.mCellularDataService = new CellularDataService();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean isIpMatched(LinkProperties linkProperties, LinkProperties linkProperties2) {
        if (linkProperties.isIdenticalAddresses(linkProperties2)) {
            return true;
        }
        if (DBG) {
            log("isIpMatched: address count is different but matched");
        }
        return linkProperties2.getAddresses().containsAll(linkProperties.getAddresses());
    }

    int getActiveDcCount() {
        return this.mDcListActiveByCid.size();
    }

    protected void log(String str) {
        Rlog.d(LOG_TAG, "[" + getName() + "] " + str);
    }

    protected void loge(String str) {
        Rlog.e(LOG_TAG, "[" + getName() + "] " + str);
    }

    protected void mtkReplaceStates() {
        this.mDccDefaultState = new MtkDccDefaultState();
    }
}
