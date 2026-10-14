.class Lcom/mediatek/emcamera/CaptureActivity$3;
.super Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;
.source "CaptureActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/emcamera/CaptureActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/emcamera/CaptureActivity;


# direct methods
.method constructor <init>(Lcom/mediatek/emcamera/CaptureActivity;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/emcamera/CaptureActivity;

    .line 208
    iput-object p1, p0, Lcom/mediatek/emcamera/CaptureActivity$3;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-direct {p0}, Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;-><init>()V

    return-void
.end method


# virtual methods
.method public onCaptureCompleted(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/TotalCaptureResult;)V
    .locals 0
    .param p1, "session"    # Landroid/hardware/camera2/CameraCaptureSession;
    .param p2, "request"    # Landroid/hardware/camera2/CaptureRequest;
    .param p3, "result"    # Landroid/hardware/camera2/TotalCaptureResult;

    .line 221
    return-void
.end method

.method public onCaptureProgressed(Landroid/hardware/camera2/CameraCaptureSession;Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CaptureResult;)V
    .locals 2
    .param p1, "session"    # Landroid/hardware/camera2/CameraCaptureSession;
    .param p2, "request"    # Landroid/hardware/camera2/CaptureRequest;
    .param p3, "partialResult"    # Landroid/hardware/camera2/CaptureResult;

    .line 214
    invoke-static {}, Lcom/mediatek/emcamera/CaptureActivity;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Preview onCaptureProgressed"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 215
    return-void
.end method
