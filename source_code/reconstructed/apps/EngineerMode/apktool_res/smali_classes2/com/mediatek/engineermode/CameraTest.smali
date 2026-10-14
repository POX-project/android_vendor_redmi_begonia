.class public Lcom/mediatek/engineermode/CameraTest;
.super Landroid/app/Activity;
.source "CameraTest.java"

# interfaces
.implements Landroid/view/SurfaceHolder$Callback;


# static fields
.field public static final FACING_TAG:Ljava/lang/String; = "facingfront"

.field private static final FULL_DEGREE:I = 0x168

.field private static final IDLE:I = 0x1

.field private static final PREVIEW_STOPPED:I = 0x0

.field static final TAG:Ljava/lang/String; = "CameraTest"

.field private static final TIME_ONE_SEC:J = 0x3e8L


# instance fields
.field private mCameraDevice:Landroid/hardware/Camera;

.field private mCameraId:I

.field private mCameraState:I

.field private mPausing:Z

.field private mSurfaceHolder:Landroid/view/SurfaceHolder;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 72
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 77
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/CameraTest;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    .line 80
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraState:I

    return-void
.end method

.method private closeCamera()V
    .locals 1

    .line 192
    iget-object v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraDevice:Landroid/hardware/Camera;

    if-eqz v0, :cond_0

    .line 193
    invoke-virtual {v0}, Landroid/hardware/Camera;->release()V

    .line 194
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraDevice:Landroid/hardware/Camera;

    .line 195
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/CameraTest;->setCameraState(I)V

    .line 197
    :cond_0
    return-void
.end method

.method private static getCameraID(Z)I
    .locals 6
    .param p0, "front"    # Z

    .line 167
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "facing:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CameraTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 168
    invoke-static {}, Landroid/hardware/Camera;->getNumberOfCameras()I

    move-result v0

    .line 169
    .local v0, "availCameraNumber":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "availCameraNumber:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    if-ge v2, v0, :cond_2

    .line 171
    new-instance v3, Landroid/hardware/Camera$CameraInfo;

    invoke-direct {v3}, Landroid/hardware/Camera$CameraInfo;-><init>()V

    .line 172
    .local v3, "info":Landroid/hardware/Camera$CameraInfo;
    invoke-static {v2, v3}, Landroid/hardware/Camera;->getCameraInfo(ILandroid/hardware/Camera$CameraInfo;)V

    .line 173
    iget v4, v3, Landroid/hardware/Camera$CameraInfo;->facing:I

    if-eqz p0, :cond_0

    const/4 v5, 0x1

    goto :goto_1

    .line 174
    :cond_0
    const/4 v5, 0x0

    :goto_1
    if-ne v4, v5, :cond_1

    .line 175
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "cameraID:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    return v2

    .line 170
    .end local v3    # "info":Landroid/hardware/Camera$CameraInfo;
    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 179
    .end local v2    # "i":I
    :cond_2
    const/4 v1, -0x1

    return v1
.end method

.method private getOrientation(I)I
    .locals 3
    .param p1, "degrees"    # I

    .line 251
    new-instance v0, Landroid/hardware/Camera$CameraInfo;

    invoke-direct {v0}, Landroid/hardware/Camera$CameraInfo;-><init>()V

    .line 252
    .local v0, "cameraInfo":Landroid/hardware/Camera$CameraInfo;
    iget v1, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraId:I

    invoke-static {v1, v0}, Landroid/hardware/Camera;->getCameraInfo(ILandroid/hardware/Camera$CameraInfo;)V

    .line 254
    iget v1, v0, Landroid/hardware/Camera$CameraInfo;->facing:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    .line 255
    iget v1, v0, Landroid/hardware/Camera$CameraInfo;->orientation:I

    add-int/2addr v1, p1

    rem-int/lit16 v1, v1, 0x168

    .line 256
    .local v1, "orientation":I
    rsub-int v2, v1, 0x168

    rem-int/lit16 v2, v2, 0x168

    .end local v1    # "orientation":I
    .local v2, "orientation":I
    goto :goto_0

    .line 258
    .end local v2    # "orientation":I
    :cond_0
    iget v1, v0, Landroid/hardware/Camera$CameraInfo;->orientation:I

    sub-int/2addr v1, p1

    add-int/lit16 v1, v1, 0x168

    rem-int/lit16 v2, v1, 0x168

    .line 260
    .restart local v2    # "orientation":I
    :goto_0
    return v2
.end method

.method public static isCameraSupport(Z)Z
    .locals 2
    .param p0, "front"    # Z

    .line 188
    invoke-static {p0}, Lcom/mediatek/engineermode/CameraTest;->getCameraID(Z)I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private openCamera(I)Landroid/hardware/Camera;
    .locals 4
    .param p1, "cameraId"    # I

    .line 148
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    const/16 v1, 0xa

    if-ge v0, v1, :cond_1

    .line 149
    invoke-static {p1}, Landroid/hardware/Camera;->open(I)Landroid/hardware/Camera;

    move-result-object v1

    .line 150
    .local v1, "camera":Landroid/hardware/Camera;
    if-nez v1, :cond_0

    .line 152
    const-wide/16 v2, 0x3e8

    :try_start_0
    invoke-static {v2, v3}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 157
    nop

    .line 148
    .end local v1    # "camera":Landroid/hardware/Camera;
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 153
    .restart local v1    # "camera":Landroid/hardware/Camera;
    :catch_0
    move-exception v2

    .line 155
    .local v2, "e":Ljava/lang/InterruptedException;
    invoke-virtual {v2}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 156
    goto :goto_1

    .line 160
    .end local v2    # "e":Ljava/lang/InterruptedException;
    :cond_0
    return-object v1

    .line 163
    .end local v0    # "i":I
    .end local v1    # "camera":Landroid/hardware/Camera;
    :cond_1
    :goto_1
    const/4 v0, 0x0

    return-object v0
.end method

.method private setCameraParameters()V
    .locals 11

    .line 270
    iget-object v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraDevice:Landroid/hardware/Camera;

    invoke-virtual {v0}, Landroid/hardware/Camera;->getParameters()Landroid/hardware/Camera$Parameters;

    move-result-object v0

    .line 272
    .local v0, "parameters":Landroid/hardware/Camera$Parameters;
    invoke-virtual {v0}, Landroid/hardware/Camera$Parameters;->getSupportedPreviewFrameRates()Ljava/util/List;

    move-result-object v1

    .line 273
    .local v1, "frameRates":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Integer;>;"
    const-string v2, "CameraTest"

    if-eqz v1, :cond_0

    .line 274
    invoke-static {v1}, Ljava/util/Collections;->max(Ljava/util/Collection;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    .line 276
    .local v3, "max":Ljava/lang/Integer;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "Max frame rate is "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 277
    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v4

    invoke-virtual {v0, v4}, Landroid/hardware/Camera$Parameters;->setPreviewFrameRate(I)V

    .line 280
    .end local v3    # "max":Ljava/lang/Integer;
    :cond_0
    invoke-virtual {v0}, Landroid/hardware/Camera$Parameters;->getSupportedPictureSizes()Ljava/util/List;

    move-result-object v3

    .line 281
    .local v3, "pictureSizes":Ljava/util/List;, "Ljava/util/List<Landroid/hardware/Camera$Size;>;"
    const/4 v4, 0x0

    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Landroid/hardware/Camera$Size;

    .line 282
    .local v5, "maxSize":Landroid/hardware/Camera$Size;
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :goto_0
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_3

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Landroid/hardware/Camera$Size;

    .line 283
    .local v7, "size":Landroid/hardware/Camera$Size;
    iget v8, v7, Landroid/hardware/Camera$Size;->height:I

    iget v9, v5, Landroid/hardware/Camera$Size;->height:I

    if-gt v8, v9, :cond_1

    iget v8, v7, Landroid/hardware/Camera$Size;->width:I

    iget v9, v5, Landroid/hardware/Camera$Size;->width:I

    if-le v8, v9, :cond_2

    .line 284
    :cond_1
    move-object v5, v7

    .line 286
    .end local v7    # "size":Landroid/hardware/Camera$Size;
    :cond_2
    goto :goto_0

    .line 287
    :cond_3
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "Max picture size is "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v7, v5, Landroid/hardware/Camera$Size;->width:I

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v7, "x"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v8, v5, Landroid/hardware/Camera$Size;->height:I

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 288
    iget v6, v5, Landroid/hardware/Camera$Size;->width:I

    iget v8, v5, Landroid/hardware/Camera$Size;->height:I

    invoke-virtual {v0, v6, v8}, Landroid/hardware/Camera$Parameters;->setPictureSize(II)V

    .line 290
    invoke-virtual {v0}, Landroid/hardware/Camera$Parameters;->getSupportedPreviewSizes()Ljava/util/List;

    move-result-object v6

    .line 291
    .local v6, "previewSizes":Ljava/util/List;, "Ljava/util/List<Landroid/hardware/Camera$Size;>;"
    invoke-interface {v6, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/hardware/Camera$Size;

    .line 292
    .end local v5    # "maxSize":Landroid/hardware/Camera$Size;
    .local v4, "maxSize":Landroid/hardware/Camera$Size;
    invoke-interface {v6}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v5

    :goto_1
    invoke-interface {v5}, Ljava/util/Iterator;->hasNext()Z

    move-result v8

    if-eqz v8, :cond_6

    invoke-interface {v5}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Landroid/hardware/Camera$Size;

    .line 293
    .local v8, "size":Landroid/hardware/Camera$Size;
    iget v9, v8, Landroid/hardware/Camera$Size;->height:I

    iget v10, v4, Landroid/hardware/Camera$Size;->height:I

    if-gt v9, v10, :cond_4

    iget v9, v8, Landroid/hardware/Camera$Size;->width:I

    iget v10, v4, Landroid/hardware/Camera$Size;->width:I

    if-le v9, v10, :cond_5

    .line 294
    :cond_4
    move-object v4, v8

    .line 296
    .end local v8    # "size":Landroid/hardware/Camera$Size;
    :cond_5
    goto :goto_1

    .line 297
    :cond_6
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v8, "Max preview size is "

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v8, v4, Landroid/hardware/Camera$Size;->width:I

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v7, v4, Landroid/hardware/Camera$Size;->height:I

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v2, v5}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 298
    iget v2, v4, Landroid/hardware/Camera$Size;->width:I

    iget v5, v4, Landroid/hardware/Camera$Size;->height:I

    invoke-virtual {v0, v2, v5}, Landroid/hardware/Camera$Parameters;->setPreviewSize(II)V

    .line 300
    iget v2, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraId:I

    const/4 v5, 0x2

    invoke-static {v2, v5}, Landroid/media/CameraProfile;->getJpegEncodingQualityParameter(II)I

    move-result v2

    .line 302
    .local v2, "jpegQuality":I
    invoke-virtual {v0, v2}, Landroid/hardware/Camera$Parameters;->setJpegQuality(I)V

    .line 303
    iget-object v5, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraDevice:Landroid/hardware/Camera;

    invoke-virtual {v5, v0}, Landroid/hardware/Camera;->setParameters(Landroid/hardware/Camera$Parameters;)V

    .line 304
    return-void
.end method

.method private setCameraState(I)V
    .locals 2
    .param p1, "state"    # I

    .line 265
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setCameraState() state "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CameraTest"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 266
    iput p1, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraState:I

    .line 267
    return-void
.end method

.method private setOrientation()V
    .locals 3

    .line 233
    const/4 v0, 0x0

    .line 234
    .local v0, "degrees":I
    invoke-virtual {p0}, Lcom/mediatek/engineermode/CameraTest;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v1

    invoke-interface {v1}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v1

    invoke-virtual {v1}, Landroid/view/Display;->getRotation()I

    move-result v1

    const/4 v2, 0x1

    if-eq v1, v2, :cond_2

    const/4 v2, 0x2

    if-eq v1, v2, :cond_1

    const/4 v2, 0x3

    if-eq v1, v2, :cond_0

    goto :goto_0

    .line 242
    :cond_0
    const/16 v0, 0x10e

    .line 243
    goto :goto_0

    .line 239
    :cond_1
    const/16 v0, 0xb4

    .line 240
    goto :goto_0

    .line 236
    :cond_2
    const/16 v0, 0x5a

    .line 237
    nop

    .line 247
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraDevice:Landroid/hardware/Camera;

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/CameraTest;->getOrientation(I)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/hardware/Camera;->setDisplayOrientation(I)V

    .line 248
    return-void
.end method

.method private setPreviewDisplay(Landroid/view/SurfaceHolder;)V
    .locals 1
    .param p1, "holder"    # Landroid/view/SurfaceHolder;

    .line 226
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraDevice:Landroid/hardware/Camera;

    invoke-virtual {v0, p1}, Landroid/hardware/Camera;->setPreviewDisplay(Landroid/view/SurfaceHolder;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    .line 229
    goto :goto_0

    .line 227
    :catch_0
    move-exception v0

    .line 228
    .local v0, "ex":Ljava/io/IOException;
    invoke-direct {p0}, Lcom/mediatek/engineermode/CameraTest;->closeCamera()V

    .line 230
    .end local v0    # "ex":Ljava/io/IOException;
    :goto_0
    return-void
.end method

.method private startPreview()V
    .locals 2

    .line 200
    const-string v0, "CameraTest"

    const-string v1, "set Preview"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 201
    iget-object v1, p0, Lcom/mediatek/engineermode/CameraTest;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    if-eqz v1, :cond_2

    iget-boolean v1, p0, Lcom/mediatek/engineermode/CameraTest;->mPausing:Z

    if-nez v1, :cond_2

    invoke-virtual {p0}, Lcom/mediatek/engineermode/CameraTest;->isFinishing()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 205
    :cond_0
    iget v1, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraState:I

    if-eqz v1, :cond_1

    .line 206
    invoke-direct {p0}, Lcom/mediatek/engineermode/CameraTest;->stopPreview()V

    .line 208
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/CameraTest;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    invoke-direct {p0, v1}, Lcom/mediatek/engineermode/CameraTest;->setPreviewDisplay(Landroid/view/SurfaceHolder;)V

    .line 209
    invoke-direct {p0}, Lcom/mediatek/engineermode/CameraTest;->setOrientation()V

    .line 210
    invoke-direct {p0}, Lcom/mediatek/engineermode/CameraTest;->setCameraParameters()V

    .line 211
    const-string v1, "==== startPreview ===="

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 212
    iget-object v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraDevice:Landroid/hardware/Camera;

    invoke-virtual {v0}, Landroid/hardware/Camera;->startPreview()V

    .line 213
    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/CameraTest;->setCameraState(I)V

    .line 214
    return-void

    .line 202
    :cond_2
    :goto_0
    const-string v1, "startPreview() return"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 203
    return-void
.end method

.method private stopPreview()V
    .locals 2

    .line 217
    iget-object v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraDevice:Landroid/hardware/Camera;

    if-eqz v0, :cond_0

    iget v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraState:I

    if-eqz v0, :cond_0

    .line 218
    const-string v0, "CameraTest"

    const-string v1, "stopPreview"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 219
    iget-object v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraDevice:Landroid/hardware/Camera;

    invoke-virtual {v0}, Landroid/hardware/Camera;->stopPreview()V

    .line 221
    :cond_0
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/CameraTest;->setCameraState(I)V

    .line 222
    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 5
    .param p1, "icicle"    # Landroid/os/Bundle;

    .line 87
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 88
    const-string v0, "CameraTest"

    const-string v1, "[onCreate]"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 89
    invoke-virtual {p0}, Lcom/mediatek/engineermode/CameraTest;->getIntent()Landroid/content/Intent;

    move-result-object v1

    const-string v2, "facingfront"

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v1

    .line 90
    .local v1, "facingFront":Z
    invoke-static {v1}, Lcom/mediatek/engineermode/CameraTest;->getCameraID(Z)I

    move-result v2

    iput v2, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraId:I

    .line 91
    new-instance v2, Landroid/view/SurfaceView;

    invoke-direct {v2, p0}, Landroid/view/SurfaceView;-><init>(Landroid/content/Context;)V

    .line 92
    .local v2, "surfaceView":Landroid/view/SurfaceView;
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/CameraTest;->setContentView(Landroid/view/View;)V

    .line 93
    invoke-virtual {v2}, Landroid/view/SurfaceView;->getHolder()Landroid/view/SurfaceHolder;

    move-result-object v3

    .line 94
    .local v3, "holder":Landroid/view/SurfaceHolder;
    invoke-interface {v3, p0}, Landroid/view/SurfaceHolder;->addCallback(Landroid/view/SurfaceHolder$Callback;)V

    .line 95
    const/4 v4, 0x3

    invoke-interface {v3, v4}, Landroid/view/SurfaceHolder;->setType(I)V

    .line 96
    const-string v4, "[onCreate] Finished"

    invoke-static {v0, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 97
    return-void
.end method

.method protected onPause()V
    .locals 2

    .line 113
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    .line 114
    const-string v0, "CameraTest"

    const-string v1, "onPause()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 115
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/CameraTest;->mPausing:Z

    .line 116
    invoke-direct {p0}, Lcom/mediatek/engineermode/CameraTest;->stopPreview()V

    .line 117
    invoke-direct {p0}, Lcom/mediatek/engineermode/CameraTest;->closeCamera()V

    .line 118
    invoke-virtual {p0}, Lcom/mediatek/engineermode/CameraTest;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/16 v1, 0x80

    invoke-virtual {v0, v1}, Landroid/view/Window;->clearFlags(I)V

    .line 120
    return-void
.end method

.method protected onResume()V
    .locals 2

    .line 101
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 102
    const-string v0, "CameraTest"

    const-string v1, "onResume()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 103
    invoke-virtual {p0}, Lcom/mediatek/engineermode/CameraTest;->getWindow()Landroid/view/Window;

    move-result-object v0

    const/16 v1, 0x80

    invoke-virtual {v0, v1}, Landroid/view/Window;->addFlags(I)V

    .line 104
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/CameraTest;->mPausing:Z

    .line 105
    iget v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraId:I

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/CameraTest;->openCamera(I)Landroid/hardware/Camera;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraDevice:Landroid/hardware/Camera;

    .line 106
    if-eqz v0, :cond_0

    .line 107
    invoke-direct {p0}, Lcom/mediatek/engineermode/CameraTest;->startPreview()V

    .line 109
    :cond_0
    return-void
.end method

.method public surfaceChanged(Landroid/view/SurfaceHolder;III)V
    .locals 2
    .param p1, "holder"    # Landroid/view/SurfaceHolder;
    .param p2, "format"    # I
    .param p3, "width"    # I
    .param p4, "height"    # I

    .line 129
    if-eqz p1, :cond_2

    invoke-interface {p1}, Landroid/view/SurfaceHolder;->getSurface()Landroid/view/Surface;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraDevice:Landroid/hardware/Camera;

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/mediatek/engineermode/CameraTest;->mPausing:Z

    if-nez v0, :cond_2

    .line 130
    invoke-virtual {p0}, Lcom/mediatek/engineermode/CameraTest;->isFinishing()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 134
    :cond_0
    iput-object p1, p0, Lcom/mediatek/engineermode/CameraTest;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    .line 135
    iget v0, p0, Lcom/mediatek/engineermode/CameraTest;->mCameraState:I

    if-nez v0, :cond_1

    .line 136
    invoke-direct {p0}, Lcom/mediatek/engineermode/CameraTest;->startPreview()V

    .line 138
    :cond_1
    return-void

    .line 131
    :cond_2
    :goto_0
    const-string v0, "CameraTest"

    const-string v1, "holder.getSurface() == null"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 132
    return-void
.end method

.method public surfaceCreated(Landroid/view/SurfaceHolder;)V
    .locals 2
    .param p1, "holder"    # Landroid/view/SurfaceHolder;

    .line 124
    const-string v0, "CameraTest"

    const-string v1, "surfaceCreated."

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 125
    return-void
.end method

.method public surfaceDestroyed(Landroid/view/SurfaceHolder;)V
    .locals 2
    .param p1, "holder"    # Landroid/view/SurfaceHolder;

    .line 142
    const-string v0, "CameraTest"

    const-string v1, "surfaceDestroyed()"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    invoke-direct {p0}, Lcom/mediatek/engineermode/CameraTest;->stopPreview()V

    .line 144
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/CameraTest;->mSurfaceHolder:Landroid/view/SurfaceHolder;

    .line 145
    return-void
.end method
