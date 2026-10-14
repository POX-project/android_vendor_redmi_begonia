package com.mediatek.simservs.client;

import android.content.Context;
import android.net.Network;
import android.os.SystemProperties;
import android.util.Log;
import com.mediatek.simservs.capability.BarringServiceCapability;
import com.mediatek.simservs.capability.DiversionServiceCapability;
import com.mediatek.simservs.xcap.XcapElement;
import com.mediatek.xcap.client.XcapDebugParam;
import com.mediatek.xcap.client.uri.XcapUri;
import java.io.UnsupportedEncodingException;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.Base64;

/* JADX INFO: loaded from: classes.dex */
public class SimServs {
    public static final int CARDTYPE_ISIM = 2;
    public static final int CARDTYPE_UNSPECIFIED = 0;
    public static final int CARDTYPE_USIM = 1;
    public static final boolean LIB_CONFIG_MULTIPLE_RULE_CONDITIONS = true;
    public static final String SIMSERVS_FILENAME = "simservs.xml";
    public static final String TAG = "SimServs";
    private static XcapDebugParam sXcapDebugParam;
    private Context mContext;
    public XcapUri.XcapDocumentSelector mDocumentSelector;
    public URI mDocumentUri;
    private int mPhoneId;
    public XcapUri mXcapUri;
    public static boolean sDebug = false;
    public static String AUID_SIMSERVS = "simservs.ngn.etsi.org";
    public static boolean sETagDisable = false;
    public static boolean sSimservQueryWhole = false;
    public static SimServs sInstance = null;
    private static String sXcapRoot = null;
    private static String sXui = null;
    private int mCardType = 0;
    private String mIntendedId = null;
    private String mImsi = null;
    private String mMnc = null;
    private String mMcc = null;
    private String mImpi = null;
    private String mImpu = null;
    private String mUsername = null;
    private String mPassword = null;

    public SimServs() {
        if (SystemProperties.get("vendor.mediatek.simserv.debug", "0").equals("1")) {
            sDebug = true;
            Log.d(TAG, "sDebug enabled.");
        }
    }

    private void buildRootUri() throws URISyntaxException {
        StringBuilder sb = new StringBuilder();
        Log.d("Simservs", "xcap.protocol=" + System.getProperty("xcap.protocol"));
        String property = System.getProperty("xcap.protocol", "https");
        int i = this.mCardType;
        if (i == 1) {
            sb.append(property + "://xcap.ims.mnc");
            sb.append(this.mMnc);
            sb.append(".mcc");
            sb.append(this.mMcc);
            sb.append(".pub.3gppnetwork.org");
        } else {
            if (i != 2) {
                return;
            }
            String str = this.mImpi;
            if (str == null || !str.endsWith("3gppnetwork.org")) {
                String impiDomain = getImpiDomain();
                if (impiDomain == null) {
                    return;
                }
                sb.append(property + "://xcap.");
                sb.append(impiDomain);
            } else {
                String impiDomain2 = getImpiDomain();
                if (impiDomain2 == null) {
                    return;
                }
                sb.append(property + "://xcap.");
                sb.append(impiDomain2.substring(0, impiDomain2.indexOf(".3gppnetwork.org")));
                if (this.mImpi.contains(".pub")) {
                    sb.append(".3gppnetwork.org");
                } else {
                    sb.append(".pub.3gppnetwork.org");
                }
            }
        }
        sb.append("/");
        sXcapRoot = sb.toString();
        buildDocumentUri();
    }

    public static String encryptString(String str) throws UnsupportedEncodingException {
        byte[] bytes;
        Base64.Encoder encoder = Base64.getEncoder();
        if (str == null) {
            return "null";
        }
        try {
            bytes = str.getBytes("UTF-8");
        } catch (Exception e) {
            e.printStackTrace();
            bytes = null;
        }
        return bytes == null ? "" : encoder.encodeToString(bytes);
    }

    private String getImpiDomain() {
        String str = this.mImpi;
        if (str == null || str.isEmpty() || !this.mImpi.contains("@")) {
            return null;
        }
        return this.mImpi.split("@")[1];
    }

    public static SimServs getInstance() {
        if (sInstance == null) {
            sInstance = new SimServs();
        }
        initializeDebugParam();
        return sInstance;
    }

    private static void initializeDebugParam() {
        XcapDebugParam xcapDebugParam = XcapDebugParam.getInstance();
        sXcapDebugParam = xcapDebugParam;
        xcapDebugParam.load();
        String xcapRoot = sXcapDebugParam.getXcapRoot();
        if (xcapRoot != null && !xcapRoot.isEmpty()) {
            sXcapRoot = xcapRoot;
        }
        String xcapXui = sXcapDebugParam.getXcapXui();
        if (xcapXui == null || xcapXui.isEmpty()) {
            return;
        }
        sXui = xcapXui;
    }

    public void buildDocumentUri() throws URISyntaxException {
        String xcapDocumentName = sXcapDebugParam.getXcapDocumentName();
        String xcapAUID = sXcapDebugParam.getXcapAUID();
        this.mDocumentSelector = new XcapUri.XcapDocumentSelector((xcapAUID == null || xcapAUID.isEmpty()) ? AUID_SIMSERVS : xcapAUID, sXui, (xcapDocumentName == null || xcapDocumentName.isEmpty()) ? SIMSERVS_FILENAME : xcapDocumentName);
        Log.d(TAG, "document selector is " + encryptString(this.mDocumentSelector.toString()));
        this.mXcapUri = new XcapUri();
        Log.d(TAG, "buildDocumentUri():Create instance for mXcapUri");
        this.mXcapUri.setXcapRoot(sXcapRoot).setDocumentSelector(this.mDocumentSelector);
        this.mDocumentUri = this.mXcapUri.toURI();
    }

    public BarringServiceCapability getBarringServiceCapability(XcapUri xcapUri) throws Exception {
        return new BarringServiceCapability(xcapUri, null, this.mIntendedId);
    }

    public BarringServiceCapability getBarringServiceCapability(boolean z) throws Exception {
        return new BarringServiceCapability(this.mXcapUri, null, this.mIntendedId);
    }

    public CommunicationDiversion getCommunicationDiversion(XcapUri xcapUri) throws Exception {
        return new CommunicationDiversion(xcapUri, null, this.mIntendedId);
    }

    public CommunicationDiversion getCommunicationDiversion(boolean z) throws Exception {
        CommunicationDiversion communicationDiversion = new CommunicationDiversion(this.mXcapUri, null, this.mIntendedId);
        communicationDiversion.loadConfiguration();
        return communicationDiversion;
    }

    public CommunicationDiversion getCommunicationDiversion(boolean z, Network network) throws Exception {
        CommunicationDiversion communicationDiversion = new CommunicationDiversion(this.mXcapUri, null, this.mIntendedId);
        if (network != null) {
            communicationDiversion.setNetwork(network);
        }
        communicationDiversion.loadConfiguration();
        return communicationDiversion;
    }

    public CommunicationWaiting getCommunicationWaiting(XcapUri xcapUri) throws Exception {
        return new CommunicationWaiting(xcapUri, null, this.mIntendedId);
    }

    public CommunicationWaiting getCommunicationWaiting(boolean z) throws Exception {
        CommunicationWaiting communicationWaiting = new CommunicationWaiting(this.mXcapUri, null, this.mIntendedId);
        communicationWaiting.loadConfiguration();
        return communicationWaiting;
    }

    public CommunicationWaiting getCommunicationWaiting(boolean z, Network network) throws Exception {
        CommunicationWaiting communicationWaiting = new CommunicationWaiting(this.mXcapUri, null, this.mIntendedId);
        if (network != null) {
            communicationWaiting.setNetwork(network);
        }
        communicationWaiting.loadConfiguration();
        return communicationWaiting;
    }

    public Context getContext() {
        return this.mContext;
    }

    public DiversionServiceCapability getDiversionServiceCapability(XcapUri xcapUri) throws Exception {
        return new DiversionServiceCapability(xcapUri, null, this.mIntendedId);
    }

    public DiversionServiceCapability getDiversionServiceCapability(boolean z) throws Exception {
        return new DiversionServiceCapability(this.mXcapUri, null, this.mIntendedId);
    }

    public String getDocumentUri() {
        return this.mDocumentUri.toString();
    }

    public IncomingCommunicationBarring getIncomingCommunicationBarring(XcapUri xcapUri) throws Exception {
        return new IncomingCommunicationBarring(xcapUri, null, this.mIntendedId);
    }

    public IncomingCommunicationBarring getIncomingCommunicationBarring(boolean z) throws Exception {
        IncomingCommunicationBarring incomingCommunicationBarring = new IncomingCommunicationBarring(this.mXcapUri, null, this.mIntendedId);
        incomingCommunicationBarring.loadConfiguration();
        return incomingCommunicationBarring;
    }

    public IncomingCommunicationBarring getIncomingCommunicationBarring(boolean z, Network network) throws Exception {
        IncomingCommunicationBarring incomingCommunicationBarring = new IncomingCommunicationBarring(this.mXcapUri, null, this.mIntendedId);
        if (network != null) {
            incomingCommunicationBarring.setNetwork(network);
        }
        incomingCommunicationBarring.loadConfiguration();
        return incomingCommunicationBarring;
    }

    public String getIntendedId() {
        return this.mIntendedId;
    }

    public OriginatingIdentityPresentation getOriginatingIdentityPresentation(XcapUri xcapUri) throws Exception {
        return new OriginatingIdentityPresentation(xcapUri, null, this.mIntendedId);
    }

    public OriginatingIdentityPresentation getOriginatingIdentityPresentation(boolean z) throws Exception {
        OriginatingIdentityPresentation originatingIdentityPresentation = new OriginatingIdentityPresentation(this.mXcapUri, null, this.mIntendedId);
        originatingIdentityPresentation.loadConfiguration();
        return originatingIdentityPresentation;
    }

    public OriginatingIdentityPresentation getOriginatingIdentityPresentation(boolean z, Network network) throws Exception {
        OriginatingIdentityPresentation originatingIdentityPresentation = new OriginatingIdentityPresentation(this.mXcapUri, null, this.mIntendedId);
        if (network != null) {
            originatingIdentityPresentation.setNetwork(network);
        }
        originatingIdentityPresentation.loadConfiguration();
        return originatingIdentityPresentation;
    }

    public OriginatingIdentityPresentationRestriction getOriginatingIdentityPresentationRestriction(XcapUri xcapUri) throws Exception {
        return new OriginatingIdentityPresentationRestriction(xcapUri, null, this.mIntendedId);
    }

    public OriginatingIdentityPresentationRestriction getOriginatingIdentityPresentationRestriction(boolean z) throws Exception {
        OriginatingIdentityPresentationRestriction originatingIdentityPresentationRestriction = new OriginatingIdentityPresentationRestriction(this.mXcapUri, null, this.mIntendedId);
        originatingIdentityPresentationRestriction.loadConfiguration();
        return originatingIdentityPresentationRestriction;
    }

    public OriginatingIdentityPresentationRestriction getOriginatingIdentityPresentationRestriction(boolean z, Network network) throws Exception {
        OriginatingIdentityPresentationRestriction originatingIdentityPresentationRestriction = new OriginatingIdentityPresentationRestriction(this.mXcapUri, null, this.mIntendedId);
        if (network != null) {
            originatingIdentityPresentationRestriction.setNetwork(network);
        }
        originatingIdentityPresentationRestriction.loadConfiguration();
        return originatingIdentityPresentationRestriction;
    }

    public OutgoingCommunicationBarring getOutgoingCommunicationBarring(XcapUri xcapUri) throws Exception {
        return new OutgoingCommunicationBarring(xcapUri, null, this.mIntendedId);
    }

    public OutgoingCommunicationBarring getOutgoingCommunicationBarring(boolean z) throws Exception {
        OutgoingCommunicationBarring outgoingCommunicationBarring = new OutgoingCommunicationBarring(this.mXcapUri, null, this.mIntendedId);
        outgoingCommunicationBarring.loadConfiguration();
        return outgoingCommunicationBarring;
    }

    public OutgoingCommunicationBarring getOutgoingCommunicationBarring(boolean z, Network network) throws Exception {
        OutgoingCommunicationBarring outgoingCommunicationBarring = new OutgoingCommunicationBarring(this.mXcapUri, null, this.mIntendedId);
        if (network != null) {
            outgoingCommunicationBarring.setNetwork(network);
        }
        outgoingCommunicationBarring.loadConfiguration();
        return outgoingCommunicationBarring;
    }

    public int getPhoneId() {
        return this.mPhoneId;
    }

    public TerminatingIdentityPresentation getTerminatingIdentityPresentation(XcapUri xcapUri) throws Exception {
        return new TerminatingIdentityPresentation(xcapUri, null, this.mIntendedId);
    }

    public TerminatingIdentityPresentation getTerminatingIdentityPresentation(boolean z) throws Exception {
        TerminatingIdentityPresentation terminatingIdentityPresentation = new TerminatingIdentityPresentation(this.mXcapUri, null, this.mIntendedId);
        terminatingIdentityPresentation.loadConfiguration();
        return terminatingIdentityPresentation;
    }

    public TerminatingIdentityPresentation getTerminatingIdentityPresentation(boolean z, Network network) throws Exception {
        TerminatingIdentityPresentation terminatingIdentityPresentation = new TerminatingIdentityPresentation(this.mXcapUri, null, this.mIntendedId);
        if (network != null) {
            terminatingIdentityPresentation.setNetwork(network);
        }
        terminatingIdentityPresentation.loadConfiguration();
        return terminatingIdentityPresentation;
    }

    public TerminatingIdentityPresentationRestriction getTerminatingIdentityPresentationRestriction(XcapUri xcapUri) throws Exception {
        return new TerminatingIdentityPresentationRestriction(xcapUri, null, this.mIntendedId);
    }

    public TerminatingIdentityPresentationRestriction getTerminatingIdentityPresentationRestriction(boolean z) throws Exception {
        TerminatingIdentityPresentationRestriction terminatingIdentityPresentationRestriction = new TerminatingIdentityPresentationRestriction(this.mXcapUri, null, this.mIntendedId);
        terminatingIdentityPresentationRestriction.loadConfiguration();
        return terminatingIdentityPresentationRestriction;
    }

    public TerminatingIdentityPresentationRestriction getTerminatingIdentityPresentationRestriction(boolean z, Network network) throws Exception {
        TerminatingIdentityPresentationRestriction terminatingIdentityPresentationRestriction = new TerminatingIdentityPresentationRestriction(this.mXcapUri, null, this.mIntendedId);
        if (network != null) {
            terminatingIdentityPresentationRestriction.setNetwork(network);
        }
        terminatingIdentityPresentationRestriction.loadConfiguration();
        return terminatingIdentityPresentationRestriction;
    }

    public XcapDebugParam getXcapDebugParam() {
        return sXcapDebugParam;
    }

    public String getXcapRoot() {
        return sXcapRoot;
    }

    public String getXui() {
        return sXui;
    }

    public void resetParameters() {
        sXcapRoot = null;
        sXui = null;
        this.mIntendedId = null;
    }

    public void setAUID(String str) {
        AUID_SIMSERVS = str;
        Log.d(TAG, "setAUID: " + str);
    }

    public void setAttrNeedQuotationMark(boolean z) {
        if (z) {
            System.setProperty("xcap.attr.active.quote", XcapElement.TRUE);
        } else {
            System.setProperty("xcap.attr.active.quote", XcapElement.FALSE);
        }
    }

    public void setContext(Context context) {
        this.mContext = context;
    }

    public void setETagDisable(boolean z) {
        Log.d(TAG, "setETagDisable: " + z);
        sETagDisable = z;
    }

    public void setElementUpdateContentType(boolean z, String str) {
        if (z) {
            System.setProperty("xcap.putelcontenttype", "application/xcap-el+xml");
        } else {
            System.setProperty("xcap.putelcontenttype", str);
        }
    }

    public void setFillCompleteForwardTo(boolean z) {
        if (z) {
            System.setProperty("xcap.completeforwardto", XcapElement.TRUE);
        } else {
            System.setProperty("xcap.completeforwardto", XcapElement.FALSE);
        }
    }

    public void setHandleError409(boolean z) {
        if (z) {
            System.setProperty("xcap.handl409", XcapElement.TRUE);
        } else {
            System.setProperty("xcap.handl409", XcapElement.FALSE);
        }
    }

    public void setHttpCredential(String str, String str2) {
    }

    public void setIntendedId(String str) {
        this.mIntendedId = str;
    }

    public void setPhoneId(int i) {
        this.mPhoneId = i;
    }

    public void setSimservQueryWhole(boolean z) {
        Log.d(TAG, "setSimservQueryWhole: " + z);
        sSimservQueryWhole = z;
    }

    public void setUseHttpProtocolScheme(boolean z) {
        if (z) {
            System.setProperty("xcap.protocol", "http");
        } else {
            System.setProperty("xcap.protocol", "https");
        }
    }

    public void setXcapNSPrefixSS(boolean z) {
        if (z) {
            System.setProperty("xcap.ns.ss", XcapElement.TRUE);
        } else {
            System.setProperty("xcap.ns.ss", XcapElement.FALSE);
        }
    }

    public void setXcapRoot(String str) {
        sXcapRoot = str;
        try {
            buildDocumentUri();
        } catch (URISyntaxException e) {
            e.printStackTrace();
            sXcapRoot = null;
        }
    }

    public void setXcapRootByImpi(String str) {
        this.mCardType = 2;
        this.mImpi = str;
        try {
            buildRootUri();
        } catch (URISyntaxException e) {
            e.printStackTrace();
        }
    }

    public void setXcapRootByMccMnc(String str, String str2) {
        this.mCardType = 1;
        this.mMcc = str;
        this.mMnc = str2;
        try {
            buildRootUri();
        } catch (URISyntaxException e) {
            e.printStackTrace();
        }
    }

    public void setXui(String str) {
        sXui = str;
    }

    public void setXuiByImpu(String str) {
        this.mCardType = 2;
        this.mImpu = str;
        sXui = str;
    }

    public void setXuiByImsiMccMnc(String str, String str2, String str3) {
        this.mCardType = 1;
        this.mImsi = str;
        this.mMcc = str2;
        this.mMnc = str3;
        sXui = String.format("sip:%s@ims.mnc%03d.mcc%03d.3gppnetwork.org", str, Integer.valueOf(Integer.parseInt(str3)), Integer.valueOf(Integer.parseInt(str2)));
    }
}
