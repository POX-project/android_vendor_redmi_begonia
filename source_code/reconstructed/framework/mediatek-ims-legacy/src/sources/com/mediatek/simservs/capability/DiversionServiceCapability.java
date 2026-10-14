package com.mediatek.simservs.capability;

import com.mediatek.simservs.xcap.XcapException;
import com.mediatek.xcap.client.uri.XcapUri;
import javax.xml.parsers.ParserConfigurationException;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class DiversionServiceCapability extends CapabilitiesType {
    public static final String NODE_NAME = "communication-diversion-serv-cap";
    ActionCapabilities mActionCapabilities;
    ConditionCapabilities mConditionCapabilities;

    public DiversionServiceCapability(XcapUri xcapUri, String str, String str2) throws ParserConfigurationException, XcapException {
        super(xcapUri, str, str2);
    }

    public ActionCapabilities getActionCapabilities() {
        return this.mActionCapabilities;
    }

    public ConditionCapabilities getConditionCapabilities() {
        return this.mConditionCapabilities;
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    @Override // com.mediatek.simservs.capability.CapabilitiesType
    public void initServiceInstance(Document document) {
        NodeList elementsByTagName = document.getElementsByTagName(ActionCapabilities.NODE_NAME);
        if (elementsByTagName.getLength() > 0) {
            this.mActionCapabilities = new ActionCapabilities(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagName.item(0));
        }
        NodeList elementsByTagName2 = document.getElementsByTagName(ConditionCapabilities.NODE_NAME);
        if (elementsByTagName2.getLength() > 0) {
            this.mConditionCapabilities = new ConditionCapabilities(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagName2.item(0));
        }
    }
}
