.class Lcom/mediatek/lbs/em2/ui/LbsBatch$3;
.super Ljava/lang/Object;
.source "LbsBatch.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsBatch;->initUiListeners()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsBatch;)V
    .locals 0

    .line 121
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 5

    .line 124
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-wide v0, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mPeriodSecond:J

    const-wide/16 v2, 0x1

    sub-long/2addr v0, v2

    iput-wide v0, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mPeriodSecond:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-gez v4, :cond_0

    move-wide v0, v2

    .line 125
    :cond_0
    iput-wide v0, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mPeriodSecond:J

    .line 126
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewPeriod:Landroid/widget/TextView;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Location report Period (s) : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-wide v1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mPeriodSecond:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
