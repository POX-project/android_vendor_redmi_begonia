package com.mediatek.simservs.capability;

import com.mediatek.simservs.xcap.ConfigureType;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.xcap.client.uri.XcapUri;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class ConditionCapabilities extends ServiceCapabilities implements ConfigureType {
    public static final String NODE_NAME = "serv-cap-conditions";
    static final String TAG_ANONYMOUS = "serv-cap-anonymous";
    static final String TAG_BUSY = "serv-cap-busy";
    static final String TAG_COMMUNICATION_DIVERTED = "serv-cap-communication-diverted";
    static final String TAG_EXTERNAL_LIST = "serv-cap-external-list";
    static final String TAG_IDENTITY = "serv-cap-identity";
    static final String TAG_INTERNATIONAL = "serv-cap-international";
    static final String TAG_INTERNATIONAL_EXHC = "serv-cap-international-exHC";
    static final String TAG_MEDIA = "serv-cap-media";
    static final String TAG_NOT_REACHABLE = "serv-cap-not-reachable";
    static final String TAG_NOT_REGISTERED = "serv-cap-not-registered";
    static final String TAG_NO_ANSWER = "serv-cap-no-answer";
    static final String TAG_OTHER_IDENTITY = "serv-cap-other-identity";
    static final String TAG_PRESENCE_STATUS = "serv-cap-presence-status";
    static final String TAG_REQUEST_NAME = "serv-cap-request-name";
    static final String TAG_ROAMING = "serv-cap-roaming";
    static final String TAG_RULE_DEACTIVATED = "serv-cap-rule-deactivated";
    static final String TAG_VALIDITY = "serv-cap-validity";
    public boolean mAnonymousProvisioned;
    public boolean mCommunicationDivertedProvisioned;
    public boolean mExternalListProvisioned;
    public boolean mIdentityProvisioned;
    public boolean mInternationalProvisioned;
    public boolean mInternationalexHCProvisioned;
    MediaConditions mMediaConditions;
    public boolean mOtherIdentityProvisioned;
    public boolean mPresenceStatusProvisioned;
    public boolean mRequestNameProvisioned;
    public boolean mRoamingProvisioned;
    public boolean mRuleDeactivatedProvisioned;
    public boolean mValidityProvisioned;

    public ConditionCapabilities(XcapUri xcapUri, String str, String str2) {
        super(xcapUri, str, str2);
        this.mAnonymousProvisioned = false;
        this.mRequestNameProvisioned = false;
        this.mCommunicationDivertedProvisioned = false;
        this.mExternalListProvisioned = false;
        this.mIdentityProvisioned = false;
        this.mInternationalProvisioned = false;
        this.mInternationalexHCProvisioned = false;
        this.mOtherIdentityProvisioned = false;
        this.mPresenceStatusProvisioned = false;
        this.mRoamingProvisioned = false;
        this.mRuleDeactivatedProvisioned = false;
        this.mValidityProvisioned = false;
    }

    public ConditionCapabilities(XcapUri xcapUri, String str, String str2, Node node) {
        super(xcapUri, str, str2);
        this.mAnonymousProvisioned = false;
        this.mRequestNameProvisioned = false;
        this.mCommunicationDivertedProvisioned = false;
        this.mExternalListProvisioned = false;
        this.mIdentityProvisioned = false;
        this.mInternationalProvisioned = false;
        this.mInternationalexHCProvisioned = false;
        this.mOtherIdentityProvisioned = false;
        this.mPresenceStatusProvisioned = false;
        this.mRoamingProvisioned = false;
        this.mRuleDeactivatedProvisioned = false;
        this.mValidityProvisioned = false;
        instantiateFromXmlNode(node);
    }

    public MediaConditions getMediaConditions() {
        return this.mMediaConditions;
    }

    @Override // com.mediatek.simservs.capability.ServiceCapabilities, com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    @Override // com.mediatek.simservs.xcap.ConfigureType
    public void instantiateFromXmlNode(Node node) {
        Element element = (Element) node;
        NodeList elementsByTagName = element.getElementsByTagName(TAG_ANONYMOUS);
        if (elementsByTagName.getLength() > 0) {
            this.mAnonymousProvisioned = ((Element) elementsByTagName.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName2 = element.getElementsByTagName(TAG_REQUEST_NAME);
        if (elementsByTagName2.getLength() > 0) {
            this.mRequestNameProvisioned = ((Element) elementsByTagName2.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName3 = element.getElementsByTagName(TAG_COMMUNICATION_DIVERTED);
        if (elementsByTagName3.getLength() > 0) {
            this.mCommunicationDivertedProvisioned = ((Element) elementsByTagName3.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName4 = element.getElementsByTagName(TAG_EXTERNAL_LIST);
        if (elementsByTagName4.getLength() > 0) {
            this.mExternalListProvisioned = ((Element) elementsByTagName4.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName5 = element.getElementsByTagName(TAG_IDENTITY);
        if (elementsByTagName5.getLength() > 0) {
            this.mIdentityProvisioned = ((Element) elementsByTagName5.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName6 = element.getElementsByTagName(TAG_INTERNATIONAL);
        if (elementsByTagName6.getLength() > 0) {
            this.mInternationalProvisioned = ((Element) elementsByTagName6.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName7 = element.getElementsByTagName(TAG_INTERNATIONAL_EXHC);
        if (elementsByTagName7.getLength() > 0) {
            this.mInternationalexHCProvisioned = ((Element) elementsByTagName7.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName8 = element.getElementsByTagName(TAG_OTHER_IDENTITY);
        if (elementsByTagName8.getLength() > 0) {
            this.mOtherIdentityProvisioned = ((Element) elementsByTagName8.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName9 = element.getElementsByTagName(TAG_PRESENCE_STATUS);
        if (elementsByTagName9.getLength() > 0) {
            this.mPresenceStatusProvisioned = ((Element) elementsByTagName9.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName10 = element.getElementsByTagName(TAG_ROAMING);
        if (elementsByTagName10.getLength() > 0) {
            this.mRoamingProvisioned = ((Element) elementsByTagName10.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName11 = element.getElementsByTagName(TAG_RULE_DEACTIVATED);
        if (elementsByTagName11.getLength() > 0) {
            this.mRuleDeactivatedProvisioned = ((Element) elementsByTagName11.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName12 = element.getElementsByTagName(TAG_VALIDITY);
        if (elementsByTagName12.getLength() > 0) {
            this.mValidityProvisioned = ((Element) elementsByTagName12.item(0)).getAttribute(ServiceCapabilities.ATT_PROVISIONED).equals(XcapElement.TRUE);
        }
        NodeList elementsByTagName13 = element.getElementsByTagName("serv-cap-media");
        if (elementsByTagName13.getLength() > 0) {
            this.mMediaConditions = new MediaConditions(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagName13.item(0));
        }
    }

    public boolean isAnonymousProvisioned() {
        return this.mAnonymousProvisioned;
    }

    public boolean isCommunicationDivertedProvisioned() {
        return this.mCommunicationDivertedProvisioned;
    }

    public boolean isExternalListProvisioned() {
        return this.mExternalListProvisioned;
    }

    public boolean isIdentityProvisioned() {
        return this.mIdentityProvisioned;
    }

    public boolean isInternationalProvisioned() {
        return this.mInternationalProvisioned;
    }

    public boolean isInternationalexHCProvisioned() {
        return this.mInternationalexHCProvisioned;
    }

    public boolean isOtherIdentityProvisioned() {
        return this.mOtherIdentityProvisioned;
    }

    public boolean isPresenceStatusProvisioned() {
        return this.mPresenceStatusProvisioned;
    }

    public boolean isRequestNameProvisioned() {
        return this.mRequestNameProvisioned;
    }

    public boolean isRoamingProvisioned() {
        return this.mRoamingProvisioned;
    }

    public boolean isRuleDeactivatedProvisioned() {
        return this.mRuleDeactivatedProvisioned;
    }

    public boolean isValidityProvisioned() {
        return this.mValidityProvisioned;
    }
}
