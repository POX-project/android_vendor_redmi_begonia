package com.mediatek.simservs.capability;

import com.mediatek.simservs.xcap.ConfigureType;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.xcap.client.uri.XcapUri;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class ActionCapabilities extends ServiceCapabilities implements ConfigureType {
    public static final String NODE_NAME = "serv-cap-actions";
    static final String TAG_NOTIFY_CALLER = "serv-cap-notify-caller";
    static final String TAG_NOTIFY_SERVED_USER = "serv-cap-notify-served-user";
    static final String TAG_NOTIFY_SERVED_USER_ON_OUTBOUND_CALL = "serv-cap-notify-served-user-on-outbound-call";
    static final String TAG_REVEAL_IDENTITY_TO_CALLER = "serv-cap-reveal-identity-to-caller";
    static final String TAG_REVEAL_IDENTITY_TO_TARGET = "serv-cap-reveal-identity-to-target";
    static final String TAG_REVEAL_SERVED_USER_IDENTITY_TO_CALLER = "serv-cap-reveal-served-user-identity-to-caller";
    static final String TAG_TARGET = "serv-cap-target";
    public boolean mNotifyCallerProvisioned;
    public boolean mNotifyServedUserOnOutboundCallProvisioned;
    public boolean mNotifyServedUserProvisioned;
    public boolean mRevealIdentityToCallerProvisioned;
    public boolean mRevealIdentityToTargetProvisioned;
    public boolean mRevealServedUserIdentityToCallerProvisioned;

    public ActionCapabilities(XcapUri xcapUri, String str, String str2) {
        super(xcapUri, str, str2);
        this.mNotifyCallerProvisioned = false;
        this.mNotifyServedUserProvisioned = false;
        this.mNotifyServedUserOnOutboundCallProvisioned = false;
        this.mRevealIdentityToCallerProvisioned = false;
        this.mRevealServedUserIdentityToCallerProvisioned = false;
        this.mRevealIdentityToTargetProvisioned = false;
    }

    public ActionCapabilities(XcapUri xcapUri, String str, String str2, Node node) {
        super(xcapUri, str, str2);
        this.mNotifyCallerProvisioned = false;
        this.mNotifyServedUserProvisioned = false;
        this.mNotifyServedUserOnOutboundCallProvisioned = false;
        this.mRevealIdentityToCallerProvisioned = false;
        this.mRevealServedUserIdentityToCallerProvisioned = false;
        this.mRevealIdentityToTargetProvisioned = false;
        instantiateFromXmlNode(node);
    }

    @Override // com.mediatek.simservs.capability.ServiceCapabilities, com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    @Override // com.mediatek.simservs.xcap.ConfigureType
    public void instantiateFromXmlNode(Node node) {
        Element element = (Element) node;
        NodeList elementsByTagName = element.getElementsByTagName(TAG_NOTIFY_CALLER);
        if (elementsByTagName.getLength() > 0) {
            this.mNotifyCallerProvisioned = ((Element) elementsByTagName.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName2 = element.getElementsByTagName(TAG_NOTIFY_SERVED_USER);
        if (elementsByTagName2.getLength() > 0) {
            this.mNotifyServedUserProvisioned = ((Element) elementsByTagName2.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName3 = element.getElementsByTagName(TAG_NOTIFY_SERVED_USER_ON_OUTBOUND_CALL);
        if (elementsByTagName3.getLength() > 0) {
            this.mNotifyServedUserOnOutboundCallProvisioned = ((Element) elementsByTagName3.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName4 = element.getElementsByTagName(TAG_REVEAL_IDENTITY_TO_CALLER);
        if (elementsByTagName4.getLength() > 0) {
            this.mRevealIdentityToCallerProvisioned = ((Element) elementsByTagName4.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName5 = element.getElementsByTagName(TAG_REVEAL_SERVED_USER_IDENTITY_TO_CALLER);
        if (elementsByTagName5.getLength() > 0) {
            this.mRevealServedUserIdentityToCallerProvisioned = ((Element) elementsByTagName5.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName6 = element.getElementsByTagName(TAG_REVEAL_IDENTITY_TO_TARGET);
        if (elementsByTagName6.getLength() > 0) {
            this.mRevealIdentityToTargetProvisioned = ((Element) elementsByTagName6.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
    }

    public boolean isNotifyCallerProvisioned() {
        return this.mNotifyCallerProvisioned;
    }

    public boolean isNotifyServedUserOnOutboundCallProvisioned() {
        return this.mNotifyServedUserOnOutboundCallProvisioned;
    }

    public boolean isNotifyServedUserProvisioned() {
        return this.mNotifyServedUserProvisioned;
    }

    public boolean isRevealIdentityToCallerProvisioned() {
        return this.mRevealIdentityToCallerProvisioned;
    }

    public boolean isRevealIdentityToTargetProvisioned() {
        return this.mRevealIdentityToTargetProvisioned;
    }

    public boolean isRevealServedUserIdentityToCallerProvisioned() {
        return this.mRevealServedUserIdentityToCallerProvisioned;
    }
}
