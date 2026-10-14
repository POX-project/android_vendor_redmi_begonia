package com.mediatek.simservs.client;

import android.util.Log;
import com.mediatek.simservs.client.policy.RuleSet;
import com.mediatek.simservs.xcap.InquireType;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.simservs.xcap.XcapException;
import com.mediatek.xcap.client.XcapDebugParam;
import com.mediatek.xcap.client.uri.XcapUri;
import java.io.IOException;
import java.io.StringReader;
import java.net.URISyntaxException;
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
public abstract class SimservType extends InquireType {
    static final String ATT_ACTIVE = "active";
    public static final String TAG = "SimservType";
    public boolean mActived;
    protected boolean mHasXcapNS;
    protected String mPrefix;
    String mSsTc;

    public SimservType(XcapUri xcapUri, String str, String str2) throws ParserConfigurationException, XcapException {
        super(xcapUri, str, str2);
        this.mActived = false;
        this.mPrefix = null;
        this.mHasXcapNS = false;
        Log.d(TAG, "Xcap debug params: \n" + this.mDebugParams.toString());
    }

    public abstract void initServiceInstance(Document document);

    public boolean isActive() {
        return this.mActived;
    }

    public boolean isSupportEtag() {
        return this.mIsSupportEtag;
    }

    protected void loadConfiguration() throws ParserConfigurationException, XcapException {
        String content;
        Document document;
        String nodeName = getNodeName();
        Log.d(TAG, "loadConfiguration():nodeName=" + nodeName);
        if (XcapDebugParam.getInstance().getEnablePredefinedSimservQueryResult()) {
            String xmlFromFile = readXmlFromFile("/data/ss.xml");
            if (!xmlFromFile.contains(nodeName)) {
                Log.d(TAG, "loadConfiguration():fail to get tested xml for nodeName=" + nodeName);
                return;
            }
            Log.d(TAG, "loadConfiguration():get tested xml for nodeName=" + nodeName);
            content = xmlFromFile;
        } else {
            content = getContent();
        }
        Log.v(TAG, "xmlContent=" + SimServs.encryptString(content));
        if (content != null) {
            DocumentBuilderFactory documentBuilderFactoryNewInstance = DocumentBuilderFactory.newInstance();
            documentBuilderFactoryNewInstance.setNamespaceAware(true);
            DocumentBuilder documentBuilderNewDocumentBuilder = documentBuilderFactoryNewInstance.newDocumentBuilder();
            InputSource inputSource = new InputSource();
            inputSource.setCharacterStream(new StringReader(content));
            try {
                document = documentBuilderNewDocumentBuilder.parse(inputSource);
            } catch (IOException e) {
                e.printStackTrace();
                throw new XcapException(500);
            } catch (SAXException e2) {
                documentBuilderFactoryNewInstance.setNamespaceAware(false);
                DocumentBuilder documentBuilderNewDocumentBuilder2 = documentBuilderFactoryNewInstance.newDocumentBuilder();
                InputSource inputSource2 = new InputSource();
                inputSource2.setCharacterStream(new StringReader(content));
                try {
                    document = documentBuilderNewDocumentBuilder2.parse(inputSource2);
                } catch (IOException e3) {
                    e3.printStackTrace();
                    throw new XcapException(500);
                } catch (SAXException e4) {
                    e4.printStackTrace();
                    throw new XcapException(500);
                }
            }
            NodeList elementsByTagName = document.getElementsByTagName(getNodeName());
            Log.v(TAG, "getNodeName()=" + SimServs.encryptString(getNodeName()));
            if (elementsByTagName.getLength() > 0) {
                NamedNodeMap attributes = ((Element) elementsByTagName.item(0)).getAttributes();
                this.mPrefix = elementsByTagName.item(0).getPrefix();
                this.mHasXcapNS = false;
                Log.d("loadConfiguration", "Got " + getNodeName());
                if (attributes.getLength() > 0) {
                    for (int i = 0; i < attributes.getLength(); i++) {
                        Node nodeItem = attributes.item(i);
                        if (nodeItem.getNodeName().equals(ATT_ACTIVE)) {
                            this.mActived = nodeItem.getNodeValue().endsWith(XcapElement.TRUE);
                            break;
                        }
                    }
                }
            } else {
                NodeList elementsByTagNameNS = document.getElementsByTagNameNS("http://uri.etsi.org/ngn/params/xml/simservs/xcap", getNodeName());
                if (elementsByTagNameNS.getLength() > 0) {
                    NamedNodeMap attributes2 = ((Element) elementsByTagNameNS.item(0)).getAttributes();
                    this.mPrefix = elementsByTagNameNS.item(0).getPrefix();
                    this.mHasXcapNS = true;
                    Log.i("loadConfiguration", "Got " + getNodeName() + ":http://uri.etsi.org/ngn/params/xml/simservs/xcap, prefix=" + this.mPrefix + ", NS=" + this.mHasXcapNS);
                    if (attributes2.getLength() > 0) {
                        for (int i2 = 0; i2 < attributes2.getLength(); i2++) {
                            Node nodeItem2 = attributes2.item(i2);
                            if (nodeItem2.getNodeName().equals(ATT_ACTIVE)) {
                                this.mActived = nodeItem2.getNodeValue().endsWith(XcapElement.TRUE);
                                break;
                            }
                        }
                    }
                } else {
                    NodeList elementsByTagName2 = document.getElementsByTagName("ss:" + getNodeName());
                    if (elementsByTagName2.getLength() > 0) {
                        NamedNodeMap attributes3 = ((Element) elementsByTagName2.item(0)).getAttributes();
                        this.mPrefix = elementsByTagName2.item(0).getPrefix();
                        this.mHasXcapNS = false;
                        Log.i("loadConfiguration", "Got ss:" + getNodeName());
                        if (attributes3.getLength() > 0) {
                            for (int i3 = 0; i3 < attributes3.getLength(); i3++) {
                                Node nodeItem3 = attributes3.item(i3);
                                if (nodeItem3.getNodeName().equals(ATT_ACTIVE)) {
                                    this.mActived = nodeItem3.getNodeValue().endsWith(XcapElement.TRUE);
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            Log.v(TAG, "xmldoc=" + SimServs.encryptString(document.toString()));
            initServiceInstance(document);
        }
    }

    public void refresh() throws Exception {
        loadConfiguration();
    }

    public void saveNode(boolean z, RuleSet ruleSet) throws XcapException {
        String xmlString = "";
        String str = XcapElement.TRUE.equals(System.getProperty("xcap.ns.ss", XcapElement.FALSE)) ? "ss:" : "";
        StringBuilder sb = new StringBuilder();
        sb.append("<");
        sb.append(str);
        sb.append(getNodeName());
        sb.append(" ");
        sb.append(str.equals("ss:") ? "xmlns:ss=\"http://uri.etsi.org/ngn/params/xml/simservs/xcap\" " : "");
        sb.append(ATT_ACTIVE);
        sb.append("=\"");
        sb.append(z);
        sb.append("\">");
        if (ruleSet != null && ruleSet.getRules().size() != 0) {
            xmlString = ruleSet.toXmlString();
        }
        sb.append(xmlString);
        sb.append("</");
        sb.append(str);
        sb.append(getNodeName());
        sb.append(">");
        String string = sb.toString();
        Log.d(TAG, "saveNode: thisXml=" + SimServs.encryptString(string));
        setContent(string);
    }

    public void setActive(boolean z) throws XcapException {
        String str;
        this.mActived = z;
        String str2 = XcapElement.FALSE;
        String property = System.getProperty("xcap.ns.ss", XcapElement.FALSE);
        String property2 = System.getProperty("xcap.attr.active.quote", XcapElement.FALSE);
        String str3 = XcapElement.TRUE;
        boolean zEquals = XcapElement.TRUE.equals(property2);
        if (!XcapElement.TRUE.equals(property)) {
            if (this.mActived) {
                if (zEquals) {
                    str3 = XcapElement.TRUE_WITH_QUOTE;
                }
                setByAttrName(ATT_ACTIVE, str3);
                return;
            } else {
                if (zEquals) {
                    str2 = XcapElement.FALSE_WITH_QUOTE;
                }
                setByAttrName(ATT_ACTIVE, str2);
                return;
            }
        }
        if (this.mActived) {
            str = "<ss:" + getNodeName() + " active=\"true\"/>";
        } else {
            str = "<ss:" + getNodeName() + " active=\"false\"/>";
        }
        setContent(str);
    }

    @Override // com.mediatek.simservs.xcap.XcapElement
    public void setContent(String str) throws XcapException {
        try {
            String str2 = XcapElement.TRUE.equals(System.getProperty("xcap.ns.ss", XcapElement.FALSE)) ? "ss:" : "";
            this.mNodeUri = getNodeUri().toString();
            this.mNodeUri = this.mNodeUri.replace(getNodeName(), str2 + getNodeName());
            StringBuilder sb = new StringBuilder();
            sb.append(this.mNodeUri);
            sb.append(str2.equals("ss:") ? "?xmlns(ss=http://uri.etsi.org/ngn/params/xml/simservs/xcap)" : "");
            this.mNodeUri = sb.toString();
            Log.d(TAG, "setContent: mNodeUri=" + SimServs.encryptString(this.mNodeUri));
            saveContent(str);
        } catch (URISyntaxException e) {
            e.printStackTrace();
        }
    }
}
