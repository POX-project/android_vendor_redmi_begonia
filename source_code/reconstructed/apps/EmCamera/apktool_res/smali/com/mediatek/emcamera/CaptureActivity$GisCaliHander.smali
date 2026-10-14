.class Lcom/mediatek/emcamera/CaptureActivity$GisCaliHander;
.super Landroid/os/Handler;
.source "CaptureActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/emcamera/CaptureActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "GisCaliHander"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/emcamera/CaptureActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/emcamera/CaptureActivity;)V
    .locals 0

    .line 506
    iput-object p1, p0, Lcom/mediatek/emcamera/CaptureActivity$GisCaliHander;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/emcamera/CaptureActivity;Lcom/mediatek/emcamera/CaptureActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;
    .param p2, "x1"    # Lcom/mediatek/emcamera/CaptureActivity$1;

    .line 506
    invoke-direct {p0, p1}, Lcom/mediatek/emcamera/CaptureActivity$GisCaliHander;-><init>(Lcom/mediatek/emcamera/CaptureActivity;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 509
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0x258

    if-eq v0, v1, :cond_1

    const/16 v1, 0x259

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 516
    :cond_0
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$GisCaliHander;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$1100(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/widget/Button;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 517
    invoke-static {}, Lcom/mediatek/emcamera/CaptureActivity;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "GIS Cali done"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 518
    goto :goto_0

    .line 511
    :cond_1
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$GisCaliHander;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$1400(Lcom/mediatek/emcamera/CaptureActivity;)V

    .line 512
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$GisCaliHander;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$1500(Lcom/mediatek/emcamera/CaptureActivity;)Lcom/mediatek/emcamera/AutoFitTextureView;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mediatek/emcamera/AutoFitTextureView;->getWidth()I

    move-result v1

    iget-object v2, p0, Lcom/mediatek/emcamera/CaptureActivity$GisCaliHander;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v2}, Lcom/mediatek/emcamera/CaptureActivity;->access$1500(Lcom/mediatek/emcamera/CaptureActivity;)Lcom/mediatek/emcamera/AutoFitTextureView;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/emcamera/AutoFitTextureView;->getHeight()I

    move-result v2

    invoke-static {v0, v1, v2}, Lcom/mediatek/emcamera/CaptureActivity;->access$100(Lcom/mediatek/emcamera/CaptureActivity;II)V

    .line 513
    invoke-static {}, Lcom/mediatek/emcamera/CaptureActivity;->access$000()Ljava/lang/String;

    move-result-object v0

    const-string v1, "GIS Cali start preview"

    invoke-static {v0, v1}, Lcom/mediatek/emcamera/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 514
    nop

    .line 522
    :goto_0
    return-void
.end method
