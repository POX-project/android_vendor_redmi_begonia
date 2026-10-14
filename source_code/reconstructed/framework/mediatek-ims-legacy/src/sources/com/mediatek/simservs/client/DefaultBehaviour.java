package com.mediatek.simservs.client;

import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.xcap.client.uri.XcapUri;
import org.w3c.dom.Document;
import org.w3c.dom.Element;

/* JADX INFO: loaded from: classes.dex */
public class DefaultBehaviour extends XcapElement {
    public static final String DEFAULT_BEHAVIOUR_PRESENTATION_NOT_RESTRICTED = "presentation-not-restricted";
    public static final String DEFAULT_BEHAVIOUR_PRESENTATION_RESTRICTED = "presentation-restricted";
    public static final String NODE_NAME = "default-behaviour";
    public boolean mPresentationRestricted;

    public DefaultBehaviour(XcapUri xcapUri, String str, String str2) {
        super(xcapUri, str, str2);
    }

    public DefaultBehaviour(XcapUri xcapUri, String str, String str2, Element element) {
        super(xcapUri, str, str2);
        this.mPresentationRestricted = element.getTextContent().equals(DEFAULT_BEHAVIOUR_PRESENTATION_RESTRICTED);
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    public boolean isPresentationRestricted() {
        return this.mPresentationRestricted;
    }

    public void setPresentationRestricted(boolean z) {
        this.mPresentationRestricted = z;
    }

    public Element toXmlElement(Document document) {
        Element elementCreateElement = document.createElement(NODE_NAME);
        if (this.mPresentationRestricted) {
            elementCreateElement.setTextContent(DEFAULT_BEHAVIOUR_PRESENTATION_RESTRICTED);
        } else {
            elementCreateElement.setTextContent(DEFAULT_BEHAVIOUR_PRESENTATION_NOT_RESTRICTED);
        }
        return elementCreateElement;
    }

    public String toXmlString() {
        return this.mPresentationRestricted ? "<default-behaviour>presentation-restricted</default-behaviour>" : "<default-behaviour>presentation-not-restricted</default-behaviour>";
    }
}
