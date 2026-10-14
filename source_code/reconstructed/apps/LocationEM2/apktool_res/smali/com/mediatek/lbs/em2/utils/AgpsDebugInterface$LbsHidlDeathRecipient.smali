.class Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlDeathRecipient;
.super Ljava/lang/Object;
.source "AgpsDebugInterface.java"

# interfaces
.implements Landroid/os/IHwBinder$DeathRecipient;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "LbsHidlDeathRecipient"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlDeathRecipient;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public serviceDied(J)V
    .locals 0

    const-string p1, "serviceDied"

    .line 106
    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->log(Ljava/lang/Object;)V

    .line 107
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlDeathRecipient;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    const/4 p2, 0x0

    iput-object p2, p1, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->mLbsHidlClient:Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

    const/4 p1, 0x0

    :goto_0
    if-nez p1, :cond_0

    const/16 p1, 0x1f4

    .line 110
    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->msleep(I)V

    .line 111
    iget-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface$LbsHidlDeathRecipient;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;

    const-string p2, "AgpsDebugInterface"

    invoke-static {p1, p2}, Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;->access$000(Lcom/mediatek/lbs/em2/utils/AgpsDebugInterface;Ljava/lang/String;)Z

    move-result p1

    goto :goto_0

    :cond_0
    return-void
.end method
