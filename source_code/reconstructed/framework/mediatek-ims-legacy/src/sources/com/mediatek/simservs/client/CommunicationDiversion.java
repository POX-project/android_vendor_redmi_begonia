package com.mediatek.simservs.client;

import android.net.Network;
import android.util.Log;
import com.mediatek.simservs.client.policy.Rule;
import com.mediatek.simservs.client.policy.RuleSet;
import com.mediatek.simservs.xcap.RuleType;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.simservs.xcap.XcapException;
import com.mediatek.xcap.client.uri.XcapUri;
import java.net.URISyntaxException;
import java.util.LinkedList;
import javax.xml.parsers.ParserConfigurationException;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class CommunicationDiversion extends SimservType implements RuleType {
    public static final String NODE_NAME = "communication-diversion";
    private static final int NO_REPLY_TIMER_DEFAULT_VAULE = -2;
    NoReplyTimer mNoReplyTimer;
    RuleSet mRuleSet;

    public class NoReplyTimer extends XcapElement {
        public static final String NODE_NAME = "NoReplyTimer";
        private static final String NODE_XML_NAMESPACE_FORMAT = "?xmlns(%s=%s)";
        private String mNameSpace;
        private String mNodeName;
        private String mPrefix;
        public int mValue;

        public NoReplyTimer(XcapUri xcapUri, String str, String str2) {
            super(xcapUri, str, str2);
        }

        public NoReplyTimer(XcapUri xcapUri, String str, String str2, int i) {
            super(xcapUri, str, str2);
            this.mValue = i;
        }

        public NoReplyTimer(CommunicationDiversion communicationDiversion, XcapUri xcapUri, String str, String str2, int i, String str3, String str4) {
            this(xcapUri, str, str2, i);
            this.mPrefix = str3;
            if (str3 != null && str4 != null) {
                this.mNameSpace = String.format(NODE_XML_NAMESPACE_FORMAT, str3, str4);
                this.mNodeName = String.format("%s:NoReplyTimer", str3);
            }
            Log.d("[NoReplyTimer]", "prefix =" + this.mPrefix + ", uri =" + this.mNameSpace + "\n[NoReplyTimer]node =" + this.mNodeName);
        }

        @Override // com.mediatek.simservs.xcap.XcapElement
        protected String getNodeName() {
            return this.mPrefix != null ? this.mNodeName : "NoReplyTimer";
        }

        public int getValue() {
            return this.mValue;
        }

        @Override // com.mediatek.simservs.xcap.XcapElement
        public void setContent(String str) throws XcapException {
            try {
                this.mNodeUri = getNodeUri().toString();
                if (this.mPrefix != null) {
                    this.mNodeUri += this.mNameSpace;
                }
                Log.d("NoReplyTimer", "setContent etag=" + this.mEtag);
                saveContent(str);
            } catch (URISyntaxException e) {
                e.printStackTrace();
            }
        }

        public void setValue(int i) {
            this.mValue = i;
        }

        public String toXmlString() {
            String str = this.mPrefix != null ? this.mNodeName : "NoReplyTimer";
            return String.format("<%s>" + String.valueOf(this.mValue) + "</%s>", str, str);
        }
    }

    public CommunicationDiversion(XcapUri xcapUri, String str, String str2) throws ParserConfigurationException, XcapException {
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

    public int getNoReplyTimer() {
        return this.mNoReplyTimer.getValue();
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
        int i;
        int i2;
        int i3;
        NodeList elementsByTagName = document.getElementsByTagName("NoReplyTimer");
        if (elementsByTagName.getLength() > 0) {
            Log.d("CommunicationDiversion", "Got NoReplyTimer");
            String prefix = elementsByTagName.item(0).getPrefix();
            String namespaceURI = elementsByTagName.item(0).getNamespaceURI();
            try {
                i3 = Integer.parseInt(((Element) elementsByTagName.item(0)).getFirstChild().getTextContent().trim());
            } catch (NumberFormatException e) {
                e.printStackTrace();
                i3 = NO_REPLY_TIMER_DEFAULT_VAULE;
            }
            this.mNoReplyTimer = new NoReplyTimer(this, this.mXcapUri, NODE_NAME, this.mIntendedId, i3, prefix, namespaceURI);
            if (this.mNetwork != null) {
                this.mNoReplyTimer.setNetwork(this.mNetwork);
            }
            if (this.mEtag != null) {
                this.mNoReplyTimer.setEtag(this.mEtag);
            }
        } else {
            NodeList elementsByTagNameNS = document.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "NoReplyTimer");
            if (elementsByTagNameNS.getLength() > 0) {
                Log.d("CommunicationDiversion", "Got NoReplyTimer with xcap namespace");
                String prefix2 = elementsByTagNameNS.item(0).getPrefix();
                String namespaceURI2 = elementsByTagNameNS.item(0).getNamespaceURI();
                try {
                    i2 = Integer.parseInt(((Element) elementsByTagNameNS.item(0)).getFirstChild().getTextContent().trim());
                } catch (NumberFormatException e2) {
                    e2.printStackTrace();
                    i2 = NO_REPLY_TIMER_DEFAULT_VAULE;
                }
                this.mNoReplyTimer = new NoReplyTimer(this, this.mXcapUri, NODE_NAME, this.mIntendedId, i2, prefix2, namespaceURI2);
                if (this.mNetwork != null) {
                    this.mNoReplyTimer.setNetwork(this.mNetwork);
                }
                if (this.mEtag != null) {
                    this.mNoReplyTimer.setEtag(this.mEtag);
                }
            } else {
                NodeList elementsByTagName2 = document.getElementsByTagName("ss:NoReplyTimer");
                if (elementsByTagName2.getLength() > 0) {
                    Log.d("CommunicationDiversion", "Got ss:NoReplyTimer");
                    String prefix3 = elementsByTagName2.item(0).getPrefix();
                    String namespaceURI3 = elementsByTagName2.item(0).getNamespaceURI();
                    try {
                        i = Integer.parseInt(((Element) elementsByTagName2.item(0)).getFirstChild().getTextContent().trim());
                    } catch (NumberFormatException e3) {
                        e3.printStackTrace();
                        i = NO_REPLY_TIMER_DEFAULT_VAULE;
                    }
                    this.mNoReplyTimer = new NoReplyTimer(this, this.mXcapUri, NODE_NAME, this.mIntendedId, i, prefix3, namespaceURI3);
                    if (this.mNetwork != null) {
                        this.mNoReplyTimer.setNetwork(this.mNetwork);
                    }
                    if (this.mEtag != null) {
                        this.mNoReplyTimer.setEtag(this.mEtag);
                    }
                } else {
                    this.mNoReplyTimer = new NoReplyTimer(this.mXcapUri, NODE_NAME, this.mIntendedId, -1);
                    if (this.mNetwork != null) {
                        this.mNoReplyTimer.setNetwork(this.mNetwork);
                    }
                    if (this.mEtag != null) {
                        this.mNoReplyTimer.setEtag(this.mEtag);
                    }
                }
            }
        }
        NodeList elementsByTagName3 = document.getElementsByTagName("ruleset");
        String str = this.mPrefix;
        String str2 = NODE_NAME;
        if (str != null) {
            str2 = this.mPrefix + ":" + NODE_NAME;
        }
        String str3 = str2;
        if (elementsByTagName3.getLength() > 0) {
            Log.d("CommunicationDiversion", "Got ruleset");
            this.mRuleSet = new RuleSet(this.mXcapUri, str3, this.mIntendedId, (Element) elementsByTagName3.item(0));
            if (this.mNetwork != null) {
                this.mRuleSet.setNetwork(this.mNetwork);
            }
            if (this.mEtag != null) {
                this.mRuleSet.setEtag(this.mEtag);
                return;
            }
            return;
        }
        NodeList elementsByTagNameNS2 = document.getElementsByTagNameNS("urn:ietf:params:xml:ns:common-policy", "ruleset");
        if (elementsByTagNameNS2.getLength() > 0) {
            Log.d("CommunicationDiversion", "Got ruleset with commmon policy namespace");
            this.mRuleSet = new RuleSet(this.mXcapUri, str3, this.mIntendedId, (Element) elementsByTagNameNS2.item(0));
            if (this.mNetwork != null) {
                this.mRuleSet.setNetwork(this.mNetwork);
            }
            if (this.mEtag != null) {
                this.mRuleSet.setEtag(this.mEtag);
                return;
            }
            return;
        }
        NodeList elementsByTagName4 = document.getElementsByTagName(RuleSet.NODE_NAME);
        if (elementsByTagName4.getLength() <= 0) {
            this.mRuleSet = new RuleSet(this.mXcapUri, str3, this.mIntendedId);
            if (this.mNetwork != null) {
                this.mRuleSet.setNetwork(this.mNetwork);
            }
            if (this.mEtag != null) {
                this.mRuleSet.setEtag(this.mEtag);
                return;
            }
            return;
        }
        Log.d("CommunicationDiversion", "Got cp:ruleset");
        this.mRuleSet = new RuleSet(this.mXcapUri, str3, this.mIntendedId, (Element) elementsByTagName4.item(0));
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
            Log.d("CommunicationDiversion", "save: mEtag=" + this.mEtag);
            this.mRuleSet.setEtag(this.mEtag);
            this.mNoReplyTimer.setEtag(this.mEtag);
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
            Log.e("CommunicationDiversion", "saveRule: null xml string: " + rule.mId);
            return;
        }
        rule.setContent(xmlString, this.mHasXcapNS);
        if (rule.getEtag() != null) {
            this.mEtag = rule.getEtag();
            Log.d("CommunicationDiversion", "saveRule: mEtag=" + this.mEtag);
            this.mRuleSet.setEtag(this.mEtag);
            this.mNoReplyTimer.setEtag(this.mEtag);
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
            Log.e("CommunicationDiversion", "saveRuleSet: null xml string");
            return;
        }
        this.mRuleSet.setContent(xmlString);
        if (this.mRuleSet.getEtag() != null) {
            this.mEtag = this.mRuleSet.getEtag();
            Log.d("CommunicationDiversion", "saveRuleSet: mEtag=" + this.mEtag);
            this.mRuleSet.setEtag(this.mEtag);
            this.mNoReplyTimer.setEtag(this.mEtag);
        }
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    public void setNetwork(Network network) {
        super.setNetwork(network);
        if (network != null) {
            if (this.mNoReplyTimer != null) {
                Log.d(SimservType.TAG, "XCAP dedicated network netid to mNoReplyTimer:" + network);
                this.mNoReplyTimer.setNetwork(this.mNetwork);
            }
            if (this.mRuleSet != null) {
                Log.d(SimservType.TAG, "XCAP dedicated network netid to mRuleSet:" + network);
                this.mRuleSet.setNetwork(this.mNetwork);
            }
        }
    }

    public void setNoReplyTimer(int i, boolean z) throws XcapException {
        this.mNoReplyTimer.setValue(i);
        if (z) {
            this.mNoReplyTimer.setContent(this.mNoReplyTimer.toXmlString());
            if (this.mNoReplyTimer.getEtag() != null) {
                this.mEtag = this.mNoReplyTimer.getEtag();
                Log.d("CommunicationDiversion", "setNoReplyTimer: mEtag=" + this.mEtag);
                this.mRuleSet.setEtag(this.mEtag);
            }
        }
    }
}
