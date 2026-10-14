.class Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$1;
.super Landroid/os/Handler;
.source "EmRadioHidlAosp.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2
    .param p1, "msg"    # Landroid/os/Message;

    .line 36
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 38
    :cond_0
    const-string v0, "EmRadioHidlAosp"

    const-string v1, "RadioProxy dead"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 39
    const/4 v0, 0x0

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->access$000(ILandroid/os/Message;)Landroid/hardware/radio/V1_3/IRadio;

    .line 40
    nop

    .line 44
    :goto_0
    return-void
.end method
