package com.mediatek.simservs.capability;

import com.mediatek.simservs.xcap.XcapException;
import com.mediatek.xcap.client.uri.XcapUri;
import javax.xml.parsers.ParserConfigurationException;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class BarringServiceCapability extends CapabilitiesType {
    public static final String NODE_NAME = "communication-barring-serv-cap";
    ConditionCapabilities mConditionCapabilities;

    public BarringServiceCapability(XcapUri xcapUri, String str, String str2) throws ParserConfigurationException, XcapException {
        super(xcapUri, str, str2);
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
        NodeList elementsByTagName = document.getElementsByTagName(ConditionCapabilities.NODE_NAME);
        if (elementsByTagName.getLength() > 0) {
            this.mConditionCapabilities = new ConditionCapabilities(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagName.item(0));
        }
    }
}
