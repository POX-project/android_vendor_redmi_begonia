package com.mediatek.simservs.xcap;

import android.content.Context;
import android.net.Network;
import android.util.Log;
import com.mediatek.simservs.client.SimServs;
import com.mediatek.xcap.client.XcapClient;
import com.mediatek.xcap.client.XcapConstants;
import com.mediatek.xcap.client.XcapDebugParam;
import com.mediatek.xcap.client.uri.XcapUri;
import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.StringReader;
import java.io.StringWriter;
import java.net.HttpURLConnection;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.HashMap;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerException;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.NodeList;
import org.xml.sax.InputSource;
import org.xml.sax.SAXException;

/* JADX INFO: loaded from: classes.dex */
public abstract class XcapElement implements Attributable {
    protected static final String AUTH_XCAP_3GPP_INTENDED = "X-3GPP-Intended-Identity";
    protected static final String COMMON_POLICY_ALIAS = "cp";
    protected static final String COMMON_POLICY_NAMESPACE = "urn:ietf:params:xml:ns:common-policy";
    public static final String FALSE = "false";
    public static final String FALSE_WITH_QUOTE = "\"false\"";
    public static final String TAG = "XcapElement";
    public static final String TRUE = "true";
    public static final String TRUE_WITH_QUOTE = "\"true\"";
    protected static final String XCAP_ALIAS = "ss";
    protected static final String XCAP_NAMESPACE = "http://uri.etsi.org/ngn/params/xml/simservs/xcap";
    protected Context mContext;
    public String mIntendedId;
    protected Network mNetwork;
    public String mParentUri;
    public XcapUri mXcapUri;
    protected String mNodeUri = null;
    protected String mEtag = null;
    protected boolean mIsSupportEtag = false;
    public XcapDebugParam mDebugParams = XcapDebugParam.getInstance();

    public XcapElement(XcapUri xcapUri, String str, String str2) {
        this.mXcapUri = null;
        this.mParentUri = null;
        this.mIntendedId = null;
        this.mXcapUri = xcapUri;
        this.mParentUri = str;
        this.mIntendedId = str2;
    }

    private URI getAttributeUri(String str) throws URISyntaxException, IllegalArgumentException {
        return this.mXcapUri.setNodeSelector(new XcapUri.XcapNodeSelector(XcapConstants.ROOT_SIMSERVS).queryByNodeName(this.mParentUri).queryByNodeName(getNodeName(), str)).toURI();
    }

    public String convertStreamToString(InputStream inputStream) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream));
        StringBuilder sb = new StringBuilder();
        while (true) {
            String line = bufferedReader.readLine();
            if (line == null) {
                return sb.toString();
            }
            sb.append(line);
        }
    }

    @Override // com.mediatek.simservs.xcap.Attributable
    public void deleteByAttrName(String str) throws XcapException {
        SimServs simServs = SimServs.getInstance();
        XcapClient xcapClient = this.mNetwork != null ? new XcapClient(simServs.getContext(), this.mNetwork, simServs.getPhoneId()) : new XcapClient(simServs.getContext(), simServs.getPhoneId());
        HashMap map = new HashMap();
        try {
            try {
                try {
                    try {
                        if (this.mIntendedId != null) {
                            map.put(AUTH_XCAP_3GPP_INTENDED, "\"" + this.mIntendedId + "\"");
                        }
                        boolean z = this.mDebugParams.getDisableETag() ? true : SimServs.sETagDisable;
                        if (this.mEtag != null && !z) {
                            map.put(XcapConstants.HDR_KEY_IF_MATCH, this.mEtag);
                        }
                        boolean z2 = false;
                        int i = 1;
                        do {
                            HttpURLConnection httpURLConnectionDelete = xcapClient.delete(getAttributeUri(str), map);
                            if (httpURLConnectionDelete != null) {
                                int responseCode = httpURLConnectionDelete.getResponseCode();
                                if (responseCode == 200) {
                                    String headerField = httpURLConnectionDelete.getHeaderField(XcapConstants.HDR_KEY_ETAG);
                                    z2 = true;
                                    if (headerField != null) {
                                        this.mEtag = headerField;
                                    }
                                    Log.d("info", "document deleted in xcap server...");
                                } else {
                                    if (responseCode != 412) {
                                        throw new XcapException(responseCode);
                                    }
                                    Log.d("info", "412 fail, retry without etag");
                                    map.remove(XcapConstants.HDR_KEY_IF_MATCH);
                                    i++;
                                }
                            }
                            if (z2) {
                                break;
                            }
                        } while (i <= 1);
                    } catch (URISyntaxException e) {
                        e.printStackTrace();
                    }
                } catch (IOException e2) {
                    e2.printStackTrace();
                    throw new XcapException(e2);
                }
            } catch (IllegalArgumentException e3) {
                e3.printStackTrace();
            }
            xcapClient.shutdown();
        } catch (Throwable th) {
            xcapClient.shutdown();
            throw th;
        }
    }

    public String domToXmlText(Element element) throws TransformerException {
        Transformer transformerNewTransformer = TransformerFactory.newInstance().newTransformer();
        StringWriter stringWriter = new StringWriter();
        transformerNewTransformer.setOutputProperty("omit-xml-declaration", "yes");
        transformerNewTransformer.transform(new DOMSource(element), new StreamResult(stringWriter));
        return stringWriter.toString();
    }

    @Override // com.mediatek.simservs.xcap.Attributable
    public String getByAttrName(String str) throws XcapException {
        SimServs simServs = SimServs.getInstance();
        InputStream inputStream = null;
        String strConvertStreamToString = null;
        XcapClient xcapClient = this.mNetwork != null ? new XcapClient(simServs.getContext(), this.mNetwork, simServs.getPhoneId()) : new XcapClient(simServs.getContext(), simServs.getPhoneId());
        HashMap map = new HashMap();
        try {
            try {
                try {
                    try {
                        if (this.mIntendedId != null) {
                            map.put(AUTH_XCAP_3GPP_INTENDED, "\"" + this.mIntendedId + "\"");
                        }
                        boolean z = this.mDebugParams.getDisableETag() ? true : SimServs.sETagDisable;
                        if (this.mEtag != null && !z) {
                            map.put(XcapConstants.HDR_KEY_IF_NONE_MATCH, this.mEtag);
                        }
                        HttpURLConnection httpURLConnection = xcapClient.get(getAttributeUri(str), map);
                        if (httpURLConnection != null) {
                            if (httpURLConnection.getResponseCode() != 200) {
                                throw new XcapException(httpURLConnection.getResponseCode());
                            }
                            String headerField = httpURLConnection.getHeaderField(XcapConstants.HDR_KEY_ETAG);
                            if (headerField != null) {
                                this.mEtag = headerField;
                            }
                            inputStream = httpURLConnection.getInputStream();
                            strConvertStreamToString = convertStreamToString(inputStream);
                        }
                        xcapClient.shutdown();
                        if (inputStream != null) {
                            inputStream.close();
                        }
                    } catch (Throwable th) {
                        xcapClient.shutdown();
                        if (0 != 0) {
                            try {
                                inputStream.close();
                            } catch (IOException e) {
                                e.printStackTrace();
                            }
                        }
                        throw th;
                    }
                } catch (URISyntaxException e2) {
                    e2.printStackTrace();
                    xcapClient.shutdown();
                    if (0 != 0) {
                        inputStream.close();
                    }
                }
            } catch (IOException e3) {
                e3.printStackTrace();
                throw new XcapException(e3);
            } catch (IllegalArgumentException e4) {
                e4.printStackTrace();
                xcapClient.shutdown();
                if (0 != 0) {
                    inputStream.close();
                }
            }
        } catch (IOException e5) {
            e5.printStackTrace();
        }
        return strConvertStreamToString;
    }

    public String getContentType() {
        return null;
    }

    public String getEtag() {
        return this.mEtag;
    }

    protected abstract String getNodeName();

    public String getNodeSelector() {
        return null;
    }

    public URI getNodeUri() throws URISyntaxException, IllegalArgumentException {
        return this.mXcapUri.setNodeSelector(new XcapUri.XcapNodeSelector(XcapConstants.ROOT_SIMSERVS).queryByNodeName(this.mParentUri).queryByNodeName(getNodeName())).toURI();
    }

    public XcapElement getParent() {
        return null;
    }

    public String getUri() {
        StringBuilder sb = new StringBuilder();
        String str = this.mParentUri;
        if (str == null) {
            return getNodeName();
        }
        sb.append(str);
        sb.append("\\");
        sb.append(getNodeName());
        return sb.toString();
    }

    protected String parse409ErrorMessage(String str, InputStream inputStream) throws XcapException {
        String[] strArr = {"xe:constraint-failure", "xe:cannot-insert", "constraint-failure", "cannot-insert"};
        try {
            DocumentBuilderFactory documentBuilderFactoryNewInstance = DocumentBuilderFactory.newInstance();
            int i = 0;
            documentBuilderFactoryNewInstance.setNamespaceAware(false);
            DocumentBuilder documentBuilderNewDocumentBuilder = documentBuilderFactoryNewInstance.newDocumentBuilder();
            InputSource inputSource = new InputSource();
            try {
                inputSource.setCharacterStream(new StringReader(convertStreamToString(inputStream)));
                Document document = documentBuilderNewDocumentBuilder.parse(inputSource);
                int length = strArr.length;
                int i2 = 0;
                while (i2 < length) {
                    NodeList elementsByTagName = document.getElementsByTagName(strArr[i2]);
                    if (elementsByTagName.getLength() > 0) {
                        try {
                            String value = ((Element) elementsByTagName.item(i)).getAttributeNode(str).getValue();
                            Log.d(TAG, "parse409ErrorMessage:[" + value + "]");
                            if (value != null) {
                                return value;
                            }
                        } catch (IOException e) {
                            e = e;
                            e.printStackTrace();
                            throw new XcapException(500);
                        } catch (ParserConfigurationException e2) {
                            e = e2;
                            e.printStackTrace();
                            throw new XcapException(500);
                        } catch (SAXException e3) {
                            e = e3;
                            e.printStackTrace();
                            throw new XcapException(500);
                        }
                    }
                    i2++;
                    documentBuilderFactoryNewInstance = documentBuilderFactoryNewInstance;
                    i = 0;
                }
                return null;
            } catch (IOException e4) {
                e = e4;
            } catch (ParserConfigurationException e5) {
                e = e5;
            } catch (SAXException e6) {
                e = e6;
            }
        } catch (IOException e7) {
            e = e7;
        } catch (ParserConfigurationException e8) {
            e = e8;
        } catch (SAXException e9) {
            e = e9;
        }
    }

    protected String readXmlFromFile(String str) {
        String str2 = "";
        try {
            DataInputStream dataInputStream = new DataInputStream(new FileInputStream(str));
            while (true) {
                String line = dataInputStream.readLine();
                if (line == null) {
                    break;
                }
                Log.d(TAG, "Read:" + line);
                str2 = str2 + line;
            }
            dataInputStream.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return str2;
    }

    protected void saveContent(String str) throws Throwable {
        Throwable th;
        String xmlFromFile;
        XcapElement xcapElement = this;
        XcapClient xcapClient = null;
        HttpURLConnection httpURLConnection = null;
        HashMap map = new HashMap();
        InputStream inputStream = null;
        try {
            try {
                URI uri = new URI(xcapElement.mNodeUri);
                SimServs simServs = SimServs.getInstance();
                xcapClient = xcapElement.mNetwork != null ? new XcapClient(simServs.getContext(), xcapElement.mNetwork, simServs.getPhoneId()) : new XcapClient(simServs.getContext(), simServs.getPhoneId());
                if (xcapElement.mIntendedId != null) {
                    map.put(AUTH_XCAP_3GPP_INTENDED, "\"" + xcapElement.mIntendedId + "\"");
                }
                boolean z = xcapElement.mDebugParams.getDisableETag() ? true : SimServs.sETagDisable;
                if (xcapElement.mEtag != null && !z) {
                    map.put(XcapConstants.HDR_KEY_IF_MATCH, xcapElement.mEtag);
                }
                String str2 = (!xcapElement.mDebugParams.getEnablePredefinedSimservSetting() || getNodeName().equals("NoReplyTimer") || (xmlFromFile = xcapElement.readXmlFromFile("/data/simservs.xml")) == null) ? str : xmlFromFile;
                try {
                    String property = (xcapElement.mDebugParams.getXcapPutElementMime() == null || xcapElement.mDebugParams.getXcapPutElementMime().isEmpty()) ? System.getProperty("xcap.putelcontenttype", "application/xcap-el+xml") : xcapElement.mDebugParams.getXcapPutElementMime();
                    int i = 1;
                    HttpURLConnection httpURLConnectionPut = null;
                    boolean z2 = false;
                    while (true) {
                        try {
                            try {
                                httpURLConnectionPut = xcapClient.put(uri, property, str2, map);
                                if (httpURLConnectionPut != null) {
                                    int responseCode = httpURLConnectionPut.getResponseCode();
                                    if (responseCode == 200 || responseCode == 201) {
                                        String headerField = httpURLConnectionPut.getHeaderField(XcapConstants.HDR_KEY_ETAG);
                                        if (headerField != null) {
                                            xcapElement.mEtag = headerField;
                                        }
                                        Log.d("info", "document created in xcap server... etagValue=" + headerField);
                                        z2 = true;
                                    } else {
                                        if (responseCode != 412) {
                                            if (responseCode != 409) {
                                                throw new XcapException(responseCode);
                                            }
                                            try {
                                                InputStream inputStream2 = httpURLConnectionPut.getInputStream();
                                                if (inputStream2 != null && TRUE.equals(System.getProperty("xcap.handl409"))) {
                                                    throw new XcapException(409, xcapElement.parse409ErrorMessage("phrase", inputStream2));
                                                }
                                                throw new XcapException(409);
                                            } catch (IOException e) {
                                                e.printStackTrace();
                                                throw new XcapException(409);
                                            }
                                        }
                                        Log.d("info", "412 fail, retry without etag");
                                        map.remove(XcapConstants.HDR_KEY_IF_MATCH);
                                        i++;
                                    }
                                }
                                if (z2 || i > 1) {
                                    break;
                                } else {
                                    xcapElement = this;
                                }
                            } catch (IOException e2) {
                                e = e2;
                                e.printStackTrace();
                                throw new XcapException(e);
                            }
                        } catch (URISyntaxException e3) {
                            e = e3;
                            httpURLConnection = httpURLConnectionPut;
                            e.printStackTrace();
                            if (xcapClient != null) {
                                xcapClient.shutdown();
                            }
                            if (0 != 0) {
                                try {
                                    inputStream.close();
                                } catch (IOException e4) {
                                    e4.printStackTrace();
                                }
                            }
                            return;
                        } catch (Throwable th2) {
                            th = th2;
                            if (xcapClient != null) {
                                xcapClient.shutdown();
                            }
                            if (0 == 0) {
                                throw th;
                            }
                            try {
                                inputStream.close();
                                throw th;
                            } catch (IOException e5) {
                                e5.printStackTrace();
                                throw th;
                            }
                        }
                    }
                    xcapClient.shutdown();
                    if (0 != 0) {
                        try {
                            inputStream.close();
                        } catch (IOException e6) {
                            e6.printStackTrace();
                        }
                    }
                } catch (IOException e7) {
                    e = e7;
                } catch (URISyntaxException e8) {
                    e = e8;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (IOException e9) {
            e = e9;
        } catch (URISyntaxException e10) {
            e = e10;
        } catch (Throwable th4) {
            th = th4;
        }
    }

    @Override // com.mediatek.simservs.xcap.Attributable
    public void setByAttrName(String str, String str2) throws Throwable {
        SimServs simServs = SimServs.getInstance();
        XcapClient xcapClient = this.mNetwork != null ? new XcapClient(simServs.getContext(), this.mNetwork, simServs.getPhoneId()) : new XcapClient(simServs.getContext(), simServs.getPhoneId());
        HashMap map = new HashMap();
        try {
            try {
                if (this.mIntendedId != null) {
                    map.put(AUTH_XCAP_3GPP_INTENDED, "\"" + this.mIntendedId + "\"");
                }
                boolean z = this.mDebugParams.getDisableETag() ? true : SimServs.sETagDisable;
                if (this.mEtag != null && !z) {
                    map.put(XcapConstants.HDR_KEY_IF_MATCH, this.mEtag);
                }
                boolean z2 = false;
                int i = 0;
                do {
                    try {
                        HttpURLConnection httpURLConnectionPut = xcapClient.put(getAttributeUri(str), "application/xcap-att+xml", str2, map);
                        if (httpURLConnectionPut != null) {
                            int responseCode = httpURLConnectionPut.getResponseCode();
                            if (responseCode == 200 || responseCode == 201) {
                                String headerField = httpURLConnectionPut.getHeaderField(XcapConstants.HDR_KEY_ETAG);
                                z2 = true;
                                if (headerField != null) {
                                    this.mEtag = headerField;
                                }
                                Log.d("info", "document created in xcap server... etagValue=" + headerField);
                            } else {
                                if (responseCode != 412) {
                                    throw new XcapException(responseCode);
                                }
                                Log.d("info", "412 fail, retry without etag");
                                map.remove(XcapConstants.HDR_KEY_IF_MATCH);
                                i++;
                            }
                        }
                        if (z2) {
                            break;
                        }
                    } catch (IOException e) {
                        e = e;
                        e.printStackTrace();
                        throw new XcapException(e);
                    } catch (IllegalArgumentException e2) {
                        e = e2;
                        e.printStackTrace();
                    } catch (URISyntaxException e3) {
                        e = e3;
                        e.printStackTrace();
                    }
                } while (i <= 1);
            } catch (Throwable th) {
                th = th;
                xcapClient.shutdown();
                throw th;
            }
        } catch (IOException e4) {
            e = e4;
        } catch (IllegalArgumentException e5) {
            e = e5;
        } catch (URISyntaxException e6) {
            e = e6;
        } catch (Throwable th2) {
            th = th2;
            xcapClient.shutdown();
            throw th;
        }
        xcapClient.shutdown();
    }

    public void setContent(String str) throws Throwable {
        try {
            this.mNodeUri = getNodeUri().toString();
            saveContent(str);
        } catch (URISyntaxException e) {
            e.printStackTrace();
        }
    }

    public void setEtag(String str) {
        this.mEtag = str;
    }

    public void setNetwork(Network network) {
        if (network != null) {
            Log.i(TAG, "XCAP dedicated network netid:" + network);
            this.mNetwork = network;
        }
    }
}
