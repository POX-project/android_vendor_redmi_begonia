package com.mediatek.xcap.client.uri;

import android.os.SystemProperties;
import com.mediatek.simservs.xcap.XcapElement;
import java.net.URI;
import java.net.URISyntaxException;
import java.net.URLEncoder;

/* JADX INFO: loaded from: classes.dex */
public class XcapUri {
    private static final char PATH_SEPARATOR = '/';
    private static final String RESOURCE_SELECTOR_SEPARATOR = "/~~/";
    private String mXcapRoot = null;
    private String mDocumentSelector = null;
    private String mNodeSelector = null;

    public static class XcapDocumentSelector {
        private static final String XCAP_GLOBAL_PATH = "global";
        private static final String XCAP_USER_PATH = "users";
        private String mAuid;
        private String mDocumentName;
        private StringBuilder mDocumentSelector;
        private String mXui;

        public XcapDocumentSelector(String str, String str2) {
            this.mDocumentSelector = new StringBuilder();
            this.mAuid = null;
            this.mXui = null;
            this.mDocumentName = null;
            new StringBuilder();
            this.mAuid = str;
            this.mDocumentName = str2;
            queryPath(str).queryPath(XCAP_GLOBAL_PATH).queryPath(str2);
        }

        public XcapDocumentSelector(String str, String str2, String str3) {
            this.mDocumentSelector = new StringBuilder();
            this.mAuid = null;
            this.mXui = null;
            this.mDocumentName = null;
            this.mAuid = str;
            this.mXui = str2;
            this.mDocumentName = str3;
            queryPath(str).queryPath(XCAP_USER_PATH).queryPath(str2).queryPath(str3);
        }

        public XcapDocumentSelector queryPath(String str) {
            if (this.mDocumentSelector.length() != 0) {
                this.mDocumentSelector.append(XcapUri.PATH_SEPARATOR);
            }
            this.mDocumentSelector.append(str);
            return this;
        }

        public String toString() {
            return this.mDocumentSelector.toString();
        }
    }

    public static class XcapNodeSelector {
        private final StringBuilder mNodeSelector = new StringBuilder();

        public XcapNodeSelector(String str) {
            queryByNodeName(str);
        }

        public XcapNodeSelector(String str, String str2) {
            queryByNodeName(str, str2);
        }

        public XcapNodeSelector(String str, String str2, String str3) {
            queryByNodeName(str, str2, str3);
        }

        public XcapNodeSelector queryByAttrName(String str) {
            if (this.mNodeSelector.length() != 0) {
                this.mNodeSelector.append(XcapUri.PATH_SEPARATOR);
            }
            StringBuilder sb = this.mNodeSelector;
            sb.append("@");
            sb.append(str);
            return this;
        }

        public XcapNodeSelector queryByNodeName(String str) {
            if (str == null) {
                return this;
            }
            if (this.mNodeSelector.length() != 0) {
                this.mNodeSelector.append(XcapUri.PATH_SEPARATOR);
            }
            this.mNodeSelector.append(str);
            return this;
        }

        public XcapNodeSelector queryByNodeName(String str, int i) {
            if (this.mNodeSelector.length() != 0) {
                this.mNodeSelector.append(XcapUri.PATH_SEPARATOR);
            }
            StringBuilder sb = this.mNodeSelector;
            sb.append(str);
            sb.append("[");
            sb.append(i);
            sb.append("]");
            return this;
        }

        public XcapNodeSelector queryByNodeName(String str, String str2) {
            if (this.mNodeSelector.length() != 0) {
                this.mNodeSelector.append(XcapUri.PATH_SEPARATOR);
            }
            this.mNodeSelector.append(str);
            queryByAttrName(str2);
            return this;
        }

        public XcapNodeSelector queryByNodeName(String str, String str2, String str3) {
            if (this.mNodeSelector.length() != 0) {
                this.mNodeSelector.append(XcapUri.PATH_SEPARATOR);
            }
            StringBuilder sb = this.mNodeSelector;
            sb.append(str);
            sb.append("[@");
            sb.append(str2);
            sb.append("=\"");
            sb.append(str3);
            sb.append("\"]");
            return this;
        }

        public XcapNodeSelector queryByNodeNameWithPos(String str, int i, String str2, String str3) {
            if (this.mNodeSelector.length() != 0) {
                this.mNodeSelector.append(XcapUri.PATH_SEPARATOR);
            }
            StringBuilder sb = this.mNodeSelector;
            sb.append(str);
            sb.append("[");
            sb.append(i);
            sb.append("]");
            sb.append("[@");
            sb.append(str2);
            sb.append("=\"");
            sb.append(str3);
            sb.append("\"]");
            return this;
        }

        public String toString() {
            return this.mNodeSelector.toString();
        }
    }

    public static String encodePath(String str) throws NullPointerException {
        if (str != null) {
            return new String(URLEncoder.encode(str));
        }
        throw new NullPointerException("string to encode is null");
    }

    public String getDocumentSelector() {
        return this.mDocumentSelector;
    }

    public String getNodeSelector() {
        return this.mNodeSelector;
    }

    public String getXcapRoot() {
        return this.mXcapRoot;
    }

    public XcapUri setDocumentSelector(XcapDocumentSelector xcapDocumentSelector) throws IllegalArgumentException {
        setDocumentSelector(xcapDocumentSelector.toString());
        return this;
    }

    public XcapUri setDocumentSelector(String str) throws IllegalArgumentException {
        if (str.charAt(0) == '/') {
            throw new IllegalArgumentException("document selector must not start with /");
        }
        this.mDocumentSelector = str;
        return this;
    }

    public XcapUri setNodeSelector(XcapNodeSelector xcapNodeSelector) throws IllegalArgumentException {
        setNodeSelector(xcapNodeSelector.toString());
        return this;
    }

    public XcapUri setNodeSelector(String str) throws IllegalArgumentException {
        if (this.mDocumentSelector.charAt(0) == '/') {
            throw new IllegalArgumentException("document selector must not start with /");
        }
        this.mNodeSelector = str;
        return this;
    }

    public XcapUri setXcapRoot(String str) throws IllegalArgumentException {
        if (str.charAt(str.length() - 1) != '/') {
            throw new IllegalArgumentException("xcap root must end with /");
        }
        this.mXcapRoot = str;
        return this;
    }

    public URI toURI() throws URISyntaxException {
        StringBuilder sb = new StringBuilder(this.mXcapRoot);
        if (XcapElement.TRUE.equals(SystemProperties.get("persist.vendor.mtk.xcap.rawurl")) || XcapElement.TRUE.equals(SystemProperties.get("vendor.gsm.radio.ss.rawurl"))) {
            sb.append(this.mDocumentSelector);
            if (this.mNodeSelector != null) {
                sb.append(RESOURCE_SELECTOR_SEPARATOR);
                sb.append(this.mNodeSelector);
            }
        } else {
            sb.append(this.mDocumentSelector.replaceAll("\\+", "%2B"));
            if (this.mNodeSelector != null) {
                sb.append(RESOURCE_SELECTOR_SEPARATOR);
                sb.append(this.mNodeSelector.replaceAll("\\+", "%2B"));
            }
        }
        return new URI(sb.toString());
    }
}
