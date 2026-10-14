package com.mediatek.simservs.client.policy;

import android.net.Network;
import android.util.Log;
import com.mediatek.simservs.xcap.ConfigureType;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.xcap.client.uri.XcapUri;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.transform.TransformerConfigurationException;
import javax.xml.transform.TransformerException;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class RuleSet extends XcapElement implements ConfigureType {
    public static final String NODE_NAME = "cp:ruleset";
    public static final String NODE_NAME_WITH_NAMESPACE = "cp:ruleset?xmlns(cp=urn:ietf:params:xml:ns:common-policy)";
    public List<Rule> mRules;

    public RuleSet(XcapUri xcapUri, String str, String str2) {
        super(xcapUri, str, str2);
        this.mRules = new LinkedList();
    }

    public RuleSet(XcapUri xcapUri, String str, String str2, Element element) {
        super(xcapUri, str, str2);
        instantiateFromXmlNode(element);
    }

    private void unfoldRules(Rule rule, Element element, String str) {
        if (rule.getConditions().comprehendBusy()) {
            Rule rule2 = new Rule(this.mXcapUri, this.mParentUri + "/" + NODE_NAME, this.mIntendedId, element);
            if (this.mNetwork != null) {
                rule2.setNetwork(this.mNetwork);
            }
            rule2.getConditions().clearConditions();
            rule2.getConditions().addBusy();
            if (str != null) {
                rule2.getConditions().addMedia(str);
            }
            this.mRules.add(rule2);
        }
        if (rule.getConditions().comprehendNotReachable()) {
            Rule rule3 = new Rule(this.mXcapUri, this.mParentUri + "/" + NODE_NAME, this.mIntendedId, element);
            if (this.mNetwork != null) {
                rule3.setNetwork(this.mNetwork);
            }
            rule3.getConditions().clearConditions();
            rule3.getConditions().addNotReachable();
            if (str != null) {
                rule3.getConditions().addMedia(str);
            }
            this.mRules.add(rule3);
        }
        if (rule.getConditions().comprehendInternational()) {
            Rule rule4 = new Rule(this.mXcapUri, this.mParentUri + "/" + NODE_NAME, this.mIntendedId, element);
            if (this.mNetwork != null) {
                rule4.setNetwork(this.mNetwork);
            }
            rule4.getConditions().clearConditions();
            rule4.getConditions().addInternational();
            if (str != null) {
                rule4.getConditions().addMedia(str);
            }
            this.mRules.add(rule4);
        }
        if (rule.getConditions().comprehendInternationalExHc()) {
            Rule rule5 = new Rule(this.mXcapUri, this.mParentUri + "/" + NODE_NAME, this.mIntendedId, element);
            if (this.mNetwork != null) {
                rule5.setNetwork(this.mNetwork);
            }
            rule5.getConditions().clearConditions();
            rule5.getConditions().addInternational();
            if (str != null) {
                rule5.getConditions().addMedia(str);
            }
            this.mRules.add(rule5);
        }
        if (rule.getConditions().comprehendNoAnswer()) {
            Rule rule6 = new Rule(this.mXcapUri, this.mParentUri + "/" + NODE_NAME, this.mIntendedId, element);
            if (this.mNetwork != null) {
                rule6.setNetwork(this.mNetwork);
            }
            rule6.getConditions().clearConditions();
            rule6.getConditions().addNoAnswer();
            if (str != null) {
                rule6.getConditions().addMedia(str);
            }
            this.mRules.add(rule6);
        }
        if (rule.getConditions().comprehendRoaming()) {
            Rule rule7 = new Rule(this.mXcapUri, this.mParentUri + "/" + NODE_NAME, this.mIntendedId, element);
            if (this.mNetwork != null) {
                rule7.setNetwork(this.mNetwork);
            }
            rule7.getConditions().clearConditions();
            rule7.getConditions().addRoaming();
            if (str != null) {
                rule7.getConditions().addMedia(str);
            }
            this.mRules.add(rule7);
        }
    }

    public void clearRules() {
        if (this.mRules == null) {
            this.mRules = new LinkedList();
        }
        this.mRules.clear();
    }

    public Rule createNewRule(String str) {
        if (this.mRules == null) {
            this.mRules = new LinkedList();
        }
        Rule rule = new Rule(this.mXcapUri, this.mParentUri + "/" + NODE_NAME, this.mIntendedId);
        if (this.mNetwork != null) {
            rule.setNetwork(this.mNetwork);
        }
        if (this.mEtag != null) {
            rule.setEtag(this.mEtag);
        }
        rule.setId(str);
        this.mRules.add(rule);
        return rule;
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME_WITH_NAMESPACE;
    }

    public List<Rule> getRules() {
        return this.mRules;
    }

    @Override // com.mediatek.simservs.xcap.ConfigureType
    public void instantiateFromXmlNode(Node node) {
        Element element = (Element) node;
        NodeList elementsByTagName = element.getElementsByTagName("rule");
        this.mRules = new LinkedList();
        if (elementsByTagName.getLength() > 0) {
            Log.d("RuleSet", "Got rule");
            for (int i = 0; i < elementsByTagName.getLength(); i++) {
                Element element2 = (Element) elementsByTagName.item(i);
                Rule rule = new Rule(this.mXcapUri, this.mParentUri + "/" + NODE_NAME, this.mIntendedId, element2);
                if (this.mNetwork != null) {
                    rule.setNetwork(this.mNetwork);
                }
                if (this.mEtag != null) {
                    rule.setEtag(this.mEtag);
                }
                this.mRules.add(rule);
            }
        }
        NodeList elementsByTagNameNS = element.getElementsByTagNameNS("urn:ietf:params:xml:ns:common-policy", "rule");
        if (elementsByTagNameNS.getLength() > 0) {
            Log.d("RuleSet", "Got rule with common policy namespace");
            for (int i2 = 0; i2 < elementsByTagNameNS.getLength(); i2++) {
                Element element3 = (Element) elementsByTagNameNS.item(i2);
                Rule rule2 = new Rule(this.mXcapUri, this.mParentUri + "/" + NODE_NAME, this.mIntendedId, element3);
                if (this.mNetwork != null) {
                    rule2.setNetwork(this.mNetwork);
                }
                if (this.mEtag != null) {
                    rule2.setEtag(this.mEtag);
                }
                this.mRules.add(rule2);
            }
        } else {
            NodeList elementsByTagName2 = element.getElementsByTagName(Rule.NODE_NAME);
            if (elementsByTagName2.getLength() > 0) {
                Log.d("RuleSet", "Got cp:rule");
                for (int i3 = 0; i3 < elementsByTagName2.getLength(); i3++) {
                    Element element4 = (Element) elementsByTagName2.item(i3);
                    Rule rule3 = new Rule(this.mXcapUri, this.mParentUri + "/" + NODE_NAME, this.mIntendedId, element4);
                    if (this.mNetwork != null) {
                        rule3.setNetwork(this.mNetwork);
                    }
                    if (this.mEtag != null) {
                        rule3.setEtag(this.mEtag);
                    }
                    this.mRules.add(rule3);
                }
            }
        }
        Log.d("RuleSet", "rules size:" + this.mRules.size());
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    public void setEtag(String str) {
        this.mEtag = str;
        for (Rule rule : this.mRules) {
            Log.d("RuleSet", "rule:" + rule.mId + ", set etag:" + str);
            rule.setEtag(str);
        }
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    public void setNetwork(Network network) {
        super.setNetwork(network);
        if (network != null) {
            for (Rule rule : this.mRules) {
                Log.d("RuleSet", "rule:" + rule.mId + ", netid:" + network);
                rule.setNetwork(network);
            }
        }
    }

    public String toXmlString() {
        try {
            Document documentNewDocument = DocumentBuilderFactory.newInstance().newDocumentBuilder().newDocument();
            Element elementCreateElement = documentNewDocument.createElement(NODE_NAME);
            documentNewDocument.appendChild(elementCreateElement);
            if (this.mRules != null) {
                Iterator<Rule> it = this.mRules.iterator();
                while (it.hasNext()) {
                    elementCreateElement.appendChild(it.next().toXmlElement(documentNewDocument));
                }
            }
            return domToXmlText(elementCreateElement);
        } catch (ParserConfigurationException e) {
            e.printStackTrace();
            return null;
        } catch (TransformerConfigurationException e2) {
            e2.printStackTrace();
            return null;
        } catch (TransformerException e3) {
            e3.printStackTrace();
            return null;
        }
    }
}
