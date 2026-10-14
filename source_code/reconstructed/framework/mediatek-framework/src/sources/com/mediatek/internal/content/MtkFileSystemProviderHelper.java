package com.mediatek.internal.content;

import android.content.Context;
import android.database.Cursor;
import android.database.MatrixCursor;
import android.drm.DrmManagerClient;
import android.media.MediaFile;
import android.net.Uri;
import android.os.SystemProperties;
import android.provider.MediaStore;
import android.util.Log;
import android.webkit.MimeTypeMap;
import com.mediatek.media.MtkMediaStore;
import java.io.File;

/* JADX INFO: loaded from: classes.dex */
public class MtkFileSystemProviderHelper {
    private static final boolean DEBUG = false;
    private static final boolean LOG_INOTIFY = false;
    private static final String MIMETYPE_JPEG = "image/jpeg";
    private static final String MIMETYPE_JPG = "image/jpg";
    private static final String MIMETYPE_OCTET_STREAM = "application/octet-stream";
    private static final String TAG = "FileSystemProvider";
    private Context mContext;
    private String[] mDefaultProjection;
    private static final Uri BASE_URI = new Uri.Builder().scheme("content").authority("com.android.externalstorage.documents").build();
    private static final String[] DEFAULT_DOCUMENT_PROJECTION = {"document_id", "mime_type", "_display_name", "last_modified", "flags", "_size", "_data", "is_drm", MtkMediaStore.MediaColumns.DRM_METHOD};

    public MtkFileSystemProviderHelper(Context context) {
        this.mContext = null;
        this.mContext = context;
    }

    private String getTypeForDrmFile(File file) {
        DrmManagerClient drmManagerClient = new DrmManagerClient(this.mContext);
        String string = file.toString();
        return drmManagerClient.canHandle(string, (String) null) ? drmManagerClient.getOriginalMimeType(string) : MIMETYPE_OCTET_STREAM;
    }

    public static boolean isMtkDrmApp() {
        return SystemProperties.getBoolean("ro.vendor.mtk_oma_drm_support", false);
    }

    public String[] getDefaultProjection() {
        return DEFAULT_DOCUMENT_PROJECTION;
    }

    public String getTypeForNameMtk(File file, String str) {
        int iLastIndexOf = str.lastIndexOf(46);
        if (iLastIndexOf >= 0) {
            String lowerCase = str.substring(iLastIndexOf + 1).toLowerCase();
            if (lowerCase.equalsIgnoreCase("dcf")) {
                return getTypeForDrmFile(file);
            }
            String mimeTypeFromExtension = MimeTypeMap.getSingleton().getMimeTypeFromExtension(lowerCase);
            if (mimeTypeFromExtension != null) {
                return mimeTypeFromExtension;
            }
        }
        String mimeTypeForFile = MediaFile.getMimeTypeForFile(str);
        return mimeTypeForFile != null ? mimeTypeForFile : MIMETYPE_OCTET_STREAM;
    }

    /* JADX WARN: Code duplicated, block: B:41:0x00be  */
    public void supportDRM(File file, MatrixCursor.RowBuilder rowBuilder, String str, String str2, File file2) throws Throwable {
        File file3;
        String string;
        String name = file.getName();
        if (!isMtkDrmApp() || file.isDirectory()) {
            file3 = file;
            string = str2;
        } else {
            int iLastIndexOf = name.lastIndexOf(46);
            String lowerCase = iLastIndexOf >= 0 ? name.substring(iLastIndexOf + 1).toLowerCase() : null;
            if (lowerCase == null || !lowerCase.equalsIgnoreCase("dcf")) {
                file3 = file;
                string = str2;
            } else {
                Uri contentUri = MediaStore.Files.getContentUri("external");
                String[] strArr = {"is_drm", MtkMediaStore.MediaColumns.DRM_METHOD, "mime_type"};
                Cursor cursorQuery = null;
                file3 = file2;
                try {
                    if (file3 != null) {
                        cursorQuery = this.mContext.getContentResolver().query(contentUri, strArr, "_data = ?", new String[]{file3.getAbsolutePath()}, null);
                        if (cursorQuery == null || !cursorQuery.moveToFirst()) {
                            string = str2;
                        } else {
                            int i = cursorQuery.getInt(cursorQuery.getColumnIndex("is_drm"));
                            int i2 = cursorQuery.getInt(cursorQuery.getColumnIndex(MtkMediaStore.MediaColumns.DRM_METHOD));
                            string = cursorQuery.getString(cursorQuery.getColumnIndex("mime_type"));
                            try {
                                rowBuilder.add("is_drm", Integer.valueOf(i));
                                rowBuilder.add(MtkMediaStore.MediaColumns.DRM_METHOD, Integer.valueOf(i2));
                            } catch (IllegalStateException e) {
                                if (cursorQuery != null) {
                                }
                                rowBuilder.add("mime_type", string);
                                rowBuilder.add("_data", file3.getAbsolutePath());
                            } catch (Throwable th) {
                                th = th;
                                if (cursorQuery != null) {
                                    cursorQuery.close();
                                }
                                throw th;
                            }
                        }
                    } else {
                        Log.d(TAG, "VisibleFile is null");
                        string = str2;
                    }
                    if (cursorQuery != null) {
                        cursorQuery.close();
                    }
                } catch (IllegalStateException e2) {
                    string = str2;
                } catch (Throwable th2) {
                    th = th2;
                }
            }
        }
        rowBuilder.add("mime_type", string);
        rowBuilder.add("_data", file3.getAbsolutePath());
    }
}
