.class final Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp$CapRadioProxyDeathRecipient;
.super Ljava/lang/Object;
.source "EmRadioHidlAosp.java"

# interfaces
.implements Landroid/os/IHwBinder$DeathRecipient;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "CapRadioProxyDeathRecipient"
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 122
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public serviceDied(J)V
    .locals 4
    .param p1, "cookie"    # J

    .line 125
    invoke-static {}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->access$100()Landroid/os/Handler;

    move-result-object v0

    invoke-static {}, Lcom/mediatek/engineermode/aospradio/EmRadioHidlAosp;->access$100()Landroid/os/Handler;

    move-result-object v1

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    const/4 v3, 0x1

    invoke-virtual {v1, v3, v2}, Landroid/os/Handler;->obtainMessage(ILjava/lang/Object;)Landroid/os/Message;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    .line 126
    return-void
.end method
