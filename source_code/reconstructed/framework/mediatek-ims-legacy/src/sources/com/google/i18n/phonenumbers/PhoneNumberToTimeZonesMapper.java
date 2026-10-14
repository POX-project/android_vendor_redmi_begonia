package com.google.i18n.phonenumbers;

import com.google.i18n.phonenumbers.prefixmapper.PrefixTimeZonesMap;
import java.io.IOException;
import java.io.InputStream;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

/* JADX INFO: loaded from: classes.dex */
public class PhoneNumberToTimeZonesMapper {
    private static final String MAPPING_DATA_DIRECTORY = "/com/google/i18n/phonenumbers/timezones/data/";
    private static final String MAPPING_DATA_FILE_NAME = "map_data";
    private static final String UNKNOWN_TIMEZONE = "Etc/Unknown";
    static final List<String> UNKNOWN_TIME_ZONE_LIST;
    private static final Logger logger;
    private PrefixTimeZonesMap prefixTimeZonesMap;

    private static class LazyHolder {
        private static final PhoneNumberToTimeZonesMapper INSTANCE = new PhoneNumberToTimeZonesMapper(PhoneNumberToTimeZonesMapper.loadPrefixTimeZonesMapFromFile("/com/google/i18n/phonenumbers/timezones/data/map_data"));

        private LazyHolder() {
        }
    }

    static {
        ArrayList arrayList = new ArrayList(1);
        UNKNOWN_TIME_ZONE_LIST = arrayList;
        arrayList.add(UNKNOWN_TIMEZONE);
        logger = Logger.getLogger(PhoneNumberToTimeZonesMapper.class.getName());
    }

    private PhoneNumberToTimeZonesMapper(PrefixTimeZonesMap prefixTimeZonesMap) {
        this.prefixTimeZonesMap = null;
        this.prefixTimeZonesMap = prefixTimeZonesMap;
    }

    PhoneNumberToTimeZonesMapper(String str) {
        this.prefixTimeZonesMap = null;
        this.prefixTimeZonesMap = loadPrefixTimeZonesMapFromFile(str + MAPPING_DATA_FILE_NAME);
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

    private List<String> getCountryLevelTimeZonesforNumber(Phonenumber.PhoneNumber phoneNumber) {
        List<String> listLookupCountryLevelTimeZonesForNumber = this.prefixTimeZonesMap.lookupCountryLevelTimeZonesForNumber(phoneNumber);
        return Collections.unmodifiableList(listLookupCountryLevelTimeZonesForNumber.isEmpty() ? UNKNOWN_TIME_ZONE_LIST : listLookupCountryLevelTimeZonesForNumber);
    }

    public static synchronized PhoneNumberToTimeZonesMapper getInstance() {
        return LazyHolder.INSTANCE;
    }

    private List<String> getTimeZonesForGeocodableNumber(Phonenumber.PhoneNumber phoneNumber) {
        List<String> listLookupTimeZonesForNumber = this.prefixTimeZonesMap.lookupTimeZonesForNumber(phoneNumber);
        return Collections.unmodifiableList(listLookupTimeZonesForNumber.isEmpty() ? UNKNOWN_TIME_ZONE_LIST : listLookupTimeZonesForNumber);
    }

    public static String getUnknownTimeZone() {
        return UNKNOWN_TIMEZONE;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static PrefixTimeZonesMap loadPrefixTimeZonesMapFromFile(String str) {
        InputStream resourceAsStream = PhoneNumberToTimeZonesMapper.class.getResourceAsStream(str);
        ObjectInputStream objectInputStream = null;
        PrefixTimeZonesMap prefixTimeZonesMap = new PrefixTimeZonesMap();
        try {
            try {
                objectInputStream = new ObjectInputStream(resourceAsStream);
                prefixTimeZonesMap.readExternal(objectInputStream);
            } catch (IOException e) {
                logger.log(Level.WARNING, e.toString());
            }
            return prefixTimeZonesMap;
        } finally {
            close(objectInputStream);
        }
    }

    public List<String> getTimeZonesForGeographicalNumber(Phonenumber.PhoneNumber phoneNumber) {
        return getTimeZonesForGeocodableNumber(phoneNumber);
    }

    public List<String> getTimeZonesForNumber(Phonenumber.PhoneNumber phoneNumber) {
        PhoneNumberUtil.PhoneNumberType numberType = PhoneNumberUtil.getInstance().getNumberType(phoneNumber);
        if (numberType == PhoneNumberUtil.PhoneNumberType.UNKNOWN) {
            return UNKNOWN_TIME_ZONE_LIST;
        }
        return !PhoneNumberUtil.getInstance().isNumberGeographical(numberType, phoneNumber.getCountryCode()) ? getCountryLevelTimeZonesforNumber(phoneNumber) : getTimeZonesForGeographicalNumber(phoneNumber);
    }
}
