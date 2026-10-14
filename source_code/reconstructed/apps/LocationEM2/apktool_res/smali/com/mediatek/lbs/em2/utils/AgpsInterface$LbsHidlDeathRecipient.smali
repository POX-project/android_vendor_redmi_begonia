.class Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlDeathRecipient;
.super Ljava/lang/Object;
.source "AgpsInterface.java"

# interfaces
.implements Landroid/os/IHwBinder$DeathRecipient;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/utils/AgpsInterface;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "LbsHidlDeathRecipient"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/utils/AgpsInterface;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/utils/AgpsInterface;)V
    .locals 0

    .line 241
    iput-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlDeathRecipient;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public serviceDied(J)V
    .locals 0

    const-string p1, "serviceDied"

    .line 244
    invoke-static {p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->log(Ljava/lang/String;)V

    .line 245
    iget-object p0, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface$LbsHidlDeathRecipient;->this$0:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->mLbsHidlClient:Lvendor/mediatek/hardware/lbs/V1_0/ILbs;

    return-void
.end method
