package com.mediatek.ims.config;

import android.os.SystemProperties;
import android.util.Log;
import com.mediatek.ims.config.op.DefaultConfigPolicy;
import com.mediatek.ims.config.op.Op06ConfigPolicy;
import com.mediatek.ims.config.op.Op08ConfigPolicy;
import com.mediatek.ims.config.op.Op12ConfigPolicy;
import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public class DefaultConfigPolicyFactory {
    private static final String TAG = "DefaultCfgPolicyFactory";
    private ImsConfigPolicy mConfigPolicy;
    private HashMap<Integer, ImsConfigPolicy.DefaultConfig> mDefConfigs;

    private DefaultConfigPolicyFactory() {
        this.mDefConfigs = new HashMap<>();
        this.mConfigPolicy = null;
    }

    private DefaultConfigPolicyFactory(int i) {
        this.mDefConfigs = new HashMap<>();
        this.mConfigPolicy = null;
        Log.d(TAG, "Load defalut policy operator: " + i);
        if (i == 6) {
            this.mConfigPolicy = new Op06ConfigPolicy();
            return;
        }
        if (i == 8) {
            this.mConfigPolicy = new Op08ConfigPolicy();
        } else if (i != 12) {
            this.mConfigPolicy = new DefaultConfigPolicy();
        } else {
            this.mConfigPolicy = new Op12ConfigPolicy();
        }
    }

    public static DefaultConfigPolicyFactory getInstance(int i) {
        String str = SystemProperties.get("persist.vendor.operator.optr");
        int i2 = 0;
        if (str != null && str.length() > 2) {
            i2 = Integer.parseInt(str.substring(2));
        }
        return getInstanceByOpCode(i2);
    }

    public static DefaultConfigPolicyFactory getInstanceByOpCode(int i) {
        return new DefaultConfigPolicyFactory(i);
    }

    public void clear() {
        this.mDefConfigs = null;
    }

    public boolean hasDefaultValue(int i) {
        return this.mDefConfigs.containsKey(Integer.valueOf(i));
    }

    public HashMap load() {
        ImsConfigPolicy imsConfigPolicy = this.mConfigPolicy;
        if (imsConfigPolicy != null) {
            this.mDefConfigs = imsConfigPolicy.fetchDefaultValues();
        }
        return this.mDefConfigs;
    }
}
