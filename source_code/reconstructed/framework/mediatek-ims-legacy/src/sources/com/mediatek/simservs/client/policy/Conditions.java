package com.mediatek.simservs.client.policy;

import com.mediatek.simservs.xcap.ConfigureType;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.xcap.client.uri.XcapUri;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class Conditions extends XcapElement implements ConfigureType {
    public static final String NODE_NAME = "cp:conditions";
    static final String TAG_ANONYMOUS = "anonymous";
    static final String TAG_BUSY = "busy";
    static final String TAG_COMMUNICATION_DIVERTED = "communication-diverted";
    static final String TAG_INTERNATIONAL = "international";
    static final String TAG_INTERNATIONAL_EXHC = "international-exHC";
    static final String TAG_MEDIA = "media";
    static final String TAG_NOT_REACHABLE = "not-reachable";
    static final String TAG_NOT_REGISTERED = "not-registered";
    static final String TAG_NO_ANSWER = "no-answer";
    static final String TAG_PRESENCE_STATUS = "presence-status";
    static final String TAG_ROAMING = "roaming";
    static final String TAG_RULE_DEACTIVATED = "rule-deactivated";
    static final String TAG_TIME = "time";
    public boolean mComprehendAnonymous;
    public boolean mComprehendBusy;
    public boolean mComprehendCommunicationDiverted;
    public boolean mComprehendInternational;
    public boolean mComprehendInternationalexHc;
    public boolean mComprehendNoAnswer;
    public boolean mComprehendNotReachable;
    public boolean mComprehendNotRegistered;
    public boolean mComprehendPresenceStatus;
    public boolean mComprehendRoaming;
    public boolean mComprehendRuleDeactivated;
    public String mComprehendTime;
    public List<String> mMedias;

    public Conditions(XcapUri xcapUri, String str, String str2) {
        super(xcapUri, str, str2);
        this.mComprehendBusy = false;
        this.mComprehendNoAnswer = false;
        this.mComprehendNotReachable = false;
        this.mComprehendNotRegistered = false;
        this.mComprehendRoaming = false;
        this.mComprehendRuleDeactivated = false;
        this.mComprehendInternational = false;
        this.mComprehendInternationalexHc = false;
        this.mComprehendCommunicationDiverted = false;
        this.mComprehendPresenceStatus = false;
        this.mComprehendAnonymous = false;
        this.mMedias = new LinkedList();
    }

    public Conditions(XcapUri xcapUri, String str, String str2, Element element) {
        super(xcapUri, str, str2);
        this.mComprehendBusy = false;
        this.mComprehendNoAnswer = false;
        this.mComprehendNotReachable = false;
        this.mComprehendNotRegistered = false;
        this.mComprehendRoaming = false;
        this.mComprehendRuleDeactivated = false;
        this.mComprehendInternational = false;
        this.mComprehendInternationalexHc = false;
        this.mComprehendCommunicationDiverted = false;
        this.mComprehendPresenceStatus = false;
        this.mComprehendAnonymous = false;
        instantiateFromXmlNode(element);
    }

    public void addAnonymous() {
        this.mComprehendAnonymous = true;
    }

    public void addBusy() {
        this.mComprehendBusy = true;
    }

    public void addCommunicationDiverted() {
        this.mComprehendCommunicationDiverted = true;
    }

    public void addInternational() {
        this.mComprehendInternational = true;
    }

    public void addInternationalExHc() {
        this.mComprehendInternationalexHc = true;
    }

    public void addMedia(String str) {
        if (this.mMedias == null) {
            this.mMedias = new LinkedList();
        }
        this.mMedias.add(str);
    }

    public void addNoAnswer() {
        this.mComprehendNoAnswer = true;
    }

    public void addNotReachable() {
        this.mComprehendNotReachable = true;
    }

    public void addNotRegistered() {
        this.mComprehendNotRegistered = true;
    }

    public void addPresenceStatus() {
        this.mComprehendPresenceStatus = true;
    }

    public void addRoaming() {
        this.mComprehendRoaming = true;
    }

    public void addRuleDeactivated() {
        this.mComprehendRuleDeactivated = true;
    }

    public void addTime(String str) {
        this.mComprehendTime = str;
    }

    public void clearConditions() {
        this.mComprehendBusy = false;
        this.mComprehendNoAnswer = false;
        this.mComprehendNotReachable = false;
        this.mComprehendNotRegistered = false;
        this.mComprehendRoaming = false;
        this.mComprehendRuleDeactivated = false;
        this.mComprehendInternational = false;
        this.mComprehendCommunicationDiverted = false;
        this.mComprehendPresenceStatus = false;
        if (this.mMedias == null) {
            this.mMedias = new LinkedList();
        }
        this.mMedias.clear();
        this.mComprehendAnonymous = false;
        this.mComprehendTime = null;
    }

    public boolean comprehendAnonymous() {
        return this.mComprehendAnonymous;
    }

    public boolean comprehendBusy() {
        return this.mComprehendBusy;
    }

    public boolean comprehendCommunicationDiverted() {
        return this.mComprehendCommunicationDiverted;
    }

    public boolean comprehendInternational() {
        return this.mComprehendInternational;
    }

    public boolean comprehendInternationalExHc() {
        return this.mComprehendInternationalexHc;
    }

    public boolean comprehendNoAnswer() {
        return this.mComprehendNoAnswer;
    }

    public boolean comprehendNotReachable() {
        return this.mComprehendNotReachable;
    }

    public boolean comprehendNotRegistered() {
        return this.mComprehendNotRegistered;
    }

    public boolean comprehendPresenceStatus() {
        return this.mComprehendPresenceStatus;
    }

    public boolean comprehendRoaming() {
        return this.mComprehendRoaming;
    }

    public boolean comprehendRuleDeactivated() {
        return this.mComprehendRuleDeactivated;
    }

    public String comprehendTime() {
        return this.mComprehendTime;
    }

    public List<String> getMedias() {
        return this.mMedias;
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    @Override // com.mediatek.simservs.xcap.ConfigureType
    public void instantiateFromXmlNode(Node node) {
        Element element = (Element) node;
        if (element.getElementsByTagName(TAG_BUSY).getLength() <= 0 && element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_BUSY).getLength() <= 0) {
            if (element.getElementsByTagName("ss:" + TAG_BUSY).getLength() > 0) {
                this.mComprehendBusy = true;
            }
        } else {
            this.mComprehendBusy = true;
        }
        if (element.getElementsByTagName(TAG_NO_ANSWER).getLength() <= 0 && element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_NO_ANSWER).getLength() <= 0) {
            if (element.getElementsByTagName("ss:" + TAG_NO_ANSWER).getLength() > 0) {
                this.mComprehendNoAnswer = true;
            }
        } else {
            this.mComprehendNoAnswer = true;
        }
        if (element.getElementsByTagName(TAG_NOT_REACHABLE).getLength() <= 0 && element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_NOT_REACHABLE).getLength() <= 0) {
            if (element.getElementsByTagName("ss:" + TAG_NOT_REACHABLE).getLength() > 0) {
                this.mComprehendNotReachable = true;
            }
        } else {
            this.mComprehendNotReachable = true;
        }
        if (element.getElementsByTagName(TAG_NOT_REGISTERED).getLength() <= 0 && element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_NOT_REGISTERED).getLength() <= 0) {
            if (element.getElementsByTagName("ss:" + TAG_NOT_REGISTERED).getLength() > 0) {
                this.mComprehendNotRegistered = true;
            }
        } else {
            this.mComprehendNotRegistered = true;
        }
        if (element.getElementsByTagName(TAG_ROAMING).getLength() <= 0 && element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_ROAMING).getLength() <= 0) {
            if (element.getElementsByTagName("ss:" + TAG_ROAMING).getLength() > 0) {
                this.mComprehendRoaming = true;
            }
        } else {
            this.mComprehendRoaming = true;
        }
        if (element.getElementsByTagName(TAG_RULE_DEACTIVATED).getLength() <= 0 && element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_RULE_DEACTIVATED).getLength() <= 0) {
            if (element.getElementsByTagName("ss:" + TAG_RULE_DEACTIVATED).getLength() > 0) {
                this.mComprehendRuleDeactivated = true;
            }
        } else {
            this.mComprehendRuleDeactivated = true;
        }
        if (element.getElementsByTagName(TAG_INTERNATIONAL).getLength() <= 0 && element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_INTERNATIONAL).getLength() <= 0) {
            if (element.getElementsByTagName("ss:" + TAG_INTERNATIONAL).getLength() > 0) {
                this.mComprehendInternational = true;
            }
        } else {
            this.mComprehendInternational = true;
        }
        if (element.getElementsByTagName(TAG_INTERNATIONAL_EXHC).getLength() <= 0 && element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_INTERNATIONAL_EXHC).getLength() <= 0) {
            if (element.getElementsByTagName("ss:" + TAG_INTERNATIONAL_EXHC).getLength() > 0) {
                this.mComprehendInternationalexHc = true;
            }
        } else {
            this.mComprehendInternationalexHc = true;
        }
        if (element.getElementsByTagName(TAG_COMMUNICATION_DIVERTED).getLength() <= 0 && element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_COMMUNICATION_DIVERTED).getLength() <= 0) {
            if (element.getElementsByTagName("ss:" + TAG_COMMUNICATION_DIVERTED).getLength() > 0) {
                this.mComprehendCommunicationDiverted = true;
            }
        } else {
            this.mComprehendCommunicationDiverted = true;
        }
        if (element.getElementsByTagName(TAG_PRESENCE_STATUS).getLength() <= 0 && element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_PRESENCE_STATUS).getLength() <= 0) {
            if (element.getElementsByTagName("ss:" + TAG_PRESENCE_STATUS).getLength() > 0) {
                this.mComprehendPresenceStatus = true;
            }
        } else {
            this.mComprehendPresenceStatus = true;
        }
        NodeList elementsByTagName = element.getElementsByTagName(TAG_MEDIA);
        this.mMedias = new LinkedList();
        if (elementsByTagName.getLength() > 0) {
            for (int i = 0; i < elementsByTagName.getLength(); i++) {
                this.mMedias.add(((Element) elementsByTagName.item(i)).getTextContent());
            }
        } else {
            NodeList elementsByTagNameNS = element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_MEDIA);
            if (elementsByTagNameNS.getLength() > 0) {
                for (int i2 = 0; i2 < elementsByTagNameNS.getLength(); i2++) {
                    this.mMedias.add(((Element) elementsByTagNameNS.item(i2)).getTextContent());
                }
            } else {
                NodeList elementsByTagName2 = element.getElementsByTagName("ss:" + TAG_MEDIA);
                if (elementsByTagName2.getLength() > 0) {
                    for (int i3 = 0; i3 < elementsByTagName2.getLength(); i3++) {
                        this.mMedias.add(((Element) elementsByTagName2.item(i3)).getTextContent());
                    }
                }
            }
        }
        if (element.getElementsByTagName(TAG_ANONYMOUS).getLength() <= 0 && element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_ANONYMOUS).getLength() <= 0) {
            if (element.getElementsByTagName("ss:" + TAG_ANONYMOUS).getLength() > 0) {
                this.mComprehendAnonymous = true;
            }
        } else {
            this.mComprehendAnonymous = true;
        }
        NodeList elementsByTagName3 = element.getElementsByTagName(TAG_TIME);
        if (elementsByTagName3.getLength() > 0) {
            this.mComprehendTime = ((Element) elementsByTagName3.item(0)).getTextContent();
            return;
        }
        NodeList elementsByTagNameNS2 = element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_TIME);
        if (elementsByTagNameNS2.getLength() > 0) {
            this.mComprehendTime = ((Element) elementsByTagNameNS2.item(0)).getTextContent();
            return;
        }
        NodeList elementsByTagName4 = element.getElementsByTagName("ss:" + TAG_TIME);
        if (elementsByTagName4.getLength() > 0) {
            this.mComprehendTime = ((Element) elementsByTagName4.item(0)).getTextContent();
        }
    }

    public void removeRuleDeactivated() {
        this.mComprehendRuleDeactivated = false;
    }

    public Element toXmlElement(Document document) {
        if (XcapElement.TRUE.equals(System.getProperty("xcap.ns.ss", XcapElement.FALSE))) {
            Element elementCreateElement = document.createElement(NODE_NAME);
            if (comprehendBusy()) {
                elementCreateElement.appendChild(document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:busy"));
            }
            if (comprehendNoAnswer()) {
                elementCreateElement.appendChild(document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:no-answer"));
            }
            if (comprehendNotReachable()) {
                elementCreateElement.appendChild(document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:not-reachable"));
            }
            if (comprehendNotRegistered()) {
                elementCreateElement.appendChild(document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:not-registered"));
            }
            if (comprehendRoaming()) {
                elementCreateElement.appendChild(document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:roaming"));
            }
            if (comprehendRuleDeactivated()) {
                elementCreateElement.appendChild(document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:rule-deactivated"));
            }
            if (comprehendInternational()) {
                elementCreateElement.appendChild(document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:international"));
            }
            if (comprehendInternationalExHc()) {
                elementCreateElement.appendChild(document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:international-exHC"));
            }
            if (comprehendCommunicationDiverted()) {
                elementCreateElement.appendChild(document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:communication-diverted"));
            }
            if (comprehendPresenceStatus()) {
                elementCreateElement.appendChild(document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:presence-status"));
            }
            List<String> list = this.mMedias;
            if (list != null && list.size() > 0) {
                Iterator<String> it = this.mMedias.iterator();
                while (it.hasNext()) {
                    Element elementCreateElementNS = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:media");
                    elementCreateElementNS.setTextContent(it.next());
                    elementCreateElement.appendChild(elementCreateElementNS);
                }
            }
            if (comprehendAnonymous()) {
                elementCreateElement.appendChild(document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:anonymous"));
            }
            if (comprehendTime() != null && !comprehendTime().isEmpty()) {
                Element elementCreateElementNS2 = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:time");
                elementCreateElementNS2.setTextContent(this.mComprehendTime);
                elementCreateElement.appendChild(elementCreateElementNS2);
            }
            return elementCreateElement;
        }
        Element elementCreateElement2 = document.createElement(NODE_NAME);
        if (comprehendBusy()) {
            elementCreateElement2.appendChild(document.createElement(TAG_BUSY));
        }
        if (comprehendNoAnswer()) {
            elementCreateElement2.appendChild(document.createElement(TAG_NO_ANSWER));
        }
        if (comprehendNotReachable()) {
            elementCreateElement2.appendChild(document.createElement(TAG_NOT_REACHABLE));
        }
        if (comprehendNotRegistered()) {
            elementCreateElement2.appendChild(document.createElement(TAG_NOT_REGISTERED));
        }
        if (comprehendRoaming()) {
            elementCreateElement2.appendChild(document.createElement(TAG_ROAMING));
        }
        if (comprehendRuleDeactivated()) {
            elementCreateElement2.appendChild(document.createElement(TAG_RULE_DEACTIVATED));
        }
        if (comprehendInternational()) {
            elementCreateElement2.appendChild(document.createElement(TAG_INTERNATIONAL));
        }
        if (comprehendInternationalExHc()) {
            elementCreateElement2.appendChild(document.createElement(TAG_INTERNATIONAL_EXHC));
        }
        if (comprehendCommunicationDiverted()) {
            elementCreateElement2.appendChild(document.createElement(TAG_COMMUNICATION_DIVERTED));
        }
        if (comprehendPresenceStatus()) {
            elementCreateElement2.appendChild(document.createElement(TAG_PRESENCE_STATUS));
        }
        List<String> list2 = this.mMedias;
        if (list2 != null && list2.size() > 0) {
            Iterator<String> it2 = this.mMedias.iterator();
            while (it2.hasNext()) {
                Element elementCreateElement3 = document.createElement(TAG_MEDIA);
                elementCreateElement3.setTextContent(it2.next());
                elementCreateElement2.appendChild(elementCreateElement3);
            }
        }
        if (comprehendAnonymous()) {
            elementCreateElement2.appendChild(document.createElement(TAG_ANONYMOUS));
        }
        if (comprehendTime() != null && !comprehendTime().isEmpty()) {
            Element elementCreateElement4 = document.createElement(TAG_TIME);
            elementCreateElement4.setTextContent(this.mComprehendTime);
            elementCreateElement2.appendChild(elementCreateElement4);
        }
        return elementCreateElement2;
    }
}
