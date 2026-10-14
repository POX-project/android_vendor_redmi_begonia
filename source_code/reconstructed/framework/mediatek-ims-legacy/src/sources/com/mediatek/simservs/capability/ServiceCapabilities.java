package com.mediatek.simservs.capability;

import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.xcap.client.uri.XcapUri;

/* JADX INFO: loaded from: classes.dex */
public class ServiceCapabilities extends XcapElement {
    public static final String ATT_PROVISIONED = "provisioned";

    public ServiceCapabilities(XcapUri xcapUri, String str, String str2) {
        super(xcapUri, str, str2);
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return null;
    }
}
