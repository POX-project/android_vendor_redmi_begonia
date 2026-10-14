package com.mediatek.simservs.xcap;

import com.mediatek.simservs.client.policy.Rule;
import com.mediatek.simservs.client.policy.RuleSet;

/* JADX INFO: loaded from: classes.dex */
public interface RuleType {
    RuleSet createNewRuleSet();

    RuleSet getRuleSet();

    void saveRule(Rule rule) throws XcapException;

    void saveRule(String str) throws XcapException;

    void saveRuleSet() throws XcapException;
}
