package com.google.i18n.phonenumbers.prefixmapper;

import com.google.i18n.phonenumbers.PhoneNumberUtil;
import com.google.i18n.phonenumbers.Phonenumber;
import java.io.ByteArrayOutputStream;
import java.io.Externalizable;
import java.io.IOException;
import java.io.ObjectInput;
import java.io.ObjectOutput;
import java.io.ObjectOutputStream;
import java.util.SortedMap;
import java.util.SortedSet;
import java.util.logging.Logger;

/* JADX INFO: loaded from: classes.dex */
public class PhonePrefixMap implements Externalizable {
    private static final Logger logger = Logger.getLogger(PhonePrefixMap.class.getName());
    private PhonePrefixMapStorageStrategy phonePrefixMapStorage;
    private final PhoneNumberUtil phoneUtil = PhoneNumberUtil.getInstance();

    private int binarySearch(int i, int i2, long j) {
        int i3 = 0;
        while (i <= i2) {
            i3 = (i + i2) >>> 1;
            int prefix = this.phonePrefixMapStorage.getPrefix(i3);
            if (prefix == j) {
                return i3;
            }
            if (prefix > j) {
                i3--;
                i2 = i3;
            } else {
                i = i3 + 1;
            }
        }
        return i3;
    }

    private PhonePrefixMapStorageStrategy createDefaultMapStorage() {
        return new DefaultMapStorage();
    }

    private PhonePrefixMapStorageStrategy createFlyweightMapStorage() {
        return new FlyweightMapStorage();
    }

    private static int getSizeOfPhonePrefixMapStorage(PhonePrefixMapStorageStrategy phonePrefixMapStorageStrategy, SortedMap<Integer, String> sortedMap) throws IOException {
        phonePrefixMapStorageStrategy.readFromSortedMap(sortedMap);
        ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream();
        ObjectOutputStream objectOutputStream = new ObjectOutputStream(byteArrayOutputStream);
        phonePrefixMapStorageStrategy.writeExternal(objectOutputStream);
        objectOutputStream.flush();
        int size = byteArrayOutputStream.size();
        objectOutputStream.close();
        return size;
    }

    PhonePrefixMapStorageStrategy getPhonePrefixMapStorage() {
        return this.phonePrefixMapStorage;
    }

    PhonePrefixMapStorageStrategy getSmallerMapStorage(SortedMap<Integer, String> sortedMap) {
        try {
            PhonePrefixMapStorageStrategy phonePrefixMapStorageStrategyCreateFlyweightMapStorage = createFlyweightMapStorage();
            int sizeOfPhonePrefixMapStorage = getSizeOfPhonePrefixMapStorage(phonePrefixMapStorageStrategyCreateFlyweightMapStorage, sortedMap);
            PhonePrefixMapStorageStrategy phonePrefixMapStorageStrategyCreateDefaultMapStorage = createDefaultMapStorage();
            return sizeOfPhonePrefixMapStorage < getSizeOfPhonePrefixMapStorage(phonePrefixMapStorageStrategyCreateDefaultMapStorage, sortedMap) ? phonePrefixMapStorageStrategyCreateFlyweightMapStorage : phonePrefixMapStorageStrategyCreateDefaultMapStorage;
        } catch (IOException e) {
            logger.severe(e.getMessage());
            return createFlyweightMapStorage();
        }
    }

    String lookup(long j) {
        int numOfEntries = this.phonePrefixMapStorage.getNumOfEntries();
        if (numOfEntries == 0) {
            return null;
        }
        long j2 = j;
        int iBinarySearch = numOfEntries - 1;
        SortedSet possibleLengths = this.phonePrefixMapStorage.getPossibleLengths();
        while (possibleLengths.size() > 0) {
            Integer num = (Integer) possibleLengths.last();
            String strValueOf = String.valueOf(j2);
            if (strValueOf.length() > num.intValue()) {
                j2 = Long.parseLong(strValueOf.substring(0, num.intValue()));
            }
            iBinarySearch = binarySearch(0, iBinarySearch, j2);
            if (iBinarySearch < 0) {
                return null;
            }
            if (j2 == this.phonePrefixMapStorage.getPrefix(iBinarySearch)) {
                return this.phonePrefixMapStorage.getDescription(iBinarySearch);
            }
            possibleLengths = possibleLengths.headSet(num);
        }
        return null;
    }

    public String lookup(Phonenumber.PhoneNumber phoneNumber) {
        return lookup(Long.parseLong(phoneNumber.getCountryCode() + this.phoneUtil.getNationalSignificantNumber(phoneNumber)));
    }

    @Override // java.io.Externalizable
    public void readExternal(ObjectInput objectInput) throws IOException {
        if (objectInput.readBoolean()) {
            this.phonePrefixMapStorage = new FlyweightMapStorage();
        } else {
            this.phonePrefixMapStorage = new DefaultMapStorage();
        }
        this.phonePrefixMapStorage.readExternal(objectInput);
    }

    public void readPhonePrefixMap(SortedMap<Integer, String> sortedMap) {
        this.phonePrefixMapStorage = getSmallerMapStorage(sortedMap);
    }

    public String toString() {
        return this.phonePrefixMapStorage.toString();
    }

    @Override // java.io.Externalizable
    public void writeExternal(ObjectOutput objectOutput) throws IOException {
        objectOutput.writeBoolean(this.phonePrefixMapStorage instanceof FlyweightMapStorage);
        this.phonePrefixMapStorage.writeExternal(objectOutput);
    }
}
