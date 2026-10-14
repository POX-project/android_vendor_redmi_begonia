.class public Lcom/mediatek/emcamera/CaptureActivity;
.super Lcom/mediatek/emcamera/ActivityBase;
.source "CaptureActivity.java"

# interfaces
.implements Landroid/view/View$OnTouchListener;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/emcamera/CaptureActivity$GisCaliHander;,
        Lcom/mediatek/emcamera/CaptureActivity$MainHandler;
    }
.end annotation


# static fields
.field static final synthetic $assertionsDisabled:Z = false

.field private static final APP_MODE_NAME_MTK_ENG:Ljava/lang/String; = "MtkEng"

.field private static final MSG_ID_CAMERA_CLOSED:I = 0x1

.field private static final MSG_ID_CAMERA_OPENED:I = 0x0

.field private static final PROPERTY_KEY_CLIENT_APPMODE:Ljava/lang/String; = "vendor.client.em.appmode"

.field private static final PROPERTY_SENSOR_MODE:Ljava/lang/String; = "vendor.debug.cameng.force_sensormode"

.field private static final TAG:Ljava/lang/String;


# instance fields
.field private mBackgroundHandler:Landroid/os/Handler;

.field private mBackgroundThread:Landroid/os/HandlerThread;

.field private mCameraId:Ljava/lang/String;

.field private mCameraName:Ljava/lang/String;

.field private mCameraOpenCloseLock:Ljava/util/concurrent/Semaphore;

.field private mCaptureCallback:Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;

.field private mCaptureSensorMode:I

.field private mCaptureSession:Landroid/hardware/camera2/CameraCaptureSession;

.field mConfigStateCallback:Landroid/hardware/camera2/CameraCaptureSession$StateCallback;

.field private mGisCaliTask:Lcom/mediatek/emcamera/GisCaliTask;

.field private mMainHandler:Lcom/mediatek/emcamera/CaptureActivity$MainHandler;

.field private mPreviewRequestBuilder:Landroid/hardware/camera2/CaptureRequest$Builder;

.field private mPreviewSize:Landroid/util/Size;

.field private mShutterButton:Landroid/widget/Button;

.field private final mStateCallback:Landroid/hardware/camera2/CameraDevice$StateCallback;

.field private final mSurfaceTextureListener:Landroid/view/TextureView$SurfaceTextureListener;

.field private mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 83
    nop

    .line 85
    const-class v0, Lcom/mediatek/emcamera/CaptureActivity;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/emcamera/CaptureActivity;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 83
    invoke-direct {p0}, Lcom/mediatek/emcamera/ActivityBase;-><init>()V

    .line 96
    new-instance v0, Lcom/mediatek/emcamera/CaptureActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/emcamera/CaptureActivity$1;-><init>(Lcom/mediatek/emcamera/CaptureActivity;)V

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mSurfaceTextureListener:Landroid/view/TextureView$SurfaceTextureListener;

    .line 150
    new-instance v0, Lcom/mediatek/emcamera/CaptureActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/emcamera/CaptureActivity$2;-><init>(Lcom/mediatek/emcamera/CaptureActivity;)V

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mStateCallback:Landroid/hardware/camera2/CameraDevice$StateCallback;

    .line 202
    new-instance v0, Ljava/util/concurrent/Semaphore;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/Semaphore;-><init>(I)V

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraOpenCloseLock:Ljava/util/concurrent/Semaphore;

    .line 207
    new-instance v0, Lcom/mediatek/emcamera/CaptureActivity$3;

    invoke-direct {v0, p0}, Lcom/mediatek/emcamera/CaptureActivity$3;-><init>(Lcom/mediatek/emcamera/CaptureActivity;)V

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCaptureCallback:Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;

    .line 225
    new-instance v0, Lcom/mediatek/emcamera/CaptureActivity$4;

    invoke-direct {v0, p0}, Lcom/mediatek/emcamera/CaptureActivity$4;-><init>(Lcom/mediatek/emcamera/CaptureActivity;)V

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mConfigStateCallback:Landroid/hardware/camera2/CameraCaptureSession$StateCallback;

    return-void
.end method

.method static synthetic access$000()Ljava/lang/String;
    .locals 1

    .line 83
    sget-object v0, Lcom/mediatek/emcamera/CaptureActivity;->TAG:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/emcamera/CaptureActivity;II)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;
    .param p1, "x1"    # I
    .param p2, "x2"    # I

    .line 83
    invoke-direct {p0, p1, p2}, Lcom/mediatek/emcamera/CaptureActivity;->openCamera(II)V

    return-void
.end method

.method static synthetic access$1000(Lcom/mediatek/emcamera/CaptureActivity;)Lcom/mediatek/emcamera/GisCaliTask;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mGisCaliTask:Lcom/mediatek/emcamera/GisCaliTask;

    return-object v0
.end method

.method static synthetic access$1100(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/widget/Button;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mShutterButton:Landroid/widget/Button;

    return-object v0
.end method

.method static synthetic access$1400(Lcom/mediatek/emcamera/CaptureActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 83
    invoke-direct {p0}, Lcom/mediatek/emcamera/CaptureActivity;->closeCamera()V

    return-void
.end method

.method static synthetic access$1500(Lcom/mediatek/emcamera/CaptureActivity;)Lcom/mediatek/emcamera/AutoFitTextureView;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;

    return-object v0
.end method

.method static synthetic access$200(Lcom/mediatek/emcamera/CaptureActivity;II)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;
    .param p1, "x1"    # I
    .param p2, "x2"    # I

    .line 83
    invoke-direct {p0, p1, p2}, Lcom/mediatek/emcamera/CaptureActivity;->configureTransform(II)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/emcamera/CaptureActivity;)Ljava/util/concurrent/Semaphore;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraOpenCloseLock:Ljava/util/concurrent/Semaphore;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/emcamera/CaptureActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 83
    invoke-direct {p0}, Lcom/mediatek/emcamera/CaptureActivity;->createCameraPreviewSession()V

    return-void
.end method

.method static synthetic access$500(Lcom/mediatek/emcamera/CaptureActivity;)Lcom/mediatek/emcamera/CaptureActivity$MainHandler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mMainHandler:Lcom/mediatek/emcamera/CaptureActivity$MainHandler;

    return-object v0
.end method

.method static synthetic access$600(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/hardware/camera2/CameraCaptureSession;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCaptureSession:Landroid/hardware/camera2/CameraCaptureSession;

    return-object v0
.end method

.method static synthetic access$602(Lcom/mediatek/emcamera/CaptureActivity;Landroid/hardware/camera2/CameraCaptureSession;)Landroid/hardware/camera2/CameraCaptureSession;
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;
    .param p1, "x1"    # Landroid/hardware/camera2/CameraCaptureSession;

    .line 83
    iput-object p1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCaptureSession:Landroid/hardware/camera2/CameraCaptureSession;

    return-object p1
.end method

.method static synthetic access$700(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/hardware/camera2/CaptureRequest$Builder;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewRequestBuilder:Landroid/hardware/camera2/CaptureRequest$Builder;

    return-object v0
.end method

.method static synthetic access$800(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCaptureCallback:Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;

    return-object v0
.end method

.method static synthetic access$900(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/os/Handler;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 83
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mBackgroundHandler:Landroid/os/Handler;

    return-object v0
.end method

.method private cameraGisCalProc()V
    .locals 4

    .line 501
    sget-object v0, Lcom/mediatek/emcamera/CaptureActivity;->TAG:Ljava/lang/String;

    const-string v1, "cameraGisCalProc"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 502
    new-instance v0, Lcom/mediatek/emcamera/GisCaliTask;

    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraName:Ljava/lang/String;

    new-instance v2, Lcom/mediatek/emcamera/CaptureActivity$GisCaliHander;

    const/4 v3, 0x0

    invoke-direct {v2, p0, v3}, Lcom/mediatek/emcamera/CaptureActivity$GisCaliHander;-><init>(Lcom/mediatek/emcamera/CaptureActivity;Lcom/mediatek/emcamera/CaptureActivity$1;)V

    invoke-direct {v0, p0, v1, v2}, Lcom/mediatek/emcamera/GisCaliTask;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/os/Handler;)V

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mGisCaliTask:Lcom/mediatek/emcamera/GisCaliTask;

    .line 503
    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mediatek/emcamera/GisCaliTask;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    .line 504
    return-void
.end method

.method private closeCamera()V
    .locals 3

    .line 388
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraOpenCloseLock:Ljava/util/concurrent/Semaphore;

    invoke-virtual {v0}, Ljava/util/concurrent/Semaphore;->acquire()V

    .line 389
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCaptureSession:Landroid/hardware/camera2/CameraCaptureSession;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 390
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCaptureSession:Landroid/hardware/camera2/CameraCaptureSession;

    invoke-virtual {v0}, Landroid/hardware/camera2/CameraCaptureSession;->close()V

    .line 391
    iput-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCaptureSession:Landroid/hardware/camera2/CameraCaptureSession;

    .line 393
    :cond_0
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraDevice:Landroid/hardware/camera2/CameraDevice;

    if-eqz v0, :cond_1

    .line 394
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraDevice:Landroid/hardware/camera2/CameraDevice;

    invoke-virtual {v0}, Landroid/hardware/camera2/CameraDevice;->close()V

    .line 395
    iput-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraDevice:Landroid/hardware/camera2/CameraDevice;
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 400
    :cond_1
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraOpenCloseLock:Ljava/util/concurrent/Semaphore;

    invoke-virtual {v0}, Ljava/util/concurrent/Semaphore;->release()V

    .line 401
    nop

    .line 402
    return-void

    .line 400
    :catchall_0
    move-exception v0

    goto :goto_0

    .line 397
    :catch_0
    move-exception v0

    .line 398
    .local v0, "e":Ljava/lang/InterruptedException;
    :try_start_1
    new-instance v1, Ljava/lang/RuntimeException;

    const-string v2, "Interrupted while trying to lock camera closing."

    invoke-direct {v1, v2, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    .end local p0    # "this":Lcom/mediatek/emcamera/CaptureActivity;
    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 400
    .end local v0    # "e":Ljava/lang/InterruptedException;
    .restart local p0    # "this":Lcom/mediatek/emcamera/CaptureActivity;
    :goto_0
    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraOpenCloseLock:Ljava/util/concurrent/Semaphore;

    invoke-virtual {v1}, Ljava/util/concurrent/Semaphore;->release()V

    .line 401
    throw v0
.end method

.method private configureTransform(II)V
    .locals 9
    .param p1, "viewWidth"    # I
    .param p2, "viewHeight"    # I

    .line 462
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    if-nez v0, :cond_0

    goto/16 :goto_2

    .line 465
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/emcamera/CaptureActivity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v0

    invoke-interface {v0}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Display;->getRotation()I

    move-result v0

    .line 466
    .local v0, "rotation":I
    new-instance v1, Landroid/graphics/Matrix;

    invoke-direct {v1}, Landroid/graphics/Matrix;-><init>()V

    .line 467
    .local v1, "matrix":Landroid/graphics/Matrix;
    new-instance v2, Landroid/graphics/RectF;

    int-to-float v3, p1

    int-to-float v4, p2

    const/4 v5, 0x0

    invoke-direct {v2, v5, v5, v3, v4}, Landroid/graphics/RectF;-><init>(FFFF)V

    .line 468
    .local v2, "viewRect":Landroid/graphics/RectF;
    new-instance v3, Landroid/graphics/RectF;

    iget-object v4, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    invoke-virtual {v4}, Landroid/util/Size;->getHeight()I

    move-result v4

    int-to-float v4, v4

    iget-object v6, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    invoke-virtual {v6}, Landroid/util/Size;->getWidth()I

    move-result v6

    int-to-float v6, v6

    invoke-direct {v3, v5, v5, v4, v6}, Landroid/graphics/RectF;-><init>(FFFF)V

    .line 469
    .local v3, "bufferRect":Landroid/graphics/RectF;
    sget-object v4, Lcom/mediatek/emcamera/CaptureActivity;->TAG:Ljava/lang/String;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "viewWidth="

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ",viewHeight="

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ",bufferWidth="

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    .line 470
    invoke-virtual {v6}, Landroid/util/Size;->getWidth()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, ",bufferHeight="

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    invoke-virtual {v6}, Landroid/util/Size;->getHeight()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    .line 469
    invoke-static {v4, v5}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 471
    invoke-virtual {v2}, Landroid/graphics/RectF;->centerX()F

    move-result v4

    .line 472
    .local v4, "centerX":F
    invoke-virtual {v2}, Landroid/graphics/RectF;->centerY()F

    move-result v5

    .line 473
    .local v5, "centerY":F
    const/4 v6, 0x1

    if-eq v6, v0, :cond_2

    const/4 v6, 0x3

    if-ne v6, v0, :cond_1

    goto :goto_0

    .line 481
    :cond_1
    const/4 v6, 0x2

    if-ne v6, v0, :cond_3

    .line 482
    const/high16 v6, 0x43340000    # 180.0f

    invoke-virtual {v1, v6, v4, v5}, Landroid/graphics/Matrix;->postRotate(FFF)Z

    goto :goto_1

    .line 474
    :cond_2
    :goto_0
    invoke-virtual {v3}, Landroid/graphics/RectF;->centerX()F

    move-result v6

    sub-float v6, v4, v6

    invoke-virtual {v3}, Landroid/graphics/RectF;->centerY()F

    move-result v7

    sub-float v7, v5, v7

    invoke-virtual {v3, v6, v7}, Landroid/graphics/RectF;->offset(FF)V

    .line 475
    sget-object v6, Landroid/graphics/Matrix$ScaleToFit;->FILL:Landroid/graphics/Matrix$ScaleToFit;

    invoke-virtual {v1, v2, v3, v6}, Landroid/graphics/Matrix;->setRectToRect(Landroid/graphics/RectF;Landroid/graphics/RectF;Landroid/graphics/Matrix$ScaleToFit;)Z

    .line 476
    int-to-float v6, p2

    iget-object v7, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    .line 477
    invoke-virtual {v7}, Landroid/util/Size;->getHeight()I

    move-result v7

    int-to-float v7, v7

    div-float/2addr v6, v7

    int-to-float v7, p1

    iget-object v8, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    .line 478
    invoke-virtual {v8}, Landroid/util/Size;->getWidth()I

    move-result v8

    int-to-float v8, v8

    div-float/2addr v7, v8

    .line 476
    invoke-static {v6, v7}, Ljava/lang/Math;->max(FF)F

    move-result v6

    .line 479
    .local v6, "scale":F
    invoke-virtual {v1, v6, v6, v4, v5}, Landroid/graphics/Matrix;->postScale(FFFF)Z

    .line 480
    add-int/lit8 v7, v0, -0x2

    mul-int/lit8 v7, v7, 0x5a

    int-to-float v7, v7

    invoke-virtual {v1, v7, v4, v5}, Landroid/graphics/Matrix;->postRotate(FFF)Z

    .line 481
    .end local v6    # "scale":F
    :cond_3
    nop

    .line 484
    :goto_1
    iget-object v6, p0, Lcom/mediatek/emcamera/CaptureActivity;->mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;

    invoke-virtual {v6, v1}, Lcom/mediatek/emcamera/AutoFitTextureView;->setTransform(Landroid/graphics/Matrix;)V

    .line 485
    return-void

    .line 463
    .end local v0    # "rotation":I
    .end local v1    # "matrix":Landroid/graphics/Matrix;
    .end local v2    # "viewRect":Landroid/graphics/RectF;
    .end local v3    # "bufferRect":Landroid/graphics/RectF;
    .end local v4    # "centerX":F
    .end local v5    # "centerY":F
    :cond_4
    :goto_2
    return-void
.end method

.method private createCameraPreviewSession()V
    .locals 6

    .line 434
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;

    invoke-virtual {v0}, Lcom/mediatek/emcamera/AutoFitTextureView;->getSurfaceTexture()Landroid/graphics/SurfaceTexture;

    move-result-object v0

    .line 435
    .local v0, "texture":Landroid/graphics/SurfaceTexture;
    nop

    .line 438
    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    invoke-virtual {v1}, Landroid/util/Size;->getWidth()I

    move-result v1

    iget-object v2, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    invoke-virtual {v2}, Landroid/util/Size;->getHeight()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/SurfaceTexture;->setDefaultBufferSize(II)V

    .line 441
    new-instance v1, Landroid/view/Surface;

    invoke-direct {v1, v0}, Landroid/view/Surface;-><init>(Landroid/graphics/SurfaceTexture;)V

    .line 444
    .local v1, "surface":Landroid/view/Surface;
    iget-object v2, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraDevice:Landroid/hardware/camera2/CameraDevice;

    .line 445
    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Landroid/hardware/camera2/CameraDevice;->createCaptureRequest(I)Landroid/hardware/camera2/CaptureRequest$Builder;

    move-result-object v2

    iput-object v2, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewRequestBuilder:Landroid/hardware/camera2/CaptureRequest$Builder;

    .line 446
    invoke-virtual {v2, v1}, Landroid/hardware/camera2/CaptureRequest$Builder;->addTarget(Landroid/view/Surface;)V

    .line 448
    iget-object v2, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraDevice:Landroid/hardware/camera2/CameraDevice;

    new-array v3, v3, [Landroid/view/Surface;

    const/4 v4, 0x0

    aput-object v1, v3, v4

    invoke-static {v3}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v3

    iget-object v4, p0, Lcom/mediatek/emcamera/CaptureActivity;->mConfigStateCallback:Landroid/hardware/camera2/CameraCaptureSession$StateCallback;

    const/4 v5, 0x0

    invoke-virtual {v2, v3, v4, v5}, Landroid/hardware/camera2/CameraDevice;->createCaptureSession(Ljava/util/List;Landroid/hardware/camera2/CameraCaptureSession$StateCallback;Landroid/os/Handler;)V
    :try_end_0
    .catch Landroid/hardware/camera2/CameraAccessException; {:try_start_0 .. :try_end_0} :catch_0

    .line 451
    .end local v0    # "texture":Landroid/graphics/SurfaceTexture;
    .end local v1    # "surface":Landroid/view/Surface;
    goto :goto_0

    .line 449
    :catch_0
    move-exception v0

    .line 450
    .local v0, "e":Landroid/hardware/camera2/CameraAccessException;
    invoke-virtual {v0}, Landroid/hardware/camera2/CameraAccessException;->printStackTrace()V

    .line 452
    .end local v0    # "e":Landroid/hardware/camera2/CameraAccessException;
    :goto_0
    return-void
.end method

.method private getSettingsFromPref(Ljava/lang/String;)V
    .locals 3
    .param p1, "key"    # Ljava/lang/String;

    .line 296
    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0}, Lcom/mediatek/emcamera/CaptureActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 298
    .local v0, "preferences":Landroid/content/SharedPreferences;
    const v1, 0x7f0d0032

    invoke-virtual {p0, v1}, Lcom/mediatek/emcamera/CaptureActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    iput v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCaptureSensorMode:I

    .line 299
    const v1, 0x7f0d0031

    invoke-virtual {p0, v1}, Lcom/mediatek/emcamera/CaptureActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "0"

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraId:Ljava/lang/String;

    .line 300
    const v1, 0x7f0d0033

    invoke-virtual {p0, v1}, Lcom/mediatek/emcamera/CaptureActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    const-string v2, "Main"

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraName:Ljava/lang/String;

    .line 301
    return-void
.end method

.method private openCamera(II)V
    .locals 5
    .param p1, "width"    # I
    .param p2, "height"    # I

    .line 361
    sget-object v0, Lcom/mediatek/emcamera/CaptureActivity;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "openCamera width="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",height="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 362
    invoke-direct {p0, p1, p2}, Lcom/mediatek/emcamera/CaptureActivity;->setUpCameraOutputs(II)V

    .line 363
    invoke-direct {p0, p1, p2}, Lcom/mediatek/emcamera/CaptureActivity;->configureTransform(II)V

    .line 364
    const-string v0, "camera"

    invoke-virtual {p0, v0}, Lcom/mediatek/emcamera/CaptureActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/hardware/camera2/CameraManager;

    .line 366
    .local v0, "manager":Landroid/hardware/camera2/CameraManager;
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraOpenCloseLock:Ljava/util/concurrent/Semaphore;

    const-wide/16 v2, 0x9c4

    sget-object v4, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {v1, v2, v3, v4}, Ljava/util/concurrent/Semaphore;->tryAcquire(JLjava/util/concurrent/TimeUnit;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 367
    const-string v1, "Time out waiting to lock camera opening."

    invoke-static {p0, v1}, Lcom/mediatek/emcamera/Utils;->showToast(Landroid/app/Activity;Ljava/lang/String;)V

    .line 369
    return-void

    .line 371
    :cond_0
    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraId:Ljava/lang/String;

    iget-object v2, p0, Lcom/mediatek/emcamera/CaptureActivity;->mStateCallback:Landroid/hardware/camera2/CameraDevice$StateCallback;

    iget-object v3, p0, Lcom/mediatek/emcamera/CaptureActivity;->mBackgroundHandler:Landroid/os/Handler;

    invoke-virtual {v0, v1, v2, v3}, Landroid/hardware/camera2/CameraManager;->openCamera(Ljava/lang/String;Landroid/hardware/camera2/CameraDevice$StateCallback;Landroid/os/Handler;)V
    :try_end_0
    .catch Landroid/hardware/camera2/CameraAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 376
    :catch_0
    move-exception v1

    .line 377
    .local v1, "e":Ljava/lang/InterruptedException;
    const-string v2, "Interrupted while trying to lock camera opening"

    invoke-static {p0, v2}, Lcom/mediatek/emcamera/Utils;->showToast(Landroid/app/Activity;Ljava/lang/String;)V

    .line 379
    invoke-virtual {v1}, Ljava/lang/InterruptedException;->printStackTrace()V

    goto :goto_1

    .line 372
    .end local v1    # "e":Ljava/lang/InterruptedException;
    :catch_1
    move-exception v1

    .line 373
    .local v1, "e":Landroid/hardware/camera2/CameraAccessException;
    const-string v2, "Fail to open camera:CameraAccessException"

    invoke-static {p0, v2}, Lcom/mediatek/emcamera/Utils;->showToast(Landroid/app/Activity;Ljava/lang/String;)V

    .line 375
    invoke-virtual {v1}, Landroid/hardware/camera2/CameraAccessException;->printStackTrace()V

    .line 380
    .end local v1    # "e":Landroid/hardware/camera2/CameraAccessException;
    :goto_0
    nop

    .line 381
    :goto_1
    return-void
.end method

.method private setUpCameraOutputs(II)V
    .locals 4
    .param p1, "width"    # I
    .param p2, "height"    # I

    .line 344
    new-instance v0, Landroid/util/Size;

    const/16 v1, 0x780

    const/16 v2, 0x438

    invoke-direct {v0, v1, v2}, Landroid/util/Size;-><init>(II)V

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    .line 347
    invoke-virtual {p0}, Lcom/mediatek/emcamera/CaptureActivity;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v0

    iget v0, v0, Landroid/content/res/Configuration;->orientation:I

    .line 348
    .local v0, "orientation":I
    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 349
    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;

    iget-object v2, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    .line 350
    invoke-virtual {v2}, Landroid/util/Size;->getWidth()I

    move-result v2

    iget-object v3, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    invoke-virtual {v3}, Landroid/util/Size;->getHeight()I

    move-result v3

    .line 349
    invoke-virtual {v1, v2, v3}, Lcom/mediatek/emcamera/AutoFitTextureView;->setAspectRatio(II)V

    goto :goto_0

    .line 352
    :cond_0
    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;

    iget-object v2, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    .line 353
    invoke-virtual {v2}, Landroid/util/Size;->getHeight()I

    move-result v2

    iget-object v3, p0, Lcom/mediatek/emcamera/CaptureActivity;->mPreviewSize:Landroid/util/Size;

    invoke-virtual {v3}, Landroid/util/Size;->getWidth()I

    move-result v3

    .line 352
    invoke-virtual {v1, v2, v3}, Lcom/mediatek/emcamera/AutoFitTextureView;->setAspectRatio(II)V

    .line 355
    :goto_0
    return-void
.end method

.method private startBackgroundThread()V
    .locals 2

    .line 408
    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "CameraBackground"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mBackgroundThread:Landroid/os/HandlerThread;

    .line 409
    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    .line 410
    new-instance v0, Landroid/os/Handler;

    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mBackgroundThread:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mBackgroundHandler:Landroid/os/Handler;

    .line 411
    return-void
.end method

.method private stopBackgroundThread()V
    .locals 1

    .line 417
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mBackgroundThread:Landroid/os/HandlerThread;

    if-eqz v0, :cond_0

    .line 418
    invoke-virtual {v0}, Landroid/os/HandlerThread;->quitSafely()Z

    .line 420
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mBackgroundThread:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->join()V

    .line 421
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mBackgroundThread:Landroid/os/HandlerThread;

    .line 422
    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mBackgroundHandler:Landroid/os/Handler;
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    .line 425
    goto :goto_0

    .line 423
    :catch_0
    move-exception v0

    .line 424
    .local v0, "e":Ljava/lang/InterruptedException;
    invoke-virtual {v0}, Ljava/lang/InterruptedException;->printStackTrace()V

    .line 427
    .end local v0    # "e":Ljava/lang/InterruptedException;
    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public doOnResume()V
    .locals 2

    .line 305
    invoke-direct {p0}, Lcom/mediatek/emcamera/CaptureActivity;->startBackgroundThread()V

    .line 307
    const-string v0, "vendor.client.em.appmode"

    const-string v1, "MtkEng"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Utils;->setProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 308
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCaptureSensorMode:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "vendor.debug.cameng.force_sensormode"

    invoke-static {v1, v0}, Lcom/mediatek/emcamera/Utils;->setProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 315
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;

    invoke-virtual {v0}, Lcom/mediatek/emcamera/AutoFitTextureView;->isAvailable()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 316
    sget-object v0, Lcom/mediatek/emcamera/CaptureActivity;->TAG:Ljava/lang/String;

    const-string v1, "mTextureView.isAvailable()"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 317
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;

    invoke-virtual {v0}, Lcom/mediatek/emcamera/AutoFitTextureView;->getWidth()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;

    invoke-virtual {v1}, Lcom/mediatek/emcamera/AutoFitTextureView;->getHeight()I

    move-result v1

    invoke-direct {p0, v0, v1}, Lcom/mediatek/emcamera/CaptureActivity;->openCamera(II)V

    goto :goto_0

    .line 319
    :cond_0
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;

    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity;->mSurfaceTextureListener:Landroid/view/TextureView$SurfaceTextureListener;

    invoke-virtual {v0, v1}, Lcom/mediatek/emcamera/AutoFitTextureView;->setSurfaceTextureListener(Landroid/view/TextureView$SurfaceTextureListener;)V

    .line 321
    :goto_0
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "icicle"    # Landroid/os/Bundle;

    .line 284
    invoke-super {p0, p1}, Lcom/mediatek/emcamera/ActivityBase;->onCreate(Landroid/os/Bundle;)V

    .line 285
    sget-object v0, Lcom/mediatek/emcamera/CaptureActivity;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[onCreate] Bundle = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 286
    const v0, 0x7f0a001d

    invoke-virtual {p0, v0}, Lcom/mediatek/emcamera/CaptureActivity;->setContentView(I)V

    .line 287
    const v0, 0x7f080084

    invoke-virtual {p0, v0}, Lcom/mediatek/emcamera/CaptureActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mediatek/emcamera/AutoFitTextureView;

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mTextureView:Lcom/mediatek/emcamera/AutoFitTextureView;

    .line 288
    const v0, 0x7f080026

    invoke-virtual {p0, v0}, Lcom/mediatek/emcamera/CaptureActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mShutterButton:Landroid/widget/Button;

    .line 289
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 290
    const-string v0, "camera_inter_settings"

    invoke-direct {p0, v0}, Lcom/mediatek/emcamera/CaptureActivity;->getSettingsFromPref(Ljava/lang/String;)V

    .line 291
    new-instance v0, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;-><init>(Lcom/mediatek/emcamera/CaptureActivity;Lcom/mediatek/emcamera/CaptureActivity$1;)V

    iput-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mMainHandler:Lcom/mediatek/emcamera/CaptureActivity$MainHandler;

    .line 293
    return-void
.end method

.method public onPause()V
    .locals 2

    .line 325
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mGisCaliTask:Lcom/mediatek/emcamera/GisCaliTask;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mediatek/emcamera/GisCaliTask;->getStatus()Landroid/os/AsyncTask$Status;

    move-result-object v0

    sget-object v1, Landroid/os/AsyncTask$Status;->RUNNING:Landroid/os/AsyncTask$Status;

    if-ne v0, v1, :cond_0

    .line 326
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mGisCaliTask:Lcom/mediatek/emcamera/GisCaliTask;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mediatek/emcamera/GisCaliTask;->cancel(Z)Z

    .line 328
    :cond_0
    invoke-direct {p0}, Lcom/mediatek/emcamera/CaptureActivity;->closeCamera()V

    .line 329
    invoke-direct {p0}, Lcom/mediatek/emcamera/CaptureActivity;->stopBackgroundThread()V

    .line 331
    const-string v0, "vendor.client.em.appmode"

    const-string v1, ""

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Utils;->setProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 332
    const-string v0, "vendor.debug.cameng.force_sensormode"

    const-string v1, "-1"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Utils;->setProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 333
    invoke-super {p0}, Lcom/mediatek/emcamera/ActivityBase;->onPause()V

    .line 334
    return-void
.end method

.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 2
    .param p1, "v"    # Landroid/view/View;
    .param p2, "e"    # Landroid/view/MotionEvent;

    .line 489
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraDevice:Landroid/hardware/camera2/CameraDevice;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 490
    return v1

    .line 492
    :cond_0
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mShutterButton:Landroid/widget/Button;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 493
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity;->mShutterButton:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 494
    invoke-direct {p0}, Lcom/mediatek/emcamera/CaptureActivity;->cameraGisCalProc()V

    .line 496
    :cond_1
    const/4 v0, 0x1

    return v0
.end method
