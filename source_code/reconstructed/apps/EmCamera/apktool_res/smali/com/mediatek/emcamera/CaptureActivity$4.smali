.class Lcom/mediatek/emcamera/CaptureActivity$4;
.super Landroid/hardware/camera2/CameraCaptureSession$StateCallback;
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

    .line 226
    iput-object p1, p0, Lcom/mediatek/emcamera/CaptureActivity$4;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-direct {p0}, Landroid/hardware/camera2/CameraCaptureSession$StateCallback;-><init>()V

    return-void
.end method


# virtual methods
.method public onConfigureFailed(Landroid/hardware/camera2/CameraCaptureSession;)V
    .locals 2
    .param p1, "cameraCaptureSession"    # Landroid/hardware/camera2/CameraCaptureSession;

    .line 255
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$4;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    const-string v1, "EmCamera Configure Failed"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Utils;->showToast(Landroid/app/Activity;Ljava/lang/String;)V

    .line 256
    return-void
.end method

.method public onConfigured(Landroid/hardware/camera2/CameraCaptureSession;)V
    .locals 4
    .param p1, "cameraCaptureSession"    # Landroid/hardware/camera2/CameraCaptureSession;

    .line 231
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$4;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    iget-object v0, v0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraDevice:Landroid/hardware/camera2/CameraDevice;

    if-nez v0, :cond_0

    .line 232
    return-void

    .line 236
    :cond_0
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$4;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0, p1}, Lcom/mediatek/emcamera/CaptureActivity;->access$602(Lcom/mediatek/emcamera/CaptureActivity;Landroid/hardware/camera2/CameraCaptureSession;)Landroid/hardware/camera2/CameraCaptureSession;

    .line 239
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$4;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$700(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/hardware/camera2/CaptureRequest$Builder;

    move-result-object v0

    sget-object v1, Landroid/hardware/camera2/CaptureRequest;->CONTROL_AF_MODE:Landroid/hardware/camera2/CaptureRequest$Key;

    const/4 v2, 0x4

    .line 240
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    .line 239
    invoke-virtual {v0, v1, v2}, Landroid/hardware/camera2/CaptureRequest$Builder;->set(Landroid/hardware/camera2/CaptureRequest$Key;Ljava/lang/Object;)V

    .line 243
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$4;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$700(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/hardware/camera2/CaptureRequest$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/hardware/camera2/CaptureRequest$Builder;->build()Landroid/hardware/camera2/CaptureRequest;

    move-result-object v0

    .line 244
    .local v0, "previewRequest":Landroid/hardware/camera2/CaptureRequest;
    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity$4;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v1}, Lcom/mediatek/emcamera/CaptureActivity;->access$600(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/hardware/camera2/CameraCaptureSession;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/emcamera/CaptureActivity$4;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    .line 245
    invoke-static {v2}, Lcom/mediatek/emcamera/CaptureActivity;->access$800(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/emcamera/CaptureActivity$4;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v3}, Lcom/mediatek/emcamera/CaptureActivity;->access$900(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/os/Handler;

    move-result-object v3

    .line 244
    invoke-virtual {v1, v0, v2, v3}, Landroid/hardware/camera2/CameraCaptureSession;->setRepeatingRequest(Landroid/hardware/camera2/CaptureRequest;Landroid/hardware/camera2/CameraCaptureSession$CaptureCallback;Landroid/os/Handler;)I
    :try_end_0
    .catch Landroid/hardware/camera2/CameraAccessException; {:try_start_0 .. :try_end_0} :catch_0

    .line 249
    nop

    .end local v0    # "previewRequest":Landroid/hardware/camera2/CaptureRequest;
    goto :goto_0

    .line 247
    :catch_0
    move-exception v0

    .line 248
    .local v0, "e":Landroid/hardware/camera2/CameraAccessException;
    invoke-virtual {v0}, Landroid/hardware/camera2/CameraAccessException;->printStackTrace()V

    .line 250
    .end local v0    # "e":Landroid/hardware/camera2/CameraAccessException;
    :goto_0
    return-void
.end method
