package com.mediatek.simservs.client.policy;

import android.os.SystemProperties;
import android.telephony.Rlog;
import com.mediatek.simservs.xcap.ConfigureType;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.xcap.client.uri.XcapUri;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class ForwardTo extends XcapElement implements ConfigureType {
    public static final String NODE_NAME = "forward-to";
    private static final boolean SDBG;
    public static final String TAG = "ForwardTo";
    static final String TAG_NOTIFY_CALLER = "notify-caller";
    static final String TAG_NOTIFY_SERVED_USER = "notify-served-user";
    static final String TAG_NOTIFY_SERVED_USER_ON_OUTBOUND_CALL = "notify-served-user-on-outbound-call";
    static final String TAG_REVEAL_IDENTITY_TO_CALLER = "reveal-identity-to-caller";
    static final String TAG_REVEAL_IDENTITY_TO_TARGET = "reveal-identity-to-target";
    static final String TAG_REVEAL_SERVED_USER_IDENTITY_TO_CALLER = "reveal-served-user-identity-to-caller";
    static final String TAG_TARGET = "target";
    public boolean mIsValidTargetNumber;
    public boolean mNotifyCaller;
    public boolean mNotifyServedUser;
    public boolean mNotifyServedUserOnOutboundCall;
    public boolean mRevealIdentityToCaller;
    public boolean mRevealIdentityToTarget;
    public boolean mRevealServedUserIdentityToCaller;
    public String mTarget;

    static {
        SDBG = !SystemProperties.get("ro.build.type").equals("user");
    }

    public ForwardTo(XcapUri xcapUri, String str, String str2) {
        super(xcapUri, str, str2);
        this.mNotifyCaller = true;
        this.mRevealIdentityToCaller = true;
        this.mRevealServedUserIdentityToCaller = true;
        this.mNotifyServedUser = false;
        this.mNotifyServedUserOnOutboundCall = false;
        this.mRevealIdentityToTarget = true;
        this.mIsValidTargetNumber = true;
    }

    public ForwardTo(XcapUri xcapUri, String str, String str2, Element element) {
        super(xcapUri, str, str2);
        this.mNotifyCaller = true;
        this.mRevealIdentityToCaller = true;
        this.mRevealServedUserIdentityToCaller = true;
        this.mNotifyServedUser = false;
        this.mNotifyServedUserOnOutboundCall = false;
        this.mRevealIdentityToTarget = true;
        this.mIsValidTargetNumber = true;
        instantiateFromXmlNode(element);
    }

    private boolean isValidTargetNumber(String str) {
        if (str == null || str.equals("")) {
            Rlog.d(TAG, "Number is empty, we should put CF number to server");
            return false;
        }
        if (str.startsWith("sip:") || str.startsWith("sips:") || str.startsWith("tel") || str.startsWith("+") || str.matches("^[0-9]+$")) {
            Rlog.d(TAG, "isValidTargetNumber = " + Rlog.pii(SDBG, str) + ", result = true");
            return true;
        }
        Rlog.d(TAG, "isValidTargetNumber = " + Rlog.pii(SDBG, str) + ", result = false");
        return false;
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    public String getTarget() {
        return this.mTarget;
    }

    @Override // com.mediatek.simservs.xcap.ConfigureType
    public void instantiateFromXmlNode(Node node) {
        Element element = (Element) node;
        NodeList elementsByTagName = element.getElementsByTagName(TAG_TARGET);
        if (elementsByTagName.getLength() > 0) {
            String textContent = ((Element) elementsByTagName.item(0)).getTextContent();
            this.mTarget = textContent;
            this.mIsValidTargetNumber = isValidTargetNumber(textContent);
        } else {
            NodeList elementsByTagNameNS = element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_TARGET);
            if (elementsByTagNameNS.getLength() > 0) {
                String textContent2 = ((Element) elementsByTagNameNS.item(0)).getTextContent();
                this.mTarget = textContent2;
                this.mIsValidTargetNumber = isValidTargetNumber(textContent2);
            } else {
                NodeList elementsByTagName2 = element.getElementsByTagName("ss:target");
                if (elementsByTagName2.getLength() > 0) {
                    String textContent3 = ((Element) elementsByTagName2.item(0)).getTextContent();
                    this.mTarget = textContent3;
                    this.mIsValidTargetNumber = isValidTargetNumber(textContent3);
                }
            }
        }
        NodeList elementsByTagName3 = element.getElementsByTagName(TAG_NOTIFY_CALLER);
        if (elementsByTagName3.getLength() > 0) {
            this.mNotifyCaller = ((Element) elementsByTagName3.item(0)).getTextContent().equals(XcapElement.TRUE);
        } else {
            NodeList elementsByTagNameNS2 = element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_NOTIFY_CALLER);
            if (elementsByTagNameNS2.getLength() > 0) {
                this.mNotifyCaller = ((Element) elementsByTagNameNS2.item(0)).getTextContent().equals(XcapElement.TRUE);
            } else {
                NodeList elementsByTagName4 = element.getElementsByTagName("ss:notify-caller");
                if (elementsByTagName4.getLength() > 0) {
                    this.mNotifyCaller = ((Element) elementsByTagName4.item(0)).getTextContent().equals(XcapElement.TRUE);
                }
            }
        }
        NodeList elementsByTagName5 = element.getElementsByTagName(TAG_REVEAL_IDENTITY_TO_CALLER);
        if (elementsByTagName5.getLength() > 0) {
            this.mRevealIdentityToCaller = ((Element) elementsByTagName5.item(0)).getTextContent().equals(XcapElement.TRUE);
        } else {
            NodeList elementsByTagNameNS3 = element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_REVEAL_IDENTITY_TO_CALLER);
            if (elementsByTagNameNS3.getLength() > 0) {
                this.mRevealIdentityToCaller = ((Element) elementsByTagNameNS3.item(0)).getTextContent().equals(XcapElement.TRUE);
            } else {
                NodeList elementsByTagName6 = element.getElementsByTagName("ss:reveal-identity-to-caller");
                if (elementsByTagName6.getLength() > 0) {
                    this.mRevealIdentityToCaller = ((Element) elementsByTagName6.item(0)).getTextContent().equals(XcapElement.TRUE);
                }
            }
        }
        NodeList elementsByTagName7 = element.getElementsByTagName(TAG_REVEAL_IDENTITY_TO_TARGET);
        if (elementsByTagName7.getLength() > 0) {
            this.mRevealIdentityToTarget = ((Element) elementsByTagName7.item(0)).getTextContent().equals(XcapElement.TRUE);
        } else {
            NodeList elementsByTagNameNS4 = element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_REVEAL_IDENTITY_TO_TARGET);
            if (elementsByTagNameNS4.getLength() > 0) {
                this.mRevealIdentityToTarget = ((Element) elementsByTagNameNS4.item(0)).getTextContent().equals(XcapElement.TRUE);
            } else {
                NodeList elementsByTagName8 = element.getElementsByTagName("ss:reveal-identity-to-target");
                if (elementsByTagName8.getLength() > 0) {
                    this.mRevealIdentityToTarget = ((Element) elementsByTagName8.item(0)).getTextContent().equals(XcapElement.TRUE);
                }
            }
        }
        NodeList elementsByTagName9 = element.getElementsByTagName(TAG_REVEAL_SERVED_USER_IDENTITY_TO_CALLER);
        if (elementsByTagName9.getLength() > 0) {
            this.mRevealServedUserIdentityToCaller = ((Element) elementsByTagName9.item(0)).getTextContent().equals(XcapElement.TRUE);
        } else {
            NodeList elementsByTagNameNS5 = element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_REVEAL_SERVED_USER_IDENTITY_TO_CALLER);
            if (elementsByTagNameNS5.getLength() > 0) {
                this.mRevealServedUserIdentityToCaller = ((Element) elementsByTagNameNS5.item(0)).getTextContent().equals(XcapElement.TRUE);
            } else {
                NodeList elementsByTagName10 = element.getElementsByTagName("ss:reveal-served-user-identity-to-caller");
                if (elementsByTagName10.getLength() > 0) {
                    this.mRevealServedUserIdentityToCaller = ((Element) elementsByTagName10.item(0)).getTextContent().equals(XcapElement.TRUE);
                }
            }
        }
        NodeList elementsByTagName11 = element.getElementsByTagName(TAG_NOTIFY_SERVED_USER);
        if (elementsByTagName11.getLength() > 0) {
            this.mNotifyServedUser = ((Element) elementsByTagName11.item(0)).getTextContent().equals(XcapElement.TRUE);
        } else {
            NodeList elementsByTagNameNS6 = element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_NOTIFY_SERVED_USER);
            if (elementsByTagNameNS6.getLength() > 0) {
                this.mNotifyServedUser = ((Element) elementsByTagNameNS6.item(0)).getTextContent().equals(XcapElement.TRUE);
            } else {
                NodeList elementsByTagName12 = element.getElementsByTagName("ss:notify-served-user");
                if (elementsByTagName12.getLength() > 0) {
                    this.mNotifyServedUser = ((Element) elementsByTagName12.item(0)).getTextContent().equals(XcapElement.TRUE);
                }
            }
        }
        NodeList elementsByTagName13 = element.getElementsByTagName(TAG_NOTIFY_SERVED_USER_ON_OUTBOUND_CALL);
        if (elementsByTagName13.getLength() > 0) {
            this.mNotifyServedUserOnOutboundCall = ((Element) elementsByTagName13.item(0)).getTextContent().equals(XcapElement.TRUE);
            return;
        }
        NodeList elementsByTagNameNS7 = element.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", TAG_NOTIFY_SERVED_USER_ON_OUTBOUND_CALL);
        if (elementsByTagNameNS7.getLength() > 0) {
            this.mNotifyServedUserOnOutboundCall = ((Element) elementsByTagNameNS7.item(0)).getTextContent().equals(XcapElement.TRUE);
            return;
        }
        NodeList elementsByTagName14 = element.getElementsByTagName("ss:notify-served-user-on-outbound-call");
        if (elementsByTagName14.getLength() > 0) {
            this.mNotifyServedUserOnOutboundCall = ((Element) elementsByTagName14.item(0)).getTextContent().equals(XcapElement.TRUE);
        }
    }

    public boolean isNotifyCaller() {
        return this.mNotifyCaller;
    }

    public boolean isNotifyServedUse() {
        return this.mNotifyServedUser;
    }

    public boolean isNotifyServedUserOnOutboundCall() {
        return this.mNotifyServedUserOnOutboundCall;
    }

    public boolean isRevealIdentityToCaller() {
        return this.mRevealIdentityToCaller;
    }

    public boolean isRevealIdentityToTarget() {
        return this.mRevealIdentityToTarget;
    }

    public boolean isRevealServedUserIdentityToCaller() {
        return this.mRevealServedUserIdentityToCaller;
    }

    public void setNotifyCaller(boolean z) {
        this.mNotifyCaller = z;
    }

    public void setNotifyServedUser(boolean z) {
        this.mNotifyServedUser = z;
    }

    public void setNotifyServedUserOnOutboundCall(boolean z) {
        this.mNotifyServedUserOnOutboundCall = z;
    }

    public void setRevealIdentityToCaller(boolean z) {
        this.mRevealIdentityToCaller = z;
    }

    public void setRevealIdentityToTarget(boolean z) {
        this.mRevealIdentityToTarget = z;
    }

    public void setRevealServedUserIdentityToCaller(boolean z) {
        this.mRevealServedUserIdentityToCaller = z;
    }

    public void setTarget(String str) {
        this.mTarget = str;
    }

    public Element toXmlElement(Document document) {
        String str = XcapElement.FALSE;
        if (XcapElement.TRUE.equals(System.getProperty("xcap.ns.ss", XcapElement.FALSE))) {
            Element elementCreateElementNS = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:forward-to");
            Element elementCreateElementNS2 = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:target");
            elementCreateElementNS2.setTextContent(this.mTarget);
            elementCreateElementNS.appendChild(elementCreateElementNS2);
            if (XcapElement.TRUE.equals(System.getProperty("xcap.completeforwardto", XcapElement.FALSE))) {
                Element elementCreateElementNS3 = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:notify-caller");
                elementCreateElementNS3.setTextContent(this.mNotifyCaller ? XcapElement.TRUE : XcapElement.FALSE);
                elementCreateElementNS.appendChild(elementCreateElementNS3);
                Element elementCreateElementNS4 = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:reveal-identity-to-caller");
                elementCreateElementNS4.setTextContent(this.mRevealIdentityToCaller ? XcapElement.TRUE : XcapElement.FALSE);
                elementCreateElementNS.appendChild(elementCreateElementNS4);
                Element elementCreateElementNS5 = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:reveal-served-user-identity-to-caller");
                elementCreateElementNS5.setTextContent(this.mRevealServedUserIdentityToCaller ? XcapElement.TRUE : XcapElement.FALSE);
                elementCreateElementNS.appendChild(elementCreateElementNS5);
                Element elementCreateElementNS6 = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:notify-served-user");
                elementCreateElementNS6.setTextContent(this.mNotifyServedUser ? XcapElement.TRUE : XcapElement.FALSE);
                elementCreateElementNS.appendChild(elementCreateElementNS6);
                Element elementCreateElementNS7 = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:notify-served-user-on-outbound-call");
                elementCreateElementNS7.setTextContent(this.mNotifyServedUserOnOutboundCall ? XcapElement.TRUE : XcapElement.FALSE);
                elementCreateElementNS.appendChild(elementCreateElementNS7);
                Element elementCreateElementNS8 = document.createElementNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", "ss:reveal-identity-to-target");
                if (this.mRevealIdentityToTarget) {
                    str = XcapElement.TRUE;
                }
                elementCreateElementNS8.setTextContent(str);
                elementCreateElementNS.appendChild(elementCreateElementNS8);
            }
            return elementCreateElementNS;
        }
        Element elementCreateElement = document.createElement(NODE_NAME);
        Element elementCreateElement2 = document.createElement(TAG_TARGET);
        elementCreateElement2.setTextContent(this.mTarget);
        elementCreateElement.appendChild(elementCreateElement2);
        if (XcapElement.TRUE.equals(System.getProperty("xcap.completeforwardto", XcapElement.FALSE))) {
            Element elementCreateElement3 = document.createElement(TAG_NOTIFY_CALLER);
            elementCreateElement3.setTextContent(this.mNotifyCaller ? XcapElement.TRUE : XcapElement.FALSE);
            elementCreateElement.appendChild(elementCreateElement3);
            Element elementCreateElement4 = document.createElement(TAG_REVEAL_IDENTITY_TO_CALLER);
            elementCreateElement4.setTextContent(this.mRevealIdentityToCaller ? XcapElement.TRUE : XcapElement.FALSE);
            elementCreateElement.appendChild(elementCreateElement4);
            Element elementCreateElement5 = document.createElement(TAG_REVEAL_SERVED_USER_IDENTITY_TO_CALLER);
            elementCreateElement5.setTextContent(this.mRevealServedUserIdentityToCaller ? XcapElement.TRUE : XcapElement.FALSE);
            elementCreateElement.appendChild(elementCreateElement5);
            Element elementCreateElement6 = document.createElement(TAG_NOTIFY_SERVED_USER);
            elementCreateElement6.setTextContent(this.mNotifyServedUser ? XcapElement.TRUE : XcapElement.FALSE);
            elementCreateElement.appendChild(elementCreateElement6);
            Element elementCreateElement7 = document.createElement(TAG_NOTIFY_SERVED_USER_ON_OUTBOUND_CALL);
            elementCreateElement7.setTextContent(this.mNotifyServedUserOnOutboundCall ? XcapElement.TRUE : XcapElement.FALSE);
            elementCreateElement.appendChild(elementCreateElement7);
            Element elementCreateElement8 = document.createElement(TAG_REVEAL_IDENTITY_TO_TARGET);
            if (this.mRevealIdentityToTarget) {
                str = XcapElement.TRUE;
            }
            elementCreateElement8.setTextContent(str);
            elementCreateElement.appendChild(elementCreateElement8);
        }
        return elementCreateElement;
    }
}
