package com.android.hotwordenrollment.common;

import android.annotation.SystemApi;
import android.content.Context;
import android.content.res.Resources;
import android.content.res.XmlResourceParser;
import android.hardware.soundtrigger.SoundTrigger;
import android.os.RemoteException;
import android.os.ServiceManager;
import android.os.UserManager;
import android.util.ArrayMap;
import android.util.ArraySet;
import android.util.Log;
import com.android.internal.app.IVoiceInteractionManagerService;
import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.Locale;
import java.util.Set;
import java.util.UUID;
import org.xmlpull.v1.XmlPullParserException;

/* JADX INFO: loaded from: classes.dex */
@SystemApi
public class EnrollmentUtil {
    public static final String ACTION_MANAGE_VOICE_KEYPHRASES = "com.android.intent.action.MANAGE_VOICE_KEYPHRASES";
    private static final boolean DBG = false;
    public static final String EXTRA_VOICE_KEYPHRASE_ACTION = "com.android.intent.extra.VOICE_KEYPHRASE_ACTION";
    public static final String EXTRA_VOICE_KEYPHRASE_HINT_TEXT = "com.android.intent.extra.VOICE_KEYPHRASE_HINT_TEXT";
    public static final String EXTRA_VOICE_KEYPHRASE_LOCALE = "com.android.intent.extra.VOICE_KEYPHRASE_LOCALE";
    private static final String TAG = "EnrollmentUtil";
    private static final String XML_NAMESPACE = "http://schemas.android.com/apk/res/android";
    private final Context mContext;
    private int mCurrentVersion;
    private int mKeyphraseId;
    private ArrayMap<String, String> mLocaleRemap;
    private final IVoiceInteractionManagerService mModelManagementService = IVoiceInteractionManagerService.Stub.asInterface(ServiceManager.getService("voiceinteraction"));
    private boolean mParsedConfig;
    private boolean mParsedMetadata;
    private int mRecognitionMode;
    private ArraySet<String> mSupportedLocales;
    private UserManager mUserManager;
    private UUID mVendorUUID;

    public EnrollmentUtil(Context context) {
        this.mContext = context;
    }

    private synchronized void ensureConfigXmlParsed() {
        if (this.mParsedConfig) {
            return;
        }
        this.mLocaleRemap = new ArrayMap<>();
        Resources resources = this.mContext.getResources();
        try {
            XmlResourceParser xml = resources.getXml(resources.getIdentifier("config", "xml", this.mContext.getPackageName()));
            while (xml.getEventType() != 1) {
                try {
                    try {
                        String name = xml.getName();
                        if ("vendor-uuid".equals(name) && 2 == xml.getEventType()) {
                            this.mVendorUUID = UUID.fromString(xml.nextText());
                        } else if ("locale-map-entry".equals(name)) {
                            this.mLocaleRemap.put(xml.getAttributeValue(null, "locale"), xml.getAttributeValue(null, "modelFileName"));
                        }
                        xml.next();
                    } catch (Throwable th) {
                        th = th;
                        if (xml != null) {
                            try {
                                xml.close();
                            } catch (Throwable th2) {
                                th.addSuppressed(th2);
                            }
                        }
                        throw th;
                    }
                } catch (Throwable th3) {
                    th = th3;
                }
            }
            if (xml != null) {
                xml.close();
            }
            this.mParsedConfig = true;
        } catch (IOException | XmlPullParserException e) {
            throw new RuntimeException("Failed to parse voice model config XML", e);
        }
    }

    private synchronized void ensureMetadataXmlIsParsed() {
        if (this.mParsedMetadata) {
            return;
        }
        Resources resources = this.mContext.getResources();
        try {
            XmlResourceParser xml = resources.getXml(resources.getIdentifier("enrollment_application", "xml", this.mContext.getPackageName()));
            try {
                for (int eventType = xml.getEventType(); eventType != 1; eventType = xml.nextToken()) {
                    if (eventType == 2) {
                        try {
                            if (xml.getName().equals("voice-enrollment-application")) {
                                ArraySet<String> arraySet = new ArraySet<>();
                                this.mSupportedLocales = arraySet;
                                Collections.addAll(arraySet, xml.getAttributeValue(XML_NAMESPACE, "searchKeyphraseSupportedLocales").split(","));
                                this.mKeyphraseId = xml.getAttributeIntValue(XML_NAMESPACE, "searchKeyphraseId", -1);
                                this.mRecognitionMode = xml.getAttributeIntValue(XML_NAMESPACE, "searchKeyphraseRecognitionFlags", -1);
                            }
                        } catch (Throwable th) {
                            th = th;
                            if (xml != null) {
                                try {
                                    xml.close();
                                } catch (Throwable th2) {
                                    th.addSuppressed(th2);
                                }
                            }
                            throw th;
                        }
                    }
                }
                if (xml != null) {
                    xml.close();
                }
                if (this.mSupportedLocales == null) {
                    throw new RuntimeException("Failed to find correct attributes in enrollment xml.");
                }
                this.mParsedMetadata = true;
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (Exception e) {
            throw new RuntimeException("Failed parsing enrollment application XML", e);
        }
    }

    private String getResourceNameForLocale(String str) {
        ensureConfigXmlParsed();
        if (this.mLocaleRemap.containsKey(str)) {
            str = this.mLocaleRemap.get(str);
        }
        return str.replace('-', '_').toLowerCase();
    }

    private boolean handleEnrollAction(String str, String str2) {
        byte[] hotwordResource = readHotwordResource(str2);
        if (hotwordResource == null) {
            return DBG;
        }
        return addOrUpdateSoundModel(new SoundTrigger.KeyphraseSoundModel(UUID.randomUUID(), getVendorUUID(), hotwordResource, new SoundTrigger.Keyphrase[]{new SoundTrigger.Keyphrase(getKeyphraseId(), getRecognitionMode(), Locale.forLanguageTag(str2), str, new int[]{this.mUserManager.getUserHandle()})}, getCurrentVersion()));
    }

    private boolean handleReEnrollAction(String str, String str2) {
        byte[] hotwordResource = readHotwordResource(str2);
        if (hotwordResource == null) {
            return DBG;
        }
        SoundTrigger.KeyphraseSoundModel soundModel = getSoundModel(str2);
        if (soundModel == null || soundModel.getUuid() == null) {
            Log.w(TAG, "No models present for re-enrollment");
            return DBG;
        }
        return addOrUpdateSoundModel(new SoundTrigger.KeyphraseSoundModel(soundModel.getUuid(), getVendorUUID(), hotwordResource, new SoundTrigger.Keyphrase[]{new SoundTrigger.Keyphrase(getKeyphraseId(), getRecognitionMode(), Locale.forLanguageTag(str2), str, new int[]{this.mUserManager.getUserHandle()})}, getCurrentVersion()));
    }

    private boolean handleUnEnrollAction(String str) {
        return deleteSoundModel(str);
    }

    private boolean verifyKeyphraseSoundModel(SoundTrigger.KeyphraseSoundModel keyphraseSoundModel) {
        if (keyphraseSoundModel == null) {
            Log.e(TAG, "KeyphraseSoundModel must be non-null");
            return DBG;
        }
        if (keyphraseSoundModel.getUuid() == null) {
            Log.e(TAG, "KeyphraseSoundModel must have a UUID");
            return DBG;
        }
        if (keyphraseSoundModel.getData() == null) {
            Log.e(TAG, "KeyphraseSoundModel must have data");
            return DBG;
        }
        if (keyphraseSoundModel.getKeyphrases() == null || keyphraseSoundModel.getKeyphrases().length != 1) {
            Log.e(TAG, "Keyphrase must be exactly 1");
            return DBG;
        }
        SoundTrigger.Keyphrase keyphrase = keyphraseSoundModel.getKeyphrases()[0];
        if (keyphrase.getId() <= 0) {
            Log.e(TAG, "Keyphrase must have a valid ID");
            return DBG;
        }
        if (keyphrase.getRecognitionModes() < 0) {
            Log.e(TAG, "Recognition modes must be valid");
            return DBG;
        }
        if (keyphrase.getLocale() == null) {
            Log.e(TAG, "Locale must not be null");
            return DBG;
        }
        if (keyphrase.getText() == null) {
            Log.e(TAG, "Text must not be null");
            return DBG;
        }
        if (keyphrase.getUsers() != null && keyphrase.getUsers().length != 0) {
            return true;
        }
        Log.e(TAG, "Keyphrase must have valid user(s)");
        return DBG;
    }

    public boolean addOrUpdateSoundModel(SoundTrigger.KeyphraseSoundModel keyphraseSoundModel) {
        if (!verifyKeyphraseSoundModel(keyphraseSoundModel)) {
            return DBG;
        }
        int iUpdateKeyphraseSoundModel = Integer.MIN_VALUE;
        try {
            iUpdateKeyphraseSoundModel = this.mModelManagementService.updateKeyphraseSoundModel(keyphraseSoundModel);
        } catch (RemoteException e) {
            Log.e(TAG, "RemoteException in updateKeyphraseSoundModel", e);
        }
        if (iUpdateKeyphraseSoundModel == 0) {
            return true;
        }
        return DBG;
    }

    public boolean deleteSoundModel(String str) {
        int iDeleteKeyphraseSoundModel = Integer.MIN_VALUE;
        try {
            iDeleteKeyphraseSoundModel = this.mModelManagementService.deleteKeyphraseSoundModel(getKeyphraseId(), str);
        } catch (RemoteException e) {
            Log.e(TAG, "RemoteException in updateKeyphraseSoundModel");
        }
        if (iDeleteKeyphraseSoundModel == 0) {
            return true;
        }
        return DBG;
    }

    public synchronized int getCurrentVersion() {
        if (this.mCurrentVersion == 0) {
            InputStream inputStreamOpenRawResource = null;
            try {
                try {
                    Resources resources = this.mContext.getResources();
                    inputStreamOpenRawResource = resources.openRawResource(resources.getIdentifier("version", "raw", this.mContext.getPackageName()));
                    this.mCurrentVersion = Integer.parseInt(new BufferedReader(new InputStreamReader(inputStreamOpenRawResource)).readLine());
                    if (inputStreamOpenRawResource != null) {
                    }
                } catch (IOException e) {
                }
            } catch (NumberFormatException e2) {
                Log.e(TAG, "Error reading current version");
                if (inputStreamOpenRawResource != null) {
                }
                return this.mCurrentVersion;
            } catch (Resources.NotFoundException e3) {
                Log.e(TAG, "NotFoundException while trying to read version", e3);
                if (inputStreamOpenRawResource != null) {
                }
                return this.mCurrentVersion;
            } catch (IOException e4) {
                Log.e(TAG, "IOException while reading current version", e4);
                if (inputStreamOpenRawResource != null) {
                }
                return this.mCurrentVersion;
            } finally {
                if (inputStreamOpenRawResource != null) {
                    try {
                        inputStreamOpenRawResource.close();
                    } catch (IOException e5) {
                    }
                }
            }
        }
        return this.mCurrentVersion;
    }

    public int getKeyphraseId() {
        ensureMetadataXmlIsParsed();
        return this.mKeyphraseId;
    }

    public int getRecognitionMode() {
        ensureMetadataXmlIsParsed();
        return this.mRecognitionMode;
    }

    public SoundTrigger.KeyphraseSoundModel getSoundModel(String str) {
        SoundTrigger.KeyphraseSoundModel keyphraseSoundModel = null;
        try {
            keyphraseSoundModel = this.mModelManagementService.getKeyphraseSoundModel(getKeyphraseId(), str);
        } catch (RemoteException e) {
            Log.e(TAG, "RemoteException in updateKeyphraseSoundModel");
        }
        if (keyphraseSoundModel != null) {
            return keyphraseSoundModel;
        }
        Log.w(TAG, "No models present for the given keyphrase ID");
        return null;
    }

    public Set<String> getSupportedLocales() {
        ensureMetadataXmlIsParsed();
        return this.mSupportedLocales;
    }

    public UUID getVendorUUID() {
        ensureConfigXmlParsed();
        return this.mVendorUUID;
    }

    /* JADX WARN: Code duplicated, block: B:44:0x0074  */
    public byte[] readHotwordResource(String str) {
        InputStream inputStreamOpenRawResource = null;
        ByteArrayOutputStream byteArrayOutputStream = null;
        byte[] byteArray = null;
        try {
            try {
                try {
                    Resources resources = this.mContext.getResources();
                    inputStreamOpenRawResource = resources.openRawResource(resources.getIdentifier(getResourceNameForLocale(str), "raw", this.mContext.getPackageName()));
                    byteArrayOutputStream = new ByteArrayOutputStream();
                    while (true) {
                        int i = inputStreamOpenRawResource.read();
                        if (i == -1) {
                            break;
                        }
                        byteArrayOutputStream.write(i);
                    }
                    byteArray = byteArrayOutputStream.toByteArray();
                    if (inputStreamOpenRawResource != null) {
                        try {
                            inputStreamOpenRawResource.close();
                        } catch (IOException e) {
                        }
                    }
                    byteArrayOutputStream.close();
                } catch (Throwable th) {
                    if (inputStreamOpenRawResource != null) {
                        try {
                            inputStreamOpenRawResource.close();
                        } catch (IOException e2) {
                        }
                    }
                    if (byteArrayOutputStream == null) {
                        throw th;
                    }
                    try {
                        byteArrayOutputStream.close();
                        throw th;
                    } catch (IOException e3) {
                        throw th;
                    }
                }
            } catch (Resources.NotFoundException e4) {
                Log.e(TAG, "NotFoundException while trying to read hotword data", e4);
                if (inputStreamOpenRawResource != null) {
                    try {
                        inputStreamOpenRawResource.close();
                    } catch (IOException e5) {
                    }
                }
                if (byteArrayOutputStream != null) {
                    byteArrayOutputStream.close();
                }
                if (byteArray == null) {
                    Log.e(TAG, "Failed to load the hotword data from resources");
                }
                return byteArray;
            } catch (IOException e6) {
                Log.e(TAG, "IOException while reading hotword data", e6);
                if (inputStreamOpenRawResource != null) {
                    try {
                        inputStreamOpenRawResource.close();
                    } catch (IOException e7) {
                    }
                }
                if (byteArrayOutputStream != null) {
                    byteArrayOutputStream.close();
                }
                if (byteArray == null) {
                    Log.e(TAG, "Failed to load the hotword data from resources");
                }
                return byteArray;
            }
        } catch (IOException e8) {
        }
        if (byteArray == null) {
            Log.e(TAG, "Failed to load the hotword data from resources");
        }
        return byteArray;
    }

    public boolean startAction(int i, String str, String str2) {
        this.mUserManager = (UserManager) this.mContext.getSystemService("user");
        if (i == 0) {
            return handleEnrollAction(str, str2);
        }
        if (i == 1) {
            return handleReEnrollAction(str, str2);
        }
        if (i == 2) {
            return handleUnEnrollAction(str2);
        }
        Log.e(TAG, "Enrollment started with an unknown action " + i);
        return DBG;
    }
}
