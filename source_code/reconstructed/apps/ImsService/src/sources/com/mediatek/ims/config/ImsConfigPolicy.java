package com.mediatek.ims.config;

import java.util.HashMap;

/* JADX INFO: loaded from: classes.dex */
public abstract class ImsConfigPolicy {
    private HashMap<Integer, DefaultConfig> mDefConfigs = new HashMap<>();
    private String mTag;

    public static class DefaultConfig {
        int configId;
        public String defVal;
        public int unitId;

        private DefaultConfig() {
            this.configId = 0;
            this.defVal = null;
            this.unitId = -1;
        }

        public DefaultConfig(int i) {
            this.configId = 0;
            this.defVal = null;
            this.unitId = -1;
            this.configId = i;
        }
    }

    public ImsConfigPolicy(String str) {
        this.mTag = "ImsConfigPolicy";
        this.mTag = str;
    }

    HashMap<Integer, DefaultConfig> fetchDefaultValues() {
        for (Integer num : ImsConfigSettings.getConfigSettings().keySet()) {
            DefaultConfig defaultConfig = new DefaultConfig(num.intValue());
            if (onSetDefaultValue(num.intValue(), defaultConfig)) {
                if (!ImsConfigContract.Validator.isValidUnitId(defaultConfig.unitId)) {
                    throw new IllegalArgumentException("Invalid unitId " + defaultConfig.unitId + " on config " + num);
                }
                this.mDefConfigs.put(num, defaultConfig);
            }
        }
        return this.mDefConfigs;
    }

    public abstract boolean onSetDefaultValue(int i, DefaultConfig defaultConfig);
}
