.class public Lcom/mediatek/emcamera/GisCaliTask;
.super Landroid/os/AsyncTask;
.source "GisCaliTask.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/String;",
        "Ljava/lang/Void;",
        "Ljava/lang/Boolean;",
        ">;"
    }
.end annotation


# static fields
.field private static final GIS_DIR:Ljava/lang/String; = "data/vendor/camera_dump/eis/gyro/"

.field private static final GIS_INFO_FILE:Ljava/lang/String; = "data/vendor/camera_dump/eis/gyro/CalibrationInfo.txt"

.field private static final GIS_PARAM_FILE:Ljava/lang/String; = "data/vendor/camera_dump/eis/gyro/GIS_default_parameter.txt"

.field private static final GIS_PARAM_FILE_PREFIX:Ljava/lang/String; = "data/vendor/camera_dump/eis/gyro/GIS_default_parameter_"

.field private static final GIS_PARAM_FILE_SUFFIX:Ljava/lang/String; = ".txt"

.field public static final GIS_STATE_DONE:I = 0x3eb

.field public static final GIS_STATE_INIT:I = 0x3e9

.field public static final GIS_STATE_PROC:I = 0x3ea

.field public static final MSG_ID_GIS_CALI_DONE:I = 0x259

.field public static final MSG_ID_GIS_START_PREVIEW:I = 0x258

.field private static final ROPERTY_GIS_CALIBRATION:Ljava/lang/String; = "vendor.debug.eis.EMEnabled"

.field private static final TAG:Ljava/lang/String; = "GisCaliTask"


# instance fields
.field private mCameraName:Ljava/lang/String;

.field private mContext:Landroid/content/Context;

.field private mHandler:Landroid/os/Handler;

.field private mStatus:I


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Landroid/os/Handler;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "cameraName"    # Ljava/lang/String;
    .param p3, "handler"    # Landroid/os/Handler;

    .line 70
    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    .line 71
    iput-object p1, p0, Lcom/mediatek/emcamera/GisCaliTask;->mContext:Landroid/content/Context;

    .line 72
    iput-object p2, p0, Lcom/mediatek/emcamera/GisCaliTask;->mCameraName:Ljava/lang/String;

    .line 73
    iput-object p3, p0, Lcom/mediatek/emcamera/GisCaliTask;->mHandler:Landroid/os/Handler;

    .line 74
    const/16 v0, 0x3e9

    iput v0, p0, Lcom/mediatek/emcamera/GisCaliTask;->mStatus:I

    .line 75
    return-void
.end method

.method private cameraGisCalFinish()V
    .locals 8

    .line 141
    const-string v0, "data/vendor/camera_dump/eis/gyro/CalibrationInfo.txt"

    invoke-direct {p0, v0}, Lcom/mediatek/emcamera/GisCaliTask;->readFile(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 142
    .local v1, "info":Ljava/lang/String;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "cali finish: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "GisCaliTask"

    invoke-static {v3, v2}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    iget-object v2, p0, Lcom/mediatek/emcamera/GisCaliTask;->mContext:Landroid/content/Context;

    const v4, 0x7f0d0037

    invoke-virtual {v2, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4, v1}, Lcom/mediatek/emcamera/Utils;->showMsgDialog(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 144
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    move-object v0, v2

    .line 145
    .local v0, "fileInfo":Ljava/io/File;
    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 146
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    .line 148
    :cond_0
    new-instance v2, Ljava/io/File;

    const-string v4, "data/vendor/camera_dump/eis/gyro/GIS_default_parameter.txt"

    invoke-direct {v2, v4}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 149
    .local v2, "fileDefault":Ljava/io/File;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "data/vendor/camera_dump/eis/gyro/GIS_default_parameter_"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mediatek/emcamera/GisCaliTask;->mCameraName:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, ".txt"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 150
    .local v5, "targetFileName":Ljava/lang/String;
    invoke-virtual {v2}, Ljava/io/File;->isFile()Z

    move-result v6

    if-eqz v6, :cond_1

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v6

    if-eqz v6, :cond_1

    .line 151
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "target file name: "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v3, v6}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 152
    invoke-direct {p0, v4, v5}, Lcom/mediatek/emcamera/GisCaliTask;->copyFile(Ljava/lang/String;Ljava/lang/String;)V

    .line 153
    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    .line 155
    :cond_1
    return-void
.end method

.method private copyFile(Ljava/lang/String;Ljava/lang/String;)V
    .locals 7
    .param p1, "oldPath"    # Ljava/lang/String;
    .param p2, "newPath"    # Ljava/lang/String;

    .line 176
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 178
    .local v0, "oldfile":Ljava/io/File;
    const/4 v1, 0x0

    .line 179
    .local v1, "bytesum":I
    const/4 v2, 0x0

    .line 180
    .local v2, "byteread":I
    :try_start_0
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 181
    new-instance v3, Ljava/io/FileInputStream;

    invoke-direct {v3, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    .line 182
    .local v3, "inStream":Ljava/io/FileInputStream;
    new-instance v4, Ljava/io/FileOutputStream;

    invoke-direct {v4, p2}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V

    .line 183
    .local v4, "fos":Ljava/io/FileOutputStream;
    invoke-virtual {v3}, Ljava/io/FileInputStream;->available()I

    move-result v5

    .line 184
    .local v5, "length":I
    new-array v6, v5, [B

    .line 185
    .local v6, "buffer":[B
    invoke-virtual {v3, v6}, Ljava/io/FileInputStream;->read([B)I

    .line 186
    invoke-virtual {v4, v6}, Ljava/io/FileOutputStream;->write([B)V

    .line 187
    invoke-virtual {v3}, Ljava/io/FileInputStream;->close()V

    .line 188
    invoke-virtual {v4}, Ljava/io/FileOutputStream;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 193
    .end local v1    # "bytesum":I
    .end local v2    # "byteread":I
    .end local v3    # "inStream":Ljava/io/FileInputStream;
    .end local v4    # "fos":Ljava/io/FileOutputStream;
    .end local v5    # "length":I
    .end local v6    # "buffer":[B
    :cond_0
    goto :goto_0

    .line 190
    :catch_0
    move-exception v1

    .line 191
    .local v1, "ex":Ljava/io/IOException;
    const-string v2, "GisCaliTask"

    const-string v3, "copyFile IOException"

    invoke-static {v2, v3}, Lcom/mediatek/emcamera/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 192
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    .line 195
    .end local v1    # "ex":Ljava/io/IOException;
    :goto_0
    return-void
.end method

.method private readFile(Ljava/lang/String;)Ljava/lang/String;
    .locals 6
    .param p1, "fileName"    # Ljava/lang/String;

    .line 158
    const-string v0, ""

    .line 159
    .local v0, "res":Ljava/lang/String;
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 161
    .local v1, "fHandle":Ljava/io/File;
    :try_start_0
    new-instance v2, Ljava/io/FileInputStream;

    invoke-direct {v2, v1}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    .line 162
    .local v2, "fis":Ljava/io/FileInputStream;
    invoke-virtual {v2}, Ljava/io/FileInputStream;->available()I

    move-result v3

    .line 163
    .local v3, "length":I
    new-array v4, v3, [B

    .line 164
    .local v4, "buffer":[B
    invoke-virtual {v2, v4}, Ljava/io/FileInputStream;->read([B)I

    .line 165
    new-instance v5, Ljava/lang/String;

    invoke-direct {v5, v4}, Ljava/lang/String;-><init>([B)V

    move-object v0, v5

    .line 166
    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 171
    .end local v2    # "fis":Ljava/io/FileInputStream;
    .end local v3    # "length":I
    .end local v4    # "buffer":[B
    goto :goto_0

    .line 167
    :catch_0
    move-exception v2

    .line 168
    .local v2, "ex":Ljava/io/IOException;
    const-string v3, "GisCaliTask"

    const-string v4, "readFile IOException"

    invoke-static {v3, v4}, Lcom/mediatek/emcamera/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 169
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    .line 170
    invoke-virtual {v1}, Ljava/io/File;->delete()Z

    .line 172
    .end local v2    # "ex":Ljava/io/IOException;
    :goto_0
    return-object v0
.end method


# virtual methods
.method protected varargs doInBackground([Ljava/lang/String;)Ljava/lang/Boolean;
    .locals 12
    .param p1, "params"    # [Ljava/lang/String;

    .line 79
    const-string v0, "GisCaliTask"

    const-string v1, "cameraGisCalProc - data/vendor/camera_dump/eis/gyro/CalibrationInfo.txt"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 80
    const/16 v1, 0x3ea

    iput v1, p0, Lcom/mediatek/emcamera/GisCaliTask;->mStatus:I

    .line 82
    new-instance v1, Ljava/io/File;

    const-string v2, "data/vendor/camera_dump/eis/gyro/CalibrationInfo.txt"

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 83
    .local v1, "file":Ljava/io/File;
    invoke-virtual {v1}, Ljava/io/File;->isFile()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 84
    invoke-virtual {v1}, Ljava/io/File;->delete()Z

    move-result v3

    .line 85
    .local v3, "result":Z
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "CalibrationInfo.txt deleted = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 88
    .end local v3    # "result":Z
    :cond_0
    const-string v3, "vendor.debug.eis.EMEnabled"

    const-string v4, "1"

    invoke-static {v3, v4}, Lcom/mediatek/emcamera/Utils;->setProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 89
    const-string v4, "cameraGisCalProc - set vendor.debug.eid.EMmode property"

    invoke-static {v0, v4}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 90
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    .line 91
    .local v4, "mGisCalibrationTimeStart":J
    move-wide v6, v4

    .line 92
    .local v6, "mGisCalibrationTimeEnd":J
    new-instance v8, Ljava/io/File;

    invoke-direct {v8, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    move-object v2, v8

    .line 95
    .local v2, "fileData":Ljava/io/File;
    iget-object v8, p0, Lcom/mediatek/emcamera/GisCaliTask;->mHandler:Landroid/os/Handler;

    const/16 v9, 0x258

    invoke-virtual {v8, v9}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 96
    :cond_1
    sub-long v8, v6, v4

    const-wide/16 v10, 0x2710

    cmp-long v8, v8, v10

    const-string v9, "0"

    if-gez v8, :cond_3

    .line 97
    invoke-virtual {v2}, Ljava/io/File;->isFile()Z

    move-result v8

    if-eqz v8, :cond_2

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v8

    if-eqz v8, :cond_2

    .line 98
    const-string v8, "cameraGisCalProc - file exit"

    invoke-static {v0, v8}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    invoke-static {v3, v9}, Lcom/mediatek/emcamera/Utils;->setProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 100
    const/4 v0, 0x1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    return-object v0

    .line 102
    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    .line 104
    invoke-virtual {p0}, Lcom/mediatek/emcamera/GisCaliTask;->isCancelled()Z

    move-result v8

    if-eqz v8, :cond_1

    .line 105
    const/16 v8, 0x3eb

    iput v8, p0, Lcom/mediatek/emcamera/GisCaliTask;->mStatus:I

    .line 106
    const-string v8, "cameraGisCalProc canceled"

    invoke-static {v0, v8}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 111
    :cond_3
    const-string v8, "cameraGisCalProc - exit while"

    invoke-static {v0, v8}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 112
    invoke-static {v3, v9}, Lcom/mediatek/emcamera/Utils;->setProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 113
    const/4 v0, 0x0

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    return-object v0
.end method

.method protected bridge synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 53
    check-cast p1, [Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/emcamera/GisCaliTask;->doInBackground([Ljava/lang/String;)Ljava/lang/Boolean;

    move-result-object p1

    return-object p1
.end method

.method public getGisStatus()I
    .locals 2

    .line 136
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "getGisStatus = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/emcamera/GisCaliTask;->mStatus:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "GisCaliTask"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 137
    iget v0, p0, Lcom/mediatek/emcamera/GisCaliTask;->mStatus:I

    return v0
.end method

.method protected onPostExecute(Ljava/lang/Boolean;)V
    .locals 7
    .param p1, "gisCaliOk"    # Ljava/lang/Boolean;

    .line 118
    invoke-virtual {p0}, Lcom/mediatek/emcamera/GisCaliTask;->isCancelled()Z

    move-result v0

    const-string v1, "GisCaliTask"

    if-eqz v0, :cond_0

    .line 119
    const-string v0, "onPostExecute canceled"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 120
    return-void

    .line 122
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onPostExecute "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 123
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 124
    invoke-direct {p0}, Lcom/mediatek/emcamera/GisCaliTask;->cameraGisCalFinish()V

    goto :goto_0

    .line 126
    :cond_1
    const-string v0, "show GisCal Dlg: fail"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 127
    iget-object v0, p0, Lcom/mediatek/emcamera/GisCaliTask;->mContext:Landroid/content/Context;

    const v1, 0x7f0d0038

    invoke-virtual {v0, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/emcamera/GisCaliTask;->mContext:Landroid/content/Context;

    const v3, 0x7f0d0036

    const/4 v4, 0x1

    new-array v4, v4, [Ljava/lang/Object;

    const/4 v5, 0x0

    const-string v6, "data/vendor/camera_dump/eis/gyro/CalibrationInfo.txt"

    aput-object v6, v4, v5

    .line 128
    invoke-virtual {v2, v3, v4}, Landroid/content/Context;->getString(I[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    .line 127
    invoke-static {v0, v1, v2}, Lcom/mediatek/emcamera/Utils;->showMsgDialog(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 131
    :goto_0
    const/16 v0, 0x3eb

    iput v0, p0, Lcom/mediatek/emcamera/GisCaliTask;->mStatus:I

    .line 132
    iget-object v0, p0, Lcom/mediatek/emcamera/GisCaliTask;->mHandler:Landroid/os/Handler;

    const/16 v1, 0x259

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendEmptyMessage(I)Z

    .line 133
    return-void
.end method

.method protected bridge synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 0

    .line 53
    check-cast p1, Ljava/lang/Boolean;

    invoke-virtual {p0, p1}, Lcom/mediatek/emcamera/GisCaliTask;->onPostExecute(Ljava/lang/Boolean;)V

    return-void
.end method
