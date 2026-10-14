.class Lcom/mediatek/emcamera/CaptureActivity$2;
.super Landroid/hardware/camera2/CameraDevice$StateCallback;
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

    .line 150
    iput-object p1, p0, Lcom/mediatek/emcamera/CaptureActivity$2;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-direct {p0}, Landroid/hardware/camera2/CameraDevice$StateCallback;-><init>()V

    return-void
.end method


# virtual methods
.method public onDisconnected(Landroid/hardware/camera2/CameraDevice;)V
    .locals 2
    .param p1, "cameraDevice"    # Landroid/hardware/camera2/CameraDevice;

    .line 164
    invoke-static {}, Lcom/mediatek/emcamera/CaptureActivity;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CameraDevice onDisconnected"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$2;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$300(Lcom/mediatek/emcamera/CaptureActivity;)Ljava/util/concurrent/Semaphore;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/Semaphore;->release()V

    .line 166
    invoke-virtual {p1}, Landroid/hardware/camera2/CameraDevice;->close()V

    .line 167
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$2;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraDevice:Landroid/hardware/camera2/CameraDevice;

    .line 168
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$2;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$500(Lcom/mediatek/emcamera/CaptureActivity;)Lcom/mediatek/emcamera/CaptureActivity$MainHandler;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->sendEmptyMessage(I)Z

    .line 169
    return-void
.end method

.method public onError(Landroid/hardware/camera2/CameraDevice;I)V
    .locals 2
    .param p1, "cameraDevice"    # Landroid/hardware/camera2/CameraDevice;
    .param p2, "error"    # I

    .line 173
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$2;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$300(Lcom/mediatek/emcamera/CaptureActivity;)Ljava/util/concurrent/Semaphore;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/Semaphore;->release()V

    .line 174
    invoke-virtual {p1}, Landroid/hardware/camera2/CameraDevice;->close()V

    .line 175
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$2;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraDevice:Landroid/hardware/camera2/CameraDevice;

    .line 176
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$2;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    const v1, 0x7f0d0034

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Utils;->showErrorAndFinish(Landroid/app/Activity;I)V

    .line 177
    return-void
.end method

.method public onOpened(Landroid/hardware/camera2/CameraDevice;)V
    .locals 2
    .param p1, "cameraDevice"    # Landroid/hardware/camera2/CameraDevice;

    .line 154
    invoke-static {}, Lcom/mediatek/emcamera/CaptureActivity;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "CameraDevice onOpened"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 156
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$2;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$300(Lcom/mediatek/emcamera/CaptureActivity;)Ljava/util/concurrent/Semaphore;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/concurrent/Semaphore;->release()V

    .line 157
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$2;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    iput-object p1, v0, Lcom/mediatek/emcamera/CaptureActivity;->mCameraDevice:Landroid/hardware/camera2/CameraDevice;

    .line 158
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$2;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$400(Lcom/mediatek/emcamera/CaptureActivity;)V

    .line 159
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$2;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$500(Lcom/mediatek/emcamera/CaptureActivity;)Lcom/mediatek/emcamera/CaptureActivity$MainHandler;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->sendEmptyMessage(I)Z

    .line 160
    return-void
.end method
