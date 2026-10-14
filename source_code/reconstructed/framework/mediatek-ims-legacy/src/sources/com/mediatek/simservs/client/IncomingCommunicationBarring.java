package com.mediatek.simservs.client;

import android.net.Network;
import android.util.Log;
import com.mediatek.simservs.client.policy.Rule;
import com.mediatek.simservs.client.policy.RuleSet;
import com.mediatek.simservs.xcap.RuleType;
import com.mediatek.simservs.xcap.XcapException;
import com.mediatek.xcap.client.uri.XcapUri;
import java.util.LinkedList;
import javax.xml.parsers.ParserConfigurationException;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class IncomingCommunicationBarring extends SimservType implements RuleType {
    public static final String NODE_NAME = "incoming-communication-barring";
    RuleSet mRuleSet;

    public IncomingCommunicationBarring(XcapUri xcapUri, String str, String str2) throws ParserConfigurationException, XcapException {
        super(xcapUri, str, str2);
    }

    @Override // com.mediatek.simservs.xcap.RuleType
    public RuleSet createNewRuleSet() {
        this.mRuleSet = new RuleSet(this.mXcapUri, NODE_NAME, this.mIntendedId);
        if (this.mNetwork != null) {
            this.mRuleSet.setNetwork(this.mNetwork);
        }
        if (this.mEtag != null) {
            this.mRuleSet.setEtag(this.mEtag);
        }
        return this.mRuleSet;
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    @Override // com.mediatek.simservs.xcap.RuleType
    public RuleSet getRuleSet() {
        return this.mRuleSet;
    }

    @Override // com.mediatek.simservs.client.SimservType
    public void initServiceInstance(Document document) {
        NodeList elementsByTagName = document.getElementsByTagName("ruleset");
        if (elementsByTagName.getLength() > 0) {
            Log.d("IncomingCommunicationBarring", "Got ruleset");
            this.mRuleSet = new RuleSet(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagName.item(0));
            if (this.mNetwork != null) {
                this.mRuleSet.setNetwork(this.mNetwork);
            }
            if (this.mEtag != null) {
                this.mRuleSet.setEtag(this.mEtag);
                return;
            }
            return;
        }
        NodeList elementsByTagNameNS = document.getElementsByTagNameNS("urn:ietf:params:xml:ns:common-policy", "ruleset");
        if (elementsByTagNameNS.getLength() > 0) {
            Log.d("IncomingCommunicationBarring", "Got ruleset");
            this.mRuleSet = new RuleSet(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagNameNS.item(0));
            if (this.mNetwork != null) {
                this.mRuleSet.setNetwork(this.mNetwork);
            }
            if (this.mEtag != null) {
                this.mRuleSet.setEtag(this.mEtag);
                return;
            }
            return;
        }
        NodeList elementsByTagName2 = document.getElementsByTagName(RuleSet.NODE_NAME);
        if (elementsByTagName2.getLength() <= 0) {
            this.mRuleSet = new RuleSet(this.mXcapUri, NODE_NAME, this.mIntendedId);
            if (this.mNetwork != null) {
                this.mRuleSet.setNetwork(this.mNetwork);
            }
            if (this.mEtag != null) {
                this.mRuleSet.setEtag(this.mEtag);
                return;
            }
            return;
        }
        Log.d("IncomingCommunicationBarring", "Got cp:ruleset");
        this.mRuleSet = new RuleSet(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagName2.item(0));
        if (this.mNetwork != null) {
            this.mRuleSet.setNetwork(this.mNetwork);
        }
        if (this.mEtag != null) {
            this.mRuleSet.setEtag(this.mEtag);
        }
    }

    public void save(boolean z) throws XcapException {
        saveNode(z, this.mRuleSet);
        if (this.mEtag != null) {
            Log.d("IncomingCommunicationBarring", "save: mEtag=" + this.mEtag);
            this.mRuleSet.setEtag(this.mEtag);
        }
    }

    @Override // com.mediatek.simservs.xcap.RuleType
    public void saveRule(Rule rule) throws XcapException {
        if (rule == null) {
            Log.d("saveRule", "rule is null");
            return;
        }
        String xmlString = rule.toXmlString();
        if (xmlString == null) {
            Log.e("IncomingCommunicationBarring", "saveRule: null xml: " + rule.mId);
            return;
        }
        rule.setContent(xmlString);
        if (rule.getEtag() != null) {
            this.mEtag = rule.getEtag();
            Log.d("IncomingCommunicationBarring", "saveRule: mEtag=" + this.mEtag);
            this.mRuleSet.setEtag(this.mEtag);
        }
    }

    @Override // com.mediatek.simservs.xcap.RuleType
    public void saveRule(String str) throws XcapException {
        if (str == null || str.isEmpty()) {
            Log.d("saveRule", "ruleId is null");
            return;
        }
        for (Rule rule : (LinkedList) this.mRuleSet.getRules()) {
            if (str.equals(rule.mId)) {
                saveRule(rule);
                return;
            }
        }
    }

    @Override // com.mediatek.simservs.xcap.RuleType
    public void saveRuleSet() throws XcapException {
        String xmlString = this.mRuleSet.toXmlString();
        if (xmlString == null) {
            Log.e("IncomingCommunicationBarring", "saveRuleSet: null xml");
            return;
        }
        this.mRuleSet.setContent(xmlString);
        if (this.mRuleSet.getEtag() != null) {
            this.mEtag = this.mRuleSet.getEtag();
            Log.d("IncomingCommunicationBarring", "saveRuleSet: mEtag=" + this.mEtag);
            this.mRuleSet.setEtag(this.mEtag);
        }
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    public void setNetwork(Network network) {
        super.setNetwork(network);
        if (network == null || this.mRuleSet == null) {
            return;
        }
        Log.d(SimservType.TAG, "XCAP dedicated network netid to mRuleSet:" + network);
        this.mRuleSet.setNetwork(network);
    }
}
