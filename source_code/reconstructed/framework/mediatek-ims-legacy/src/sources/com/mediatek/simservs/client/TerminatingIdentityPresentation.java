package com.mediatek.simservs.client;

import com.mediatek.simservs.xcap.XcapException;
import com.mediatek.xcap.client.uri.XcapUri;
import javax.xml.parsers.ParserConfigurationException;
import org.w3c.dom.Document;

/* JADX INFO: loaded from: classes.dex */
public class TerminatingIdentityPresentation extends SimservType {
    public static final String NODE_NAME = "terminating-identity-presentation";

    public TerminatingIdentityPresentation(XcapUri xcapUri, String str, String str2) throws ParserConfigurationException, XcapException {
        super(xcapUri, str, str2);
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    @Override // com.mediatek.simservs.client.SimservType
    public void initServiceInstance(Document document) {
    }
}
