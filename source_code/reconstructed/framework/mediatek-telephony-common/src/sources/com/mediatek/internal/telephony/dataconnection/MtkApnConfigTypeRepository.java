package com.mediatek.internal.telephony.dataconnection;

import android.os.PersistableBundle;
import android.os.SystemProperties;
import com.android.internal.telephony.dataconnection.ApnConfigType;
import com.android.internal.telephony.dataconnection.ApnConfigTypeRepository;
import vendor.mediatek.hardware.mtkradioex.V2_0.MtkApnTypes;

/* JADX INFO: loaded from: classes.dex */
public class MtkApnConfigTypeRepository extends ApnConfigTypeRepository {
    public MtkApnConfigTypeRepository(PersistableBundle persistableBundle) {
        super(persistableBundle);
    }

    protected void setup(PersistableBundle persistableBundle) {
        super.setup(persistableBundle);
        this.mConfigTypeMap.remove(64);
        this.mConfigTypeMap.put(64, new ApnConfigType(64, -1));
        if (SystemProperties.getInt("persist.vendor.mims_support", 1) > 1) {
            this.mConfigTypeMap.remove(512);
            this.mConfigTypeMap.put(512, new ApnConfigType(512, -1));
        }
        this.mConfigTypeMap.put(Integer.valueOf(MtkApnTypes.RCS), new ApnConfigType(MtkApnTypes.RCS, 3));
        this.mConfigTypeMap.put(Integer.valueOf(MtkApnTypes.BIP), new ApnConfigType(MtkApnTypes.BIP, 3));
        this.mConfigTypeMap.put(Integer.valueOf(MtkApnTypes.VSIM), new ApnConfigType(MtkApnTypes.VSIM, -1));
    }
}
