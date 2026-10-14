package com.mediatek.ims.legacy.ss;

import android.app.ActivityManager;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.ServiceConnection;
import android.net.ConnectivityManager;
import android.net.Network;
import android.os.AsyncResult;
import android.os.Build;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.os.PowerManager;
import android.os.SystemProperties;
import android.telephony.Rlog;
import android.telephony.SubscriptionManager;
import android.text.TextUtils;
import com.android.internal.telephony.CallForwardInfo;
import com.android.internal.telephony.CommandException;
import com.mediatek.ims.OperatorUtils;
import com.mediatek.ims.SuppSrvConfig;
import com.mediatek.internal.telephony.MtkCallForwardInfo;
import com.mediatek.internal.telephony.MtkSuppServHelper;
import com.mediatek.simservs.client.CommunicationDiversion;
import com.mediatek.simservs.client.CommunicationWaiting;
import com.mediatek.simservs.client.IncomingCommunicationBarring;
import com.mediatek.simservs.client.OriginatingIdentityPresentation;
import com.mediatek.simservs.client.OriginatingIdentityPresentationRestriction;
import com.mediatek.simservs.client.OutgoingCommunicationBarring;
import com.mediatek.simservs.client.SimServs;
import com.mediatek.simservs.client.SimservType;
import com.mediatek.simservs.client.TerminatingIdentityPresentation;
import com.mediatek.simservs.client.TerminatingIdentityPresentationRestriction;
import com.mediatek.simservs.client.policy.Actions;
import com.mediatek.simservs.client.policy.Conditions;
import com.mediatek.simservs.client.policy.Rule;
import com.mediatek.simservs.client.policy.RuleSet;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.simservs.xcap.XcapException;
import java.net.Authenticator;
import java.net.PasswordAuthentication;
import java.net.UnknownHostException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TimeZone;

/* JADX INFO: loaded from: classes.dex */
public final class MMTelSSTransport {
    private static final int CB_ALL = 5;
    private static final int CB_ICB = 2;
    private static final int CB_MO = 3;
    private static final int CB_MT = 4;
    private static final int CB_NONE = 0;
    private static final int CB_OCB = 1;
    private static final int CLIR_NOT_PROVISION = 2;
    private static final int CLIR_PROVISION = 1;
    private static final int CLIR_TEMP_ALLOW = 4;
    private static final int CLIR_TEMP_DISALLOW = 3;
    static final boolean DBG = true;
    private static final int DEFAULT_WAKE_LOCK_TIMEOUT = 5000;
    static final int EVENT_SEND = 1;
    static final int EVENT_WAKE_LOCK_TIMEOUT = 2;
    private static final int IDENTITY_CLIP = 0;
    private static final int IDENTITY_CLIR = 1;
    private static final int IDENTITY_COLP = 2;
    private static final int IDENTITY_COLR = 3;
    private static final int INVALID_PHONE_ID = -1;
    private static final String LOG_TAG = "MMTelSS";
    private static final int MATCHED_MEDIA_AUDIO = 1;
    private static final int MATCHED_MEDIA_NO_MATCHED = 0;
    private static final int MATCHED_MEDIA_VIDEO = 2;
    static final int MMTELSS_MAX_COMMAND_BYTES = 8192;
    static final int MMTELSS_REQ_GET_CB = 7;
    static final int MMTELSS_REQ_GET_CF = 9;
    static final int MMTELSS_REQ_GET_CF_TIME_SLOT = 16;
    static final int MMTELSS_REQ_GET_CLIP = 3;
    static final int MMTELSS_REQ_GET_CLIR = 2;
    static final int MMTELSS_REQ_GET_COLP = 4;
    static final int MMTELSS_REQ_GET_COLR = 5;
    static final int MMTELSS_REQ_GET_CW = 11;
    static final int MMTELSS_REQ_SET_CB = 6;
    static final int MMTELSS_REQ_SET_CF = 8;
    static final int MMTELSS_REQ_SET_CF_TIME_SLOT = 15;
    static final int MMTELSS_REQ_SET_CLIP = 12;
    static final int MMTELSS_REQ_SET_CLIR = 1;
    static final int MMTELSS_REQ_SET_COLP = 13;
    static final int MMTELSS_REQ_SET_COLR = 14;
    static final int MMTELSS_REQ_SET_CW = 10;
    private static final String MODE_SS_CS = "Prefer CS";
    private static final String MODE_SS_XCAP = "Prefer XCAP";
    private static final int MODIFIED_SERVICE_AUDIO = 1;
    private static final int MODIFIED_SERVICE_VIDEO = 2;
    private static final String PROP_SS_CFNUM = "persist.vendor.radio.xcap.cfn";
    private static final String PROP_SS_DISABLE_METHOD = "persist.vendor.radio.ss.xrdm";
    private static final String PROP_SS_MODE = "persist.vendor.radio.ss.mode";
    private static final int WAIT_GBA_TIME_OUT = 1000;
    int mRequestMessagesWaiting;
    MMTelSSTransmitter mSender;
    HandlerThread mSenderThread;
    PowerManager.WakeLock mWakeLock;
    int mWakeLockTimeout;
    private static final boolean SENLOG = TextUtils.equals(Build.TYPE, "user");
    private static final MMTelSSTransport INSTANCE = new MMTelSSTransport();
    private static SimServs mSimservs = SimServs.getInstance();
    private static SuppSrvConfig mSSConfig = null;
    private static int[] CF_REASON = {1, 2, 3, 6, 0};
    private static String[] CB_FACILITY = {"AO", "OI", "OX", "AI", "IR"};
    private PowerManager pm = null;
    Context mContext = null;
    private XcapMobileDataNetworkManager mXcapMobileDataNetworkManager = null;
    private Network mNetwork = null;
    int mRequestMessagesPending = 0;
    ArrayList<MMTelSSRequest> mRequestsList = new ArrayList<>();
    IntentFilter mFilter = null;
    private final int CACHE_IDX_CF = 0;
    private final int CACHE_IDX_OCB = 1;
    private final int CACHE_IDX_ICB = 2;
    private final int CACHE_IDX_CW = 3;
    private final int CACHE_IDX_OIP = 4;
    private final int CACHE_IDX_OIR = 5;
    private final int CACHE_IDX_TIP = 6;
    private final int CACHE_IDX_TIR = 7;
    private final int CACHE_IDX_TOTAL = 8;
    private SimservType[] mCacheSimserv = new SimservType[8];
    private int[] mCachePhoneId = new int[8];
    private long[] mLastQueried = new long[8];
    private final Object mWaitLock = new Object();
    private BroadcastReceiver mIntentReceiver = new BroadcastReceiver() { // from class: com.mediatek.ims.legacy.ss.MMTelSSTransport.1
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "onReceive:" + intent.getAction());
            if (intent.getAction().equals("android.intent.action.SIM_STATE_CHANGED") || intent.getAction().equals("android.intent.action.AIRPLANE_MODE")) {
                MMTelSSTransport.this.onReceiveSimStateChangedIntent(intent);
            }
        }
    };
    private ServiceConnection mGbaConnection = new ServiceConnection() { // from class: com.mediatek.ims.legacy.ss.MMTelSSTransport.2
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName componentName, IBinder iBinder) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "GbaService onServiceConnected");
            synchronized (MMTelSSTransport.this.mWaitLock) {
                MMTelSSTransport.this.mWaitLock.notifyAll();
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName componentName) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "GbaService onServiceFailed");
        }
    };

    class MMTelSSTransmitter extends Handler implements Runnable {
        byte[] dataLength;

        public MMTelSSTransmitter(Looper looper) {
            super(looper);
            this.dataLength = new byte[4];
        }

        private int modifyCFRuleForSeperateMedia(List<Rule> list, RuleSet ruleSet, int i, int i2, int i3, String str, int i4, String str2) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "modifyCFRuleForSeperateMedia() reason=" + reasonCFToString(i) + ", action=" + actionCFToString(i2) + ", service=" + serviceClassToString(i3) + ", number=" + MtkSuppServHelper.encryptString(str) + ", time=" + i4 + ", timeSlot=" + str2);
            List<Rule> rules = ruleSet.getRules();
            ArrayList arrayList = new ArrayList();
            boolean z = false;
            int i5 = 0;
            for (int i6 = 0; i6 < rules.size(); i6++) {
                Rule rule = rules.get(i6);
                if (getCFType(rule.getConditions()) == i) {
                    int iIsRuleMatchServiceClass = isRuleMatchServiceClass(rule, i3);
                    if (iIsRuleMatchServiceClass != 0) {
                        arrayList.add(Integer.valueOf(i6));
                    } else {
                        z = true;
                    }
                    if ((iIsRuleMatchServiceClass & 1) != 0) {
                        i5 |= 1;
                    }
                    if ((iIsRuleMatchServiceClass & 2) != 0) {
                        i5 |= 2;
                    }
                }
            }
            Rlog.d(MMTelSSTransport.LOG_TAG, "modifyRuleIdx size: " + arrayList.size() + ", findNotMatch: " + z);
            if (arrayList.size() != 0) {
                ArrayList arrayList2 = arrayList;
                int i7 = 0;
                while (i7 < arrayList2.size()) {
                    ArrayList arrayList3 = arrayList2;
                    list.addAll(modifyMatchedCFRule(rules.get(((Integer) arrayList3.get(i7)).intValue()), i, i2, i3, str, i4, str2));
                    i7++;
                    arrayList2 = arrayList3;
                }
            } else if (z) {
                if ((i3 & 512) != 0) {
                    list.addAll(createCFRuleForService(ruleSet, i, i2, 512, str, i4, str2, "_VIDEO"));
                } else if ((i3 & 1) != 0) {
                    list.addAll(createCFRuleForService(ruleSet, i, i2, 1, str, i4, str2, "_AUDIO"));
                }
            }
            return i5;
        }

        public String actionCFToString(int i) {
            if (i == 0) {
                return "Disable";
            }
            if (i == 1) {
                return "Enable";
            }
            if (i == 2) {
                return "UNUSED";
            }
            if (i == 3) {
                return "Registration";
            }
            if (i == 4) {
                return "Erasure";
            }
            return "ERR: " + String.valueOf(i);
        }

        public String cacheIdxToString(int i) {
            switch (i) {
                case 0:
                    return "CF";
                case 1:
                    return "OCB";
                case 2:
                    return "ICB";
                case XcapException.NO_HTTP_RESPONSE_EXCEPTION /* 3 */:
                    return "CW";
                case XcapException.HTTP_RECOVERABL_EEXCEPTION /* 4 */:
                    return "OIP";
                case XcapException.MALFORMED_CHALLENGE_EXCEPTION /* 5 */:
                    return "OIR";
                case 6:
                    return "TIP";
                case 7:
                    return "TIR";
                default:
                    return "ERR: " + String.valueOf(i);
            }
        }

        public String cbTypeToString(int i) {
            if (i == 1) {
                return "OCB";
            }
            if (i == 2) {
                return "ICB";
            }
            if (i == 3) {
                return "CB_MO";
            }
            if (i != 4) {
                return i != 5 ? "ERR" : "CB_ALL";
            }
            return "CB_MT";
        }

        public void clearCache(int i) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "Clear [" + cacheIdxToString(i) + "] cache");
            MMTelSSTransport.this.mCacheSimserv[i] = null;
            MMTelSSTransport.this.mCachePhoneId[i] = MMTelSSTransport.INVALID_PHONE_ID;
            MMTelSSTransport.this.mLastQueried[i] = 0;
        }

        public Object convertCFInfo(boolean z, MtkCallForwardInfo[] mtkCallForwardInfoArr) {
            if (mtkCallForwardInfoArr == null) {
                mtkCallForwardInfoArr = new MtkCallForwardInfo[0];
            }
            if (z) {
                return mtkCallForwardInfoArr;
            }
            CallForwardInfo[] callForwardInfoArr = new CallForwardInfo[mtkCallForwardInfoArr.length];
            for (int i = 0; i < mtkCallForwardInfoArr.length; i++) {
                callForwardInfoArr[i] = new CallForwardInfo();
                callForwardInfoArr[i].status = mtkCallForwardInfoArr[i].status;
                callForwardInfoArr[i].reason = mtkCallForwardInfoArr[i].reason;
                callForwardInfoArr[i].serviceClass = mtkCallForwardInfoArr[i].serviceClass;
                callForwardInfoArr[i].toa = 0;
                callForwardInfoArr[i].number = mtkCallForwardInfoArr[i].number;
                callForwardInfoArr[i].timeSeconds = mtkCallForwardInfoArr[i].timeSeconds;
            }
            return callForwardInfoArr;
        }

        public String convertCFNumber(String str, int i) {
            if (str != null) {
                boolean zContains = str.contains("+");
                boolean zContains2 = str.contains("phone-context");
                boolean z = str.startsWith("tel:") || str.startsWith("sip:") || str.startsWith("sips:");
                boolean z2 = false;
                String xui = MMTelSSUtils.getXui(i, MMTelSSTransport.this.mContext);
                if (!zContains && !zContains2) {
                    int iIndexOf = xui.indexOf("@");
                    if (iIndexOf != MMTelSSTransport.INVALID_PHONE_ID) {
                        xui = xui.substring(iIndexOf + 1);
                        z2 = true;
                    }
                    if (!TextUtils.isEmpty(MMTelSSTransport.mSSConfig.getPhoneContext())) {
                        xui = MMTelSSTransport.mSSConfig.getPhoneContext();
                        z2 = true;
                    }
                    Rlog.d(MMTelSSTransport.LOG_TAG, "domain:" + xui);
                }
                if (z2) {
                    if (z) {
                        str = str + ";phone-context=" + xui;
                    } else if (MMTelSSTransport.mSSConfig.isFwdNumUseSipUri()) {
                        str = "sip:" + str + ";phone-context=" + xui + "@" + xui + ";user=phone";
                    } else {
                        str = "tel:" + str + ";phone-context=" + xui;
                    }
                } else if (!z) {
                    str = "tel:" + str;
                }
            }
            String str2 = SystemProperties.get(MMTelSSTransport.PROP_SS_CFNUM, "");
            if (!str2.startsWith("sip:") && !str2.startsWith("sips:") && !str2.startsWith("tel:")) {
                return str;
            }
            Rlog.d(MMTelSSTransport.LOG_TAG, "handleSetCF():get call forwarding num from EM setting:" + str2);
            String str3 = SystemProperties.get(MMTelSSTransport.PROP_SS_MODE, MMTelSSTransport.MODE_SS_XCAP);
            Rlog.d(MMTelSSTransport.LOG_TAG, "handleSetCF():ss_mode=" + str3);
            return MMTelSSTransport.MODE_SS_XCAP.equals(str3) ? str2 : str;
        }

        public int convertServiceClass(int i) {
            if (i == 528) {
                return 512;
            }
            return i;
        }

        public long[] convertToLocalTime(String str) {
            long[] jArr = null;
            if (str != null) {
                String[] strArrSplit = str.split(",", 2);
                if (strArrSplit.length == 2) {
                    jArr = new long[2];
                    for (int i = 0; i < 2; i++) {
                        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("HH:mm");
                        simpleDateFormat.setTimeZone(TimeZone.getTimeZone("GMT+8"));
                        try {
                            jArr[i] = simpleDateFormat.parse(strArrSplit[i]).getTime();
                        } catch (ParseException e) {
                            e.printStackTrace();
                            return null;
                        }
                    }
                }
            }
            return jArr;
        }

        public String convertToSeverTime(long[] jArr) {
            String str = null;
            if (jArr == null || jArr.length != 2) {
                return null;
            }
            for (int i = 0; i < jArr.length; i++) {
                Date date = new Date(jArr[i]);
                SimpleDateFormat simpleDateFormat = new SimpleDateFormat("HH:mm");
                simpleDateFormat.setTimeZone(TimeZone.getTimeZone("GMT+8"));
                str = i == 0 ? simpleDateFormat.format(date) : str + "," + simpleDateFormat.format(date);
            }
            return str;
        }

        public String convertUriToNumber(String str) {
            String strSubstring = str;
            if (str != null && (str.startsWith("sip:") || str.startsWith("sips:"))) {
                int iIndexOf = str.indexOf(";");
                if (iIndexOf == MMTelSSTransport.INVALID_PHONE_ID) {
                    iIndexOf = str.length();
                }
                strSubstring = str.substring(str.indexOf(":") + 1, iIndexOf);
                if (strSubstring.contains("@")) {
                    strSubstring = strSubstring.substring(strSubstring.indexOf(":") + 1, strSubstring.indexOf("@"));
                }
            } else if (str != null && str.startsWith("tel:")) {
                int iIndexOf2 = str.indexOf(";");
                if (iIndexOf2 == MMTelSSTransport.INVALID_PHONE_ID) {
                    iIndexOf2 = str.length();
                }
                strSubstring = str.substring(str.indexOf(":") + 1, iIndexOf2);
            }
            StringBuilder sb = new StringBuilder();
            sb.append("convertUriToNumber: ");
            sb.append(!MMTelSSTransport.SENLOG ? strSubstring : "[hidden]");
            Rlog.d(MMTelSSTransport.LOG_TAG, sb.toString());
            return strSubstring;
        }

        public List<Rule> createCBRule(int i, RuleSet ruleSet, String str, int i2, int i3) {
            StringBuilder sb = new StringBuilder();
            sb.append("createCBRule()  modifiedRuleService=");
            sb.append(modifiedServiceToString(i));
            sb.append(", facility=");
            sb.append(str);
            sb.append(", lockState=");
            sb.append(i3 == 1 ? "Enable" : "Disable");
            sb.append(", service=");
            sb.append(serviceClassToString(i2));
            Rlog.d(MMTelSSTransport.LOG_TAG, sb.toString());
            ArrayList arrayList = new ArrayList();
            if ((i2 & 1) != 0) {
                arrayList.addAll(createCBRuleForService(ruleSet, str, 1, i3));
            } else if ((i2 & 512) != 0) {
                arrayList.addAll(createCBRuleForService(ruleSet, str, 512, i3));
            } else if (i2 == 0) {
                for (int i4 : serviceNeedToCreate(i)) {
                    arrayList.addAll(createCBRuleForService(ruleSet, str, i4, i3));
                }
            }
            return arrayList;
        }

        public List<Rule> createCBRuleForService(RuleSet ruleSet, String str, int i, int i2) {
            StringBuilder sb = new StringBuilder();
            sb.append("createCBRuleForService() facility=");
            sb.append(str);
            sb.append(", lockState=");
            sb.append(i2 == 1 ? "Enable" : "Disable");
            sb.append(", service=");
            sb.append(serviceClassToString(i));
            Rlog.d(MMTelSSTransport.LOG_TAG, sb.toString());
            ArrayList arrayList = new ArrayList();
            Rule ruleCreateNewRule = ruleSet.createNewRule(str);
            Conditions conditionsCreateConditions = ruleCreateNewRule.createConditions();
            Actions actionsCreateActions = ruleCreateNewRule.createActions();
            if (str.equals("OI")) {
                conditionsCreateConditions.addInternational();
            } else if (str.equals("OX")) {
                conditionsCreateConditions.addInternationalExHc();
            } else if (str.equals("IR")) {
                conditionsCreateConditions.addRoaming();
            }
            setMedia(conditionsCreateConditions, i);
            actionsCreateActions.setAllow(false);
            arrayList.add(ruleCreateNewRule);
            return arrayList;
        }

        public List<Rule> createCFRule(int i, RuleSet ruleSet, int i2, int i3, int i4, String str, int i5, String str2) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "createCFRule() modifiedRuleService=" + modifiedServiceToString(i) + ", reason=" + reasonCFToString(i2) + ", action=" + actionCFToString(i3) + ", service=" + serviceClassToString(i4) + ", number=" + MtkSuppServHelper.encryptString(str) + ", time=" + i5 + ", timeSlot=" + str2);
            ArrayList arrayList = new ArrayList();
            if ((i4 & 1) != 0) {
                arrayList.addAll(createCFRuleForService(ruleSet, i2, i3, 1, str, i5, str2, ""));
            } else {
                int i6 = 2;
                if ((i4 & 512) != 0) {
                    arrayList.addAll(createCFRuleForService(ruleSet, i2, i3, 512, str, i5, str2, MMTelSSTransport.mSSConfig.getMediaTagType() == 2 ? "_VIDEO" : ""));
                } else if (i4 == 0) {
                    int[] iArrServiceNeedToCreate = serviceNeedToCreate(i);
                    int i7 = 0;
                    while (i7 < iArrServiceNeedToCreate.length) {
                        String str3 = "";
                        if (iArrServiceNeedToCreate[i7] == 512 && MMTelSSTransport.mSSConfig.getMediaTagType() == i6) {
                            str3 = "_VIDEO";
                        }
                        arrayList.addAll(createCFRuleForService(ruleSet, i2, i3, iArrServiceNeedToCreate[i7], str, i5, str2, str3));
                        i7++;
                        iArrServiceNeedToCreate = iArrServiceNeedToCreate;
                        i6 = i6;
                    }
                }
            }
            return arrayList;
        }

        public List<Rule> createCFRuleForService(RuleSet ruleSet, int i, int i2, int i3, String str, int i4, String str2, String str3) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "createCFRuleForService() reason=" + reasonCFToString(i) + ", action=" + actionCFToString(i2) + ", service=" + serviceClassToString(i3) + ", number=" + MtkSuppServHelper.encryptString(str) + ", time=" + i4 + ", timeSlot=" + str2);
            ArrayList arrayList = new ArrayList();
            StringBuilder sb = new StringBuilder();
            sb.append(getRuleId(i));
            sb.append(str3);
            Rule ruleCreateNewRule = ruleSet.createNewRule(sb.toString());
            Conditions conditionsCreateConditions = ruleCreateNewRule.createConditions();
            Actions actionsCreateActions = ruleCreateNewRule.createActions();
            setForwardTo(actionsCreateActions, str);
            if (i == 1) {
                conditionsCreateConditions.addBusy();
            } else if (i == 2) {
                conditionsCreateConditions.addNoAnswer();
                if (MMTelSSTransport.mSSConfig.isNoReplyTimeInsideCFAction() && i4 > 0) {
                    actionsCreateActions.setNoReplyTimer(i4);
                }
            } else if (i == 3) {
                conditionsCreateConditions.addNotReachable();
            } else if (i == 6) {
                conditionsCreateConditions.addNotRegistered();
            }
            setMedia(conditionsCreateConditions, i3);
            if (MMTelSSTransport.mSSConfig.isSupportTimeSlot() && str2 != null) {
                conditionsCreateConditions.addTime(str2);
            }
            arrayList.add(ruleCreateNewRule);
            return arrayList;
        }

        public int getCB(SimservType simservType, String str, int i, int i2) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "getCB() facility=" + str + ", service=" + serviceClassToString(i) + ", phoneId=" + i2 + ", cb=" + simservType);
            int i3 = 0;
            List<Rule> rules = null;
            int cBType = getCBType(str);
            if (cBType == 1) {
                rules = ((OutgoingCommunicationBarring) simservType).getRuleSet().getRules();
            } else if (cBType == 2) {
                rules = ((IncomingCommunicationBarring) simservType).getRuleSet().getRules();
            } else {
                Rlog.d(MMTelSSTransport.LOG_TAG, "getCB() not support facility=" + str + ", cbType=" + cbTypeToString(cBType));
            }
            if (rules != null) {
                for (Rule rule : rules) {
                    Conditions conditions = rule.getConditions();
                    Actions actions = rule.getActions();
                    if (getCBFacility(cBType, conditions).equals(str) && isRuleMatchServiceClass(rule, i) != 0) {
                        boolean z = false;
                        if (actions != null && !actions.isAllow() && (conditions == null || !conditions.comprehendRuleDeactivated())) {
                            i3 |= i;
                            z = true;
                        }
                        StringBuilder sb = new StringBuilder();
                        sb.append("getCB() found rule: ");
                        sb.append(rule.mId);
                        sb.append(", facility=");
                        sb.append(str);
                        sb.append(", service=");
                        sb.append(serviceClassToString(i));
                        sb.append(", status=");
                        sb.append(z ? "Enable" : "Disable");
                        sb.append(", result=");
                        sb.append(i3);
                        Rlog.d(MMTelSSTransport.LOG_TAG, sb.toString());
                    }
                }
            }
            return i3;
        }

        public String getCBFacility(int i, Conditions conditions) {
            String str;
            String str2;
            if (i == 1) {
                if (conditions == null) {
                    str = "AO";
                } else if (conditions.comprehendInternational()) {
                    str = "OI";
                } else {
                    str = conditions.comprehendInternationalExHc() ? "OX" : "AO";
                }
            } else if (i == 2) {
                str = (conditions != null && conditions.comprehendRoaming()) ? "IR" : "AI";
            } else {
                str = "ERR";
            }
            StringBuilder sb = new StringBuilder();
            sb.append("getCBFacility() ");
            sb.append(str);
            sb.append(": cbType=");
            sb.append(cbTypeToString(i));
            if (conditions == null) {
                str2 = ", cond=null";
            } else {
                str2 = ", OCB: international=" + conditions.comprehendInternational() + ",internationalExHc=" + conditions.comprehendInternationalExHc() + " | ICB roaming=" + conditions.comprehendRoaming();
            }
            sb.append(str2);
            Rlog.d(MMTelSSTransport.LOG_TAG, sb.toString());
            return str;
        }

        public int getCBType(String str) {
            if (str.equals("AO") || str.equals("OI") || str.equals("OX")) {
                return 1;
            }
            if (str.equals("AI") || str.equals("IR")) {
                return 2;
            }
            if (str.equals("AG")) {
                return 3;
            }
            if (str.equals("AC")) {
                return 4;
            }
            return str.equals("AB") ? 5 : 0;
        }

        public List<MtkCallForwardInfo> getCFInfo(CommunicationDiversion communicationDiversion, int i, int i2, int i3) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "getCFInfo() reason=" + reasonCFToString(i2) + ", action=" + actionCFToString(i) + ", service=" + serviceClassToString(i3));
            boolean z = false;
            ArrayList arrayList = new ArrayList();
            List<Rule> rules = communicationDiversion.getRuleSet().getRules();
            long[] jArrConvertToLocalTime = null;
            if (rules != null) {
                for (Rule rule : rules) {
                    if (getCFType(rule.getConditions()) == i2 && isRuleMatchServiceClass(rule, i3) != 0) {
                        int i4 = rule.getConditions().comprehendRuleDeactivated() ? 0 : 1;
                        String strConvertUriToNumber = rule.getActions().getFowardTo() != null ? convertUriToNumber(rule.getActions().getFowardTo().getTarget()) : null;
                        if (i4 == 1) {
                            jArrConvertToLocalTime = convertToLocalTime(rule.getConditions().comprehendTime());
                        }
                        MtkCallForwardInfo mtkCallForwardInfo = new MtkCallForwardInfo();
                        mtkCallForwardInfo.status = i4;
                        mtkCallForwardInfo.reason = i2;
                        mtkCallForwardInfo.serviceClass = i3;
                        mtkCallForwardInfo.toa = 0;
                        mtkCallForwardInfo.number = strConvertUriToNumber;
                        mtkCallForwardInfo.timeSeconds = communicationDiversion.getNoReplyTimer();
                        mtkCallForwardInfo.timeSlot = jArrConvertToLocalTime;
                        arrayList.add(mtkCallForwardInfo);
                        StringBuilder sb = new StringBuilder();
                        sb.append("getCFInfo() found rule: ");
                        sb.append(rule.mId);
                        sb.append(", reason=");
                        sb.append(reasonCFToString(i2));
                        sb.append(", service=");
                        sb.append(serviceClassToString(i3));
                        sb.append(", status=");
                        sb.append(i4 == 1 ? "Enable" : "Disable");
                        sb.append(", number=");
                        sb.append(MtkSuppServHelper.encryptString(strConvertUriToNumber));
                        sb.append(", time=");
                        sb.append(mtkCallForwardInfo.timeSeconds);
                        sb.append(", timeSlot=");
                        sb.append(jArrConvertToLocalTime);
                        Rlog.d(MMTelSSTransport.LOG_TAG, sb.toString());
                        z = true;
                    }
                }
            }
            if (!z) {
                MtkCallForwardInfo mtkCallForwardInfo2 = new MtkCallForwardInfo();
                mtkCallForwardInfo2.status = 0;
                mtkCallForwardInfo2.reason = i2;
                mtkCallForwardInfo2.serviceClass = i3;
                mtkCallForwardInfo2.toa = 0;
                mtkCallForwardInfo2.number = null;
                mtkCallForwardInfo2.timeSeconds = communicationDiversion.getNoReplyTimer();
                mtkCallForwardInfo2.timeSlot = null;
                arrayList.add(mtkCallForwardInfo2);
                Rlog.d(MMTelSSTransport.LOG_TAG, "getCFInfo() not found rule, reason=" + reasonCFToString(i2) + ", service=" + serviceClassToString(i3));
            }
            return arrayList;
        }

        public List<MtkCallForwardInfo> getCFInfoList(CommunicationDiversion communicationDiversion, int i, int i2, int i3) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "getCFInfoList() reason=" + reasonCFToString(i2) + ", action=" + actionCFToString(i) + ", service=" + serviceClassToString(i3));
            ArrayList arrayList = new ArrayList();
            if (i3 == 0) {
                arrayList.addAll(getCFInfo(communicationDiversion, i, i2, 1));
                arrayList.addAll(getCFInfo(communicationDiversion, i, i2, 512));
            } else {
                arrayList.addAll(getCFInfo(communicationDiversion, i, i2, i3));
            }
            return arrayList;
        }

        public int getCFType(Conditions conditions) {
            String str;
            StringBuilder sb = new StringBuilder();
            sb.append("getCFType() ");
            if (conditions == null) {
                str = "cond=null";
            } else {
                str = "Busy=" + conditions.comprehendBusy() + ",NoAnswer=" + conditions.comprehendNoAnswer() + ",NotReachable=" + conditions.comprehendNotReachable() + ",NotRegistered=" + conditions.comprehendNotRegistered();
            }
            sb.append(str);
            Rlog.d(MMTelSSTransport.LOG_TAG, sb.toString());
            if (conditions == null) {
                return 0;
            }
            if (conditions.comprehendBusy()) {
                return 1;
            }
            if (conditions.comprehendNoAnswer()) {
                return 2;
            }
            if (conditions.comprehendNotReachable()) {
                return 3;
            }
            return conditions.comprehendNotRegistered() ? 6 : 0;
        }

        public SimservType getCache(int i, int i2) throws Exception {
            boolean z = true;
            long jCurrentTimeMillis = System.currentTimeMillis();
            Rlog.d(MMTelSSTransport.LOG_TAG, "getCache(): " + cacheIdxToString(i) + " phoneId=" + i2 + ", cachePhoneId=" + MMTelSSTransport.this.mCachePhoneId[i] + ", curTime=" + jCurrentTimeMillis + ", lastQuery=" + MMTelSSTransport.this.mLastQueried[i] + ", mCacheSimserv=" + MMTelSSTransport.this.mCacheSimserv[i]);
            Long lValueOf = Long.valueOf(MMTelSSTransport.mSSConfig.getCacheValidTime());
            if (i2 != MMTelSSTransport.this.mCachePhoneId[i] || MMTelSSTransport.this.mCacheSimserv[i] == null || jCurrentTimeMillis - MMTelSSTransport.this.mLastQueried[i] > lValueOf.longValue()) {
                z = false;
                switch (i) {
                    case 0:
                        MMTelSSTransport.this.mCacheSimserv[i] = MMTelSSTransport.mSimservs.getCommunicationDiversion(true, MMTelSSTransport.this.mNetwork);
                        break;
                    case 1:
                        MMTelSSTransport.this.mCacheSimserv[i] = MMTelSSTransport.mSimservs.getOutgoingCommunicationBarring(true, MMTelSSTransport.this.mNetwork);
                        break;
                    case 2:
                        MMTelSSTransport.this.mCacheSimserv[i] = MMTelSSTransport.mSimservs.getIncomingCommunicationBarring(true, MMTelSSTransport.this.mNetwork);
                        break;
                    case XcapException.NO_HTTP_RESPONSE_EXCEPTION /* 3 */:
                        MMTelSSTransport.this.mCacheSimserv[i] = MMTelSSTransport.mSimservs.getCommunicationWaiting(true, MMTelSSTransport.this.mNetwork);
                        break;
                    case XcapException.HTTP_RECOVERABL_EEXCEPTION /* 4 */:
                        MMTelSSTransport.this.mCacheSimserv[i] = MMTelSSTransport.mSimservs.getOriginatingIdentityPresentation(true, MMTelSSTransport.this.mNetwork);
                        break;
                    case XcapException.MALFORMED_CHALLENGE_EXCEPTION /* 5 */:
                        MMTelSSTransport.this.mCacheSimserv[i] = MMTelSSTransport.mSimservs.getOriginatingIdentityPresentationRestriction(true, MMTelSSTransport.this.mNetwork);
                        break;
                    case 6:
                        MMTelSSTransport.this.mCacheSimserv[i] = MMTelSSTransport.mSimservs.getTerminatingIdentityPresentation(true, MMTelSSTransport.this.mNetwork);
                        break;
                    case 7:
                        MMTelSSTransport.this.mCacheSimserv[i] = MMTelSSTransport.mSimservs.getTerminatingIdentityPresentationRestriction(true, MMTelSSTransport.this.mNetwork);
                        break;
                }
                MMTelSSTransport.this.mCachePhoneId[i] = i2;
                MMTelSSTransport.this.mLastQueried[i] = jCurrentTimeMillis;
                Rlog.d(MMTelSSTransport.LOG_TAG, "getCache(): new Cache phoneId=" + i2 + ", curTime=" + jCurrentTimeMillis + ", mCacheSimserv=" + MMTelSSTransport.this.mCacheSimserv[i]);
            }
            if (z) {
                updateNetwork(i);
            }
            return MMTelSSTransport.this.mCacheSimserv[i];
        }

        public String getMediaType(int i) {
            if ((i & 1) != 0) {
                return "audio";
            }
            return (i & 512) != 0 ? "video" : "";
        }

        public List<Rule> getRuleForSetCB(SimservType simservType, String str, int i, int i2, int i3) {
            boolean z;
            int i4;
            Rlog.d(MMTelSSTransport.LOG_TAG, "getRuleForSetCB() facility=" + str + ", service=" + serviceClassToString(i) + ", lockState=" + i2 + ", phoneId=" + i3);
            ArrayList arrayList = new ArrayList();
            RuleSet ruleSet = getCBType(str) == 1 ? ((OutgoingCommunicationBarring) simservType).getRuleSet() : getCBType(str) == 2 ? ((IncomingCommunicationBarring) simservType).getRuleSet() : null;
            boolean z2 = false;
            List<Rule> rules = ruleSet == null ? null : ruleSet.getRules();
            if (rules != null) {
                int iModifyCBRule = 0;
                for (Rule rule : rules) {
                    Conditions conditions = rule.getConditions();
                    rule.getActions();
                    if (getCBFacility(getCBType(str), conditions).equals(str)) {
                        ArrayList arrayList2 = new ArrayList();
                        iModifyCBRule |= modifyCBRule(arrayList2, rule, str, i, i2);
                        arrayList.addAll(arrayList2);
                        z2 = true;
                    }
                }
                z = z2;
                i4 = iModifyCBRule;
            } else {
                z = false;
                i4 = 0;
            }
            if (i2 == 1 && (!z || i4 == 0 || (i == 0 && (i4 == 1 || i4 == 2)))) {
                arrayList.addAll(createCBRule(i4, ruleSet, str, i, i2));
            }
            return arrayList;
        }

        public List<Rule> getRuleForSetCF(CommunicationDiversion communicationDiversion, int i, int i2, int i3, String str, int i4, String str2) {
            ArrayList arrayList;
            int i5;
            List<Rule> list;
            int i6;
            String str3;
            MMTelSSTransmitter mMTelSSTransmitter = this;
            int i7 = i;
            String str4 = "getRuleForSetCF() reason=" + mMTelSSTransmitter.reasonCFToString(i7) + ", action=" + mMTelSSTransmitter.actionCFToString(i2) + ", service=" + mMTelSSTransmitter.serviceClassToString(i3) + ", number=" + MtkSuppServHelper.encryptString(str) + ", time=" + i4 + ", timeSlot=" + str2;
            String str5 = MMTelSSTransport.LOG_TAG;
            Rlog.d(MMTelSSTransport.LOG_TAG, str4);
            ArrayList arrayList2 = new ArrayList();
            RuleSet ruleSet = communicationDiversion.getRuleSet();
            boolean z = false;
            int iModifyCFRule = 0;
            List<Rule> rules = ruleSet.getRules();
            if (rules == null) {
                arrayList = arrayList2;
                i5 = 0;
            } else if (MMTelSSTransport.mSSConfig.getMediaTagType() == 2) {
                ArrayList arrayList3 = new ArrayList();
                arrayList = arrayList2;
                int iModifyCFRuleForSeperateMedia = 0 | modifyCFRuleForSeperateMedia(arrayList3, ruleSet, i, i2, i3, str, i4, str2);
                arrayList.addAll(arrayList3);
                z = arrayList3.size() > 0;
                i5 = iModifyCFRuleForSeperateMedia;
            } else {
                List<Rule> list2 = rules;
                arrayList = arrayList2;
                int i8 = 0;
                while (i8 < list2.size()) {
                    List<Rule> list3 = list2;
                    Rule rule = list3.get(i8);
                    if (mMTelSSTransmitter.getCFType(rule.getConditions()) == i7) {
                        z = true;
                        ArrayList arrayList4 = new ArrayList();
                        list = list3;
                        i6 = i8;
                        str3 = str5;
                        iModifyCFRule |= modifyCFRule(arrayList4, ruleSet, rule, i, i2, i3, str, i4, str2);
                        if (rule.getActions().getFowardTo().mIsValidTargetNumber || MMTelSSTransport.mSSConfig.isSupportPutNonUriNumber()) {
                            arrayList.addAll(arrayList4);
                        } else {
                            Rlog.d(str3, "getRuleForSetCF() skip rule = " + rule.toXmlString());
                        }
                    } else {
                        list = list3;
                        i6 = i8;
                        str3 = str5;
                    }
                    i8 = i6 + 1;
                    mMTelSSTransmitter = this;
                    str5 = str3;
                    list2 = list;
                    i7 = i;
                }
                i5 = iModifyCFRule;
            }
            if ((i2 == 1 || i2 == 3) && (!z || i5 == 0 || (i3 == 0 && (i5 == 1 || i5 == 2)))) {
                arrayList.addAll(createCFRule(i5, ruleSet, i, i2, i3, str, i4, str2));
            }
            return arrayList;
        }

        public String getRuleId(int i) {
            Map ruleId = MMTelSSTransport.mSSConfig.getRuleId();
            if (i == 0) {
                return (String) ruleId.get("CFU");
            }
            if (i == 1) {
                return (String) ruleId.get("CFB");
            }
            if (i == 2) {
                return (String) ruleId.get("CFNRy");
            }
            if (i != 3) {
                return i != 6 ? "None" : (String) ruleId.get("CFNL");
            }
            return (String) ruleId.get("CFNRc");
        }

        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r18v0, types: [com.mediatek.ims.legacy.ss.MMTelSSTransport$MMTelSSTransmitter] */
        /* JADX WARN: Type inference failed for: r9v11 */
        /* JADX WARN: Type inference failed for: r9v12 */
        /* JADX WARN: Type inference failed for: r9v13 */
        /* JADX WARN: Type inference failed for: r9v14 */
        /* JADX WARN: Type inference failed for: r9v17 */
        /* JADX WARN: Type inference failed for: r9v18 */
        /* JADX WARN: Type inference failed for: r9v2, types: [java.lang.String] */
        /* JADX WARN: Type inference failed for: r9v3 */
        /* JADX WARN: Type inference failed for: r9v4 */
        /* JADX WARN: Type inference failed for: r9v5 */
        /* JADX WARN: Type inference failed for: r9v6 */
        /* JADX WARN: Type inference failed for: r9v7 */
        /* JADX WARN: Type inference failed for: r9v8 */
        /* JADX WARN: Type inference failed for: r9v9, types: [int] */
        public void handleGetCB(MMTelSSRequest mMTelSSRequest) {
            char c;
            mMTelSSRequest.mp.setDataPosition(0);
            int i = mMTelSSRequest.mp.readInt();
            mMTelSSRequest.mp.readInt();
            String string = mMTelSSRequest.mp.readString();
            int i2 = mMTelSSRequest.mp.readInt();
            int i3 = mMTelSSRequest.mp.readInt();
            StringBuilder sb = new StringBuilder();
            sb.append("Read from parcel: ");
            sb.append(MMTelSSTransport.requestToString(i));
            ?? r9 = ", facility=";
            sb.append(", facility=");
            sb.append(string);
            sb.append(", serviceClass=");
            sb.append(i2);
            sb.append(", phoneId=");
            sb.append(i3);
            Rlog.d(MMTelSSTransport.LOG_TAG, sb.toString());
            if (!MMTelSSUtils.isPreferXcap(i3, MMTelSSTransport.this.mContext) || !MMTelSSTransport.this.updateNetworkInitSimServ(i3)) {
                triggerCSFB(mMTelSSRequest.mResult);
                return;
            }
            Exception excFromRilErrno = null;
            int iConvertServiceClass = convertServiceClass(i2);
            int[] iArr = {0};
            int cBType = getCBType(string);
            if (cBType == 1) {
                c = 1;
            } else {
                c = cBType == 2 ? (char) 2 : '\b';
            }
            char c2 = c;
            Rlog.d(MMTelSSTransport.LOG_TAG, "handleGetCB() " + MMTelSSTransport.requestToString(i) + ", facility=" + string + ", cbType=" + cbTypeToString(cBType) + ", serviceClass=" + serviceClassToString(iConvertServiceClass) + ", phoneId=" + i3);
            try {
                if (iConvertServiceClass == 0) {
                    try {
                        char c3 = c2;
                        iArr[0] = iArr[0] | getCB(getCache(c3, i3), string, 1, i3);
                        iArr[0] = iArr[0] | getCB(getCache(c3, i3), string, 512, i3);
                        r9 = c3;
                    } catch (XcapException e) {
                        e = e;
                        r9 = c2;
                        e.printStackTrace();
                        excFromRilErrno = reportXcapException(e);
                    } catch (UnknownHostException e2) {
                        e = e2;
                        r9 = c2;
                        excFromRilErrno = e;
                    } catch (Exception e3) {
                        e = e3;
                        r9 = c2;
                        e.printStackTrace();
                        excFromRilErrno = CommandException.fromRilErrno(2);
                    }
                } else {
                    char c4 = c2;
                    iArr[0] = iArr[0] | getCB(getCache(c4 == true ? 1 : 0, i3), string, iConvertServiceClass, i3);
                    r9 = c4;
                }
            } catch (XcapException e4) {
                e = e4;
            } catch (UnknownHostException e5) {
                e = e5;
            } catch (Exception e6) {
                e = e6;
            }
            if (excFromRilErrno != null) {
                clearCache(r9);
            }
            if (mMTelSSRequest.mResult != null) {
                AsyncResult.forMessage(mMTelSSRequest.mResult, iArr, excFromRilErrno);
                mMTelSSRequest.mResult.sendToTarget();
            }
            if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
            }
        }

        public void handleGetCF(int i, int i2, int i3, int i4, int i5, String str, int i6, boolean z, Message message) {
            if (!MMTelSSUtils.isPreferXcap(i6, MMTelSSTransport.this.mContext) || !MMTelSSTransport.this.updateNetworkInitSimServ(i6)) {
                triggerCSFB(message);
                return;
            }
            Exception excFromRilErrno = null;
            MtkCallForwardInfo[] mtkCallForwardInfoArr = null;
            int iConvertServiceClass = convertServiceClass(i5);
            Rlog.d(MMTelSSTransport.LOG_TAG, "handleGetCF() " + MMTelSSTransport.requestToString(i) + ", action=" + actionCFToString(i3) + ", reason=" + reasonCFToString(i4) + ", serviceClass=" + serviceClassToString(iConvertServiceClass) + ", number=" + MtkSuppServHelper.encryptString(str) + ", phoneId=" + i6 + ", isGetTimeSlot=" + z);
            try {
                CommunicationDiversion communicationDiversion = (CommunicationDiversion) getCache(0, i6);
                if (isEmptyCF(communicationDiversion)) {
                    clearCache(0);
                    mtkCallForwardInfoArr = new MtkCallForwardInfo[0];
                } else {
                    ArrayList<MtkCallForwardInfo> arrayList = new ArrayList<>();
                    try {
                        if (i4 == 5) {
                            for (int i7 = 0; i7 < 4; i7++) {
                                arrayList.addAll(getCFInfoList(communicationDiversion, i3, MMTelSSTransport.CF_REASON[i7], iConvertServiceClass));
                            }
                        } else if (i4 == 4) {
                            for (int i8 = 0; i8 < 5; i8++) {
                                arrayList.addAll(getCFInfoList(communicationDiversion, i3, MMTelSSTransport.CF_REASON[i8], iConvertServiceClass));
                            }
                        } else {
                            arrayList.addAll(getCFInfoList(communicationDiversion, i3, i4, iConvertServiceClass));
                        }
                        removeDuplicateCF(arrayList);
                        mtkCallForwardInfoArr = (MtkCallForwardInfo[]) arrayList.toArray(new MtkCallForwardInfo[arrayList.size()]);
                    } catch (XcapException e) {
                        e = e;
                        e.printStackTrace();
                        excFromRilErrno = reportXcapException(e);
                    } catch (UnknownHostException e2) {
                        e = e2;
                        excFromRilErrno = e;
                    } catch (Exception e3) {
                        e = e3;
                        e.printStackTrace();
                        excFromRilErrno = CommandException.fromRilErrno(2);
                    }
                }
            } catch (XcapException e4) {
                e = e4;
            } catch (UnknownHostException e5) {
                e = e5;
            } catch (Exception e6) {
                e = e6;
            }
            if (excFromRilErrno != null) {
                clearCache(0);
            }
            if (message != null) {
                AsyncResult.forMessage(message, convertCFInfo(z, mtkCallForwardInfoArr), excFromRilErrno);
                message.sendToTarget();
            }
            if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
            }
        }

        public void handleGetCF(MMTelSSRequest mMTelSSRequest) {
            mMTelSSRequest.mp.setDataPosition(0);
            int i = mMTelSSRequest.mp.readInt();
            int i2 = mMTelSSRequest.mp.readInt();
            int i3 = mMTelSSRequest.mp.readInt();
            int i4 = mMTelSSRequest.mp.readInt();
            int i5 = mMTelSSRequest.mp.readInt();
            String string = mMTelSSRequest.mp.readString();
            int i6 = mMTelSSRequest.mp.readInt();
            Message message = mMTelSSRequest.mResult;
            Rlog.d(MMTelSSTransport.LOG_TAG, "Read from parcel: " + MMTelSSTransport.requestToString(i) + ", action=" + i3 + ", reason=" + i4 + ", serviceClass=" + i5 + ", number=" + MtkSuppServHelper.encryptString(string) + ", phoneId=" + i6 + ", msg=" + message);
            handleGetCF(i, i2, i3, i4, i5, string, i6, false, message);
        }

        public void handleGetCFInTimeSlot(MMTelSSRequest mMTelSSRequest) {
            mMTelSSRequest.mp.setDataPosition(0);
            int i = mMTelSSRequest.mp.readInt();
            int i2 = mMTelSSRequest.mp.readInt();
            int i3 = mMTelSSRequest.mp.readInt();
            int i4 = mMTelSSRequest.mp.readInt();
            int i5 = mMTelSSRequest.mp.readInt();
            int i6 = mMTelSSRequest.mp.readInt();
            Message message = mMTelSSRequest.mResult;
            Rlog.d(MMTelSSTransport.LOG_TAG, "Read from parcel: " + MMTelSSTransport.requestToString(i) + ", action=" + i3 + ", reason=" + i4 + ", serviceClass=" + i5 + ", phoneId=" + i6 + ", msg=" + message);
            handleGetCF(i, i2, i3, i4, i5, null, i6, true, message);
        }

        public void handleGetCW(MMTelSSRequest mMTelSSRequest) {
            mMTelSSRequest.mp.setDataPosition(0);
            int i = mMTelSSRequest.mp.readInt();
            mMTelSSRequest.mp.readInt();
            int i2 = mMTelSSRequest.mp.readInt();
            int i3 = mMTelSSRequest.mp.readInt();
            Rlog.d(MMTelSSTransport.LOG_TAG, "Read from parcel: " + MMTelSSTransport.requestToString(i) + ", serviceClass=" + i2 + ", phoneId=" + i3);
            if (!MMTelSSUtils.isPreferXcap(i3, MMTelSSTransport.this.mContext) || !MMTelSSTransport.this.updateNetworkInitSimServ(i3)) {
                triggerCSFB(mMTelSSRequest.mResult);
                return;
            }
            Exception excFromRilErrno = null;
            int[] iArr = new int[2];
            int iConvertServiceClass = convertServiceClass(i2);
            Rlog.d(MMTelSSTransport.LOG_TAG, "handleGetCW() " + MMTelSSTransport.requestToString(i) + ", serviceClass=" + serviceClassToString(iConvertServiceClass) + ", phoneId=" + i3);
            try {
                iArr[0] = ((CommunicationWaiting) getCache(3, i3)).isActive() ? 1 : 0;
                Rlog.d(MMTelSSTransport.LOG_TAG, "handleGetCW(): isActive = " + iArr[0]);
            } catch (XcapException e) {
                e.printStackTrace();
                excFromRilErrno = reportXcapException(e);
            } catch (UnknownHostException e2) {
                excFromRilErrno = e2;
            } catch (Exception e3) {
                e3.printStackTrace();
                excFromRilErrno = CommandException.fromRilErrno(2);
            }
            if (excFromRilErrno != null) {
                clearCache(3);
            }
            if (iArr[0] == 1) {
                if (iConvertServiceClass == 0) {
                    iArr[1] = iArr[1] | 1;
                    iArr[1] = 512 | iArr[1];
                } else {
                    iArr[1] = iArr[1] | iConvertServiceClass;
                    if (iConvertServiceClass == 512) {
                        iArr[1] = iArr[1] | 1;
                    }
                }
                Rlog.d(MMTelSSTransport.LOG_TAG, "handleGetCW(): service=" + serviceClassToString(iArr[1]));
            }
            if (excFromRilErrno != null && OperatorUtils.isMatched(OperatorUtils.OPID.OP156, i3)) {
                Rlog.d(MMTelSSTransport.LOG_TAG, "handleGetCW() OP156 not support, just CSFB");
                excFromRilErrno = new UnknownHostException();
            }
            if (mMTelSSRequest.mResult != null) {
                AsyncResult.forMessage(mMTelSSRequest.mResult, iArr, excFromRilErrno);
                mMTelSSRequest.mResult.sendToTarget();
            }
            if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
            }
        }

        public void handleGetIdentity(MMTelSSRequest mMTelSSRequest, int i) {
            mMTelSSRequest.mp.setDataPosition(0);
            int i2 = mMTelSSRequest.mp.readInt();
            mMTelSSRequest.mp.readInt();
            int i3 = mMTelSSRequest.mp.readInt();
            Rlog.d(MMTelSSTransport.LOG_TAG, "Read from parcel: " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", phoneId=" + i3);
            if (!MMTelSSUtils.isPreferXcap(i3, MMTelSSTransport.this.mContext) || !MMTelSSTransport.this.updateNetworkInitSimServ(i3)) {
                triggerCSFB(mMTelSSRequest.mResult);
                return;
            }
            CommandException commandExceptionFromRilErrno = null;
            int[] iArr = new int[2];
            Rlog.d(MMTelSSTransport.LOG_TAG, "handleGetIdentity() " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", phoneId=" + i3);
            int i4 = 1;
            try {
                if (i == 0) {
                    iArr[0] = 0;
                    if (!((OriginatingIdentityPresentation) getCache(identityToCacheId(i), i3)).isActive()) {
                        i4 = 0;
                    }
                    iArr[0] = i4;
                    Rlog.d(MMTelSSTransport.LOG_TAG, "handleGetIdentity() " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", enable=" + iArr[0]);
                } else if (i == 1) {
                    iArr[0] = 0;
                    iArr[1] = 2;
                    boolean zIsDefaultPresentationRestricted = ((OriginatingIdentityPresentationRestriction) getCache(identityToCacheId(i), i3)).isDefaultPresentationRestricted();
                    if (zIsDefaultPresentationRestricted) {
                        iArr[0] = 1;
                        iArr[1] = 3;
                    } else {
                        iArr[0] = 2;
                        iArr[1] = 4;
                    }
                    Rlog.d(MMTelSSTransport.LOG_TAG, "handleGetIdentity() " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", restricted=" + zIsDefaultPresentationRestricted);
                } else if (i == 2) {
                    iArr[0] = 0;
                    iArr[1] = 0;
                    int i5 = ((TerminatingIdentityPresentation) getCache(identityToCacheId(i), i3)).isActive() ? 1 : 0;
                    iArr[1] = i5;
                    iArr[0] = i5;
                    Rlog.d(MMTelSSTransport.LOG_TAG, "handleGetIdentity() " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", enable=" + iArr[0]);
                } else if (i == 3) {
                    iArr[0] = 0;
                    if (!((TerminatingIdentityPresentationRestriction) getCache(identityToCacheId(i), i3)).isActive()) {
                        i4 = 0;
                    }
                    iArr[0] = i4;
                    Rlog.d(MMTelSSTransport.LOG_TAG, "handleGetIdentity() " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", enable=" + iArr[0]);
                }
            } catch (XcapException e) {
                e.printStackTrace();
                commandExceptionFromRilErrno = reportXcapException(e);
            } catch (UnknownHostException e2) {
                e2.printStackTrace();
                commandExceptionFromRilErrno = e2;
            } catch (Exception e3) {
                e3.printStackTrace();
                commandExceptionFromRilErrno = CommandException.fromRilErrno(2);
            }
            if (commandExceptionFromRilErrno != null) {
                clearCache(identityToCacheId(i));
            }
            if (mMTelSSRequest.mResult != null) {
                AsyncResult.forMessage(mMTelSSRequest.mResult, iArr, commandExceptionFromRilErrno);
                mMTelSSRequest.mResult.sendToTarget();
            }
            if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
            }
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            MMTelSSRequest mMTelSSRequest = (MMTelSSRequest) message.obj;
            int i = message.what;
            if (i != 1) {
                if (i != 2) {
                    return;
                }
                synchronized (MMTelSSTransport.this.mWakeLock) {
                    if (MMTelSSTransport.this.mWakeLock.isHeld()) {
                        synchronized (MMTelSSTransport.this.mRequestsList) {
                            int size = MMTelSSTransport.this.mRequestsList.size();
                            Rlog.d(MMTelSSTransport.LOG_TAG, "WAKE_LOCK_TIMEOUT  mReqPending=" + MMTelSSTransport.this.mRequestMessagesPending + " mRequestList=" + size);
                            for (int i2 = 0; i2 < size; i2++) {
                                MMTelSSRequest mMTelSSRequest2 = MMTelSSTransport.this.mRequestsList.get(i2);
                                Rlog.d(MMTelSSTransport.LOG_TAG, i2 + ": [" + mMTelSSRequest2.mSerial + "] " + MMTelSSTransport.requestToString(mMTelSSRequest2.mRequest));
                            }
                        }
                        MMTelSSTransport.this.mWakeLock.release();
                    }
                }
                return;
            }
            boolean z = false;
            Rlog.d(MMTelSSTransport.LOG_TAG, "handleMessage(): EVENT_SEND:mRequestMessagesPending = " + MMTelSSTransport.this.mRequestMessagesPending + ", mRequestsList.size() = " + MMTelSSTransport.this.mRequestsList.size());
            try {
                try {
                    synchronized (MMTelSSTransport.this.mRequestsList) {
                        MMTelSSTransport.this.mRequestsList.add(mMTelSSRequest);
                    }
                    MMTelSSTransport.this.mRequestMessagesPending--;
                    z = true;
                    MMTelSSTransport.this.findAndRemoveRequestFromList(mMTelSSRequest.mSerial);
                    Rlog.d(MMTelSSTransport.LOG_TAG, "Receive MMTelSS Request:" + MMTelSSTransport.requestToString(mMTelSSRequest.mRequest));
                    switch (mMTelSSRequest.mRequest) {
                        case 1:
                            handleSetIdentity(mMTelSSRequest, 1);
                            break;
                        case 2:
                            handleGetIdentity(mMTelSSRequest, 1);
                            break;
                        case XcapException.NO_HTTP_RESPONSE_EXCEPTION /* 3 */:
                            handleGetIdentity(mMTelSSRequest, 0);
                            break;
                        case XcapException.HTTP_RECOVERABL_EEXCEPTION /* 4 */:
                            handleGetIdentity(mMTelSSRequest, 2);
                            break;
                        case XcapException.MALFORMED_CHALLENGE_EXCEPTION /* 5 */:
                            handleGetIdentity(mMTelSSRequest, 3);
                            break;
                        case 6:
                            handleSetCB(mMTelSSRequest);
                            break;
                        case 7:
                            handleGetCB(mMTelSSRequest);
                            break;
                        case 8:
                            handleSetCF(mMTelSSRequest);
                            break;
                        case 9:
                            handleGetCF(mMTelSSRequest);
                            break;
                        case 10:
                            handleSetCW(mMTelSSRequest);
                            break;
                        case 11:
                            handleGetCW(mMTelSSRequest);
                            break;
                        case 12:
                            handleSetIdentity(mMTelSSRequest, 0);
                            break;
                        case 13:
                            handleSetIdentity(mMTelSSRequest, 2);
                            break;
                        case 14:
                            handleSetIdentity(mMTelSSRequest, 3);
                            break;
                        case MMTelSSTransport.MMTELSS_REQ_SET_CF_TIME_SLOT /* 15 */:
                            handleSetCFInTimeSlot(mMTelSSRequest);
                            break;
                        case MMTelSSTransport.MMTELSS_REQ_GET_CF_TIME_SLOT /* 16 */:
                            handleGetCFInTimeSlot(mMTelSSRequest);
                            break;
                        default:
                            Rlog.d(MMTelSSTransport.LOG_TAG, "Invalid MMTelSS Request:" + mMTelSSRequest.mRequest);
                            throw new RuntimeException("Unrecognized MMTelSS Request: " + mMTelSSRequest.mRequest);
                    }
                } catch (RuntimeException e) {
                    Rlog.e(MMTelSSTransport.LOG_TAG, "Uncaught exception ", e);
                    MMTelSSRequest mMTelSSRequestFindAndRemoveRequestFromList = MMTelSSTransport.this.findAndRemoveRequestFromList(mMTelSSRequest.mSerial);
                    Rlog.d(MMTelSSTransport.LOG_TAG, "handleMessage(): RuntimeException:mRequestMessagesPending = " + MMTelSSTransport.this.mRequestMessagesPending + ", mRequestsList.size() = " + MMTelSSTransport.this.mRequestsList.size());
                    if (mMTelSSRequestFindAndRemoveRequestFromList != null || 0 == 0) {
                        mMTelSSRequest.onError(2, null);
                        mMTelSSRequest.release();
                    }
                }
                MMTelSSTransport.this.releaseWakeLockIfDone();
                if (!z) {
                    Rlog.d(MMTelSSTransport.LOG_TAG, "handleMessage(): !alreadySubtracted:mRequestMessagesPending = " + MMTelSSTransport.this.mRequestMessagesPending + ", mRequestsList.size() = " + MMTelSSTransport.this.mRequestsList.size());
                    MMTelSSTransport mMTelSSTransport = MMTelSSTransport.this;
                    mMTelSSTransport.mRequestMessagesPending = mMTelSSTransport.mRequestMessagesPending - 1;
                }
                if (mMTelSSRequest.mp != null) {
                    mMTelSSRequest.mp.recycle();
                    mMTelSSRequest.mp = null;
                }
                if (MMTelSSTransport.this.mRequestMessagesPending == 0 && MMTelSSTransport.this.mRequestsList.size() == 0) {
                    return;
                }
                Rlog.d(MMTelSSTransport.LOG_TAG, "handleMessage(): ERROR wakeLock:mRequestMessagesPending = " + MMTelSSTransport.this.mRequestMessagesPending + ", mRequestsList.size() = " + MMTelSSTransport.this.mRequestsList.size());
            } catch (Throwable th) {
                MMTelSSTransport.this.releaseWakeLockIfDone();
                throw th;
            }
        }

        /* JADX WARN: Code duplicated, block: B:102:0x02a3 A[Catch: Exception -> 0x0261, XcapException -> 0x0265, TryCatch #17 {XcapException -> 0x0265, Exception -> 0x0261, blocks: (B:92:0x027d, B:100:0x0291, B:102:0x02a3, B:103:0x02ac, B:84:0x0259, B:91:0x026c), top: B:165:0x0135 }] */
        /* JADX WARN: Code duplicated, block: B:103:0x02ac A[Catch: Exception -> 0x0261, XcapException -> 0x0265, TRY_LEAVE, TryCatch #17 {XcapException -> 0x0265, Exception -> 0x0261, blocks: (B:92:0x027d, B:100:0x0291, B:102:0x02a3, B:103:0x02ac, B:84:0x0259, B:91:0x026c), top: B:165:0x0135 }] */
        /* JADX WARN: Code duplicated, block: B:111:0x02be  */
        /* JADX WARN: Code duplicated, block: B:113:0x02c1 A[Catch: Exception -> 0x035d, XcapException -> 0x035f, TRY_ENTER, TryCatch #12 {XcapException -> 0x035f, Exception -> 0x035d, blocks: (B:113:0x02c1, B:115:0x02d3, B:116:0x02dc, B:120:0x02eb, B:126:0x0325, B:127:0x032d, B:128:0x0331, B:130:0x0337, B:121:0x02f3, B:122:0x02f7, B:124:0x02fd), top: B:174:0x0285 }] */
        /* JADX WARN: Code duplicated, block: B:115:0x02d3 A[Catch: Exception -> 0x035d, XcapException -> 0x035f, TryCatch #12 {XcapException -> 0x035f, Exception -> 0x035d, blocks: (B:113:0x02c1, B:115:0x02d3, B:116:0x02dc, B:120:0x02eb, B:126:0x0325, B:127:0x032d, B:128:0x0331, B:130:0x0337, B:121:0x02f3, B:122:0x02f7, B:124:0x02fd), top: B:174:0x0285 }] */
        /* JADX WARN: Code duplicated, block: B:116:0x02dc A[Catch: Exception -> 0x035d, XcapException -> 0x035f, TRY_LEAVE, TryCatch #12 {XcapException -> 0x035f, Exception -> 0x035d, blocks: (B:113:0x02c1, B:115:0x02d3, B:116:0x02dc, B:120:0x02eb, B:126:0x0325, B:127:0x032d, B:128:0x0331, B:130:0x0337, B:121:0x02f3, B:122:0x02f7, B:124:0x02fd), top: B:174:0x0285 }] */
        /* JADX WARN: Code duplicated, block: B:118:0x02e6  */
        /* JADX WARN: Code duplicated, block: B:120:0x02eb A[Catch: Exception -> 0x035d, XcapException -> 0x035f, TRY_ENTER, TryCatch #12 {XcapException -> 0x035f, Exception -> 0x035d, blocks: (B:113:0x02c1, B:115:0x02d3, B:116:0x02dc, B:120:0x02eb, B:126:0x0325, B:127:0x032d, B:128:0x0331, B:130:0x0337, B:121:0x02f3, B:122:0x02f7, B:124:0x02fd), top: B:174:0x0285 }] */
        /* JADX WARN: Code duplicated, block: B:121:0x02f3 A[Catch: Exception -> 0x035d, XcapException -> 0x035f, TryCatch #12 {XcapException -> 0x035f, Exception -> 0x035d, blocks: (B:113:0x02c1, B:115:0x02d3, B:116:0x02dc, B:120:0x02eb, B:126:0x0325, B:127:0x032d, B:128:0x0331, B:130:0x0337, B:121:0x02f3, B:122:0x02f7, B:124:0x02fd), top: B:174:0x0285 }] */
        /* JADX WARN: Code duplicated, block: B:124:0x02fd A[Catch: Exception -> 0x035d, XcapException -> 0x035f, LOOP:2: B:122:0x02f7->B:124:0x02fd, LOOP_END, TryCatch #12 {XcapException -> 0x035f, Exception -> 0x035d, blocks: (B:113:0x02c1, B:115:0x02d3, B:116:0x02dc, B:120:0x02eb, B:126:0x0325, B:127:0x032d, B:128:0x0331, B:130:0x0337, B:121:0x02f3, B:122:0x02f7, B:124:0x02fd), top: B:174:0x0285 }] */
        /* JADX WARN: Code duplicated, block: B:126:0x0325 A[Catch: Exception -> 0x035d, XcapException -> 0x035f, TryCatch #12 {XcapException -> 0x035f, Exception -> 0x035d, blocks: (B:113:0x02c1, B:115:0x02d3, B:116:0x02dc, B:120:0x02eb, B:126:0x0325, B:127:0x032d, B:128:0x0331, B:130:0x0337, B:121:0x02f3, B:122:0x02f7, B:124:0x02fd), top: B:174:0x0285 }] */
        /* JADX WARN: Code duplicated, block: B:127:0x032d A[Catch: Exception -> 0x035d, XcapException -> 0x035f, TryCatch #12 {XcapException -> 0x035f, Exception -> 0x035d, blocks: (B:113:0x02c1, B:115:0x02d3, B:116:0x02dc, B:120:0x02eb, B:126:0x0325, B:127:0x032d, B:128:0x0331, B:130:0x0337, B:121:0x02f3, B:122:0x02f7, B:124:0x02fd), top: B:174:0x0285 }] */
        /* JADX WARN: Code duplicated, block: B:130:0x0337 A[Catch: Exception -> 0x035d, XcapException -> 0x035f, LOOP:1: B:128:0x0331->B:130:0x0337, LOOP_END, TRY_LEAVE, TryCatch #12 {XcapException -> 0x035f, Exception -> 0x035d, blocks: (B:113:0x02c1, B:115:0x02d3, B:116:0x02dc, B:120:0x02eb, B:126:0x0325, B:127:0x032d, B:128:0x0331, B:130:0x0337, B:121:0x02f3, B:122:0x02f7, B:124:0x02fd), top: B:174:0x0285 }] */
        /* JADX WARN: Code duplicated, block: B:145:0x038b A[ADDED_TO_REGION] */
        /* JADX WARN: Code duplicated, block: B:153:0x03a0  */
        /* JADX WARN: Code duplicated, block: B:156:0x03a8  */
        /* JADX WARN: Code duplicated, block: B:159:0x03bb  */
        /* JADX WARN: Code duplicated, block: B:186:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:94:0x0287  */
        /* JADX WARN: Instruction removed from duplicated block: B:124:0x02fd, please report this as an issue */
        /* JADX WARN: Instruction removed from duplicated block: B:130:0x0337, please report this as an issue */
        /* JADX WARN: Multi-variable type inference failed */
        /* JADX WARN: Type inference failed for: r1v10 */
        /* JADX WARN: Type inference failed for: r1v11 */
        /* JADX WARN: Type inference failed for: r1v12 */
        /* JADX WARN: Type inference failed for: r1v13 */
        /* JADX WARN: Type inference failed for: r1v15 */
        /* JADX WARN: Type inference failed for: r1v16 */
        /* JADX WARN: Type inference failed for: r1v30 */
        /* JADX WARN: Type inference failed for: r1v31 */
        /* JADX WARN: Type inference failed for: r1v36, types: [boolean] */
        /* JADX WARN: Type inference failed for: r1v37 */
        /* JADX WARN: Type inference failed for: r1v43 */
        /* JADX WARN: Type inference failed for: r1v44 */
        /* JADX WARN: Type inference failed for: r1v46 */
        /* JADX WARN: Type inference failed for: r1v50 */
        /* JADX WARN: Type inference failed for: r1v51 */
        /* JADX WARN: Type inference failed for: r1v53 */
        /* JADX WARN: Type inference failed for: r1v54 */
        /* JADX WARN: Type inference failed for: r1v58 */
        /* JADX WARN: Type inference failed for: r1v59 */
        /* JADX WARN: Type inference failed for: r1v62, types: [int] */
        /* JADX WARN: Type inference failed for: r1v63, types: [int] */
        /* JADX WARN: Type inference failed for: r1v72 */
        /* JADX WARN: Type inference failed for: r1v73 */
        /* JADX WARN: Type inference failed for: r1v74 */
        /* JADX WARN: Type inference failed for: r1v75 */
        /* JADX WARN: Type inference failed for: r1v76 */
        /* JADX WARN: Type inference failed for: r1v77 */
        /* JADX WARN: Type inference failed for: r1v78 */
        /* JADX WARN: Type inference failed for: r1v79 */
        /* JADX WARN: Type inference failed for: r27v0, types: [com.mediatek.ims.legacy.ss.MMTelSSTransport$MMTelSSTransmitter] */
        public void handleSetCB(MMTelSSRequest mMTelSSRequest) {
            boolean zIsEmptyCB;
            SimservType simservType;
            ?? IsSaveWholeNode;
            ArrayList<Rule> arrayList;
            ArrayList<Rule> arrayList2;
            String str;
            int i;
            int i2;
            ArrayList arrayList3;
            Exception excFromRilErrno;
            ?? r1;
            mMTelSSRequest.mp.setDataPosition(0);
            int i3 = mMTelSSRequest.mp.readInt();
            mMTelSSRequest.mp.readInt();
            String string = mMTelSSRequest.mp.readString();
            int i4 = mMTelSSRequest.mp.readInt();
            int i5 = mMTelSSRequest.mp.readInt();
            int i6 = mMTelSSRequest.mp.readInt();
            String str2 = "Read from parcel: " + MMTelSSTransport.requestToString(i3) + ", facility=" + string + ", serviceClass=" + i5 + ", lockState=" + i4 + ", phoneId=" + i6;
            String str3 = MMTelSSTransport.LOG_TAG;
            Rlog.d(MMTelSSTransport.LOG_TAG, str2);
            if (!MMTelSSUtils.isPreferXcap(i6, MMTelSSTransport.this.mContext) || !MMTelSSTransport.this.updateNetworkInitSimServ(i6)) {
                triggerCSFB(mMTelSSRequest.mResult);
                return;
            }
            Exception excReportXcapException = null;
            int iConvertServiceClass = convertServiceClass(i5);
            int cBType = getCBType(string);
            Rlog.d(MMTelSSTransport.LOG_TAG, "handleSetCB() " + MMTelSSTransport.requestToString(i3) + ", facility=" + string + ", cbType=" + cbTypeToString(cBType) + ", serviceClass=" + serviceClassToString(iConvertServiceClass) + ", lockState=" + i4 + ", phoneId=" + i6);
            int i7 = 4;
            int i8 = 3;
            int i9 = 5;
            char c = 2;
            boolean z = true;
            if (i4 != 0 && (cBType == 5 || cBType == 3 || cBType == 4)) {
                try {
                    throw new Exception();
                } catch (XcapException e) {
                    e = e;
                    i7 = cBType;
                    IsSaveWholeNode = 2;
                    i3 = 3;
                    e.printStackTrace();
                    excReportXcapException = reportXcapException(e);
                    excFromRilErrno = excReportXcapException;
                    r1 = IsSaveWholeNode;
                    if (i7 != 1) {
                        clearCache(1);
                    } else {
                        clearCache(1);
                    }
                    if (mMTelSSRequest.mResult != null) {
                        AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                        mMTelSSRequest.mResult.sendToTarget();
                    }
                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                    }
                } catch (Exception e2) {
                    e = e2;
                    i7 = cBType;
                    IsSaveWholeNode = 2;
                    i3 = 3;
                    e.printStackTrace();
                    excFromRilErrno = CommandException.fromRilErrno((int) IsSaveWholeNode);
                    r1 = IsSaveWholeNode;
                    if (i7 != 1) {
                        clearCache(1);
                    } else {
                        clearCache(1);
                    }
                    if (mMTelSSRequest.mResult != null) {
                        AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                        mMTelSSRequest.mResult.sendToTarget();
                    }
                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                    }
                }
            }
            SimservType simservType2 = null;
            boolean zIsEmptyCB2 = false;
            if (cBType == 5 || cBType == 3 || cBType == 1) {
                try {
                    SimservType cache = getCache(1, i6);
                    zIsEmptyCB = isEmptyCB(1, cache);
                    simservType = cache;
                } catch (XcapException e3) {
                    e = e3;
                    i7 = cBType;
                    IsSaveWholeNode = 2;
                    i3 = 3;
                    e.printStackTrace();
                    excReportXcapException = reportXcapException(e);
                    excFromRilErrno = excReportXcapException;
                    r1 = IsSaveWholeNode;
                    if (i7 != 1) {
                        clearCache(1);
                    } else {
                        clearCache(1);
                    }
                    if (mMTelSSRequest.mResult != null) {
                        AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                        mMTelSSRequest.mResult.sendToTarget();
                    }
                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                    }
                } catch (Exception e4) {
                    e = e4;
                    i7 = cBType;
                    IsSaveWholeNode = 2;
                    i3 = 3;
                    e.printStackTrace();
                    excFromRilErrno = CommandException.fromRilErrno((int) IsSaveWholeNode);
                    r1 = IsSaveWholeNode;
                    if (i7 != 1) {
                        clearCache(1);
                    } else {
                        clearCache(1);
                    }
                    if (mMTelSSRequest.mResult != null) {
                        AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                        mMTelSSRequest.mResult.sendToTarget();
                    }
                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                    }
                }
            } else {
                zIsEmptyCB = false;
                simservType = null;
            }
            if (cBType == 5 || cBType == 4 || cBType == 2) {
                SimservType cache2 = getCache(2, i6);
                zIsEmptyCB2 = isEmptyCB(2, cache2);
                simservType2 = cache2;
            }
            ArrayList arrayList4 = new ArrayList();
            ArrayList arrayList5 = new ArrayList();
            try {
                if (cBType == 5) {
                    int i10 = 0;
                    while (i10 < i9) {
                        try {
                            String str4 = MMTelSSTransport.CB_FACILITY[i10];
                            ArrayList arrayList6 = arrayList4;
                            if (i10 < i8) {
                                int i11 = cBType;
                                i3 = i8;
                                i = iConvertServiceClass;
                                try {
                                    arrayList6.addAll(getRuleForSetCB(simservType, str4, iConvertServiceClass, i4, i6));
                                    i2 = i11;
                                    arrayList3 = arrayList5;
                                    i10++;
                                    arrayList5 = arrayList3;
                                    i8 = i3;
                                    i3 = i3;
                                    iConvertServiceClass = i;
                                    i6 = i6;
                                    c = 2;
                                    arrayList4 = arrayList6;
                                    str3 = str3;
                                    cBType = i2;
                                    i9 = 5;
                                    z = true;
                                } catch (XcapException e5) {
                                    e = e5;
                                    i7 = i11;
                                    IsSaveWholeNode = 2;
                                    e.printStackTrace();
                                    excReportXcapException = reportXcapException(e);
                                    excFromRilErrno = excReportXcapException;
                                    r1 = IsSaveWholeNode;
                                    if (i7 != 1) {
                                        clearCache(1);
                                    } else {
                                        clearCache(1);
                                    }
                                    if (mMTelSSRequest.mResult != null) {
                                        AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                                        mMTelSSRequest.mResult.sendToTarget();
                                    }
                                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                                    }
                                } catch (Exception e6) {
                                    e = e6;
                                    i7 = i11;
                                    IsSaveWholeNode = 2;
                                    e.printStackTrace();
                                    excFromRilErrno = CommandException.fromRilErrno((int) IsSaveWholeNode);
                                    r1 = IsSaveWholeNode;
                                    if (i7 != 1) {
                                        clearCache(1);
                                    } else {
                                        clearCache(1);
                                    }
                                    if (mMTelSSRequest.mResult != null) {
                                        AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                                        mMTelSSRequest.mResult.sendToTarget();
                                    }
                                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                                    }
                                }
                            } else {
                                i = iConvertServiceClass;
                                i3 = i8;
                                i2 = cBType;
                                try {
                                    arrayList3 = arrayList5;
                                    arrayList3.addAll(getRuleForSetCB(simservType2, str4, i, i4, i6));
                                    i10++;
                                    arrayList5 = arrayList3;
                                    i8 = i3;
                                    i3 = i3;
                                    iConvertServiceClass = i;
                                    i6 = i6;
                                    c = 2;
                                    arrayList4 = arrayList6;
                                    str3 = str3;
                                    cBType = i2;
                                    i9 = 5;
                                    z = true;
                                } catch (XcapException e7) {
                                    e = e7;
                                    i7 = i2;
                                    IsSaveWholeNode = 2;
                                    e.printStackTrace();
                                    excReportXcapException = reportXcapException(e);
                                    excFromRilErrno = excReportXcapException;
                                    r1 = IsSaveWholeNode;
                                    if (i7 != 1) {
                                        clearCache(1);
                                    } else {
                                        clearCache(1);
                                    }
                                    if (mMTelSSRequest.mResult != null) {
                                        AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                                        mMTelSSRequest.mResult.sendToTarget();
                                    }
                                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                                    }
                                } catch (Exception e8) {
                                    e = e8;
                                    i7 = i2;
                                    IsSaveWholeNode = 2;
                                    e.printStackTrace();
                                    excFromRilErrno = CommandException.fromRilErrno((int) IsSaveWholeNode);
                                    r1 = IsSaveWholeNode;
                                    if (i7 != 1) {
                                        clearCache(1);
                                    } else {
                                        clearCache(1);
                                    }
                                    if (mMTelSSRequest.mResult != null) {
                                        AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                                        mMTelSSRequest.mResult.sendToTarget();
                                    }
                                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                                    }
                                }
                            }
                        } catch (XcapException e9) {
                            e = e9;
                            i3 = i8;
                            i7 = cBType;
                            IsSaveWholeNode = c;
                        } catch (Exception e10) {
                            e = e10;
                            i3 = i8;
                            i7 = cBType;
                            IsSaveWholeNode = c;
                        }
                    }
                    int i12 = cBType;
                    arrayList = arrayList4;
                    String str5 = str3;
                    arrayList2 = arrayList5;
                    i3 = i8;
                    str = str5;
                    i7 = i12;
                    IsSaveWholeNode = MMTelSSTransport.mSSConfig.isSaveWholeNode();
                    try {
                        if (IsSaveWholeNode != 0) {
                            if ((i7 != 5 || i7 == i3 || i7 == 1) && simservType != null) {
                                if (isAllRulesDeativated(((OutgoingCommunicationBarring) simservType).getRuleSet().getRules())) {
                                    ((OutgoingCommunicationBarring) simservType).save(false);
                                } else {
                                    ((OutgoingCommunicationBarring) simservType).save(true);
                                }
                            }
                            if (i7 != 5 || i7 == 4) {
                                IsSaveWholeNode = 2;
                            } else {
                                IsSaveWholeNode = 2;
                                IsSaveWholeNode = 2;
                                if (i7 == 2) {
                                }
                            }
                            if (simservType2 != null) {
                                if (isAllRulesDeativated(((IncomingCommunicationBarring) simservType2).getRuleSet().getRules())) {
                                    ((IncomingCommunicationBarring) simservType2).save(false);
                                } else {
                                    ((IncomingCommunicationBarring) simservType2).save(true);
                                }
                            }
                        } else {
                            IsSaveWholeNode = 2;
                            IsSaveWholeNode = 2;
                            if (zIsEmptyCB) {
                                ((OutgoingCommunicationBarring) simservType).saveRuleSet();
                            } else {
                                for (Rule rule : arrayList) {
                                    Rlog.d(str, "handleSetCB(): rule=" + rule.toXmlString());
                                    ((OutgoingCommunicationBarring) simservType).saveRule(rule.mId);
                                }
                            }
                            if (zIsEmptyCB2) {
                                ((IncomingCommunicationBarring) simservType2).saveRuleSet();
                            } else {
                                for (Rule rule2 : arrayList2) {
                                    Rlog.d(str, "handleSetCB(): rule=" + rule2.toXmlString());
                                    ((IncomingCommunicationBarring) simservType2).saveRule(rule2.mId);
                                }
                            }
                        }
                    } catch (XcapException e11) {
                        e = e11;
                        e.printStackTrace();
                        excReportXcapException = reportXcapException(e);
                    } catch (Exception e12) {
                        e = e12;
                        e.printStackTrace();
                        excFromRilErrno = CommandException.fromRilErrno((int) IsSaveWholeNode);
                        r1 = IsSaveWholeNode;
                        if (i7 != 1) {
                            clearCache(1);
                        } else {
                            clearCache(1);
                        }
                        if (mMTelSSRequest.mResult != null) {
                            AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                            mMTelSSRequest.mResult.sendToTarget();
                        }
                        if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                            MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                        }
                    }
                    excFromRilErrno = excReportXcapException;
                    r1 = IsSaveWholeNode;
                } else {
                    int i13 = cBType;
                    arrayList = arrayList4;
                    String str6 = MMTelSSTransport.LOG_TAG;
                    arrayList2 = arrayList5;
                    i3 = 3;
                    try {
                        if (i13 == 3) {
                            int i14 = 0;
                            String str7 = string;
                            while (i14 < 3) {
                                try {
                                    str7 = MMTelSSTransport.CB_FACILITY[i14];
                                    String str8 = str6;
                                    int i15 = i13;
                                    arrayList.addAll(getRuleForSetCB(simservType, str7, iConvertServiceClass, i4, i6));
                                    i14++;
                                    str6 = str8;
                                    i13 = i15;
                                } catch (XcapException e13) {
                                    e = e13;
                                    i7 = i13;
                                    IsSaveWholeNode = 2;
                                    e.printStackTrace();
                                    excReportXcapException = reportXcapException(e);
                                    excFromRilErrno = excReportXcapException;
                                    r1 = IsSaveWholeNode;
                                    if (i7 != 1) {
                                        clearCache(1);
                                    } else {
                                        clearCache(1);
                                    }
                                    if (mMTelSSRequest.mResult != null) {
                                        AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                                        mMTelSSRequest.mResult.sendToTarget();
                                    }
                                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                                    }
                                } catch (Exception e14) {
                                    e = e14;
                                    i7 = i13;
                                    IsSaveWholeNode = 2;
                                    e.printStackTrace();
                                    excFromRilErrno = CommandException.fromRilErrno((int) IsSaveWholeNode);
                                    r1 = IsSaveWholeNode;
                                    if (i7 != 1) {
                                        clearCache(1);
                                    } else {
                                        clearCache(1);
                                    }
                                    if (mMTelSSRequest.mResult != null) {
                                        AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                                        mMTelSSRequest.mResult.sendToTarget();
                                    }
                                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                                    }
                                }
                            }
                            str = str6;
                            i7 = i13;
                        } else {
                            str = str6;
                            i7 = i13;
                            if (i7 == 4) {
                                String str9 = string;
                                for (int i16 = 3; i16 < 5; i16++) {
                                    str9 = MMTelSSTransport.CB_FACILITY[i16];
                                    arrayList2.addAll(getRuleForSetCB(simservType2, str9, iConvertServiceClass, i4, i6));
                                }
                            } else if (i7 == 1) {
                                arrayList.addAll(getRuleForSetCB(simservType, string, iConvertServiceClass, i4, i6));
                            } else if (i7 == 2) {
                                arrayList2.addAll(getRuleForSetCB(simservType2, string, iConvertServiceClass, i4, i6));
                            }
                        }
                        IsSaveWholeNode = MMTelSSTransport.mSSConfig.isSaveWholeNode();
                        if (IsSaveWholeNode != 0) {
                            if (i7 != 5) {
                                if (isAllRulesDeativated(((OutgoingCommunicationBarring) simservType).getRuleSet().getRules())) {
                                    ((OutgoingCommunicationBarring) simservType).save(false);
                                } else {
                                    ((OutgoingCommunicationBarring) simservType).save(true);
                                }
                            } else if (isAllRulesDeativated(((OutgoingCommunicationBarring) simservType).getRuleSet().getRules())) {
                                ((OutgoingCommunicationBarring) simservType).save(false);
                            } else {
                                ((OutgoingCommunicationBarring) simservType).save(true);
                            }
                            if (i7 != 5) {
                                IsSaveWholeNode = 2;
                                if (simservType2 != null) {
                                    if (isAllRulesDeativated(((IncomingCommunicationBarring) simservType2).getRuleSet().getRules())) {
                                        ((IncomingCommunicationBarring) simservType2).save(false);
                                    } else {
                                        ((IncomingCommunicationBarring) simservType2).save(true);
                                    }
                                }
                            } else {
                                IsSaveWholeNode = 2;
                                if (simservType2 != null) {
                                    if (isAllRulesDeativated(((IncomingCommunicationBarring) simservType2).getRuleSet().getRules())) {
                                        ((IncomingCommunicationBarring) simservType2).save(false);
                                    } else {
                                        ((IncomingCommunicationBarring) simservType2).save(true);
                                    }
                                }
                            }
                        } else {
                            IsSaveWholeNode = 2;
                            IsSaveWholeNode = 2;
                            if (zIsEmptyCB) {
                                ((OutgoingCommunicationBarring) simservType).saveRuleSet();
                            } else {
                                while (r3.hasNext()) {
                                    Rlog.d(str, "handleSetCB(): rule=" + rule.toXmlString());
                                    ((OutgoingCommunicationBarring) simservType).saveRule(rule.mId);
                                }
                            }
                            if (zIsEmptyCB2) {
                                ((IncomingCommunicationBarring) simservType2).saveRuleSet();
                            } else {
                                while (r3.hasNext()) {
                                    Rlog.d(str, "handleSetCB(): rule=" + rule2.toXmlString());
                                    ((IncomingCommunicationBarring) simservType2).saveRule(rule2.mId);
                                }
                            }
                        }
                    } catch (XcapException e15) {
                        e = e15;
                        IsSaveWholeNode = 2;
                    } catch (Exception e16) {
                        e = e16;
                        IsSaveWholeNode = 2;
                    }
                    excFromRilErrno = excReportXcapException;
                    r1 = IsSaveWholeNode;
                }
            } catch (XcapException e17) {
                e = e17;
                IsSaveWholeNode = 2;
            } catch (Exception e18) {
                e = e18;
                IsSaveWholeNode = 2;
            }
            if (i7 != 1 || i7 == i3) {
                clearCache(1);
            } else if (i7 == r1 || i7 == 4) {
                clearCache(r1);
            } else {
                clearCache(1);
                clearCache(r1);
            }
            if (mMTelSSRequest.mResult != null) {
                AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                mMTelSSRequest.mResult.sendToTarget();
            }
            if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
            }
        }

        /* JADX WARN: Code duplicated, block: B:136:0x0305  */
        /* JADX WARN: Code duplicated, block: B:139:0x0314  */
        /* JADX WARN: Code duplicated, block: B:168:? A[RETURN, SYNTHETIC] */
        /* JADX WARN: Code duplicated, block: B:26:0x00f7  */
        /* JADX WARN: Code duplicated, block: B:28:0x0114  */
        /* JADX WARN: Code duplicated, block: B:60:0x01a7 A[Catch: Exception -> 0x02d5, XcapException -> 0x02da, TryCatch #10 {XcapException -> 0x02da, Exception -> 0x02d5, blocks: (B:27:0x010c, B:29:0x011a, B:69:0x020a, B:71:0x0214, B:78:0x0226, B:50:0x0177, B:58:0x0190, B:60:0x01a7, B:62:0x01c8, B:64:0x01d0, B:66:0x01e9, B:68:0x01f3), top: B:151:0x00b0 }] */
        /* JADX WARN: Code duplicated, block: B:61:0x01c2  */
        /* JADX WARN: Multi-variable type inference failed */
        public void handleSetCF(int i, int i2, int i3, int i4, String str, int i5, String str2, int i6, Message message) {
            int i7;
            Exception excFromRilErrno;
            ArrayList<Rule> arrayList;
            String str3;
            Exception exc;
            int i8;
            char c;
            boolean z;
            int i9;
            int i10;
            Exception exc2;
            int i11;
            int i12;
            boolean z2;
            ArrayList arrayList2;
            if (!MMTelSSUtils.isPreferXcap(i6, MMTelSSTransport.this.mContext) || !MMTelSSTransport.this.updateNetworkInitSimServ(i6)) {
                triggerCSFB(message);
                return;
            }
            Exception exc3 = null;
            String strConvertCFNumber = convertCFNumber(str, i6);
            int iConvertServiceClass = convertServiceClass(i4);
            String str4 = "handleSetCF() " + MMTelSSTransport.requestToString(i) + ", action=" + actionCFToString(i2) + ", reason=" + reasonCFToString(i3) + ", serviceClass=" + serviceClassToString(iConvertServiceClass) + ", number=" + MtkSuppServHelper.encryptString(strConvertCFNumber) + ", time=" + i5 + ", timeSlot=" + str2 + ", phoneId=" + i6;
            String str5 = MMTelSSTransport.LOG_TAG;
            Rlog.d(MMTelSSTransport.LOG_TAG, str4);
            char c2 = 2;
            int i13 = 0;
            try {
                CommunicationDiversion communicationDiversion = (CommunicationDiversion) getCache(0, i6);
                boolean zIsEmptyCF = isEmptyCF(communicationDiversion);
                ArrayList arrayList3 = new ArrayList();
                try {
                    if (i3 == 5) {
                        int i14 = 0;
                        while (i14 < 4) {
                            try {
                                int i15 = MMTelSSTransport.CF_REASON[i14];
                                try {
                                    try {
                                        if (MMTelSSTransport.mSSConfig.isNotSupportCFNotRegistered()) {
                                            exc2 = exc3;
                                            i11 = i15;
                                            if (i11 == 6) {
                                                i12 = i13;
                                            }
                                            z2 = i12;
                                            StringBuilder sb = new StringBuilder();
                                            sb.append("reason == 4, needAdd = ");
                                            sb.append(z2);
                                            Rlog.d(str5, sb.toString());
                                            if (z2 != 0) {
                                                arrayList2 = arrayList3;
                                                arrayList2.addAll(getRuleForSetCF(communicationDiversion, i11, i2, iConvertServiceClass, strConvertCFNumber, i5, str2));
                                            } else {
                                                arrayList2 = arrayList3;
                                            }
                                            i14++;
                                            str5 = str5;
                                            arrayList3 = arrayList2;
                                            iConvertServiceClass = iConvertServiceClass;
                                            i13 = 0;
                                            c2 = 2;
                                            exc3 = exc2;
                                        } else {
                                            exc2 = exc3;
                                            i11 = i15;
                                        }
                                        sb.append("reason == 4, needAdd = ");
                                        sb.append(z2);
                                        Rlog.d(str5, sb.toString());
                                        if (z2 != 0) {
                                            arrayList2 = arrayList3;
                                            arrayList2.addAll(getRuleForSetCF(communicationDiversion, i11, i2, iConvertServiceClass, strConvertCFNumber, i5, str2));
                                        } else {
                                            arrayList2 = arrayList3;
                                        }
                                        i14++;
                                        str5 = str5;
                                        arrayList3 = arrayList2;
                                        iConvertServiceClass = iConvertServiceClass;
                                        i13 = 0;
                                        c2 = 2;
                                        exc3 = exc2;
                                    } catch (XcapException e) {
                                        e = e;
                                        i7 = 0;
                                        this = this;
                                        e.printStackTrace();
                                        excFromRilErrno = this.reportXcapException(e);
                                        this.clearCache(i7);
                                        if (message != null) {
                                            AsyncResult.forMessage(message, (Object) null, excFromRilErrno);
                                            message.sendToTarget();
                                        }
                                        if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                                            MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                                        }
                                    } catch (Exception e2) {
                                        e = e2;
                                        i7 = 0;
                                        this = this;
                                        e.printStackTrace();
                                        excFromRilErrno = CommandException.fromRilErrno(2);
                                        this.clearCache(i7);
                                        if (message != null) {
                                            AsyncResult.forMessage(message, (Object) null, excFromRilErrno);
                                            message.sendToTarget();
                                        }
                                        if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                                            MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                                        }
                                    }
                                    StringBuilder sb2 = new StringBuilder();
                                } catch (XcapException e3) {
                                    e = e3;
                                    i7 = i13;
                                } catch (Exception e4) {
                                    e = e4;
                                    i7 = i13;
                                }
                                i12 = 1;
                                z2 = i12;
                            } catch (XcapException e5) {
                                e = e5;
                                i7 = i13;
                                this = this;
                            } catch (Exception e6) {
                                e = e6;
                                i7 = i13;
                                this = this;
                            }
                        }
                        arrayList = arrayList3;
                        str3 = str5;
                        exc = exc3;
                        i8 = 5;
                    } else {
                        arrayList = arrayList3;
                        str3 = MMTelSSTransport.LOG_TAG;
                        exc = null;
                        if (i3 == 4) {
                            int i16 = 0;
                            while (true) {
                                i8 = 5;
                                if (i16 >= 5) {
                                    break;
                                }
                                int i17 = MMTelSSTransport.CF_REASON[i16];
                                if (MMTelSSTransport.mSSConfig.isNotSupportCFNotRegistered()) {
                                    c = 6;
                                    if (i17 == 6) {
                                        i13 = 0;
                                    }
                                    z = i13;
                                    Rlog.d(str3, "reason == 5, needAdd = " + z);
                                    if (z != 0) {
                                        i13 = i17;
                                        arrayList.addAll(getRuleForSetCF(communicationDiversion, i13, i2, iConvertServiceClass, strConvertCFNumber, i5, str2));
                                    }
                                    i16++;
                                } else {
                                    c = 6;
                                }
                                i13 = 1;
                                z = i13;
                                Rlog.d(str3, "reason == 5, needAdd = " + z);
                                if (z != 0) {
                                    i13 = i17;
                                    arrayList.addAll(getRuleForSetCF(communicationDiversion, i13, i2, iConvertServiceClass, strConvertCFNumber, i5, str2));
                                }
                                i16++;
                            }
                        } else {
                            i8 = 5;
                            i13 = i3;
                            arrayList.addAll(getRuleForSetCF(communicationDiversion, i13, i2, iConvertServiceClass, strConvertCFNumber, i5, str2));
                            if (i3 == 3 && MMTelSSTransport.mSSConfig.isSetCFNRcWithCFNL()) {
                                i13 = 6;
                                arrayList.addAll(getRuleForSetCF(communicationDiversion, 6, i2, iConvertServiceClass, strConvertCFNumber, i5, str2));
                            }
                        }
                    }
                    try {
                        if (MMTelSSTransport.mSSConfig.isSupportPutCfRoot()) {
                            if (MMTelSSTransport.mSSConfig.isSaveWholeNode() || i3 == i8 || i3 == 4) {
                                communicationDiversion.getRuleSet().getRules();
                                if (i5 <= 0) {
                                    i10 = 0;
                                } else if (i3 == i8 || i3 == 4 || i3 == 2) {
                                    i10 = 0;
                                    communicationDiversion.setNoReplyTimer(i5, false);
                                } else {
                                    i10 = 0;
                                }
                                communicationDiversion.save(true);
                                i7 = i10;
                            } else {
                                i9 = 0;
                            }
                            excFromRilErrno = exc;
                            this.clearCache(i7);
                            if (message != null) {
                                AsyncResult.forMessage(message, (Object) null, excFromRilErrno);
                                message.sendToTarget();
                            }
                            if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                                MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                            }
                        }
                        i9 = 0;
                        if (zIsEmptyCF) {
                            communicationDiversion.saveRuleSet();
                            i7 = i9;
                        } else {
                            for (Rule rule : arrayList) {
                                Rlog.d(str3, "handleSetCF(): rule=" + MtkSuppServHelper.encryptString(rule.toXmlString()));
                                communicationDiversion.saveRule(rule);
                                i7 = i9;
                                this = this;
                                try {
                                    if (this.getCFType(rule.getConditions()) == 2 && i5 > 0) {
                                        if (communicationDiversion.getNoReplyTimer() > MMTelSSTransport.INVALID_PHONE_ID && !MMTelSSTransport.mSSConfig.isNoReplyTimeInsideCFAction()) {
                                            Rlog.d(str3, "Set outside no-reply timer = " + i5);
                                            communicationDiversion.setNoReplyTimer(i5, true);
                                        }
                                    }
                                    i9 = i7;
                                } catch (XcapException e7) {
                                    e = e7;
                                    e.printStackTrace();
                                    excFromRilErrno = this.reportXcapException(e);
                                    this.clearCache(i7);
                                    if (message != null) {
                                        AsyncResult.forMessage(message, (Object) null, excFromRilErrno);
                                        message.sendToTarget();
                                    }
                                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                                    }
                                } catch (Exception e8) {
                                    e = e8;
                                    e.printStackTrace();
                                    excFromRilErrno = CommandException.fromRilErrno(2);
                                    this.clearCache(i7);
                                    if (message != null) {
                                        AsyncResult.forMessage(message, (Object) null, excFromRilErrno);
                                        message.sendToTarget();
                                    }
                                    if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                                        MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                                    }
                                }
                            }
                            i7 = i9;
                        }
                        excFromRilErrno = exc;
                    } catch (XcapException e9) {
                        e = e9;
                        i7 = i13;
                        this = this;
                        e.printStackTrace();
                        excFromRilErrno = this.reportXcapException(e);
                        this.clearCache(i7);
                        if (message != null) {
                            AsyncResult.forMessage(message, (Object) null, excFromRilErrno);
                            message.sendToTarget();
                        }
                        if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                            MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                        }
                    } catch (Exception e10) {
                        e = e10;
                        i7 = i13;
                        this = this;
                        e.printStackTrace();
                        excFromRilErrno = CommandException.fromRilErrno(2);
                        this.clearCache(i7);
                        if (message != null) {
                            AsyncResult.forMessage(message, (Object) null, excFromRilErrno);
                            message.sendToTarget();
                        }
                        if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                            MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
                        }
                    }
                } catch (XcapException e11) {
                    e = e11;
                    i7 = 0;
                } catch (Exception e12) {
                    e = e12;
                    i7 = 0;
                }
            } catch (XcapException e13) {
                e = e13;
                i7 = 0;
                this = this;
            } catch (Exception e14) {
                e = e14;
                i7 = 0;
                this = this;
            }
            this.clearCache(i7);
            if (message != null) {
                AsyncResult.forMessage(message, (Object) null, excFromRilErrno);
                message.sendToTarget();
            }
            if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
            }
        }

        public void handleSetCF(MMTelSSRequest mMTelSSRequest) {
            mMTelSSRequest.mp.setDataPosition(0);
            int i = mMTelSSRequest.mp.readInt();
            mMTelSSRequest.mp.readInt();
            int i2 = mMTelSSRequest.mp.readInt();
            int i3 = mMTelSSRequest.mp.readInt();
            int i4 = mMTelSSRequest.mp.readInt();
            String string = mMTelSSRequest.mp.readString();
            int i5 = mMTelSSRequest.mp.readInt();
            int i6 = mMTelSSRequest.mp.readInt();
            Message message = mMTelSSRequest.mResult;
            Rlog.d(MMTelSSTransport.LOG_TAG, "Read from parcel: " + MMTelSSTransport.requestToString(i) + ", action=" + i2 + ", reason=" + i3 + ", serviceClass=" + i4 + ", number=" + MtkSuppServHelper.encryptString(string) + ", time=" + i5 + ", phoneId=" + i6 + ", msg=" + message);
            handleSetCF(i, i2, i3, i4, string, i5, null, i6, message);
        }

        public void handleSetCFInTimeSlot(MMTelSSRequest mMTelSSRequest) {
            long[] jArr;
            mMTelSSRequest.mp.setDataPosition(0);
            int i = mMTelSSRequest.mp.readInt();
            mMTelSSRequest.mp.readInt();
            int i2 = mMTelSSRequest.mp.readInt();
            int i3 = mMTelSSRequest.mp.readInt();
            int i4 = mMTelSSRequest.mp.readInt();
            String string = mMTelSSRequest.mp.readString();
            int i5 = mMTelSSRequest.mp.readInt();
            long[] jArr2 = new long[2];
            try {
                mMTelSSRequest.mp.readLongArray(jArr2);
                jArr = jArr2;
            } catch (Exception e) {
                jArr = null;
            }
            String strConvertToSeverTime = convertToSeverTime(jArr);
            int i6 = mMTelSSRequest.mp.readInt();
            Message message = mMTelSSRequest.mResult;
            Rlog.d(MMTelSSTransport.LOG_TAG, "Read from parcel: " + MMTelSSTransport.requestToString(i) + ", action=" + i2 + ", reason=" + i3 + ", serviceClass=" + i4 + ", number=" + MtkSuppServHelper.encryptString(string) + ", time=" + i5 + ", timeSlot=" + strConvertToSeverTime + ", phoneId=" + i6 + ", msg=" + message);
            handleSetCF(i, i2, i3, i4, string, i5, strConvertToSeverTime, i6, message);
        }

        public void handleSetCW(MMTelSSRequest mMTelSSRequest) {
            mMTelSSRequest.mp.setDataPosition(0);
            int i = mMTelSSRequest.mp.readInt();
            mMTelSSRequest.mp.readInt();
            int i2 = mMTelSSRequest.mp.readInt();
            int i3 = mMTelSSRequest.mp.readInt();
            int i4 = mMTelSSRequest.mp.readInt();
            Rlog.d(MMTelSSTransport.LOG_TAG, "Read from parcel: " + MMTelSSTransport.requestToString(i) + ", enable=" + i2 + ", serviceClass=" + i3 + ", phoneId=" + i4);
            if (!MMTelSSUtils.isPreferXcap(i4, MMTelSSTransport.this.mContext) || !MMTelSSTransport.this.updateNetworkInitSimServ(i4)) {
                triggerCSFB(mMTelSSRequest.mResult);
                return;
            }
            Exception excFromRilErrno = null;
            Rlog.d(MMTelSSTransport.LOG_TAG, "handleSetCW() " + MMTelSSTransport.requestToString(i) + ", enable=" + i2 + ", serviceClass=" + serviceClassToString(i3) + ", phoneId=" + i4);
            try {
                ((CommunicationWaiting) getCache(3, i4)).setActive(i2 == 1);
            } catch (XcapException e) {
                e.printStackTrace();
                excFromRilErrno = reportXcapException(e);
            } catch (Exception e2) {
                e2.printStackTrace();
                excFromRilErrno = CommandException.fromRilErrno(2);
            }
            clearCache(3);
            if (excFromRilErrno != null && OperatorUtils.isMatched(OperatorUtils.OPID.OP156, i4)) {
                Rlog.d(MMTelSSTransport.LOG_TAG, "handleSetCW() OP156 not support, just CSFB");
                excFromRilErrno = new UnknownHostException();
            }
            if (mMTelSSRequest.mResult != null) {
                AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                mMTelSSRequest.mResult.sendToTarget();
            }
            if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
            }
        }

        public void handleSetIdentity(MMTelSSRequest mMTelSSRequest, int i) {
            mMTelSSRequest.mp.setDataPosition(0);
            int i2 = mMTelSSRequest.mp.readInt();
            mMTelSSRequest.mp.readInt();
            int i3 = mMTelSSRequest.mp.readInt();
            int i4 = mMTelSSRequest.mp.readInt();
            Rlog.d(MMTelSSTransport.LOG_TAG, "Read from parcel: " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", mode=" + i3 + ", phoneId=" + i4);
            if (!MMTelSSUtils.isPreferXcap(i4, MMTelSSTransport.this.mContext) || !MMTelSSTransport.this.updateNetworkInitSimServ(i4)) {
                triggerCSFB(mMTelSSRequest.mResult);
                return;
            }
            Exception excFromRilErrno = null;
            Rlog.d(MMTelSSTransport.LOG_TAG, "handleSetIdentity() " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", mode=" + i3 + ", phoneId=" + i4);
            try {
                if (i == 0) {
                    OriginatingIdentityPresentation originatingIdentityPresentation = (OriginatingIdentityPresentation) getCache(identityToCacheId(i), i4);
                    boolean z = i3 == 1;
                    Rlog.d(MMTelSSTransport.LOG_TAG, "handleSetIdentity() " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", enable=" + z);
                    originatingIdentityPresentation.setActive(z);
                } else if (i == 1) {
                    OriginatingIdentityPresentationRestriction originatingIdentityPresentationRestriction = (OriginatingIdentityPresentationRestriction) getCache(identityToCacheId(i), i4);
                    boolean z2 = i3 == 1;
                    boolean zIsPutWholeCLIR = MMTelSSTransport.mSSConfig.isPutWholeCLIR();
                    Rlog.d(MMTelSSTransport.LOG_TAG, "handleSetIdentity() " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", enable=" + z2 + ", putWhole=" + zIsPutWholeCLIR);
                    if (zIsPutWholeCLIR || !originatingIdentityPresentationRestriction.isContainDefaultBehaviour()) {
                        originatingIdentityPresentationRestriction.setDefaultPresentationRestricted(z2, z2, OriginatingIdentityPresentationRestriction.NODE_ROOT_FULL_CHILD, true);
                    } else {
                        originatingIdentityPresentationRestriction.setDefaultPresentationRestricted(z2);
                    }
                } else if (i == 2) {
                    TerminatingIdentityPresentation terminatingIdentityPresentation = (TerminatingIdentityPresentation) getCache(identityToCacheId(i), i4);
                    boolean z3 = i3 == 1;
                    Rlog.d(MMTelSSTransport.LOG_TAG, "handleSetIdentity() " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", enable=" + z3);
                    terminatingIdentityPresentation.setActive(z3);
                } else if (i == 3) {
                    TerminatingIdentityPresentationRestriction terminatingIdentityPresentationRestriction = (TerminatingIdentityPresentationRestriction) getCache(identityToCacheId(i), i4);
                    boolean z4 = i3 == 1;
                    boolean zIsPutWholeCLIR2 = MMTelSSTransport.mSSConfig.isPutWholeCLIR();
                    Rlog.d(MMTelSSTransport.LOG_TAG, "handleSetIdentity() " + MMTelSSTransport.requestToString(i2) + ", identity=" + identityToString(i) + ", enable=" + z4 + ", putWhole=" + zIsPutWholeCLIR2);
                    if (zIsPutWholeCLIR2 || !terminatingIdentityPresentationRestriction.isContainDefaultBehaviour()) {
                        terminatingIdentityPresentationRestriction.setDefaultPresentationRestricted(z4, z4, TerminatingIdentityPresentationRestriction.NODE_ROOT_FULL_CHILD, true);
                    } else {
                        terminatingIdentityPresentationRestriction.setDefaultPresentationRestricted(z4);
                    }
                }
            } catch (XcapException e) {
                e.printStackTrace();
                excFromRilErrno = reportXcapException(e);
            } catch (Exception e2) {
                e2.printStackTrace();
                excFromRilErrno = CommandException.fromRilErrno(2);
            }
            clearCache(identityToCacheId(i));
            if (mMTelSSRequest.mResult != null) {
                AsyncResult.forMessage(mMTelSSRequest.mResult, (Object) null, excFromRilErrno);
                mMTelSSRequest.mResult.sendToTarget();
            }
            if (MMTelSSTransport.this.mXcapMobileDataNetworkManager != null) {
                MMTelSSTransport.this.mXcapMobileDataNetworkManager.releaseNetwork();
            }
        }

        public int identityToCacheId(int i) {
            if (i == 0) {
                return 4;
            }
            if (i == 1) {
                return 5;
            }
            if (i != 2) {
                return i != 3 ? 8 : 7;
            }
            return 6;
        }

        public String identityToString(int i) {
            if (i == 0) {
                return "CLIP";
            }
            if (i == 1) {
                return "CLIR";
            }
            if (i != 2) {
                return i != 3 ? "ERR" : "COLR";
            }
            return "COLP";
        }

        public boolean isAllRulesDeativated(List<Rule> list) {
            Iterator<Rule> it = list.iterator();
            while (it.hasNext()) {
                if (!it.next().getConditions().comprehendRuleDeactivated()) {
                    return false;
                }
            }
            return true;
        }

        public boolean isEmptyCB(int i, SimservType simservType) {
            RuleSet ruleSet = null;
            if (i == 1) {
                ruleSet = ((OutgoingCommunicationBarring) simservType).getRuleSet();
            } else if (i == 2) {
                ruleSet = ((IncomingCommunicationBarring) simservType).getRuleSet();
            }
            boolean z = ruleSet == null || (ruleSet == null ? null : ruleSet.getRules()) == null;
            Rlog.d(MMTelSSTransport.LOG_TAG, "isEmptyCB()=" + z);
            return z;
        }

        public boolean isEmptyCF(CommunicationDiversion communicationDiversion) {
            RuleSet ruleSet = communicationDiversion.getRuleSet();
            boolean z = ruleSet == null || (ruleSet == null ? null : ruleSet.getRules()) == null;
            Rlog.d(MMTelSSTransport.LOG_TAG, "isEmptyCF()=" + z);
            return z;
        }

        public int isMediaMatchServiceClass(List<String> list, int i) {
            int iIsMediaMatchServiceClass = 0;
            int mediaTagType = MMTelSSTransport.mSSConfig.getMediaTagType();
            String str = "";
            Iterator<String> it = list.iterator();
            while (it.hasNext()) {
                str = str + it.next() + " ";
            }
            boolean zContains = list.contains(serviceClassToMediaString(1));
            boolean zContains2 = list.contains(serviceClassToMediaString(512));
            if ((i & 1) != 0) {
                if (!zContains) {
                    iIsMediaMatchServiceClass = zContains2 ? 0 : 1;
                } else if (zContains2) {
                    iIsMediaMatchServiceClass = (mediaTagType == 1 || mediaTagType == 2 || mediaTagType == 3) ? 0 : 1;
                } else {
                    iIsMediaMatchServiceClass = 1;
                }
            } else if ((i & 512) != 0) {
                if (!zContains2) {
                    iIsMediaMatchServiceClass = (zContains || mediaTagType == 1) ? 0 : 2;
                } else if (zContains) {
                    iIsMediaMatchServiceClass = (mediaTagType == 0 || mediaTagType == 3) ? 2 : 0;
                } else {
                    iIsMediaMatchServiceClass = (mediaTagType == 0 || mediaTagType == 2) ? 2 : 0;
                }
            } else if (i == 0) {
                Rlog.d(MMTelSSTransport.LOG_TAG, "isMediaMatchServiceClass: break down SERVICE_CLASS_NONE");
                iIsMediaMatchServiceClass = 0 | isMediaMatchServiceClass(list, 1) | isMediaMatchServiceClass(list, 512);
            }
            Rlog.d(MMTelSSTransport.LOG_TAG, "isMediaMatchServiceClass()=" + matchedMediaToString(iIsMediaMatchServiceClass) + ", mediaType=" + mediaTypeToString(mediaTagType) + ", service=" + serviceClassToString(i) + ", media=" + str);
            return iIsMediaMatchServiceClass;
        }

        public int isRuleMatchServiceClass(Rule rule, int i) {
            boolean zIsSupportMediaTag = MMTelSSTransport.mSSConfig.isSupportMediaTag();
            int iIsMediaMatchServiceClass = 0;
            if (zIsSupportMediaTag) {
                iIsMediaMatchServiceClass = isMediaMatchServiceClass(rule.getConditions().getMedias(), i);
            } else if (i == 0) {
                iIsMediaMatchServiceClass = 3;
            } else if ((i & 1) != 0) {
                iIsMediaMatchServiceClass = 1;
            } else if ((i & 512) != 0) {
                iIsMediaMatchServiceClass = 2;
            }
            Rlog.d(MMTelSSTransport.LOG_TAG, "isRuleMatchServiceClass()=" + matchedMediaToString(iIsMediaMatchServiceClass) + ", isSupportMediaTag=" + zIsSupportMediaTag + ", service=" + serviceClassToString(i));
            return iIsMediaMatchServiceClass;
        }

        public String matchedMediaToString(int i) {
            String str = "";
            if ((i & 1) != 0) {
                str = "audio ";
            }
            if ((i & 2) != 0) {
                str = str + "video ";
            }
            return str.equals("") ? "no matched" : str;
        }

        public String mediaTypeToString(int i) {
            if (i == 0) {
                return "Standard";
            }
            if (i == 1) {
                return "Only Audio";
            }
            if (i == 2) {
                return "Seperate";
            }
            if (i == 3) {
                return "Video with Audio";
            }
            return "ERR: " + String.valueOf(i);
        }

        public String modifiedServiceToString(int i) {
            String str = "";
            if ((i & 1) != 0) {
                str = "audio ";
            }
            if ((i & 2) != 0) {
                str = str + "video ";
            }
            return str.equals("") ? "no modified" : str;
        }

        public int modifyCBRule(List<Rule> list, Rule rule, String str, int i, int i2) {
            StringBuilder sb = new StringBuilder();
            sb.append("modifyCBRule() facility=");
            sb.append(str);
            sb.append(", lockState=");
            sb.append(i2 == 1 ? "Enable" : "Disable");
            sb.append(", service=");
            sb.append(serviceClassToString(i));
            Rlog.d(MMTelSSTransport.LOG_TAG, sb.toString());
            int iIsRuleMatchServiceClass = isRuleMatchServiceClass(rule, i);
            if (iIsRuleMatchServiceClass != 0) {
                list.addAll(modifyMatchedCBRule(rule, str, i, i2));
            }
            int i3 = (iIsRuleMatchServiceClass & 1) != 0 ? 0 | 1 : 0;
            return (iIsRuleMatchServiceClass & 2) != 0 ? i3 | 2 : i3;
        }

        public int modifyCFRule(List<Rule> list, RuleSet ruleSet, Rule rule, int i, int i2, int i3, String str, int i4, String str2) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "modifyCFRule() reason=" + reasonCFToString(i) + ", action=" + actionCFToString(i2) + ", service=" + serviceClassToString(i3) + ", number=" + MtkSuppServHelper.encryptString(str) + ", time=" + i4 + ", timeSlot=" + str2);
            int iIsRuleMatchServiceClass = isRuleMatchServiceClass(rule, i3);
            if (iIsRuleMatchServiceClass != 0) {
                list.addAll(modifyMatchedCFRule(rule, i, i2, i3, str, i4, str2));
            } else if (MMTelSSTransport.mSSConfig.getMediaTagType() == 2 && (i3 & 512) != 0) {
                list.addAll(createCFRuleForService(ruleSet, i, i2, 512, str, i4, str2, "_VIDEO"));
            }
            int i5 = (iIsRuleMatchServiceClass & 1) != 0 ? 0 | 1 : 0;
            return (iIsRuleMatchServiceClass & 2) != 0 ? i5 | 2 : i5;
        }

        public List<Rule> modifyMatchedCBRule(Rule rule, String str, int i, int i2) {
            StringBuilder sb = new StringBuilder();
            sb.append("modifyMatchedCBRule() facility=");
            sb.append(str);
            sb.append(", lockState=");
            sb.append(i2 == 1 ? "Enable" : "Disable");
            sb.append(", service=");
            sb.append(serviceClassToString(i));
            Rlog.d(MMTelSSTransport.LOG_TAG, sb.toString());
            ArrayList arrayList = new ArrayList();
            Conditions conditions = rule.getConditions();
            Actions actions = rule.getActions();
            if (i2 == 1) {
                conditions.removeRuleDeactivated();
                actions.setAllow(false);
            } else {
                conditions.addRuleDeactivated();
            }
            arrayList.add(rule);
            return arrayList;
        }

        public List<Rule> modifyMatchedCFRule(Rule rule, int i, int i2, int i3, String str, int i4, String str2) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "modifyMatchedCFRule() reason=" + reasonCFToString(i) + ", action=" + actionCFToString(i2) + ", service=" + serviceClassToString(i3) + ", number=" + MtkSuppServHelper.encryptString(str) + ", time=" + i4 + ", timeSlot=" + str2);
            ArrayList arrayList = new ArrayList();
            Conditions conditions = rule.getConditions();
            Actions actions = rule.getActions();
            if (i2 == 1 || i2 == 3) {
                conditions.removeRuleDeactivated();
                setForwardTo(actions, str);
                if (MMTelSSTransport.mSSConfig.isNoReplyTimeInsideCFAction() && i4 > 0 && i == 2 && actions.getNoReplyTimer() != MMTelSSTransport.INVALID_PHONE_ID) {
                    Rlog.d(MMTelSSTransport.LOG_TAG, "Set inside no-reply timer = " + i4);
                    actions.setNoReplyTimer(i4);
                }
                if (!MMTelSSTransport.mSSConfig.isSupportTimeSlot() || str2 == null) {
                    conditions.addTime(null);
                } else {
                    conditions.addTime(str2);
                }
            } else if (i2 == 0 || i2 == 4) {
                conditions.addRuleDeactivated();
                if (i2 == 4 && actions.getFowardTo() != null) {
                    setForwardTo(actions, "");
                }
            }
            arrayList.add(rule);
            return arrayList;
        }

        public String reasonCFToString(int i) {
            if (i == 0) {
                return "CFU";
            }
            if (i == 1) {
                return "CFB";
            }
            if (i == 2) {
                return "CFNRy";
            }
            if (i == 3) {
                return "CFNRc";
            }
            if (i == 6) {
                return "CFNL";
            }
            if (i == 4) {
                return "CF All";
            }
            if (i == 5) {
                return "CF All Conditional";
            }
            return "ERR: " + String.valueOf(i);
        }

        public void removeDuplicateCF(ArrayList<MtkCallForwardInfo> arrayList) {
            for (int i = 0; i < 5; i++) {
                int i2 = MMTelSSTransport.CF_REASON[i];
                MtkCallForwardInfo mtkCallForwardInfo = null;
                Iterator<MtkCallForwardInfo> it = arrayList.iterator();
                while (it.hasNext()) {
                    MtkCallForwardInfo next = it.next();
                    if (mtkCallForwardInfo == null && next.reason == i2) {
                        mtkCallForwardInfo = next;
                        Rlog.d(MMTelSSTransport.LOG_TAG, "firstCfInfo() reason=" + next.reason + ", service=" + serviceClassToString(next.serviceClass) + ", number=" + MtkSuppServHelper.encryptString(next.number));
                    } else if (mtkCallForwardInfo != null && mtkCallForwardInfo.reason == next.reason && mtkCallForwardInfo.serviceClass == next.serviceClass) {
                        it.remove();
                        Rlog.d(MMTelSSTransport.LOG_TAG, "removeDuplicateCF() reason=" + next.reason + ", service=" + serviceClassToString(next.serviceClass) + ", number=" + MtkSuppServHelper.encryptString(next.number));
                    } else if (mtkCallForwardInfo != null && mtkCallForwardInfo.serviceClass != next.serviceClass) {
                        mtkCallForwardInfo = next;
                        Rlog.d(MMTelSSTransport.LOG_TAG, "reassign cf info, reason=" + next.reason + ", service=" + serviceClassToString(next.serviceClass) + ", number=" + MtkSuppServHelper.encryptString(next.number));
                    }
                }
            }
        }

        public Exception reportXcapException(XcapException xcapException) {
            if (xcapException.isConnectionError()) {
                Rlog.d(MMTelSSTransport.LOG_TAG, "reportXcapException: isConnectionError()");
                return new UnknownHostException();
            }
            if (!MMTelSSTransport.mSSConfig.isHttpErrToUnknownHostErr() || xcapException.getHttpErrorCode() == 0) {
                return xcapException;
            }
            Rlog.d(MMTelSSTransport.LOG_TAG, "reportXcapException: HttpErrCode=" + xcapException.getHttpErrorCode());
            return new UnknownHostException();
        }

        @Override // java.lang.Runnable
        public void run() {
        }

        public String serviceClassToMediaString(int i) {
            if (i == 1) {
                return "audio";
            }
            if (i == 512) {
                return "video";
            }
            return "ERR: " + String.valueOf(i);
        }

        public String serviceClassToString(int i) {
            if (i == 0) {
                return "None";
            }
            if (i == 256) {
                return "Line2";
            }
            if (i == 512) {
                return "Video";
            }
            if (i == 1) {
                return "Voice";
            }
            if (i == 2) {
                return "Data";
            }
            if (i == 4) {
                return "Fax";
            }
            if (i == 8) {
                return "Sms";
            }
            if (i == MMTelSSTransport.MMTELSS_REQ_GET_CF_TIME_SLOT) {
                return "Data sync";
            }
            if (i == 32) {
                return "Data async";
            }
            if (i == 64) {
                return "Packet";
            }
            if (i == 128) {
                return "Pad";
            }
            if (i == 128) {
                return "Max";
            }
            if (i == 513) {
                return "Voice&Video";
            }
            return "ERR: " + String.valueOf(i);
        }

        public int[] serviceNeedToCreate(int i) {
            int[] iArr = new int[1];
            String str = "";
            int mediaTagType = MMTelSSTransport.mSSConfig.getMediaTagType();
            if (mediaTagType == 0) {
                if (i == 0) {
                    iArr[0] = 513;
                } else if (i == 1) {
                    iArr[0] = 512;
                } else if (i == 2) {
                    iArr[0] = 1;
                } else {
                    iArr = new int[0];
                }
            } else if (mediaTagType == 1) {
                if (i == 0) {
                    iArr[0] = 1;
                } else {
                    iArr = new int[0];
                }
            } else if (mediaTagType == 2) {
                if (i == 0) {
                    iArr = new int[]{1, 512};
                } else if (i == 1) {
                    iArr[0] = 512;
                } else if (i == 2) {
                    iArr[0] = 1;
                } else {
                    iArr = new int[0];
                }
            } else if (mediaTagType == 3) {
                if (i == 0) {
                    iArr = new int[]{1, 513};
                } else if (i == 1) {
                    iArr[0] = 513;
                } else if (i == 2) {
                    iArr[0] = 1;
                } else {
                    iArr = new int[0];
                }
            }
            for (int i2 : iArr) {
                str = str + serviceClassToString(i2) + " ";
            }
            Rlog.d(MMTelSSTransport.LOG_TAG, "serviceNeedToCreate(): " + str + ", mediaType=" + mediaTypeToString(mediaTagType) + ", modifiedService=" + modifiedServiceToString(i));
            return iArr;
        }

        public void setForwardTo(Actions actions, String str) {
            if (str != null) {
                actions.setFowardTo(str, true);
            }
        }

        public void setMedia(Conditions conditions, int i) {
            boolean zIsSupportMediaTag = MMTelSSTransport.mSSConfig.isSupportMediaTag();
            Rlog.d(MMTelSSTransport.LOG_TAG, "setMedia() isSupportMedia=" + zIsSupportMediaTag + ", service=" + serviceClassToString(i));
            if (zIsSupportMediaTag) {
                if ((i & 1) != 0) {
                    conditions.addMedia(serviceClassToMediaString(1));
                }
                if ((i & 512) != 0) {
                    conditions.addMedia(serviceClassToMediaString(512));
                }
            }
        }

        public void triggerCSFB(Message message) {
            Rlog.d(MMTelSSTransport.LOG_TAG, "triggerCSFB msg=" + message);
            if (message != null) {
                AsyncResult.forMessage(message, (Object) null, new UnknownHostException());
                message.sendToTarget();
            }
        }

        public void updateNetwork(int i) {
            switch (i) {
                case 0:
                    ((CommunicationDiversion) MMTelSSTransport.this.mCacheSimserv[i]).setNetwork(MMTelSSTransport.this.mNetwork);
                    break;
                case 1:
                    ((OutgoingCommunicationBarring) MMTelSSTransport.this.mCacheSimserv[i]).setNetwork(MMTelSSTransport.this.mNetwork);
                    break;
                case 2:
                    ((IncomingCommunicationBarring) MMTelSSTransport.this.mCacheSimserv[i]).setNetwork(MMTelSSTransport.this.mNetwork);
                    break;
                case XcapException.NO_HTTP_RESPONSE_EXCEPTION /* 3 */:
                    ((CommunicationWaiting) MMTelSSTransport.this.mCacheSimserv[i]).setNetwork(MMTelSSTransport.this.mNetwork);
                    break;
                case XcapException.HTTP_RECOVERABL_EEXCEPTION /* 4 */:
                    ((OriginatingIdentityPresentation) MMTelSSTransport.this.mCacheSimserv[i]).setNetwork(MMTelSSTransport.this.mNetwork);
                    break;
                case XcapException.MALFORMED_CHALLENGE_EXCEPTION /* 5 */:
                    ((OriginatingIdentityPresentationRestriction) MMTelSSTransport.this.mCacheSimserv[i]).setNetwork(MMTelSSTransport.this.mNetwork);
                    break;
                case 6:
                    ((TerminatingIdentityPresentation) MMTelSSTransport.this.mCacheSimserv[i]).setNetwork(MMTelSSTransport.this.mNetwork);
                    break;
                case 7:
                    ((TerminatingIdentityPresentationRestriction) MMTelSSTransport.this.mCacheSimserv[i]).setNetwork(MMTelSSTransport.this.mNetwork);
                    break;
            }
        }
    }

    public MMTelSSTransport() {
        HandlerThread handlerThread = new HandlerThread("MMTelSSTransmitter");
        this.mSenderThread = handlerThread;
        handlerThread.start();
        this.mSender = new MMTelSSTransmitter(this.mSenderThread.getLooper());
        for (int i = 0; i < 8; i++) {
            this.mCacheSimserv[i] = null;
            this.mCachePhoneId[i] = INVALID_PHONE_ID;
            this.mLastQueried[i] = 0;
        }
    }

    private void acquireWakeLock() {
        Rlog.d(LOG_TAG, "=>wakeLock() mRequestMessagesPending = " + this.mRequestMessagesPending + ", mRequestsList.size() = " + this.mRequestsList.size());
        synchronized (this.mWakeLock) {
            this.mWakeLock.acquire();
            this.mRequestMessagesPending++;
            this.mSender.removeMessages(2);
            this.mSender.sendMessageDelayed(this.mSender.obtainMessage(2), this.mWakeLockTimeout);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public MMTelSSRequest findAndRemoveRequestFromList(int i) {
        synchronized (this.mRequestsList) {
            int size = this.mRequestsList.size();
            for (int i2 = 0; i2 < size; i2++) {
                MMTelSSRequest mMTelSSRequest = this.mRequestsList.get(i2);
                if (mMTelSSRequest.mSerial == i) {
                    this.mRequestsList.remove(i2);
                    if (this.mRequestMessagesWaiting > 0) {
                        this.mRequestMessagesWaiting += INVALID_PHONE_ID;
                    }
                    return mMTelSSRequest;
                }
            }
            return null;
        }
    }

    public static MMTelSSTransport getInstance() {
        return INSTANCE;
    }

    private boolean isGbaServiceRunning(Context context) {
        List<ActivityManager.RunningServiceInfo> runningServices = ((ActivityManager) context.getSystemService("activity")).getRunningServices(Integer.MAX_VALUE);
        for (int i = 0; i < runningServices.size(); i++) {
            if (runningServices.get(i).service.getClassName().equals("com.mediatek.gba.GbaService")) {
                Rlog.d(LOG_TAG, "Gba service is running");
                return true;
            }
        }
        return false;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void onReceiveSimStateChangedIntent(Intent intent) {
        String stringExtra = intent.getStringExtra("ss");
        int intExtra = intent.getIntExtra("phone", INVALID_PHONE_ID);
        if ("ABSENT".equals(stringExtra) || intent.getAction().equals("android.intent.action.AIRPLANE_MODE")) {
            Rlog.d(LOG_TAG, "onReceiveSimStateChangedIntent: simStatus=" + stringExtra + "phoneId=" + intExtra);
            for (int i = 0; i < 8; i++) {
                this.mCacheSimserv[i] = null;
                this.mCachePhoneId[i] = INVALID_PHONE_ID;
                this.mLastQueried[i] = 0;
            }
            mSimservs.resetParameters();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void releaseWakeLockIfDone() {
        Rlog.d(LOG_TAG, "wakeLock()=> mRequestMessagesPending = " + this.mRequestMessagesPending + ", mRequestsList.size() = " + this.mRequestsList.size());
        synchronized (this.mWakeLock) {
            if (this.mWakeLock.isHeld() && this.mRequestMessagesPending == 0 && this.mRequestsList.size() == 0) {
                this.mSender.removeMessages(2);
                this.mWakeLock.release();
            }
        }
    }

    static String requestToString(int i) {
        switch (i) {
            case 1:
                return "SET_CLIR";
            case 2:
                return "GET_CLIR";
            case XcapException.NO_HTTP_RESPONSE_EXCEPTION /* 3 */:
                return "GET_CLIP";
            case XcapException.HTTP_RECOVERABL_EEXCEPTION /* 4 */:
                return "GET_COLP";
            case XcapException.MALFORMED_CHALLENGE_EXCEPTION /* 5 */:
                return "GET_COLR";
            case 6:
                return "SET_CB";
            case 7:
                return "GET_CB";
            case 8:
                return "SET_CF";
            case 9:
                return "GET_CF";
            case 10:
                return "SET_CW";
            case 11:
                return "GET_CW";
            case 12:
                return "SET_CLIP";
            case 13:
                return "SET_COLP";
            case 14:
                return "SET_COLR";
            case MMTELSS_REQ_SET_CF_TIME_SLOT /* 15 */:
                return "SET_CF_TIME_SLOT";
            case MMTELSS_REQ_GET_CF_TIME_SLOT /* 16 */:
                return "GET_CF_TIME_SLOT";
            default:
                return "UNKNOWN MMTELSS REQ";
        }
    }

    private void requestXcapNetwork(int i) {
        Rlog.d(LOG_TAG, "requestXcapNetwork(): phoneId = " + i + ", mXcapMobileDataNetworkManager = " + this.mXcapMobileDataNetworkManager);
        this.mNetwork = null;
        XcapMobileDataNetworkManager xcapMobileDataNetworkManager = this.mXcapMobileDataNetworkManager;
        if (xcapMobileDataNetworkManager != null) {
            this.mNetwork = xcapMobileDataNetworkManager.acquireNetwork(i);
            ConnectivityManager connectivityManager = (ConnectivityManager) this.mContext.getSystemService("connectivity");
            if (connectivityManager != null) {
                Rlog.d(LOG_TAG, "Bind process to xcap network");
                connectivityManager.bindProcessToNetwork(this.mNetwork);
            }
        }
    }

    private void send(MMTelSSRequest mMTelSSRequest) {
        Message messageObtainMessage = this.mSender.obtainMessage(1, mMTelSSRequest);
        acquireWakeLock();
        messageObtainMessage.sendToTarget();
    }

    private void startGbaService(Context context) {
        Rlog.d(LOG_TAG, "start gba service");
        synchronized (this.mWaitLock) {
            ComponentName componentName = new ComponentName("com.mediatek.gba", "com.mediatek.gba.GbaService");
            Intent intent = new Intent();
            intent.setComponent(componentName);
            this.mContext.bindService(intent, this.mGbaConnection, 1);
            Rlog.d(LOG_TAG, "Is gba service running = " + isGbaServiceRunning(context));
            try {
                this.mWaitLock.wait(1000L);
            } catch (InterruptedException e) {
                Rlog.d(LOG_TAG, "wait request interrupted");
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean updateNetworkInitSimServ(int i) {
        Rlog.d(LOG_TAG, "updateNetworkInitSimServ:" + i);
        if (mSSConfig.isNotSupportXcap()) {
            Rlog.d(LOG_TAG, "Use CS instead of XCAP.");
            return false;
        }
        mSimservs = MMTelSSUtils.initSimserv(this.mContext, i);
        String xcapRootUri = MMTelSSUtils.getXcapRootUri(i, this.mContext);
        if (xcapRootUri == null || xcapRootUri.isEmpty()) {
            Rlog.d(LOG_TAG, "XcapRoot is empty");
            return false;
        }
        if (!isGbaServiceRunning(this.mContext)) {
            startGbaService(this.mContext);
        }
        requestXcapNetwork(i);
        initAuthentication(xcapRootUri, i, this.mNetwork);
        int phoneId = SubscriptionManager.getPhoneId(SubscriptionManager.getDefaultDataSubscriptionId());
        Rlog.d(LOG_TAG, "defaultDataPhoneId = " + phoneId + ", phoneId = " + i);
        if (this.mNetwork != null || phoneId == i) {
            return true;
        }
        Rlog.e(LOG_TAG, "mNetwork is null anddefault data doesn't match the current SIM card, request XCAP failed.");
        return false;
    }

    public void getCLIR(Message message, int i) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(2, message);
        mMTelSSRequestObtain.mp.writeInt(i);
        send(mMTelSSRequestObtain);
    }

    public void getCOLP(Message message, int i) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(4, message);
        mMTelSSRequestObtain.mp.writeInt(i);
        send(mMTelSSRequestObtain);
    }

    public void getCOLR(Message message, int i) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(5, message);
        mMTelSSRequestObtain.mp.writeInt(i);
        send(mMTelSSRequestObtain);
    }

    public void initAuthentication(String str, final int i, Network network) {
        String digestId = mSSConfig.getDigestId();
        String digestPwd = mSSConfig.getDigestPwd();
        Rlog.d(LOG_TAG, "initAuthentication: xcapRoot=" + str + ", phoneId=" + i + ", network=" + network + ", digestId=" + digestId + ", digestPwd=" + digestPwd);
        if (TextUtils.isEmpty(digestId) && TextUtils.isEmpty(digestPwd)) {
            return;
        }
        Authenticator.setDefault(new Authenticator() { // from class: com.mediatek.ims.legacy.ss.MMTelSSTransport.3
            @Override // java.net.Authenticator
            protected PasswordAuthentication getPasswordAuthentication() {
                String digestId2 = MMTelSSTransport.mSSConfig.getDigestId();
                String digestPwd2 = MMTelSSTransport.mSSConfig.getDigestPwd();
                if (TextUtils.isEmpty(digestId2)) {
                    digestId2 = MMTelSSUtils.getXui(i, MMTelSSTransport.this.mContext);
                }
                Rlog.d(MMTelSSTransport.LOG_TAG, "getPasswordAuthentication: digestId=" + digestId2 + ", digestPwd=" + digestPwd2);
                return new PasswordAuthentication(digestId2, digestPwd2.toCharArray());
            }
        });
        System.setProperty("http.digest.support", XcapElement.TRUE);
    }

    public void queryCLIP(Message message, int i) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(3, message);
        mMTelSSRequestObtain.mp.writeInt(i);
        send(mMTelSSRequestObtain);
    }

    public void queryCallForwardInTimeSlotStatus(int i, int i2, Message message, int i3) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(MMTELSS_REQ_GET_CF_TIME_SLOT, message);
        mMTelSSRequestObtain.mp.writeInt(2);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        mMTelSSRequestObtain.mp.writeInt(i3);
        send(mMTelSSRequestObtain);
    }

    public void queryCallForwardStatus(int i, int i2, String str, Message message, int i3) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(9, message);
        mMTelSSRequestObtain.mp.writeInt(2);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        if (str != null) {
            mMTelSSRequestObtain.mp.writeString(str);
        } else {
            mMTelSSRequestObtain.mp.writeString("");
        }
        mMTelSSRequestObtain.mp.writeInt(i3);
        send(mMTelSSRequestObtain);
    }

    public void queryCallWaiting(int i, Message message, int i2) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(11, message);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        send(mMTelSSRequestObtain);
    }

    public void queryFacilityLock(String str, String str2, int i, Message message, int i2) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(7, message);
        mMTelSSRequestObtain.mp.writeString(str);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        send(mMTelSSRequestObtain);
    }

    public void registerUtService(Context context) {
        this.mContext = context;
        if (this.mWakeLock == null) {
            PowerManager powerManager = (PowerManager) context.getSystemService("power");
            this.pm = powerManager;
            PowerManager.WakeLock wakeLockNewWakeLock = powerManager.newWakeLock(1, LOG_TAG);
            this.mWakeLock = wakeLockNewWakeLock;
            wakeLockNewWakeLock.setReferenceCounted(false);
            this.mWakeLockTimeout = SystemProperties.getInt("ro.ril.wake_lock_timeout", DEFAULT_WAKE_LOCK_TIMEOUT);
        }
        if (this.mXcapMobileDataNetworkManager == null) {
            this.mXcapMobileDataNetworkManager = new XcapMobileDataNetworkManager(this.mContext, this.mSenderThread.getLooper());
        }
        Rlog.d(LOG_TAG, "registerReceiver");
        IntentFilter intentFilter = new IntentFilter();
        this.mFilter = intentFilter;
        intentFilter.addAction("android.intent.action.SIM_STATE_CHANGED");
        this.mFilter.addAction("android.intent.action.AIRPLANE_MODE");
        this.mContext.registerReceiver(this.mIntentReceiver, this.mFilter);
    }

    public void setCLIP(int i, Message message, int i2) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(12, message);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        send(mMTelSSRequestObtain);
    }

    public void setCLIR(int i, Message message, int i2) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(1, message);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        send(mMTelSSRequestObtain);
    }

    public void setCOLP(int i, Message message, int i2) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(13, message);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        send(mMTelSSRequestObtain);
    }

    public void setCOLR(int i, Message message, int i2) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(14, message);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        send(mMTelSSRequestObtain);
    }

    public void setCallForward(int i, int i2, int i3, String str, int i4, Message message, int i5) {
        StringBuilder sb = new StringBuilder();
        sb.append("number: ");
        sb.append(!SENLOG ? str : "[hidden]");
        Rlog.d(LOG_TAG, sb.toString());
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(8, message);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        mMTelSSRequestObtain.mp.writeInt(i3);
        mMTelSSRequestObtain.mp.writeString(str);
        mMTelSSRequestObtain.mp.writeInt(i4);
        mMTelSSRequestObtain.mp.writeInt(i5);
        send(mMTelSSRequestObtain);
    }

    public void setCallForwardInTimeSlot(int i, int i2, int i3, String str, int i4, long[] jArr, Message message, int i5) {
        if (str != null && !str.startsWith("sip:") && !str.startsWith("sips:") && !str.startsWith("tel:")) {
            str = "tel:" + str;
        }
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(MMTELSS_REQ_SET_CF_TIME_SLOT, message);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        mMTelSSRequestObtain.mp.writeInt(i3);
        mMTelSSRequestObtain.mp.writeString(str);
        mMTelSSRequestObtain.mp.writeInt(i4);
        mMTelSSRequestObtain.mp.writeLongArray(jArr);
        mMTelSSRequestObtain.mp.writeInt(i5);
        send(mMTelSSRequestObtain);
    }

    public void setCallWaiting(boolean z, int i, Message message, int i2) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(10, message);
        mMTelSSRequestObtain.mp.writeInt(!z ? 0 : 1);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        send(mMTelSSRequestObtain);
    }

    public void setFacilityLock(String str, boolean z, String str2, int i, Message message, int i2) {
        mSSConfig = SuppSrvConfig.getInstance(this.mContext);
        MMTelSSRequest mMTelSSRequestObtain = MMTelSSRequest.obtain(6, message);
        mMTelSSRequestObtain.mp.writeString(str);
        mMTelSSRequestObtain.mp.writeInt(!z ? 0 : 1);
        mMTelSSRequestObtain.mp.writeInt(i);
        mMTelSSRequestObtain.mp.writeInt(i2);
        send(mMTelSSRequestObtain);
    }
}
