package com.mediatek.simservs.client;

import android.net.Network;
import android.util.Log;
import com.mediatek.simservs.xcap.XcapException;
import com.mediatek.xcap.client.uri.XcapUri;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.transform.TransformerConfigurationException;
import javax.xml.transform.TransformerException;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class OriginatingIdentityPresentationRestriction extends SimservType {
    public static final String NODE_NAME = "originating-identity-presentation-restriction";
    public boolean mContainDefaultBehaviour;
    public DefaultBehaviour mDefaultBehaviour;
    public int mNodeSelector;
    public boolean mShowActivePara;
    public static int NODE_ROOT_FULL_CHILD = 0;
    public static int NODE_ROOT_NO_CHILD = 1;
    public static int NODE_DEFAULT_BEHAVIOUR = 2;

    public OriginatingIdentityPresentationRestriction(XcapUri xcapUri, String str, String str2) throws Exception {
        super(xcapUri, str, str2);
        this.mContainDefaultBehaviour = false;
        this.mShowActivePara = false;
        this.mNodeSelector = NODE_ROOT_FULL_CHILD;
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    @Override // com.mediatek.simservs.client.SimservType
    public void initServiceInstance(Document document) {
        NodeList elementsByTagName = document.getElementsByTagName(DefaultBehaviour.NODE_NAME);
        if (elementsByTagName.getLength() > 0) {
            this.mContainDefaultBehaviour = true;
            this.mDefaultBehaviour = new DefaultBehaviour(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagName.item(0));
            if (this.mNetwork != null) {
                this.mDefaultBehaviour.setNetwork(this.mNetwork);
                return;
            }
            return;
        }
        NodeList elementsByTagNameNS = document.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", DefaultBehaviour.NODE_NAME);
        if (elementsByTagNameNS.getLength() <= 0) {
            this.mDefaultBehaviour = new DefaultBehaviour(this.mXcapUri, NODE_NAME, this.mIntendedId);
            if (this.mNetwork != null) {
                this.mDefaultBehaviour.setNetwork(this.mNetwork);
                return;
            }
            return;
        }
        this.mContainDefaultBehaviour = true;
        this.mDefaultBehaviour = new DefaultBehaviour(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagNameNS.item(0));
        if (this.mNetwork != null) {
            this.mDefaultBehaviour.setNetwork(this.mNetwork);
        }
    }

    public boolean isContainDefaultBehaviour() {
        return this.mContainDefaultBehaviour;
    }

    public boolean isDefaultPresentationRestricted() {
        return this.mDefaultBehaviour.isPresentationRestricted();
    }

    public void saveConfiguration() throws XcapException {
        String xmlString = toXmlString();
        if (xmlString == null) {
            Log.e(SimservType.TAG, "saveConfiguration: null xml string");
        } else {
            setContent(xmlString);
            this.mContainDefaultBehaviour = true;
        }
    }

    public void setDefaultPresentationRestricted(boolean z) throws XcapException {
        this.mDefaultBehaviour.setPresentationRestricted(z);
        if (!isDefaultPresentationRestricted()) {
            saveConfiguration();
        } else {
            this.mDefaultBehaviour.setContent(this.mDefaultBehaviour.toXmlString());
        }
    }

    public void setDefaultPresentationRestricted(boolean z, boolean z2, int i, boolean z3) throws XcapException {
        this.mDefaultBehaviour.setPresentationRestricted(z);
        this.mActived = z2;
        this.mShowActivePara = z3;
        this.mNodeSelector = i;
        if (i != NODE_DEFAULT_BEHAVIOUR) {
            saveConfiguration();
        } else {
            this.mDefaultBehaviour.setContent(this.mDefaultBehaviour.toXmlString());
        }
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    public void setNetwork(Network network) {
        super.setNetwork(network);
        if (network == null || this.mDefaultBehaviour == null) {
            return;
        }
        Log.i(SimservType.TAG, "XCAP dedicated network netid to mDefaultBehaviour: " + network);
        this.mDefaultBehaviour.setNetwork(network);
    }

    public String toXmlString() {
        try {
            Document documentNewDocument = DocumentBuilderFactory.newInstance().newDocumentBuilder().newDocument();
            Element elementCreateElement = documentNewDocument.createElement(NODE_NAME);
            Log.d(SimservType.TAG, "toXmlString: mShowActivePara=" + this.mShowActivePara + ", mActived=" + this.mActived + ", mNodeSelector=" + this.mNodeSelector);
            if (this.mShowActivePara) {
                elementCreateElement.setAttribute("active", String.valueOf(this.mActived));
            }
            documentNewDocument.appendChild(elementCreateElement);
            if (this.mNodeSelector != NODE_ROOT_NO_CHILD) {
                elementCreateElement.appendChild(this.mDefaultBehaviour.toXmlElement(documentNewDocument));
            }
            return domToXmlText(elementCreateElement);
        } catch (ParserConfigurationException e) {
            e.printStackTrace();
            return null;
        } catch (TransformerConfigurationException e2) {
            e2.printStackTrace();
            return null;
        } catch (TransformerException e3) {
            e3.printStackTrace();
            return null;
        }
    }
}
