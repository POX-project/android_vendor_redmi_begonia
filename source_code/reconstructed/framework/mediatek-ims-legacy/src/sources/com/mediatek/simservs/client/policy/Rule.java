package com.mediatek.simservs.client.policy;

import android.util.Log;
import com.mediatek.simservs.xcap.ConfigureType;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.simservs.xcap.XcapException;
import com.mediatek.xcap.client.uri.XcapUri;
import java.net.URISyntaxException;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.transform.TransformerConfigurationException;
import javax.xml.transform.TransformerException;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

/* JADX INFO: loaded from: classes.dex */
public class Rule extends XcapElement implements ConfigureType {
    public static final String NODE_NAME = "cp:rule";
    public static final String NODE_XML_NAMESPACE = "?xmlns(cp=urn:ietf:params:xml:ns:common-policy)";
    public Actions mActions;
    public Conditions mConditions;
    public String mId;

    public Rule(XcapUri xcapUri, String str, String str2) {
        super(xcapUri, str, str2);
        this.mId = "none";
    }

    public Rule(XcapUri xcapUri, String str, String str2, Element element) {
        super(xcapUri, str, str2);
        this.mId = "none";
        instantiateFromXmlNode(element);
    }

    public Actions createActions() {
        if (this.mActions == null) {
            this.mActions = new Actions(this.mXcapUri, NODE_NAME, this.mIntendedId);
        }
        return this.mActions;
    }

    public Conditions createConditions() {
        if (this.mConditions == null) {
            this.mConditions = new Conditions(this.mXcapUri, NODE_NAME, this.mIntendedId);
        }
        return this.mConditions;
    }

    public Actions getActions() {
        return this.mActions;
    }

    public Conditions getConditions() {
        return this.mConditions;
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    protected String getNodeName() {
        return NODE_NAME;
    }

    @Override // com.mediatek.simservs.xcap.ConfigureType
    public void instantiateFromXmlNode(Node node) {
        Element element = (Element) node;
        this.mId = element.getAttribute("id");
        NodeList elementsByTagName = element.getElementsByTagName("conditions");
        if (elementsByTagName.getLength() > 0) {
            this.mConditions = new Conditions(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagName.item(0));
        } else {
            NodeList elementsByTagNameNS = element.getElementsByTagNameNS("urn:ietf:params:xml:ns:common-policy", "conditions");
            if (elementsByTagNameNS.getLength() > 0) {
                this.mConditions = new Conditions(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagNameNS.item(0));
            } else {
                NodeList elementsByTagName2 = element.getElementsByTagName(Conditions.NODE_NAME);
                if (elementsByTagName2.getLength() > 0) {
                    this.mConditions = new Conditions(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagName2.item(0));
                } else {
                    this.mConditions = new Conditions(this.mXcapUri, NODE_NAME, this.mIntendedId);
                }
            }
        }
        NodeList elementsByTagName3 = element.getElementsByTagName("actions");
        if (elementsByTagName3.getLength() > 0) {
            this.mActions = new Actions(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagName3.item(0));
            return;
        }
        NodeList elementsByTagNameNS2 = element.getElementsByTagNameNS("urn:ietf:params:xml:ns:common-policy", "actions");
        if (elementsByTagNameNS2.getLength() > 0) {
            this.mActions = new Actions(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagNameNS2.item(0));
            return;
        }
        NodeList elementsByTagName4 = element.getElementsByTagName(Actions.NODE_NAME);
        if (elementsByTagName4.getLength() > 0) {
            this.mActions = new Actions(this.mXcapUri, NODE_NAME, this.mIntendedId, (Element) elementsByTagName4.item(0));
        } else {
            this.mActions = new Actions(this.mXcapUri, NODE_NAME, this.mIntendedId);
        }
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    public void setContent(String str) throws XcapException {
        try {
            this.mNodeUri = getNodeUri().toString();
            if (getNodeName().equals(NODE_NAME)) {
                this.mNodeUri += "%5b@id=%22" + this.mId.replaceAll(" ", "%20") + "%22%5d" + NODE_XML_NAMESPACE;
            }
            Log.d("Rule", "setContent etag=" + this.mEtag);
            saveContent(str);
        } catch (URISyntaxException e) {
            e.printStackTrace();
        }
    }

    public void setContent(String str, boolean z) throws XcapException {
        try {
            Log.d("Rule", "setContent hasXcapNS=" + z);
            this.mNodeUri = getNodeUri().toString();
            if (getNodeName().equals(NODE_NAME)) {
                this.mNodeUri += "%5b@id=%22" + this.mId.replaceAll(" ", "%20") + "%22%5d" + ("?" + (z ? "xmlns(ss=http://uri.etsi.org/ngn/params/xml/simservs/xcap)" : "") + "xmlns(cp=urn:ietf:params:xml:ns:common-policy)");
            }
            Log.d("Rule", "setContent etag=" + this.mEtag);
            saveContent(str);
        } catch (URISyntaxException e) {
            e.printStackTrace();
        }
    }

    public void setId(String str) {
        this.mId = str;
    }

    public Element toXmlElement(Document document) throws TransformerException {
        Element elementCreateElement = document.createElement(NODE_NAME);
        elementCreateElement.setAttribute("id", this.mId);
        Conditions conditions = this.mConditions;
        if (conditions != null) {
            elementCreateElement.appendChild(conditions.toXmlElement(document));
        }
        Actions actions = this.mActions;
        if (actions != null) {
            elementCreateElement.appendChild(actions.toXmlElement(document));
        }
        return elementCreateElement;
    }

    public String toXmlString() {
        try {
            Document documentNewDocument = DocumentBuilderFactory.newInstance().newDocumentBuilder().newDocument();
            Element xmlElement = toXmlElement(documentNewDocument);
            documentNewDocument.appendChild(xmlElement);
            return domToXmlText(xmlElement);
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
