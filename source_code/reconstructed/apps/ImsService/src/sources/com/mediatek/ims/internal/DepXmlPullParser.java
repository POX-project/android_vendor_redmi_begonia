package com.mediatek.ims.internal;

import android.telephony.Rlog;
import android.util.Xml;
import java.io.IOException;
import java.io.InputStream;
import org.xmlpull.v1.XmlPullParser;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes.dex */
public class DepXmlPullParser implements DialogEventPackageParser {
    private static final String namespace = null;

    private DialogInfo.Dialog readDialog(XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        DialogInfo.Local local = null;
        xmlPullParser.require(2, namespace, "dialog");
        int i = Integer.parseInt(xmlPullParser.getAttributeValue(null, "id"));
        boolean zBooleanValue = true;
        String text = "";
        while (xmlPullParser.next() != 3) {
            if (xmlPullParser.getEventType() == 2) {
                String name = xmlPullParser.getName();
                if (name.equals("sa:exclusive")) {
                    zBooleanValue = Boolean.valueOf(readText(xmlPullParser)).booleanValue();
                } else if (name.equals("state")) {
                    text = readText(xmlPullParser);
                } else if (name.equals("local")) {
                    local = readLocal(xmlPullParser);
                } else {
                    skip(xmlPullParser);
                }
            }
        }
        return new DialogInfo.Dialog(i, zBooleanValue, text, local);
    }

    private DialogInfo readDialogInfo(XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        DialogInfo dialogInfo = new DialogInfo();
        xmlPullParser.require(2, namespace, "dialog-info");
        while (xmlPullParser.next() != 3) {
            if (xmlPullParser.getEventType() == 2) {
                if (xmlPullParser.getName().equals("dialog")) {
                    dialogInfo.addDialog(readDialog(xmlPullParser));
                } else {
                    skip(xmlPullParser);
                }
            }
        }
        return dialogInfo;
    }

    private DialogInfo.Local readLocal(XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        DialogInfo.Local local = new DialogInfo.Local();
        xmlPullParser.require(2, namespace, "local");
        while (xmlPullParser.next() != 3) {
            if (xmlPullParser.getEventType() == 2) {
                String name = xmlPullParser.getName();
                if (name.equals("identity")) {
                    local.setIdentity(readText(xmlPullParser));
                } else if (name.equals("target")) {
                    local.setTargetUri(xmlPullParser.getAttributeValue(null, "uri"));
                    readTargetParamAttributesToLocal(xmlPullParser, local);
                } else if (name.equals("mediaAttributes")) {
                    local.addMediaAttribute(readMediaAttributes(xmlPullParser));
                } else if (name.equals("param")) {
                    local.setParam(readParam(xmlPullParser));
                    Rlog.d("DEP Parser", "read param from Local()");
                } else {
                    skip(xmlPullParser);
                }
            }
        }
        return local;
    }

    private DialogInfo.MediaAttribute readMediaAttributes(XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        String text = "";
        String text2 = "";
        boolean z = false;
        xmlPullParser.require(2, namespace, "mediaAttributes");
        while (xmlPullParser.next() != 3) {
            if (xmlPullParser.getEventType() == 2) {
                String name = xmlPullParser.getName();
                if (name.equals("mediaType")) {
                    text = readText(xmlPullParser);
                } else if (name.equals("mediaDirection")) {
                    text2 = readText(xmlPullParser);
                } else if (name.equals("port0")) {
                    z = true;
                    skip(xmlPullParser);
                } else {
                    skip(xmlPullParser);
                }
            }
        }
        return new DialogInfo.MediaAttribute(text, text2, z);
    }

    private DialogInfo.Param readParam(XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        xmlPullParser.require(2, namespace, "param");
        String attributeValue = xmlPullParser.getAttributeValue(null, "pname");
        String attributeValue2 = xmlPullParser.getAttributeValue(null, "pval");
        skip(xmlPullParser);
        return new DialogInfo.Param(attributeValue, attributeValue2);
    }

    private void readTargetParamAttributesToLocal(XmlPullParser xmlPullParser, DialogInfo.Local local) throws XmlPullParserException, IOException {
        xmlPullParser.require(2, namespace, "target");
        Rlog.d("DEP Parser", "readTargetParamAttributesToLocal()");
        while (xmlPullParser.next() != 3) {
            if (xmlPullParser.getEventType() == 2) {
                if (xmlPullParser.getName().equals("param")) {
                    local.setParam(readParam(xmlPullParser));
                } else {
                    skip(xmlPullParser);
                }
            }
        }
    }

    private String readText(XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        if (xmlPullParser.next() != 4) {
            return "";
        }
        String text = xmlPullParser.getText();
        xmlPullParser.nextTag();
        return text;
    }

    private void skip(XmlPullParser xmlPullParser) throws XmlPullParserException, IOException {
        if (xmlPullParser.getEventType() != 2) {
            throw new IllegalStateException();
        }
        int i = 1;
        while (i != 0) {
            int next = xmlPullParser.next();
            if (next == 2) {
                i++;
            } else if (next == 3) {
                i--;
            }
        }
    }

    @Override // com.mediatek.ims.internal.DialogEventPackageParser
    public DialogInfo parse(InputStream inputStream) throws XmlPullParserException, IOException {
        try {
            XmlPullParser xmlPullParserNewPullParser = Xml.newPullParser();
            xmlPullParserNewPullParser.setFeature("http://xmlpull.org/v1/doc/features.html#process-namespaces", false);
            xmlPullParserNewPullParser.setInput(inputStream, null);
            xmlPullParserNewPullParser.nextTag();
            return readDialogInfo(xmlPullParserNewPullParser);
        } finally {
            inputStream.close();
        }
    }
}
