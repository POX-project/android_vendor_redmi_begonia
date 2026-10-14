package com.mediatek.internal.telephony.rsu;

import android.content.Context;
import android.os.SystemProperties;
import android.telephony.Rlog;
import com.android.internal.telephony.CommandsInterface;
import com.mediatek.internal.telephony.OpTelephonyCustomizationUtils;
import com.mediatek.internal.telephony.uicc.IMtkRsuSml;
import com.mediatek.telephony.MtkTelephonyManagerEx;

/* JADX INFO: loaded from: classes.dex */
public class MtkRsuSmlFactory {
    private static final int OP08_POLICY = 15;
    private static final String TAG = "MtkRsuSmlFactory";

    public static IMtkRsuSml checkAndMakeRsuSml(IMtkRsuSml iMtkRsuSml, Context context, CommandsInterface[] commandsInterfaceArr, String str) {
        return (iMtkRsuSml != null && isOperatorRsu(iMtkRsuSml, str)) ? iMtkRsuSml : makeRsuSml(context, commandsInterfaceArr, str);
    }

    public static MtkRsuSmlFactory getFactory(Context context) {
        return new MtkRsuSmlFactory();
    }

    public static boolean isOperatorRsu(IMtkRsuSml iMtkRsuSml, String str) {
        if (iMtkRsuSml instanceof Op08RsuSml15) {
            return "".equalsIgnoreCase(str);
        }
        return false;
    }

    private static void logD(String str) {
        Rlog.d(TAG, str);
    }

    public static IMtkRsuSml makeRsuSml(Context context, CommandsInterface[] commandsInterfaceArr) {
        int simLockPolicy = MtkTelephonyManagerEx.getDefault().getSimLockPolicy();
        String str = SystemProperties.get("ro.vendor.sim_me_lock_mode", "");
        logD("[RSU-SIMLOCK] mode: " + str + ", policy=" + simLockPolicy + ", ci=" + commandsInterfaceArr);
        return (str.equalsIgnoreCase("800") || simLockPolicy == 15) ? new Op08RsuSml15(context, commandsInterfaceArr) : OpTelephonyCustomizationUtils.getOpFactory(context).makeRsuSml(context, commandsInterfaceArr);
    }

    public static IMtkRsuSml makeRsuSml(Context context, CommandsInterface[] commandsInterfaceArr, String str) {
        if (str == null) {
            return makeRsuSml(context, commandsInterfaceArr);
        }
        if (!str.equalsIgnoreCase("OP08")) {
            return null;
        }
        logD("Create new OP08 rsu instance.");
        return new Op08RsuSml15(context, commandsInterfaceArr);
    }
}
