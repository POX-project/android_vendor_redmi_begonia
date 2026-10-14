package com.mediatek.simservs.client.policy;

import android.util.Log;
import com.mediatek.simservs.xcap.ConfigureType;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.xcap.client.uri.XcapUri;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class Actions extends XcapElement implements ConfigureType {
    public static final String NODE_NAME = "cp:actions";
    static final String TAG_ALLOW = "allow";
    static final String TAG_FORWARD_TO = "forward-to";
    public boolean mAllow;
    private boolean mAppendAllow;
    public ForwardTo mForwardTo;
    public NoReplyTimer mNoReplyTimer;

    public class NoReplyTimer extends XcapElement {
        public static final String NODE_NAME = "NoReplyTimer";
        public int mValue;

        public NoReplyTimer(XcapUri xcapUri, String str, String str2) {
            super(xcapUri, str, str2);
        }

        public NoReplyTimer(XcapUri xcapUri, String str, String str2, int i) {
            super(xcapUri, str, str2);
            this.mValue = i;
            Log.d("Actions", "new NoReplyTimer  mValue=" + this.mValue);
        }

        @Override // com.mediatek.simservs.xcap.XcapElement
        protected String getNodeName() {
            return "NoReplyTimer";
        }

        public int getValue() {
            return this.mValue;
        }

        public void setValue(int i) {
            this.mValue = i;
        }

        public Element toXmlElement(Document document) {
            if (XcapElement.TRUE.equals(System.getProperty("xcap.ns.ss", XcapElement.FALSE))) {
                Element elementCreateElementNS = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:NoReplyTimer");
                elementCreateElementNS.setTextContent(String.valueOf(this.mValue));
                return elementCreateElementNS;
            }
            Element elementCreateElement = document.createElement("NoReplyTimer");
            elementCreateElement.setTextContent(String.valueOf(this.mValue));
            return elementCreateElement;
        }

        public String toXmlString() {
            return "<NoReplyTimer>" + String.valueOf(this.mValue) + "</NoReplyTimer>";
        }
    }

    public Actions(XcapUri xcapUri, String str, String str2) {
        super(xcapUri, str, str2);
        this.mAppendAllow = false;
        this.mForwardTo = new ForwardTo(xcapUri, str, str2);
    }

    public Actions(XcapUri xcapUri, String str, String str2, Element element) {
        super(xcapUri, str, str2);
        this.mAppendAllow = false;
        instantiateFromXmlNode(element);
    }

    public ForwardTo getFowardTo() {
        return this.mForwardTo;
    }

    public int getNoReplyTimer() {
        NoReplyTimer noReplyTimer = this.mNoReplyTimer;
        if (noReplyTimer != null) {
            return noReplyTimer.getValue();
        }
        return -1;
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    @Override // com.mediatek.simservs.xcap.ConfigureType
    public void instantiateFromXmlNode(Node node) {
        Element element = (Element) node;
        NodeList elementsByTagName = element.getElementsByTagName(TAG_ALLOW);
        if (elementsByTagName.getLength() > 0) {
            this.mAllow = ((Element) elementsByTagName.item(0)).getTextContent().equals(XcapElement.TRUE);
            this.mAppendAllow = true;
        } else {
            NodeList elementsByTagNameNS = element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_ALLOW);
            if (elementsByTagNameNS.getLength() > 0) {
                this.mAllow = ((Element) elementsByTagNameNS.item(0)).getTextContent().equals(XcapElement.TRUE);
                this.mAppendAllow = true;
            } else {
                NodeList elementsByTagName2 = element.getElementsByTagName("ss:allow");
                if (elementsByTagName2.getLength() > 0) {
                    this.mAllow = ((Element) elementsByTagName2.item(0)).getTextContent().equals(XcapElement.TRUE);
                    this.mAppendAllow = true;
                }
            }
        }
        if (element.getElementsByTagName("forward-to").getLength() > 0 || element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "forward-to").getLength() > 0 || element.getElementsByTagName("ss:forward-to").getLength() > 0) {
            this.mForwardTo = new ForwardTo(this.mXcapUri, NODE_NAME, this.mIntendedId, element);
        }
        NodeList elementsByTagName3 = element.getElementsByTagName("NoReplyTimer");
        if (elementsByTagName3.getLength() > 0) {
            Log.d("Actions", "Got NoReplyTimer");
            this.mNoReplyTimer = new NoReplyTimer(this.mXcapUri, "NoReplyTimer", this.mIntendedId, Integer.parseInt(((Element) elementsByTagName3.item(0)).getTextContent()));
            return;
        }
        NodeList elementsByTagNameNS2 = element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "NoReplyTimer");
        if (elementsByTagNameNS2.getLength() > 0) {
            Log.d("Actions", "Got NoReplyTimer with xcap namespace");
            this.mNoReplyTimer = new NoReplyTimer(this.mXcapUri, "NoReplyTimer", this.mIntendedId, Integer.parseInt(((Element) elementsByTagNameNS2.item(0)).getTextContent()));
        } else {
            NodeList elementsByTagName4 = element.getElementsByTagName("ss:NoReplyTimer");
            if (elementsByTagName4.getLength() > 0) {
                Log.d("Actions", "Got ss:NoReplyTimer");
                this.mNoReplyTimer = new NoReplyTimer(this.mXcapUri, "NoReplyTimer", this.mIntendedId, Integer.parseInt(((Element) elementsByTagName4.item(0)).getTextContent()));
            }
        }
    }

    public boolean isAllow() {
        return this.mAllow;
    }

    public void setAllow(boolean z) {
        this.mAllow = z;
        this.mAppendAllow = true;
    }

    public void setFowardTo(String str, boolean z) {
        if (this.mForwardTo == null) {
            this.mForwardTo = new ForwardTo(this.mXcapUri, this.mParentUri, this.mIntendedId);
        }
        this.mForwardTo.setTarget(str);
        this.mForwardTo.setNotifyCaller(z);
    }

    public void setNoReplyTimer(int i) {
        NoReplyTimer noReplyTimer = this.mNoReplyTimer;
        if (noReplyTimer != null) {
            noReplyTimer.setValue(i);
        } else if (i != -1) {
            this.mNoReplyTimer = new NoReplyTimer(this.mXcapUri, "NoReplyTimer", this.mIntendedId, i);
        }
    }

    public Element toXmlElement(Document document) {
        Element elementCreateElement = document.createElement(NODE_NAME);
        ForwardTo forwardTo = this.mForwardTo;
        if (forwardTo != null) {
            elementCreateElement.appendChild(forwardTo.toXmlElement(document));
        } else if (this.mAppendAllow) {
            String str = XcapElement.FALSE;
            if (XcapElement.TRUE.equals(System.getProperty("xcap.ns.ss", XcapElement.FALSE))) {
                Element elementCreateElementNS = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:allow");
                if (this.mAllow) {
                    str = XcapElement.TRUE;
                }
                elementCreateElementNS.setTextContent(str);
                elementCreateElement.appendChild(elementCreateElementNS);
            } else {
                Element elementCreateElement2 = document.createElement(TAG_ALLOW);
                if (this.mAllow) {
                    str = XcapElement.TRUE;
                }
                elementCreateElement2.setTextContent(str);
                elementCreateElement.appendChild(elementCreateElement2);
            }
        }
        NoReplyTimer noReplyTimer = this.mNoReplyTimer;
        if (noReplyTimer != null) {
            elementCreateElement.appendChild(noReplyTimer.toXmlElement(document));
        }
        return elementCreateElement;
    }
}
