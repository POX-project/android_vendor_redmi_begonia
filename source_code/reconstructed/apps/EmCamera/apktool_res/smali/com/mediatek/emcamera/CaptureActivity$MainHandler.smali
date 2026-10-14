.class Lcom/mediatek/emcamera/CaptureActivity$MainHandler;
.super Landroid/os/Handler;
.source "CaptureActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/emcamera/CaptureActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "MainHandler"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/emcamera/CaptureActivity;


# direct methods
.method private constructor <init>(Lcom/mediatek/emcamera/CaptureActivity;)V
    .locals 0

    .line 259
    iput-object p1, p0, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mediatek/emcamera/CaptureActivity;Lcom/mediatek/emcamera/CaptureActivity$1;)V
    .locals 0
    .param p1, "x0"    # Lcom/mediatek/emcamera/CaptureActivity;
    .param p2, "x1"    # Lcom/mediatek/emcamera/CaptureActivity$1;

    .line 259
    invoke-direct {p0, p1}, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;-><init>(Lcom/mediatek/emcamera/CaptureActivity;)V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 3
    .param p1, "msg"    # Landroid/os/Message;

    .line 262
    iget v0, p1, Landroid/os/Message;->what:I

    const/16 v1, 0x3ea

    const/4 v2, 0x1

    if-eqz v0, :cond_2

    if-eq v0, v2, :cond_0

    goto :goto_0

    .line 271
    :cond_0
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$1000(Lcom/mediatek/emcamera/CaptureActivity;)Lcom/mediatek/emcamera/GisCaliTask;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    .line 272
    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$1000(Lcom/mediatek/emcamera/CaptureActivity;)Lcom/mediatek/emcamera/GisCaliTask;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/emcamera/GisCaliTask;->getGisStatus()I

    move-result v0

    if-eq v0, v1, :cond_4

    .line 273
    :cond_1
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$1100(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/widget/Button;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 274
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$1100(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/widget/Button;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    goto :goto_0

    .line 264
    :cond_2
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$1000(Lcom/mediatek/emcamera/CaptureActivity;)Lcom/mediatek/emcamera/GisCaliTask;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    .line 265
    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$1000(Lcom/mediatek/emcamera/CaptureActivity;)Lcom/mediatek/emcamera/GisCaliTask;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mediatek/emcamera/GisCaliTask;->getGisStatus()I

    move-result v0

    if-eq v0, v1, :cond_4

    .line 266
    :cond_3
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$1100(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/widget/Button;

    move-result-object v0

    iget-object v1, p0, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    .line 267
    iget-object v0, p0, Lcom/mediatek/emcamera/CaptureActivity$MainHandler;->this$0:Lcom/mediatek/emcamera/CaptureActivity;

    invoke-static {v0}, Lcom/mediatek/emcamera/CaptureActivity;->access$1100(Lcom/mediatek/emcamera/CaptureActivity;)Landroid/widget/Button;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 280
    :cond_4
    :goto_0
    return-void
.end method
