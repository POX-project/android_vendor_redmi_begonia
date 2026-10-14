.class Lcom/mediatek/lbs/em2/ui/LbsBatch$2;
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

    .line 114
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4

    .line 117
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-wide v0, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mPeriodSecond:J

    const-wide/16 v2, 0x1

    add-long/2addr v0, v2

    iput-wide v0, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mPeriodSecond:J

    .line 118
    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mTextViewPeriod:Landroid/widget/TextView;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Location report Period (s) : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch$2;->this$0:Lcom/mediatek/lbs/em2/ui/LbsBatch;

    iget-wide v1, p0, Lcom/mediatek/lbs/em2/ui/LbsBatch;->mPeriodSecond:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, p0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
