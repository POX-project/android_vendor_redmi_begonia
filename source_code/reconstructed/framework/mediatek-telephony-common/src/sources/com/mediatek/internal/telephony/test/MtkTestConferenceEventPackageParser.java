package com.mediatek.internal.telephony.test;

import android.os.Bundle;
import android.telephony.ims.ImsConferenceState;
import android.util.Log;
import android.util.Xml;
import com.android.internal.util.XmlUtils;
import com.mediatek.internal.telephony.datasub.DataSubConstants;
import java.io.IOException;
import java.io.InputStream;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes.dex */
public class MtkTestConferenceEventPackageParser {
    private static final String LOG_TAG = "MtkTestConferenceEventPackageParser";
    private static final String PARTICIPANT_TAG = "participant";
    private InputStream mInputStream;

    public MtkTestConferenceEventPackageParser(InputStream inputStream) {
        this.mInputStream = inputStream;
    }

    private Bundle parseParticipant(XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        Bundle bundle = new Bundle();
        String text = "";
        String text2 = "";
        String text3 = "";
        String text4 = "";
        int depth = xmlPullParser.getDepth();
        while (XmlUtils.nextElementWithin(xmlPullParser, depth)) {
            if (xmlPullParser.getName().equals(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER)) {
                xmlPullParser.next();
                text = xmlPullParser.getText();
            } else if (xmlPullParser.getName().equals("display-text")) {
                xmlPullParser.next();
                text2 = xmlPullParser.getText();
            } else if (xmlPullParser.getName().equals("endpoint")) {
                xmlPullParser.next();
                text3 = xmlPullParser.getText();
            } else if (xmlPullParser.getName().equals("status")) {
                xmlPullParser.next();
                text4 = xmlPullParser.getText();
            }
        }
        Log.v(LOG_TAG, "User: " + text);
        Log.v(LOG_TAG, "DisplayText: " + text2);
        Log.v(LOG_TAG, "Endpoint: " + text3);
        Log.v(LOG_TAG, "Status: " + text4);
        bundle.putString(DataSubConstants.REASON_MOBILE_DATA_ENABLE_USER, text);
        bundle.putString("display-text", text2);
        bundle.putString("endpoint", text3);
        bundle.putString("status", text4);
        return bundle;
    }

    public ImsConferenceState parse() {
        ImsConferenceState imsConferenceState = new ImsConferenceState();
        try {
            try {
                XmlPullParser xmlPullParserNewPullParser = Xml.newPullParser();
                xmlPullParserNewPullParser.setInput(this.mInputStream, null);
                xmlPullParserNewPullParser.nextTag();
                int depth = xmlPullParserNewPullParser.getDepth();
                while (XmlUtils.nextElementWithin(xmlPullParserNewPullParser, depth)) {
                    if (xmlPullParserNewPullParser.getName().equals(PARTICIPANT_TAG)) {
                        Log.v(LOG_TAG, "Found participant.");
                        Bundle participant = parseParticipant(xmlPullParserNewPullParser);
                        imsConferenceState.mParticipants.put(participant.getString("endpoint"), participant);
                    }
                }
                try {
                    this.mInputStream.close();
                    return imsConferenceState;
                } catch (IOException e) {
                    Log.e(LOG_TAG, "Failed to close test conference event package InputStream", e);
                    return null;
                }
            } catch (IOException | XmlPullParserException e2) {
                Log.e(LOG_TAG, "Failed to read test conference event package from XML file", e2);
                try {
                    this.mInputStream.close();
                    return null;
                } catch (IOException e3) {
                    Log.e(LOG_TAG, "Failed to close test conference event package InputStream", e3);
                    return null;
                }
            }
        } catch (Throwable th) {
            try {
                this.mInputStream.close();
                throw th;
            } catch (IOException e4) {
                Log.e(LOG_TAG, "Failed to close test conference event package InputStream", e4);
                return null;
            }
        }
    }
}
