package com.mediatek.engineermode.mcfconfig;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.provider.MediaStore;
import com.mediatek.engineermode.Elog;
import java.io.File;

/* JADX INFO: loaded from: classes.dex */
public class FileInfo {
    public static final int FILENAME_MAX_LENGTH = 255;
    private static final String TAG = "McfConfig/FileInfo";
    private final String mAbsolutePath;
    private final File mFile;
    private final boolean mIsDir;
    private String mLastAccessPath;
    private long mLastModifiedTime;
    private final String mName;
    private long mSize;
    private String mParentPath = null;
    private String mFileSizeStr = null;
    private boolean mIsChecked = false;

    public FileInfo(File file, long j) throws IllegalArgumentException {
        this.mLastModifiedTime = -1L;
        this.mSize = -1L;
        if (file == null) {
            throw new IllegalArgumentException();
        }
        this.mFile = file;
        this.mName = file.getName();
        this.mAbsolutePath = this.mFile.getAbsolutePath();
        this.mLastModifiedTime = this.mFile.lastModified();
        boolean zIsDirectory = this.mFile.isDirectory();
        this.mIsDir = zIsDirectory;
        if (j > -1) {
            this.mSize = j;
        } else {
            if (zIsDirectory) {
                return;
            }
            this.mSize = this.mFile.length();
        }
    }

    public FileInfo(String str, long j) {
        this.mLastModifiedTime = -1L;
        this.mSize = -1L;
        if (str == null) {
            throw new IllegalArgumentException();
        }
        this.mAbsolutePath = str;
        this.mFile = new File(str);
        this.mName = FileUtils.getFileName(str);
        this.mLastModifiedTime = this.mFile.lastModified();
        boolean zIsDirectory = this.mFile.isDirectory();
        this.mIsDir = zIsDirectory;
        if (j > -1) {
            this.mSize = j;
        } else {
            if (zIsDirectory) {
                return;
            }
            this.mSize = this.mFile.length();
        }
    }

    public boolean equals(Object obj) {
        if (super.equals(obj)) {
            return true;
        }
        return (obj instanceof FileInfo) && ((FileInfo) obj).getFileAbsolutePath().equals(getFileAbsolutePath());
    }

    public File getFile() {
        return this.mFile;
    }

    public String getFileAbsolutePath() {
        return this.mAbsolutePath;
    }

    public String getFileName() {
        return this.mName;
    }

    public String getFileParentPath() {
        if (this.mParentPath == null) {
            this.mParentPath = FileUtils.getFilePath(this.mAbsolutePath);
        }
        return this.mParentPath;
    }

    public long getFileSize() {
        return this.mSize;
    }

    public String getFileSizeStr() {
        if (this.mFileSizeStr == null) {
            this.mFileSizeStr = FileUtils.sizeToString(this.mSize);
        }
        return this.mFileSizeStr;
    }

    public Uri getItemContentUri(Context context) {
        String[] strArr = {"_id"};
        Uri contentUri = MediaStore.Files.getContentUri("external");
        Cursor cursorQuery = null;
        Uri uriWithAppendedPath = null;
        context.grantUriPermission("com.android.providers.media.MediaProvider", contentUri, 1);
        Elog.d(TAG, "getItemContentUri, filePath = " + this.mAbsolutePath + ", projection = " + strArr + ", where = _data = ?, baseUri = " + contentUri);
        try {
            try {
                cursorQuery = context.getContentResolver().query(contentUri, strArr, "_data = ?", new String[]{this.mAbsolutePath}, null);
                if (cursorQuery != null && cursorQuery.moveToNext() && cursorQuery.getInt(cursorQuery.getColumnIndexOrThrow("_id")) != 0) {
                    long j = cursorQuery.getLong(cursorQuery.getColumnIndexOrThrow("_id"));
                    Elog.d(TAG, "getItemContentUri, item id = " + j);
                    uriWithAppendedPath = Uri.withAppendedPath(contentUri, String.valueOf(j));
                }
            } catch (Exception e) {
                Elog.e(TAG, "getItemContentUri Exception " + e);
            }
            return uriWithAppendedPath;
        } finally {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
        }
    }

    public Uri getUri() {
        return Uri.fromFile(this.mFile);
    }

    public int hashCode() {
        return getFileAbsolutePath().hashCode();
    }

    public boolean isHideFile() {
        return getFileName().startsWith(".");
    }
}
