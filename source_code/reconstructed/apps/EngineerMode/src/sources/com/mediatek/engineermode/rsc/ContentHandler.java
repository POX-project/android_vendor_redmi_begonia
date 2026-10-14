package com.mediatek.engineermode.rsc;

import com.mediatek.engineermode.Elog;
import com.mediatek.engineermode.rsc.ConfigXMLData.ProjectData;
import java.util.Objects;
import org.xml.sax.Attributes;
import org.xml.sax.SAXException;
import org.xml.sax.helpers.DefaultHandler;

/* JADX INFO: loaded from: classes3.dex */
public class ContentHandler extends DefaultHandler {
    private static final String INDEX_ATTR = "index";
    private static final String MAGIC_TAG = "magic";
    private static final String NAME_TAG = "name";
    private static final String OFFSET_TAG = "offset";
    private static final String OPTR_TAG = "operator";
    private static final String PROJ_TAG = "proj_item";
    private static final String TAG = "rcs/ContentHandler";
    private static final String TAR_PARTITON_TAG = "part_info";
    private static final String VER_ATTR = "version";
    private static final String VER_TAG = "runtime_switchable_config";
    private ConfigXMLData mConfigXmlData;
    private String mNodeName;
    private ConfigXMLData.ProjectData mProjData;
    private boolean mIsTarPart = false;
    private StringBuilder mTempStr = new StringBuilder();

    public ContentHandler(ConfigXMLData configXMLData) {
        this.mConfigXmlData = configXMLData;
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void characters(char[] cArr, int i, int i2) throws SAXException {
        this.mTempStr.append(cArr, i, i2);
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void endElement(String str, String str2, String str3) throws SAXException {
        Elog.d(TAG, "endElement qName:" + str3);
        if (TAR_PARTITON_TAG.equals(str3)) {
            this.mIsTarPart = false;
            return;
        }
        if (PROJ_TAG.equals(str3)) {
            this.mConfigXmlData.addProjectName(this.mProjData);
            Elog.d(TAG, "add mProjData");
            return;
        }
        if (MAGIC_TAG.equals(this.mNodeName)) {
            this.mConfigXmlData.setMagic(this.mTempStr.toString());
            return;
        }
        if (!NAME_TAG.equals(this.mNodeName)) {
            if (OPTR_TAG.equals(this.mNodeName)) {
                this.mProjData.setOptr(this.mTempStr.toString());
                return;
            } else {
                if (OFFSET_TAG.equals(this.mNodeName)) {
                    this.mConfigXmlData.setTarPartOffset(this.mTempStr.toString());
                    return;
                }
                return;
            }
        }
        if (this.mIsTarPart) {
            this.mConfigXmlData.setTarPartName(this.mTempStr.toString());
            Elog.d(TAG, "setTarPartName:" + ((Object) this.mTempStr));
            return;
        }
        this.mProjData.setName(this.mTempStr.toString());
        Elog.d(TAG, "addProjectName:" + ((Object) this.mTempStr));
    }

    @Override // org.xml.sax.helpers.DefaultHandler, org.xml.sax.ContentHandler
    public void startElement(String str, String str2, String str3, Attributes attributes) throws SAXException {
        Elog.d(TAG, "startElement qName:" + str3);
        this.mNodeName = str3;
        this.mTempStr.setLength(0);
        if (TAR_PARTITON_TAG.equals(str3)) {
            this.mIsTarPart = true;
            return;
        }
        if (VER_TAG.equals(str3)) {
            this.mConfigXmlData.setVersion(Integer.valueOf(attributes.getValue("version")).intValue());
        } else if (PROJ_TAG.equals(str3)) {
            ConfigXMLData configXMLData = this.mConfigXmlData;
            Objects.requireNonNull(configXMLData);
            this.mProjData = configXMLData.new ProjectData();
            Elog.d(TAG, "new mProjData");
            this.mProjData.setIndex(Integer.valueOf(attributes.getValue(INDEX_ATTR)).intValue());
        }
    }
}
