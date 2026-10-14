package com.mediatek.engineermode.audio;

import com.mediatek.engineermode.Elog;
import com.mediatek.mdml.JsonCmd;
import org.xml.sax.Attributes;
import org.xml.sax.SAXException;
import org.xml.sax.helpers.DefaultHandler;

/* JADX INFO: loaded from: classes2.dex */
public class ContentHandler extends DefaultHandler {
    private static final String TAG = "Audio/ContentHandler";
    AudioLoggerXMLData mAudioLoggerXMLData;
    DumpOptions mDumpOptions = null;
    private String mNodeName;
    private StringBuilder mOption;

    public ContentHandler(AudioLoggerXMLData audioLoggerXMLData) {
        this.mAudioLoggerXMLData = audioLoggerXMLData;
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void characters(char[] cArr, int i, int i2) throws SAXException {
        if ("Option".equals(this.mNodeName)) {
            this.mOption.append(cArr, i, i2);
        }
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void endDocument() throws SAXException {
        Elog.d(TAG, "endDocument");
        for (int i = 0; i < this.mAudioLoggerXMLData.mAudioCommandSetOperation.size(); i++) {
            Elog.d(TAG, "mAudioLoggerXMLData.mAudioCommandSetOperation:" + i + " : " + this.mAudioLoggerXMLData.mAudioCommandSetOperation.get(i));
        }
        for (int i2 = 0; i2 < this.mAudioLoggerXMLData.mAudioCommandGetOperation.size(); i2++) {
            Elog.d(TAG, "mAudioLoggerXMLData.mAudioCommandGetOperation:" + i2 + " : " + this.mAudioLoggerXMLData.mAudioCommandGetOperation.get(i2));
        }
        for (int i3 = 0; i3 < this.mAudioLoggerXMLData.mParametersSetOperationItems.size(); i3++) {
            Elog.d(TAG, "mAudioLoggerXMLData.mParametersSetOperationItems:" + i3 + " : " + this.mAudioLoggerXMLData.mParametersSetOperationItems.get(i3));
        }
        for (int i4 = 0; i4 < this.mAudioLoggerXMLData.mParametersGetOperationItems.size(); i4++) {
            Elog.d(TAG, "mAudioLoggerXMLData.mParametersGetOperationItems:" + i4 + " : " + this.mAudioLoggerXMLData.mParametersGetOperationItems.get(i4));
        }
        for (int i5 = 0; i5 < this.mAudioLoggerXMLData.mAudioDumpOperation.size(); i5++) {
            Elog.d(TAG, "mAudioLoggerXMLData.mAudioDumpOperation,title:" + i5 + " : " + this.mAudioLoggerXMLData.mAudioDumpOperation.get(i5).mCategoryTitle);
            for (int i6 = 0; i6 < this.mAudioLoggerXMLData.mAudioDumpOperation.get(i5).mCmdName.size(); i6++) {
                Elog.d(TAG, "mAudioLoggerXMLData.mAudioDumpOperation,mCmd:" + this.mAudioLoggerXMLData.mAudioDumpOperation.get(i5).mCmd.get(i6));
                Elog.d(TAG, "mAudioLoggerXMLData.mAudioDumpOperation,mCmd name:" + this.mAudioLoggerXMLData.mAudioDumpOperation.get(i5).mCmdName.get(i6));
            }
        }
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void endElement(String str, String str2, String str3) throws SAXException {
        if ("Category".equals(str2)) {
            Elog.d(TAG, "endElement,Category->mOption:" + this.mOption.toString());
            if (!this.mOption.toString().isEmpty()) {
                for (String str4 : this.mOption.toString().trim().replaceAll("\r|\n", ",").replaceAll("\\s*", "").split(",")) {
                    this.mDumpOptions.mCmdName.add(str4);
                }
                this.mAudioLoggerXMLData.mAudioDumpOperation.add(this.mDumpOptions);
            }
            this.mOption.setLength(0);
            return;
        }
        if ("SetAudioCommand".equals(str2)) {
            for (String str5 : this.mOption.toString().trim().replaceAll("\r|\n", "@").replaceAll("\\s*", "").split("@")) {
                this.mAudioLoggerXMLData.setAudioCommandSetOperation(str5);
            }
            this.mOption.setLength(0);
            return;
        }
        if ("GetAudioCommand".equals(str2)) {
            for (String str6 : this.mOption.toString().trim().replaceAll("\r|\n", ",").replaceAll("\\s*", "").split(",")) {
                this.mAudioLoggerXMLData.setAudioCommandGetOperation(str6);
            }
            this.mOption.setLength(0);
            return;
        }
        if ("SetParameters".equals(str2)) {
            for (String str7 : this.mOption.toString().trim().replaceAll("\r|\n", ",").replaceAll("\\s*", "").split(",")) {
                this.mAudioLoggerXMLData.setParametersSetOperation(str7);
            }
            this.mOption.setLength(0);
            return;
        }
        if ("GetParameters".equals(str2)) {
            for (String str8 : this.mOption.toString().trim().replaceAll("\r|\n", ",").replaceAll("\\s*", "").split(",")) {
                this.mAudioLoggerXMLData.setParametersGetOperation(str8);
            }
            this.mOption.setLength(0);
        }
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void startDocument() throws SAXException {
        this.mOption = new StringBuilder();
        Elog.d(TAG, "startDocument");
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void startElement(String str, String str2, String str3, Attributes attributes) throws SAXException {
        Elog.d(TAG, "uri:" + str + " localName:" + str2 + " qName:" + str3);
        this.mNodeName = str2;
        if ("Category".equals(str2)) {
            String value = attributes.getValue("title");
            if (value.isEmpty()) {
                return;
            }
            Elog.d(TAG, "myTitle:" + value);
            DumpOptions dumpOptions = new DumpOptions();
            this.mDumpOptions = dumpOptions;
            dumpOptions.mCategoryTitle = value;
            return;
        }
        if ("Option".equals(this.mNodeName)) {
            String value2 = attributes.getValue(JsonCmd.STR_TYPE_KEY);
            String value3 = attributes.getValue("cmd");
            String value4 = attributes.getValue("check");
            String value5 = attributes.getValue("uncheck");
            Elog.d(TAG, "attributes.getValue(type):" + value2);
            Elog.d(TAG, "attributes.getValue(cmd):" + value3);
            Elog.d(TAG, "attributes.getValue(check):" + value4);
            Elog.d(TAG, "attributes.getValue(uncheck):" + value5);
            this.mDumpOptions.mType.add(value2);
            this.mDumpOptions.mCmd.add(value3);
            this.mDumpOptions.mCheck.add(value4);
            this.mDumpOptions.mUncheck.add(value5);
        }
    }
}
