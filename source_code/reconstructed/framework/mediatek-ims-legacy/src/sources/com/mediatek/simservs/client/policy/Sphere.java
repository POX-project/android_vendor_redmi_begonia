package com.mediatek.simservs.client.policy;

import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.xcap.client.uri.XcapUri;

/* JADX INFO: loaded from: classes.dex */
public class Sphere extends XcapElement {
    public static final String NODE_NAME = "sphere";

    public Sphere(XcapUri xcapUri, String str, String str2) {
        super(xcapUri, str, str2);
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }
}
