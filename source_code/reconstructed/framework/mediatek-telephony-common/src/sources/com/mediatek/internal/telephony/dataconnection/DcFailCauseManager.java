package com.mediatek.internal.telephony.dataconnection;

import android.telephony.Rlog;
import android.telephony.TelephonyManager;
import android.util.SparseArray;
import com.android.internal.telephony.Phone;
import java.util.EnumSet;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class DcFailCauseManager {
    public static final boolean DBG = true;
    public static final String DEFAULT_DATA_RETRY_CONFIG_OP19 = "max_retries=10, 720000,1440000,2880000,5760000,11520000,23040000,23040000,23040000,23040000,46080000";
    public static final String LOG_TAG = "DcFcMgr";
    public static final boolean VDBG = false;
    private Phone mPhone;
    private static final SparseArray<DcFailCauseManager> sDcFailCauseManager = new SparseArray<>();
    private static final String[][] specificPLMN = {new String[]{"50501"}, new String[]{"732101"}};
    private static final int[] CC33_FAIL_CAUSE_TABLE = {29, 33};

    /* JADX INFO: renamed from: com.mediatek.internal.telephony.dataconnection.DcFailCauseManager$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {
        static final /* synthetic */ int[] $SwitchMap$com$mediatek$internal$telephony$dataconnection$DcFailCauseManager$Operator;

        static {
            int[] iArr = new int[Operator.values().length];
            $SwitchMap$com$mediatek$internal$telephony$dataconnection$DcFailCauseManager$Operator = iArr;
            try {
                iArr[Operator.OP120.ordinal()] = 1;
            } catch (NoSuchFieldError e) {
            }
            try {
                $SwitchMap$com$mediatek$internal$telephony$dataconnection$DcFailCauseManager$Operator[Operator.OP19.ordinal()] = 2;
            } catch (NoSuchFieldError e2) {
            }
        }
    }

    public enum Operator {
        NONE(-1),
        OP19(0),
        OP120(1);

        private static final HashMap<Integer, Operator> lookup = new HashMap<>();
        private int value;

        static {
            for (Operator operator : EnumSet.allOf(Operator.class)) {
                lookup.put(Integer.valueOf(operator.getValue()), operator);
            }
        }

        Operator(int i) {
            this.value = i;
        }

        public static Operator get(int i) {
            return lookup.get(Integer.valueOf(i));
        }

        public int getValue() {
            return this.value;
        }
    }

    public enum retryConfigForCC33 {
        maxRetryCount(2),
        retryTime(45000),
        randomizationTime(0);

        private final int value;

        retryConfigForCC33(int i) {
            this.value = i;
        }

        public int getValue() {
            return this.value;
        }
    }

    private enum retryConfigForDefault {
        maxRetryCount(1),
        retryTime(0),
        randomizationTime(0);

        private final int value;

        retryConfigForDefault(int i) {
            this.value = i;
        }

        public int getValue() {
            return this.value;
        }
    }

    private DcFailCauseManager(Phone phone) {
        log("DcFcMgr.constructor");
        this.mPhone = phone;
    }

    public static DcFailCauseManager getInstance(Phone phone) {
        if (phone == null) {
            Rlog.e(LOG_TAG, "Can't get phone to init!");
            return null;
        }
        int phoneId = phone.getPhoneId();
        if (phoneId < 0) {
            Rlog.e(LOG_TAG, "PhoneId[" + phoneId + "] is invalid!");
            return null;
        }
        DcFailCauseManager dcFailCauseManager = sDcFailCauseManager.get(phoneId);
        if (dcFailCauseManager != null) {
            return dcFailCauseManager;
        }
        Rlog.d(LOG_TAG, "For phoneId:" + phoneId + " doesn't exist, create it");
        DcFailCauseManager dcFailCauseManager2 = new DcFailCauseManager(phone);
        sDcFailCauseManager.put(phoneId, dcFailCauseManager2);
        return dcFailCauseManager2;
    }

    private Operator getSpecificNetworkOperator() {
        Operator operator = Operator.NONE;
        String networkOperatorForPhone = "";
        try {
            networkOperatorForPhone = TelephonyManager.getDefault().getNetworkOperatorForPhone(this.mPhone.getPhoneId());
            log("Check PLMN=" + networkOperatorForPhone);
        } catch (Exception e) {
            loge("get plmn fail");
            e.printStackTrace();
        }
        for (int i = 0; i < specificPLMN.length; i++) {
            boolean z = false;
            int i2 = 0;
            while (true) {
                String[][] strArr = specificPLMN;
                if (i2 >= strArr[i].length) {
                    break;
                }
                if (networkOperatorForPhone.equals(strArr[i][i2])) {
                    z = true;
                    break;
                }
                i2++;
            }
            if (z) {
                Operator operator2 = Operator.get(i);
                log("Serving in specific network op=" + operator2 + "(" + i + ")");
                return operator2;
            }
        }
        return operator;
    }

    private Operator getSpecificSimOperator() {
        Operator operator = Operator.NONE;
        String simOperatorNumericForPhone = "";
        try {
            simOperatorNumericForPhone = TelephonyManager.getDefault().getSimOperatorNumericForPhone(this.mPhone.getPhoneId());
            log("Check HPLMN=" + simOperatorNumericForPhone);
        } catch (Exception e) {
            loge("get hplmn fail");
            e.printStackTrace();
        }
        for (int i = 0; i < specificPLMN.length; i++) {
            boolean z = false;
            int i2 = 0;
            while (true) {
                String[][] strArr = specificPLMN;
                if (i2 >= strArr[i].length) {
                    break;
                }
                if (simOperatorNumericForPhone.equals(strArr[i][i2])) {
                    z = true;
                    break;
                }
                i2++;
            }
            if (z) {
                Operator operator2 = Operator.get(i);
                log("Serving in specific sim op=" + operator2 + "(" + i + ")");
                return operator2;
            }
        }
        return operator;
    }

    private void log(String str) {
        Rlog.d(LOG_TAG, str);
    }

    private void loge(String str) {
        Rlog.e(LOG_TAG, str);
    }

    public void dispose() {
        log("DcFcMgr.dispose");
        sDcFailCauseManager.remove(this.mPhone.getPhoneId());
    }

    public long getRetryTimeByIndex(int i, Operator operator) {
        String str = AnonymousClass1.$SwitchMap$com$mediatek$internal$telephony$dataconnection$DcFailCauseManager$Operator[operator.ordinal()] == 2 ? DEFAULT_DATA_RETRY_CONFIG_OP19 : null;
        if (str == null) {
            return -1L;
        }
        try {
            return Long.parseLong(str.split(",")[i]);
        } catch (IndexOutOfBoundsException e) {
            loge("get retry time by index fail");
            e.printStackTrace();
            return -1L;
        }
    }

    public long getSuggestedRetryDelayByOp(int i) {
        long value = -2;
        if (AnonymousClass1.$SwitchMap$com$mediatek$internal$telephony$dataconnection$DcFailCauseManager$Operator[getSpecificNetworkOperator().ordinal()] == 1) {
            for (int i2 : CC33_FAIL_CAUSE_TABLE) {
                if (i == i2) {
                    value = retryConfigForCC33.retryTime.getValue();
                }
            }
        }
        return value;
    }

    public boolean isNetworkOperatorForCC33() {
        return AnonymousClass1.$SwitchMap$com$mediatek$internal$telephony$dataconnection$DcFailCauseManager$Operator[getSpecificNetworkOperator().ordinal()] == 1;
    }

    public boolean isSpecificNetworkAndSimOperator(Operator operator) {
        if (operator != null) {
            return operator == getSpecificNetworkOperator() && operator == getSpecificSimOperator();
        }
        loge("op is null, return false!");
        return false;
    }

    public boolean isSpecificNetworkOperator(Operator operator) {
        if (operator != null) {
            return operator == getSpecificNetworkOperator();
        }
        loge("op is null, return false!");
        return false;
    }

    public String toString() {
        return "sDcFailCauseManager: " + sDcFailCauseManager;
    }
}
