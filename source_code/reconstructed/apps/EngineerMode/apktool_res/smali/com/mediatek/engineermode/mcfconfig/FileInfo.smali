.class public Lcom/mediatek/engineermode/mcfconfig/FileInfo;
.super Ljava/lang/Object;
.source "FileInfo.java"


# static fields
.field public static final FILENAME_MAX_LENGTH:I = 0xff

.field private static final TAG:Ljava/lang/String; = "McfConfig/FileInfo"


# instance fields
.field private final mAbsolutePath:Ljava/lang/String;

.field private final mFile:Ljava/io/File;

.field private mFileSizeStr:Ljava/lang/String;

.field private mIsChecked:Z

.field private final mIsDir:Z

.field private mLastAccessPath:Ljava/lang/String;

.field private mLastModifiedTime:J

.field private final mName:Ljava/lang/String;

.field private mParentPath:Ljava/lang/String;

.field private mSize:J


# direct methods
.method public constructor <init>(Ljava/io/File;J)V
    .locals 4
    .param p1, "file"    # Ljava/io/File;
    .param p2, "size"    # J
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/IllegalArgumentException;
        }
    .end annotation

    .line 84
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 64
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mParentPath:Ljava/lang/String;

    .line 67
    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFileSizeStr:Ljava/lang/String;

    .line 69
    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mLastModifiedTime:J

    .line 70
    iput-wide v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mSize:J

    .line 73
    const/4 v2, 0x0

    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mIsChecked:Z

    .line 85
    if-eqz p1, :cond_2

    .line 88
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFile:Ljava/io/File;

    .line 89
    invoke-virtual {p1}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mName:Ljava/lang/String;

    .line 90
    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mAbsolutePath:Ljava/lang/String;

    .line 91
    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v2}, Ljava/io/File;->lastModified()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mLastModifiedTime:J

    .line 92
    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v2}, Ljava/io/File;->isDirectory()Z

    move-result v2

    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mIsDir:Z

    .line 93
    cmp-long v0, p2, v0

    if-lez v0, :cond_0

    .line 94
    iput-wide p2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mSize:J

    goto :goto_0

    .line 95
    :cond_0
    if-nez v2, :cond_1

    .line 96
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mSize:J

    .line 98
    :cond_1
    :goto_0
    return-void

    .line 86
    :cond_2
    new-instance v0, Ljava/lang/IllegalArgumentException;

    invoke-direct {v0}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw v0
.end method

.method public constructor <init>(Ljava/lang/String;J)V
    .locals 4
    .param p1, "absPath"    # Ljava/lang/String;
    .param p2, "size"    # J

    .line 106
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 64
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mParentPath:Ljava/lang/String;

    .line 67
    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFileSizeStr:Ljava/lang/String;

    .line 69
    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mLastModifiedTime:J

    .line 70
    iput-wide v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mSize:J

    .line 73
    const/4 v2, 0x0

    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mIsChecked:Z

    .line 107
    if-eqz p1, :cond_2

    .line 110
    iput-object p1, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mAbsolutePath:Ljava/lang/String;

    .line 111
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    iput-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFile:Ljava/io/File;

    .line 112
    invoke-static {p1}, Lcom/mediatek/engineermode/mcfconfig/FileUtils;->getFileName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mName:Ljava/lang/String;

    .line 113
    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v2}, Ljava/io/File;->lastModified()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mLastModifiedTime:J

    .line 114
    iget-object v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v2}, Ljava/io/File;->isDirectory()Z

    move-result v2

    iput-boolean v2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mIsDir:Z

    .line 115
    cmp-long v0, p2, v0

    if-lez v0, :cond_0

    .line 116
    iput-wide p2, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mSize:J

    goto :goto_0

    .line 117
    :cond_0
    if-nez v2, :cond_1

    .line 118
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFile:Ljava/io/File;

    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mSize:J

    .line 120
    :cond_1
    :goto_0
    return-void

    .line 108
    :cond_2
    new-instance v0, Ljava/lang/IllegalArgumentException;

    invoke-direct {v0}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw v0
.end method


# virtual methods
.method public equals(Ljava/lang/Object;)Z
    .locals 3
    .param p1, "o"    # Ljava/lang/Object;

    .line 239
    invoke-super {p0, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 240
    return v1

    .line 242
    :cond_0
    instance-of v0, p1, Lcom/mediatek/engineermode/mcfconfig/FileInfo;

    if-eqz v0, :cond_1

    .line 243
    move-object v0, p1

    check-cast v0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->getFileAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->getFileAbsolutePath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 244
    return v1

    .line 247
    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public getFile()Ljava/io/File;
    .locals 1

    .line 180
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFile:Ljava/io/File;

    return-object v0
.end method

.method public getFileAbsolutePath()Ljava/lang/String;
    .locals 1

    .line 171
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mAbsolutePath:Ljava/lang/String;

    return-object v0
.end method

.method public getFileName()Ljava/lang/String;
    .locals 1

    .line 141
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mName:Ljava/lang/String;

    return-object v0
.end method

.method public getFileParentPath()Ljava/lang/String;
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mParentPath:Ljava/lang/String;

    if-nez v0, :cond_0

    .line 129
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mAbsolutePath:Ljava/lang/String;

    invoke-static {v0}, Lcom/mediatek/engineermode/mcfconfig/FileUtils;->getFilePath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mParentPath:Ljava/lang/String;

    .line 131
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mParentPath:Ljava/lang/String;

    return-object v0
.end method

.method public getFileSize()J
    .locals 2

    .line 150
    iget-wide v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mSize:J

    return-wide v0
.end method

.method public getFileSizeStr()Ljava/lang/String;
    .locals 2

    .line 159
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFileSizeStr:Ljava/lang/String;

    if-nez v0, :cond_0

    .line 160
    iget-wide v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mSize:J

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mcfconfig/FileUtils;->sizeToString(J)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFileSizeStr:Ljava/lang/String;

    .line 162
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFileSizeStr:Ljava/lang/String;

    return-object v0
.end method

.method public getItemContentUri(Landroid/content/Context;)Landroid/net/Uri;
    .locals 14
    .param p1, "context"    # Landroid/content/Context;

    .line 189
    const-string v0, "_id"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v1

    .line 190
    .local v1, "projection":[Ljava/lang/String;
    const-string v8, "_data = ?"

    .line 191
    .local v8, "where":Ljava/lang/String;
    const-string v2, "external"

    invoke-static {v2}, Landroid/provider/MediaStore$Files;->getContentUri(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v9

    .line 192
    .local v9, "baseUri":Landroid/net/Uri;
    const/4 v10, 0x0

    .line 193
    .local v10, "c":Landroid/database/Cursor;
    const-string v11, "com.android.providers.media.MediaProvider"

    .line 194
    .local v11, "provider":Ljava/lang/String;
    const/4 v12, 0x0

    .line 195
    .local v12, "itemUri":Landroid/net/Uri;
    const/4 v2, 0x1

    invoke-virtual {p1, v11, v9, v2}, Landroid/content/Context;->grantUriPermission(Ljava/lang/String;Landroid/net/Uri;I)V

    .line 196
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "getItemContentUri, filePath = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mAbsolutePath:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ", projection = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v4, ", where = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_data = ?"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ", baseUri = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v13, "McfConfig/FileInfo"

    invoke-static {v13, v3}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 201
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v3

    const-string v5, "_data = ?"

    new-array v6, v2, [Ljava/lang/String;

    const/4 v2, 0x0

    iget-object v4, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mAbsolutePath:Ljava/lang/String;

    aput-object v4, v6, v2

    const/4 v7, 0x0

    move-object v2, v3

    move-object v3, v9

    move-object v4, v1

    invoke-virtual/range {v2 .. v7}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object v2

    move-object v10, v2

    .line 206
    if-eqz v10, :cond_0

    invoke-interface {v10}, Landroid/database/Cursor;->moveToNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 207
    invoke-interface {v10, v0}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v2

    invoke-interface {v10, v2}, Landroid/database/Cursor;->getInt(I)I

    move-result v2

    .line 208
    .local v2, "type":I
    if-eqz v2, :cond_0

    .line 209
    invoke-interface {v10, v0}, Landroid/database/Cursor;->getColumnIndexOrThrow(Ljava/lang/String;)I

    move-result v0

    invoke-interface {v10, v0}, Landroid/database/Cursor;->getLong(I)J

    move-result-wide v3

    .line 210
    .local v3, "id":J
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getItemContentUri, item id = "

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v13, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 211
    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-static {v9, v0}, Landroid/net/Uri;->withAppendedPath(Landroid/net/Uri;Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v12, v0

    .line 217
    .end local v2    # "type":I
    .end local v3    # "id":J
    :cond_0
    if-eqz v10, :cond_1

    .line 218
    :goto_0
    invoke-interface {v10}, Landroid/database/Cursor;->close()V

    goto :goto_1

    .line 217
    :catchall_0
    move-exception v0

    goto :goto_2

    .line 214
    :catch_0
    move-exception v0

    .line 215
    .local v0, "e":Ljava/lang/Exception;
    :try_start_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getItemContentUri Exception "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v13, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 217
    .end local v0    # "e":Ljava/lang/Exception;
    if-eqz v10, :cond_1

    .line 218
    goto :goto_0

    .line 221
    :cond_1
    :goto_1
    return-object v12

    .line 217
    :goto_2
    if-eqz v10, :cond_2

    .line 218
    invoke-interface {v10}, Landroid/database/Cursor;->close()V

    .line 220
    :cond_2
    throw v0
.end method

.method public getUri()Landroid/net/Uri;
    .locals 1

    .line 229
    iget-object v0, p0, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->mFile:Ljava/io/File;

    invoke-static {v0}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v0

    return-object v0
.end method

.method public hashCode()I
    .locals 1

    .line 234
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->getFileAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    return v0
.end method

.method public isHideFile()Z
    .locals 2

    .line 257
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mcfconfig/FileInfo;->getFileName()Ljava/lang/String;

    move-result-object v0

    const-string v1, "."

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 258
    const/4 v0, 0x1

    return v0

    .line 260
    :cond_0
    const/4 v0, 0x0

    return v0
.end method
