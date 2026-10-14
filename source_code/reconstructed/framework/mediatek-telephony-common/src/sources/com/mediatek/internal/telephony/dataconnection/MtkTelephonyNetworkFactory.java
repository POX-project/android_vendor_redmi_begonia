package com.mediatek.internal.telephony.dataconnection;

import android.net.NetworkCapabilities;
import android.os.Looper;
import com.android.internal.telephony.Phone;
import com.android.internal.telephony.dataconnection.TelephonyNetworkFactory;

/* JADX INFO: loaded from: classes.dex */
public class MtkTelephonyNetworkFactory extends TelephonyNetworkFactory {
    public MtkTelephonyNetworkFactory(Looper looper, Phone phone) {
        super(looper, phone);
    }

    protected NetworkCapabilities makeNetworkFilter(int i) {
        NetworkCapabilities networkCapabilitiesMakeNetworkFilter = super.makeNetworkFilter(i);
        networkCapabilitiesMakeNetworkFilter.addCapability(27);
        networkCapabilitiesMakeNetworkFilter.addCapability(26);
        return networkCapabilitiesMakeNetworkFilter;
    }

    protected boolean mtkIgnoreCapabilityCheck(NetworkCapabilities networkCapabilities, int i) {
        if (!networkCapabilities.hasCapability(4) && !networkCapabilities.hasCapability(10)) {
            if (!networkCapabilities.hasCapability(26)) {
                return false;
            }
            log("ignoreCapabilityCheck() ignore VSIM PDN");
            return true;
        }
        if (i != 1) {
            log("ignoreCapabilityCheck() ignore IMS/EIMS PDN");
            return true;
        }
        if (MtkDcHelper.getInstance().isMultiPsAttachSupport()) {
            log("ignoreCapabilityCheck() allow IMS/EIMS pdn activation");
            return true;
        }
        log("ignoreCapabilityCheck() reject IMS/EIMS pdn activation");
        return false;
    }
}
