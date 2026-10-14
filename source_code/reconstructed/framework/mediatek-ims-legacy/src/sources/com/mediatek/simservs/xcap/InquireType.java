package com.mediatek.simservs.xcap;

import android.util.Log;
import com.mediatek.simservs.client.SimServs;
import com.mediatek.xcap.client.XcapClient;
import com.mediatek.xcap.client.XcapConstants;
import com.mediatek.xcap.client.XcapDebugParam;
import com.mediatek.xcap.client.uri.XcapUri;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.HashMap;
import javax.xml.parsers.ParserConfigurationException;

/* JADX INFO: loaded from: classes.dex */
public abstract class InquireType extends XcapElement {
    public InquireType(XcapUri xcapUri, String str, String str2) throws ParserConfigurationException, XcapException {
        super(xcapUri, str, str2);
    }

    public String getContent() throws XcapException {
        boolean z;
        XcapClient xcapClient = null;
        String strConvertStreamToString = null;
        InputStream inputStream = null;
        HashMap map = new HashMap();
        try {
            try {
                String string = getNodeUri().toString();
                XcapDebugParam xcapDebugParam = XcapDebugParam.getInstance();
                if (xcapDebugParam.getEnableSimservQueryWhole() ? true : SimServs.sSimservQueryWhole) {
                    string = string.substring(0, string.lastIndexOf(SimServs.SIMSERVS_FILENAME) + SimServs.SIMSERVS_FILENAME.length());
                }
                URI uri = new URI(string);
                SimServs simServs = SimServs.getInstance();
                xcapClient = this.mNetwork != null ? new XcapClient(simServs.getContext(), this.mNetwork, simServs.getPhoneId()) : new XcapClient(simServs.getContext(), simServs.getPhoneId());
                if (this.mIntendedId != null) {
                    map.put("X-3GPP-Intended-Identity", "\"" + this.mIntendedId + "\"");
                }
                boolean z2 = xcapDebugParam.getDisableETag() ? true : SimServs.sETagDisable;
                if (this.mEtag != null && !z2) {
                    map.put(XcapConstants.HDR_KEY_IF_NONE_MATCH, this.mEtag);
                }
                HttpURLConnection httpURLConnection = xcapClient.get(uri, map);
                if (httpURLConnection != null) {
                    int responseCode = httpURLConnection.getResponseCode();
                    if (responseCode != 200 && responseCode != 304) {
                        if (responseCode != 409) {
                            throw new XcapException(responseCode);
                        }
                        try {
                            try {
                                InputStream inputStream2 = httpURLConnection.getInputStream();
                                if (inputStream2 == null || !XcapElement.TRUE.equals(System.getProperty("xcap.handl409"))) {
                                    throw new XcapException(409);
                                }
                                throw new XcapException(409, parse409ErrorMessage("phrase", inputStream2));
                            } catch (IOException e) {
                                e.printStackTrace();
                                throw new XcapException(409);
                            }
                        } catch (Throwable th) {
                            if (0 != 0) {
                                inputStream.close();
                            }
                            throw th;
                        }
                    }
                    String headerField = httpURLConnection.getHeaderField(XcapConstants.HDR_KEY_ETAG);
                    if (headerField != null) {
                        this.mIsSupportEtag = true;
                        this.mEtag = headerField;
                        z = false;
                    } else {
                        z = false;
                        this.mIsSupportEtag = false;
                        this.mEtag = null;
                    }
                    if (z2) {
                        this.mIsSupportEtag = z;
                    }
                    if (responseCode == 200) {
                        InputStream inputStream3 = null;
                        try {
                            inputStream3 = httpURLConnection.getInputStream();
                            strConvertStreamToString = convertStreamToString(inputStream3);
                            if (inputStream3 != null) {
                                inputStream3.close();
                            }
                        } catch (Throwable th2) {
                            if (inputStream3 != null) {
                                inputStream3.close();
                            }
                            throw th2;
                        }
                    }
                }
            } catch (IOException e2) {
                e2.printStackTrace();
                throw new XcapException(e2);
            } catch (URISyntaxException e3) {
                e3.printStackTrace();
                if (0 != 0) {
                }
                Log.d(XcapElement.TAG, "Response XML:" + SimServs.encryptString(strConvertStreamToString));
                return strConvertStreamToString;
            }
            xcapClient.shutdown();
            Log.d(XcapElement.TAG, "Response XML:" + SimServs.encryptString(strConvertStreamToString));
            return strConvertStreamToString;
        } catch (Throwable th3) {
            if (0 != 0) {
                xcapClient.shutdown();
            }
            throw th3;
        }
    }
}
