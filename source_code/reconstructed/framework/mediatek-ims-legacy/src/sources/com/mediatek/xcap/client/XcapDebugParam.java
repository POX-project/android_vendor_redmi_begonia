package com.mediatek.xcap.client;

import android.os.SystemProperties;
import android.util.Log;
import com.mediatek.simservs.client.SimServs;
import com.mediatek.simservs.xcap.XcapElement;
import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.StringReader;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.xml.sax.InputSource;
import org.xml.sax.SAXException;

/* JADX INFO: loaded from: classes.dex */
public class XcapDebugParam {
    private static final String TAG = "XcapDebugParam";
    private static final String TAG_ROOT = "DebugParam";
    private static final String TAG_XCAP_AUID = "XcapAUID";
    private static final String TAG_XCAP_DISABLE_ETAG = "DisableETag";
    private static final String TAG_XCAP_DOCUMENT_NAME = "XcapDocumentName";
    private static final String TAG_XCAP_ENABLE_HTTP_LOG = "EnableHttpLog";
    private static final String TAG_XCAP_ENABLE_PREDEFINED_SIMSERV_QUERY_RESULT = "EnablePredefinedSimservQueryResult";
    private static final String TAG_XCAP_ENABLE_PREDEFINED_SIMSERV_SETTING = "EnablePredefinedSimservSetting";
    private static final String TAG_XCAP_ENABLE_SIMSERV_QUERY_WHOLE = "EnableSimservQueryWhole";
    private static final String TAG_XCAP_ENABLE_TRUST_ALL = "EnableXcapTrustAll";
    private static final String TAG_XCAP_HTTP_DIGEST_PASSWORD = "HttpDigestPassword";
    private static final String TAG_XCAP_HTTP_DIGEST_USERNAME = "HttpDigestUsername";
    private static final String TAG_XCAP_PUT_ELEMENT_MIME = "XcapPutElementMime";
    private static final String TAG_XCAP_ROOT = "XcapRoot";
    private static final String TAG_XCAP_USER_AGENT = "XcapUserAgent";
    private static final String TAG_XCAP_XUI = "XcapXui";
    private static String mHttpDigestPassword;
    private static String mHttpDigestUsername;
    private static String mXcapAUID;
    private static String mXcapDocumentName;
    private static String mXcapPutElementMime;
    private static String mXcapRoot;
    private static String mXcapUserAgent;
    private static String mXcapXui;
    private static XcapDebugParam sInstance;
    private static boolean mEnablePredefinedSimservQueryResult = false;
    private static boolean mEnablePredefinedSimservSetting = false;
    private static boolean mEnableSimservQueryWhole = false;
    private static boolean mEnableHttpLog = false;
    private static boolean mEnableXcapTrustAll = false;
    private static boolean mDisableETag = false;

    public static XcapDebugParam getInstance() {
        if (sInstance == null) {
            sInstance = new XcapDebugParam();
        }
        return sInstance;
    }

    private void instantiateFromXmlNode(Node node) {
        Log.d(TAG, "instantiateFromXmlNode");
        Element element = (Element) node;
        NodeList elementsByTagName = element.getElementsByTagName(TAG_XCAP_ROOT);
        if (elementsByTagName.getLength() > 0) {
            mXcapRoot = ((Element) elementsByTagName.item(0)).getTextContent();
        }
        NodeList elementsByTagName2 = element.getElementsByTagName(TAG_XCAP_USER_AGENT);
        if (elementsByTagName2.getLength() > 0) {
            mXcapUserAgent = ((Element) elementsByTagName2.item(0)).getTextContent();
        }
        NodeList elementsByTagName3 = element.getElementsByTagName(TAG_XCAP_XUI);
        if (elementsByTagName3.getLength() > 0) {
            mXcapXui = ((Element) elementsByTagName3.item(0)).getTextContent();
        }
        NodeList elementsByTagName4 = element.getElementsByTagName(TAG_XCAP_HTTP_DIGEST_USERNAME);
        if (elementsByTagName4.getLength() > 0) {
            mHttpDigestUsername = ((Element) elementsByTagName4.item(0)).getTextContent();
        }
        NodeList elementsByTagName5 = element.getElementsByTagName(TAG_XCAP_HTTP_DIGEST_PASSWORD);
        if (elementsByTagName5.getLength() > 0) {
            mHttpDigestPassword = ((Element) elementsByTagName5.item(0)).getTextContent();
        }
        NodeList elementsByTagName6 = element.getElementsByTagName(TAG_XCAP_ENABLE_PREDEFINED_SIMSERV_QUERY_RESULT);
        if (elementsByTagName6.getLength() > 0) {
            if (XcapElement.TRUE.equalsIgnoreCase(((Element) elementsByTagName6.item(0)).getTextContent())) {
                mEnablePredefinedSimservQueryResult = true;
            } else {
                mEnablePredefinedSimservQueryResult = false;
            }
        }
        NodeList elementsByTagName7 = element.getElementsByTagName(TAG_XCAP_ENABLE_PREDEFINED_SIMSERV_SETTING);
        if (elementsByTagName7.getLength() > 0) {
            if (XcapElement.TRUE.equalsIgnoreCase(((Element) elementsByTagName7.item(0)).getTextContent())) {
                mEnablePredefinedSimservSetting = true;
            } else {
                mEnablePredefinedSimservSetting = false;
            }
        }
        NodeList elementsByTagName8 = element.getElementsByTagName(TAG_XCAP_ENABLE_SIMSERV_QUERY_WHOLE);
        if (elementsByTagName8.getLength() > 0) {
            if (XcapElement.TRUE.equalsIgnoreCase(((Element) elementsByTagName8.item(0)).getTextContent())) {
                mEnableSimservQueryWhole = true;
            } else {
                mEnableSimservQueryWhole = false;
            }
        }
        NodeList elementsByTagName9 = element.getElementsByTagName(TAG_XCAP_ENABLE_HTTP_LOG);
        if (elementsByTagName9.getLength() > 0) {
            if (XcapElement.TRUE.equalsIgnoreCase(((Element) elementsByTagName9.item(0)).getTextContent())) {
                mEnableHttpLog = true;
            } else {
                mEnableHttpLog = false;
            }
        }
        NodeList elementsByTagName10 = element.getElementsByTagName(TAG_XCAP_ENABLE_TRUST_ALL);
        if (elementsByTagName10.getLength() > 0) {
            if (XcapElement.TRUE.equalsIgnoreCase(((Element) elementsByTagName10.item(0)).getTextContent())) {
                mEnableXcapTrustAll = true;
            } else {
                mEnableXcapTrustAll = false;
            }
        }
        NodeList elementsByTagName11 = element.getElementsByTagName(TAG_XCAP_DOCUMENT_NAME);
        if (elementsByTagName11.getLength() > 0) {
            mXcapDocumentName = ((Element) elementsByTagName11.item(0)).getTextContent();
        }
        NodeList elementsByTagName12 = element.getElementsByTagName(TAG_XCAP_PUT_ELEMENT_MIME);
        if (elementsByTagName12.getLength() > 0) {
            mXcapPutElementMime = ((Element) elementsByTagName12.item(0)).getTextContent();
        }
        NodeList elementsByTagName13 = element.getElementsByTagName(TAG_XCAP_AUID);
        if (elementsByTagName13.getLength() > 0) {
            mXcapAUID = ((Element) elementsByTagName13.item(0)).getTextContent();
        }
        NodeList elementsByTagName14 = element.getElementsByTagName(TAG_XCAP_DISABLE_ETAG);
        if (elementsByTagName14.getLength() > 0) {
            if (XcapElement.TRUE.equalsIgnoreCase(((Element) elementsByTagName14.item(0)).getTextContent())) {
                mDisableETag = true;
            } else {
                mDisableETag = false;
            }
        }
    }

    private void reset() {
        mXcapRoot = null;
        mXcapUserAgent = null;
        mXcapXui = null;
        mHttpDigestUsername = null;
        mHttpDigestPassword = null;
        mEnablePredefinedSimservQueryResult = false;
        mEnablePredefinedSimservSetting = false;
        mEnableSimservQueryWhole = false;
        mEnableHttpLog = false;
        mEnableXcapTrustAll = false;
        mXcapDocumentName = SimServs.SIMSERVS_FILENAME;
        mXcapPutElementMime = null;
        mXcapAUID = null;
        mDisableETag = false;
    }

    public boolean getDisableETag() {
        return mDisableETag;
    }

    public boolean getEnableHttpLog() {
        return mEnableHttpLog;
    }

    public boolean getEnablePredefinedSimservQueryResult() {
        return mEnablePredefinedSimservQueryResult;
    }

    public boolean getEnablePredefinedSimservSetting() {
        return mEnablePredefinedSimservSetting;
    }

    public boolean getEnableSimservQueryWhole() {
        return mEnableSimservQueryWhole;
    }

    public boolean getEnableXcapTrustAll() {
        return mEnableXcapTrustAll;
    }

    public String getHttpDigestPassword() {
        return mHttpDigestPassword;
    }

    public String getHttpDigestUsername() {
        return mHttpDigestUsername;
    }

    public String getXcapAUID() {
        return mXcapAUID;
    }

    public String getXcapDocumentName() {
        return mXcapDocumentName;
    }

    public String getXcapPutElementMime() {
        return mXcapPutElementMime;
    }

    public String getXcapRoot() {
        return mXcapRoot;
    }

    public String getXcapUserAgent() {
        return mXcapUserAgent;
    }

    public String getXcapXui() {
        return mXcapXui;
    }

    public void load() {
        Log.d(TAG, "XcapDebugParam is loading");
        readProperty();
        String xmlFromFile = readXmlFromFile("/data/misc/xcapconfig.xml");
        if (xmlFromFile == null || xmlFromFile.equals("")) {
            return;
        }
        try {
            DocumentBuilder documentBuilderNewDocumentBuilder = DocumentBuilderFactory.newInstance().newDocumentBuilder();
            InputSource inputSource = new InputSource();
            inputSource.setCharacterStream(new StringReader(xmlFromFile));
            NodeList elementsByTagName = documentBuilderNewDocumentBuilder.parse(inputSource).getElementsByTagName(TAG_ROOT);
            if (elementsByTagName.getLength() > 0) {
                instantiateFromXmlNode(elementsByTagName.item(0));
            }
        } catch (IOException e) {
            e.printStackTrace();
        } catch (ParserConfigurationException e2) {
            e2.printStackTrace();
        } catch (SAXException e3) {
            e3.printStackTrace();
        }
    }

    public void readProperty() {
        String str = SystemProperties.get("persist.vendor.xcap." + TAG_XCAP_ROOT.toLowerCase());
        String str2 = null;
        mXcapRoot = (str == null || str.isEmpty()) ? null : str;
        String str3 = SystemProperties.get("persist.vendor.xcap." + TAG_XCAP_USER_AGENT.toLowerCase());
        mXcapUserAgent = (str3 == null || str3.isEmpty()) ? null : str3;
        String str4 = SystemProperties.get("persist.vendor.xcap." + TAG_XCAP_XUI.toLowerCase());
        mXcapXui = (str4 == null || str4.isEmpty()) ? null : str4;
        mEnableSimservQueryWhole = SystemProperties.getBoolean("persist.vendor.xcap.simservquerywhole", false);
        mEnableXcapTrustAll = SystemProperties.getBoolean("persist.vendor.xcap." + TAG_XCAP_ENABLE_TRUST_ALL.toLowerCase(), false);
        String str5 = SystemProperties.get("persist.vendor.xcap." + TAG_XCAP_DOCUMENT_NAME.toLowerCase());
        mXcapDocumentName = (str5 == null || str5.isEmpty()) ? null : str5;
        String str6 = SystemProperties.get("persist.vendor.xcap." + TAG_XCAP_PUT_ELEMENT_MIME.toLowerCase());
        mXcapPutElementMime = (str6 == null || str6.isEmpty()) ? null : str6;
        String str7 = SystemProperties.get("persist.vendor.xcap." + TAG_XCAP_AUID.toLowerCase());
        if (str7 != null && !str7.isEmpty()) {
            str2 = str7;
        }
        mXcapAUID = str2;
        mDisableETag = SystemProperties.getBoolean("persist.vendor.xcap." + TAG_XCAP_DISABLE_ETAG.toLowerCase(), false);
        Log.d(TAG, "readProperty mXcapRoot: " + mXcapRoot + "\nmXcapUserAgent: " + mXcapUserAgent + "\nmXcapXui: " + mXcapXui + "\nmEnableSimservQueryWhole: " + mEnableSimservQueryWhole + "\nmEnableXcapTrustAll: " + mEnableXcapTrustAll + "\nmXcapDocumentName: " + mXcapDocumentName + "\nmXcapPutElementMime: " + mXcapPutElementMime + "\nmXcapAUID: " + mXcapAUID + "\nmDisableETag: " + mDisableETag + "\n");
    }

    public String readXmlFromFile(String str) {
        String str2 = "";
        try {
            FileInputStream fileInputStream = new FileInputStream(str);
            DataInputStream dataInputStream = new DataInputStream(fileInputStream);
            while (true) {
                String line = dataInputStream.readLine();
                if (line == null) {
                    fileInputStream.close();
                    return str2;
                }
                str2 = str2 + line;
            }
        } catch (IOException e) {
            return null;
        }
    }

    public String toString() {
        return "mXcapRoot: " + mXcapRoot + "\nmXcapUserAgent: " + mXcapUserAgent + "\nmXcapXui: " + mXcapXui + "\nmHttpDigestUsername: " + mHttpDigestUsername + "\nmHttpDigestPassword: " + mHttpDigestPassword + "\nmEnablePredefinedSimservQueryResult: " + mEnablePredefinedSimservQueryResult + "\nmEnablePredefinedSimservSetting: " + mEnablePredefinedSimservSetting + "\nmEnableSimservQueryWhole: " + mEnableSimservQueryWhole + "\nmEnableHttpLog: " + mEnableHttpLog + "\nmEnableXcapTrustAll: " + mEnableXcapTrustAll + "\nmXcapDocumentName: " + mXcapDocumentName + "\nmXcapPutElementMime: " + mXcapPutElementMime + "\nmXcapAUID: " + mXcapAUID + "\nmDisableETag: " + mDisableETag + "\n";
    }
}
