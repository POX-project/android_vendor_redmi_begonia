.class Lcom/mediatek/lbs/em2/ui/LbsRawData$11;
.super Landroid/os/Handler;
.source "LbsRawData.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsRawData;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V
    .locals 0

    .line 420
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$11;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    .line 422
    iget v0, p1, Landroid/os/Message;->what:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 436
    :cond_0
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_3

    .line 437
    check-cast p1, Ljava/lang/String;

    .line 438
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$11;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mTextViewLogAntenna:Landroid/widget/TextView;

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 430
    :cond_1
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_3

    .line 431
    check-cast p1, Ljava/lang/String;

    .line 432
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$11;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mTextViewLogNavi:Landroid/widget/TextView;

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    .line 424
    :cond_2
    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    if-eqz p1, :cond_3

    .line 425
    check-cast p1, Ljava/lang/String;

    .line 426
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$11;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData;->mTextViewLogMeas:Landroid/widget/TextView;

    invoke-virtual {p0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_3
    :goto_0
    return-void
.end method
