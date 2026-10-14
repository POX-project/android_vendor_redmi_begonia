package com.mediatek.simservs.capability;

import com.mediatek.simservs.xcap.InquireType;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.simservs.xcap.XcapException;
import com.mediatek.xcap.client.uri.XcapUri;
import java.io.IOException;
import java.io.StringReader;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.NamedNodeMap;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.xml.sax.InputSource;
import org.xml.sax.SAXException;

/* JADX INFO: loaded from: classes.dex */
public abstract class CapabilitiesType extends InquireType {
    static final String ATT_ACTIVE = "active";
    public boolean mActived;

    public CapabilitiesType(XcapUri xcapUri, String str, String str2) throws ParserConfigurationException, XcapException {
        super(xcapUri, str, str2);
        this.mActived = false;
        loadConfiguration();
    }

    private void loadConfiguration() throws ParserConfigurationException, XcapException {
        String content = getContent();
        if (content == null) {
            return;
        }
        DocumentBuilder documentBuilderNewDocumentBuilder = DocumentBuilderFactory.newInstance().newDocumentBuilder();
        InputSource inputSource = new InputSource();
        inputSource.setCharacterStream(new StringReader(content));
        try {
            Document document = documentBuilderNewDocumentBuilder.parse(inputSource);
            NodeList elementsByTagName = document.getElementsByTagName(getNodeName());
            if (elementsByTagName.getLength() > 0) {
                NamedNodeMap attributes = ((Element) elementsByTagName.item(0)).getAttributes();
                if (attributes.getLength() > 0) {
                    for (int i = 0; i < attributes.getLength(); i++) {
                        Node nodeItem = attributes.item(i);
                        if (nodeItem.getNodeName().equals(ATT_ACTIVE)) {
                            this.mActived = nodeItem.getNodeValue().endsWith(XcapElement.TRUE);
                            break;
                        }
                    }
                }
            }
            initServiceInstance(document);
        } catch (IOException e) {
            e.printStackTrace();
            throw new XcapException(500);
        } catch (SAXException e2) {
            e2.printStackTrace();
            throw new XcapException(500);
        }
    }

    public abstract void initServiceInstance(Document document);

    public boolean isActive() throws XcapException {
        if (getByAttrName(ATT_ACTIVE) == null) {
            return true;
        }
        return getByAttrName(ATT_ACTIVE).equals(XcapElement.TRUE);
    }

    public void setActive(boolean z) throws XcapException {
        if (z) {
            setByAttrName(ATT_ACTIVE, XcapElement.TRUE);
        } else {
            setByAttrName(ATT_ACTIVE, XcapElement.FALSE);
        }
    }
}
