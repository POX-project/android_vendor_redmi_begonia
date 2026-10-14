package com.mediatek.lbs.em2.utils;

import android.util.Log;
import java.io.File;
import java.io.IOException;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;
import org.xml.sax.SAXException;

/* JADX INFO: loaded from: classes.dex */
public class MtkAgpsXmlParser {
    protected AgpsConfig agpsConfig;
    protected Document doc;
    protected String versionString;

    public MtkAgpsXmlParser() throws IOException {
        this("/etc/agps_profiles_conf2.xml");
    }

    public MtkAgpsXmlParser(String str) throws IOException {
        short s;
        this.agpsConfig = new AgpsConfig();
        Document xmlDocument = getXmlDocument(str);
        this.doc = xmlDocument;
        String attribute = xmlDocument.getDocumentElement().getAttribute("maj_ver");
        String attribute2 = this.doc.getDocumentElement().getAttribute("min_ver");
        if (!"1".equals(attribute)) {
            throw new IOException("Version Incompatiable, Parser=1.1 XML_file=" + attribute + "." + attribute2);
        }
        if (!"1".equals(attribute2)) {
            log("Version Warning, Parser=1.1 XML_file=" + attribute + "." + attribute2);
        }
        this.versionString = "parser=[1.1] xml=[" + attribute + "." + attribute2 + "]";
        NodeList elementsByTagName = this.doc.getElementsByTagName("supl_profile");
        int i = 0;
        while (true) {
            s = 1;
            if (i >= elementsByTagName.getLength()) {
                break;
            }
            Node nodeItem = elementsByTagName.item(i);
            NodeList nodeList = elementsByTagName;
            if (nodeItem.getNodeType() == 1) {
                Element element = (Element) nodeItem;
                SuplProfile suplProfile = new SuplProfile();
                suplProfile.name = element.getAttribute("name");
                suplProfile.addr = element.getAttribute("addr");
                suplProfile.port = Integer.valueOf(element.getAttribute("port")).intValue();
                suplProfile.tls = Boolean.valueOf(element.getAttribute("tls")).booleanValue();
                suplProfile.mccMnc = element.getAttribute("mcc_mnc");
                suplProfile.appId = element.getAttribute("app_id");
                suplProfile.providerId = element.getAttribute("provider_id");
                suplProfile.defaultApn = element.getAttribute("default_apn");
                suplProfile.optionalApn = element.getAttribute("optional_apn");
                suplProfile.optionalApn2 = element.getAttribute("optional_apn_2");
                suplProfile.addressType = element.getAttribute("address_type");
                suplProfile.correctIfInvalid();
                this.agpsConfig.getSuplProfiles().add(suplProfile);
            }
            i++;
            elementsByTagName = nodeList;
        }
        NodeList elementsByTagName2 = this.doc.getElementsByTagName("cur_supl_profile");
        int i2 = 0;
        while (i2 < elementsByTagName2.getLength()) {
            Node nodeItem2 = elementsByTagName2.item(i2);
            NodeList nodeList2 = elementsByTagName2;
            if (nodeItem2.getNodeType() == s) {
                Element element2 = (Element) nodeItem2;
                SuplProfile curSuplProfile = this.agpsConfig.getCurSuplProfile();
                curSuplProfile.name = element2.getAttribute("name");
                curSuplProfile.addr = element2.getAttribute("addr");
                curSuplProfile.port = Integer.valueOf(element2.getAttribute("port")).intValue();
                curSuplProfile.tls = Boolean.valueOf(element2.getAttribute("tls")).booleanValue();
                curSuplProfile.mccMnc = element2.getAttribute("mcc_mnc");
                curSuplProfile.appId = element2.getAttribute("app_id");
                curSuplProfile.providerId = element2.getAttribute("provider_id");
                curSuplProfile.defaultApn = element2.getAttribute("default_apn");
                curSuplProfile.optionalApn = element2.getAttribute("optional_apn");
                curSuplProfile.optionalApn2 = element2.getAttribute("optional_apn_2");
                curSuplProfile.addressType = element2.getAttribute("address_type");
                curSuplProfile.correctIfInvalid();
            }
            i2++;
            elementsByTagName2 = nodeList2;
            s = 1;
        }
        NodeList elementsByTagName3 = this.doc.getElementsByTagName("cdma_profile");
        for (int i3 = 0; i3 < elementsByTagName3.getLength(); i3++) {
            Node nodeItem3 = elementsByTagName3.item(i3);
            if (nodeItem3.getNodeType() == 1) {
                Element element3 = (Element) nodeItem3;
                CdmaProfile cdmaProfile = this.agpsConfig.getCdmaProfile();
                cdmaProfile.name = element3.getAttribute("name");
                cdmaProfile.mcpEnable = Boolean.valueOf(element3.getAttribute("mcp_enable")).booleanValue();
                cdmaProfile.mcpAddr = element3.getAttribute("mcp_addr");
                cdmaProfile.mcpPort = Integer.valueOf(element3.getAttribute("mcp_port")).intValue();
                cdmaProfile.pdeAddrValid = Boolean.valueOf(element3.getAttribute("pde_addr_valid")).booleanValue();
                cdmaProfile.pdeIpType = Integer.valueOf(element3.getAttribute("pde_ip_type")).intValue();
                cdmaProfile.pdeAddr = element3.getAttribute("pde_addr");
                cdmaProfile.pdePort = Integer.valueOf(element3.getAttribute("pde_port")).intValue();
                cdmaProfile.pdeUrlValid = Boolean.valueOf(element3.getAttribute("pde_url_valid")).booleanValue();
                cdmaProfile.pdeUrlAddr = element3.getAttribute("pde_url_addr");
                cdmaProfile.correctIfInvalid();
            }
        }
        NodeList elementsByTagName4 = this.doc.getElementsByTagName("agps_setting");
        for (int i4 = 0; i4 < elementsByTagName4.getLength(); i4++) {
            Node nodeItem4 = elementsByTagName4.item(i4);
            if (nodeItem4.getNodeType() == 1) {
                Element element4 = (Element) nodeItem4;
                AgpsSetting agpsSetting = this.agpsConfig.getAgpsSetting();
                agpsSetting.agpsEnable = Boolean.valueOf(element4.getAttribute("agps_enable")).booleanValue();
                agpsSetting.agpsProtocol = Integer.valueOf(element4.getAttribute("agps_protocol")).intValue();
                agpsSetting.gpevt = Boolean.valueOf(element4.getAttribute("gpevt")).booleanValue();
                agpsSetting.correctIfInvalid();
            }
        }
        NodeList elementsByTagName5 = this.doc.getElementsByTagName("cp_setting");
        for (int i5 = 0; i5 < elementsByTagName5.getLength(); i5++) {
            Node nodeItem5 = elementsByTagName5.item(i5);
            if (nodeItem5.getNodeType() == 1) {
                Element element5 = (Element) nodeItem5;
                CpSetting cpSetting = this.agpsConfig.getCpSetting();
                cpSetting.molrPosMethod = Integer.valueOf(element5.getAttribute("molr_pos_method")).intValue();
                cpSetting.externalAddrEnable = Boolean.valueOf(element5.getAttribute("external_addr_enable")).booleanValue();
                cpSetting.externalAddr = element5.getAttribute("external_addr");
                cpSetting.mlcNumberEnable = Boolean.valueOf(element5.getAttribute("mlc_number_enable")).booleanValue();
                cpSetting.mlcNumber = element5.getAttribute("mlc_number");
                cpSetting.cpAutoReset = Boolean.valueOf(element5.getAttribute("cp_auto_reset")).booleanValue();
                cpSetting.epcMolrLppPayloadEnable = Boolean.valueOf(element5.getAttribute("epc_molr_lpp_payload_enable")).booleanValue();
                cpSetting.epcMolrLppPayload = hexStringToByteArray(element5.getAttribute("epc_molr_lpp_payload"));
                cpSetting.correctIfInvalid();
            }
        }
        NodeList elementsByTagName6 = this.doc.getElementsByTagName("up_setting");
        for (int i6 = 0; i6 < elementsByTagName6.getLength(); i6++) {
            Node nodeItem6 = elementsByTagName6.item(i6);
            if (nodeItem6.getNodeType() == 1) {
                Element element6 = (Element) nodeItem6;
                UpSetting upSetting = this.agpsConfig.getUpSetting();
                upSetting.caEnable = Boolean.valueOf(element6.getAttribute("ca_enable")).booleanValue();
                upSetting.niRequest = Boolean.valueOf(element6.getAttribute("ni_request")).booleanValue();
                upSetting.roaming = Boolean.valueOf(element6.getAttribute("roaming")).booleanValue();
                upSetting.cdmaPreferred = Integer.valueOf(element6.getAttribute("cdma_preferred")).intValue();
                upSetting.prefMethod = Integer.valueOf(element6.getAttribute("pref_method")).intValue();
                upSetting.suplVersion = Integer.valueOf(element6.getAttribute("supl_version")).intValue();
                upSetting.suplLog = Boolean.valueOf(element6.getAttribute("supl_log")).booleanValue();
                upSetting.msaEnable = Boolean.valueOf(element6.getAttribute("msa_enable")).booleanValue();
                upSetting.msbEnable = Boolean.valueOf(element6.getAttribute("msb_enable")).booleanValue();
                upSetting.ecidEnable = Boolean.valueOf(element6.getAttribute("ecid_enable")).booleanValue();
                upSetting.otdoaEnable = Boolean.valueOf(element6.getAttribute("otdoa_enable")).booleanValue();
                upSetting.qopHacc = Integer.valueOf(element6.getAttribute("qop_hacc")).intValue();
                upSetting.qopVacc = Integer.valueOf(element6.getAttribute("qop_vacc")).intValue();
                upSetting.qopLocAge = Integer.valueOf(element6.getAttribute("qop_loc_age")).intValue();
                upSetting.qopDelay = Integer.valueOf(element6.getAttribute("qop_delay")).intValue();
                upSetting.lppEnable = Boolean.valueOf(element6.getAttribute("lpp_enable")).booleanValue();
                upSetting.correctIfInvalid();
            }
        }
    }

    protected static Document getXmlDocument(String str) throws IOException {
        try {
            return DocumentBuilderFactory.newInstance().newDocumentBuilder().parse(new File(str));
        } catch (ParserConfigurationException e) {
            throw new IOException(e);
        } catch (SAXException e2) {
            throw new IOException(e2);
        }
    }

    protected static byte[] hexStringToByteArray(String str) {
        int length = str.length();
        byte[] bArr = new byte[length / 2];
        for (int i = 0; i < length; i += 2) {
            bArr[i / 2] = (byte) ((Character.digit(str.charAt(i), 16) << 4) + Character.digit(str.charAt(i + 1), 16));
        }
        return bArr;
    }

    protected static void log(Object obj) {
        Log.d("LocationEM [agps]:", obj.toString());
    }

    public AgpsConfig getAgpsConfig() {
        return this.agpsConfig;
    }

    public String toString() {
        return ("" + this.versionString + "\n") + this.agpsConfig + "\n";
    }
}
