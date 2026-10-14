package com.google.i18n.phonenumbers.prefixmapper;

import com.google.i18n.phonenumbers.Phonenumber;
import java.io.IOException;
import java.io.InputStream;
import java.io.ObjectInputStream;
import java.util.HashMap;
import java.util.Map;
import java.util.logging.Level;
import java.util.logging.Logger;

/* JADX INFO: loaded from: classes.dex */
public class PrefixFileReader {
    private static final Logger logger = Logger.getLogger(PrefixFileReader.class.getName());
    private final String phonePrefixDataDirectory;
    private MappingFileProvider mappingFileProvider = new MappingFileProvider();
    private Map<String, PhonePrefixMap> availablePhonePrefixMaps = new HashMap();

    public PrefixFileReader(String str) {
        this.phonePrefixDataDirectory = str;
        loadMappingFileProvider();
    }

    private static void close(InputStream inputStream) {
        if (inputStream != null) {
            try {
                inputStream.close();
            } catch (IOException e) {
                logger.log(Level.WARNING, e.toString());
            }
        }
    }

    private PhonePrefixMap getPhonePrefixDescriptions(int i, String str, String str2, String str3) {
        String fileName = this.mappingFileProvider.getFileName(i, str, str2, str3);
        if (fileName.length() == 0) {
            return null;
        }
        if (!this.availablePhonePrefixMaps.containsKey(fileName)) {
            loadPhonePrefixMapFromFile(fileName);
        }
        return this.availablePhonePrefixMaps.get(fileName);
    }

    private void loadMappingFileProvider() {
        ObjectInputStream objectInputStream = null;
        try {
            try {
                objectInputStream = new ObjectInputStream(PrefixFileReader.class.getResourceAsStream(this.phonePrefixDataDirectory + "config"));
                this.mappingFileProvider.readExternal(objectInputStream);
            } catch (IOException e) {
                logger.log(Level.WARNING, e.toString());
            }
        } finally {
            close(objectInputStream);
        }
    }

    private void loadPhonePrefixMapFromFile(String str) {
        ObjectInputStream objectInputStream = null;
        try {
            try {
                objectInputStream = new ObjectInputStream(PrefixFileReader.class.getResourceAsStream(this.phonePrefixDataDirectory + str));
                PhonePrefixMap phonePrefixMap = new PhonePrefixMap();
                phonePrefixMap.readExternal(objectInputStream);
                this.availablePhonePrefixMaps.put(str, phonePrefixMap);
            } catch (IOException e) {
                logger.log(Level.WARNING, e.toString());
            }
        } finally {
            close(objectInputStream);
        }
    }

    private boolean mayFallBackToEnglish(String str) {
        return (str.equals("zh") || str.equals("ja") || str.equals("ko")) ? false : true;
    }

    public String getDescriptionForNumber(Phonenumber.PhoneNumber phoneNumber, String str, String str2, String str3) {
        int countryCode = phoneNumber.getCountryCode();
        int nationalNumber = countryCode != 1 ? countryCode : ((int) (phoneNumber.getNationalNumber() / 10000000)) + 1000;
        PhonePrefixMap phonePrefixDescriptions = getPhonePrefixDescriptions(nationalNumber, str, str2, str3);
        String strLookup = phonePrefixDescriptions != null ? phonePrefixDescriptions.lookup(phoneNumber) : null;
        if ((strLookup == null || strLookup.length() == 0) && mayFallBackToEnglish(str)) {
            PhonePrefixMap phonePrefixDescriptions2 = getPhonePrefixDescriptions(nationalNumber, "en", "", "");
            if (phonePrefixDescriptions2 == null) {
                return "";
            }
            strLookup = phonePrefixDescriptions2.lookup(phoneNumber);
        }
        return strLookup != null ? strLookup : "";
    }
}
