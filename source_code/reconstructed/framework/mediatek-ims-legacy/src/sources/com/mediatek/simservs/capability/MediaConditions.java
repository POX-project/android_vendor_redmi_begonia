package com.mediatek.simservs.capability;

import com.mediatek.simservs.xcap.ConfigureType;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.xcap.client.uri.XcapUri;
import java.util.LinkedList;
import java.util.List;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class MediaConditions extends XcapElement implements ConfigureType {
    public static final String NODE_NAME = "serv-cap-media";
    static final String TAG_MEDIA = "media";
    List<String> mMedias;

    public MediaConditions(XcapUri xcapUri, String str, String str2) {
        super(xcapUri, str, str2);
    }

    public MediaConditions(XcapUri xcapUri, String str, String str2, Element element) {
        super(xcapUri, str, str2);
        instantiateFromXmlNode(element);
    }

    public List<String> getMedias() {
        return this.mMedias;
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    @Override // com.mediatek.simservs.xcap.ConfigureType
    public void instantiateFromXmlNode(Node node) {
        NodeList elementsByTagName = ((Element) node).getElementsByTagName(TAG_MEDIA);
        this.mMedias = new LinkedList();
        for (int i = 0; i < elementsByTagName.getLength(); i++) {
            this.mMedias.add(((Element) elementsByTagName.item(i)).getTextContent());
        }
    }
}
