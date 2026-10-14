.class Lcom/mediatek/lbs/em2/ui/LbsFlow$5;
.super Ljava/lang/Object;
.source "LbsFlow.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsFlow;->addOnClickListener()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsFlow;)V
    .locals 0

    .line 187
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 190
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsFlow;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsFlow;->agpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->resetAgpsd()V

    return-void
.end method
